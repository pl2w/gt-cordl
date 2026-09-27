#pragma once
// IWYU pragma private; include "GlobalNamespace/GameAgentManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameAgentManager)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
template<typename Titem,typename Tenum>
class CallLimitersList_2;
}
namespace GlobalNamespace {
struct GameAgentManager_RPC;
}
namespace GlobalNamespace {
class GameAgent;
}
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
class GameEntityManager;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GameAgentManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameAgentManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameAgentManager*, "", "GameAgentManager");
// [NetworkBehaviourWeaved(0)]
// Dependencies NetworkComponent
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameAgentManager
class CORDL_TYPE GameAgentManager : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using RPC = ::GlobalNamespace::GameAgentManager_RPC;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field agents, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_agents, put=__cordl_internal_set_agents)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameAgent>>*  agents;

/// @brief Field behaviorCooldown, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_behaviorCooldown, put=__cordl_internal_set_behaviorCooldown)) float_t  behaviorCooldown;

/// @brief Field behaviorsForBehavior, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_behaviorsForBehavior, put=__cordl_internal_set_behaviorsForBehavior)) ::System::Collections::Generic::List_1<uint8_t>*  behaviorsForBehavior;

/// @brief Field destinationCooldown, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_destinationCooldown, put=__cordl_internal_set_destinationCooldown)) float_t  destinationCooldown;

/// @brief Field destinationsForDestination, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_destinationsForDestination, put=__cordl_internal_set_destinationsForDestination)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  destinationsForDestination;

/// @brief Field entityManager, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_entityManager, put=__cordl_internal_set_entityManager)) ::UnityW<::GlobalNamespace::GameEntityManager>  entityManager;

/// @brief Field lastBehaviorSentTime, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastBehaviorSentTime, put=__cordl_internal_set_lastBehaviorSentTime)) float_t  lastBehaviorSentTime;

/// @brief Field lastDestinationSentTime, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastDestinationSentTime, put=__cordl_internal_set_lastDestinationSentTime)) float_t  lastDestinationSentTime;

/// @brief Field lastStateSentTime, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastStateSentTime, put=__cordl_internal_set_lastStateSentTime)) float_t  lastStateSentTime;

/// @brief Field m_RpcSpamChecks, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RpcSpamChecks, put=__cordl_internal_set_m_RpcSpamChecks)) ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GameAgentManager_RPC>*  m_RpcSpamChecks;

/// @brief Field netIdsForBehavior, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_netIdsForBehavior, put=__cordl_internal_set_netIdsForBehavior)) ::System::Collections::Generic::List_1<int32_t>*  netIdsForBehavior;

/// @brief Field netIdsForDestination, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_netIdsForDestination, put=__cordl_internal_set_netIdsForDestination)) ::System::Collections::Generic::List_1<int32_t>*  netIdsForDestination;

/// @brief Field netIdsForState, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_netIdsForState, put=__cordl_internal_set_netIdsForState)) ::System::Collections::Generic::List_1<int32_t>*  netIdsForState;

/// @brief Field nextAgentIndexThink, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextAgentIndexThink, put=__cordl_internal_set_nextAgentIndexThink)) int32_t  nextAgentIndexThink;

/// @brief Field nextAgentIndexUpdate, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextAgentIndexUpdate, put=__cordl_internal_set_nextAgentIndexUpdate)) int32_t  nextAgentIndexUpdate;

/// @brief Field photonView, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonView, put=__cordl_internal_set_photonView)) ::UnityW<::Photon::Pun::PhotonView>  photonView;

/// @brief Field stateCooldown, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_stateCooldown, put=__cordl_internal_set_stateCooldown)) float_t  stateCooldown;

/// @brief Field statesForState, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_statesForState, put=__cordl_internal_set_statesForState)) ::System::Collections::Generic::List_1<uint8_t>*  statesForState;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method AddGameAgent, addr 0x580cc38, size 0xac, virtual false, abstract: false, final false
inline void AddGameAgent(::GlobalNamespace::GameAgent*  gameAgent) ;

/// [PunRPC]
/// @brief Method ApplyBehaviorRPC, addr 0x58106dc, size 0x1e4, virtual false, abstract: false, final false
inline void ApplyBehaviorRPC(::ArrayW<int32_t>  netEntityId, ::ArrayW<uint8_t>  behavior, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ApplyDestinationRPC, addr 0x5810278, size 0x280, virtual false, abstract: false, final false
inline void ApplyDestinationRPC(::ArrayW<int32_t>  netEntityId, ::ArrayW<::UnityEngine::Vector3>  dest, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ApplyJumpRPC, addr 0x5810a34, size 0x484, virtual false, abstract: false, final false
inline void ApplyJumpRPC(int32_t  agentNetId, ::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ApplyStateRPC, addr 0x58104f8, size 0x1e4, virtual false, abstract: false, final false
inline void ApplyStateRPC(::ArrayW<int32_t>  netEntityId, ::ArrayW<uint8_t>  state, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ApplyTargetRPC, addr 0x58108c0, size 0x174, virtual false, abstract: false, final false
inline void ApplyTargetRPC(int32_t  agentNetId, ::Photon::Realtime::Player*  player, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Awake, addr 0x580f5e4, size 0x1f0, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x581141c, size 0x8, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5811424, size 0x8, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method Get, addr 0x580f9ec, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GameAgentManager> Get(::GlobalNamespace::GameEntity*  gameEntity) ;

/// @brief Method GetAgents, addr 0x580fa9c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameAgent>>* GetAgents() ;

/// @brief Method GetAuthorityPlayer, addr 0x5810158, size 0x18, virtual false, abstract: false, final false
inline ::Photon::Realtime::Player* GetAuthorityPlayer() ;

/// @brief Method GetGameAgent, addr 0x580faec, size 0x64, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GameAgent> GetGameAgent(::GlobalNamespace::GameEntityId  id) ;

/// @brief Method GetGameAgentCount, addr 0x580faa4, size 0x48, virtual false, abstract: false, final false
inline int32_t GetGameAgentCount() ;

/// @brief Method IsAuthority, addr 0x5810108, size 0x20, virtual false, abstract: false, final false
inline bool IsAuthority() ;

/// @brief Method IsAuthorityPlayer, addr 0x5810128, size 0x18, virtual false, abstract: false, final false
inline bool IsAuthorityPlayer(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method IsAuthorityPlayer, addr 0x5810140, size 0x18, virtual false, abstract: false, final false
inline bool IsAuthorityPlayer(::Photon::Realtime::Player*  player) ;

/// @brief Method IsPositionInManagerBounds, addr 0x5810190, size 0x20, virtual false, abstract: false, final false
inline bool IsPositionInManagerBounds(::UnityEngine::Vector3  pos) ;

/// @brief Method IsValidAuthorityRPC, addr 0x5810218, size 0x18, virtual false, abstract: false, final false
inline bool IsValidAuthorityRPC(::Photon::Realtime::Player*  sender) ;

/// @brief Method IsValidAuthorityRPC, addr 0x5810230, size 0x18, virtual false, abstract: false, final false
inline bool IsValidAuthorityRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId) ;

/// @brief Method IsValidAuthorityRPC, addr 0x5810248, size 0x18, virtual false, abstract: false, final false
inline bool IsValidAuthorityRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId, ::UnityEngine::Vector3  pos) ;

/// @brief Method IsValidAuthorityRPC, addr 0x5810260, size 0x18, virtual false, abstract: false, final false
inline bool IsValidAuthorityRPC(::Photon::Realtime::Player*  sender, ::UnityEngine::Vector3  pos) ;

/// @brief Method IsValidClientRPC, addr 0x58101b0, size 0x20, virtual false, abstract: false, final false
inline bool IsValidClientRPC(::Photon::Realtime::Player*  sender) ;

/// @brief Method IsValidClientRPC, addr 0x58101d0, size 0x18, virtual false, abstract: false, final false
inline bool IsValidClientRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId) ;

/// @brief Method IsValidClientRPC, addr 0x58101e8, size 0x18, virtual false, abstract: false, final false
inline bool IsValidClientRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId, ::UnityEngine::Vector3  pos) ;

/// @brief Method IsValidClientRPC, addr 0x5810200, size 0x18, virtual false, abstract: false, final false
inline bool IsValidClientRPC(::Photon::Realtime::Player*  sender, ::UnityEngine::Vector3  pos) ;

/// @brief Method IsZoneActive, addr 0x5810170, size 0x20, virtual false, abstract: false, final false
inline bool IsZoneActive() ;

static inline ::GlobalNamespace::GameAgentManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x580f8e0, size 0x10c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x580f7d4, size 0x10c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReadDataFusion, addr 0x5810ebc, size 0x4, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x58110f8, size 0x294, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RemoveGameAgent, addr 0x580cd04, size 0x58, virtual false, abstract: false, final false
inline void RemoveGameAgent(::GlobalNamespace::GameAgent*  gameAgent) ;

/// @brief Method RequestBehavior, addr 0x580da70, size 0x1f4, virtual false, abstract: false, final false
inline void RequestBehavior(::GlobalNamespace::GameAgent*  agent, uint8_t  behavior) ;

/// @brief Method RequestDestination, addr 0x580d7c4, size 0x27c, virtual false, abstract: false, final false
inline void RequestDestination(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Vector3  dest) ;

/// @brief Method RequestJump, addr 0x580d2ac, size 0x320, virtual false, abstract: false, final false
inline void RequestJump(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale) ;

/// @brief Method RequestState, addr 0x580dc94, size 0x1f4, virtual false, abstract: false, final false
inline void RequestState(::GlobalNamespace::GameAgent*  agent, uint8_t  state) ;

/// @brief Method RequestTarget, addr 0x580deb8, size 0x1d4, virtual false, abstract: false, final false
inline void RequestTarget(::GlobalNamespace::GameAgent*  agent, ::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method Tick, addr 0x580fb50, size 0x5b8, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method WriteDataFusion, addr 0x5810eb8, size 0x4, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5810ec0, size 0x238, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameAgent>>* const& __cordl_internal_get_agents() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameAgent>>*& __cordl_internal_get_agents() ;

constexpr float_t const& __cordl_internal_get_behaviorCooldown() const;

constexpr float_t& __cordl_internal_get_behaviorCooldown() ;

constexpr ::System::Collections::Generic::List_1<uint8_t>* const& __cordl_internal_get_behaviorsForBehavior() const;

constexpr ::System::Collections::Generic::List_1<uint8_t>*& __cordl_internal_get_behaviorsForBehavior() ;

constexpr float_t const& __cordl_internal_get_destinationCooldown() const;

constexpr float_t& __cordl_internal_get_destinationCooldown() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_destinationsForDestination() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_destinationsForDestination() ;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& __cordl_internal_get_entityManager() const;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& __cordl_internal_get_entityManager() ;

constexpr float_t const& __cordl_internal_get_lastBehaviorSentTime() const;

constexpr float_t& __cordl_internal_get_lastBehaviorSentTime() ;

constexpr float_t const& __cordl_internal_get_lastDestinationSentTime() const;

constexpr float_t& __cordl_internal_get_lastDestinationSentTime() ;

constexpr float_t const& __cordl_internal_get_lastStateSentTime() const;

constexpr float_t& __cordl_internal_get_lastStateSentTime() ;

constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GameAgentManager_RPC>* const& __cordl_internal_get_m_RpcSpamChecks() const;

constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GameAgentManager_RPC>*& __cordl_internal_get_m_RpcSpamChecks() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_netIdsForBehavior() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_netIdsForBehavior() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_netIdsForDestination() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_netIdsForDestination() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_netIdsForState() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_netIdsForState() ;

constexpr int32_t const& __cordl_internal_get_nextAgentIndexThink() const;

constexpr int32_t& __cordl_internal_get_nextAgentIndexThink() ;

constexpr int32_t const& __cordl_internal_get_nextAgentIndexUpdate() const;

constexpr int32_t& __cordl_internal_get_nextAgentIndexUpdate() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_photonView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_photonView() ;

constexpr float_t const& __cordl_internal_get_stateCooldown() const;

constexpr float_t& __cordl_internal_get_stateCooldown() ;

constexpr ::System::Collections::Generic::List_1<uint8_t>* const& __cordl_internal_get_statesForState() const;

constexpr ::System::Collections::Generic::List_1<uint8_t>*& __cordl_internal_get_statesForState() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_agents(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameAgent>>*  value) ;

constexpr void __cordl_internal_set_behaviorCooldown(float_t  value) ;

constexpr void __cordl_internal_set_behaviorsForBehavior(::System::Collections::Generic::List_1<uint8_t>*  value) ;

constexpr void __cordl_internal_set_destinationCooldown(float_t  value) ;

constexpr void __cordl_internal_set_destinationsForDestination(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_entityManager(::UnityW<::GlobalNamespace::GameEntityManager>  value) ;

constexpr void __cordl_internal_set_lastBehaviorSentTime(float_t  value) ;

constexpr void __cordl_internal_set_lastDestinationSentTime(float_t  value) ;

constexpr void __cordl_internal_set_lastStateSentTime(float_t  value) ;

constexpr void __cordl_internal_set_m_RpcSpamChecks(::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GameAgentManager_RPC>*  value) ;

constexpr void __cordl_internal_set_netIdsForBehavior(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_netIdsForDestination(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_netIdsForState(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_nextAgentIndexThink(int32_t  value) ;

constexpr void __cordl_internal_set_nextAgentIndexUpdate(int32_t  value) ;

constexpr void __cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value) ;

constexpr void __cordl_internal_set_stateCooldown(float_t  value) ;

constexpr void __cordl_internal_set_statesForState(::System::Collections::Generic::List_1<uint8_t>*  value) ;

/// @brief Method .ctor, addr 0x581138c, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x580f5d4, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x580f5dc, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameAgentManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameAgentManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameAgentManager(GameAgentManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameAgentManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameAgentManager(GameAgentManager const& ) = delete;

/// @brief Field MAX_JUMP_DISTANCE offset 0xffffffff size 0x4
static constexpr float_t  MAX_JUMP_DISTANCE{static_cast<float_t>(25.0f)};

/// @brief Field MAX_THINK_PER_FRAME offset 0xffffffff size 0x4
static constexpr int32_t  MAX_THINK_PER_FRAME{static_cast<int32_t>(0x1)};

/// @brief Field MAX_UPDATES_PER_FRAME offset 0xffffffff size 0x4
static constexpr int32_t  MAX_UPDATES_PER_FRAME{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1721};

/// @brief Field entityManager, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntityManager>  ___entityManager;

/// @brief Field photonView, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___photonView;

/// @brief Field agents, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameAgent>>*  ___agents;

/// @brief Field lastDestinationSentTime, offset: 0xb8, size: 0x4, def value: None
 float_t  ___lastDestinationSentTime;

/// @brief Field destinationCooldown, offset: 0xbc, size: 0x4, def value: None
 float_t  ___destinationCooldown;

/// @brief Field netIdsForDestination, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___netIdsForDestination;

/// @brief Field destinationsForDestination, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___destinationsForDestination;

/// @brief Field netIdsForState, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___netIdsForState;

/// @brief Field statesForState, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<uint8_t>*  ___statesForState;

/// @brief Field lastStateSentTime, offset: 0xe0, size: 0x4, def value: None
 float_t  ___lastStateSentTime;

/// @brief Field stateCooldown, offset: 0xe4, size: 0x4, def value: None
 float_t  ___stateCooldown;

/// @brief Field netIdsForBehavior, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___netIdsForBehavior;

/// @brief Field behaviorsForBehavior, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<uint8_t>*  ___behaviorsForBehavior;

/// @brief Field lastBehaviorSentTime, offset: 0xf8, size: 0x4, def value: None
 float_t  ___lastBehaviorSentTime;

/// @brief Field behaviorCooldown, offset: 0xfc, size: 0x4, def value: None
 float_t  ___behaviorCooldown;

/// @brief Field nextAgentIndexUpdate, offset: 0x100, size: 0x4, def value: None
 int32_t  ___nextAgentIndexUpdate;

/// @brief Field nextAgentIndexThink, offset: 0x104, size: 0x4, def value: None
 int32_t  ___nextAgentIndexThink;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x108, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// @brief Field m_RpcSpamChecks, offset: 0x110, size: 0x8, def value: None
 ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GameAgentManager_RPC>*  ___m_RpcSpamChecks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameAgentManager, ___entityManager) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgentManager, ___photonView) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgentManager, ___agents) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgentManager, ___lastDestinationSentTime) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgentManager, ___destinationCooldown) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgentManager, ___netIdsForDestination) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgentManager, ___destinationsForDestination) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgentManager, ___netIdsForState) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgentManager, ___statesForState) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgentManager, ___lastStateSentTime) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgentManager, ___stateCooldown) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgentManager, ___netIdsForBehavior) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgentManager, ___behaviorsForBehavior) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgentManager, ___lastBehaviorSentTime) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgentManager, ___behaviorCooldown) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgentManager, ___nextAgentIndexUpdate) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgentManager, ___nextAgentIndexThink) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgentManager, ____TickRunning_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAgentManager, ___m_RpcSpamChecks) == 0x110, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameAgentManager) == 0x118, "Size mismatch!");

} // namespace end def GlobalNamespace
