#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/RCCosmeticNetworkSync.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__RCCosmeticNetworkSync_SyncedState_def.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
CORDL_MODULE_EXPORT(RCCosmeticNetworkSync)
namespace GlobalNamespace {
struct RCCosmeticNetworkSync_SyncedState;
}
namespace GorillaTag::Cosmetics {
class RCRemoteHoldable;
}
namespace Photon::Pun {
class IPunInstantiateMagicCallback;
}
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class RCCosmeticNetworkSync;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::RCCosmeticNetworkSync*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::RCCosmeticNetworkSync*, "GorillaTag.Cosmetics", "RCCosmeticNetworkSync");
// Dependencies GorillaTag.Cosmetics.RCCosmeticNetworkSync::SyncedState, Photon.Pun.MonoBehaviourPun
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.RCCosmeticNetworkSync
class CORDL_TYPE RCCosmeticNetworkSync : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
using SyncedState = ::GlobalNamespace::RCCosmeticNetworkSync_SyncedState;

/// @brief Field rcRemote, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_rcRemote, put=__cordl_internal_set_rcRemote)) ::UnityW<::GorillaTag::Cosmetics::RCRemoteHoldable>  rcRemote;

/// @brief Field syncedState, offset 0x28, size 0x24 
 __declspec(property(get=__cordl_internal_get_syncedState, put=__cordl_internal_set_syncedState)) ::GlobalNamespace::RCCosmeticNetworkSync_SyncedState  syncedState;

/// @brief Convert operator to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr operator  ::Photon::Pun::IPunInstantiateMagicCallback*() noexcept;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

/// @brief Method DestroyThis, addr 0x5d67228, size 0xa0, virtual false, abstract: false, final false
inline void DestroyThis() ;

/// [PunRPC]
/// @brief Method HitRCVehicleRPC, addr 0x5d678e8, size 0x2c0, virtual false, abstract: false, final false
inline void HitRCVehicleRPC(::UnityEngine::Vector3  hitVelocity, bool  isProjectile, ::Photon::Pun::PhotonMessageInfo  info) ;

static inline ::GorillaTag::Cosmetics::RCCosmeticNetworkSync* New_ctor() ;

/// @brief Method OnPhotonInstantiate, addr 0x5d66e9c, size 0x38c, virtual true, abstract: false, final true
inline void OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnPhotonSerializeView, addr 0x5d6739c, size 0x54c, virtual true, abstract: false, final true
inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::UnityW<::GorillaTag::Cosmetics::RCRemoteHoldable> const& __cordl_internal_get_rcRemote() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::RCRemoteHoldable>& __cordl_internal_get_rcRemote() ;

constexpr ::GlobalNamespace::RCCosmeticNetworkSync_SyncedState const& __cordl_internal_get_syncedState() const;

constexpr ::GlobalNamespace::RCCosmeticNetworkSync_SyncedState& __cordl_internal_get_syncedState() ;

constexpr void __cordl_internal_set_rcRemote(::UnityW<::GorillaTag::Cosmetics::RCRemoteHoldable>  value) ;

constexpr void __cordl_internal_set_syncedState(::GlobalNamespace::RCCosmeticNetworkSync_SyncedState  value) ;

/// @brief Method .ctor, addr 0x5d67ba8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr ::Photon::Pun::IPunInstantiateMagicCallback* i___Photon__Pun__IPunInstantiateMagicCallback() noexcept;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RCCosmeticNetworkSync() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RCCosmeticNetworkSync", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RCCosmeticNetworkSync(RCCosmeticNetworkSync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RCCosmeticNetworkSync", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RCCosmeticNetworkSync(RCCosmeticNetworkSync const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4834};

/// @brief Field syncedState, offset: 0x28, size: 0x24, def value: None
 ::GlobalNamespace::RCCosmeticNetworkSync_SyncedState  ___syncedState;

/// @brief Field rcRemote, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::RCRemoteHoldable>  ___rcRemote;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::RCCosmeticNetworkSync, ___syncedState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCCosmeticNetworkSync, ___rcRemote) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::RCCosmeticNetworkSync) == 0x58, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
