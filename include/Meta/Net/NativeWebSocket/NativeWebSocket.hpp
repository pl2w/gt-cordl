#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Meta/Net/NativeWebSocket/MainThreadUtil.hpp"
#include "Meta/Net/NativeWebSocket/WaitForBackgroundThread.hpp"
#include "Meta/Net/NativeWebSocket/WaitForUpdate.hpp"
#include "Meta/Net/NativeWebSocket/WebSocket.hpp"
#include "Meta/Net/NativeWebSocket/WebSocketCloseCode.hpp"
#include "Meta/Net/NativeWebSocket/WebSocketCloseEventHandler.hpp"
#include "Meta/Net/NativeWebSocket/WebSocketErrorEventHandler.hpp"
#include "Meta/Net/NativeWebSocket/WebSocketHelpers.hpp"
#include "Meta/Net/NativeWebSocket/WebSocketMessageEventHandler.hpp"
#include "Meta/Net/NativeWebSocket/WebSocketOpenEventHandler.hpp"
#include "Meta/Net/NativeWebSocket/WebSocketState.hpp"
#include "Meta/Net/NativeWebSocket/WebSocket__Close_d__36.hpp"
#include "Meta/Net/NativeWebSocket/WebSocket__Connect_d__30.hpp"
#include "Meta/Net/NativeWebSocket/WebSocket__HandleQueue_d__34.hpp"
#include "Meta/Net/NativeWebSocket/WebSocket__Receive_d__35.hpp"
#include "Meta/Net/NativeWebSocket/WebSocket__SendMessage_d__33.hpp"
#ifdef __cpp_modules
                    export module NativeWebSocket;
                    #endif
                
