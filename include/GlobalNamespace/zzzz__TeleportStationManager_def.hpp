#pragma once
// IWYU pragma private; include "GlobalNamespace/TeleportStationManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TeleportStationManager)
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
class GorillaFriendCollider;
}
namespace GlobalNamespace {
class TeleportStationManager_FPTPort;
}
namespace GlobalNamespace {
class TeleportStationManager_TPTPort;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaNetworking {
class GorillaNetworkJoinTrigger;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TeleportStationManager;
}
namespace GlobalNamespace {
class TeleportStationManager_FPTPort;
}
namespace GlobalNamespace {
class TeleportStationManager_TPTPort;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TeleportStationManager*);
MARK_REF_T(::GlobalNamespace::TeleportStationManager_FPTPort*);
MARK_REF_T(::GlobalNamespace::TeleportStationManager_TPTPort*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TeleportStationManager*, "", "TeleportStationManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TeleportStationManager_FPTPort*, "", "TeleportStationManager/FPTPort");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TeleportStationManager_TPTPort*, "", "TeleportStationManager/TPTPort");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TeleportStationManager
class CORDL_TYPE TeleportStationManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FPTPort = ::GlobalNamespace::TeleportStationManager_FPTPort;

using TPTPort = ::GlobalNamespace::TeleportStationManager_TPTPort;

/// @brief Field __instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___instance, put=setStaticF___instance)) ::UnityW<::GlobalNamespace::TeleportStationManager>  __instance;

/// @brief Field effectsIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_effectsIndex, put=__cordl_internal_set_effectsIndex)) int32_t  effectsIndex;

/// @brief Field firstPersonEffect, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_firstPersonEffect, put=__cordl_internal_set_firstPersonEffect)) ::UnityW<::UnityEngine::GameObject>  firstPersonEffect;

/// @brief Field firstPersonTPort, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_firstPersonTPort, put=__cordl_internal_set_firstPersonTPort)) ::GlobalNamespace::TeleportStationManager_FPTPort*  firstPersonTPort;

/// @brief Field ready, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_ready, put=__cordl_internal_set_ready)) bool  ready;

/// @brief Field thirdPersonEffectEnds, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_thirdPersonEffectEnds, put=__cordl_internal_set_thirdPersonEffectEnds)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  thirdPersonEffectEnds;

/// @brief Field thirdPersonEffectStarts, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_thirdPersonEffectStarts, put=__cordl_internal_set_thirdPersonEffectStarts)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  thirdPersonEffectStarts;

/// @brief Field thirdPersonTPort, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_thirdPersonTPort, put=__cordl_internal_set_thirdPersonTPort)) ::System::Collections::Generic::List_1<::GlobalNamespace::TeleportStationManager_TPTPort*>*  thirdPersonTPort;

/// @brief Method Awake, addr 0x5add1dc, size 0xb4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FirstPersonTeleport, addr 0x5adca20, size 0x130, virtual false, abstract: false, final false
inline void FirstPersonTeleport(::UnityEngine::Vector3  targetPos, float_t  targetRot, ::UnityEngine::Vector3  targetSlop, ::GlobalNamespace::GTZone  teleportToZone, ::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  destinationFriendCollider, ::GorillaNetworking::GorillaNetworkJoinTrigger*  destinationJoinTrigger, int32_t  effectTime) ;

/// @brief Method Initialize, addr 0x5add290, size 0x23c, virtual false, abstract: false, final false
static inline void Initialize(::UnityEngine::GameObject*  fPersonEffect, ::UnityEngine::GameObject*  thirdPersonEffectStart, ::UnityEngine::GameObject*  thirdPersonEffectEnd) ;

static inline ::GlobalNamespace::TeleportStationManager* New_ctor() ;

/// @brief Method ThirdPersonTeleport, addr 0x5adce2c, size 0x160, virtual false, abstract: false, final false
inline void ThirdPersonTeleport(::GlobalNamespace::VRRig*  rig, int32_t  effectTime) ;

/// @brief Method Update, addr 0x5add4cc, size 0x150, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_effectsIndex() const;

constexpr int32_t& __cordl_internal_get_effectsIndex() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_firstPersonEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_firstPersonEffect() ;

constexpr ::GlobalNamespace::TeleportStationManager_FPTPort* const& __cordl_internal_get_firstPersonTPort() const;

constexpr ::GlobalNamespace::TeleportStationManager_FPTPort*& __cordl_internal_get_firstPersonTPort() ;

constexpr bool const& __cordl_internal_get_ready() const;

constexpr bool& __cordl_internal_get_ready() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_thirdPersonEffectEnds() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_thirdPersonEffectEnds() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_thirdPersonEffectStarts() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_thirdPersonEffectStarts() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TeleportStationManager_TPTPort*>* const& __cordl_internal_get_thirdPersonTPort() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TeleportStationManager_TPTPort*>*& __cordl_internal_get_thirdPersonTPort() ;

constexpr void __cordl_internal_set_effectsIndex(int32_t  value) ;

constexpr void __cordl_internal_set_firstPersonEffect(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_firstPersonTPort(::GlobalNamespace::TeleportStationManager_FPTPort*  value) ;

constexpr void __cordl_internal_set_ready(bool  value) ;

constexpr void __cordl_internal_set_thirdPersonEffectEnds(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_thirdPersonEffectStarts(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_thirdPersonTPort(::System::Collections::Generic::List_1<::GlobalNamespace::TeleportStationManager_TPTPort*>*  value) ;

/// @brief Method .ctor, addr 0x5addf98, size 0xd4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::TeleportStationManager> getStaticF___instance() ;

/// @brief Method get_Instance, addr 0x5add194, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::TeleportStationManager> get_Instance() ;

static inline void setStaticF___instance(::UnityW<::GlobalNamespace::TeleportStationManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportStationManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportStationManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportStationManager(TeleportStationManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportStationManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportStationManager(TeleportStationManager const& ) = delete;

/// @brief Field _3RD_PERSON_EFFECTS_CACHE_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  _3RD_PERSON_EFFECTS_CACHE_SIZE{static_cast<int32_t>(0x14)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3429};

/// @brief Field thirdPersonEffectStarts, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___thirdPersonEffectStarts;

/// @brief Field thirdPersonEffectEnds, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___thirdPersonEffectEnds;

/// @brief Field firstPersonEffect, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___firstPersonEffect;

/// @brief Field effectsIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ___effectsIndex;

/// @brief Field firstPersonTPort, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::TeleportStationManager_FPTPort*  ___firstPersonTPort;

/// @brief Field thirdPersonTPort, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::TeleportStationManager_TPTPort*>*  ___thirdPersonTPort;

/// @brief Field ready, offset: 0x50, size: 0x1, def value: None
 bool  ___ready;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TeleportStationManager, ___thirdPersonEffectStarts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager, ___thirdPersonEffectEnds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager, ___firstPersonEffect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager, ___effectsIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager, ___firstPersonTPort) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager, ___thirdPersonTPort) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager, ___ready) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TeleportStationManager) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TeleportStationManager/TPTPort
class CORDL_TYPE TeleportStationManager_TPTPort : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Done)) bool  Done;

 __declspec(property(get=get_EffectTimeRemains)) float_t  EffectTimeRemains;

/// @brief Field effectTimeRemains, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_effectTimeRemains, put=__cordl_internal_set_effectTimeRemains)) float_t  effectTimeRemains;

/// @brief Field endEffect, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_endEffect, put=__cordl_internal_set_endEffect)) ::UnityW<::UnityEngine::GameObject>  endEffect;

/// @brief Field phase, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_phase, put=__cordl_internal_set_phase)) int32_t  phase;

/// @brief Field rig, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field startEffect, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_startEffect, put=__cordl_internal_set_startEffect)) ::UnityW<::UnityEngine::GameObject>  startEffect;

static inline ::GlobalNamespace::TeleportStationManager_TPTPort* New_ctor(::GlobalNamespace::VRRig*  rig, int32_t  effectTime, ::UnityEngine::GameObject*  startEffect, ::UnityEngine::GameObject*  endEffect) ;

/// @brief Method Tick, addr 0x5addd1c, size 0x124, virtual false, abstract: false, final false
inline void Tick(float_t  deltaTime) ;

constexpr float_t const& __cordl_internal_get_effectTimeRemains() const;

constexpr float_t& __cordl_internal_get_effectTimeRemains() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_endEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_endEffect() ;

constexpr int32_t const& __cordl_internal_get_phase() const;

constexpr int32_t& __cordl_internal_get_phase() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_startEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_startEffect() ;

constexpr void __cordl_internal_set_effectTimeRemains(float_t  value) ;

constexpr void __cordl_internal_set_endEffect(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_phase(int32_t  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_startEffect(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5adde50, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::VRRig*  rig, int32_t  effectTime, ::UnityEngine::GameObject*  startEffect, ::UnityEngine::GameObject*  endEffect) ;

/// @brief Method get_Done, addr 0x5adde40, size 0x10, virtual false, abstract: false, final false
inline bool get_Done() ;

/// @brief Method get_EffectTimeRemains, addr 0x5ade454, size 0x8, virtual false, abstract: false, final false
inline float_t get_EffectTimeRemains() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportStationManager_TPTPort() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportStationManager_TPTPort", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportStationManager_TPTPort(TeleportStationManager_TPTPort && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportStationManager_TPTPort", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportStationManager_TPTPort(TeleportStationManager_TPTPort const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3428};

/// @brief Field rig, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// @brief Field effectTimeRemains, offset: 0x18, size: 0x4, def value: None
 float_t  ___effectTimeRemains;

/// @brief Field startEffect, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___startEffect;

/// @brief Field endEffect, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___endEffect;

/// @brief Field phase, offset: 0x30, size: 0x4, def value: None
 int32_t  ___phase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TeleportStationManager_TPTPort, ___rig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager_TPTPort, ___effectTimeRemains) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager_TPTPort, ___startEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager_TPTPort, ___endEffect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager_TPTPort, ___phase) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TeleportStationManager_TPTPort) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GTZone, System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: TeleportStationManager/FPTPort
class CORDL_TYPE TeleportStationManager_FPTPort : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Done)) bool  Done;

 __declspec(property(get=get_EffectTimeRemains)) float_t  EffectTimeRemains;

 __declspec(property(get=get_Phase)) int32_t  Phase;

/// @brief Field destinationFriendCollider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_destinationFriendCollider, put=__cordl_internal_set_destinationFriendCollider)) ::UnityW<::GlobalNamespace::GorillaFriendCollider>  destinationFriendCollider;

/// @brief Field destinationJoinTrigger, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_destinationJoinTrigger, put=__cordl_internal_set_destinationJoinTrigger)) ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  destinationJoinTrigger;

/// @brief Field effectTime, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_effectTime, put=__cordl_internal_set_effectTime)) float_t  effectTime;

/// @brief Field effectTimeRemains, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_effectTimeRemains, put=__cordl_internal_set_effectTimeRemains)) float_t  effectTimeRemains;

/// @brief Field firstPersonEffect, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_firstPersonEffect, put=__cordl_internal_set_firstPersonEffect)) ::UnityW<::UnityEngine::GameObject>  firstPersonEffect;

/// @brief Field phase, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_phase, put=__cordl_internal_set_phase)) int32_t  phase;

/// @brief Field sourceFriendCollider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceFriendCollider, put=__cordl_internal_set_sourceFriendCollider)) ::UnityW<::GlobalNamespace::GorillaFriendCollider>  sourceFriendCollider;

/// @brief Field targetPos, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetPos, put=__cordl_internal_set_targetPos)) ::UnityEngine::Vector3  targetPos;

/// @brief Field targetRot, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetRot, put=__cordl_internal_set_targetRot)) float_t  targetRot;

/// @brief Field targetSlop, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetSlop, put=__cordl_internal_set_targetSlop)) ::UnityEngine::Vector3  targetSlop;

/// @brief Field teleportToZone, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_teleportToZone, put=__cordl_internal_set_teleportToZone)) ::GlobalNamespace::GTZone  teleportToZone;

/// @brief Method LowestActorNumberInFriendCollider, addr 0x5ade07c, size 0x1c8, virtual false, abstract: false, final false
inline int32_t LowestActorNumberInFriendCollider() ;

static inline ::GlobalNamespace::TeleportStationManager_FPTPort* New_ctor(::UnityEngine::Vector3  targetPos, float_t  targetRot, ::UnityEngine::Vector3  targetSlop, ::GlobalNamespace::GTZone  teleportToZone, ::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  destinationFriendCollider, ::GorillaNetworking::GorillaNetworkJoinTrigger*  destinationJoinTrigger, int32_t  effectTime, ::UnityEngine::GameObject*  firstPersonEffect) ;

/// @brief Method SetupFriendGroup, addr 0x5ade244, size 0x210, virtual false, abstract: false, final false
inline void SetupFriendGroup(::GlobalNamespace::GorillaFriendCollider*  source, ::GlobalNamespace::GorillaFriendCollider*  destination, bool  refreshFriendList) ;

/// @brief Method Tick, addr 0x5add61c, size 0x6f0, virtual false, abstract: false, final false
inline void Tick(float_t  deltaTime, ::UnityEngine::GameObject*  go) ;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& __cordl_internal_get_destinationFriendCollider() const;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& __cordl_internal_get_destinationFriendCollider() ;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& __cordl_internal_get_destinationJoinTrigger() const;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& __cordl_internal_get_destinationJoinTrigger() ;

constexpr float_t const& __cordl_internal_get_effectTime() const;

constexpr float_t& __cordl_internal_get_effectTime() ;

constexpr float_t const& __cordl_internal_get_effectTimeRemains() const;

constexpr float_t& __cordl_internal_get_effectTimeRemains() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_firstPersonEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_firstPersonEffect() ;

constexpr int32_t const& __cordl_internal_get_phase() const;

constexpr int32_t& __cordl_internal_get_phase() ;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& __cordl_internal_get_sourceFriendCollider() const;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& __cordl_internal_get_sourceFriendCollider() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetPos() ;

constexpr float_t const& __cordl_internal_get_targetRot() const;

constexpr float_t& __cordl_internal_get_targetRot() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetSlop() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetSlop() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_teleportToZone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_teleportToZone() ;

constexpr void __cordl_internal_set_destinationFriendCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value) ;

constexpr void __cordl_internal_set_destinationJoinTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value) ;

constexpr void __cordl_internal_set_effectTime(float_t  value) ;

constexpr void __cordl_internal_set_effectTimeRemains(float_t  value) ;

constexpr void __cordl_internal_set_firstPersonEffect(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_phase(int32_t  value) ;

constexpr void __cordl_internal_set_sourceFriendCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value) ;

constexpr void __cordl_internal_set_targetPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_targetRot(float_t  value) ;

constexpr void __cordl_internal_set_targetSlop(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_teleportToZone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x5addebc, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  targetPos, float_t  targetRot, ::UnityEngine::Vector3  targetSlop, ::GlobalNamespace::GTZone  teleportToZone, ::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  destinationFriendCollider, ::GorillaNetworking::GorillaNetworkJoinTrigger*  destinationJoinTrigger, int32_t  effectTime, ::UnityEngine::GameObject*  firstPersonEffect) ;

/// @brief Method get_Done, addr 0x5addd0c, size 0x10, virtual false, abstract: false, final false
inline bool get_Done() ;

/// @brief Method get_EffectTimeRemains, addr 0x5ade074, size 0x8, virtual false, abstract: false, final false
inline float_t get_EffectTimeRemains() ;

/// @brief Method get_Phase, addr 0x5ade06c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Phase() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportStationManager_FPTPort() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportStationManager_FPTPort", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportStationManager_FPTPort(TeleportStationManager_FPTPort && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportStationManager_FPTPort", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportStationManager_FPTPort(TeleportStationManager_FPTPort const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3427};

/// @brief Field targetPos, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetPos;

/// @brief Field targetRot, offset: 0x1c, size: 0x4, def value: None
 float_t  ___targetRot;

/// @brief Field targetSlop, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetSlop;

/// @brief Field teleportToZone, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___teleportToZone;

/// @brief Field sourceFriendCollider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaFriendCollider>  ___sourceFriendCollider;

/// @brief Field destinationFriendCollider, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaFriendCollider>  ___destinationFriendCollider;

/// @brief Field destinationJoinTrigger, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  ___destinationJoinTrigger;

/// @brief Field effectTime, offset: 0x48, size: 0x4, def value: None
 float_t  ___effectTime;

/// @brief Field effectTimeRemains, offset: 0x4c, size: 0x4, def value: None
 float_t  ___effectTimeRemains;

/// @brief Field firstPersonEffect, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___firstPersonEffect;

/// @brief Field phase, offset: 0x58, size: 0x4, def value: None
 int32_t  ___phase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TeleportStationManager_FPTPort, ___targetPos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager_FPTPort, ___targetRot) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager_FPTPort, ___targetSlop) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager_FPTPort, ___teleportToZone) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager_FPTPort, ___sourceFriendCollider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager_FPTPort, ___destinationFriendCollider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager_FPTPort, ___destinationJoinTrigger) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager_FPTPort, ___effectTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager_FPTPort, ___effectTimeRemains) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager_FPTPort, ___firstPersonEffect) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationManager_FPTPort, ___phase) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TeleportStationManager_FPTPort) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
