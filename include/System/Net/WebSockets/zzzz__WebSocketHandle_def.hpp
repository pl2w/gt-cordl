#pragma once
// IWYU pragma private; include "System/Net/WebSockets/WebSocketHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/WebSockets/zzzz__WebSocketState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketHandle)
namespace GlobalNamespace {
struct WebSocketHandle__ConnectAsyncCore_d__26;
}
namespace GlobalNamespace {
struct WebSocketHandle__ConnectSocketAsync_d__27;
}
namespace GlobalNamespace {
struct WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30;
}
namespace GlobalNamespace {
struct WebSocketHandle__ReadResponseHeaderLineAsync_d__32;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net::WebSockets {
class ClientWebSocketOptions;
}
namespace System::Net::WebSockets {
struct WebSocketCloseStatus;
}
namespace System::Net::WebSockets {
class WebSocketHandle___c;
}
namespace System::Net::WebSockets {
class WebSocketHandle___c__DisplayClass30_0;
}
namespace System::Net::WebSockets {
struct WebSocketMessageType;
}
namespace System::Net::WebSockets {
class WebSocketReceiveResult;
}
namespace System::Net::WebSockets {
struct WebSocketState;
}
namespace System::Net::WebSockets {
class WebSocket;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net::WebSockets {
class WebSocketHandle;
}
namespace System::Net::WebSockets {
class WebSocketHandle___c;
}
namespace System::Net::WebSockets {
class WebSocketHandle___c__DisplayClass30_0;
}
// Write type traits
MARK_REF_T(::System::Net::WebSockets::WebSocketHandle*);
MARK_REF_T(::System::Net::WebSockets::WebSocketHandle___c*);
MARK_REF_T(::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0*);
DEFINE_IL2CPP_CLASS(::System::Net::WebSockets::WebSocketHandle*, "System.Net.WebSockets", "WebSocketHandle");
DEFINE_IL2CPP_CLASS(::System::Net::WebSockets::WebSocketHandle___c*, "System.Net.WebSockets", "WebSocketHandle/<>c");
DEFINE_IL2CPP_CLASS(::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0*, "System.Net.WebSockets", "WebSocketHandle/<>c__DisplayClass30_0");
// Dependencies System.Net.WebSockets.WebSocketState, System.Object
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: System.Net.WebSockets.WebSocketHandle
class CORDL_TYPE WebSocketHandle : public ::System::Object {
public:
// Declarations
using _ConnectAsyncCore_d__26 = ::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26;

using _ConnectSocketAsync_d__27 = ::GlobalNamespace::WebSocketHandle__ConnectSocketAsync_d__27;

using _ParseAndValidateConnectResponseAsync_d__30 = ::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30;

using _ReadResponseHeaderLineAsync_d__32 = ::GlobalNamespace::WebSocketHandle__ReadResponseHeaderLineAsync_d__32;

using __c = ::System::Net::WebSockets::WebSocketHandle___c;

using __c__DisplayClass30_0 = ::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0;

 __declspec(property(get=get_CloseStatus)) ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  CloseStatus;

 __declspec(property(get=get_CloseStatusDescription)) ::StringW  CloseStatusDescription;

 __declspec(property(get=get_State)) ::System::Net::WebSockets::WebSocketState  State;

/// @brief Field _abortSource, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__abortSource, put=__cordl_internal_set__abortSource)) ::System::Threading::CancellationTokenSource*  _abortSource;

/// @brief Field _state, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::System::Net::WebSockets::WebSocketState  _state;

/// @brief Field _webSocket, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__webSocket, put=__cordl_internal_set__webSocket)) ::System::Net::WebSockets::WebSocket*  _webSocket;

/// @brief Field s_defaultHttpEncoding, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_defaultHttpEncoding, put=setStaticF_s_defaultHttpEncoding)) ::System::Text::Encoding*  s_defaultHttpEncoding;

/// @brief Field t_cachedStringBuilder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_t_cachedStringBuilder, put=setStaticF_t_cachedStringBuilder)) ::System::Text::StringBuilder*  t_cachedStringBuilder;

/// @brief Method Abort, addr 0xaced9b4, size 0x3c, virtual false, abstract: false, final false
inline void Abort() ;

/// @brief Method BuildRequestHeader, addr 0xacee9b0, size 0x870, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> BuildRequestHeader(::System::Uri*  uri, ::System::Net::WebSockets::ClientWebSocketOptions*  options, ::StringW  secKey) ;

/// @brief Method CheckPlatformSupport, addr 0xacecfa8, size 0x4, virtual false, abstract: false, final false
static inline void CheckPlatformSupport() ;

/// @brief Method CloseAsync, addr 0xaced890, size 0x1c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* CloseAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method CloseOutputAsync, addr 0xaced904, size 0x1c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* CloseOutputAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.WebSockets.WebSocketHandle::<ConnectAsyncCore>d__26))]
/// @brief Method ConnectAsyncCore, addr 0xacee0a0, size 0x130, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ConnectAsyncCore(::System::Uri*  uri, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::WebSockets::ClientWebSocketOptions*  options) ;

/// [AsyncStateMachine(typeof(System.Net.WebSockets.WebSocketHandle::<ConnectSocketAsync>d__27))]
/// @brief Method ConnectSocketAsync, addr 0xacee85c, size 0x154, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Net::Sockets::Socket*>* ConnectSocketAsync(::StringW  host, int32_t  port, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Create, addr 0xacee050, size 0x50, virtual false, abstract: false, final false
static inline ::System::Net::WebSockets::WebSocketHandle* Create() ;

/// @brief Method CreateSecKeyAndSecWebSocketAccept, addr 0xacef220, size 0x250, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW> CreateSecKeyAndSecWebSocketAccept() ;

/// @brief Method Dispose, addr 0xaceda98, size 0x24, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method IsValid, addr 0xaced13c, size 0xc, virtual false, abstract: false, final false
static inline bool IsValid(::System::Net::WebSockets::WebSocketHandle*  handle) ;

static inline ::System::Net::WebSockets::WebSocketHandle* New_ctor() ;

/// [AsyncStateMachine(typeof(System.Net.WebSockets.WebSocketHandle::<ParseAndValidateConnectResponseAsync>d__30))]
/// @brief Method ParseAndValidateConnectResponseAsync, addr 0xacef470, size 0x160, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* ParseAndValidateConnectResponseAsync(::System::IO::Stream*  stream, ::System::Net::WebSockets::ClientWebSocketOptions*  options, ::StringW  expectedSecWebSocketAccept, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.WebSockets.WebSocketHandle::<ReadResponseHeaderLineAsync>d__32))]
/// @brief Method ReadResponseHeaderLineAsync, addr 0xacef6c8, size 0x134, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::StringW>* ReadResponseHeaderLineAsync(::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReceiveAsync, addr 0xaced81c, size 0x1c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* ReceiveAsync(::System::ArraySegment_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SendAsync, addr 0xaced7a0, size 0x24, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SendAsync(::System::ArraySegment_1<uint8_t>  buffer, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ValidateAndTrackHeader, addr 0xacef5d0, size 0xf0, virtual false, abstract: false, final false
static inline void ValidateAndTrackHeader(::StringW  targetHeaderName, ::StringW  targetHeaderValue, ::StringW  foundHeaderName, ::StringW  foundHeaderValue, ::by_ref<bool>  foundHeader) ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__abortSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__abortSource() ;

constexpr ::System::Net::WebSockets::WebSocketState const& __cordl_internal_get__state() const;

constexpr ::System::Net::WebSockets::WebSocketState& __cordl_internal_get__state() ;

constexpr ::System::Net::WebSockets::WebSocket* const& __cordl_internal_get__webSocket() const;

constexpr ::System::Net::WebSockets::WebSocket*& __cordl_internal_get__webSocket() ;

constexpr void __cordl_internal_set__abortSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__state(::System::Net::WebSockets::WebSocketState  value) ;

constexpr void __cordl_internal_set__webSocket(::System::Net::WebSockets::WebSocket*  value) ;

/// @brief Method .ctor, addr 0xacee7e8, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Text::Encoding* getStaticF_s_defaultHttpEncoding() ;

static inline ::System::Text::StringBuilder* getStaticF_t_cachedStringBuilder() ;

/// @brief Method get_CloseStatus, addr 0xaced148, size 0x18, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> get_CloseStatus() ;

/// @brief Method get_CloseStatusDescription, addr 0xaced1ec, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_CloseStatusDescription() ;

/// @brief Method get_State, addr 0xaced2ac, size 0x20, virtual false, abstract: false, final false
inline ::System::Net::WebSockets::WebSocketState get_State() ;

static inline void setStaticF_s_defaultHttpEncoding(::System::Text::Encoding*  value) ;

static inline void setStaticF_t_cachedStringBuilder(::System::Text::StringBuilder*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketHandle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketHandle(WebSocketHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketHandle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketHandle(WebSocketHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10915};

/// @brief Field _abortSource, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____abortSource;

/// @brief Field _state, offset: 0x18, size: 0x4, def value: None
 ::System::Net::WebSockets::WebSocketState  ____state;

/// @brief Field _webSocket, offset: 0x20, size: 0x8, def value: None
 ::System::Net::WebSockets::WebSocket*  ____webSocket;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebSockets::WebSocketHandle, ____abortSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::WebSocketHandle, ____state) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::WebSocketHandle, ____webSocket) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebSockets::WebSocketHandle) == 0x28, "Size mismatch!");

} // namespace end def System::Net::WebSockets
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: System.Net.WebSockets.WebSocketHandle/<>c__DisplayClass30_0
class CORDL_TYPE WebSocketHandle___c__DisplayClass30_0 : public ::System::Object {
public:
// Declarations
/// @brief Field headerValue, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_headerValue, put=__cordl_internal_set_headerValue)) ::StringW  headerValue;

static inline ::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0* New_ctor() ;

/// @brief Method <ParseAndValidateConnectResponseAsync>b__0, addr 0xacf169c, size 0x18, virtual false, abstract: false, final false
inline bool _ParseAndValidateConnectResponseAsync_b__0(::StringW  requested) ;

constexpr ::StringW const& __cordl_internal_get_headerValue() const;

constexpr ::StringW& __cordl_internal_get_headerValue() ;

constexpr void __cordl_internal_set_headerValue(::StringW  value) ;

/// @brief Method .ctor, addr 0xacf1694, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketHandle___c__DisplayClass30_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketHandle___c__DisplayClass30_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketHandle___c__DisplayClass30_0(WebSocketHandle___c__DisplayClass30_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketHandle___c__DisplayClass30_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketHandle___c__DisplayClass30_0(WebSocketHandle___c__DisplayClass30_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10912};

/// @brief Field headerValue, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___headerValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0, ___headerValue) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0) == 0x18, "Size mismatch!");

} // namespace end def System::Net::WebSockets
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: System.Net.WebSockets.WebSocketHandle/<>c
class CORDL_TYPE WebSocketHandle___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Net::WebSockets::WebSocketHandle___c*  __9;

/// @brief Field <>9__26_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_0, put=setStaticF___9__26_0)) ::System::Action_1<::System::Object*>*  __9__26_0;

/// @brief Field <>9__27_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_0, put=setStaticF___9__27_0)) ::System::Action_1<::System::Object*>*  __9__27_0;

/// @brief Field <>9__27_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_1, put=setStaticF___9__27_1)) ::System::Action_1<::System::Object*>*  __9__27_1;

static inline ::System::Net::WebSockets::WebSocketHandle___c* New_ctor() ;

/// @brief Method <ConnectAsyncCore>b__26_0, addr 0xacef8cc, size 0x60, virtual false, abstract: false, final false
inline void _ConnectAsyncCore_b__26_0(::System::Object*  s) ;

/// @brief Method <ConnectSocketAsync>b__27_0, addr 0xacef92c, size 0x84, virtual false, abstract: false, final false
inline void _ConnectSocketAsync_b__27_0(::System::Object*  s) ;

/// @brief Method <ConnectSocketAsync>b__27_1, addr 0xacef9b0, size 0x84, virtual false, abstract: false, final false
inline void _ConnectSocketAsync_b__27_1(::System::Object*  s) ;

/// @brief Method .ctor, addr 0xacef8c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Net::WebSockets::WebSocketHandle___c* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__26_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__27_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__27_1() ;

static inline void setStaticF___9(::System::Net::WebSockets::WebSocketHandle___c*  value) ;

static inline void setStaticF___9__26_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__27_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__27_1(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketHandle___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketHandle___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketHandle___c(WebSocketHandle___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketHandle___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketHandle___c(WebSocketHandle___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10909};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebSockets::WebSocketHandle___c) == 0x10, "Size mismatch!");

} // namespace end def System::Net::WebSockets
