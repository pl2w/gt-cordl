#pragma once
// IWYU pragma private; include "GlobalNamespace/SIPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIPlayer_ProgressionData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIPlayer)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
class GamePlayer;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct SIPlayer_ProgressionData;
}
namespace GlobalNamespace {
struct SIResource_LimitedDepositType;
}
namespace GlobalNamespace {
struct SIResource_ResourceType;
}
namespace GlobalNamespace {
class SITechTreeNode;
}
namespace GlobalNamespace {
struct SITechTreePageId;
}
namespace GlobalNamespace {
class SITechTreeSO;
}
namespace GlobalNamespace {
struct SIUpgradeSet;
}
namespace GlobalNamespace {
struct SIUpgradeType;
}
namespace GlobalNamespace {
class SuperInfectionManager;
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
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SIPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIPlayer*, "", "SIPlayer");
// Dependencies SIPlayer::ProgressionData, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIPlayer
class CORDL_TYPE SIPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ProgressionData = ::GlobalNamespace::SIPlayer_ProgressionData;

 __declspec(property(get=get_ActorNr)) int32_t  ActorNr;

 __declspec(property(get=get_CurrentProgression)) ::GlobalNamespace::SIPlayer_ProgressionData  CurrentProgression;

/// @brief Field OnBlasterHit, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnBlasterHit, put=__cordl_internal_set_OnBlasterHit)) ::System::Action*  OnBlasterHit;

/// @brief Field OnBlasterSplashHit, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnBlasterSplashHit, put=__cordl_internal_set_OnBlasterSplashHit)) ::System::Action*  OnBlasterSplashHit;

/// @brief Field OnKnockback, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnKnockback, put=__cordl_internal_set_OnKnockback)) ::System::Action_1<::UnityEngine::Vector3>*  OnKnockback;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

 __declspec(property(get=get_TotalGadgetLimit)) int32_t  TotalGadgetLimit;

/// @brief Field <TickRunning>k__BackingField, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field _debug_lastStaleSlotLogTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__debug_lastStaleSlotLogTime, put=setStaticF__debug_lastStaleSlotLogTime)) float_t  _debug_lastStaleSlotLogTime;

/// @brief Field activePlayerGadgets, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_activePlayerGadgets, put=__cordl_internal_set_activePlayerGadgets)) ::System::Collections::Generic::List_1<int32_t>*  activePlayerGadgets;

/// @brief Field authorityToClientRPCLimiter, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_authorityToClientRPCLimiter, put=__cordl_internal_set_authorityToClientRPCLimiter)) ::GlobalNamespace::CallLimiter*  authorityToClientRPCLimiter;

/// @brief Field bonusProgressionCelebrate, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_bonusProgressionCelebrate, put=__cordl_internal_set_bonusProgressionCelebrate)) ::UnityW<::UnityEngine::GameObject>  bonusProgressionCelebrate;

/// @brief Field clientToAuthorityRPCLimiter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientToAuthorityRPCLimiter, put=__cordl_internal_set_clientToAuthorityRPCLimiter)) ::GlobalNamespace::CallLimiter*  clientToAuthorityRPCLimiter;

/// @brief Field clientToClientRPCLimiter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientToClientRPCLimiter, put=__cordl_internal_set_clientToClientRPCLimiter)) ::GlobalNamespace::CallLimiter*  clientToClientRPCLimiter;

/// @brief Field currentProgression, offset 0x80, size 0x38 
 __declspec(property(get=__cordl_internal_get_currentProgression, put=__cordl_internal_set_currentProgression)) ::GlobalNamespace::SIPlayer_ProgressionData  currentProgression;

/// @brief Field exclusionZoneCount, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_exclusionZoneCount, put=__cordl_internal_set_exclusionZoneCount)) int32_t  exclusionZoneCount;

/// @brief Field gamePlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gamePlayer, put=__cordl_internal_set_gamePlayer)) ::UnityW<::GlobalNamespace::GamePlayer>  gamePlayer;

/// @brief Field lastQuestsAvailableToClaim, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastQuestsAvailableToClaim, put=__cordl_internal_set_lastQuestsAvailableToClaim)) int32_t  lastQuestsAvailableToClaim;

/// @brief Field monkeIdolDepositCelebrate, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_monkeIdolDepositCelebrate, put=__cordl_internal_set_monkeIdolDepositCelebrate)) ::UnityW<::UnityEngine::GameObject>  monkeIdolDepositCelebrate;

/// @brief Field netInitialized, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_netInitialized, put=__cordl_internal_set_netInitialized)) bool  netInitialized;

/// @brief Field progressionSO, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_progressionSO, put=setStaticF_progressionSO)) ::UnityW<::GlobalNamespace::SITechTreeSO>  progressionSO;

/// @brief Field progressionSORef, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressionSORef, put=__cordl_internal_set_progressionSORef)) ::UnityW<::GlobalNamespace::SITechTreeSO>  progressionSORef;

/// @brief Field questCompleteCelebrate, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_questCompleteCelebrate, put=__cordl_internal_set_questCompleteCelebrate)) ::UnityW<::UnityEngine::GameObject>  questCompleteCelebrate;

/// @brief Field siPlayerByActorNr, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_siPlayerByActorNr, put=setStaticF_siPlayerByActorNr)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SIPlayer>>*  siPlayerByActorNr;

/// @brief Field techPointGainedCelebrate, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_techPointGainedCelebrate, put=__cordl_internal_set_techPointGainedCelebrate)) ::UnityW<::UnityEngine::GameObject>  techPointGainedCelebrate;

/// @brief Field tpParticleSystem, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_tpParticleSystem, put=__cordl_internal_set_tpParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  tpParticleSystem;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method AttemptUnlockNode, addr 0x59e0fa4, size 0xf8, virtual false, abstract: false, final false
inline bool AttemptUnlockNode(::GlobalNamespace::SIUpgradeType  upgrade, ::GlobalNamespace::SuperInfectionManager*  manager) ;

/// @brief Method Awake, addr 0x59dee28, size 0x258, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BonusProgressCelebrate, addr 0x59e0734, size 0x38, virtual false, abstract: false, final false
inline void BonusProgressCelebrate() ;

/// @brief Method CanLimitedResourceBeDeposited, addr 0x59e008c, size 0xe4, virtual false, abstract: false, final false
inline bool CanLimitedResourceBeDeposited(::GlobalNamespace::SIResource_LimitedDepositType  limitedDepositType) ;

/// @brief Method CelebrateIfQuestProgressMade, addr 0x59e0b30, size 0x14c, virtual false, abstract: false, final false
inline void CelebrateIfQuestProgressMade(::GlobalNamespace::SIPlayer_ProgressionData  newProgression) ;

/// @brief Method ClearGadgetsOnLeaveZone, addr 0x59e284c, size 0xb4, virtual false, abstract: false, final false
inline void ClearGadgetsOnLeaveZone() ;

/// @brief Method ClearPlayerCache, addr 0x59df558, size 0x78, virtual false, abstract: false, final false
static inline void ClearPlayerCache() ;

/// @brief Method DeserializeNetworkStateAndBurn, addr 0x59df8c0, size 0x5dc, virtual false, abstract: false, final false
static inline void DeserializeNetworkStateAndBurn(::System::IO::BinaryReader*  reader, ::GlobalNamespace::SIPlayer*  player, ::GlobalNamespace::SuperInfectionManager*  siManager) ;

/// @brief Method GatherResource, addr 0x59e0180, size 0x300, virtual false, abstract: false, final false
inline void GatherResource(::GlobalNamespace::SIResource_ResourceType  type, ::GlobalNamespace::SIResource_LimitedDepositType  limitedDepositType, int32_t  count) ;

/// @brief Method Get, addr 0x59dae30, size 0x15c, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::SIPlayer> Get(int32_t  actorNumber) ;

/// @brief Method Get, addr 0x59df5d0, size 0x94, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::SIPlayer> Get(::GlobalNamespace::VRRig*  vrRig) ;

/// @brief Method GetBonusProgress, addr 0x59e066c, size 0xb8, virtual false, abstract: false, final false
inline void GetBonusProgress(::GlobalNamespace::SuperInfectionManager*  manager) ;

/// @brief Method GetResourceAmount, addr 0x59e07c4, size 0x30, virtual false, abstract: false, final false
inline int32_t GetResourceAmount(::GlobalNamespace::SIResource_ResourceType  type) ;

/// @brief Method GetUpgrades, addr 0x59de87c, size 0x88, virtual false, abstract: false, final false
inline ::GlobalNamespace::SIUpgradeSet GetUpgrades(::GlobalNamespace::SITechTreePageId  pageId) ;

/// @brief Method HasLimitedResourceBeenDeposited, addr 0x59dff74, size 0x118, virtual false, abstract: false, final false
inline bool HasLimitedResourceBeenDeposited(::GlobalNamespace::SIResource_LimitedDepositType  limitedDepositType) ;

static inline ::GlobalNamespace::SIPlayer* New_ctor() ;

/// @brief Method NodeParentsUnlocked, addr 0x59e1850, size 0xd4, virtual false, abstract: false, final false
inline bool NodeParentsUnlocked(::GlobalNamespace::SIUpgradeType  upgrade) ;

/// @brief Method NodeResearched, addr 0x59e17e8, size 0x68, virtual false, abstract: false, final false
inline bool NodeResearched(::GlobalNamespace::SIUpgradeType  upgrade) ;

/// @brief Method NotifyBlasterHit, addr 0x59e2cd0, size 0x1c, virtual false, abstract: false, final false
inline void NotifyBlasterHit() ;

/// @brief Method NotifyBlasterSplashHit, addr 0x59e2cec, size 0x1c, virtual false, abstract: false, final false
inline void NotifyBlasterSplashHit() ;

/// @brief Method OnDisable, addr 0x59df354, size 0xb8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59df274, size 0xe0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayerCanAffordNode, addr 0x59e109c, size 0x260, virtual false, abstract: false, final false
inline bool PlayerCanAffordNode(::GlobalNamespace::SITechTreeNode*  node) ;

/// @brief Method PlayerHandHaptic, addr 0x59e2f0c, size 0xe8, virtual false, abstract: false, final false
inline void PlayerHandHaptic(bool  isLeft, float_t  hapticStrength, float_t  hapticDuration, bool  applyExclusionZone) ;

/// @brief Method PlayerKnockback, addr 0x59e2d08, size 0x204, virtual false, abstract: false, final false
inline void PlayerKnockback(::UnityEngine::Vector3  directionAndMagnitude, bool  forceOffGround, bool  applyExclusionZone) ;

/// @brief Method PurchaseNode, addr 0x59e12fc, size 0x354, virtual false, abstract: false, final false
inline void PurchaseNode(::GlobalNamespace::SITechTreeNode*  node) ;

/// @brief Method QuestAvailableToClaim, addr 0x59e258c, size 0x11c, virtual false, abstract: false, final false
inline bool QuestAvailableToClaim(int32_t  questIndex) ;

/// @brief Method QuestsAvailableToClaim, addr 0x59e0c7c, size 0x134, virtual false, abstract: false, final false
inline int32_t QuestsAvailableToClaim() ;

/// @brief Method Reset, addr 0x59df40c, size 0xbc, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetResources, addr 0x59e1af8, size 0x124, virtual false, abstract: false, final false
inline void ResetResources() ;

/// @brief Method ResetTechTree, addr 0x59e1924, size 0x1d4, virtual false, abstract: false, final false
inline void ResetTechTree() ;

/// @brief Method SerializeNetworkState, addr 0x59df664, size 0x25c, virtual false, abstract: false, final false
inline void SerializeNetworkState(::System::IO::BinaryWriter*  writer, ::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method SetAndBroadcastProgression, addr 0x59e076c, size 0x58, virtual false, abstract: false, final false
static inline void SetAndBroadcastProgression() ;

/// @brief Method SetAndBroadcastProgressionLocal, addr 0x59e2028, size 0x414, virtual false, abstract: false, final false
inline void SetAndBroadcastProgressionLocal() ;

/// @brief Method SetProgressionLocal, addr 0x59e07f4, size 0xb0, virtual false, abstract: false, final false
inline void SetProgressionLocal() ;

/// @brief Method TechPointGrantedCelebrate, addr 0x59e0db0, size 0x1f4, virtual false, abstract: false, final false
inline void TechPointGrantedCelebrate() ;

/// @brief Method Tick, addr 0x59e2ff4, size 0x134, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method TriggerIdolDepositedCelebration, addr 0x59e26a8, size 0x1a4, virtual false, abstract: false, final false
inline void TriggerIdolDepositedCelebration(::UnityEngine::Vector3  position) ;

/// @brief Method UpdateProgression, addr 0x59dfe9c, size 0xd8, virtual false, abstract: false, final false
inline void UpdateProgression(::ArrayW<int32_t>  resourceArray, ::ArrayW<int32_t>  limitedDepositTimeArray, ::ArrayW<::ArrayW<bool>>  techTreeData, int32_t  _stashedQuests, int32_t  _stashedBonusPoints, int32_t  _bonusProgress, ::ArrayW<int32_t>  _currentQuestIds, ::ArrayW<int32_t>  _currentQuestProgresses) ;

/// @brief Method UpdateVisualsForAvailableQuestRedemption, addr 0x59e0930, size 0x168, virtual false, abstract: false, final false
inline void UpdateVisualsForAvailableQuestRedemption() ;

/// @brief Method _TryUpdateSlotEntityCharge, addr 0x59e3128, size 0x290, virtual false, abstract: false, final false
static inline bool _TryUpdateSlotEntityCharge(::GlobalNamespace::GamePlayer*  gamePlayer, int32_t  slotIndex, bool  isSupercharged) ;

constexpr ::System::Action* const& __cordl_internal_get_OnBlasterHit() const;

constexpr ::System::Action*& __cordl_internal_get_OnBlasterHit() ;

constexpr ::System::Action* const& __cordl_internal_get_OnBlasterSplashHit() const;

constexpr ::System::Action*& __cordl_internal_get_OnBlasterSplashHit() ;

constexpr ::System::Action_1<::UnityEngine::Vector3>* const& __cordl_internal_get_OnKnockback() const;

constexpr ::System::Action_1<::UnityEngine::Vector3>*& __cordl_internal_get_OnKnockback() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_activePlayerGadgets() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_activePlayerGadgets() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_authorityToClientRPCLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_authorityToClientRPCLimiter() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_bonusProgressionCelebrate() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_bonusProgressionCelebrate() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_clientToAuthorityRPCLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_clientToAuthorityRPCLimiter() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_clientToClientRPCLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_clientToClientRPCLimiter() ;

constexpr ::GlobalNamespace::SIPlayer_ProgressionData const& __cordl_internal_get_currentProgression() const;

constexpr ::GlobalNamespace::SIPlayer_ProgressionData& __cordl_internal_get_currentProgression() ;

constexpr int32_t const& __cordl_internal_get_exclusionZoneCount() const;

constexpr int32_t& __cordl_internal_get_exclusionZoneCount() ;

constexpr ::UnityW<::GlobalNamespace::GamePlayer> const& __cordl_internal_get_gamePlayer() const;

constexpr ::UnityW<::GlobalNamespace::GamePlayer>& __cordl_internal_get_gamePlayer() ;

constexpr int32_t const& __cordl_internal_get_lastQuestsAvailableToClaim() const;

constexpr int32_t& __cordl_internal_get_lastQuestsAvailableToClaim() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_monkeIdolDepositCelebrate() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_monkeIdolDepositCelebrate() ;

constexpr bool const& __cordl_internal_get_netInitialized() const;

constexpr bool& __cordl_internal_get_netInitialized() ;

constexpr ::UnityW<::GlobalNamespace::SITechTreeSO> const& __cordl_internal_get_progressionSORef() const;

constexpr ::UnityW<::GlobalNamespace::SITechTreeSO>& __cordl_internal_get_progressionSORef() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_questCompleteCelebrate() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_questCompleteCelebrate() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_techPointGainedCelebrate() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_techPointGainedCelebrate() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_tpParticleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_tpParticleSystem() ;

constexpr void __cordl_internal_set_OnBlasterHit(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnBlasterSplashHit(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnKnockback(::System::Action_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_activePlayerGadgets(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_authorityToClientRPCLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_bonusProgressionCelebrate(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_clientToAuthorityRPCLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_clientToClientRPCLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_currentProgression(::GlobalNamespace::SIPlayer_ProgressionData  value) ;

constexpr void __cordl_internal_set_exclusionZoneCount(int32_t  value) ;

constexpr void __cordl_internal_set_gamePlayer(::UnityW<::GlobalNamespace::GamePlayer>  value) ;

constexpr void __cordl_internal_set_lastQuestsAvailableToClaim(int32_t  value) ;

constexpr void __cordl_internal_set_monkeIdolDepositCelebrate(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_netInitialized(bool  value) ;

constexpr void __cordl_internal_set_progressionSORef(::UnityW<::GlobalNamespace::SITechTreeSO>  value) ;

constexpr void __cordl_internal_set_questCompleteCelebrate(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_techPointGainedCelebrate(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_tpParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x59e33b8, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnBlasterHit, addr 0x59e2a60, size 0x9c, virtual false, abstract: false, final false
inline void add_OnBlasterHit(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnBlasterSplashHit, addr 0x59e2b98, size 0x9c, virtual false, abstract: false, final false
inline void add_OnBlasterSplashHit(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnKnockback, addr 0x59e2900, size 0xb0, virtual false, abstract: false, final false
inline void add_OnKnockback(::System::Action_1<::UnityEngine::Vector3>*  value) ;

static inline float_t getStaticF__debug_lastStaleSlotLogTime() ;

static inline ::UnityW<::GlobalNamespace::SITechTreeSO> getStaticF_progressionSO() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SIPlayer>>* getStaticF_siPlayerByActorNr() ;

/// @brief Method get_ActorNr, addr 0x59d6af4, size 0x9c, virtual false, abstract: false, final false
inline int32_t get_ActorNr() ;

/// @brief Method get_CurrentProgression, addr 0x59dee0c, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::SIPlayer_ProgressionData get_CurrentProgression() ;

/// @brief Method get_LocalPlayer, addr 0x59d9cb8, size 0xa8, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::SIPlayer> get_LocalPlayer() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x59dedfc, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Method get_TotalGadgetLimit, addr 0x59de84c, size 0x30, virtual false, abstract: false, final false
inline int32_t get_TotalGadgetLimit() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnBlasterHit, addr 0x59e2afc, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnBlasterHit(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnBlasterSplashHit, addr 0x59e2c34, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnBlasterSplashHit(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnKnockback, addr 0x59e29b0, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnKnockback(::System::Action_1<::UnityEngine::Vector3>*  value) ;

static inline void setStaticF__debug_lastStaleSlotLogTime(float_t  value) ;

static inline void setStaticF_progressionSO(::UnityW<::GlobalNamespace::SITechTreeSO>  value) ;

static inline void setStaticF_siPlayerByActorNr(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SIPlayer>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x59dee04, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIPlayer(SIPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIPlayer(SIPlayer const& ) = delete;

/// @brief Field STANDARD_GADGET_LIMIT offset 0xffffffff size 0x4
static constexpr int32_t  STANDARD_GADGET_LIMIT{static_cast<int32_t>(0x3)};

/// @brief Field SUBSCRIBER_GADGET_LIMIT offset 0xffffffff size 0x4
static constexpr int32_t  SUBSCRIBER_GADGET_LIMIT{static_cast<int32_t>(0x6)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{326};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[SIPlayer]  ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[SIPlayer]  "};

/// @brief Field gamePlayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GamePlayer>  ___gamePlayer;

/// @brief Field clientToAuthorityRPCLimiter, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___clientToAuthorityRPCLimiter;

/// @brief Field clientToClientRPCLimiter, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___clientToClientRPCLimiter;

/// @brief Field authorityToClientRPCLimiter, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___authorityToClientRPCLimiter;

/// @brief Field progressionSORef, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITechTreeSO>  ___progressionSORef;

/// @brief Field tpParticleSystem, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___tpParticleSystem;

/// @brief Field bonusProgressionCelebrate, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___bonusProgressionCelebrate;

/// [FormerlySerializedAs("testPointGainedCelebrate")]
/// @brief Field techPointGainedCelebrate, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___techPointGainedCelebrate;

/// @brief Field monkeIdolDepositCelebrate, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___monkeIdolDepositCelebrate;

/// @brief Field questCompleteCelebrate, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___questCompleteCelebrate;

/// @brief Field lastQuestsAvailableToClaim, offset: 0x70, size: 0x4, def value: None
 int32_t  ___lastQuestsAvailableToClaim;

/// @brief Field exclusionZoneCount, offset: 0x74, size: 0x4, def value: None
 int32_t  ___exclusionZoneCount;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x78, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// @brief Field netInitialized, offset: 0x79, size: 0x1, def value: None
 bool  ___netInitialized;

/// @brief Field currentProgression, offset: 0x80, size: 0x38, def value: None
 ::GlobalNamespace::SIPlayer_ProgressionData  ___currentProgression;

/// @brief Field activePlayerGadgets, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___activePlayerGadgets;

/// [CompilerGenerated]
/// @brief Field OnKnockback, offset: 0xc0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Vector3>*  ___OnKnockback;

/// [CompilerGenerated]
/// @brief Field OnBlasterHit, offset: 0xc8, size: 0x8, def value: None
 ::System::Action*  ___OnBlasterHit;

/// [CompilerGenerated]
/// @brief Field OnBlasterSplashHit, offset: 0xd0, size: 0x8, def value: None
 ::System::Action*  ___OnBlasterSplashHit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIPlayer, ___gamePlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer, ___clientToAuthorityRPCLimiter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer, ___clientToClientRPCLimiter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer, ___authorityToClientRPCLimiter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer, ___progressionSORef) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer, ___tpParticleSystem) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer, ___bonusProgressionCelebrate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer, ___techPointGainedCelebrate) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer, ___monkeIdolDepositCelebrate) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer, ___questCompleteCelebrate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer, ___lastQuestsAvailableToClaim) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer, ___exclusionZoneCount) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer, ____TickRunning_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer, ___netInitialized) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer, ___currentProgression) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer, ___activePlayerGadgets) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer, ___OnKnockback) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer, ___OnBlasterHit) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer, ___OnBlasterSplashHit) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIPlayer) == 0xd8, "Size mismatch!");

} // namespace end def GlobalNamespace
