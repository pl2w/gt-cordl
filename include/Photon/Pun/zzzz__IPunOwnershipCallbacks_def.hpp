#pragma once
// IWYU pragma private; include "Photon/Pun/IPunOwnershipCallbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPunOwnershipCallbacks)
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Photon::Pun {
class IPunOwnershipCallbacks;
}
// Write type traits
MARK_REF_T(::Photon::Pun::IPunOwnershipCallbacks*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::IPunOwnershipCallbacks*, "Photon.Pun", "IPunOwnershipCallbacks");
// Dependencies 
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.IPunOwnershipCallbacks
class CORDL_TYPE IPunOwnershipCallbacks {
public:
// Declarations
/// @brief Method OnOwnershipRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnOwnershipRequest(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  requestingPlayer) ;

/// @brief Method OnOwnershipTransferFailed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnOwnershipTransferFailed(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  senderOfFailedRequest) ;

/// @brief Method OnOwnershipTransfered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnOwnershipTransfered(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  previousOwner) ;

// Ctor Parameters [CppParam { name: "", ty: "IPunOwnershipCallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPunOwnershipCallbacks(IPunOwnershipCallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29697};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Pun
