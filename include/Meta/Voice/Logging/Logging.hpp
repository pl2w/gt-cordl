#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Meta/Voice/Logging/CorrelationID.hpp"
#include "Meta/Voice/Logging/ErrorCode.hpp"
#include "Meta/Voice/Logging/ICoreLogger.hpp"
#include "Meta/Voice/Logging/IErrorMitigator.hpp"
#include "Meta/Voice/Logging/ILogSink.hpp"
#include "Meta/Voice/Logging/ILogWriter.hpp"
#include "Meta/Voice/Logging/ILoggerRegistry.hpp"
#include "Meta/Voice/Logging/IVLogger.hpp"
#include "Meta/Voice/Logging/IVLoggerFactory.hpp"
#include "Meta/Voice/Logging/KnownErrorCode.hpp"
#include "Meta/Voice/Logging/LazyLogger.hpp"
#include "Meta/Voice/Logging/LogCategory.hpp"
#include "Meta/Voice/Logging/LogCategoryAttribute.hpp"
#include "Meta/Voice/Logging/LogEntry.hpp"
#include "Meta/Voice/Logging/LogSink.hpp"
#include "Meta/Voice/Logging/LoggerOptions.hpp"
#include "Meta/Voice/Logging/LoggerRegistry.hpp"
#include "Meta/Voice/Logging/LoggingContext.hpp"
#include "Meta/Voice/Logging/RingDictionaryBuffer_2.hpp"
#include "Meta/Voice/Logging/UnityLogWriter.hpp"
#include "Meta/Voice/Logging/VLogger.hpp"
#include "Meta/Voice/Logging/VLoggerFactory.hpp"
#include "Meta/Voice/Logging/VLoggerVerbosity.hpp"
#ifdef __cpp_modules
                    export module Logging;
                    #endif
                
