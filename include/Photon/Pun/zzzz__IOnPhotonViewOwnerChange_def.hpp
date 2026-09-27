#pragma once
// IWYU pragma private; include "Photon/Pun/IOnPhotonViewOwnerChange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IOnPhotonViewOwnerChange)
namespace Photon::Pun {
class IPhotonViewCallback;
}
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Photon::Pun {
class IOnPhotonViewOwnerChange;
}
// Write type traits
MARK_REF_T(::Photon::Pun::IOnPhotonViewOwnerChange*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::IOnPhotonViewOwnerChange*, "Photon.Pun", "IOnPhotonViewOwnerChange");
// Dependencies 
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.IOnPhotonViewOwnerChange
class CORDL_TYPE IOnPhotonViewOwnerChange {
public:
// Declarations
/// @brief Convert operator to "::Photon::Pun::IPhotonViewCallback"
constexpr operator  ::Photon::Pun::IPhotonViewCallback*() noexcept;

/// @brief Method OnOwnerChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnOwnerChange(::Photon::Realtime::Player*  newOwner, ::Photon::Realtime::Player*  previousOwner) ;

/// @brief Convert to "::Photon::Pun::IPhotonViewCallback"
constexpr ::Photon::Pun::IPhotonViewCallback* i___Photon__Pun__IPhotonViewCallback() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IOnPhotonViewOwnerChange", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IOnPhotonViewOwnerChange(IOnPhotonViewOwnerChange const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29694};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Pun
