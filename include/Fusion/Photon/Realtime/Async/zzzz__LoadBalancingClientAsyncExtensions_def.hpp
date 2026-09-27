#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Async/LoadBalancingClientAsyncExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoadBalancingClientAsyncExtensions)
namespace Fusion::Photon::Realtime::Async {
class LoadBalancingClientAsyncExtensions___c__DisplayClass12_0;
}
namespace Fusion::Photon::Realtime::Async {
class LoadBalancingClientAsyncExtensions___c__DisplayClass13_0;
}
namespace Fusion::Photon::Realtime::Async {
class LoadBalancingClientAsyncExtensions___c__DisplayClass1_0;
}
namespace Fusion::Photon::Realtime::Async {
class LoadBalancingClientAsyncExtensions___c__DisplayClass4_0;
}
namespace Fusion::Photon::Realtime::Async {
class LoadBalancingClientAsyncExtensions___c__DisplayClass5_0;
}
namespace Fusion::Photon::Realtime::Async {
class OperationHandler;
}
namespace Fusion::Photon::Realtime {
class AppSettings;
}
namespace Fusion::Photon::Realtime {
struct DisconnectCause;
}
namespace Fusion::Photon::Realtime {
class EnterRoomParams;
}
namespace Fusion::Photon::Realtime {
class LoadBalancingClient;
}
namespace Fusion::Photon::Realtime {
class OpJoinRandomRoomParams;
}
namespace Fusion::Photon::Realtime {
class RegionHandler;
}
namespace Fusion::Photon::Realtime {
class TypedLobby;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Fusion::Photon::Realtime::Async {
class LoadBalancingClientAsyncExtensions;
}
namespace Fusion::Photon::Realtime::Async {
class LoadBalancingClientAsyncExtensions___c__DisplayClass12_0;
}
namespace Fusion::Photon::Realtime::Async {
class LoadBalancingClientAsyncExtensions___c__DisplayClass13_0;
}
namespace Fusion::Photon::Realtime::Async {
class LoadBalancingClientAsyncExtensions___c__DisplayClass1_0;
}
namespace Fusion::Photon::Realtime::Async {
class LoadBalancingClientAsyncExtensions___c__DisplayClass4_0;
}
namespace Fusion::Photon::Realtime::Async {
class LoadBalancingClientAsyncExtensions___c__DisplayClass5_0;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*);
MARK_REF_T(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0*);
MARK_REF_T(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0*);
MARK_REF_T(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0*);
MARK_REF_T(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0*);
MARK_REF_T(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*, "Fusion.Photon.Realtime.Async", "LoadBalancingClientAsyncExtensions");
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0*, "Fusion.Photon.Realtime.Async", "LoadBalancingClientAsyncExtensions/<>c__DisplayClass12_0");
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0*, "Fusion.Photon.Realtime.Async", "LoadBalancingClientAsyncExtensions/<>c__DisplayClass13_0");
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0*, "Fusion.Photon.Realtime.Async", "LoadBalancingClientAsyncExtensions/<>c__DisplayClass1_0");
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0*, "Fusion.Photon.Realtime.Async", "LoadBalancingClientAsyncExtensions/<>c__DisplayClass4_0");
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0*, "Fusion.Photon.Realtime.Async", "LoadBalancingClientAsyncExtensions/<>c__DisplayClass5_0");
// [Extension]
// Dependencies System.Object
namespace Fusion::Photon::Realtime::Async {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.Async.LoadBalancingClientAsyncExtensions
class CORDL_TYPE LoadBalancingClientAsyncExtensions : public ::System::Object {
public:
// Declarations
using __c__DisplayClass12_0 = ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0;

using __c__DisplayClass13_0 = ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0;

using __c__DisplayClass1_0 = ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0;

using __c__DisplayClass4_0 = ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0;

using __c__DisplayClass5_0 = ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0;

/// [Extension]
/// @brief Method ConnectUsingSettingsAsync, addr 0x5f69984, size 0x13c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* ConnectUsingSettingsAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, ::Fusion::Photon::Realtime::AppSettings*  appSettings, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken) ;

/// [Extension]
/// @brief Method CreateOpHandler, addr 0x5f69748, size 0x23c, virtual false, abstract: false, final false
static inline ::Fusion::Photon::Realtime::Async::OperationHandler* CreateOpHandler(::Fusion::Photon::Realtime::LoadBalancingClient*  client, bool  throwOnErrors, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken) ;

/// [Extension]
/// @brief Method CreateOrJoinRoomAsync, addr 0x5f6a13c, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<int16_t>* CreateOrJoinRoomAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, ::Fusion::Photon::Realtime::EnterRoomParams*  enterRoomParams, bool  throwOnError, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken) ;

/// [Extension]
/// @brief Method CreateRoomAsync, addr 0x5f6a02c, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<int16_t>* CreateRoomAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, ::Fusion::Photon::Realtime::EnterRoomParams*  enterRoomParams, bool  throwOnError, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken) ;

/// [Extension]
/// @brief Method DisconnectAsync, addr 0x5f69c2c, size 0x1f4, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* DisconnectAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken) ;

/// [Extension]
/// @brief Method GetRegionsAsync, addr 0x5f693d4, size 0x36c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Fusion::Photon::Realtime::RegionHandler*>* GetRegionsAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, bool  throwOnError, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancelationToken) ;

/// [Extension]
/// @brief Method JoinLobbyAsync, addr 0x5f6a584, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<int16_t>* JoinLobbyAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, ::Fusion::Photon::Realtime::TypedLobby*  lobby, bool  throwOnError, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancelationToken) ;

/// [Extension]
/// @brief Method JoinRandomOrCreateRoomAsync, addr 0x5f6a35c, size 0x118, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<int16_t>* JoinRandomOrCreateRoomAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, ::Fusion::Photon::Realtime::OpJoinRandomRoomParams*  joinRandomRoomParams, ::Fusion::Photon::Realtime::EnterRoomParams*  enterRoomParams, bool  throwOnError, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken) ;

/// [Extension]
/// @brief Method JoinRandomRoomAsync, addr 0x5f6a474, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<int16_t>* JoinRandomRoomAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, ::Fusion::Photon::Realtime::OpJoinRandomRoomParams*  joinRandomRoomParams, bool  throwOnError, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken) ;

/// [Extension]
/// @brief Method JoinRoomAsync, addr 0x5f6a24c, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<int16_t>* JoinRoomAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, ::Fusion::Photon::Realtime::EnterRoomParams*  enterRoomParams, bool  throwOnError, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken) ;

/// [Extension]
/// @brief Method LeaveRoomAsync, addr 0x5f69e28, size 0x1fc, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* LeaveRoomAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken) ;

/// [Extension]
/// @brief Method ReconnectAndRejoinAsync, addr 0x5f69b08, size 0x124, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* ReconnectAndRejoinAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, bool  throwOnError, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken) ;

/// [Extension]
/// @brief Method Service_ClientUpdate, addr 0x5f6a99c, size 0x144, virtual false, abstract: false, final false
static inline void Service_ClientUpdate(::Fusion::Photon::Realtime::LoadBalancingClient*  client, ::System::Threading::CancellationToken  token, ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*  completionSource) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadBalancingClientAsyncExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClientAsyncExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadBalancingClientAsyncExtensions(LoadBalancingClientAsyncExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClientAsyncExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadBalancingClientAsyncExtensions(LoadBalancingClientAsyncExtensions const& ) = delete;

/// @brief Field SERVICE_INTERVAL_MS offset 0xffffffff size 0x4
static constexpr int32_t  SERVICE_INTERVAL_MS{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28131};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime::Async
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion::Photon::Realtime::Async {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.Async.LoadBalancingClientAsyncExtensions/<>c__DisplayClass5_0
class CORDL_TYPE LoadBalancingClientAsyncExtensions___c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field handler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::Fusion::Photon::Realtime::Async::OperationHandler*  handler;

static inline ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0* New_ctor() ;

/// @brief Method <LeaveRoomAsync>b__0, addr 0x5f6b0d8, size 0x84, virtual false, abstract: false, final false
inline void _LeaveRoomAsync_b__0() ;

constexpr ::Fusion::Photon::Realtime::Async::OperationHandler* const& __cordl_internal_get_handler() const;

constexpr ::Fusion::Photon::Realtime::Async::OperationHandler*& __cordl_internal_get_handler() ;

constexpr void __cordl_internal_set_handler(::Fusion::Photon::Realtime::Async::OperationHandler*  value) ;

/// @brief Method .ctor, addr 0x5f6a024, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadBalancingClientAsyncExtensions___c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClientAsyncExtensions___c__DisplayClass5_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadBalancingClientAsyncExtensions___c__DisplayClass5_0(LoadBalancingClientAsyncExtensions___c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClientAsyncExtensions___c__DisplayClass5_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadBalancingClientAsyncExtensions___c__DisplayClass5_0(LoadBalancingClientAsyncExtensions___c__DisplayClass5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28130};

/// @brief Field handler, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::Async::OperationHandler*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0, ___handler) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0) == 0x18, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime::Async
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion::Photon::Realtime::Async {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.Async.LoadBalancingClientAsyncExtensions/<>c__DisplayClass4_0
class CORDL_TYPE LoadBalancingClientAsyncExtensions___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field handler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::Fusion::Photon::Realtime::Async::OperationHandler*  handler;

static inline ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <DisconnectAsync>b__0, addr 0x5f6b008, size 0xd0, virtual false, abstract: false, final false
inline void _DisconnectAsync_b__0(::Fusion::Photon::Realtime::DisconnectCause  cause) ;

constexpr ::Fusion::Photon::Realtime::Async::OperationHandler* const& __cordl_internal_get_handler() const;

constexpr ::Fusion::Photon::Realtime::Async::OperationHandler*& __cordl_internal_get_handler() ;

constexpr void __cordl_internal_set_handler(::Fusion::Photon::Realtime::Async::OperationHandler*  value) ;

/// @brief Method .ctor, addr 0x5f69e20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadBalancingClientAsyncExtensions___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClientAsyncExtensions___c__DisplayClass4_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadBalancingClientAsyncExtensions___c__DisplayClass4_0(LoadBalancingClientAsyncExtensions___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClientAsyncExtensions___c__DisplayClass4_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadBalancingClientAsyncExtensions___c__DisplayClass4_0(LoadBalancingClientAsyncExtensions___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28129};

/// @brief Field handler, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::Async::OperationHandler*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0, ___handler) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0) == 0x18, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime::Async
// [CompilerGenerated]
// Dependencies System.Object, System.Threading.CancellationToken
namespace Fusion::Photon::Realtime::Async {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.Async.LoadBalancingClientAsyncExtensions/<>c__DisplayClass1_0
class CORDL_TYPE LoadBalancingClientAsyncExtensions___c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__2, put=__cordl_internal_set___9__2)) ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*  __9__2;

/// @brief Field externalCancelationToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_externalCancelationToken, put=__cordl_internal_set_externalCancelationToken)) ::System::Threading::CancellationToken  externalCancelationToken;

/// @brief Field handler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::Fusion::Photon::Realtime::Async::OperationHandler*  handler;

/// @brief Field result, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::System::Threading::Tasks::TaskCompletionSource_1<::Fusion::Photon::Realtime::RegionHandler*>*  result;

static inline ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0* New_ctor() ;

/// @brief Method <GetRegionsAsync>b__0, addr 0x5f6acfc, size 0xfc, virtual false, abstract: false, final false
inline void _GetRegionsAsync_b__0(::Fusion::Photon::Realtime::DisconnectCause  cause) ;

/// @brief Method <GetRegionsAsync>b__1, addr 0x5f6ae94, size 0xbc, virtual false, abstract: false, final false
inline void _GetRegionsAsync_b__1(::Fusion::Photon::Realtime::RegionHandler*  regionHandler) ;

/// @brief Method <GetRegionsAsync>b__2, addr 0x5f6af50, size 0xb8, virtual false, abstract: false, final false
inline void _GetRegionsAsync_b__2(::Fusion::Photon::Realtime::RegionHandler*  regionHandlerWithPing) ;

constexpr ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>* const& __cordl_internal_get___9__2() const;

constexpr ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*& __cordl_internal_get___9__2() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_externalCancelationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_externalCancelationToken() ;

constexpr ::Fusion::Photon::Realtime::Async::OperationHandler* const& __cordl_internal_get_handler() const;

constexpr ::Fusion::Photon::Realtime::Async::OperationHandler*& __cordl_internal_get_handler() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Fusion::Photon::Realtime::RegionHandler*>* const& __cordl_internal_get_result() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Fusion::Photon::Realtime::RegionHandler*>*& __cordl_internal_get_result() ;

constexpr void __cordl_internal_set___9__2(::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*  value) ;

constexpr void __cordl_internal_set_externalCancelationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_handler(::Fusion::Photon::Realtime::Async::OperationHandler*  value) ;

constexpr void __cordl_internal_set_result(::System::Threading::Tasks::TaskCompletionSource_1<::Fusion::Photon::Realtime::RegionHandler*>*  value) ;

/// @brief Method .ctor, addr 0x5f69740, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadBalancingClientAsyncExtensions___c__DisplayClass1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClientAsyncExtensions___c__DisplayClass1_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadBalancingClientAsyncExtensions___c__DisplayClass1_0(LoadBalancingClientAsyncExtensions___c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClientAsyncExtensions___c__DisplayClass1_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadBalancingClientAsyncExtensions___c__DisplayClass1_0(LoadBalancingClientAsyncExtensions___c__DisplayClass1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28128};

/// @brief Field handler, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::Async::OperationHandler*  ___handler;

/// @brief Field result, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::Fusion::Photon::Realtime::RegionHandler*>*  ___result;

/// @brief Field externalCancelationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___externalCancelationToken;

/// @brief Field <>9__2, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*  _____9__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0, ___handler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0, ___result) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0, ___externalCancelationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0, _____9__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0) == 0x30, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime::Async
// [CompilerGenerated]
// Dependencies System.Object, System.Threading.CancellationToken
namespace Fusion::Photon::Realtime::Async {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.Async.LoadBalancingClientAsyncExtensions/<>c__DisplayClass13_0
class CORDL_TYPE LoadBalancingClientAsyncExtensions___c__DisplayClass13_0 : public ::System::Object {
public:
// Declarations
/// @brief Field client, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::Fusion::Photon::Realtime::LoadBalancingClient*  client;

/// @brief Field completionSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_completionSource, put=__cordl_internal_set_completionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*  completionSource;

/// @brief Field token, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_token, put=__cordl_internal_set_token)) ::System::Threading::CancellationToken  token;

static inline ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0* New_ctor() ;

/// @brief Method <Service_ClientUpdate>b__0, addr 0x5f6ab8c, size 0x170, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* _Service_ClientUpdate_b__0() ;

constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& __cordl_internal_get_client() const;

constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get_client() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>* const& __cordl_internal_get_completionSource() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*& __cordl_internal_get_completionSource() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_token() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_token() ;

constexpr void __cordl_internal_set_client(::Fusion::Photon::Realtime::LoadBalancingClient*  value) ;

constexpr void __cordl_internal_set_completionSource(::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*  value) ;

constexpr void __cordl_internal_set_token(::System::Threading::CancellationToken  value) ;

/// @brief Method .ctor, addr 0x5f6aae0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadBalancingClientAsyncExtensions___c__DisplayClass13_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClientAsyncExtensions___c__DisplayClass13_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadBalancingClientAsyncExtensions___c__DisplayClass13_0(LoadBalancingClientAsyncExtensions___c__DisplayClass13_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClientAsyncExtensions___c__DisplayClass13_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadBalancingClientAsyncExtensions___c__DisplayClass13_0(LoadBalancingClientAsyncExtensions___c__DisplayClass13_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28127};

/// @brief Field token, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___token;

/// @brief Field client, offset: 0x18, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::LoadBalancingClient*  ___client;

/// @brief Field completionSource, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*  ___completionSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0, ___token) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0, ___client) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0, ___completionSource) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0) == 0x28, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime::Async
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion::Photon::Realtime::Async {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.Async.LoadBalancingClientAsyncExtensions/<>c__DisplayClass12_0
class CORDL_TYPE LoadBalancingClientAsyncExtensions___c__DisplayClass12_0 : public ::System::Object {
public:
// Declarations
/// @brief Field client, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::Fusion::Photon::Realtime::LoadBalancingClient*  client;

/// @brief Field handler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::Fusion::Photon::Realtime::Async::OperationHandler*  handler;

static inline ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0* New_ctor() ;

/// @brief Method <CreateOpHandler>b__0, addr 0x5f6aae8, size 0xa4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _CreateOpHandler_b__0(::System::Threading::CancellationToken  token) ;

constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& __cordl_internal_get_client() const;

constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get_client() ;

constexpr ::Fusion::Photon::Realtime::Async::OperationHandler* const& __cordl_internal_get_handler() const;

constexpr ::Fusion::Photon::Realtime::Async::OperationHandler*& __cordl_internal_get_handler() ;

constexpr void __cordl_internal_set_client(::Fusion::Photon::Realtime::LoadBalancingClient*  value) ;

constexpr void __cordl_internal_set_handler(::Fusion::Photon::Realtime::Async::OperationHandler*  value) ;

/// @brief Method .ctor, addr 0x5f6a694, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadBalancingClientAsyncExtensions___c__DisplayClass12_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClientAsyncExtensions___c__DisplayClass12_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadBalancingClientAsyncExtensions___c__DisplayClass12_0(LoadBalancingClientAsyncExtensions___c__DisplayClass12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClientAsyncExtensions___c__DisplayClass12_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadBalancingClientAsyncExtensions___c__DisplayClass12_0(LoadBalancingClientAsyncExtensions___c__DisplayClass12_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28126};

/// @brief Field client, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::LoadBalancingClient*  ___client;

/// @brief Field handler, offset: 0x18, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::Async::OperationHandler*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0, ___client) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0, ___handler) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0) == 0x20, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime::Async
