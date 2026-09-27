#pragma once
// IWYU pragma private; include "Photon/Pun/IOnPhotonViewPreNetDestroy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IOnPhotonViewPreNetDestroy)
namespace Photon::Pun {
class IPhotonViewCallback;
}
namespace Photon::Pun {
class PhotonView;
}
// Forward declare root types
namespace Photon::Pun {
class IOnPhotonViewPreNetDestroy;
}
// Write type traits
MARK_REF_T(::Photon::Pun::IOnPhotonViewPreNetDestroy*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::IOnPhotonViewPreNetDestroy*, "Photon.Pun", "IOnPhotonViewPreNetDestroy");
// Dependencies 
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.IOnPhotonViewPreNetDestroy
class CORDL_TYPE IOnPhotonViewPreNetDestroy {
public:
// Declarations
/// @brief Convert operator to "::Photon::Pun::IPhotonViewCallback"
constexpr operator  ::Photon::Pun::IPhotonViewCallback*() noexcept;

/// @brief Method OnPreNetDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPreNetDestroy(::Photon::Pun::PhotonView*  rootView) ;

/// @brief Convert to "::Photon::Pun::IPhotonViewCallback"
constexpr ::Photon::Pun::IPhotonViewCallback* i___Photon__Pun__IPhotonViewCallback() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IOnPhotonViewPreNetDestroy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IOnPhotonViewPreNetDestroy(IOnPhotonViewPreNetDestroy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29693};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Pun
