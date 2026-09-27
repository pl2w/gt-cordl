#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Backtrace/Unity/Model/BacktraceClientConfiguration.hpp"
#include "Backtrace/Unity/Model/BacktraceConfiguration.hpp"
#include "Backtrace/Unity/Model/BacktraceCredentials.hpp"
#include "Backtrace/Unity/Model/BacktraceData.hpp"
#include "Backtrace/Unity/Model/BacktraceDatabaseConfiguration.hpp"
#include "Backtrace/Unity/Model/BacktraceDefaultClassifierTypes.hpp"
#include "Backtrace/Unity/Model/BacktraceHttpClient.hpp"
#include "Backtrace/Unity/Model/BacktraceLogManager.hpp"
#include "Backtrace/Unity/Model/BacktraceReport.hpp"
#include "Backtrace/Unity/Model/BacktraceResult.hpp"
#include "Backtrace/Unity/Model/BacktraceSelfSSLCertificateHandler.hpp"
#include "Backtrace/Unity/Model/BacktraceSourceCode.hpp"
#include "Backtrace/Unity/Model/BacktraceStackFrame.hpp"
#include "Backtrace/Unity/Model/BacktraceStackTrace.hpp"
#include "Backtrace/Unity/Model/BacktraceUnhandledException.hpp"
#include "Backtrace/Unity/Model/BacktraceUnityMessage.hpp"
#include "Backtrace/Unity/Model/DeduplicationModel.hpp"
#include "Backtrace/Unity/Model/IBacktraceHttpClient.hpp"
#include "Backtrace/Unity/Model/MachineIdStorage.hpp"
#include "Backtrace/Unity/Model/WaitForFrame.hpp"
#ifdef __cpp_modules
                    export module Model;
                    #endif
                
