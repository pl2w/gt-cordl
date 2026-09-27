#pragma once
// IWYU pragma private; include "GlobalNamespace/LckEntitlementsManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LckEntitlementsManager_FeatureState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckEntitlementsManager)
namespace GlobalNamespace {
struct LckEntitlementsManager_FeatureState;
}
namespace GlobalNamespace {
class LckEntitlementsManager_PlayerProcessRecord;
}
namespace GlobalNamespace {
class LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33;
}
namespace GlobalNamespace {
class LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35;
}
namespace GlobalNamespace {
struct LckEntitlementsManager__GetCosmeticsForPlayersAsync_d__34;
}
namespace GlobalNamespace {
struct LckEntitlementsManager__InitializeFeatureAsync_d__27;
}
namespace GlobalNamespace {
class LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32;
}
namespace GlobalNamespace {
class LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30;
}
namespace GlobalNamespace {
class LckEntitlementsManager___c__DisplayClass33_0;
}
namespace GlobalNamespace {
class LckEntitlementsManager___c__DisplayClass34_0;
}
namespace GlobalNamespace {
struct __c__DisplayClass34_0_LckEntitlementsManager___GetCosmeticsForPlayersAsync_b__0_d;
}
namespace Liv::Lck::Core::Cosmetics {
class ILckCosmeticsCoordinator;
}
namespace Liv::Lck::Core {
template<typename T>
class Result_1;
}
namespace Liv::Lck {
class ILckCosmeticsFeatureFlagManager;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
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
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class LckEntitlementsManager;
}
namespace GlobalNamespace {
class LckEntitlementsManager_PlayerProcessRecord;
}
namespace GlobalNamespace {
class LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33;
}
namespace GlobalNamespace {
class LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35;
}
namespace GlobalNamespace {
class LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32;
}
namespace GlobalNamespace {
class LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30;
}
namespace GlobalNamespace {
class LckEntitlementsManager___c__DisplayClass33_0;
}
namespace GlobalNamespace {
class LckEntitlementsManager___c__DisplayClass34_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LckEntitlementsManager*);
MARK_REF_T(::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord*);
MARK_REF_T(::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33*);
MARK_REF_T(::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35*);
MARK_REF_T(::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32*);
MARK_REF_T(::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30*);
MARK_REF_T(::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0*);
MARK_REF_T(::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEntitlementsManager*, "", "LckEntitlementsManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord*, "", "LckEntitlementsManager/PlayerProcessRecord");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33*, "", "LckEntitlementsManager/<AnnouncePlayerPresenceForSession>d__33");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35*, "", "LckEntitlementsManager/<CleanupProcessedPlayersCoroutine>d__35");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32*, "", "LckEntitlementsManager/<ProcessBatchedRemotePlayersCoroutine>d__32");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30*, "", "LckEntitlementsManager/<ProcessLocalPlayerSpawn>d__30");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0*, "", "LckEntitlementsManager/<>c__DisplayClass33_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0*, "", "LckEntitlementsManager/<>c__DisplayClass34_0");
// Dependencies LckEntitlementsManager::FeatureState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckEntitlementsManager
class CORDL_TYPE LckEntitlementsManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FeatureState = ::GlobalNamespace::LckEntitlementsManager_FeatureState;

using PlayerProcessRecord = ::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord;

using _AnnouncePlayerPresenceForSession_d__33 = ::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33;

using _CleanupProcessedPlayersCoroutine_d__35 = ::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35;

using _GetCosmeticsForPlayersAsync_d__34 = ::GlobalNamespace::LckEntitlementsManager__GetCosmeticsForPlayersAsync_d__34;

using _InitializeFeatureAsync_d__27 = ::GlobalNamespace::LckEntitlementsManager__InitializeFeatureAsync_d__27;

using _ProcessBatchedRemotePlayersCoroutine_d__32 = ::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32;

using _ProcessLocalPlayerSpawn_d__30 = ::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30;

using __c__DisplayClass33_0 = ::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0;

using __c__DisplayClass34_0 = ::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::LckEntitlementsManager>  _Instance_k__BackingField;

/// @brief Field <LckEntitlementsEnabled>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__LckEntitlementsEnabled_k__BackingField, put=setStaticF__LckEntitlementsEnabled_k__BackingField)) bool  _LckEntitlementsEnabled_k__BackingField;

/// @brief Field _cleanupProcessedPlayersCoroutine, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__cleanupProcessedPlayersCoroutine, put=__cordl_internal_set__cleanupProcessedPlayersCoroutine)) ::UnityEngine::Coroutine*  _cleanupProcessedPlayersCoroutine;

/// @brief Field _currentState, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentState, put=__cordl_internal_set__currentState)) ::GlobalNamespace::LckEntitlementsManager_FeatureState  _currentState;

/// @brief Field _featureFlagManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureFlagManager, put=__cordl_internal_set__featureFlagManager)) ::Liv::Lck::ILckCosmeticsFeatureFlagManager*  _featureFlagManager;

/// @brief Field _getEntitlementsBatchingCoroutine, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__getEntitlementsBatchingCoroutine, put=__cordl_internal_set__getEntitlementsBatchingCoroutine)) ::UnityEngine::Coroutine*  _getEntitlementsBatchingCoroutine;

/// @brief Field _isProcessingBatch, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__isProcessingBatch, put=__cordl_internal_set__isProcessingBatch)) bool  _isProcessingBatch;

/// @brief Field _lckCosmeticsCoordinator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckCosmeticsCoordinator, put=__cordl_internal_set__lckCosmeticsCoordinator)) ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  _lckCosmeticsCoordinator;

/// @brief Field _processedPlayers, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__processedPlayers, put=__cordl_internal_set__processedPlayers)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord*>*  _processedPlayers;

/// @brief Field _remotePlayersToGetEntitlementsFor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__remotePlayersToGetEntitlementsFor, put=__cordl_internal_set__remotePlayersToGetEntitlementsFor)) ::System::Collections::Generic::HashSet_1<::StringW>*  _remotePlayersToGetEntitlementsFor;

/// [IteratorStateMachine(typeof(LckEntitlementsManager::<AnnouncePlayerPresenceForSession>d__33))]
/// @brief Method AnnouncePlayerPresenceForSession, addr 0x56c68cc, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* AnnouncePlayerPresenceForSession(::StringW  localPlayerId) ;

/// @brief Method Awake, addr 0x56c615c, size 0x158, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(LckEntitlementsManager::<CleanupProcessedPlayersCoroutine>d__35))]
/// @brief Method CleanupProcessedPlayersCoroutine, addr 0x56c63ec, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CleanupProcessedPlayersCoroutine() ;

/// [AsyncStateMachine(typeof(LckEntitlementsManager::<GetCosmeticsForPlayersAsync>d__34))]
/// @brief Method GetCosmeticsForPlayersAsync, addr 0x56c697c, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* GetCosmeticsForPlayersAsync(::System::Collections::Generic::List_1<::StringW>*  userIdList, ::StringW  methodNameForLogging) ;

/// [AsyncStateMachine(typeof(LckEntitlementsManager::<InitializeFeatureAsync>d__27))]
/// @brief Method InitializeFeatureAsync, addr 0x56c6314, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* InitializeFeatureAsync() ;

static inline ::GlobalNamespace::LckEntitlementsManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x56c64c4, size 0x70, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56c62b4, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLocalPlayerSpawned, addr 0x56c6534, size 0x48, virtual false, abstract: false, final false
inline void OnLocalPlayerSpawned(::StringW  localUserId) ;

/// @brief Method OnRemotePlayerSpawned, addr 0x56c6750, size 0x124, virtual false, abstract: false, final false
inline void OnRemotePlayerSpawned(::StringW  remoteUserId) ;

/// [IteratorStateMachine(typeof(LckEntitlementsManager::<ProcessBatchedRemotePlayersCoroutine>d__32))]
/// @brief Method ProcessBatchedRemotePlayersCoroutine, addr 0x56c6458, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ProcessBatchedRemotePlayersCoroutine() ;

/// [IteratorStateMachine(typeof(LckEntitlementsManager::<ProcessLocalPlayerSpawn>d__30))]
/// @brief Method ProcessLocalPlayerSpawn, addr 0x56c66c8, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ProcessLocalPlayerSpawn(::StringW  userId) ;

/// @brief Method ShouldProcessPlayer, addr 0x56c657c, size 0x14c, virtual false, abstract: false, final false
inline bool ShouldProcessPlayer(::StringW  userId) ;

/// [CompilerGenerated]
/// @brief Method <ProcessLocalPlayerSpawn>b__30_0, addr 0x56c6b88, size 0x10, virtual false, abstract: false, final false
inline bool _ProcessLocalPlayerSpawn_b__30_0() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__cleanupProcessedPlayersCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__cleanupProcessedPlayersCoroutine() ;

constexpr ::GlobalNamespace::LckEntitlementsManager_FeatureState const& __cordl_internal_get__currentState() const;

constexpr ::GlobalNamespace::LckEntitlementsManager_FeatureState& __cordl_internal_get__currentState() ;

constexpr ::Liv::Lck::ILckCosmeticsFeatureFlagManager* const& __cordl_internal_get__featureFlagManager() const;

constexpr ::Liv::Lck::ILckCosmeticsFeatureFlagManager*& __cordl_internal_get__featureFlagManager() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__getEntitlementsBatchingCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__getEntitlementsBatchingCoroutine() ;

constexpr bool const& __cordl_internal_get__isProcessingBatch() const;

constexpr bool& __cordl_internal_get__isProcessingBatch() ;

constexpr ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator* const& __cordl_internal_get__lckCosmeticsCoordinator() const;

constexpr ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*& __cordl_internal_get__lckCosmeticsCoordinator() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord*>* const& __cordl_internal_get__processedPlayers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord*>*& __cordl_internal_get__processedPlayers() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__remotePlayersToGetEntitlementsFor() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__remotePlayersToGetEntitlementsFor() ;

constexpr void __cordl_internal_set__cleanupProcessedPlayersCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__currentState(::GlobalNamespace::LckEntitlementsManager_FeatureState  value) ;

constexpr void __cordl_internal_set__featureFlagManager(::Liv::Lck::ILckCosmeticsFeatureFlagManager*  value) ;

constexpr void __cordl_internal_set__getEntitlementsBatchingCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__isProcessingBatch(bool  value) ;

constexpr void __cordl_internal_set__lckCosmeticsCoordinator(::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  value) ;

constexpr void __cordl_internal_set__processedPlayers(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord*>*  value) ;

constexpr void __cordl_internal_set__remotePlayersToGetEntitlementsFor(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x56c6aac, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::LckEntitlementsManager> getStaticF__Instance_k__BackingField() ;

static inline bool getStaticF__LckEntitlementsEnabled_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x56c60c4, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::LckEntitlementsManager> get_Instance() ;

/// [CompilerGenerated]
/// @brief Method get_LckEntitlementsEnabled, addr 0x56c602c, size 0x48, virtual false, abstract: false, final false
static inline bool get_LckEntitlementsEnabled() ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::LckEntitlementsManager>  value) ;

static inline void setStaticF__LckEntitlementsEnabled_k__BackingField(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x56c610c, size 0x50, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::LckEntitlementsManager*  value) ;

/// [CompilerGenerated]
/// @brief Method set_LckEntitlementsEnabled, addr 0x56c6074, size 0x50, virtual false, abstract: false, final false
static inline void set_LckEntitlementsEnabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckEntitlementsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEntitlementsManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEntitlementsManager(LckEntitlementsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEntitlementsManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEntitlementsManager(LckEntitlementsManager const& ) = delete;

/// @brief Field ABUSE_TIMEOUT_MINUTES offset 0xffffffff size 0x4
static constexpr float_t  ABUSE_TIMEOUT_MINUTES{static_cast<float_t>(1.0f)};

/// @brief Field BATCH_GET_ENTITLEMENTS_INTERVAL_SECONDS offset 0xffffffff size 0x4
static constexpr float_t  BATCH_GET_ENTITLEMENTS_INTERVAL_SECONDS{static_cast<float_t>(15.0f)};

/// @brief Field DEFAULT_SESSION_ID offset 0xffffffff size 0x8
static constexpr ::ConstString  DEFAULT_SESSION_ID{u"DefaultSessionId"};

/// @brief Field MAX_API_CALL_ATTEMPTS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_API_CALL_ATTEMPTS{static_cast<int32_t>(0x2)};

/// @brief Field MAX_CONSECUTIVE_ATTEMPTS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_CONSECUTIVE_ATTEMPTS{static_cast<int32_t>(0x3)};

/// @brief Field STALE_PLAYER_TIMEOUT_MINUTES offset 0xffffffff size 0x4
static constexpr float_t  STALE_PLAYER_TIMEOUT_MINUTES{static_cast<float_t>(5.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1029};

/// [InjectLck]
/// @brief Field _lckCosmeticsCoordinator, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  ____lckCosmeticsCoordinator;

/// [InjectLck]
/// @brief Field _featureFlagManager, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::ILckCosmeticsFeatureFlagManager*  ____featureFlagManager;

/// @brief Field _currentState, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::LckEntitlementsManager_FeatureState  ____currentState;

/// @brief Field _remotePlayersToGetEntitlementsFor, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ____remotePlayersToGetEntitlementsFor;

/// @brief Field _getEntitlementsBatchingCoroutine, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____getEntitlementsBatchingCoroutine;

/// @brief Field _processedPlayers, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord*>*  ____processedPlayers;

/// @brief Field _cleanupProcessedPlayersCoroutine, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____cleanupProcessedPlayersCoroutine;

/// @brief Field _isProcessingBatch, offset: 0x58, size: 0x1, def value: None
 bool  ____isProcessingBatch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager, ____lckCosmeticsCoordinator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager, ____featureFlagManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager, ____currentState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager, ____remotePlayersToGetEntitlementsFor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager, ____getEntitlementsBatchingCoroutine) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager, ____processedPlayers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager, ____cleanupProcessedPlayersCoroutine) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager, ____isProcessingBatch) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEntitlementsManager) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckEntitlementsManager/<ProcessLocalPlayerSpawn>d__30
class CORDL_TYPE LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::LckEntitlementsManager>  __4__this;

/// @brief Field userId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_userId, put=__cordl_internal_set_userId)) ::StringW  userId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x56c8808, size 0x11c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x56c8924, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x56c892c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x56c8964, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x56c8804, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_userId() const;

constexpr ::StringW& __cordl_internal_get_userId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LckEntitlementsManager>  value) ;

constexpr void __cordl_internal_set_userId(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x56c6874, size 0x28, virtual false, abstract: false, final false
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
constexpr LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30(LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30(LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1028};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LckEntitlementsManager>  _____4__this;

/// @brief Field userId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___userId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30, ___userId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckEntitlementsManager/<ProcessBatchedRemotePlayersCoroutine>d__32
class CORDL_TYPE LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::LckEntitlementsManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x56c856c, size 0x250, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x56c87bc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x56c87c4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x56c87fc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x56c8568, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LckEntitlementsManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x56c68a4, size 0x28, virtual false, abstract: false, final false
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
constexpr LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32(LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32(LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1027};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LckEntitlementsManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckEntitlementsManager/<CleanupProcessedPlayersCoroutine>d__35
class CORDL_TYPE LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::LckEntitlementsManager>  __4__this;

/// @brief Field <playersToRemove>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__playersToRemove_5__2, put=__cordl_internal_set__playersToRemove_5__2)) ::System::Collections::Generic::List_1<::StringW>*  _playersToRemove_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x56c7738, size 0x434, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x56c7b6c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x56c7b74, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x56c7bac, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x56c7734, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__playersToRemove_5__2() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__playersToRemove_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LckEntitlementsManager>  value) ;

constexpr void __cordl_internal_set__playersToRemove_5__2(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x56c6a84, size 0x28, virtual false, abstract: false, final false
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
constexpr LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35(LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35(LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1024};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LckEntitlementsManager>  _____4__this;

/// @brief Field <playersToRemove>5__2, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____playersToRemove_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35, ____playersToRemove_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckEntitlementsManager/<AnnouncePlayerPresenceForSession>d__33
class CORDL_TYPE LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::LckEntitlementsManager>  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0*  __8__1;

/// @brief Field <attempt>5__3, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__attempt_5__3, put=__cordl_internal_set__attempt_5__3)) int32_t  _attempt_5__3;

/// @brief Field <sessionId>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__sessionId_5__2, put=__cordl_internal_set__sessionId_5__2)) ::StringW  _sessionId_5__2;

/// @brief Field localPlayerId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_localPlayerId, put=__cordl_internal_set_localPlayerId)) ::StringW  localPlayerId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x56c72ac, size 0x440, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x56c76ec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x56c76f4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x56c772c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x56c72a8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0*& __cordl_internal_get___8__1() ;

constexpr int32_t const& __cordl_internal_get__attempt_5__3() const;

constexpr int32_t& __cordl_internal_get__attempt_5__3() ;

constexpr ::StringW const& __cordl_internal_get__sessionId_5__2() const;

constexpr ::StringW& __cordl_internal_get__sessionId_5__2() ;

constexpr ::StringW const& __cordl_internal_get_localPlayerId() const;

constexpr ::StringW& __cordl_internal_get_localPlayerId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LckEntitlementsManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0*  value) ;

constexpr void __cordl_internal_set__attempt_5__3(int32_t  value) ;

constexpr void __cordl_internal_set__sessionId_5__2(::StringW  value) ;

constexpr void __cordl_internal_set_localPlayerId(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x56c6954, size 0x28, virtual false, abstract: false, final false
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
constexpr LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33(LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33(LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1023};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LckEntitlementsManager>  _____4__this;

/// @brief Field localPlayerId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___localPlayerId;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0*  _____8__1;

/// @brief Field <sessionId>5__2, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____sessionId_5__2;

/// @brief Field <attempt>5__3, offset: 0x40, size: 0x4, def value: None
 int32_t  ____attempt_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33, ___localPlayerId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33, _____8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33, ____sessionId_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33, ____attempt_5__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckEntitlementsManager/<>c__DisplayClass34_0
class CORDL_TYPE LckEntitlementsManager___c__DisplayClass34_0 : public ::System::Object {
public:
// Declarations
using __GetCosmeticsForPlayersAsync_b__0_d = ::GlobalNamespace::__c__DisplayClass34_0_LckEntitlementsManager___GetCosmeticsForPlayersAsync_b__0_d;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::LckEntitlementsManager>  __4__this;

/// @brief Field methodNameForLogging, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_methodNameForLogging, put=__cordl_internal_set_methodNameForLogging)) ::StringW  methodNameForLogging;

/// @brief Field sessionId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

/// @brief Field userIdList, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_userIdList, put=__cordl_internal_set_userIdList)) ::System::Collections::Generic::List_1<::StringW>*  userIdList;

static inline ::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0* New_ctor() ;

/// [AsyncStateMachine(typeof(LckEntitlementsManager::<>c__DisplayClass34_0::<<GetCosmeticsForPlayersAsync>b__0>d))]
/// @brief Method <GetCosmeticsForPlayersAsync>b__0, addr 0x56c6bc0, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _GetCosmeticsForPlayersAsync_b__0() ;

constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_methodNameForLogging() const;

constexpr ::StringW& __cordl_internal_get_methodNameForLogging() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_userIdList() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_userIdList() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LckEntitlementsManager>  value) ;

constexpr void __cordl_internal_set_methodNameForLogging(::StringW  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

constexpr void __cordl_internal_set_userIdList(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x56c6bb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckEntitlementsManager___c__DisplayClass34_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEntitlementsManager___c__DisplayClass34_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEntitlementsManager___c__DisplayClass34_0(LckEntitlementsManager___c__DisplayClass34_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEntitlementsManager___c__DisplayClass34_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEntitlementsManager___c__DisplayClass34_0(LckEntitlementsManager___c__DisplayClass34_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1022};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LckEntitlementsManager>  _____4__this;

/// @brief Field userIdList, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___userIdList;

/// @brief Field methodNameForLogging, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___methodNameForLogging;

/// @brief Field sessionId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___sessionId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0, ___userIdList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0, ___methodNameForLogging) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0, ___sessionId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckEntitlementsManager/<>c__DisplayClass33_0
class CORDL_TYPE LckEntitlementsManager___c__DisplayClass33_0 : public ::System::Object {
public:
// Declarations
/// @brief Field announcementAsync, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_announcementAsync, put=__cordl_internal_set_announcementAsync)) ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*  announcementAsync;

static inline ::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0* New_ctor() ;

/// @brief Method <AnnouncePlayerPresenceForSession>b__0, addr 0x56c6ba0, size 0x18, virtual false, abstract: false, final false
inline bool _AnnouncePlayerPresenceForSession_b__0() ;

constexpr ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* const& __cordl_internal_get_announcementAsync() const;

constexpr ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*& __cordl_internal_get_announcementAsync() ;

constexpr void __cordl_internal_set_announcementAsync(::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*  value) ;

/// @brief Method .ctor, addr 0x56c6b98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckEntitlementsManager___c__DisplayClass33_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEntitlementsManager___c__DisplayClass33_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEntitlementsManager___c__DisplayClass33_0(LckEntitlementsManager___c__DisplayClass33_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEntitlementsManager___c__DisplayClass33_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEntitlementsManager___c__DisplayClass33_0(LckEntitlementsManager___c__DisplayClass33_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1020};

/// @brief Field announcementAsync, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*  ___announcementAsync;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0, ___announcementAsync) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckEntitlementsManager/PlayerProcessRecord
class CORDL_TYPE LckEntitlementsManager_PlayerProcessRecord : public ::System::Object {
public:
// Declarations
/// @brief Field AttemptCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_AttemptCount, put=__cordl_internal_set_AttemptCount)) int32_t  AttemptCount;

/// @brief Field LastSeenTimestamp, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_LastSeenTimestamp, put=__cordl_internal_set_LastSeenTimestamp)) float_t  LastSeenTimestamp;

/// @brief Field TimeoutUntilTimestamp, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_TimeoutUntilTimestamp, put=__cordl_internal_set_TimeoutUntilTimestamp)) float_t  TimeoutUntilTimestamp;

static inline ::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_AttemptCount() const;

constexpr int32_t& __cordl_internal_get_AttemptCount() ;

constexpr float_t const& __cordl_internal_get_LastSeenTimestamp() const;

constexpr float_t& __cordl_internal_get_LastSeenTimestamp() ;

constexpr float_t const& __cordl_internal_get_TimeoutUntilTimestamp() const;

constexpr float_t& __cordl_internal_get_TimeoutUntilTimestamp() ;

constexpr void __cordl_internal_set_AttemptCount(int32_t  value) ;

constexpr void __cordl_internal_set_LastSeenTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_TimeoutUntilTimestamp(float_t  value) ;

/// @brief Method .ctor, addr 0x56c689c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckEntitlementsManager_PlayerProcessRecord() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEntitlementsManager_PlayerProcessRecord", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEntitlementsManager_PlayerProcessRecord(LckEntitlementsManager_PlayerProcessRecord && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEntitlementsManager_PlayerProcessRecord", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEntitlementsManager_PlayerProcessRecord(LckEntitlementsManager_PlayerProcessRecord const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1018};

/// @brief Field AttemptCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___AttemptCount;

/// @brief Field TimeoutUntilTimestamp, offset: 0x14, size: 0x4, def value: None
 float_t  ___TimeoutUntilTimestamp;

/// @brief Field LastSeenTimestamp, offset: 0x18, size: 0x4, def value: None
 float_t  ___LastSeenTimestamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord, ___AttemptCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord, ___TimeoutUntilTimestamp) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord, ___LastSeenTimestamp) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
