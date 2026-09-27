#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Backtrace/Unity/Model/Attributes/IDynamicAttributeProvider.hpp"
#include "Backtrace/Unity/Model/Attributes/IScopeAttributeProvider.hpp"
#include "Backtrace/Unity/Model/Attributes/MachineAttributeProvider.hpp"
#include "Backtrace/Unity/Model/Attributes/MachineStateAttributeProvider.hpp"
#include "Backtrace/Unity/Model/Attributes/PiiAttributeProvider.hpp"
#include "Backtrace/Unity/Model/Attributes/ProcessAttributeProvider.hpp"
#include "Backtrace/Unity/Model/Attributes/RuntimeAttributeProvider.hpp"
#include "Backtrace/Unity/Model/Attributes/SceneAttributeProvider.hpp"
#ifdef __cpp_modules
                    export module Attributes;
                    #endif
                
