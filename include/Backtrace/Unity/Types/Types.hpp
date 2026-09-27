#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Backtrace/Unity/Types/BacktraceResultStatus.hpp"
#include "Backtrace/Unity/Types/BacktraceStackFrameType.hpp"
#include "Backtrace/Unity/Types/DeduplicationStrategy.hpp"
#include "Backtrace/Unity/Types/MiniDumpType.hpp"
#include "Backtrace/Unity/Types/MinidumpException.hpp"
#include "Backtrace/Unity/Types/ReportFilterType.hpp"
#include "Backtrace/Unity/Types/RetryBehavior.hpp"
#include "Backtrace/Unity/Types/RetryOrder.hpp"
#ifdef __cpp_modules
                    export module Types;
                    #endif
                
