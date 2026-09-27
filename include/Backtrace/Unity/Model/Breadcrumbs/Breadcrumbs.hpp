#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Backtrace/Unity/Model/Breadcrumbs/BacktraceBreadcrumbType.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/BacktraceBreadcrumbs.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/BacktraceBreadcrumbsEventHandler.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/BreadcrumbLevel.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/IArchiveableBreadcrumbManager.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/IBacktraceBreadcrumbs.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/IBacktraceLogManager.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/UnityEngineLogLevel.hpp"
#ifdef __cpp_modules
                    export module Breadcrumbs;
                    #endif
                
