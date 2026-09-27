#pragma once
// IWYU pragma private; include "GlobalNamespace/GameAgent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameAgent)
namespace GlobalNamespace {
class GameAgentManager;
}
namespace GlobalNamespace {
class GameAgent_JumpRequestedEvent;
}
namespace GlobalNamespace {
class GameAgent_NavigationFailedEvent;
}
namespace GlobalNamespace {
class GameAgent_NavigationLinkReachedEvent;
}
namespace GlobalNamespace {
class GameAgent_StateChangedEvent;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGameAgentComponent;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::AI {
class NavMeshAgent;
}
namespace UnityEngine::AI {
struct NavMeshPathStatus;
}
namespace UnityEngine::AI {
struct OffMeshLinkData;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GameAgent;
}
namespace GlobalNamespace {
class GameAgent_JumpRequestedEvent;
}
namespace GlobalNamespace {
class GameAgent_NavigationFailedEvent;
}
namespace GlobalNamespace {
class GameAgent_NavigationLinkReachedEvent;
}
namespace GlobalNamespace {
class GameAgent_StateChangedEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameAgent*);
MARK_REF_T(::GlobalNamespace::GameAgent_JumpRequestedEvent*);
MARK_REF_T(::GlobalNamespace::GameAgent_NavigationFailedEvent*);
MARK_REF_T(::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*);
MARK_REF_T(::GlobalNamespace::GameAgent_StateChangedEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameAgent*, "", "GameAgent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameAgent_JumpRequestedEvent*, "", "GameAgent/JumpRequestedEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameAgent_NavigationFailedEvent*, "", "GameAgent/NavigationFailedEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*, "", "GameAgent/NavigationLinkReachedEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameAgent_StateChangedEvent*, "", "GameAgent/StateChangedEvent");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameAgent
class CORDL_TYPE GameAgent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using JumpRequestedEvent = ::GlobalNamespace::GameAgent_JumpRequestedEvent;

using NavigationFailedEvent = ::GlobalNamespace::GameAgent_NavigationFailedEvent;

using NavigationLinkReachedEvent = ::GlobalNamespace::GameAgent_NavigationLinkReachedEvent;

using StateChangedEvent = ::GlobalNamespace::GameAgent_StateChangedEvent;

/// @brief Field agentComponents, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_agentComponents, put=__cordl_internal_set_agentComponents)) ::System::Collections::Generic::List_1<::GlobalNamespace::IGameAgentComponent*>*  agentComponents;

/// @brief Field disableNetworkSync, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableNetworkSync, put=__cordl_internal_set_disableNetworkSync)) bool  disableNetworkSync;

/// @brief Field entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field hasNotifiedNavigationFailure, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasNotifiedNavigationFailure, put=__cordl_internal_set_hasNotifiedNavigationFailure)) bool  hasNotifiedNavigationFailure;

/// @brief Field lastPosOnNavMesh, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosOnNavMesh, put=__cordl_internal_set_lastPosOnNavMesh)) ::UnityEngine::Vector3  lastPosOnNavMesh;

/// @brief Field lastReceivedDest, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastReceivedDest, put=__cordl_internal_set_lastReceivedDest)) ::UnityEngine::Vector3  lastReceivedDest;

/// @brief Field lastRequestedDest, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastRequestedDest, put=__cordl_internal_set_lastRequestedDest)) ::UnityEngine::Vector3  lastRequestedDest;

/// @brief Field navAgent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_navAgent, put=__cordl_internal_set_navAgent)) ::UnityW<::UnityEngine::AI::NavMeshAgent>  navAgent;

/// @brief Field navAgentless, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get_navAgentless, put=__cordl_internal_set_navAgentless)) bool  navAgentless;

/// @brief Field networkPositionCorrectionDist, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_networkPositionCorrectionDist, put=__cordl_internal_set_networkPositionCorrectionDist)) float_t  networkPositionCorrectionDist;

/// @brief Field onBehaviorStateChanged, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_onBehaviorStateChanged, put=__cordl_internal_set_onBehaviorStateChanged)) ::GlobalNamespace::GameAgent_StateChangedEvent*  onBehaviorStateChanged;

/// @brief Field onBodyStateChanged, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_onBodyStateChanged, put=__cordl_internal_set_onBodyStateChanged)) ::GlobalNamespace::GameAgent_StateChangedEvent*  onBodyStateChanged;

/// @brief Field onJumpRequested, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_onJumpRequested, put=__cordl_internal_set_onJumpRequested)) ::GlobalNamespace::GameAgent_JumpRequestedEvent*  onJumpRequested;

/// @brief Field onNavigationFailed, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_onNavigationFailed, put=__cordl_internal_set_onNavigationFailed)) ::GlobalNamespace::GameAgent_NavigationFailedEvent*  onNavigationFailed;

/// @brief Field onReachedNavigationLink, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_onReachedNavigationLink, put=__cordl_internal_set_onReachedNavigationLink)) ::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*  onReachedNavigationLink;

/// @brief Field pauseEntityThink, offset 0xaa, size 0x1 
 __declspec(property(get=__cordl_internal_get_pauseEntityThink, put=__cordl_internal_set_pauseEntityThink)) bool  pauseEntityThink;

/// @brief Field rigidBody, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidBody, put=__cordl_internal_set_rigidBody)) ::UnityW<::UnityEngine::Rigidbody>  rigidBody;

/// @brief Field targetPlayer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetPlayer, put=__cordl_internal_set_targetPlayer)) ::GlobalNamespace::NetPlayer*  targetPlayer;

/// @brief Field wasOnOffMeshNavLink, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasOnOffMeshNavLink, put=__cordl_internal_set_wasOnOffMeshNavLink)) bool  wasOnOffMeshNavLink;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Method ApplyDestination, addr 0x580e08c, size 0x104, virtual false, abstract: false, final false
inline void ApplyDestination(::UnityEngine::Vector3  dest) ;

/// @brief Method ApplyNetworkUpdate, addr 0x580e4cc, size 0x1bc, virtual false, abstract: false, final false
inline void ApplyNetworkUpdate(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Awake, addr 0x580cb70, size 0xa8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearLastRequestedDestination, addr 0x580e458, size 0x74, virtual false, abstract: false, final false
inline void ClearLastRequestedDestination() ;

/// @brief Method GetGameAgentManager, addr 0x580cb4c, size 0x24, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GameAgentManager> GetGameAgentManager() ;

/// @brief Method GetLastPosOnNavMesh, addr 0x580d670, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetLastPosOnNavMesh() ;

/// @brief Method IsOnNavMesh, addr 0x580d5e8, size 0x88, virtual false, abstract: false, final false
inline bool IsOnNavMesh() ;

static inline ::GlobalNamespace::GameAgent* New_ctor() ;

/// @brief Method OnBehaviorStateChanged, addr 0x580cd60, size 0x1c, virtual false, abstract: false, final false
inline void OnBehaviorStateChanged(uint8_t  newState) ;

/// @brief Method OnBodyStateChanged, addr 0x580cd7c, size 0x1c, virtual false, abstract: false, final false
inline void OnBodyStateChanged(uint8_t  newState) ;

/// @brief Method OnEntityDestroy, addr 0x580cce4, size 0x20, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x580cc18, size 0x20, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x580cd5c, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OnJumpRequested, addr 0x580d5cc, size 0x1c, virtual false, abstract: false, final false
inline void OnJumpRequested(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale) ;

/// @brief Method OnThink, addr 0x580cd98, size 0x114, virtual false, abstract: false, final false
inline void OnThink(float_t  deltaTime) ;

/// @brief Method OnUpdate, addr 0x580ceac, size 0x3e0, virtual false, abstract: false, final false
inline void OnUpdate() ;

/// @brief Method RequestBehaviorChange, addr 0x580da40, size 0x30, virtual false, abstract: false, final false
inline void RequestBehaviorChange(uint8_t  behavior) ;

/// @brief Method RequestDestination, addr 0x580d67c, size 0x148, virtual false, abstract: false, final false
inline void RequestDestination(::UnityEngine::Vector3  dest) ;

/// @brief Method RequestStateChange, addr 0x580dc64, size 0x30, virtual false, abstract: false, final false
inline void RequestStateChange(uint8_t  state) ;

/// @brief Method RequestTarget, addr 0x580de88, size 0x30, virtual false, abstract: false, final false
inline void RequestTarget(::GlobalNamespace::NetPlayer*  targetPlayer) ;

/// @brief Method SetDisableNetworkSync, addr 0x580e190, size 0x8, virtual false, abstract: false, final false
inline void SetDisableNetworkSync(bool  disable) ;

/// @brief Method SetIsPathing, addr 0x580e198, size 0xdc, virtual false, abstract: false, final false
inline void SetIsPathing(bool  isPathing, bool  ignoreRigiBody) ;

/// @brief Method SetSpeed, addr 0x580e30c, size 0x98, virtual false, abstract: false, final false
inline void SetSpeed(float_t  speed) ;

/// @brief Method SetStopped, addr 0x580e274, size 0x98, virtual false, abstract: false, final false
inline void SetStopped(bool  stopMovement) ;

/// @brief Method SetVelocity, addr 0x580e3a4, size 0xb4, virtual false, abstract: false, final false
inline void SetVelocity(::UnityEngine::Vector3  vel) ;

/// @brief Method UpdateFacing, addr 0x580e688, size 0x11c, virtual false, abstract: false, final false
static inline void UpdateFacing(::UnityEngine::Transform*  transform, ::UnityEngine::AI::NavMeshAgent*  navAgent, ::GlobalNamespace::NetPlayer*  targetPlayer, float_t  turnspeed) ;

/// @brief Method UpdateFacingDir, addr 0x580ed24, size 0x1bc, virtual false, abstract: false, final false
static inline void UpdateFacingDir(::UnityEngine::Transform*  transform, ::UnityEngine::AI::NavMeshAgent*  navAgent, ::UnityEngine::Vector3  facingDir, float_t  turnspeed) ;

/// @brief Method UpdateFacingForward, addr 0x580ebc4, size 0x160, virtual false, abstract: false, final false
static inline void UpdateFacingForward(::UnityEngine::Transform*  transform, ::UnityEngine::AI::NavMeshAgent*  navAgent, float_t  turnspeed) ;

/// @brief Method UpdateFacingPos, addr 0x580eee0, size 0x110, virtual false, abstract: false, final false
static inline void UpdateFacingPos(::UnityEngine::Transform*  transform, ::UnityEngine::AI::NavMeshAgent*  navAgent, ::UnityEngine::Vector3  facingPos, float_t  turnspeed) ;

/// @brief Method UpdateFacingTarget, addr 0x580e7a4, size 0x420, virtual false, abstract: false, final false
static inline void UpdateFacingTarget(::UnityEngine::Transform*  transform, ::UnityEngine::AI::NavMeshAgent*  navAgent, ::UnityEngine::Transform*  target, float_t  turnspeed) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameAgentComponent*>* const& __cordl_internal_get_agentComponents() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameAgentComponent*>*& __cordl_internal_get_agentComponents() ;

constexpr bool const& __cordl_internal_get_disableNetworkSync() const;

constexpr bool& __cordl_internal_get_disableNetworkSync() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr bool const& __cordl_internal_get_hasNotifiedNavigationFailure() const;

constexpr bool& __cordl_internal_get_hasNotifiedNavigationFailure() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosOnNavMesh() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosOnNavMesh() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastReceivedDest() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastReceivedDest() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastRequestedDest() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastRequestedDest() ;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& __cordl_internal_get_navAgent() const;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& __cordl_internal_get_navAgent() ;

constexpr bool const& __cordl_internal_get_navAgentless() const;

constexpr bool& __cordl_internal_get_navAgentless() ;

constexpr float_t const& __cordl_internal_get_networkPositionCorrectionDist() const;

constexpr float_t& __cordl_internal_get_networkPositionCorrectionDist() ;

constexpr ::GlobalNamespace::GameAgent_StateChangedEvent* const& __cordl_internal_get_onBehaviorStateChanged() const;

constexpr ::GlobalNamespace::GameAgent_StateChangedEvent*& __cordl_internal_get_onBehaviorStateChanged() ;

constexpr ::GlobalNamespace::GameAgent_StateChangedEvent* const& __cordl_internal_get_onBodyStateChanged() const;

constexpr ::GlobalNamespace::GameAgent_StateChangedEvent*& __cordl_internal_get_onBodyStateChanged() ;

constexpr ::GlobalNamespace::GameAgent_JumpRequestedEvent* const& __cordl_internal_get_onJumpRequested() const;

constexpr ::GlobalNamespace::GameAgent_JumpRequestedEvent*& __cordl_internal_get_onJumpRequested() ;

constexpr ::GlobalNamespace::GameAgent_NavigationFailedEvent* const& __cordl_internal_get_onNavigationFailed() const;

constexpr ::GlobalNamespace::GameAgent_NavigationFailedEvent*& __cordl_internal_get_onNavigationFailed() ;

constexpr ::GlobalNamespace::GameAgent_NavigationLinkReachedEvent* const& __cordl_internal_get_onReachedNavigationLink() const;

constexpr ::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*& __cordl_internal_get_onReachedNavigationLink() ;

constexpr bool const& __cordl_internal_get_pauseEntityThink() const;

constexpr bool& __cordl_internal_get_pauseEntityThink() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidBody() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_targetPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_targetPlayer() ;

constexpr bool const& __cordl_internal_get_wasOnOffMeshNavLink() const;

constexpr bool& __cordl_internal_get_wasOnOffMeshNavLink() ;

constexpr void __cordl_internal_set_agentComponents(::System::Collections::Generic::List_1<::GlobalNamespace::IGameAgentComponent*>*  value) ;

constexpr void __cordl_internal_set_disableNetworkSync(bool  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_hasNotifiedNavigationFailure(bool  value) ;

constexpr void __cordl_internal_set_lastPosOnNavMesh(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastReceivedDest(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastRequestedDest(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_navAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value) ;

constexpr void __cordl_internal_set_navAgentless(bool  value) ;

constexpr void __cordl_internal_set_networkPositionCorrectionDist(float_t  value) ;

constexpr void __cordl_internal_set_onBehaviorStateChanged(::GlobalNamespace::GameAgent_StateChangedEvent*  value) ;

constexpr void __cordl_internal_set_onBodyStateChanged(::GlobalNamespace::GameAgent_StateChangedEvent*  value) ;

constexpr void __cordl_internal_set_onJumpRequested(::GlobalNamespace::GameAgent_JumpRequestedEvent*  value) ;

constexpr void __cordl_internal_set_onNavigationFailed(::GlobalNamespace::GameAgent_NavigationFailedEvent*  value) ;

constexpr void __cordl_internal_set_onReachedNavigationLink(::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*  value) ;

constexpr void __cordl_internal_set_pauseEntityThink(bool  value) ;

constexpr void __cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_wasOnOffMeshNavLink(bool  value) ;

/// @brief Method .ctor, addr 0x580eff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_onBehaviorStateChanged, addr 0x580c66c, size 0x9c, virtual false, abstract: false, final false
inline void add_onBehaviorStateChanged(::GlobalNamespace::GameAgent_StateChangedEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onBodyStateChanged, addr 0x580c534, size 0x9c, virtual false, abstract: false, final false
inline void add_onBodyStateChanged(::GlobalNamespace::GameAgent_StateChangedEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onJumpRequested, addr 0x580c8dc, size 0x9c, virtual false, abstract: false, final false
inline void add_onJumpRequested(::GlobalNamespace::GameAgent_JumpRequestedEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onNavigationFailed, addr 0x580ca14, size 0x9c, virtual false, abstract: false, final false
inline void add_onNavigationFailed(::GlobalNamespace::GameAgent_NavigationFailedEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onReachedNavigationLink, addr 0x580c7a4, size 0x9c, virtual false, abstract: false, final false
inline void add_onReachedNavigationLink(::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*  value) ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_onBehaviorStateChanged, addr 0x580c708, size 0x9c, virtual false, abstract: false, final false
inline void remove_onBehaviorStateChanged(::GlobalNamespace::GameAgent_StateChangedEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onBodyStateChanged, addr 0x580c5d0, size 0x9c, virtual false, abstract: false, final false
inline void remove_onBodyStateChanged(::GlobalNamespace::GameAgent_StateChangedEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onJumpRequested, addr 0x580c978, size 0x9c, virtual false, abstract: false, final false
inline void remove_onJumpRequested(::GlobalNamespace::GameAgent_JumpRequestedEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onNavigationFailed, addr 0x580cab0, size 0x9c, virtual false, abstract: false, final false
inline void remove_onNavigationFailed(::GlobalNamespace::GameAgent_NavigationFailedEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onReachedNavigationLink, addr 0x580c840, size 0x9c, virtual false, abstract: false, final false
inline void remove_onReachedNavigationLink(::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameAgent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameAgent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameAgent(GameAgent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameAgent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameAgent(GameAgent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1719};

/// @brief Field entity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entity;

/// @brief Field navAgent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AI::NavMeshAgent>  ___navAgent;

/// @brief Field rigidBody, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidBody;

/// @brief Field networkPositionCorrectionDist, offset: 0x38, size: 0x4, def value: None
 float_t  ___networkPositionCorrectionDist;

/// [ReadOnly]
/// @brief Field targetPlayer, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___targetPlayer;

/// @brief Field disableNetworkSync, offset: 0x48, size: 0x1, def value: None
 bool  ___disableNetworkSync;

/// @brief Field lastPosOnNavMesh, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosOnNavMesh;

/// @brief Field lastRequestedDest, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastRequestedDest;

/// @brief Field lastReceivedDest, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastReceivedDest;

/// [CompilerGenerated]
/// @brief Field onBodyStateChanged, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::GameAgent_StateChangedEvent*  ___onBodyStateChanged;

/// [CompilerGenerated]
/// @brief Field onBehaviorStateChanged, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::GameAgent_StateChangedEvent*  ___onBehaviorStateChanged;

/// [CompilerGenerated]
/// @brief Field onReachedNavigationLink, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*  ___onReachedNavigationLink;

/// [CompilerGenerated]
/// @brief Field onJumpRequested, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::GameAgent_JumpRequestedEvent*  ___onJumpRequested;

/// [CompilerGenerated]
/// @brief Field onNavigationFailed, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::GameAgent_NavigationFailedEvent*  ___onNavigationFailed;

/// @brief Field hasNotifiedNavigationFailure, offset: 0x98, size: 0x1, def value: None
 bool  ___hasNotifiedNavigationFailure;

/// @brief Field agentComponents, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IGameAgentComponent*>*  ___agentComponents;

/// @brief Field wasOnOffMeshNavLink, offset: 0xa8, size: 0x1, def value: None
 bool  ___wasOnOffMeshNavLink;

/// @brief Field navAgentless, offset: 0xa9, size: 0x1, def value: None
 bool  ___navAgentless;

/// [ReadOnly]
/// @brief Field pauseEntityThink, offset: 0xaa, size: 0x1, def value: None
 bool  ___pauseEntityThink;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameAgent, ___entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgent, ___navAgent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgent, ___rigidBody) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgent, ___networkPositionCorrectionDist) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgent, ___targetPlayer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgent, ___disableNetworkSync) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgent, ___lastPosOnNavMesh) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgent, ___lastRequestedDest) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgent, ___lastReceivedDest) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgent, ___onBodyStateChanged) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgent, ___onBehaviorStateChanged) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgent, ___onReachedNavigationLink) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgent, ___onJumpRequested) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgent, ___onNavigationFailed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgent, ___hasNotifiedNavigationFailure) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgent, ___agentComponents) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgent, ___wasOnOffMeshNavLink) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgent, ___navAgentless) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgent, ___pauseEntityThink) == 0xaa, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameAgent) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameAgent/NavigationFailedEvent
class CORDL_TYPE GameAgent_NavigationFailedEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x580f4e8, size 0xe0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::AI::NavMeshPathStatus  status, ::UnityEngine::Vector3  destination, float_t  remainingDistance, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x580f5c8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x580f4d4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::AI::NavMeshPathStatus  status, ::UnityEngine::Vector3  destination, float_t  remainingDistance) ;

static inline ::GlobalNamespace::GameAgent_NavigationFailedEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x580f434, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameAgent_NavigationFailedEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameAgent_NavigationFailedEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameAgent_NavigationFailedEvent(GameAgent_NavigationFailedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameAgent_NavigationFailedEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameAgent_NavigationFailedEvent(GameAgent_NavigationFailedEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1718};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameAgent_NavigationFailedEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameAgent/JumpRequestedEvent
class CORDL_TYPE GameAgent_JumpRequestedEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x580f344, size 0xe4, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x580f428, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x580f330, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale) ;

static inline ::GlobalNamespace::GameAgent_JumpRequestedEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x580f290, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameAgent_JumpRequestedEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameAgent_JumpRequestedEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameAgent_JumpRequestedEvent(GameAgent_JumpRequestedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameAgent_JumpRequestedEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameAgent_JumpRequestedEvent(GameAgent_JumpRequestedEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1717};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameAgent_JumpRequestedEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameAgent/NavigationLinkReachedEvent
class CORDL_TYPE GameAgent_NavigationLinkReachedEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x580f1f8, size 0x8c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::AI::OffMeshLinkData  linkData, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x580f284, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x580f1bc, size 0x3c, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::AI::OffMeshLinkData  linkData) ;

static inline ::GlobalNamespace::GameAgent_NavigationLinkReachedEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x580f11c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameAgent_NavigationLinkReachedEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameAgent_NavigationLinkReachedEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameAgent_NavigationLinkReachedEvent(GameAgent_NavigationLinkReachedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameAgent_NavigationLinkReachedEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameAgent_NavigationLinkReachedEvent(GameAgent_NavigationLinkReachedEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1716};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameAgent_NavigationLinkReachedEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameAgent/StateChangedEvent
class CORDL_TYPE GameAgent_StateChangedEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x580f0b4, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(uint8_t  newState, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x580f110, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x580f0a0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(uint8_t  newState) ;

static inline ::GlobalNamespace::GameAgent_StateChangedEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x580f000, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameAgent_StateChangedEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameAgent_StateChangedEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameAgent_StateChangedEvent(GameAgent_StateChangedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameAgent_StateChangedEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameAgent_StateChangedEvent(GameAgent_StateChangedEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1715};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameAgent_StateChangedEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
