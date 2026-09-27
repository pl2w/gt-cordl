#pragma once
// IWYU pragma private; include "GorillaTagScripts/SubscriptionManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/zzzz__SubscriptionManager_SubscriptionDetails_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubscriptionManager)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct SubscriptionManager_SubscriptionDetails;
}
namespace GlobalNamespace {
struct SubscriptionManager_SubscriptionFeatures;
}
namespace GlobalNamespace {
struct SubscriptionManager_SubscriptionStatus;
}
namespace GlobalNamespace {
struct SubscriptionManager_SubscriptionTerm;
}
namespace GlobalNamespace {
struct SubscriptionManager__Awake_d__29;
}
namespace GlobalNamespace {
struct SubscriptionManager__InitializePersonalSubscriptionData_d__37;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTagScripts {
class SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest;
}
namespace GorillaTagScripts {
class SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse;
}
namespace GorillaTagScripts {
class SubscriptionManager_GorillaTagSubscription;
}
namespace GorillaTagScripts {
class SubscriptionManager_GrantedSubscriptionBenefit;
}
namespace Oculus::Platform {
class Message;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GorillaTagScripts {
class SubscriptionManager;
}
namespace GorillaTagScripts {
class SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest;
}
namespace GorillaTagScripts {
class SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse;
}
namespace GorillaTagScripts {
class SubscriptionManager_GorillaTagSubscription;
}
namespace GorillaTagScripts {
class SubscriptionManager_GrantedSubscriptionBenefit;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::SubscriptionManager*);
MARK_REF_T(::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest*);
MARK_REF_T(::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse*);
MARK_REF_T(::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription*);
MARK_REF_T(::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::SubscriptionManager*, "GorillaTagScripts", "SubscriptionManager");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest*, "GorillaTagScripts", "SubscriptionManager/GetMySubscriptionsAndTheirBenefitsRequest");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse*, "GorillaTagScripts", "SubscriptionManager/GetMySubscriptionsAndTheirBenefitsResponse");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription*, "GorillaTagScripts", "SubscriptionManager/GorillaTagSubscription");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*, "GorillaTagScripts", "SubscriptionManager/GrantedSubscriptionBenefit");
// Dependencies GorillaTagScripts.SubscriptionManager::SubscriptionDetails, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.SubscriptionManager
class CORDL_TYPE SubscriptionManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SubscriptionDetails = ::GlobalNamespace::SubscriptionManager_SubscriptionDetails;

using SubscriptionFeatures = ::GlobalNamespace::SubscriptionManager_SubscriptionFeatures;

using SubscriptionStatus = ::GlobalNamespace::SubscriptionManager_SubscriptionStatus;

using SubscriptionTerm = ::GlobalNamespace::SubscriptionManager_SubscriptionTerm;

using _Awake_d__29 = ::GlobalNamespace::SubscriptionManager__Awake_d__29;

using _InitializePersonalSubscriptionData_d__37 = ::GlobalNamespace::SubscriptionManager__InitializePersonalSubscriptionData_d__37;

using GetMySubscriptionsAndTheirBenefitsRequest = ::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest;

using GetMySubscriptionsAndTheirBenefitsResponse = ::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse;

using GorillaTagSubscription = ::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription;

using GrantedSubscriptionBenefit = ::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit;

/// @brief Field DEFAULT_SEND_RATE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DEFAULT_SEND_RATE, put=setStaticF_DEFAULT_SEND_RATE)) int32_t  DEFAULT_SEND_RATE;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GorillaTagScripts::SubscriptionManager>  Instance;

/// @brief Field OnLocalSubscriptionData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLocalSubscriptionData, put=setStaticF_OnLocalSubscriptionData)) ::System::Action*  OnLocalSubscriptionData;

/// @brief Field OnLocalSubscriptionDataResolved, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLocalSubscriptionDataResolved, put=setStaticF_OnLocalSubscriptionDataResolved)) ::System::Action*  OnLocalSubscriptionDataResolved;

/// @brief Field OnSubscriptionData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSubscriptionData, put=setStaticF_OnSubscriptionData)) ::System::Action*  OnSubscriptionData;

/// @brief Field PERF_CHANGE_ROOMSIZE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_PERF_CHANGE_ROOMSIZE, put=setStaticF_PERF_CHANGE_ROOMSIZE)) int32_t  PERF_CHANGE_ROOMSIZE;

/// @brief Field SUBSCRIBER_NAME_COLOR, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_SUBSCRIBER_NAME_COLOR, put=setStaticF_SUBSCRIBER_NAME_COLOR)) ::UnityEngine::Color  SUBSCRIBER_NAME_COLOR;

/// @brief Field SUBS_KEYS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SUBS_KEYS, put=setStaticF_SUBS_KEYS)) ::ArrayW<::StringW>  SUBS_KEYS;

/// @brief Field _localSubscriptionDataInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__localSubscriptionDataInitialized, put=setStaticF__localSubscriptionDataInitialized)) bool  _localSubscriptionDataInitialized;

/// @brief Field _localSubscriptionDataResolved, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__localSubscriptionDataResolved, put=setStaticF__localSubscriptionDataResolved)) bool  _localSubscriptionDataResolved;

/// @brief Field attempts, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_attempts, put=__cordl_internal_set_attempts)) int32_t  attempts;

/// @brief Field localSubscriptionDetails, offset 0xffffffff, size 0x28 
 __declspec(property(get=getStaticF_localSubscriptionDetails, put=setStaticF_localSubscriptionDetails)) ::GlobalNamespace::SubscriptionManager_SubscriptionDetails  localSubscriptionDetails;

/// @brief Field maxRetries, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_maxRetries, put=setStaticF_maxRetries)) int32_t  maxRetries;

/// @brief Field rigs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigs, put=__cordl_internal_set_rigs)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::GlobalNamespace::NetPlayer*>*  rigs;

/// @brief Field subData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_subData, put=__cordl_internal_set_subData)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::SubscriptionManager_SubscriptionDetails>*  subData;

/// @brief Field subSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_subSettings, put=setStaticF_subSettings)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  subSettings;

/// [AsyncStateMachine(typeof(GorillaTagScripts.SubscriptionManager::<Awake>d__29))]
/// @brief Method Awake, addr 0x5bd431c, size 0xa8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckSubscriptionFeaturePermission, addr 0x5bd5fec, size 0x1c, virtual false, abstract: false, final false
static inline bool CheckSubscriptionFeaturePermission(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures  feature) ;

/// @brief Method ForceRecheck, addr 0x5bd5048, size 0x60, virtual false, abstract: false, final false
static inline void ForceRecheck() ;

/// @brief Method GetLowestNetPlayer, addr 0x5bd5748, size 0xbc, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* GetLowestNetPlayer(::ArrayW<::GlobalNamespace::NetPlayer*>  players) ;

/// @brief Method GetSubsFeatureKey, addr 0x5bd42a0, size 0x7c, virtual false, abstract: false, final false
static inline ::StringW GetSubsFeatureKey(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures  feature) ;

/// @brief Method GetSubscriptionDetails, addr 0x5bd4a94, size 0x190, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SubscriptionManager_SubscriptionDetails GetSubscriptionDetails() ;

/// @brief Method GetSubscriptionDetails, addr 0x5bd4890, size 0x12c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SubscriptionManager_SubscriptionDetails GetSubscriptionDetails(::GlobalNamespace::NetPlayer*  np) ;

/// @brief Method GetSubscriptionDetails, addr 0x5bd4720, size 0x170, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SubscriptionManager_SubscriptionDetails GetSubscriptionDetails(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method GetSubscriptionSettingBool, addr 0x5bd5ea0, size 0x60, virtual false, abstract: false, final false
static inline bool GetSubscriptionSettingBool(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures  feature) ;

/// @brief Method GetSubscriptionSettingValue, addr 0x5bd5d68, size 0x138, virtual false, abstract: false, final false
static inline int32_t GetSubscriptionSettingValue(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures  feature) ;

/// [AsyncStateMachine(typeof(GorillaTagScripts.SubscriptionManager::<InitializePersonalSubscriptionData>d__37))]
/// @brief Method InitializePersonalSubscriptionData, addr 0x5bd4540, size 0x94, virtual false, abstract: false, final false
static inline void InitializePersonalSubscriptionData() ;

/// @brief Method IsLocalSubscribed, addr 0x5bd4e08, size 0x240, virtual false, abstract: false, final false
static inline bool IsLocalSubscribed() ;

/// @brief Method IsPlayerSubscribed, addr 0x5bd4a28, size 0x6c, virtual false, abstract: false, final false
static inline bool IsPlayerSubscribed(::GlobalNamespace::NetPlayer*  np) ;

/// @brief Method IsPlayerSubscribed, addr 0x5bd49bc, size 0x6c, virtual false, abstract: false, final false
static inline bool IsPlayerSubscribed(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method IsSubscriptionFeatureAvailable, addr 0x5bd5f00, size 0xec, virtual false, abstract: false, final false
static inline bool IsSubscriptionFeatureAvailable(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures  feature) ;

/// @brief Method LocalSubscriptionDetails, addr 0x5bd4d9c, size 0x6c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SubscriptionManager_SubscriptionDetails LocalSubscriptionDetails() ;

/// @brief Method LocalSubscriptionStatus, addr 0x5bd4c24, size 0x178, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SubscriptionManager_SubscriptionStatus LocalSubscriptionStatus() ;

static inline ::GorillaTagScripts::SubscriptionManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x5bd45d4, size 0x14c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5bd43c4, size 0x17c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGetViewerPurchasesStartup, addr 0x5bd5804, size 0x4b4, virtual false, abstract: false, final false
inline void OnGetViewerPurchasesStartup(::Oculus::Platform::Message*  msg) ;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method OnLoad, addr 0x5bd6008, size 0x4, virtual false, abstract: false, final false
static inline void OnLoad() ;

/// @brief Method OnPlayerJoinedRoom, addr 0x5bd50a8, size 0x1a4, virtual false, abstract: false, final false
inline void OnPlayerJoinedRoom(::GlobalNamespace::NetPlayer*  npl) ;

/// @brief Method OnPlayerLeft, addr 0x5bd54c4, size 0x284, virtual false, abstract: false, final false
inline void OnPlayerLeft(::GlobalNamespace::NetPlayer*  pl) ;

/// @brief Method SetSubscriptionSettingValue, addr 0x5bd5cb8, size 0xb0, virtual false, abstract: false, final false
static inline void SetSubscriptionSettingValue(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures  feature, int32_t  settingValue) ;

/// @brief Method UpdatePlayerSubsDetails, addr 0x5bd524c, size 0x278, virtual false, abstract: false, final false
inline void UpdatePlayerSubsDetails(::GlobalNamespace::NetPlayer*  player, ::System::Nullable_1<bool>  isSubscribed, ::System::Nullable_1<int32_t>  daysAccrued) ;

/// @brief Method UpdatePlayerSubscriptionData, addr 0x5bd600c, size 0x204, virtual false, abstract: false, final false
static inline void UpdatePlayerSubscriptionData(::GlobalNamespace::NetPlayer*  player, bool  isSubscribed, int32_t  daysAccrued) ;

/// [CompilerGenerated]
/// @brief Method <InitializePersonalSubscriptionData>g__MarkInitialized|37_0, addr 0x5bd63ac, size 0x84, virtual false, abstract: false, final false
static inline void _InitializePersonalSubscriptionData_g__MarkInitialized_37_0() ;

/// [CompilerGenerated]
/// @brief Method <InitializePersonalSubscriptionData>g__MarkResolved|37_1, addr 0x5bd6430, size 0x7c, virtual false, abstract: false, final false
static inline void _InitializePersonalSubscriptionData_g__MarkResolved_37_1() ;

constexpr int32_t const& __cordl_internal_get_attempts() const;

constexpr int32_t& __cordl_internal_get_attempts() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_rigs() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_rigs() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::SubscriptionManager_SubscriptionDetails>* const& __cordl_internal_get_subData() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::SubscriptionManager_SubscriptionDetails>*& __cordl_internal_get_subData() ;

constexpr void __cordl_internal_set_attempts(int32_t  value) ;

constexpr void __cordl_internal_set_rigs(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set_subData(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::SubscriptionManager_SubscriptionDetails>*  value) ;

/// @brief Method .ctor, addr 0x5bd6210, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_DEFAULT_SEND_RATE() ;

static inline ::UnityW<::GorillaTagScripts::SubscriptionManager> getStaticF_Instance() ;

static inline ::System::Action* getStaticF_OnLocalSubscriptionData() ;

static inline ::System::Action* getStaticF_OnLocalSubscriptionDataResolved() ;

static inline ::System::Action* getStaticF_OnSubscriptionData() ;

static inline int32_t getStaticF_PERF_CHANGE_ROOMSIZE() ;

static inline ::UnityEngine::Color getStaticF_SUBSCRIBER_NAME_COLOR() ;

static inline ::ArrayW<::StringW> getStaticF_SUBS_KEYS() ;

static inline bool getStaticF__localSubscriptionDataInitialized() ;

static inline bool getStaticF__localSubscriptionDataResolved() ;

static inline ::GlobalNamespace::SubscriptionManager_SubscriptionDetails getStaticF_localSubscriptionDetails() ;

static inline int32_t getStaticF_maxRetries() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* getStaticF_subSettings() ;

/// @brief Method get_LocalSubscriptionDataInitialized, addr 0x5bd414c, size 0x58, virtual false, abstract: false, final false
static inline bool get_LocalSubscriptionDataInitialized() ;

/// @brief Method get_LocalSubscriptionDataResolved, addr 0x5bd41a4, size 0x58, virtual false, abstract: false, final false
static inline bool get_LocalSubscriptionDataResolved() ;

/// @brief Method get_SubsOnlyMatchmaking, addr 0x5bd41fc, size 0x50, virtual false, abstract: false, final false
static inline bool get_SubsOnlyMatchmaking() ;

static inline void setStaticF_DEFAULT_SEND_RATE(int32_t  value) ;

static inline void setStaticF_Instance(::UnityW<::GorillaTagScripts::SubscriptionManager>  value) ;

static inline void setStaticF_OnLocalSubscriptionData(::System::Action*  value) ;

static inline void setStaticF_OnLocalSubscriptionDataResolved(::System::Action*  value) ;

static inline void setStaticF_OnSubscriptionData(::System::Action*  value) ;

static inline void setStaticF_PERF_CHANGE_ROOMSIZE(int32_t  value) ;

static inline void setStaticF_SUBSCRIBER_NAME_COLOR(::UnityEngine::Color  value) ;

static inline void setStaticF_SUBS_KEYS(::ArrayW<::StringW>  value) ;

static inline void setStaticF__localSubscriptionDataInitialized(bool  value) ;

static inline void setStaticF__localSubscriptionDataResolved(bool  value) ;

static inline void setStaticF_localSubscriptionDetails(::GlobalNamespace::SubscriptionManager_SubscriptionDetails  value) ;

static inline void setStaticF_maxRetries(int32_t  value) ;

static inline void setStaticF_subSettings(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

/// @brief Method set_SubsOnlyMatchmaking, addr 0x5bd424c, size 0x54, virtual false, abstract: false, final false
static inline void set_SubsOnlyMatchmaking(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubscriptionManager(SubscriptionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubscriptionManager(SubscriptionManager const& ) = delete;

/// @brief Field FAN_CLUB_BASE_SKU offset 0xffffffff size 0x8
static constexpr ::ConstString  FAN_CLUB_BASE_SKU{u"fan_club"};

/// @brief Field FAN_CLUB_STEAM_SKU offset 0xffffffff size 0x8
static constexpr ::ConstString  FAN_CLUB_STEAM_SKU{u"40494"};

/// @brief Field PERF_SEND_RATE offset 0xffffffff size 0x4
static constexpr int32_t  PERF_SEND_RATE{static_cast<int32_t>(0x14)};

/// @brief Field SUBSCRIBER_NAME_COLOR_HEX offset 0xffffffff size 0x8
static constexpr ::ConstString  SUBSCRIBER_NAME_COLOR_HEX{u"#ffc600"};

/// @brief Field SUB_PREFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  SUB_PREFIX{u"SMKEYPREFIX"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4024};

/// @brief Field subData, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::SubscriptionManager_SubscriptionDetails>*  ___subData;

/// @brief Field rigs, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::GlobalNamespace::NetPlayer*>*  ___rigs;

/// @brief Field attempts, offset: 0x30, size: 0x4, def value: None
 int32_t  ___attempts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::SubscriptionManager, ___subData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager, ___rigs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager, ___attempts) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::SubscriptionManager) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts
// Dependencies System.Nullable`1<T>, System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.SubscriptionManager/GetMySubscriptionsAndTheirBenefitsResponse
class CORDL_TYPE SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse : public ::System::Object {
public:
// Declarations
/// @brief Field NewlyGrantedBenefitsBySubscriptionSku, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_NewlyGrantedBenefitsBySubscriptionSku, put=__cordl_internal_set_NewlyGrantedBenefitsBySubscriptionSku)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>*  NewlyGrantedBenefitsBySubscriptionSku;

/// @brief Field PreviouslyGrantedBenefitsBySubscriptionSku, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PreviouslyGrantedBenefitsBySubscriptionSku, put=__cordl_internal_set_PreviouslyGrantedBenefitsBySubscriptionSku)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>*  PreviouslyGrantedBenefitsBySubscriptionSku;

/// @brief Field SharedGroupDataUpdateSucceeded, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_SharedGroupDataUpdateSucceeded, put=__cordl_internal_set_SharedGroupDataUpdateSucceeded)) ::System::Nullable_1<bool>  SharedGroupDataUpdateSucceeded;

/// @brief Field Subscriptions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Subscriptions, put=__cordl_internal_set_Subscriptions)) ::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription*>*  Subscriptions;

static inline ::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>* const& __cordl_internal_get_NewlyGrantedBenefitsBySubscriptionSku() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>*& __cordl_internal_get_NewlyGrantedBenefitsBySubscriptionSku() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>* const& __cordl_internal_get_PreviouslyGrantedBenefitsBySubscriptionSku() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>*& __cordl_internal_get_PreviouslyGrantedBenefitsBySubscriptionSku() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_SharedGroupDataUpdateSucceeded() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_SharedGroupDataUpdateSucceeded() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription*>* const& __cordl_internal_get_Subscriptions() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription*>*& __cordl_internal_get_Subscriptions() ;

constexpr void __cordl_internal_set_NewlyGrantedBenefitsBySubscriptionSku(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>*  value) ;

constexpr void __cordl_internal_set_PreviouslyGrantedBenefitsBySubscriptionSku(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>*  value) ;

constexpr void __cordl_internal_set_SharedGroupDataUpdateSucceeded(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_Subscriptions(::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription*>*  value) ;

/// @brief Method .ctor, addr 0x5bd64c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse(SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse(SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4021};

/// @brief Field Subscriptions, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription*>*  ___Subscriptions;

/// @brief Field PreviouslyGrantedBenefitsBySubscriptionSku, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>*  ___PreviouslyGrantedBenefitsBySubscriptionSku;

/// @brief Field NewlyGrantedBenefitsBySubscriptionSku, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>*  ___NewlyGrantedBenefitsBySubscriptionSku;

/// @brief Field SharedGroupDataUpdateSucceeded, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___SharedGroupDataUpdateSucceeded;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse, ___Subscriptions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse, ___PreviouslyGrantedBenefitsBySubscriptionSku) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse, ___NewlyGrantedBenefitsBySubscriptionSku) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse, ___SharedGroupDataUpdateSucceeded) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts
// Dependencies System.Nullable`1<T>, System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.SubscriptionManager/GetMySubscriptionsAndTheirBenefitsRequest
class CORDL_TYPE SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest : public ::System::Object {
public:
// Declarations
/// @brief Field MothershipDeploymentId, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipDeploymentId, put=__cordl_internal_set_MothershipDeploymentId)) ::StringW  MothershipDeploymentId;

/// @brief Field MothershipEnvId, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipEnvId, put=__cordl_internal_set_MothershipEnvId)) ::StringW  MothershipEnvId;

/// @brief Field MothershipId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipId, put=__cordl_internal_set_MothershipId)) ::StringW  MothershipId;

/// @brief Field MothershipToken, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipToken, put=__cordl_internal_set_MothershipToken)) ::StringW  MothershipToken;

/// @brief Field Refresh, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Refresh, put=__cordl_internal_set_Refresh)) bool  Refresh;

/// @brief Field SkipBenefitsCheck, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_SkipBenefitsCheck, put=__cordl_internal_set_SkipBenefitsCheck)) ::System::Nullable_1<bool>  SkipBenefitsCheck;

/// @brief Field SkipSharedGroupDataUpdate, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_SkipSharedGroupDataUpdate, put=__cordl_internal_set_SkipSharedGroupDataUpdate)) ::System::Nullable_1<bool>  SkipSharedGroupDataUpdate;

static inline ::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_MothershipDeploymentId() const;

constexpr ::StringW& __cordl_internal_get_MothershipDeploymentId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipEnvId() const;

constexpr ::StringW& __cordl_internal_get_MothershipEnvId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipId() const;

constexpr ::StringW& __cordl_internal_get_MothershipId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipToken() const;

constexpr ::StringW& __cordl_internal_get_MothershipToken() ;

constexpr bool const& __cordl_internal_get_Refresh() const;

constexpr bool& __cordl_internal_get_Refresh() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_SkipBenefitsCheck() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_SkipBenefitsCheck() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_SkipSharedGroupDataUpdate() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_SkipSharedGroupDataUpdate() ;

constexpr void __cordl_internal_set_MothershipDeploymentId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipEnvId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipToken(::StringW  value) ;

constexpr void __cordl_internal_set_Refresh(bool  value) ;

constexpr void __cordl_internal_set_SkipBenefitsCheck(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_SkipSharedGroupDataUpdate(::System::Nullable_1<bool>  value) ;

/// @brief Method .ctor, addr 0x5bd64bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest(SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest(SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4020};

/// @brief Field Refresh, offset: 0x10, size: 0x1, def value: None
 bool  ___Refresh;

/// @brief Field SkipBenefitsCheck, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___SkipBenefitsCheck;

/// @brief Field SkipSharedGroupDataUpdate, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___SkipSharedGroupDataUpdate;

/// @brief Field MothershipId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___MothershipId;

/// @brief Size padding 0x38 - 0x58 = 0x20, packed as 0x20
 uint8_t  _cordl_size_padding[0x20];

/// @brief Field MothershipToken, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___MothershipToken;

/// @brief Field MothershipEnvId, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___MothershipEnvId;

/// @brief Field MothershipDeploymentId, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___MothershipDeploymentId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest, ___Refresh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest, ___SkipBenefitsCheck) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest, ___SkipSharedGroupDataUpdate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest, ___MothershipId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest, ___MothershipToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest, ___MothershipEnvId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest, ___MothershipDeploymentId) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts
// Dependencies System.DateTimeOffset, System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.SubscriptionManager/GrantedSubscriptionBenefit
class CORDL_TYPE SubscriptionManager_GrantedSubscriptionBenefit : public ::System::Object {
public:
// Declarations
/// @brief Field BenefitId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_BenefitId, put=__cordl_internal_set_BenefitId)) ::StringW  BenefitId;

/// @brief Field GrantedTime, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_GrantedTime, put=__cordl_internal_set_GrantedTime)) ::System::DateTimeOffset  GrantedTime;

/// @brief Field PlayFabItemId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabItemId, put=__cordl_internal_set_PlayFabItemId)) ::StringW  PlayFabItemId;

static inline ::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BenefitId() const;

constexpr ::StringW& __cordl_internal_get_BenefitId() ;

constexpr ::System::DateTimeOffset const& __cordl_internal_get_GrantedTime() const;

constexpr ::System::DateTimeOffset& __cordl_internal_get_GrantedTime() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabItemId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabItemId() ;

constexpr void __cordl_internal_set_BenefitId(::StringW  value) ;

constexpr void __cordl_internal_set_GrantedTime(::System::DateTimeOffset  value) ;

constexpr void __cordl_internal_set_PlayFabItemId(::StringW  value) ;

/// @brief Method .ctor, addr 0x5bd64b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionManager_GrantedSubscriptionBenefit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionManager_GrantedSubscriptionBenefit", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubscriptionManager_GrantedSubscriptionBenefit(SubscriptionManager_GrantedSubscriptionBenefit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionManager_GrantedSubscriptionBenefit", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubscriptionManager_GrantedSubscriptionBenefit(SubscriptionManager_GrantedSubscriptionBenefit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4019};

/// @brief Field BenefitId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___BenefitId;

/// @brief Field GrantedTime, offset: 0x18, size: 0x10, def value: None
 ::System::DateTimeOffset  ___GrantedTime;

/// @brief Field PlayFabItemId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___PlayFabItemId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit, ___BenefitId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit, ___GrantedTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit, ___PlayFabItemId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts
// Dependencies System.DateTimeOffset, System.Nullable`1<T>, System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.SubscriptionManager/GorillaTagSubscription
class CORDL_TYPE SubscriptionManager_GorillaTagSubscription : public ::System::Object {
public:
// Declarations
/// @brief Field CurrentStartDate, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_CurrentStartDate, put=__cordl_internal_set_CurrentStartDate)) ::System::DateTimeOffset  CurrentStartDate;

/// @brief Field EarliestStartDate, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_EarliestStartDate, put=__cordl_internal_set_EarliestStartDate)) ::System::DateTimeOffset  EarliestStartDate;

/// @brief Field ExpirationTime, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_ExpirationTime, put=__cordl_internal_set_ExpirationTime)) ::System::Nullable_1<::System::DateTimeOffset>  ExpirationTime;

/// @brief Field ExternalServiceName, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExternalServiceName, put=__cordl_internal_set_ExternalServiceName)) ::StringW  ExternalServiceName;

/// @brief Field ExternalSubscriptionId, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExternalSubscriptionId, put=__cordl_internal_set_ExternalSubscriptionId)) ::StringW  ExternalSubscriptionId;

/// @brief Field IsActive, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsActive, put=__cordl_internal_set_IsActive)) bool  IsActive;

/// @brief Field IsCancelling, offset 0x6d, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsCancelling, put=__cordl_internal_set_IsCancelling)) bool  IsCancelling;

/// @brief Field MostRecentBillingCycleEndDate, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_MostRecentBillingCycleEndDate, put=__cordl_internal_set_MostRecentBillingCycleEndDate)) ::System::DateTimeOffset  MostRecentBillingCycleEndDate;

/// @brief Field MostRecentBillingCycleStartDate, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_MostRecentBillingCycleStartDate, put=__cordl_internal_set_MostRecentBillingCycleStartDate)) ::System::DateTimeOffset  MostRecentBillingCycleStartDate;

/// @brief Field PlayerId, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerId, put=__cordl_internal_set_PlayerId)) ::StringW  PlayerId;

/// @brief Field Sku, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sku, put=__cordl_internal_set_Sku)) ::StringW  Sku;

/// @brief Field SubscriptionCatalogItemId, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_SubscriptionCatalogItemId, put=__cordl_internal_set_SubscriptionCatalogItemId)) ::StringW  SubscriptionCatalogItemId;

/// @brief Field SubscriptionId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_SubscriptionId, put=__cordl_internal_set_SubscriptionId)) ::StringW  SubscriptionId;

/// @brief Field TotalLifetimeSeconds, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_TotalLifetimeSeconds, put=__cordl_internal_set_TotalLifetimeSeconds)) int32_t  TotalLifetimeSeconds;

/// @brief Field TrialType, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrialType, put=__cordl_internal_set_TrialType)) ::StringW  TrialType;

static inline ::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription* New_ctor() ;

constexpr ::System::DateTimeOffset const& __cordl_internal_get_CurrentStartDate() const;

constexpr ::System::DateTimeOffset& __cordl_internal_get_CurrentStartDate() ;

constexpr ::System::DateTimeOffset const& __cordl_internal_get_EarliestStartDate() const;

constexpr ::System::DateTimeOffset& __cordl_internal_get_EarliestStartDate() ;

constexpr ::System::Nullable_1<::System::DateTimeOffset> const& __cordl_internal_get_ExpirationTime() const;

constexpr ::System::Nullable_1<::System::DateTimeOffset>& __cordl_internal_get_ExpirationTime() ;

constexpr ::StringW const& __cordl_internal_get_ExternalServiceName() const;

constexpr ::StringW& __cordl_internal_get_ExternalServiceName() ;

constexpr ::StringW const& __cordl_internal_get_ExternalSubscriptionId() const;

constexpr ::StringW& __cordl_internal_get_ExternalSubscriptionId() ;

constexpr bool const& __cordl_internal_get_IsActive() const;

constexpr bool& __cordl_internal_get_IsActive() ;

constexpr bool const& __cordl_internal_get_IsCancelling() const;

constexpr bool& __cordl_internal_get_IsCancelling() ;

constexpr ::System::DateTimeOffset const& __cordl_internal_get_MostRecentBillingCycleEndDate() const;

constexpr ::System::DateTimeOffset& __cordl_internal_get_MostRecentBillingCycleEndDate() ;

constexpr ::System::DateTimeOffset const& __cordl_internal_get_MostRecentBillingCycleStartDate() const;

constexpr ::System::DateTimeOffset& __cordl_internal_get_MostRecentBillingCycleStartDate() ;

constexpr ::StringW const& __cordl_internal_get_PlayerId() const;

constexpr ::StringW& __cordl_internal_get_PlayerId() ;

constexpr ::StringW const& __cordl_internal_get_Sku() const;

constexpr ::StringW& __cordl_internal_get_Sku() ;

constexpr ::StringW const& __cordl_internal_get_SubscriptionCatalogItemId() const;

constexpr ::StringW& __cordl_internal_get_SubscriptionCatalogItemId() ;

constexpr ::StringW const& __cordl_internal_get_SubscriptionId() const;

constexpr ::StringW& __cordl_internal_get_SubscriptionId() ;

constexpr int32_t const& __cordl_internal_get_TotalLifetimeSeconds() const;

constexpr int32_t& __cordl_internal_get_TotalLifetimeSeconds() ;

constexpr ::StringW const& __cordl_internal_get_TrialType() const;

constexpr ::StringW& __cordl_internal_get_TrialType() ;

constexpr void __cordl_internal_set_CurrentStartDate(::System::DateTimeOffset  value) ;

constexpr void __cordl_internal_set_EarliestStartDate(::System::DateTimeOffset  value) ;

constexpr void __cordl_internal_set_ExpirationTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

constexpr void __cordl_internal_set_ExternalServiceName(::StringW  value) ;

constexpr void __cordl_internal_set_ExternalSubscriptionId(::StringW  value) ;

constexpr void __cordl_internal_set_IsActive(bool  value) ;

constexpr void __cordl_internal_set_IsCancelling(bool  value) ;

constexpr void __cordl_internal_set_MostRecentBillingCycleEndDate(::System::DateTimeOffset  value) ;

constexpr void __cordl_internal_set_MostRecentBillingCycleStartDate(::System::DateTimeOffset  value) ;

constexpr void __cordl_internal_set_PlayerId(::StringW  value) ;

constexpr void __cordl_internal_set_Sku(::StringW  value) ;

constexpr void __cordl_internal_set_SubscriptionCatalogItemId(::StringW  value) ;

constexpr void __cordl_internal_set_SubscriptionId(::StringW  value) ;

constexpr void __cordl_internal_set_TotalLifetimeSeconds(int32_t  value) ;

constexpr void __cordl_internal_set_TrialType(::StringW  value) ;

/// @brief Method .ctor, addr 0x5bd64ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionManager_GorillaTagSubscription() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionManager_GorillaTagSubscription", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubscriptionManager_GorillaTagSubscription(SubscriptionManager_GorillaTagSubscription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionManager_GorillaTagSubscription", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubscriptionManager_GorillaTagSubscription(SubscriptionManager_GorillaTagSubscription const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4018};

/// @brief Field SubscriptionId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___SubscriptionId;

/// @brief Field EarliestStartDate, offset: 0x18, size: 0x10, def value: None
 ::System::DateTimeOffset  ___EarliestStartDate;

/// @brief Field CurrentStartDate, offset: 0x28, size: 0x10, def value: None
 ::System::DateTimeOffset  ___CurrentStartDate;

/// @brief Field MostRecentBillingCycleStartDate, offset: 0x38, size: 0x10, def value: None
 ::System::DateTimeOffset  ___MostRecentBillingCycleStartDate;

/// @brief Field MostRecentBillingCycleEndDate, offset: 0x48, size: 0x10, def value: None
 ::System::DateTimeOffset  ___MostRecentBillingCycleEndDate;

/// @brief Field ExpirationTime, offset: 0x58, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  ___ExpirationTime;

/// @brief Field TotalLifetimeSeconds, offset: 0x68, size: 0x4, def value: None
 int32_t  ___TotalLifetimeSeconds;

/// @brief Field IsActive, offset: 0x6c, size: 0x1, def value: None
 bool  ___IsActive;

/// @brief Field IsCancelling, offset: 0x6d, size: 0x1, def value: None
 bool  ___IsCancelling;

/// @brief Field Sku, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___Sku;

/// @brief Field PlayerId, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___PlayerId;

/// @brief Field TrialType, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___TrialType;

/// @brief Field ExternalServiceName, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___ExternalServiceName;

/// @brief Field ExternalSubscriptionId, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___ExternalSubscriptionId;

/// @brief Field SubscriptionCatalogItemId, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___SubscriptionCatalogItemId;

/// @brief Size padding 0xa8 - 0xa0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription, ___SubscriptionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription, ___EarliestStartDate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription, ___CurrentStartDate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription, ___MostRecentBillingCycleStartDate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription, ___MostRecentBillingCycleEndDate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription, ___ExpirationTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription, ___TotalLifetimeSeconds) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription, ___IsActive) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription, ___IsCancelling) == 0x6d, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription, ___Sku) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription, ___PlayerId) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription, ___TrialType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription, ___ExternalServiceName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription, ___ExternalSubscriptionId) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription, ___SubscriptionCatalogItemId) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription) == 0xa8, "Size mismatch!");

} // namespace end def GorillaTagScripts
