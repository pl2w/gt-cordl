#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "UnityEngine/InputSystem/Layouts/InputControlAttribute.hpp"
#include "UnityEngine/InputSystem/Layouts/InputControlLayout.hpp"
#include "UnityEngine/InputSystem/Layouts/InputControlLayoutAttribute.hpp"
#include "UnityEngine/InputSystem/Layouts/InputControlLayout_Builder_ControlBuilder.hpp"
#include "UnityEngine/InputSystem/Layouts/InputControlLayout_Cache.hpp"
#include "UnityEngine/InputSystem/Layouts/InputControlLayout_CacheRefInstance.hpp"
#include "UnityEngine/InputSystem/Layouts/InputControlLayout_Collection.hpp"
#include "UnityEngine/InputSystem/Layouts/InputControlLayout_Collection_LayoutMatcher.hpp"
#include "UnityEngine/InputSystem/Layouts/InputControlLayout_Collection_PrecompiledLayout.hpp"
#include "UnityEngine/InputSystem/Layouts/InputControlLayout_ControlItem.hpp"
#include "UnityEngine/InputSystem/Layouts/InputControlLayout_ControlItem_Flags.hpp"
#include "UnityEngine/InputSystem/Layouts/InputControlLayout_Flags.hpp"
#include "UnityEngine/InputSystem/Layouts/InputControlLayout_LayoutJson.hpp"
#include "UnityEngine/InputSystem/Layouts/InputControlLayout_LayoutJsonNameAndDescriptorOnly.hpp"
#include "UnityEngine/InputSystem/Layouts/InputDeviceBuilder.hpp"
#include "UnityEngine/InputSystem/Layouts/InputDeviceBuilder_RefInstance.hpp"
#include "UnityEngine/InputSystem/Layouts/InputDeviceDescription.hpp"
#include "UnityEngine/InputSystem/Layouts/InputDeviceDescription_DeviceDescriptionJson.hpp"
#include "UnityEngine/InputSystem/Layouts/InputDeviceFindControlLayoutDelegate.hpp"
#include "UnityEngine/InputSystem/Layouts/InputDeviceMatcher.hpp"
#include "UnityEngine/InputSystem/Layouts/InputDeviceMatcher_MatcherJson.hpp"
#include "UnityEngine/InputSystem/Layouts/InputDeviceMatcher_MatcherJson_Capability.hpp"
#ifdef __cpp_modules
                    export module Layouts;
                    #endif
                
