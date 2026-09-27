#pragma once
// IWYU pragma private; include "Photon/Pun/IOnPhotonViewControllerChange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IOnPhotonViewControllerChange)
namespace Photon::Pun {
class IPhotonViewCallback;
}
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Photon::Pun {
class IOnPhotonViewControllerChange;
}
// Write type traits
MARK_REF_T(::Photon::Pun::IOnPhotonViewControllerChange*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::IOnPhotonViewControllerChange*, "Photon.Pun", "IOnPhotonViewControllerChange");
// Dependencies 
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.IOnPhotonViewControllerChange
class CORDL_TYPE IOnPhotonViewControllerChange {
public:
// Declarations
/// @brief Convert operator to "::Photon::Pun::IPhotonViewCallback"
constexpr operator  ::Photon::Pun::IPhotonViewCallback*() noexcept;

/// @brief Method OnControllerChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnControllerChange(::Photon::Realtime::Player*  newController, ::Photon::Realtime::Player*  previousController) ;

/// @brief Convert to "::Photon::Pun::IPhotonViewCallback"
constexpr ::Photon::Pun::IPhotonViewCallback* i___Photon__Pun__IPhotonViewCallback() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IOnPhotonViewControllerChange", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IOnPhotonViewControllerChange(IOnPhotonViewControllerChange const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29695};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Pun
