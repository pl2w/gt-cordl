#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Backtrace/Unity/Model/Metrics/EventAggregationBase.hpp"
#include "Backtrace/Unity/Model/Metrics/MetricsSubmissionJob_1.hpp"
#include "Backtrace/Unity/Model/Metrics/MetricsSubmissionQueue_1.hpp"
#include "Backtrace/Unity/Model/Metrics/SummedEvent.hpp"
#include "Backtrace/Unity/Model/Metrics/SummedEventsSubmissionQueue.hpp"
#include "Backtrace/Unity/Model/Metrics/UniqueEvent.hpp"
#include "Backtrace/Unity/Model/Metrics/UniqueEventsSubmissionQueue.hpp"
#ifdef __cpp_modules
                    export module Metrics;
                    #endif
                
