#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaServer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaServer)
namespace GorillaNetworking {
class BroadcastMyRoomRequest;
}
namespace GorillaNetworking {
class CheckForBadNameRequest;
}
namespace GorillaNetworking {
class GetAcceptedAgreementsRequest;
}
namespace GorillaNetworking {
class GorillaServer_ClaimItemResponse;
}
namespace GorillaNetworking {
class GorillaServer_ReconcileBundleRewardsResponse;
}
namespace GorillaNetworking {
class GorillaServer__SendClaimItem_d__19;
}
namespace GorillaNetworking {
class GorillaServer__SendReconcileBundleRewards_d__16;
}
namespace GorillaNetworking {
class GorillaServer___c;
}
namespace GorillaNetworking {
class GorillaServer___c__DisplayClass23_0;
}
namespace GorillaNetworking {
template<typename T>
class GorillaServer___c__DisplayClass30_0_1;
}
namespace GorillaNetworking {
class ReturnCurrentVersionRequest;
}
namespace GorillaNetworking {
class ReturnQueueStatsRequest;
}
namespace GorillaNetworking {
class ReturnVstumpMapStatsRequest;
}
namespace GorillaNetworking {
class SubmitAcceptedAgreementsRequest;
}
namespace GorillaNetworking {
class TitleDataFeatureFlags;
}
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace PlayFab::ClientModels {
class ExecuteCloudScriptResult;
}
namespace PlayFab::CloudScriptModels {
class EntityKey;
}
namespace PlayFab::CloudScriptModels {
class ExecuteFunctionResult;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace GorillaNetworking {
class GorillaServer;
}
namespace GorillaNetworking {
class GorillaServer_ClaimItemResponse;
}
namespace GorillaNetworking {
class GorillaServer_ReconcileBundleRewardsResponse;
}
namespace GorillaNetworking {
class GorillaServer__SendClaimItem_d__19;
}
namespace GorillaNetworking {
class GorillaServer__SendReconcileBundleRewards_d__16;
}
namespace GorillaNetworking {
class GorillaServer___c;
}
namespace GorillaNetworking {
class GorillaServer___c__DisplayClass23_0;
}
namespace GorillaNetworking {
template<typename T>
class GorillaServer___c__DisplayClass30_0_1;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::GorillaServer*);
MARK_REF_T(::GorillaNetworking::GorillaServer_ClaimItemResponse*);
MARK_REF_T(::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*);
MARK_REF_T(::GorillaNetworking::GorillaServer__SendClaimItem_d__19*);
MARK_REF_T(::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16*);
MARK_REF_T(::GorillaNetworking::GorillaServer___c*);
MARK_REF_T(::GorillaNetworking::GorillaServer___c__DisplayClass23_0*);
MARK_GEN_REF_T_PTR(::GorillaNetworking::GorillaServer___c__DisplayClass30_0_1);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaServer*, "GorillaNetworking", "GorillaServer");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaServer_ClaimItemResponse*, "GorillaNetworking", "GorillaServer/ClaimItemResponse");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*, "GorillaNetworking", "GorillaServer/ReconcileBundleRewardsResponse");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaServer__SendClaimItem_d__19*, "GorillaNetworking", "GorillaServer/<SendClaimItem>d__19");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16*, "GorillaNetworking", "GorillaServer/<SendReconcileBundleRewards>d__16");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaServer___c*, "GorillaNetworking", "GorillaServer/<>c");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaServer___c__DisplayClass23_0*, "GorillaNetworking", "GorillaServer/<>c__DisplayClass23_0");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GorillaNetworking::GorillaServer___c__DisplayClass30_0_1, "GorillaNetworking", "GorillaServer/<>c__DisplayClass30_0`1");
// Dependencies System.ValueTuple`2<T1, T2>, UnityEngine.MonoBehaviour
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaServer
class CORDL_TYPE GorillaServer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ClaimItemResponse = ::GorillaNetworking::GorillaServer_ClaimItemResponse;

using ReconcileBundleRewardsResponse = ::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse;

using _SendClaimItem_d__19 = ::GorillaNetworking::GorillaServer__SendClaimItem_d__19;

using _SendReconcileBundleRewards_d__16 = ::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16;

using __c = ::GorillaNetworking::GorillaServer___c;

using __c__DisplayClass23_0 = ::GorillaNetworking::GorillaServer___c__DisplayClass23_0;

template<typename T>
using __c__DisplayClass30_0_1 = ::GorillaNetworking::GorillaServer___c__DisplayClass30_0_1<T>;

/// @brief Field DefaultDeployFeatureFlagsEnabled, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DefaultDeployFeatureFlagsEnabled, put=__cordl_internal_set_DefaultDeployFeatureFlagsEnabled)) ::System::Collections::Generic::List_1<::StringW>*  DefaultDeployFeatureFlagsEnabled;

 __declspec(property(get=get_FeatureFlagsReady)) bool  FeatureFlagsReady;

/// @brief Field FeatureFlagsTitleDataKey, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_FeatureFlagsTitleDataKey, put=__cordl_internal_set_FeatureFlagsTitleDataKey)) ::StringW  FeatureFlagsTitleDataKey;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GorillaNetworking::GorillaServer>  Instance;

/// @brief Field cachedSuppressZonesInVStump, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_cachedSuppressZonesInVStump, put=__cordl_internal_set_cachedSuppressZonesInVStump)) ::System::ValueTuple_2<bool,bool>  cachedSuppressZonesInVStump;

/// @brief Field cachedVStumpGrabbablesFix, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_cachedVStumpGrabbablesFix, put=__cordl_internal_set_cachedVStumpGrabbablesFix)) ::System::ValueTuple_2<bool,bool>  cachedVStumpGrabbablesFix;

/// @brief Field debug, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_debug, put=__cordl_internal_set_debug)) bool  debug;

/// @brief Field featureFlags, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_featureFlags, put=__cordl_internal_set_featureFlags)) ::GorillaNetworking::TitleDataFeatureFlags*  featureFlags;

 __declspec(property(get=get_playerEntity)) ::PlayFab::CloudScriptModels::EntityKey*  playerEntity;

/// @brief Field serializationSettings, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializationSettings, put=__cordl_internal_set_serializationSettings)) ::Newtonsoft::Json::JsonSerializerSettings*  serializationSettings;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method AddOrRemoveDLCOwnership, addr 0x5c8cc74, size 0x1ac, virtual false, abstract: false, final false
inline void AddOrRemoveDLCOwnership(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback) ;

/// @brief Method Awake, addr 0x5c8c480, size 0xd4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BroadcastMyRoom, addr 0x5c8ce20, size 0x190, virtual false, abstract: false, final false
inline void BroadcastMyRoom(::GorillaNetworking::BroadcastMyRoomRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback) ;

/// @brief Method CheckAlarmClocksEnabled, addr 0x5c8ee78, size 0x50, virtual false, abstract: false, final false
inline bool CheckAlarmClocksEnabled() ;

/// @brief Method CheckForBadName, addr 0x5c8d908, size 0x254, virtual false, abstract: false, final false
inline void CheckForBadName(::GorillaNetworking::CheckForBadNameRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback) ;

/// @brief Method CheckIsInKIDOptInCohort, addr 0x5c8e704, size 0x50, virtual false, abstract: false, final false
inline bool CheckIsInKIDOptInCohort() ;

/// @brief Method CheckIsInKIDRequiredCohort, addr 0x5c8e7c4, size 0x50, virtual false, abstract: false, final false
inline bool CheckIsInKIDRequiredCohort() ;

/// @brief Method CheckIsMothershipTelemetryEnabled, addr 0x5c8e8ec, size 0x50, virtual false, abstract: false, final false
inline bool CheckIsMothershipTelemetryEnabled() ;

/// @brief Method CheckIsSuppressZonesInVStumpEnabled, addr 0x5c8e9cc, size 0x90, virtual false, abstract: false, final false
inline bool CheckIsSuppressZonesInVStumpEnabled() ;

/// @brief Method CheckIsTZE_Enabled, addr 0x5c8e89c, size 0x50, virtual false, abstract: false, final false
inline bool CheckIsTZE_Enabled() ;

/// @brief Method CheckIsVStumpGrabbablesFixEnabled, addr 0x5c8e93c, size 0x90, virtual false, abstract: false, final false
inline bool CheckIsVStumpGrabbablesFixEnabled() ;

/// @brief Method CheckOptedInKID, addr 0x5c8e814, size 0x88, virtual false, abstract: false, final false
inline bool CheckOptedInKID() ;

/// @brief Method CheckRoomControlsEnabled, addr 0x5c8ea5c, size 0x50, virtual false, abstract: false, final false
inline bool CheckRoomControlsEnabled() ;

/// @brief Method CheckRoomControlsEnabledForAnyone, addr 0x5c8ed0c, size 0x50, virtual false, abstract: false, final false
inline bool CheckRoomControlsEnabledForAnyone() ;

/// @brief Method CheckRoomControlsEnabledForUser, addr 0x5c8eaac, size 0x58, virtual false, abstract: false, final false
inline bool CheckRoomControlsEnabledForUser(::StringW  playFabId) ;

/// @brief Method ClaimItem, addr 0x5c8ca74, size 0x13c, virtual false, abstract: false, final false
inline void ClaimItem(::StringW  playFabItemId, ::System::Action_1<::GorillaNetworking::GorillaServer_ClaimItemResponse*>*  successCallback, ::System::Action_1<::StringW>*  errorCallback) ;

/// @brief Method DebugWrapCb, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::System::Action_1<T>* DebugWrapCb(::System::Action_1<T>*  cb, ::StringW  label) ;

/// @brief Method GetAcceptedAgreements, addr 0x5c8d230, size 0x2a8, virtual false, abstract: false, final false
inline void GetAcceptedAgreements(::GorillaNetworking::GetAcceptedAgreementsRequest*  request, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback) ;

/// @brief Method GetRandomName, addr 0x5c8db5c, size 0x1b4, virtual false, abstract: false, final false
inline void GetRandomName(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback) ;

static inline ::GorillaNetworking::GorillaServer* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0x5c8e564, size 0x1a0, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0x5c8e348, size 0x21c, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method ReconcileBundleRewards, addr 0x5c8c890, size 0x134, virtual false, abstract: false, final false
inline void ReconcileBundleRewards(::System::Action_1<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>*  successCallback, ::System::Action_1<::StringW>*  errorCallback) ;

/// @brief Method ReturnCurrentVersion, addr 0x5c8c554, size 0x190, virtual false, abstract: false, final false
inline void ReturnCurrentVersion(::GorillaNetworking::ReturnCurrentVersionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback) ;

/// @brief Method ReturnQueueStats, addr 0x5c8dd10, size 0x210, virtual false, abstract: false, final false
inline void ReturnQueueStats(::GorillaNetworking::ReturnQueueStatsRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback) ;

/// @brief Method ReturnVstumpMapStats, addr 0x5c8df20, size 0x210, virtual false, abstract: false, final false
inline void ReturnVstumpMapStats(::GorillaNetworking::ReturnVstumpMapStatsRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback) ;

/// [IteratorStateMachine(typeof(GorillaNetworking.GorillaServer::<SendClaimItem>d__19))]
/// @brief Method SendClaimItem, addr 0x5c8cbb0, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SendClaimItem(::StringW  playFabItemId, ::System::Action_1<::GorillaNetworking::GorillaServer_ClaimItemResponse*>*  successCallback, ::System::Action_1<::StringW>*  errorCallback) ;

/// [IteratorStateMachine(typeof(GorillaNetworking.GorillaServer::<SendReconcileBundleRewards>d__16))]
/// @brief Method SendReconcileBundleRewards, addr 0x5c8c9c4, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SendReconcileBundleRewards(::System::Action_1<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>*  successCallback, ::System::Action_1<::StringW>*  errorCallback) ;

/// @brief Method Start, addr 0x5c8c354, size 0x14, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SubmitAcceptedAgreements, addr 0x5c8d4e0, size 0x1cc, virtual false, abstract: false, final false
inline void SubmitAcceptedAgreements(::GorillaNetworking::SubmitAcceptedAgreementsRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback) ;

/// @brief Method TryDistributeCurrency, addr 0x5c8c6e4, size 0x1ac, virtual false, abstract: false, final false
inline void TryDistributeCurrency(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback) ;

/// @brief Method UpdateUserCosmetics, addr 0x5c8cfb0, size 0x280, virtual false, abstract: false, final false
inline void UpdateUserCosmetics() ;

/// @brief Method UploadGorillanalytics, addr 0x5c8d6ac, size 0x25c, virtual false, abstract: false, final false
inline void UploadGorillanalytics(::System::Object*  uploadData) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_DefaultDeployFeatureFlagsEnabled() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_DefaultDeployFeatureFlagsEnabled() ;

constexpr ::StringW const& __cordl_internal_get_FeatureFlagsTitleDataKey() const;

constexpr ::StringW& __cordl_internal_get_FeatureFlagsTitleDataKey() ;

constexpr ::System::ValueTuple_2<bool,bool> const& __cordl_internal_get_cachedSuppressZonesInVStump() const;

constexpr ::System::ValueTuple_2<bool,bool>& __cordl_internal_get_cachedSuppressZonesInVStump() ;

constexpr ::System::ValueTuple_2<bool,bool> const& __cordl_internal_get_cachedVStumpGrabbablesFix() const;

constexpr ::System::ValueTuple_2<bool,bool>& __cordl_internal_get_cachedVStumpGrabbablesFix() ;

constexpr bool const& __cordl_internal_get_debug() const;

constexpr bool& __cordl_internal_get_debug() ;

constexpr ::GorillaNetworking::TitleDataFeatureFlags* const& __cordl_internal_get_featureFlags() const;

constexpr ::GorillaNetworking::TitleDataFeatureFlags*& __cordl_internal_get_featureFlags() ;

constexpr ::Newtonsoft::Json::JsonSerializerSettings* const& __cordl_internal_get_serializationSettings() const;

constexpr ::Newtonsoft::Json::JsonSerializerSettings*& __cordl_internal_get_serializationSettings() ;

constexpr void __cordl_internal_set_DefaultDeployFeatureFlagsEnabled(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_FeatureFlagsTitleDataKey(::StringW  value) ;

constexpr void __cordl_internal_set_cachedSuppressZonesInVStump(::System::ValueTuple_2<bool,bool>  value) ;

constexpr void __cordl_internal_set_cachedVStumpGrabbablesFix(::System::ValueTuple_2<bool,bool>  value) ;

constexpr void __cordl_internal_set_debug(bool  value) ;

constexpr void __cordl_internal_set_featureFlags(::GorillaNetworking::TitleDataFeatureFlags*  value) ;

constexpr void __cordl_internal_set_serializationSettings(::Newtonsoft::Json::JsonSerializerSettings*  value) ;

/// @brief Method .ctor, addr 0x5c8eec8, size 0x188, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaNetworking::GorillaServer> getStaticF_Instance() ;

/// @brief Method get_FeatureFlagsReady, addr 0x5c8c27c, size 0x18, virtual false, abstract: false, final false
inline bool get_FeatureFlagsReady() ;

/// @brief Method get_playerEntity, addr 0x5c8c294, size 0xc0, virtual false, abstract: false, final false
inline ::PlayFab::CloudScriptModels::EntityKey* get_playerEntity() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

static inline void setStaticF_Instance(::UnityW<::GorillaNetworking::GorillaServer>  value) ;

/// @brief Method toFunctionResult, addr 0x5c8e130, size 0x218, virtual false, abstract: false, final false
inline ::PlayFab::CloudScriptModels::ExecuteFunctionResult* toFunctionResult(::PlayFab::ClientModels::ExecuteCloudScriptResult*  csResult) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaServer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaServer(GorillaServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaServer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaServer(GorillaServer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4363};

/// @brief Field FeatureFlagsTitleDataKey, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___FeatureFlagsTitleDataKey;

/// @brief Field DefaultDeployFeatureFlagsEnabled, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___DefaultDeployFeatureFlagsEnabled;

/// @brief Field featureFlags, offset: 0x30, size: 0x8, def value: None
 ::GorillaNetworking::TitleDataFeatureFlags*  ___featureFlags;

/// @brief Field debug, offset: 0x38, size: 0x1, def value: None
 bool  ___debug;

/// @brief Field serializationSettings, offset: 0x40, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonSerializerSettings*  ___serializationSettings;

/// [TupleElementNames(new[] { "valid", "value" })]
/// @brief Field cachedVStumpGrabbablesFix, offset: 0x48, size: 0x10, def value: None
 ::System::ValueTuple_2<bool,bool>  ___cachedVStumpGrabbablesFix;

/// @brief Size padding 0x50 - 0x68 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

/// [TupleElementNames(new[] { "valid", "value" })]
/// @brief Field cachedSuppressZonesInVStump, offset: 0x58, size: 0x10, def value: None
 ::System::ValueTuple_2<bool,bool>  ___cachedSuppressZonesInVStump;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaServer, ___FeatureFlagsTitleDataKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer, ___DefaultDeployFeatureFlagsEnabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer, ___featureFlags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer, ___debug) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer, ___serializationSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer, ___cachedVStumpGrabbablesFix) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer, ___cachedSuppressZonesInVStump) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaServer) == 0x50, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaServer/<SendReconcileBundleRewards>d__16
class CORDL_TYPE GorillaServer__SendReconcileBundleRewards_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <www>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__www_5__2, put=__cordl_internal_set__www_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _www_5__2;

/// @brief Field errorCallback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorCallback, put=__cordl_internal_set_errorCallback)) ::System::Action_1<::StringW>*  errorCallback;

/// @brief Field successCallback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_successCallback, put=__cordl_internal_set_successCallback)) ::System::Action_1<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>*  successCallback;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c8fd34, size 0x614, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c903f8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c90400, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c90438, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c8fd18, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__www_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__www_5__2() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_errorCallback() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_errorCallback() ;

constexpr ::System::Action_1<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>* const& __cordl_internal_get_successCallback() const;

constexpr ::System::Action_1<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>*& __cordl_internal_get_successCallback() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__www_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_errorCallback(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_successCallback(::System::Action_1<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>*  value) ;

/// @brief Method <>m__Finally1, addr 0x5c90348, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c8ca4c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaServer__SendReconcileBundleRewards_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaServer__SendReconcileBundleRewards_d__16", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaServer__SendReconcileBundleRewards_d__16(GorillaServer__SendReconcileBundleRewards_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaServer__SendReconcileBundleRewards_d__16", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaServer__SendReconcileBundleRewards_d__16(GorillaServer__SendReconcileBundleRewards_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4362};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field errorCallback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___errorCallback;

/// @brief Field successCallback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>*  ___successCallback;

/// @brief Field <www>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____www_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16, ___errorCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16, ___successCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16, ____www_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16) == 0x38, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaServer/<SendClaimItem>d__19
class CORDL_TYPE GorillaServer__SendClaimItem_d__19 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <www>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__www_5__2, put=__cordl_internal_set__www_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _www_5__2;

/// @brief Field errorCallback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorCallback, put=__cordl_internal_set_errorCallback)) ::System::Action_1<::StringW>*  errorCallback;

/// @brief Field playFabItemId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playFabItemId, put=__cordl_internal_set_playFabItemId)) ::StringW  playFabItemId;

/// @brief Field successCallback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_successCallback, put=__cordl_internal_set_successCallback)) ::System::Action_1<::GorillaNetworking::GorillaServer_ClaimItemResponse*>*  successCallback;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c8f5fc, size 0x624, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::GorillaServer__SendClaimItem_d__19* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c8fcd0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c8fcd8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c8fd10, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c8f5e0, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__www_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__www_5__2() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_errorCallback() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_errorCallback() ;

constexpr ::StringW const& __cordl_internal_get_playFabItemId() const;

constexpr ::StringW& __cordl_internal_get_playFabItemId() ;

constexpr ::System::Action_1<::GorillaNetworking::GorillaServer_ClaimItemResponse*>* const& __cordl_internal_get_successCallback() const;

constexpr ::System::Action_1<::GorillaNetworking::GorillaServer_ClaimItemResponse*>*& __cordl_internal_get_successCallback() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__www_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_errorCallback(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_playFabItemId(::StringW  value) ;

constexpr void __cordl_internal_set_successCallback(::System::Action_1<::GorillaNetworking::GorillaServer_ClaimItemResponse*>*  value) ;

/// @brief Method <>m__Finally1, addr 0x5c8fc20, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c8cc4c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaServer__SendClaimItem_d__19() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaServer__SendClaimItem_d__19", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaServer__SendClaimItem_d__19(GorillaServer__SendClaimItem_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaServer__SendClaimItem_d__19", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaServer__SendClaimItem_d__19(GorillaServer__SendClaimItem_d__19 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4361};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field playFabItemId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___playFabItemId;

/// @brief Field errorCallback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___errorCallback;

/// @brief Field successCallback, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::GorillaNetworking::GorillaServer_ClaimItemResponse*>*  ___successCallback;

/// @brief Field <www>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____www_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaServer__SendClaimItem_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer__SendClaimItem_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer__SendClaimItem_d__19, ___playFabItemId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer__SendClaimItem_d__19, ___errorCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer__SendClaimItem_d__19, ___successCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer__SendClaimItem_d__19, ____www_5__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaServer__SendClaimItem_d__19) == 0x40, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GorillaNetworking.GorillaServer/<>c__DisplayClass30_0`1<T>
class CORDL_TYPE GorillaServer___c__DisplayClass30_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::GorillaServer>  __4__this;

/// @brief Field cb, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cb, put=__cordl_internal_set_cb)) ::System::Action_1<T>*  cb;

static inline ::GorillaNetworking::GorillaServer___c__DisplayClass30_0_1<T>* New_ctor() ;

/// @brief Method <DebugWrapCb>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _DebugWrapCb_b__0(T  arg) ;

constexpr ::UnityW<::GorillaNetworking::GorillaServer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::GorillaServer>& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_cb() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_cb() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::GorillaServer>  value) ;

constexpr void __cordl_internal_set_cb(::System::Action_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaServer___c__DisplayClass30_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaServer___c__DisplayClass30_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaServer___c__DisplayClass30_0_1(GorillaServer___c__DisplayClass30_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaServer___c__DisplayClass30_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaServer___c__DisplayClass30_0_1(GorillaServer___c__DisplayClass30_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4360};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::GorillaServer>  _____4__this;

/// @brief Field cb, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<T>*  ___cb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaServer/<>c__DisplayClass23_0
class CORDL_TYPE GorillaServer___c__DisplayClass23_0 : public ::System::Object {
public:
// Declarations
/// @brief Field errorCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorCallback, put=__cordl_internal_set_errorCallback)) ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback;

/// @brief Field successCallback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_successCallback, put=__cordl_internal_set_successCallback)) ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  successCallback;

static inline ::GorillaNetworking::GorillaServer___c__DisplayClass23_0* New_ctor() ;

/// @brief Method <GetAcceptedAgreements>b__0, addr 0x5c8f410, size 0x1d0, virtual false, abstract: false, final false
inline void _GetAcceptedAgreements_b__0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result) ;

constexpr ::System::Action_1<::PlayFab::PlayFabError*>* const& __cordl_internal_get_errorCallback() const;

constexpr ::System::Action_1<::PlayFab::PlayFabError*>*& __cordl_internal_get_errorCallback() ;

constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* const& __cordl_internal_get_successCallback() const;

constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*& __cordl_internal_get_successCallback() ;

constexpr void __cordl_internal_set_errorCallback(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

constexpr void __cordl_internal_set_successCallback(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  value) ;

/// @brief Method .ctor, addr 0x5c8d4d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaServer___c__DisplayClass23_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaServer___c__DisplayClass23_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaServer___c__DisplayClass23_0(GorillaServer___c__DisplayClass23_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaServer___c__DisplayClass23_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaServer___c__DisplayClass23_0(GorillaServer___c__DisplayClass23_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4359};

/// @brief Field successCallback, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  ___successCallback;

/// @brief Field errorCallback, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::PlayFab::PlayFabError*>*  ___errorCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaServer___c__DisplayClass23_0, ___successCallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer___c__DisplayClass23_0, ___errorCallback) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaServer___c__DisplayClass23_0) == 0x20, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaServer/<>c
class CORDL_TYPE GorillaServer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaNetworking::GorillaServer___c*  __9;

/// @brief Field <>9__22_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_0, put=setStaticF___9__22_0)) ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  __9__22_0;

/// @brief Field <>9__22_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_1, put=setStaticF___9__22_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__22_1;

/// @brief Field <>9__25_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_0, put=setStaticF___9__25_0)) ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  __9__25_0;

/// @brief Field <>9__25_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_1, put=setStaticF___9__25_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__25_1;

static inline ::GorillaNetworking::GorillaServer___c* New_ctor() ;

/// @brief Method <UpdateUserCosmetics>b__22_0, addr 0x5c8f334, size 0xd0, virtual false, abstract: false, final false
inline void _UpdateUserCosmetics_b__22_0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result) ;

/// @brief Method <UpdateUserCosmetics>b__22_1, addr 0x5c8f404, size 0x4, virtual false, abstract: false, final false
inline void _UpdateUserCosmetics_b__22_1(::PlayFab::PlayFabError*  error) ;

/// @brief Method <UploadGorillanalytics>b__25_0, addr 0x5c8f408, size 0x4, virtual false, abstract: false, final false
inline void _UploadGorillanalytics_b__25_0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result) ;

/// @brief Method <UploadGorillanalytics>b__25_1, addr 0x5c8f40c, size 0x4, virtual false, abstract: false, final false
inline void _UploadGorillanalytics_b__25_1(::PlayFab::PlayFabError*  error) ;

/// @brief Method .ctor, addr 0x5c8f32c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaNetworking::GorillaServer___c* getStaticF___9() ;

static inline ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>* getStaticF___9__22_0() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__22_1() ;

static inline ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>* getStaticF___9__25_0() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__25_1() ;

static inline void setStaticF___9(::GorillaNetworking::GorillaServer___c*  value) ;

static inline void setStaticF___9__22_0(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  value) ;

static inline void setStaticF___9__22_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

static inline void setStaticF___9__25_0(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  value) ;

static inline void setStaticF___9__25_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaServer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaServer___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaServer___c(GorillaServer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaServer___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaServer___c(GorillaServer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4358};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::GorillaServer___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaNetworking
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaServer/ClaimItemResponse
class CORDL_TYPE GorillaServer_ClaimItemResponse : public ::System::Object {
public:
// Declarations
/// @brief Field <granted>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__granted_k__BackingField, put=__cordl_internal_set__granted_k__BackingField)) bool  _granted_k__BackingField;

 __declspec(property(get=get_granted, put=set_granted)) bool  granted;

static inline ::GorillaNetworking::GorillaServer_ClaimItemResponse* New_ctor() ;

constexpr bool const& __cordl_internal_get__granted_k__BackingField() const;

constexpr bool& __cordl_internal_get__granted_k__BackingField() ;

constexpr void __cordl_internal_set__granted_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x5c8f2bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_granted, addr 0x5c8f2ac, size 0x8, virtual false, abstract: false, final false
inline bool get_granted() ;

/// [CompilerGenerated]
/// @brief Method set_granted, addr 0x5c8f2b4, size 0x8, virtual false, abstract: false, final false
inline void set_granted(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaServer_ClaimItemResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaServer_ClaimItemResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaServer_ClaimItemResponse(GorillaServer_ClaimItemResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaServer_ClaimItemResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaServer_ClaimItemResponse(GorillaServer_ClaimItemResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4357};

/// [CompilerGenerated]
/// @brief Field <granted>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____granted_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaServer_ClaimItemResponse, ____granted_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaServer_ClaimItemResponse) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking
// Dependencies System.Nullable`1<T>, System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaServer/ReconcileBundleRewardsResponse
class CORDL_TYPE GorillaServer_ReconcileBundleRewardsResponse : public ::System::Object {
public:
// Declarations
/// @brief Field <errorMessage>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorMessage_k__BackingField, put=__cordl_internal_set__errorMessage_k__BackingField)) ::StringW  _errorMessage_k__BackingField;

/// @brief Field <grantedBundles>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__grantedBundles_k__BackingField, put=__cordl_internal_set__grantedBundles_k__BackingField)) ::System::Collections::Generic::List_1<::StringW>*  _grantedBundles_k__BackingField;

/// @brief Field <reconciledBundleCount>k__BackingField, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__reconciledBundleCount_k__BackingField, put=__cordl_internal_set__reconciledBundleCount_k__BackingField)) ::System::Nullable_1<int32_t>  _reconciledBundleCount_k__BackingField;

/// @brief Field <success>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__success_k__BackingField, put=__cordl_internal_set__success_k__BackingField)) bool  _success_k__BackingField;

 __declspec(property(get=get_errorMessage, put=set_errorMessage)) ::StringW  errorMessage;

 __declspec(property(get=get_grantedBundles, put=set_grantedBundles)) ::System::Collections::Generic::List_1<::StringW>*  grantedBundles;

 __declspec(property(get=get_reconciledBundleCount, put=set_reconciledBundleCount)) ::System::Nullable_1<int32_t>  reconciledBundleCount;

 __declspec(property(get=get_success, put=set_success)) bool  success;

static inline ::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__errorMessage_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__errorMessage_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__grantedBundles_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__grantedBundles_k__BackingField() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__reconciledBundleCount_k__BackingField() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__reconciledBundleCount_k__BackingField() ;

constexpr bool const& __cordl_internal_get__success_k__BackingField() const;

constexpr bool& __cordl_internal_get__success_k__BackingField() ;

constexpr void __cordl_internal_set__errorMessage_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__grantedBundles_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__reconciledBundleCount_k__BackingField(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set__success_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x5c8f2a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_errorMessage, addr 0x5c8f274, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_errorMessage() ;

/// [CompilerGenerated]
/// @brief Method get_grantedBundles, addr 0x5c8f294, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_grantedBundles() ;

/// [CompilerGenerated]
/// @brief Method get_reconciledBundleCount, addr 0x5c8f284, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> get_reconciledBundleCount() ;

/// [CompilerGenerated]
/// @brief Method get_success, addr 0x5c8f264, size 0x8, virtual false, abstract: false, final false
inline bool get_success() ;

/// [CompilerGenerated]
/// @brief Method set_errorMessage, addr 0x5c8f27c, size 0x8, virtual false, abstract: false, final false
inline void set_errorMessage(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_grantedBundles, addr 0x5c8f29c, size 0x8, virtual false, abstract: false, final false
inline void set_grantedBundles(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_reconciledBundleCount, addr 0x5c8f28c, size 0x8, virtual false, abstract: false, final false
inline void set_reconciledBundleCount(::System::Nullable_1<int32_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_success, addr 0x5c8f26c, size 0x8, virtual false, abstract: false, final false
inline void set_success(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaServer_ReconcileBundleRewardsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaServer_ReconcileBundleRewardsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaServer_ReconcileBundleRewardsResponse(GorillaServer_ReconcileBundleRewardsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaServer_ReconcileBundleRewardsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaServer_ReconcileBundleRewardsResponse(GorillaServer_ReconcileBundleRewardsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4356};

/// [CompilerGenerated]
/// @brief Field <success>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____success_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <errorMessage>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____errorMessage_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <reconciledBundleCount>k__BackingField, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ____reconciledBundleCount_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <grantedBundles>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____grantedBundles_k__BackingField;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse, ____success_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse, ____errorMessage_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse, ____reconciledBundleCount_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse, ____grantedBundles_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse) == 0x30, "Size mismatch!");

} // namespace end def GorillaNetworking
