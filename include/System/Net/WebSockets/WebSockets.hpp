#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "System/Net/WebSockets/ClientWebSocket.hpp"
#include "System/Net/WebSockets/ClientWebSocketOptions.hpp"
#include "System/Net/WebSockets/ClientWebSocket_InternalState.hpp"
#include "System/Net/WebSockets/ClientWebSocket__ConnectAsyncCore_d__16.hpp"
#include "System/Net/WebSockets/HttpListenerWebSocketContext.hpp"
#include "System/Net/WebSockets/ManagedWebSocket.hpp"
#include "System/Net/WebSockets/ManagedWebSocket_MessageHeader.hpp"
#include "System/Net/WebSockets/ManagedWebSocket_MessageOpcode.hpp"
#include "System/Net/WebSockets/ManagedWebSocket_WebSocketReceiveResultGetter.hpp"
#include "System/Net/WebSockets/ManagedWebSocket__CloseAsyncPrivate_d__68.hpp"
#include "System/Net/WebSockets/ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66.hpp"
#include "System/Net/WebSockets/ManagedWebSocket__EnsureBufferContainsAsync_d__71.hpp"
#include "System/Net/WebSockets/ManagedWebSocket__HandleReceivedCloseAsync_d__62.hpp"
#include "System/Net/WebSockets/ManagedWebSocket__HandleReceivedPingPongAsync_d__64.hpp"
#include "System/Net/WebSockets/ManagedWebSocket__ReceiveAsyncPrivate_d__61_2.hpp"
#include "System/Net/WebSockets/ManagedWebSocket__SendCloseFrameAsync_d__69.hpp"
#include "System/Net/WebSockets/ManagedWebSocket__SendFrameFallbackAsync_d__56.hpp"
#include "System/Net/WebSockets/ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63.hpp"
#include "System/Net/WebSockets/ManagedWebSocket__WaitForWriteTaskAsync_d__55.hpp"
#include "System/Net/WebSockets/WebSocket.hpp"
#include "System/Net/WebSockets/WebSocketCloseStatus.hpp"
#include "System/Net/WebSockets/WebSocketContext.hpp"
#include "System/Net/WebSockets/WebSocketError.hpp"
#include "System/Net/WebSockets/WebSocketException.hpp"
#include "System/Net/WebSockets/WebSocketHandle.hpp"
#include "System/Net/WebSockets/WebSocketHandle__ConnectAsyncCore_d__26.hpp"
#include "System/Net/WebSockets/WebSocketHandle__ConnectSocketAsync_d__27.hpp"
#include "System/Net/WebSockets/WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30.hpp"
#include "System/Net/WebSockets/WebSocketHandle__ReadResponseHeaderLineAsync_d__32.hpp"
#include "System/Net/WebSockets/WebSocketMessageType.hpp"
#include "System/Net/WebSockets/WebSocketReceiveResult.hpp"
#include "System/Net/WebSockets/WebSocketState.hpp"
#include "System/Net/WebSockets/WebSocketValidate.hpp"
#ifdef __cpp_modules
                    export module WebSockets;
                    #endif
                
