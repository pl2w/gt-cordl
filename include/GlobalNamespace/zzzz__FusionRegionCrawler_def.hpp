#pragma once
// IWYU pragma private; include "GlobalNamespace/FusionRegionCrawler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionRegionCrawler)
namespace Fusion::Sockets {
struct NetAddress;
}
namespace Fusion::Sockets {
struct NetConnectFailedReason;
}
namespace Fusion::Sockets {
struct NetDisconnectReason;
}
namespace Fusion::Sockets {
struct ReliableKey;
}
namespace Fusion {
class HostMigrationToken;
}
namespace Fusion {
class INetworkRunnerCallbacks;
}
namespace Fusion {
class IPublicFacingInterface;
}
namespace Fusion {
struct NetworkInput;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
class NetworkRunnerCallbackArgs_ConnectRequest;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
class SessionInfo;
}
namespace Fusion {
struct ShutdownReason;
}
namespace Fusion {
struct SimulationMessagePtr;
}
namespace GlobalNamespace {
class FusionRegionCrawler_PlayerCountUpdated;
}
namespace GlobalNamespace {
class FusionRegionCrawler__OccasionalUpdate_d__12;
}
namespace GlobalNamespace {
class FusionRegionCrawler__UpdatePlayerCount_d__13;
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
struct ArraySegment_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class FusionRegionCrawler;
}
namespace GlobalNamespace {
class FusionRegionCrawler_PlayerCountUpdated;
}
namespace GlobalNamespace {
class FusionRegionCrawler__OccasionalUpdate_d__12;
}
namespace GlobalNamespace {
class FusionRegionCrawler__UpdatePlayerCount_d__13;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FusionRegionCrawler*);
MARK_REF_T(::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*);
MARK_REF_T(::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12*);
MARK_REF_T(::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionRegionCrawler*, "", "FusionRegionCrawler");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*, "", "FusionRegionCrawler/PlayerCountUpdated");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12*, "", "FusionRegionCrawler/<OccasionalUpdate>d__12");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13*, "", "FusionRegionCrawler/<UpdatePlayerCount>d__13");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FusionRegionCrawler
class CORDL_TYPE FusionRegionCrawler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PlayerCountUpdated = ::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated;

using _OccasionalUpdate_d__12 = ::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12;

using _UpdatePlayerCount_d__13 = ::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13;

/// @brief Field OnPlayerCountUpdated, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerCountUpdated, put=__cordl_internal_set_OnPlayerCountUpdated)) ::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*  OnPlayerCountUpdated;

 __declspec(property(get=get_PlayerCountGlobal)) int32_t  PlayerCountGlobal;

/// @brief Field UpdateFrequency, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_UpdateFrequency, put=__cordl_internal_set_UpdateFrequency)) float_t  UpdateFrequency;

/// @brief Field globalPlayerCount, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_globalPlayerCount, put=__cordl_internal_set_globalPlayerCount)) int32_t  globalPlayerCount;

/// @brief Field refreshPlayerCountAutomatically, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_refreshPlayerCountAutomatically, put=__cordl_internal_set_refreshPlayerCountAutomatically)) bool  refreshPlayerCountAutomatically;

/// @brief Field regionRunner, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_regionRunner, put=__cordl_internal_set_regionRunner)) ::UnityW<::Fusion::NetworkRunner>  regionRunner;

/// @brief Field sessionInfoCache, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionInfoCache, put=__cordl_internal_set_sessionInfoCache)) ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionInfoCache;

/// @brief Field tempSessionPlayerCount, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_tempSessionPlayerCount, put=__cordl_internal_set_tempSessionPlayerCount)) int32_t  tempSessionPlayerCount;

/// @brief Field waitingForSessionListUpdate, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_waitingForSessionListUpdate, put=__cordl_internal_set_waitingForSessionListUpdate)) bool  waitingForSessionListUpdate;

/// @brief Convert operator to "::Fusion::INetworkRunnerCallbacks"
constexpr operator  ::Fusion::INetworkRunnerCallbacks*() noexcept;

/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnConnectFailed, addr 0x56d8964, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnConnectFailed(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnConnectRequest, addr 0x56d8960, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnConnectRequest(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*  request, ::ArrayW<uint8_t>  token) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnConnectedToServer, addr 0x56d895c, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnConnectedToServer(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse, addr 0x56d8970, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnHostMigration, addr 0x56d8974, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnHostMigration(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnInput, addr 0x56d8950, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnInput(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkInput  input) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnInputMissing, addr 0x56d8954, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnInputMissing(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::NetworkInput  input) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnPlayerJoined, addr 0x56d8948, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnPlayerJoined(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnPlayerLeft, addr 0x56d894c, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnPlayerLeft(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnSceneLoadDone, addr 0x56d8978, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnSceneLoadDone(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnSceneLoadStart, addr 0x56d897c, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnSceneLoadStart(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnSessionListUpdated, addr 0x56d896c, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnShutdown, addr 0x56d8958, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnShutdown(::Fusion::NetworkRunner*  runner, ::Fusion::ShutdownReason  shutdownReason) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage, addr 0x56d8968, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessagePtr  message) ;

static inline ::GlobalNamespace::FusionRegionCrawler* New_ctor() ;

/// [IteratorStateMachine(typeof(FusionRegionCrawler::<OccasionalUpdate>d__12))]
/// @brief Method OccasionalUpdate, addr 0x56d87f4, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* OccasionalUpdate() ;

/// @brief Method OnDisconnectedFromServer, addr 0x56d8988, size 0x4, virtual true, abstract: false, final true
inline void OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetDisconnectReason  reason) ;

/// @brief Method OnObjectEnterAOI, addr 0x56d8984, size 0x4, virtual true, abstract: false, final true
inline void OnObjectEnterAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method OnObjectExitAOI, addr 0x56d8980, size 0x4, virtual true, abstract: false, final true
inline void OnObjectExitAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method OnReliableDataProgress, addr 0x56d8990, size 0x4, virtual true, abstract: false, final true
inline void OnReliableDataProgress(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, float_t  progress) ;

/// @brief Method OnReliableDataReceived, addr 0x56d898c, size 0x4, virtual true, abstract: false, final true
inline void OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method OnSessionListUpdated, addr 0x56d891c, size 0x2c, virtual false, abstract: false, final false
inline void OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList) ;

/// @brief Method Start, addr 0x56d86f4, size 0x100, virtual false, abstract: false, final false
inline void Start() ;

/// [IteratorStateMachine(typeof(FusionRegionCrawler::<UpdatePlayerCount>d__13))]
/// @brief Method UpdatePlayerCount, addr 0x56d8888, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UpdatePlayerCount() ;

constexpr ::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated* const& __cordl_internal_get_OnPlayerCountUpdated() const;

constexpr ::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*& __cordl_internal_get_OnPlayerCountUpdated() ;

constexpr float_t const& __cordl_internal_get_UpdateFrequency() const;

constexpr float_t& __cordl_internal_get_UpdateFrequency() ;

constexpr int32_t const& __cordl_internal_get_globalPlayerCount() const;

constexpr int32_t& __cordl_internal_get_globalPlayerCount() ;

constexpr bool const& __cordl_internal_get_refreshPlayerCountAutomatically() const;

constexpr bool& __cordl_internal_get_refreshPlayerCountAutomatically() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get_regionRunner() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get_regionRunner() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>* const& __cordl_internal_get_sessionInfoCache() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*& __cordl_internal_get_sessionInfoCache() ;

constexpr int32_t const& __cordl_internal_get_tempSessionPlayerCount() const;

constexpr int32_t& __cordl_internal_get_tempSessionPlayerCount() ;

constexpr bool const& __cordl_internal_get_waitingForSessionListUpdate() const;

constexpr bool& __cordl_internal_get_waitingForSessionListUpdate() ;

constexpr void __cordl_internal_set_OnPlayerCountUpdated(::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*  value) ;

constexpr void __cordl_internal_set_UpdateFrequency(float_t  value) ;

constexpr void __cordl_internal_set_globalPlayerCount(int32_t  value) ;

constexpr void __cordl_internal_set_refreshPlayerCountAutomatically(bool  value) ;

constexpr void __cordl_internal_set_regionRunner(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set_sessionInfoCache(::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  value) ;

constexpr void __cordl_internal_set_tempSessionPlayerCount(int32_t  value) ;

constexpr void __cordl_internal_set_waitingForSessionListUpdate(bool  value) ;

/// @brief Method .ctor, addr 0x56d8994, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PlayerCountGlobal, addr 0x56d86ec, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PlayerCountGlobal() ;

/// @brief Convert to "::Fusion::INetworkRunnerCallbacks"
constexpr ::Fusion::INetworkRunnerCallbacks* i___Fusion__INetworkRunnerCallbacks() noexcept;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionRegionCrawler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionRegionCrawler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionRegionCrawler(FusionRegionCrawler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionRegionCrawler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionRegionCrawler(FusionRegionCrawler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1086};

/// @brief Field OnPlayerCountUpdated, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*  ___OnPlayerCountUpdated;

/// @brief Field regionRunner, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  ___regionRunner;

/// @brief Field sessionInfoCache, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  ___sessionInfoCache;

/// @brief Field waitingForSessionListUpdate, offset: 0x38, size: 0x1, def value: None
 bool  ___waitingForSessionListUpdate;

/// @brief Field globalPlayerCount, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___globalPlayerCount;

/// @brief Field UpdateFrequency, offset: 0x40, size: 0x4, def value: None
 float_t  ___UpdateFrequency;

/// @brief Field refreshPlayerCountAutomatically, offset: 0x44, size: 0x1, def value: None
 bool  ___refreshPlayerCountAutomatically;

/// @brief Field tempSessionPlayerCount, offset: 0x48, size: 0x4, def value: None
 int32_t  ___tempSessionPlayerCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FusionRegionCrawler, ___OnPlayerCountUpdated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionRegionCrawler, ___regionRunner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionRegionCrawler, ___sessionInfoCache) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionRegionCrawler, ___waitingForSessionListUpdate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionRegionCrawler, ___globalPlayerCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionRegionCrawler, ___UpdateFrequency) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionRegionCrawler, ___refreshPlayerCountAutomatically) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionRegionCrawler, ___tempSessionPlayerCount) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FusionRegionCrawler) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FusionRegionCrawler/<UpdatePlayerCount>d__13
class CORDL_TYPE FusionRegionCrawler__UpdatePlayerCount_d__13 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::FusionRegionCrawler>  __4__this;

/// @brief Field <>7__wrap2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) ::ArrayW<::StringW>  __7__wrap2;

/// @brief Field <>7__wrap3, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get___7__wrap3, put=__cordl_internal_set___7__wrap3)) int32_t  __7__wrap3;

/// @brief Field <tempGlobalPlayerCount>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__tempGlobalPlayerCount_5__2, put=__cordl_internal_set__tempGlobalPlayerCount_5__2)) int32_t  _tempGlobalPlayerCount_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x56d8bfc, size 0x428, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x56d9024, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x56d902c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x56d9064, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x56d8bf8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::FusionRegionCrawler> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::FusionRegionCrawler>& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get___7__wrap2() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get___7__wrap2() ;

constexpr int32_t const& __cordl_internal_get___7__wrap3() const;

constexpr int32_t& __cordl_internal_get___7__wrap3() ;

constexpr int32_t const& __cordl_internal_get__tempGlobalPlayerCount_5__2() const;

constexpr int32_t& __cordl_internal_get__tempGlobalPlayerCount_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FusionRegionCrawler>  value) ;

constexpr void __cordl_internal_set___7__wrap2(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set___7__wrap3(int32_t  value) ;

constexpr void __cordl_internal_set__tempGlobalPlayerCount_5__2(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x56d88f4, size 0x28, virtual false, abstract: false, final false
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
constexpr FusionRegionCrawler__UpdatePlayerCount_d__13() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionRegionCrawler__UpdatePlayerCount_d__13", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionRegionCrawler__UpdatePlayerCount_d__13(FusionRegionCrawler__UpdatePlayerCount_d__13 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionRegionCrawler__UpdatePlayerCount_d__13", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionRegionCrawler__UpdatePlayerCount_d__13(FusionRegionCrawler__UpdatePlayerCount_d__13 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1085};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FusionRegionCrawler>  _____4__this;

/// @brief Field <tempGlobalPlayerCount>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____tempGlobalPlayerCount_5__2;

/// @brief Field <>7__wrap2, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  _____7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x38, size: 0x4, def value: None
 int32_t  _____7__wrap3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13, ____tempGlobalPlayerCount_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13, _____7__wrap2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13, _____7__wrap3) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FusionRegionCrawler__UpdatePlayerCount_d__13) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FusionRegionCrawler/<OccasionalUpdate>d__12
class CORDL_TYPE FusionRegionCrawler__OccasionalUpdate_d__12 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::FusionRegionCrawler>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x56d8acc, size 0xe4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x56d8bb0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x56d8bb8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x56d8bf0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x56d8ac8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::FusionRegionCrawler> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::FusionRegionCrawler>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FusionRegionCrawler>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x56d8860, size 0x28, virtual false, abstract: false, final false
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
constexpr FusionRegionCrawler__OccasionalUpdate_d__12() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionRegionCrawler__OccasionalUpdate_d__12", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionRegionCrawler__OccasionalUpdate_d__12(FusionRegionCrawler__OccasionalUpdate_d__12 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionRegionCrawler__OccasionalUpdate_d__12", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionRegionCrawler__OccasionalUpdate_d__12(FusionRegionCrawler__OccasionalUpdate_d__12 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1084};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FusionRegionCrawler>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FusionRegionCrawler__OccasionalUpdate_d__12) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: FusionRegionCrawler/PlayerCountUpdated
class CORDL_TYPE FusionRegionCrawler_PlayerCountUpdated : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x56d8a60, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  playerCount, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x56d8abc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x56d8a4c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  playerCount) ;

static inline ::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x56d89ac, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionRegionCrawler_PlayerCountUpdated() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionRegionCrawler_PlayerCountUpdated", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionRegionCrawler_PlayerCountUpdated(FusionRegionCrawler_PlayerCountUpdated && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionRegionCrawler_PlayerCountUpdated", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionRegionCrawler_PlayerCountUpdated(FusionRegionCrawler_PlayerCountUpdated const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1083};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
