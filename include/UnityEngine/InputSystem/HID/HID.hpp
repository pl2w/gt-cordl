#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "UnityEngine/InputSystem/HID/HID.hpp"
#include "UnityEngine/InputSystem/HID/HIDParser.hpp"
#include "UnityEngine/InputSystem/HID/HIDParser_HIDItemStateGlobal.hpp"
#include "UnityEngine/InputSystem/HID/HIDParser_HIDItemStateLocal.hpp"
#include "UnityEngine/InputSystem/HID/HIDParser_HIDItemTypeAndTag.hpp"
#include "UnityEngine/InputSystem/HID/HIDParser_HIDReportData.hpp"
#include "UnityEngine/InputSystem/HID/HIDSupport.hpp"
#include "UnityEngine/InputSystem/HID/HIDSupport_HIDPageUsage.hpp"
#include "UnityEngine/InputSystem/HID/HID_Button.hpp"
#include "UnityEngine/InputSystem/HID/HID_GenericDesktop.hpp"
#include "UnityEngine/InputSystem/HID/HID_HIDCollectionDescriptor.hpp"
#include "UnityEngine/InputSystem/HID/HID_HIDCollectionType.hpp"
#include "UnityEngine/InputSystem/HID/HID_HIDDeviceDescriptor.hpp"
#include "UnityEngine/InputSystem/HID/HID_HIDDeviceDescriptorBuilder.hpp"
#include "UnityEngine/InputSystem/HID/HID_HIDElementDescriptor.hpp"
#include "UnityEngine/InputSystem/HID/HID_HIDElementFlags.hpp"
#include "UnityEngine/InputSystem/HID/HID_HIDReportType.hpp"
#include "UnityEngine/InputSystem/HID/HID_Simulation.hpp"
#include "UnityEngine/InputSystem/HID/HID_UsagePage.hpp"
#ifdef __cpp_modules
                    export module HID;
                    #endif
                
