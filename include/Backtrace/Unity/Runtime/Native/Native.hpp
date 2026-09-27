#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Backtrace/Unity/Runtime/Native/INativeClient.hpp"
#include "Backtrace/Unity/Runtime/Native/IStartupMinidumpSender.hpp"
#include "Backtrace/Unity/Runtime/Native/NativeClientFactory.hpp"
#ifdef __cpp_modules
                    export module Native;
                    #endif
                
