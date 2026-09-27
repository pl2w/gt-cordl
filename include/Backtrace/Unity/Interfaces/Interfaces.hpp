#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Backtrace/Unity/Interfaces/IBacktraceApi.hpp"
#include "Backtrace/Unity/Interfaces/IBacktraceClient.hpp"
#include "Backtrace/Unity/Interfaces/IBacktraceDatabase.hpp"
#include "Backtrace/Unity/Interfaces/IBacktraceDatabaseContext.hpp"
#include "Backtrace/Unity/Interfaces/IBacktraceDatabaseFileContext.hpp"
#include "Backtrace/Unity/Interfaces/IBacktraceMetrics.hpp"
#ifdef __cpp_modules
                    export module Interfaces;
                    #endif
                
