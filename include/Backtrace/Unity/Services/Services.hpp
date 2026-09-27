#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Backtrace/Unity/Services/BacktraceApi.hpp"
#include "Backtrace/Unity/Services/BacktraceDatabaseContext.hpp"
#include "Backtrace/Unity/Services/BacktraceDatabaseFileContext.hpp"
#include "Backtrace/Unity/Services/BacktraceMetrics.hpp"
#include "Backtrace/Unity/Services/ReportLimitWatcher.hpp"
#ifdef __cpp_modules
                    export module Services;
                    #endif
                
