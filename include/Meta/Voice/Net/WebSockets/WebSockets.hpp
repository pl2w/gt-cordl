#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Meta/Voice/Net/WebSockets/IWebSocket.hpp"
#include "Meta/Voice/Net/WebSockets/IWebSocketProvider.hpp"
#include "Meta/Voice/Net/WebSockets/IWitWebSocketClient.hpp"
#include "Meta/Voice/Net/WebSockets/IWitWebSocketClientProvider.hpp"
#include "Meta/Voice/Net/WebSockets/IWitWebSocketRequest.hpp"
#include "Meta/Voice/Net/WebSockets/NativeWebSocketWrapper.hpp"
#include "Meta/Voice/Net/WebSockets/NativeWebSocketWrapper__Close_d__19.hpp"
#include "Meta/Voice/Net/WebSockets/NativeWebSocketWrapper__Connect_d__5.hpp"
#include "Meta/Voice/Net/WebSockets/NativeWebSocketWrapper__Send_d__10.hpp"
#include "Meta/Voice/Net/WebSockets/UploadChunkDelegate.hpp"
#include "Meta/Voice/Net/WebSockets/WebSocketCloseCode.hpp"
#include "Meta/Voice/Net/WebSockets/WitWebSocketAdapter.hpp"
#include "Meta/Voice/Net/WebSockets/WitWebSocketClient.hpp"
#include "Meta/Voice/Net/WebSockets/WitWebSocketClient__BreakdownAsync_d__72.hpp"
#include "Meta/Voice/Net/WebSockets/WitWebSocketClient__ConnectAsync_d__61.hpp"
#include "Meta/Voice/Net/WebSockets/WitWebSocketClient__DisconnectAsync_d__71.hpp"
#include "Meta/Voice/Net/WebSockets/WitWebSocketClient__SendChunkAsync_d__78.hpp"
#include "Meta/Voice/Net/WebSockets/WitWebSocketClient__SendRequestAsync_d__76.hpp"
#include "Meta/Voice/Net/WebSockets/WitWebSocketClient__SetupAsync_d__66.hpp"
#include "Meta/Voice/Net/WebSockets/WitWebSocketClient__WaitAndConnect_d__74.hpp"
#include "Meta/Voice/Net/WebSockets/WitWebSocketClient__WaitAndRetry_d__102.hpp"
#include "Meta/Voice/Net/WebSockets/WitWebSocketClient__WaitForConnectionTimeout_d__62.hpp"
#include "Meta/Voice/Net/WebSockets/WitWebSocketConnectionState.hpp"
#include "Meta/Voice/Net/WebSockets/WitWebSocketResponseProcessor.hpp"
#include "Meta/Voice/Net/WebSockets/WitWebSocketSettings.hpp"
#ifdef __cpp_modules
                    export module WebSockets;
                    #endif
                
