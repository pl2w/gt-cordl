#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "WebSocketSharp/ByteOrder.hpp"
#include "WebSocketSharp/CloseEventArgs.hpp"
#include "WebSocketSharp/CloseStatusCode.hpp"
#include "WebSocketSharp/CompressionMethod.hpp"
#include "WebSocketSharp/ErrorEventArgs.hpp"
#include "WebSocketSharp/Ext.hpp"
#include "WebSocketSharp/Fin.hpp"
#include "WebSocketSharp/HttpBase.hpp"
#include "WebSocketSharp/HttpRequest.hpp"
#include "WebSocketSharp/HttpResponse.hpp"
#include "WebSocketSharp/LogData.hpp"
#include "WebSocketSharp/LogLevel.hpp"
#include "WebSocketSharp/Logger.hpp"
#include "WebSocketSharp/Mask.hpp"
#include "WebSocketSharp/MessageEventArgs.hpp"
#include "WebSocketSharp/Opcode.hpp"
#include "WebSocketSharp/PayloadData.hpp"
#include "WebSocketSharp/Rsv.hpp"
#include "WebSocketSharp/WebSocket.hpp"
#include "WebSocketSharp/WebSocketException.hpp"
#include "WebSocketSharp/WebSocketFrame.hpp"
#include "WebSocketSharp/WebSocketState.hpp"
#ifdef __cpp_modules
                    export module WebSocketSharp;
                    #endif
                
