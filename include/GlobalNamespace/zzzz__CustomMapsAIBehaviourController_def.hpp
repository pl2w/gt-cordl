#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsAIBehaviourController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__AgentBehaviours_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsAIBehaviourController)
namespace GT_CustomMapSupportRuntime {
class AIAgent;
}
namespace GT_CustomMapSupportRuntime {
struct AgentBehaviours;
}
namespace GT_CustomMapSupportRuntime {
struct NavAgentType;
}
namespace GlobalNamespace {
struct CustomMapsAIBehaviourController_CustomMapsAIBehaviour;
}
namespace GlobalNamespace {
class CustomMapsBehaviourBase;
}
namespace GlobalNamespace {
class GRAttributes;
}
namespace GlobalNamespace {
class GRPlayer;
}
namespace GlobalNamespace {
class GameAgent;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsAIBehaviourController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsAIBehaviourController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsAIBehaviourController*, "", "CustomMapsAIBehaviourController");
// Dependencies GT_CustomMapSupportRuntime.AgentBehaviours, UnityEngine.Animator, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.RaycastHit
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsAIBehaviourController
class CORDL_TYPE CustomMapsAIBehaviourController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CustomMapsAIBehaviour = ::GlobalNamespace::CustomMapsAIBehaviourController_CustomMapsAIBehaviour;

 __declspec(property(get=get_TargetPlayer, put=set_TargetPlayer)) ::UnityW<::GlobalNamespace::GRPlayer>  TargetPlayer;

/// @brief Field <TargetPlayer>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__TargetPlayer_k__BackingField, put=__cordl_internal_set__TargetPlayer_k__BackingField)) ::UnityW<::GlobalNamespace::GRPlayer>  _TargetPlayer_k__BackingField;

/// @brief Field agent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_agent, put=__cordl_internal_set_agent)) ::UnityW<::GlobalNamespace::GameAgent>  agent;

/// @brief Field allowTargetingTaggedPlayers, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowTargetingTaggedPlayers, put=__cordl_internal_set_allowTargetingTaggedPlayers)) bool  allowTargetingTaggedPlayers;

/// @brief Field animators, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_animators, put=__cordl_internal_set_animators)) ::ArrayW<::UnityW<::UnityEngine::Animator>>  animators;

/// @brief Field attributes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::UnityW<::GlobalNamespace::GRAttributes>  attributes;

/// @brief Field behaviourDict, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_behaviourDict, put=__cordl_internal_set_behaviourDict)) ::System::Collections::Generic::Dictionary_2<::GT_CustomMapSupportRuntime::AgentBehaviours,::GlobalNamespace::CustomMapsBehaviourBase*>*  behaviourDict;

/// @brief Field currentBehaviour, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentBehaviour, put=__cordl_internal_set_currentBehaviour)) ::GT_CustomMapSupportRuntime::AgentBehaviours  currentBehaviour;

/// @brief Field currentBehaviourIndex, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentBehaviourIndex, put=__cordl_internal_set_currentBehaviourIndex)) int32_t  currentBehaviourIndex;

/// @brief Field entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field luaAgentID, offset 0x40, size 0x2 
 __declspec(property(get=__cordl_internal_get_luaAgentID, put=__cordl_internal_set_luaAgentID)) int16_t  luaAgentID;

/// @brief Field movementSpeedParamIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_movementSpeedParamIndex, put=setStaticF_movementSpeedParamIndex)) int32_t  movementSpeedParamIndex;

/// @brief Field tempRigs, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempRigs, put=__cordl_internal_set_tempRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  tempRigs;

/// @brief Field usedBehaviours, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_usedBehaviours, put=__cordl_internal_set_usedBehaviours)) ::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>*  usedBehaviours;

/// @brief Field visibilityHits, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_visibilityHits, put=setStaticF_visibilityHits)) ::ArrayW<::UnityEngine::RaycastHit>  visibilityHits;

/// @brief Field visibilityLayerMask, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_visibilityLayerMask, put=__cordl_internal_set_visibilityLayerMask)) ::UnityEngine::LayerMask  visibilityLayerMask;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Method Awake, addr 0x59c34ec, size 0x148, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearTarget, addr 0x59c2008, size 0xc, virtual false, abstract: false, final false
inline void ClearTarget() ;

/// @brief Method FindBestTarget, addr 0x59c28b0, size 0x51c, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRPlayer> FindBestTarget(::UnityEngine::Vector3  sourcePos, float_t  maxRange, float_t  maxRangeSq, float_t  minDotVal) ;

/// @brief Method GetNavAgentType, addr 0x59c4420, size 0x154, virtual false, abstract: false, final false
inline int32_t GetNavAgentType(::GT_CustomMapSupportRuntime::NavAgentType  navType) ;

/// @brief Method InitAnimators, addr 0x59c3a98, size 0x68, virtual false, abstract: false, final false
inline void InitAnimators() ;

/// @brief Method IsAnimationPlaying, addr 0x59c1d44, size 0xf4, virtual false, abstract: false, final false
inline bool IsAnimationPlaying(::StringW  stateName) ;

/// @brief Method IsTargetInRange, addr 0x59c1b58, size 0xf0, virtual false, abstract: false, final false
inline bool IsTargetInRange(::UnityEngine::Vector3  startPos, ::GlobalNamespace::GRPlayer*  target, float_t  maxRangeSq, ::by_ref<::UnityEngine::Vector3>  toTarget) ;

/// @brief Method IsTargetVisible, addr 0x59c17a8, size 0x3b0, virtual false, abstract: false, final false
inline bool IsTargetVisible(::UnityEngine::Vector3  startPos, ::GlobalNamespace::GRPlayer*  target, float_t  maxDist) ;

/// @brief Method IsTargetable, addr 0x59c1e38, size 0x1d0, virtual false, abstract: false, final false
inline bool IsTargetable(::GlobalNamespace::GRPlayer*  potentialTarget) ;

static inline ::GlobalNamespace::CustomMapsAIBehaviourController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x59c3634, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEntityDestroy, addr 0x59c4574, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x59c3e6c, size 0x2fc, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x59c4578, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  newState) ;

/// @brief Method OnNetworkBehaviourStateChanged, addr 0x59c3d70, size 0xfc, virtual false, abstract: false, final false
inline void OnNetworkBehaviourStateChanged(uint8_t  newstate) ;

/// @brief Method OnThink, addr 0x59c36dc, size 0x1f4, virtual false, abstract: false, final false
inline void OnThink() ;

/// @brief Method OnTriggerEnter, addr 0x59c3a20, size 0x78, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method PlayAnimation, addr 0x59c2710, size 0x78, virtual false, abstract: false, final false
inline void PlayAnimation(::StringW  stateName, float_t  blendTime) ;

/// @brief Method RequestDestination, addr 0x59c3188, size 0x6c, virtual false, abstract: false, final false
inline void RequestDestination(::UnityEngine::Vector3  destination) ;

/// @brief Method SetTarget, addr 0x59c3458, size 0x78, virtual false, abstract: false, final false
inline void SetTarget(::GlobalNamespace::GRPlayer*  newTarget) ;

/// @brief Method SetupBehaviours, addr 0x59c3b00, size 0x270, virtual false, abstract: false, final false
inline void SetupBehaviours(::GT_CustomMapSupportRuntime::AIAgent*  aiAgent) ;

/// @brief Method SetupNewEnemy, addr 0x59c4168, size 0x2b8, virtual false, abstract: false, final false
inline void SetupNewEnemy(::GT_CustomMapSupportRuntime::AIAgent*  newEnemy) ;

/// @brief Method StopMoving, addr 0x59c20bc, size 0x2c, virtual false, abstract: false, final false
inline void StopMoving() ;

/// @brief Method Update, addr 0x59c36c4, size 0x18, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAnimators, addr 0x59c38d0, size 0x150, virtual false, abstract: false, final false
inline void UpdateAnimators() ;

constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& __cordl_internal_get__TargetPlayer_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::GRPlayer>& __cordl_internal_get__TargetPlayer_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::GameAgent> const& __cordl_internal_get_agent() const;

constexpr ::UnityW<::GlobalNamespace::GameAgent>& __cordl_internal_get_agent() ;

constexpr bool const& __cordl_internal_get_allowTargetingTaggedPlayers() const;

constexpr bool& __cordl_internal_get_allowTargetingTaggedPlayers() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>> const& __cordl_internal_get_animators() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>>& __cordl_internal_get_animators() ;

constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& __cordl_internal_get_attributes() const;

constexpr ::UnityW<::GlobalNamespace::GRAttributes>& __cordl_internal_get_attributes() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GT_CustomMapSupportRuntime::AgentBehaviours,::GlobalNamespace::CustomMapsBehaviourBase*>* const& __cordl_internal_get_behaviourDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GT_CustomMapSupportRuntime::AgentBehaviours,::GlobalNamespace::CustomMapsBehaviourBase*>*& __cordl_internal_get_behaviourDict() ;

constexpr ::GT_CustomMapSupportRuntime::AgentBehaviours const& __cordl_internal_get_currentBehaviour() const;

constexpr ::GT_CustomMapSupportRuntime::AgentBehaviours& __cordl_internal_get_currentBehaviour() ;

constexpr int32_t const& __cordl_internal_get_currentBehaviourIndex() const;

constexpr int32_t& __cordl_internal_get_currentBehaviourIndex() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr int16_t const& __cordl_internal_get_luaAgentID() const;

constexpr int16_t& __cordl_internal_get_luaAgentID() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_tempRigs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_tempRigs() ;

constexpr ::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>* const& __cordl_internal_get_usedBehaviours() const;

constexpr ::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>*& __cordl_internal_get_usedBehaviours() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_visibilityLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_visibilityLayerMask() ;

constexpr void __cordl_internal_set__TargetPlayer_k__BackingField(::UnityW<::GlobalNamespace::GRPlayer>  value) ;

constexpr void __cordl_internal_set_agent(::UnityW<::GlobalNamespace::GameAgent>  value) ;

constexpr void __cordl_internal_set_allowTargetingTaggedPlayers(bool  value) ;

constexpr void __cordl_internal_set_animators(::ArrayW<::UnityW<::UnityEngine::Animator>>  value) ;

constexpr void __cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value) ;

constexpr void __cordl_internal_set_behaviourDict(::System::Collections::Generic::Dictionary_2<::GT_CustomMapSupportRuntime::AgentBehaviours,::GlobalNamespace::CustomMapsBehaviourBase*>*  value) ;

constexpr void __cordl_internal_set_currentBehaviour(::GT_CustomMapSupportRuntime::AgentBehaviours  value) ;

constexpr void __cordl_internal_set_currentBehaviourIndex(int32_t  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_luaAgentID(int16_t  value) ;

constexpr void __cordl_internal_set_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_usedBehaviours(::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>*  value) ;

constexpr void __cordl_internal_set_visibilityLayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method .ctor, addr 0x59c457c, size 0x13c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_movementSpeedParamIndex() ;

static inline ::ArrayW<::UnityEngine::RaycastHit> getStaticF_visibilityHits() ;

/// [CompilerGenerated]
/// @brief Method get_TargetPlayer, addr 0x59c34e4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRPlayer> get_TargetPlayer() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

static inline void setStaticF_movementSpeedParamIndex(int32_t  value) ;

static inline void setStaticF_visibilityHits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

/// [CompilerGenerated]
/// @brief Method set_TargetPlayer, addr 0x59c34dc, size 0x8, virtual false, abstract: false, final false
inline void set_TargetPlayer(::GlobalNamespace::GRPlayer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsAIBehaviourController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsAIBehaviourController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsAIBehaviourController(CustomMapsAIBehaviourController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsAIBehaviourController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsAIBehaviourController(CustomMapsAIBehaviourController const& ) = delete;

/// @brief Field BEHAVIOUR_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  BEHAVIOUR_COUNT{static_cast<int32_t>(0x3)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2676};

/// @brief Field entity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entity;

/// @brief Field agent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameAgent>  ___agent;

/// @brief Field attributes, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRAttributes>  ___attributes;

/// @brief Field animators, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Animator>>  ___animators;

/// @brief Field luaAgentID, offset: 0x40, size: 0x2, def value: None
 int16_t  ___luaAgentID;

/// @brief Field tempRigs, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  ___tempRigs;

/// @brief Field visibilityLayerMask, offset: 0x50, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___visibilityLayerMask;

/// @brief Field allowTargetingTaggedPlayers, offset: 0x54, size: 0x1, def value: None
 bool  ___allowTargetingTaggedPlayers;

/// [CompilerGenerated]
/// @brief Field <TargetPlayer>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPlayer>  ____TargetPlayer_k__BackingField;

/// @brief Field behaviourDict, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GT_CustomMapSupportRuntime::AgentBehaviours,::GlobalNamespace::CustomMapsBehaviourBase*>*  ___behaviourDict;

/// @brief Field usedBehaviours, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>*  ___usedBehaviours;

/// @brief Field currentBehaviour, offset: 0x70, size: 0x4, def value: None
 ::GT_CustomMapSupportRuntime::AgentBehaviours  ___currentBehaviour;

/// @brief Field currentBehaviourIndex, offset: 0x74, size: 0x4, def value: None
 int32_t  ___currentBehaviourIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsAIBehaviourController, ___entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAIBehaviourController, ___agent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAIBehaviourController, ___attributes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAIBehaviourController, ___animators) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAIBehaviourController, ___luaAgentID) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAIBehaviourController, ___tempRigs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAIBehaviourController, ___visibilityLayerMask) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAIBehaviourController, ___allowTargetingTaggedPlayers) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAIBehaviourController, ____TargetPlayer_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAIBehaviourController, ___behaviourDict) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAIBehaviourController, ___usedBehaviours) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAIBehaviourController, ___currentBehaviour) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAIBehaviourController, ___currentBehaviourIndex) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsAIBehaviourController) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
