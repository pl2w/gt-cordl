#pragma once
// IWYU pragma private; include "WebSocketSharp/WebSocket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "WebSocketSharp/zzzz__CompressionMethod_def.hpp"
#include "WebSocketSharp/zzzz__Opcode_def.hpp"
#include "WebSocketSharp/zzzz__WebSocketState_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocket)
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Sockets {
class TcpClient;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
class EventHandler;
}
namespace System {
class Exception;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
namespace WebSocketSharp::Net::WebSockets {
class WebSocketContext;
}
namespace WebSocketSharp::Net {
class AuthenticationChallenge;
}
namespace WebSocketSharp::Net {
class ClientSslConfiguration;
}
namespace WebSocketSharp::Net {
class CookieCollection;
}
namespace WebSocketSharp::Net {
class NetworkCredential;
}
namespace WebSocketSharp {
class CloseEventArgs;
}
namespace WebSocketSharp {
struct CloseStatusCode;
}
namespace WebSocketSharp {
class ErrorEventArgs;
}
namespace WebSocketSharp {
struct Fin;
}
namespace WebSocketSharp {
class HttpRequest;
}
namespace WebSocketSharp {
class HttpResponse;
}
namespace WebSocketSharp {
class Logger;
}
namespace WebSocketSharp {
class MessageEventArgs;
}
namespace WebSocketSharp {
struct Opcode;
}
namespace WebSocketSharp {
class PayloadData;
}
namespace WebSocketSharp {
class WebSocketFrame;
}
namespace WebSocketSharp {
struct WebSocketState;
}
namespace WebSocketSharp {
class WebSocket___c;
}
namespace WebSocketSharp {
class WebSocket___c__DisplayClass167_0;
}
namespace WebSocketSharp {
class WebSocket___c__DisplayClass174_0;
}
namespace WebSocketSharp {
class WebSocket___c__DisplayClass176_0;
}
namespace WebSocketSharp {
class WebSocket___c__DisplayClass177_0;
}
namespace WebSocketSharp {
class WebSocket___c__DisplayClass201_0;
}
// Forward declare root types
namespace WebSocketSharp {
class WebSocket;
}
namespace WebSocketSharp {
class WebSocket___c;
}
namespace WebSocketSharp {
class WebSocket___c__DisplayClass167_0;
}
namespace WebSocketSharp {
class WebSocket___c__DisplayClass174_0;
}
namespace WebSocketSharp {
class WebSocket___c__DisplayClass176_0;
}
namespace WebSocketSharp {
class WebSocket___c__DisplayClass177_0;
}
namespace WebSocketSharp {
class WebSocket___c__DisplayClass201_0;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::WebSocket*);
MARK_REF_T(::WebSocketSharp::WebSocket___c*);
MARK_REF_T(::WebSocketSharp::WebSocket___c__DisplayClass167_0*);
MARK_REF_T(::WebSocketSharp::WebSocket___c__DisplayClass174_0*);
MARK_REF_T(::WebSocketSharp::WebSocket___c__DisplayClass176_0*);
MARK_REF_T(::WebSocketSharp::WebSocket___c__DisplayClass177_0*);
MARK_REF_T(::WebSocketSharp::WebSocket___c__DisplayClass201_0*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::WebSocket*, "WebSocketSharp", "WebSocket");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::WebSocket___c*, "WebSocketSharp", "WebSocket/<>c");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::WebSocket___c__DisplayClass167_0*, "WebSocketSharp", "WebSocket/<>c__DisplayClass167_0");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::WebSocket___c__DisplayClass174_0*, "WebSocketSharp", "WebSocket/<>c__DisplayClass174_0");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::WebSocket___c__DisplayClass176_0*, "WebSocketSharp", "WebSocket/<>c__DisplayClass176_0");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::WebSocket___c__DisplayClass177_0*, "WebSocketSharp", "WebSocket/<>c__DisplayClass177_0");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::WebSocket___c__DisplayClass201_0*, "WebSocketSharp", "WebSocket/<>c__DisplayClass201_0");
// Dependencies System.Object, System.TimeSpan, WebSocketSharp.CompressionMethod, WebSocketSharp.Opcode, WebSocketSharp.WebSocketState
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.WebSocket
class CORDL_TYPE WebSocket : public ::System::Object {
public:
// Declarations
using __c = ::WebSocketSharp::WebSocket___c;

using __c__DisplayClass167_0 = ::WebSocketSharp::WebSocket___c__DisplayClass167_0;

using __c__DisplayClass174_0 = ::WebSocketSharp::WebSocket___c__DisplayClass174_0;

using __c__DisplayClass176_0 = ::WebSocketSharp::WebSocket___c__DisplayClass176_0;

using __c__DisplayClass177_0 = ::WebSocketSharp::WebSocket___c__DisplayClass177_0;

using __c__DisplayClass201_0 = ::WebSocketSharp::WebSocket___c__DisplayClass201_0;

/// @brief Field EmptyBytes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmptyBytes, put=setStaticF_EmptyBytes)) ::ArrayW<uint8_t>  EmptyBytes;

/// @brief Field FragmentLength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_FragmentLength, put=setStaticF_FragmentLength)) int32_t  FragmentLength;

 __declspec(property(get=get_HasMessage)) bool  HasMessage;

/// @brief Field OnClose, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClose, put=__cordl_internal_set_OnClose)) ::System::EventHandler_1<::WebSocketSharp::CloseEventArgs*>*  OnClose;

/// @brief Field OnError, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnError, put=__cordl_internal_set_OnError)) ::System::EventHandler_1<::WebSocketSharp::ErrorEventArgs*>*  OnError;

/// @brief Field OnMessage, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMessage, put=__cordl_internal_set_OnMessage)) ::System::EventHandler_1<::WebSocketSharp::MessageEventArgs*>*  OnMessage;

/// @brief Field OnOpen, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnOpen, put=__cordl_internal_set_OnOpen)) ::System::EventHandler*  OnOpen;

/// @brief Field RandomNumber, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RandomNumber, put=setStaticF_RandomNumber)) ::System::Security::Cryptography::RandomNumberGenerator*  RandomNumber;

 __declspec(property(get=get_ReadyState)) ::WebSocketSharp::WebSocketState  ReadyState;

/// @brief Field _authChallenge, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__authChallenge, put=__cordl_internal_set__authChallenge)) ::WebSocketSharp::Net::AuthenticationChallenge*  _authChallenge;

/// @brief Field _base64Key, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__base64Key, put=__cordl_internal_set__base64Key)) ::StringW  _base64Key;

/// @brief Field _client, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__client, put=__cordl_internal_set__client)) bool  _client;

/// @brief Field _closeContext, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeContext, put=__cordl_internal_set__closeContext)) ::System::Action*  _closeContext;

/// @brief Field _compression, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__compression, put=__cordl_internal_set__compression)) ::WebSocketSharp::CompressionMethod  _compression;

/// @brief Field _context, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__context, put=__cordl_internal_set__context)) ::WebSocketSharp::Net::WebSockets::WebSocketContext*  _context;

/// @brief Field _cookies, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__cookies, put=__cordl_internal_set__cookies)) ::WebSocketSharp::Net::CookieCollection*  _cookies;

/// @brief Field _credentials, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__credentials, put=__cordl_internal_set__credentials)) ::WebSocketSharp::Net::NetworkCredential*  _credentials;

/// @brief Field _emitOnPing, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__emitOnPing, put=__cordl_internal_set__emitOnPing)) bool  _emitOnPing;

/// @brief Field _enableRedirection, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__enableRedirection, put=__cordl_internal_set__enableRedirection)) bool  _enableRedirection;

/// @brief Field _extensions, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__extensions, put=__cordl_internal_set__extensions)) ::StringW  _extensions;

/// @brief Field _extensionsRequested, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__extensionsRequested, put=__cordl_internal_set__extensionsRequested)) bool  _extensionsRequested;

/// @brief Field _forMessageEventQueue, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__forMessageEventQueue, put=__cordl_internal_set__forMessageEventQueue)) ::System::Object*  _forMessageEventQueue;

/// @brief Field _forPing, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__forPing, put=__cordl_internal_set__forPing)) ::System::Object*  _forPing;

/// @brief Field _forSend, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__forSend, put=__cordl_internal_set__forSend)) ::System::Object*  _forSend;

/// @brief Field _forState, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__forState, put=__cordl_internal_set__forState)) ::System::Object*  _forState;

/// @brief Field _fragmentsBuffer, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__fragmentsBuffer, put=__cordl_internal_set__fragmentsBuffer)) ::System::IO::MemoryStream*  _fragmentsBuffer;

/// @brief Field _fragmentsCompressed, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__fragmentsCompressed, put=__cordl_internal_set__fragmentsCompressed)) bool  _fragmentsCompressed;

/// @brief Field _fragmentsOpcode, offset 0x91, size 0x1 
 __declspec(property(get=__cordl_internal_get__fragmentsOpcode, put=__cordl_internal_set__fragmentsOpcode)) ::WebSocketSharp::Opcode  _fragmentsOpcode;

/// @brief Field _handshakeRequestChecker, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__handshakeRequestChecker, put=__cordl_internal_set__handshakeRequestChecker)) ::System::Func_2<::WebSocketSharp::Net::WebSockets::WebSocketContext*,::StringW>*  _handshakeRequestChecker;

/// @brief Field _ignoreExtensions, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get__ignoreExtensions, put=__cordl_internal_set__ignoreExtensions)) bool  _ignoreExtensions;

/// @brief Field _inContinuation, offset 0xa1, size 0x1 
 __declspec(property(get=__cordl_internal_get__inContinuation, put=__cordl_internal_set__inContinuation)) bool  _inContinuation;

/// @brief Field _inMessage, offset 0xa2, size 0x1 
 __declspec(property(get=__cordl_internal_get__inMessage, put=__cordl_internal_set__inMessage)) bool  _inMessage;

/// @brief Field _logger, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__logger, put=__cordl_internal_set__logger)) ::WebSocketSharp::Logger*  _logger;

/// @brief Field _maxRetryCountForConnect, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__maxRetryCountForConnect, put=setStaticF__maxRetryCountForConnect)) int32_t  _maxRetryCountForConnect;

/// @brief Field _message, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__message, put=__cordl_internal_set__message)) ::System::Action_1<::WebSocketSharp::MessageEventArgs*>*  _message;

/// @brief Field _messageEventQueue, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__messageEventQueue, put=__cordl_internal_set__messageEventQueue)) ::System::Collections::Generic::Queue_1<::WebSocketSharp::MessageEventArgs*>*  _messageEventQueue;

/// @brief Field _nonceCount, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__nonceCount, put=__cordl_internal_set__nonceCount)) uint32_t  _nonceCount;

/// @brief Field _origin, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__origin, put=__cordl_internal_set__origin)) ::StringW  _origin;

/// @brief Field _pongReceived, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__pongReceived, put=__cordl_internal_set__pongReceived)) ::System::Threading::ManualResetEvent*  _pongReceived;

/// @brief Field _preAuth, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get__preAuth, put=__cordl_internal_set__preAuth)) bool  _preAuth;

/// @brief Field _protocol, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__protocol, put=__cordl_internal_set__protocol)) ::StringW  _protocol;

/// @brief Field _protocols, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__protocols, put=__cordl_internal_set__protocols)) ::ArrayW<::StringW>  _protocols;

/// @brief Field _protocolsRequested, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get__protocolsRequested, put=__cordl_internal_set__protocolsRequested)) bool  _protocolsRequested;

/// @brief Field _proxyCredentials, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__proxyCredentials, put=__cordl_internal_set__proxyCredentials)) ::WebSocketSharp::Net::NetworkCredential*  _proxyCredentials;

/// @brief Field _proxyUri, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__proxyUri, put=__cordl_internal_set__proxyUri)) ::System::Uri*  _proxyUri;

/// @brief Field _readyState, offset 0x108, size 0x2 
 __declspec(property(get=__cordl_internal_get__readyState, put=__cordl_internal_set__readyState)) ::WebSocketSharp::WebSocketState  _readyState;

/// @brief Field _receivingExited, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__receivingExited, put=__cordl_internal_set__receivingExited)) ::System::Threading::ManualResetEvent*  _receivingExited;

/// @brief Field _retryCountForConnect, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get__retryCountForConnect, put=__cordl_internal_set__retryCountForConnect)) int32_t  _retryCountForConnect;

/// @brief Field _secure, offset 0x11c, size 0x1 
 __declspec(property(get=__cordl_internal_get__secure, put=__cordl_internal_set__secure)) bool  _secure;

/// @brief Field _sslConfig, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__sslConfig, put=__cordl_internal_set__sslConfig)) ::WebSocketSharp::Net::ClientSslConfiguration*  _sslConfig;

/// @brief Field _stream, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__stream, put=__cordl_internal_set__stream)) ::System::IO::Stream*  _stream;

/// @brief Field _tcpClient, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__tcpClient, put=__cordl_internal_set__tcpClient)) ::System::Net::Sockets::TcpClient*  _tcpClient;

/// @brief Field _uri, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__uri, put=__cordl_internal_set__uri)) ::System::Uri*  _uri;

/// @brief Field _waitTime, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__waitTime, put=__cordl_internal_set__waitTime)) ::System::TimeSpan  _waitTime;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Close, addr 0xb97ecb4, size 0x1c, virtual false, abstract: false, final false
inline void Close() ;

/// @brief Method ConnectAsync, addr 0xb97ecd0, size 0x1dc, virtual false, abstract: false, final false
inline void ConnectAsync() ;

/// @brief Method CreateBase64Key, addr 0xb9783c0, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW CreateBase64Key() ;

/// @brief Method CreateResponseKey, addr 0xb97eb68, size 0x13c, virtual false, abstract: false, final false
static inline ::StringW CreateResponseKey(::StringW  base64Key) ;

static inline ::WebSocketSharp::WebSocket* New_ctor(::StringW  url, /* [ParamArray] */ ::ArrayW<::StringW>  protocols) ;

/// @brief Method SendAsync, addr 0xb97eeb4, size 0x1a4, virtual false, abstract: false, final false
inline void SendAsync(::StringW  data, ::System::Action_1<bool>*  completed) ;

/// @brief Method System.IDisposable.Dispose, addr 0xb97f058, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::EventHandler_1<::WebSocketSharp::CloseEventArgs*>* const& __cordl_internal_get_OnClose() const;

constexpr ::System::EventHandler_1<::WebSocketSharp::CloseEventArgs*>*& __cordl_internal_get_OnClose() ;

constexpr ::System::EventHandler_1<::WebSocketSharp::ErrorEventArgs*>* const& __cordl_internal_get_OnError() const;

constexpr ::System::EventHandler_1<::WebSocketSharp::ErrorEventArgs*>*& __cordl_internal_get_OnError() ;

constexpr ::System::EventHandler_1<::WebSocketSharp::MessageEventArgs*>* const& __cordl_internal_get_OnMessage() const;

constexpr ::System::EventHandler_1<::WebSocketSharp::MessageEventArgs*>*& __cordl_internal_get_OnMessage() ;

constexpr ::System::EventHandler* const& __cordl_internal_get_OnOpen() const;

constexpr ::System::EventHandler*& __cordl_internal_get_OnOpen() ;

constexpr ::WebSocketSharp::Net::AuthenticationChallenge* const& __cordl_internal_get__authChallenge() const;

constexpr ::WebSocketSharp::Net::AuthenticationChallenge*& __cordl_internal_get__authChallenge() ;

constexpr ::StringW const& __cordl_internal_get__base64Key() const;

constexpr ::StringW& __cordl_internal_get__base64Key() ;

constexpr bool const& __cordl_internal_get__client() const;

constexpr bool& __cordl_internal_get__client() ;

constexpr ::System::Action* const& __cordl_internal_get__closeContext() const;

constexpr ::System::Action*& __cordl_internal_get__closeContext() ;

constexpr ::WebSocketSharp::CompressionMethod const& __cordl_internal_get__compression() const;

constexpr ::WebSocketSharp::CompressionMethod& __cordl_internal_get__compression() ;

constexpr ::WebSocketSharp::Net::WebSockets::WebSocketContext* const& __cordl_internal_get__context() const;

constexpr ::WebSocketSharp::Net::WebSockets::WebSocketContext*& __cordl_internal_get__context() ;

constexpr ::WebSocketSharp::Net::CookieCollection* const& __cordl_internal_get__cookies() const;

constexpr ::WebSocketSharp::Net::CookieCollection*& __cordl_internal_get__cookies() ;

constexpr ::WebSocketSharp::Net::NetworkCredential* const& __cordl_internal_get__credentials() const;

constexpr ::WebSocketSharp::Net::NetworkCredential*& __cordl_internal_get__credentials() ;

constexpr bool const& __cordl_internal_get__emitOnPing() const;

constexpr bool& __cordl_internal_get__emitOnPing() ;

constexpr bool const& __cordl_internal_get__enableRedirection() const;

constexpr bool& __cordl_internal_get__enableRedirection() ;

constexpr ::StringW const& __cordl_internal_get__extensions() const;

constexpr ::StringW& __cordl_internal_get__extensions() ;

constexpr bool const& __cordl_internal_get__extensionsRequested() const;

constexpr bool& __cordl_internal_get__extensionsRequested() ;

constexpr ::System::Object* const& __cordl_internal_get__forMessageEventQueue() const;

constexpr ::System::Object*& __cordl_internal_get__forMessageEventQueue() ;

constexpr ::System::Object* const& __cordl_internal_get__forPing() const;

constexpr ::System::Object*& __cordl_internal_get__forPing() ;

constexpr ::System::Object* const& __cordl_internal_get__forSend() const;

constexpr ::System::Object*& __cordl_internal_get__forSend() ;

constexpr ::System::Object* const& __cordl_internal_get__forState() const;

constexpr ::System::Object*& __cordl_internal_get__forState() ;

constexpr ::System::IO::MemoryStream* const& __cordl_internal_get__fragmentsBuffer() const;

constexpr ::System::IO::MemoryStream*& __cordl_internal_get__fragmentsBuffer() ;

constexpr bool const& __cordl_internal_get__fragmentsCompressed() const;

constexpr bool& __cordl_internal_get__fragmentsCompressed() ;

constexpr ::WebSocketSharp::Opcode const& __cordl_internal_get__fragmentsOpcode() const;

constexpr ::WebSocketSharp::Opcode& __cordl_internal_get__fragmentsOpcode() ;

constexpr ::System::Func_2<::WebSocketSharp::Net::WebSockets::WebSocketContext*,::StringW>* const& __cordl_internal_get__handshakeRequestChecker() const;

constexpr ::System::Func_2<::WebSocketSharp::Net::WebSockets::WebSocketContext*,::StringW>*& __cordl_internal_get__handshakeRequestChecker() ;

constexpr bool const& __cordl_internal_get__ignoreExtensions() const;

constexpr bool& __cordl_internal_get__ignoreExtensions() ;

constexpr bool const& __cordl_internal_get__inContinuation() const;

constexpr bool& __cordl_internal_get__inContinuation() ;

constexpr bool const& __cordl_internal_get__inMessage() const;

constexpr bool& __cordl_internal_get__inMessage() ;

constexpr ::WebSocketSharp::Logger* const& __cordl_internal_get__logger() const;

constexpr ::WebSocketSharp::Logger*& __cordl_internal_get__logger() ;

constexpr ::System::Action_1<::WebSocketSharp::MessageEventArgs*>* const& __cordl_internal_get__message() const;

constexpr ::System::Action_1<::WebSocketSharp::MessageEventArgs*>*& __cordl_internal_get__message() ;

constexpr ::System::Collections::Generic::Queue_1<::WebSocketSharp::MessageEventArgs*>* const& __cordl_internal_get__messageEventQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::WebSocketSharp::MessageEventArgs*>*& __cordl_internal_get__messageEventQueue() ;

constexpr uint32_t const& __cordl_internal_get__nonceCount() const;

constexpr uint32_t& __cordl_internal_get__nonceCount() ;

constexpr ::StringW const& __cordl_internal_get__origin() const;

constexpr ::StringW& __cordl_internal_get__origin() ;

constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get__pongReceived() const;

constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get__pongReceived() ;

constexpr bool const& __cordl_internal_get__preAuth() const;

constexpr bool& __cordl_internal_get__preAuth() ;

constexpr ::StringW const& __cordl_internal_get__protocol() const;

constexpr ::StringW& __cordl_internal_get__protocol() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__protocols() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__protocols() ;

constexpr bool const& __cordl_internal_get__protocolsRequested() const;

constexpr bool& __cordl_internal_get__protocolsRequested() ;

constexpr ::WebSocketSharp::Net::NetworkCredential* const& __cordl_internal_get__proxyCredentials() const;

constexpr ::WebSocketSharp::Net::NetworkCredential*& __cordl_internal_get__proxyCredentials() ;

constexpr ::System::Uri* const& __cordl_internal_get__proxyUri() const;

constexpr ::System::Uri*& __cordl_internal_get__proxyUri() ;

constexpr ::WebSocketSharp::WebSocketState const& __cordl_internal_get__readyState() const;

constexpr ::WebSocketSharp::WebSocketState& __cordl_internal_get__readyState() ;

constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get__receivingExited() const;

constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get__receivingExited() ;

constexpr int32_t const& __cordl_internal_get__retryCountForConnect() const;

constexpr int32_t& __cordl_internal_get__retryCountForConnect() ;

constexpr bool const& __cordl_internal_get__secure() const;

constexpr bool& __cordl_internal_get__secure() ;

constexpr ::WebSocketSharp::Net::ClientSslConfiguration* const& __cordl_internal_get__sslConfig() const;

constexpr ::WebSocketSharp::Net::ClientSslConfiguration*& __cordl_internal_get__sslConfig() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__stream() ;

constexpr ::System::Net::Sockets::TcpClient* const& __cordl_internal_get__tcpClient() const;

constexpr ::System::Net::Sockets::TcpClient*& __cordl_internal_get__tcpClient() ;

constexpr ::System::Uri* const& __cordl_internal_get__uri() const;

constexpr ::System::Uri*& __cordl_internal_get__uri() ;

constexpr ::System::TimeSpan const& __cordl_internal_get__waitTime() const;

constexpr ::System::TimeSpan& __cordl_internal_get__waitTime() ;

constexpr void __cordl_internal_set_OnClose(::System::EventHandler_1<::WebSocketSharp::CloseEventArgs*>*  value) ;

constexpr void __cordl_internal_set_OnError(::System::EventHandler_1<::WebSocketSharp::ErrorEventArgs*>*  value) ;

constexpr void __cordl_internal_set_OnMessage(::System::EventHandler_1<::WebSocketSharp::MessageEventArgs*>*  value) ;

constexpr void __cordl_internal_set_OnOpen(::System::EventHandler*  value) ;

constexpr void __cordl_internal_set__authChallenge(::WebSocketSharp::Net::AuthenticationChallenge*  value) ;

constexpr void __cordl_internal_set__base64Key(::StringW  value) ;

constexpr void __cordl_internal_set__client(bool  value) ;

constexpr void __cordl_internal_set__closeContext(::System::Action*  value) ;

constexpr void __cordl_internal_set__compression(::WebSocketSharp::CompressionMethod  value) ;

constexpr void __cordl_internal_set__context(::WebSocketSharp::Net::WebSockets::WebSocketContext*  value) ;

constexpr void __cordl_internal_set__cookies(::WebSocketSharp::Net::CookieCollection*  value) ;

constexpr void __cordl_internal_set__credentials(::WebSocketSharp::Net::NetworkCredential*  value) ;

constexpr void __cordl_internal_set__emitOnPing(bool  value) ;

constexpr void __cordl_internal_set__enableRedirection(bool  value) ;

constexpr void __cordl_internal_set__extensions(::StringW  value) ;

constexpr void __cordl_internal_set__extensionsRequested(bool  value) ;

constexpr void __cordl_internal_set__forMessageEventQueue(::System::Object*  value) ;

constexpr void __cordl_internal_set__forPing(::System::Object*  value) ;

constexpr void __cordl_internal_set__forSend(::System::Object*  value) ;

constexpr void __cordl_internal_set__forState(::System::Object*  value) ;

constexpr void __cordl_internal_set__fragmentsBuffer(::System::IO::MemoryStream*  value) ;

constexpr void __cordl_internal_set__fragmentsCompressed(bool  value) ;

constexpr void __cordl_internal_set__fragmentsOpcode(::WebSocketSharp::Opcode  value) ;

constexpr void __cordl_internal_set__handshakeRequestChecker(::System::Func_2<::WebSocketSharp::Net::WebSockets::WebSocketContext*,::StringW>*  value) ;

constexpr void __cordl_internal_set__ignoreExtensions(bool  value) ;

constexpr void __cordl_internal_set__inContinuation(bool  value) ;

constexpr void __cordl_internal_set__inMessage(bool  value) ;

constexpr void __cordl_internal_set__logger(::WebSocketSharp::Logger*  value) ;

constexpr void __cordl_internal_set__message(::System::Action_1<::WebSocketSharp::MessageEventArgs*>*  value) ;

constexpr void __cordl_internal_set__messageEventQueue(::System::Collections::Generic::Queue_1<::WebSocketSharp::MessageEventArgs*>*  value) ;

constexpr void __cordl_internal_set__nonceCount(uint32_t  value) ;

constexpr void __cordl_internal_set__origin(::StringW  value) ;

constexpr void __cordl_internal_set__pongReceived(::System::Threading::ManualResetEvent*  value) ;

constexpr void __cordl_internal_set__preAuth(bool  value) ;

constexpr void __cordl_internal_set__protocol(::StringW  value) ;

constexpr void __cordl_internal_set__protocols(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__protocolsRequested(bool  value) ;

constexpr void __cordl_internal_set__proxyCredentials(::WebSocketSharp::Net::NetworkCredential*  value) ;

constexpr void __cordl_internal_set__proxyUri(::System::Uri*  value) ;

constexpr void __cordl_internal_set__readyState(::WebSocketSharp::WebSocketState  value) ;

constexpr void __cordl_internal_set__receivingExited(::System::Threading::ManualResetEvent*  value) ;

constexpr void __cordl_internal_set__retryCountForConnect(int32_t  value) ;

constexpr void __cordl_internal_set__secure(bool  value) ;

constexpr void __cordl_internal_set__sslConfig(::WebSocketSharp::Net::ClientSslConfiguration*  value) ;

constexpr void __cordl_internal_set__stream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__tcpClient(::System::Net::Sockets::TcpClient*  value) ;

constexpr void __cordl_internal_set__uri(::System::Uri*  value) ;

constexpr void __cordl_internal_set__waitTime(::System::TimeSpan  value) ;

/// @brief Method .ctor, addr 0xb977ef4, size 0x328, virtual false, abstract: false, final false
inline void _ctor(::StringW  url, /* [ParamArray] */ ::ArrayW<::StringW>  protocols) ;

/// [CompilerGenerated]
/// @brief Method <open>b__146_0, addr 0xb97f074, size 0x18, virtual false, abstract: false, final false
inline void _open_b__146_0(::System::IAsyncResult*  ar) ;

/// [CompilerGenerated]
/// @brief Method add_OnClose, addr 0xb978764, size 0xb0, virtual false, abstract: false, final false
inline void add_OnClose(::System::EventHandler_1<::WebSocketSharp::CloseEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnError, addr 0xb9788c4, size 0xb0, virtual false, abstract: false, final false
inline void add_OnError(::System::EventHandler_1<::WebSocketSharp::ErrorEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMessage, addr 0xb978a24, size 0xb0, virtual false, abstract: false, final false
inline void add_OnMessage(::System::EventHandler_1<::WebSocketSharp::MessageEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnOpen, addr 0xb978b84, size 0x9c, virtual false, abstract: false, final false
inline void add_OnOpen(::System::EventHandler*  value) ;

/// @brief Method checkHandshakeResponse, addr 0xb978cbc, size 0x20c, virtual false, abstract: false, final false
inline bool checkHandshakeResponse(::WebSocketSharp::HttpResponse*  response, ::by_ref<::StringW>  message) ;

/// @brief Method checkProtocols, addr 0xb97821c, size 0x1a4, virtual false, abstract: false, final false
static inline bool checkProtocols(::ArrayW<::StringW>  protocols, ::by_ref<::StringW>  message) ;

/// @brief Method checkReceivedFrame, addr 0xb979880, size 0x160, virtual false, abstract: false, final false
inline bool checkReceivedFrame(::WebSocketSharp::WebSocketFrame*  frame, ::by_ref<::StringW>  message) ;

/// @brief Method close, addr 0xb979a24, size 0x188, virtual false, abstract: false, final false
inline void close(uint16_t  code, ::StringW  reason) ;

/// @brief Method close, addr 0xb979bf0, size 0x390, virtual false, abstract: false, final false
inline void close(::WebSocketSharp::PayloadData*  payloadData, bool  send, bool  receive, bool  received) ;

/// @brief Method closeHandshake, addr 0xb97a064, size 0x168, virtual false, abstract: false, final false
inline bool closeHandshake(::WebSocketSharp::PayloadData*  payloadData, bool  send, bool  receive, bool  received) ;

/// @brief Method connect, addr 0xb97a7c4, size 0x3c8, virtual false, abstract: false, final false
inline bool connect() ;

/// @brief Method createExtensions, addr 0xb97af3c, size 0x1a0, virtual false, abstract: false, final false
inline ::StringW createExtensions() ;

/// @brief Method createHandshakeRequest, addr 0xb97b0dc, size 0x2dc, virtual false, abstract: false, final false
inline ::WebSocketSharp::HttpRequest* createHandshakeRequest() ;

/// @brief Method doHandshake, addr 0xb97ad5c, size 0x144, virtual false, abstract: false, final false
inline void doHandshake() ;

/// @brief Method enqueueToMessageEventQueue, addr 0xb97c1fc, size 0xdc, virtual false, abstract: false, final false
inline void enqueueToMessageEventQueue(::WebSocketSharp::MessageEventArgs*  e) ;

/// @brief Method error, addr 0xb97abd0, size 0x18c, virtual false, abstract: false, final false
inline void error(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method fatal, addr 0xb97c3a4, size 0x4, virtual false, abstract: false, final false
inline void fatal(::StringW  message, ::WebSocketSharp::CloseStatusCode  code) ;

/// @brief Method fatal, addr 0xb97c2e0, size 0xc4, virtual false, abstract: false, final false
inline void fatal(::StringW  message, uint16_t  code) ;

/// @brief Method fatal, addr 0xb97aea8, size 0x94, virtual false, abstract: false, final false
inline void fatal(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method getSslConfiguration, addr 0xb97c3a8, size 0x90, virtual false, abstract: false, final false
inline ::WebSocketSharp::Net::ClientSslConfiguration* getSslConfiguration() ;

static inline ::ArrayW<uint8_t> getStaticF_EmptyBytes() ;

static inline int32_t getStaticF_FragmentLength() ;

static inline ::System::Security::Cryptography::RandomNumberGenerator* getStaticF_RandomNumber() ;

static inline int32_t getStaticF__maxRetryCountForConnect() ;

/// @brief Method get_HasMessage, addr 0xb97866c, size 0xe0, virtual false, abstract: false, final false
inline bool get_HasMessage() ;

/// @brief Method get_ReadyState, addr 0xb97874c, size 0x18, virtual false, abstract: false, final false
inline ::WebSocketSharp::WebSocketState get_ReadyState() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method init, addr 0xb978494, size 0x1d8, virtual false, abstract: false, final false
inline void init() ;

/// @brief Method message, addr 0xb97c438, size 0x164, virtual false, abstract: false, final false
inline void message() ;

/// @brief Method messagec, addr 0xb97c59c, size 0x2a4, virtual false, abstract: false, final false
inline void messagec(::WebSocketSharp::MessageEventArgs*  e) ;

/// @brief Method open, addr 0xb97c840, size 0x2e8, virtual false, abstract: false, final false
inline void open() ;

/// @brief Method processCloseFrame, addr 0xb97ccc0, size 0x50, virtual false, abstract: false, final false
inline bool processCloseFrame(::WebSocketSharp::WebSocketFrame*  frame) ;

/// @brief Method processCookies, addr 0xb97c1b4, size 0x48, virtual false, abstract: false, final false
inline void processCookies(::WebSocketSharp::Net::CookieCollection*  cookies) ;

/// @brief Method processDataFrame, addr 0xb97cee0, size 0x100, virtual false, abstract: false, final false
inline bool processDataFrame(::WebSocketSharp::WebSocketFrame*  frame) ;

/// @brief Method processFragmentFrame, addr 0xb97cfe0, size 0x2a8, virtual false, abstract: false, final false
inline bool processFragmentFrame(::WebSocketSharp::WebSocketFrame*  frame) ;

/// @brief Method processPingFrame, addr 0xb97d2a8, size 0x20c, virtual false, abstract: false, final false
inline bool processPingFrame(::WebSocketSharp::WebSocketFrame*  frame) ;

/// @brief Method processPongFrame, addr 0xb97d528, size 0x18c, virtual false, abstract: false, final false
inline bool processPongFrame(::WebSocketSharp::WebSocketFrame*  frame) ;

/// @brief Method processReceivedFrame, addr 0xb97d6b4, size 0xfc, virtual false, abstract: false, final false
inline bool processReceivedFrame(::WebSocketSharp::WebSocketFrame*  frame) ;

/// @brief Method processSecWebSocketExtensionsServerHeader, addr 0xb97c144, size 0x14, virtual false, abstract: false, final false
inline void processSecWebSocketExtensionsServerHeader(::StringW  value) ;

/// @brief Method processUnsupportedFrame, addr 0xb97d800, size 0xb4, virtual false, abstract: false, final false
inline bool processUnsupportedFrame(::WebSocketSharp::WebSocketFrame*  frame) ;

/// @brief Method releaseClientResources, addr 0xb97d8c0, size 0x54, virtual false, abstract: false, final false
inline void releaseClientResources() ;

/// @brief Method releaseCommonResources, addr 0xb97d914, size 0x9c, virtual false, abstract: false, final false
inline void releaseCommonResources() ;

/// @brief Method releaseResources, addr 0xb97a1cc, size 0x30, virtual false, abstract: false, final false
inline void releaseResources() ;

/// @brief Method releaseServerResources, addr 0xb97d9b0, size 0x6c, virtual false, abstract: false, final false
inline void releaseServerResources() ;

/// [CompilerGenerated]
/// @brief Method remove_OnClose, addr 0xb978814, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnClose(::System::EventHandler_1<::WebSocketSharp::CloseEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnError, addr 0xb978974, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnError(::System::EventHandler_1<::WebSocketSharp::ErrorEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMessage, addr 0xb978ad4, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnMessage(::System::EventHandler_1<::WebSocketSharp::MessageEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnOpen, addr 0xb978c20, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnOpen(::System::EventHandler*  value) ;

/// @brief Method send, addr 0xb97e0ac, size 0x18c, virtual false, abstract: false, final false
inline bool send(::WebSocketSharp::Fin  fin, ::WebSocketSharp::Opcode  opcode, ::ArrayW<uint8_t>  data, bool  compressed) ;

/// @brief Method send, addr 0xb97da1c, size 0x334, virtual false, abstract: false, final false
inline bool send(::WebSocketSharp::Opcode  opcode, ::System::IO::Stream*  stream) ;

/// @brief Method send, addr 0xb97dd50, size 0x35c, virtual false, abstract: false, final false
inline bool send(::WebSocketSharp::Opcode  opcode, ::System::IO::Stream*  stream, bool  compressed) ;

/// @brief Method sendAsync, addr 0xb97e2d0, size 0x15c, virtual false, abstract: false, final false
inline void sendAsync(::WebSocketSharp::Opcode  opcode, ::System::IO::Stream*  stream, ::System::Action_1<bool>*  completed) ;

/// @brief Method sendBytes, addr 0xb97a628, size 0x114, virtual false, abstract: false, final false
inline bool sendBytes(::ArrayW<uint8_t>  bytes) ;

/// @brief Method sendHandshakeRequest, addr 0xb97bd24, size 0x418, virtual false, abstract: false, final false
inline ::WebSocketSharp::HttpResponse* sendHandshakeRequest() ;

/// @brief Method sendHttpRequest, addr 0xb97e434, size 0x100, virtual false, abstract: false, final false
inline ::WebSocketSharp::HttpResponse* sendHttpRequest(::WebSocketSharp::HttpRequest*  request, int32_t  millisecondsTimeout) ;

/// @brief Method sendProxyConnectRequest, addr 0xb97e698, size 0x330, virtual false, abstract: false, final false
inline void sendProxyConnectRequest() ;

/// @brief Method setClientStream, addr 0xb97b970, size 0x3b4, virtual false, abstract: false, final false
inline void setClientStream() ;

static inline void setStaticF_EmptyBytes(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_FragmentLength(int32_t  value) ;

static inline void setStaticF_RandomNumber(::System::Security::Cryptography::RandomNumberGenerator*  value) ;

static inline void setStaticF__maxRetryCountForConnect(int32_t  value) ;

/// @brief Method startReceiving, addr 0xb97cb28, size 0x198, virtual false, abstract: false, final false
inline void startReceiving() ;

/// @brief Method validateSecWebSocketAcceptHeader, addr 0xb97908c, size 0x80, virtual false, abstract: false, final false
inline bool validateSecWebSocketAcceptHeader(::StringW  value) ;

/// @brief Method validateSecWebSocketExtensionsServerHeader, addr 0xb979250, size 0x5d0, virtual false, abstract: false, final false
inline bool validateSecWebSocketExtensionsServerHeader(::StringW  value) ;

/// @brief Method validateSecWebSocketProtocolServerHeader, addr 0xb97910c, size 0x144, virtual false, abstract: false, final false
inline bool validateSecWebSocketProtocolServerHeader(::StringW  value) ;

/// @brief Method validateSecWebSocketVersionServerHeader, addr 0xb979820, size 0x60, virtual false, abstract: false, final false
inline bool validateSecWebSocketVersionServerHeader(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocket", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocket(WebSocket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocket", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocket(WebSocket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30329};

/// @brief Field _guid offset 0xffffffff size 0x8
static constexpr ::ConstString  _guid{u"258EAFA5-E914-47DA-95CA-C5AB0DC85B11"};

/// @brief Field _version offset 0xffffffff size 0x8
static constexpr ::ConstString  _version{u"13"};

/// @brief Field _authChallenge, offset: 0x10, size: 0x8, def value: None
 ::WebSocketSharp::Net::AuthenticationChallenge*  ____authChallenge;

/// @brief Field _base64Key, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____base64Key;

/// @brief Field _client, offset: 0x20, size: 0x1, def value: None
 bool  ____client;

/// @brief Field _closeContext, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ____closeContext;

/// @brief Field _compression, offset: 0x30, size: 0x1, def value: None
 ::WebSocketSharp::CompressionMethod  ____compression;

/// @brief Field _context, offset: 0x38, size: 0x8, def value: None
 ::WebSocketSharp::Net::WebSockets::WebSocketContext*  ____context;

/// @brief Field _cookies, offset: 0x40, size: 0x8, def value: None
 ::WebSocketSharp::Net::CookieCollection*  ____cookies;

/// @brief Field _credentials, offset: 0x48, size: 0x8, def value: None
 ::WebSocketSharp::Net::NetworkCredential*  ____credentials;

/// @brief Field _emitOnPing, offset: 0x50, size: 0x1, def value: None
 bool  ____emitOnPing;

/// @brief Field _enableRedirection, offset: 0x51, size: 0x1, def value: None
 bool  ____enableRedirection;

/// @brief Field _extensions, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____extensions;

/// @brief Field _extensionsRequested, offset: 0x60, size: 0x1, def value: None
 bool  ____extensionsRequested;

/// @brief Field _forMessageEventQueue, offset: 0x68, size: 0x8, def value: None
 ::System::Object*  ____forMessageEventQueue;

/// @brief Field _forPing, offset: 0x70, size: 0x8, def value: None
 ::System::Object*  ____forPing;

/// @brief Field _forSend, offset: 0x78, size: 0x8, def value: None
 ::System::Object*  ____forSend;

/// @brief Field _forState, offset: 0x80, size: 0x8, def value: None
 ::System::Object*  ____forState;

/// @brief Field _fragmentsBuffer, offset: 0x88, size: 0x8, def value: None
 ::System::IO::MemoryStream*  ____fragmentsBuffer;

/// @brief Field _fragmentsCompressed, offset: 0x90, size: 0x1, def value: None
 bool  ____fragmentsCompressed;

/// @brief Field _fragmentsOpcode, offset: 0x91, size: 0x1, def value: None
 ::WebSocketSharp::Opcode  ____fragmentsOpcode;

/// @brief Field _handshakeRequestChecker, offset: 0x98, size: 0x8, def value: None
 ::System::Func_2<::WebSocketSharp::Net::WebSockets::WebSocketContext*,::StringW>*  ____handshakeRequestChecker;

/// @brief Field _ignoreExtensions, offset: 0xa0, size: 0x1, def value: None
 bool  ____ignoreExtensions;

/// @brief Field _inContinuation, offset: 0xa1, size: 0x1, def value: None
 bool  ____inContinuation;

/// @brief Field _inMessage, offset: 0xa2, size: 0x1, def value: None
 bool  ____inMessage;

/// @brief Field _logger, offset: 0xa8, size: 0x8, def value: None
 ::WebSocketSharp::Logger*  ____logger;

/// @brief Field _message, offset: 0xb0, size: 0x8, def value: None
 ::System::Action_1<::WebSocketSharp::MessageEventArgs*>*  ____message;

/// @brief Field _messageEventQueue, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::WebSocketSharp::MessageEventArgs*>*  ____messageEventQueue;

/// @brief Field _nonceCount, offset: 0xc0, size: 0x4, def value: None
 uint32_t  ____nonceCount;

/// @brief Field _origin, offset: 0xc8, size: 0x8, def value: None
 ::StringW  ____origin;

/// @brief Field _pongReceived, offset: 0xd0, size: 0x8, def value: None
 ::System::Threading::ManualResetEvent*  ____pongReceived;

/// @brief Field _preAuth, offset: 0xd8, size: 0x1, def value: None
 bool  ____preAuth;

/// @brief Field _protocol, offset: 0xe0, size: 0x8, def value: None
 ::StringW  ____protocol;

/// @brief Field _protocols, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____protocols;

/// @brief Field _protocolsRequested, offset: 0xf0, size: 0x1, def value: None
 bool  ____protocolsRequested;

/// @brief Field _proxyCredentials, offset: 0xf8, size: 0x8, def value: None
 ::WebSocketSharp::Net::NetworkCredential*  ____proxyCredentials;

/// @brief Field _proxyUri, offset: 0x100, size: 0x8, def value: None
 ::System::Uri*  ____proxyUri;

/// @brief Field _readyState, offset: 0x108, size: 0x2, def value: None
 ::WebSocketSharp::WebSocketState  ____readyState;

/// @brief Field _receivingExited, offset: 0x110, size: 0x8, def value: None
 ::System::Threading::ManualResetEvent*  ____receivingExited;

/// @brief Field _retryCountForConnect, offset: 0x118, size: 0x4, def value: None
 int32_t  ____retryCountForConnect;

/// @brief Field _secure, offset: 0x11c, size: 0x1, def value: None
 bool  ____secure;

/// @brief Field _sslConfig, offset: 0x120, size: 0x8, def value: None
 ::WebSocketSharp::Net::ClientSslConfiguration*  ____sslConfig;

/// @brief Field _stream, offset: 0x128, size: 0x8, def value: None
 ::System::IO::Stream*  ____stream;

/// @brief Field _tcpClient, offset: 0x130, size: 0x8, def value: None
 ::System::Net::Sockets::TcpClient*  ____tcpClient;

/// @brief Field _uri, offset: 0x138, size: 0x8, def value: None
 ::System::Uri*  ____uri;

/// @brief Field _waitTime, offset: 0x140, size: 0x8, def value: None
 ::System::TimeSpan  ____waitTime;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field OnClose, offset: 0x148, size: 0x8, def value: None
 ::System::EventHandler_1<::WebSocketSharp::CloseEventArgs*>*  ___OnClose;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field OnError, offset: 0x150, size: 0x8, def value: None
 ::System::EventHandler_1<::WebSocketSharp::ErrorEventArgs*>*  ___OnError;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field OnMessage, offset: 0x158, size: 0x8, def value: None
 ::System::EventHandler_1<::WebSocketSharp::MessageEventArgs*>*  ___OnMessage;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field OnOpen, offset: 0x160, size: 0x8, def value: None
 ::System::EventHandler*  ___OnOpen;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::WebSocket, ____authChallenge) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____base64Key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____client) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____closeContext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____compression) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____context) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____cookies) == 0x40, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____credentials) == 0x48, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____emitOnPing) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____enableRedirection) == 0x51, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____extensions) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____extensionsRequested) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____forMessageEventQueue) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____forPing) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____forSend) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____forState) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____fragmentsBuffer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____fragmentsCompressed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____fragmentsOpcode) == 0x91, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____handshakeRequestChecker) == 0x98, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____ignoreExtensions) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____inContinuation) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____inMessage) == 0xa2, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____logger) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____message) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____messageEventQueue) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____nonceCount) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____origin) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____pongReceived) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____preAuth) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____protocol) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____protocols) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____protocolsRequested) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____proxyCredentials) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____proxyUri) == 0x100, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____readyState) == 0x108, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____receivingExited) == 0x110, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____retryCountForConnect) == 0x118, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____secure) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____sslConfig) == 0x120, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____stream) == 0x128, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____tcpClient) == 0x130, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____uri) == 0x138, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ____waitTime) == 0x140, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ___OnClose) == 0x148, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ___OnError) == 0x150, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ___OnMessage) == 0x158, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket, ___OnOpen) == 0x160, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::WebSocket) == 0x168, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.WebSocket/<>c__DisplayClass201_0
class CORDL_TYPE WebSocket___c__DisplayClass201_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::WebSocketSharp::WebSocket*  __4__this;

/// @brief Field connector, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_connector, put=__cordl_internal_set_connector)) ::System::Func_1<bool>*  connector;

static inline ::WebSocketSharp::WebSocket___c__DisplayClass201_0* New_ctor() ;

/// @brief Method <ConnectAsync>b__0, addr 0xb97f6f8, size 0x38, virtual false, abstract: false, final false
inline void _ConnectAsync_b__0(::System::IAsyncResult*  ar) ;

constexpr ::WebSocketSharp::WebSocket* const& __cordl_internal_get___4__this() const;

constexpr ::WebSocketSharp::WebSocket*& __cordl_internal_get___4__this() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get_connector() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get_connector() ;

constexpr void __cordl_internal_set___4__this(::WebSocketSharp::WebSocket*  value) ;

constexpr void __cordl_internal_set_connector(::System::Func_1<bool>*  value) ;

/// @brief Method .ctor, addr 0xb97eeac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocket___c__DisplayClass201_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocket___c__DisplayClass201_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocket___c__DisplayClass201_0(WebSocket___c__DisplayClass201_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocket___c__DisplayClass201_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocket___c__DisplayClass201_0(WebSocket___c__DisplayClass201_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30328};

/// @brief Field connector, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<bool>*  ___connector;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::WebSocketSharp::WebSocket*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::WebSocket___c__DisplayClass201_0, ___connector) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket___c__DisplayClass201_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::WebSocket___c__DisplayClass201_0) == 0x20, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.WebSocket/<>c__DisplayClass177_0
class CORDL_TYPE WebSocket___c__DisplayClass177_0 : public ::System::Object {
public:
// Declarations
/// @brief Field value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) ::StringW  value;

static inline ::WebSocketSharp::WebSocket___c__DisplayClass177_0* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_value() const;

constexpr ::StringW& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_value(::StringW  value) ;

/// @brief Method .ctor, addr 0xb97ecac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <validateSecWebSocketProtocolServerHeader>b__0, addr 0xb97f6e4, size 0x14, virtual false, abstract: false, final false
inline bool _validateSecWebSocketProtocolServerHeader_b__0(::StringW  p) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocket___c__DisplayClass177_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocket___c__DisplayClass177_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocket___c__DisplayClass177_0(WebSocket___c__DisplayClass177_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocket___c__DisplayClass177_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocket___c__DisplayClass177_0(WebSocket___c__DisplayClass177_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30327};

/// @brief Field value, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::WebSocket___c__DisplayClass177_0, ___value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::WebSocket___c__DisplayClass177_0) == 0x18, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.WebSocket/<>c__DisplayClass176_0
class CORDL_TYPE WebSocket___c__DisplayClass176_0 : public ::System::Object {
public:
// Declarations
/// @brief Field method, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_method, put=__cordl_internal_set_method)) ::StringW  method;

static inline ::WebSocketSharp::WebSocket___c__DisplayClass176_0* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_method() const;

constexpr ::StringW& __cordl_internal_get_method() ;

constexpr void __cordl_internal_set_method(::StringW  value) ;

/// @brief Method .ctor, addr 0xb97eca4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <validateSecWebSocketExtensionsServerHeader>b__0, addr 0xb97f634, size 0xb0, virtual false, abstract: false, final false
inline bool _validateSecWebSocketExtensionsServerHeader_b__0(::StringW  t) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocket___c__DisplayClass176_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocket___c__DisplayClass176_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocket___c__DisplayClass176_0(WebSocket___c__DisplayClass176_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocket___c__DisplayClass176_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocket___c__DisplayClass176_0(WebSocket___c__DisplayClass176_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30326};

/// @brief Field method, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___method;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::WebSocket___c__DisplayClass176_0, ___method) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::WebSocket___c__DisplayClass176_0) == 0x18, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.WebSocket/<>c__DisplayClass174_0
class CORDL_TYPE WebSocket___c__DisplayClass174_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::WebSocketSharp::WebSocket*  __4__this;

/// @brief Field <>9__1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  __9__1;

/// @brief Field <>9__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__2, put=__cordl_internal_set___9__2)) ::System::Action_1<::System::Exception*>*  __9__2;

/// @brief Field receive, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_receive, put=__cordl_internal_set_receive)) ::System::Action*  receive;

static inline ::WebSocketSharp::WebSocket___c__DisplayClass174_0* New_ctor() ;

constexpr ::WebSocketSharp::WebSocket* const& __cordl_internal_get___4__this() const;

constexpr ::WebSocketSharp::WebSocket*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* const& __cordl_internal_get___9__1() const;

constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& __cordl_internal_get___9__1() ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get___9__2() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get___9__2() ;

constexpr ::System::Action* const& __cordl_internal_get_receive() const;

constexpr ::System::Action*& __cordl_internal_get_receive() ;

constexpr void __cordl_internal_set___4__this(::WebSocketSharp::WebSocket*  value) ;

constexpr void __cordl_internal_set___9__1(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  value) ;

constexpr void __cordl_internal_set___9__2(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_receive(::System::Action*  value) ;

/// @brief Method .ctor, addr 0xb97eb60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <startReceiving>b__0, addr 0xb97f2b0, size 0x114, virtual false, abstract: false, final false
inline void _startReceiving_b__0() ;

/// @brief Method <startReceiving>b__1, addr 0xb97f4d8, size 0xcc, virtual false, abstract: false, final false
inline void _startReceiving_b__1(::WebSocketSharp::WebSocketFrame*  frame) ;

/// @brief Method <startReceiving>b__2, addr 0xb97f5a4, size 0x90, virtual false, abstract: false, final false
inline void _startReceiving_b__2(::System::Exception*  ex) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocket___c__DisplayClass174_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocket___c__DisplayClass174_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocket___c__DisplayClass174_0(WebSocket___c__DisplayClass174_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocket___c__DisplayClass174_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocket___c__DisplayClass174_0(WebSocket___c__DisplayClass174_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30325};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::WebSocketSharp::WebSocket*  _____4__this;

/// @brief Field receive, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___receive;

/// @brief Field <>9__1, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  _____9__1;

/// @brief Field <>9__2, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  _____9__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::WebSocket___c__DisplayClass174_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket___c__DisplayClass174_0, ___receive) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket___c__DisplayClass174_0, _____9__1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket___c__DisplayClass174_0, _____9__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::WebSocket___c__DisplayClass174_0) == 0x30, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.WebSocket/<>c__DisplayClass167_0
class CORDL_TYPE WebSocket___c__DisplayClass167_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::WebSocketSharp::WebSocket*  __4__this;

/// @brief Field completed, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) ::System::Action_1<bool>*  completed;

/// @brief Field sender, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sender, put=__cordl_internal_set_sender)) ::System::Func_3<::WebSocketSharp::Opcode,::System::IO::Stream*,bool>*  sender;

static inline ::WebSocketSharp::WebSocket___c__DisplayClass167_0* New_ctor() ;

constexpr ::WebSocketSharp::WebSocket* const& __cordl_internal_get___4__this() const;

constexpr ::WebSocketSharp::WebSocket*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_completed() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_completed() ;

constexpr ::System::Func_3<::WebSocketSharp::Opcode,::System::IO::Stream*,bool>* const& __cordl_internal_get_sender() const;

constexpr ::System::Func_3<::WebSocketSharp::Opcode,::System::IO::Stream*,bool>*& __cordl_internal_get_sender() ;

constexpr void __cordl_internal_set___4__this(::WebSocketSharp::WebSocket*  value) ;

constexpr void __cordl_internal_set_completed(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_sender(::System::Func_3<::WebSocketSharp::Opcode,::System::IO::Stream*,bool>*  value) ;

/// @brief Method .ctor, addr 0xb97e42c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <sendAsync>b__0, addr 0xb97f188, size 0x128, virtual false, abstract: false, final false
inline void _sendAsync_b__0(::System::IAsyncResult*  ar) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocket___c__DisplayClass167_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocket___c__DisplayClass167_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocket___c__DisplayClass167_0(WebSocket___c__DisplayClass167_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocket___c__DisplayClass167_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocket___c__DisplayClass167_0(WebSocket___c__DisplayClass167_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30324};

/// @brief Field sender, offset: 0x10, size: 0x8, def value: None
 ::System::Func_3<::WebSocketSharp::Opcode,::System::IO::Stream*,bool>*  ___sender;

/// @brief Field completed, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___completed;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::WebSocketSharp::WebSocket*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::WebSocket___c__DisplayClass167_0, ___sender) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket___c__DisplayClass167_0, ___completed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocket___c__DisplayClass167_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::WebSocket___c__DisplayClass167_0) == 0x28, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.WebSocket/<>c
class CORDL_TYPE WebSocket___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::WebSocketSharp::WebSocket___c*  __9;

/// @brief Field <>9__120_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__120_0, put=setStaticF___9__120_0)) ::System::Func_2<::StringW,bool>*  __9__120_0;

static inline ::WebSocketSharp::WebSocket___c* New_ctor() ;

/// @brief Method <checkProtocols>b__120_0, addr 0xb97f0fc, size 0x8c, virtual false, abstract: false, final false
inline bool _checkProtocols_b__120_0(::StringW  protocol) ;

/// @brief Method .ctor, addr 0xb97f0f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::WebSocketSharp::WebSocket___c* getStaticF___9() ;

static inline ::System::Func_2<::StringW,bool>* getStaticF___9__120_0() ;

static inline void setStaticF___9(::WebSocketSharp::WebSocket___c*  value) ;

static inline void setStaticF___9__120_0(::System::Func_2<::StringW,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocket___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocket___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocket___c(WebSocket___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocket___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocket___c(WebSocket___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30323};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WebSocketSharp::WebSocket___c) == 0x10, "Size mismatch!");

} // namespace end def WebSocketSharp
