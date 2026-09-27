#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipWebSocketWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipWebSocketDelegateWrapper_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipWebSocketWrapper)
namespace GlobalNamespace {
class ActiveWebSocket;
}
namespace GlobalNamespace {
class MothershipClientApiClient;
}
namespace GlobalNamespace {
class MothershipCloseWebSocketEventArgs;
}
namespace GlobalNamespace {
class MothershipOpenWebSocketEventArgs;
}
namespace GlobalNamespace {
class MothershipWebSocketRetryQueue;
}
namespace GlobalNamespace {
struct MothershipWebSocketWrapper__CloseConnectionsAsync_d__9;
}
namespace GlobalNamespace {
class MothershipWebSocketWrapper___c__DisplayClass6_0;
}
namespace NativeWebSocket {
struct WebSocketCloseCode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipWebSocketWrapper;
}
namespace GlobalNamespace {
class MothershipWebSocketWrapper___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipWebSocketWrapper*);
MARK_REF_T(::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipWebSocketWrapper*, "", "MothershipWebSocketWrapper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0*, "", "MothershipWebSocketWrapper/<>c__DisplayClass6_0");
// Dependencies MothershipWebSocketDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipWebSocketWrapper
class CORDL_TYPE MothershipWebSocketWrapper : public ::GlobalNamespace::MothershipWebSocketDelegateWrapper {
public:
// Declarations
using _CloseConnectionsAsync_d__9 = ::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9;

using __c__DisplayClass6_0 = ::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0;

/// @brief Field _client, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__client, put=__cordl_internal_set__client)) ::GlobalNamespace::MothershipClientApiClient*  _client;

/// @brief Field _retryQueue, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__retryQueue, put=__cordl_internal_set__retryQueue)) ::GlobalNamespace::MothershipWebSocketRetryQueue*  _retryQueue;

/// @brief Field _websockets, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__websockets, put=__cordl_internal_set__websockets)) ::System::Collections::Generic::List_1<::GlobalNamespace::ActiveWebSocket*>*  _websockets;

/// @brief Method CloseConnection, addr 0x53c3374, size 0x204, virtual true, abstract: false, final false
inline bool CloseConnection(::GlobalNamespace::MothershipCloseWebSocketEventArgs*  request) ;

/// @brief Method CloseConnections, addr 0x53c3578, size 0xd4, virtual false, abstract: false, final false
inline void CloseConnections() ;

/// [AsyncStateMachine(typeof(MothershipWebSocketWrapper::<CloseConnectionsAsync>d__9))]
/// @brief Method CloseConnectionsAsync, addr 0x53c364c, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* CloseConnectionsAsync() ;

/// @brief Method CreateConnection, addr 0x53c2d9c, size 0x170, virtual true, abstract: false, final false
inline bool CreateConnection(::GlobalNamespace::MothershipOpenWebSocketEventArgs*  request) ;

static inline ::GlobalNamespace::MothershipWebSocketWrapper* New_ctor(::GlobalNamespace::MothershipClientApiClient*  client) ;

/// @brief Method RefreshClientTokenHeaders, addr 0x53c2874, size 0x394, virtual false, abstract: false, final false
inline void RefreshClientTokenHeaders() ;

/// @brief Method TickWebSockets, addr 0x53c2c08, size 0x194, virtual false, abstract: false, final false
inline void TickWebSockets(float_t  deltaTime) ;

/// [CompilerGenerated]
/// @brief Method <CreateConnection>g__OnError|6_5, addr 0x53c3728, size 0x8c, virtual false, abstract: false, final false
static inline void _CreateConnection_g__OnError_6_5(::StringW  error) ;

constexpr ::GlobalNamespace::MothershipClientApiClient* const& __cordl_internal_get__client() const;

constexpr ::GlobalNamespace::MothershipClientApiClient*& __cordl_internal_get__client() ;

constexpr ::GlobalNamespace::MothershipWebSocketRetryQueue* const& __cordl_internal_get__retryQueue() const;

constexpr ::GlobalNamespace::MothershipWebSocketRetryQueue*& __cordl_internal_get__retryQueue() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ActiveWebSocket*>* const& __cordl_internal_get__websockets() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ActiveWebSocket*>*& __cordl_internal_get__websockets() ;

constexpr void __cordl_internal_set__client(::GlobalNamespace::MothershipClientApiClient*  value) ;

constexpr void __cordl_internal_set__retryQueue(::GlobalNamespace::MothershipWebSocketRetryQueue*  value) ;

constexpr void __cordl_internal_set__websockets(::System::Collections::Generic::List_1<::GlobalNamespace::ActiveWebSocket*>*  value) ;

/// @brief Method .ctor, addr 0x53c277c, size 0xf8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::MothershipClientApiClient*  client) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipWebSocketWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipWebSocketWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipWebSocketWrapper(MothershipWebSocketWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipWebSocketWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipWebSocketWrapper(MothershipWebSocketWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9784};

/// @brief Field _client, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::MothershipClientApiClient*  ____client;

/// @brief Field _retryQueue, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::MothershipWebSocketRetryQueue*  ____retryQueue;

/// @brief Field _websockets, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ActiveWebSocket*>*  ____websockets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipWebSocketWrapper, ____client) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipWebSocketWrapper, ____retryQueue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipWebSocketWrapper, ____websockets) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipWebSocketWrapper) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipWebSocketWrapper/<>c__DisplayClass6_0
class CORDL_TYPE MothershipWebSocketWrapper___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::GlobalNamespace::MothershipWebSocketWrapper*  __4__this;

/// @brief Field aws, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_aws, put=__cordl_internal_set_aws)) ::GlobalNamespace::ActiveWebSocket*  aws;

/// @brief Field request, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::GlobalNamespace::MothershipOpenWebSocketEventArgs*  request;

static inline ::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <CreateConnection>b__0, addr 0x53c37b4, size 0x4c, virtual false, abstract: false, final false
inline bool _CreateConnection_b__0(::GlobalNamespace::ActiveWebSocket*  ws) ;

/// @brief Method <CreateConnection>g__CreateSocket|1, addr 0x53c2f1c, size 0x458, virtual false, abstract: false, final false
inline void _CreateConnection_g__CreateSocket_1(::GlobalNamespace::MothershipOpenWebSocketEventArgs*  req) ;

/// @brief Method <CreateConnection>g__OnClose|4, addr 0x53c3ca4, size 0x1c4, virtual false, abstract: false, final false
inline void _CreateConnection_g__OnClose_4(::NativeWebSocket::WebSocketCloseCode  code) ;

/// @brief Method <CreateConnection>g__OnMessage|3, addr 0x53c3ac4, size 0x1e0, virtual false, abstract: false, final false
inline void _CreateConnection_g__OnMessage_3(::ArrayW<uint8_t>  data) ;

/// @brief Method <CreateConnection>g__OnOpen|2, addr 0x53c3800, size 0x2c4, virtual false, abstract: false, final false
inline void _CreateConnection_g__OnOpen_2() ;

constexpr ::GlobalNamespace::MothershipWebSocketWrapper* const& __cordl_internal_get___4__this() const;

constexpr ::GlobalNamespace::MothershipWebSocketWrapper*& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ActiveWebSocket* const& __cordl_internal_get_aws() const;

constexpr ::GlobalNamespace::ActiveWebSocket*& __cordl_internal_get_aws() ;

constexpr ::GlobalNamespace::MothershipOpenWebSocketEventArgs* const& __cordl_internal_get_request() const;

constexpr ::GlobalNamespace::MothershipOpenWebSocketEventArgs*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::GlobalNamespace::MothershipWebSocketWrapper*  value) ;

constexpr void __cordl_internal_set_aws(::GlobalNamespace::ActiveWebSocket*  value) ;

constexpr void __cordl_internal_set_request(::GlobalNamespace::MothershipOpenWebSocketEventArgs*  value) ;

/// @brief Method .ctor, addr 0x53c2f0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipWebSocketWrapper___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipWebSocketWrapper___c__DisplayClass6_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipWebSocketWrapper___c__DisplayClass6_0(MothershipWebSocketWrapper___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipWebSocketWrapper___c__DisplayClass6_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipWebSocketWrapper___c__DisplayClass6_0(MothershipWebSocketWrapper___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9782};

/// @brief Field request, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::MothershipOpenWebSocketEventArgs*  ___request;

/// @brief Field aws, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::ActiveWebSocket*  ___aws;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::MothershipWebSocketWrapper*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0, ___aws) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
