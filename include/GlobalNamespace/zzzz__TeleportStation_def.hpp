#pragma once
// IWYU pragma private; include "GlobalNamespace/TeleportStation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TeleportStation)
namespace GlobalNamespace {
class GorillaFriendCollider;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GorillaNetworking {
class GorillaNetworkJoinTrigger;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TeleportStation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TeleportStation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TeleportStation*, "", "TeleportStation");
// Dependencies GTZone, UnityEngine.MonoBehaviour, UnityEngine.Vector3, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: TeleportStation
class CORDL_TYPE TeleportStation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field destinationFriendCollider, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_destinationFriendCollider, put=__cordl_internal_set_destinationFriendCollider)) ::UnityW<::GlobalNamespace::GorillaFriendCollider>  destinationFriendCollider;

/// @brief Field destinationFriendColliderRef, offset 0x60, size 0x18 
 __declspec(property(get=__cordl_internal_get_destinationFriendColliderRef, put=__cordl_internal_set_destinationFriendColliderRef)) ::GlobalNamespace::XSceneRef  destinationFriendColliderRef;

/// @brief Field destinationJoinTrigger, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_destinationJoinTrigger, put=__cordl_internal_set_destinationJoinTrigger)) ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  destinationJoinTrigger;

/// @brief Field destinationJoinTriggerRef, offset 0x78, size 0x18 
 __declspec(property(get=__cordl_internal_get_destinationJoinTriggerRef, put=__cordl_internal_set_destinationJoinTriggerRef)) ::GlobalNamespace::XSceneRef  destinationJoinTriggerRef;

/// @brief Field effectTime, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_effectTime, put=__cordl_internal_set_effectTime)) int32_t  effectTime;

/// @brief Field sourceFriendCollider, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceFriendCollider, put=__cordl_internal_set_sourceFriendCollider)) ::UnityW<::GlobalNamespace::GorillaFriendCollider>  sourceFriendCollider;

/// @brief Field sourceFriendColliderRef, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get_sourceFriendColliderRef, put=__cordl_internal_set_sourceFriendColliderRef)) ::GlobalNamespace::XSceneRef  sourceFriendColliderRef;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field targetPos, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetPos, put=__cordl_internal_set_targetPos)) ::UnityEngine::Vector3  targetPos;

/// @brief Field targetRot, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetRot, put=__cordl_internal_set_targetRot)) float_t  targetRot;

/// @brief Field targetSlop, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetSlop, put=__cordl_internal_set_targetSlop)) ::UnityEngine::Vector3  targetSlop;

/// @brief Field teleportToZone, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_teleportToZone, put=__cordl_internal_set_teleportToZone)) ::GlobalNamespace::GTZone  teleportToZone;

/// @brief Method Attempt1PTeleport, addr 0x5adc9ac, size 0x74, virtual false, abstract: false, final false
inline void Attempt1PTeleport(::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method Attempt3PTeleport, addr 0x5adcb50, size 0x2dc, virtual false, abstract: false, final false
inline void Attempt3PTeleport(::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method LowestActorNumberInFriendCollider, addr 0x5adcf8c, size 0x1c8, virtual false, abstract: false, final false
inline int32_t LowestActorNumberInFriendCollider() ;

static inline ::GlobalNamespace::TeleportStation* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5add154, size 0x38, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method Start, addr 0x5adc7ec, size 0x1c0, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& __cordl_internal_get_destinationFriendCollider() const;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& __cordl_internal_get_destinationFriendCollider() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_destinationFriendColliderRef() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_destinationFriendColliderRef() ;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& __cordl_internal_get_destinationJoinTrigger() const;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& __cordl_internal_get_destinationJoinTrigger() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_destinationJoinTriggerRef() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_destinationJoinTriggerRef() ;

constexpr int32_t const& __cordl_internal_get_effectTime() const;

constexpr int32_t& __cordl_internal_get_effectTime() ;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& __cordl_internal_get_sourceFriendCollider() const;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& __cordl_internal_get_sourceFriendCollider() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_sourceFriendColliderRef() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_sourceFriendColliderRef() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetPos() ;

constexpr float_t const& __cordl_internal_get_targetRot() const;

constexpr float_t& __cordl_internal_get_targetRot() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetSlop() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetSlop() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_teleportToZone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_teleportToZone() ;

constexpr void __cordl_internal_set_destinationFriendCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value) ;

constexpr void __cordl_internal_set_destinationFriendColliderRef(::GlobalNamespace::XSceneRef  value) ;

constexpr void __cordl_internal_set_destinationJoinTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value) ;

constexpr void __cordl_internal_set_destinationJoinTriggerRef(::GlobalNamespace::XSceneRef  value) ;

constexpr void __cordl_internal_set_effectTime(int32_t  value) ;

constexpr void __cordl_internal_set_sourceFriendCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value) ;

constexpr void __cordl_internal_set_sourceFriendColliderRef(::GlobalNamespace::XSceneRef  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_targetPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_targetRot(float_t  value) ;

constexpr void __cordl_internal_set_targetSlop(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_teleportToZone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x5add18c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportStation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportStation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportStation(TeleportStation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportStation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportStation(TeleportStation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3426};

/// [SerializeField]
/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// [SerializeField]
/// @brief Field targetPos, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetPos;

/// [SerializeField]
/// @brief Field targetRot, offset: 0x34, size: 0x4, def value: None
 float_t  ___targetRot;

/// [SerializeField]
/// @brief Field targetSlop, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetSlop;

/// [SerializeField]
/// @brief Field teleportToZone, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___teleportToZone;

/// [SerializeField]
/// @brief Field sourceFriendColliderRef, offset: 0x48, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___sourceFriendColliderRef;

/// [SerializeField]
/// @brief Field destinationFriendColliderRef, offset: 0x60, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___destinationFriendColliderRef;

/// [SerializeField]
/// @brief Field destinationJoinTriggerRef, offset: 0x78, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___destinationJoinTriggerRef;

/// @brief Field sourceFriendCollider, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaFriendCollider>  ___sourceFriendCollider;

/// @brief Field destinationFriendCollider, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaFriendCollider>  ___destinationFriendCollider;

/// @brief Field destinationJoinTrigger, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  ___destinationJoinTrigger;

/// [SerializeField]
/// @brief Field effectTime, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___effectTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TeleportStation, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStation, ___targetPos) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStation, ___targetRot) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStation, ___targetSlop) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStation, ___teleportToZone) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStation, ___sourceFriendColliderRef) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStation, ___destinationFriendColliderRef) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStation, ___destinationJoinTriggerRef) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStation, ___sourceFriendCollider) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStation, ___destinationFriendCollider) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStation, ___destinationJoinTrigger) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStation, ___effectTime) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TeleportStation) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
