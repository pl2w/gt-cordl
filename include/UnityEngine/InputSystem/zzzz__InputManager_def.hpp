#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Collection_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventStream_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputMetrics_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBuffers_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_AvailableDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_StateChangeMonitorTimeout_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_StateChangeMonitorsForDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSettings_ScrollDeltaBehavior_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputManager)
namespace GlobalNamespace {
struct InputDevice_DeviceFlags;
}
namespace GlobalNamespace {
struct InputManager_AvailableDevice;
}
namespace GlobalNamespace {
struct InputManager_DeviceDisableScope;
}
namespace GlobalNamespace {
struct InputManager_StateChangeMonitorListener;
}
namespace GlobalNamespace {
struct InputManager_StateChangeMonitorTimeout;
}
namespace GlobalNamespace {
struct InputManager_StateChangeMonitorsForDevice;
}
namespace GlobalNamespace {
struct InputSettings_ScrollDeltaBehavior;
}
namespace GlobalNamespace {
struct InputStateBuffers_DoubleBuffers;
}
namespace GlobalNamespace {
struct JsonParser_JsonString;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::Layouts {
class InputDeviceFindControlLayoutDelegate;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputRuntime;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceCommandDelegate;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputMetrics;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBlock;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct TypeTable;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
struct InputControlLayoutChange;
}
namespace UnityEngine::InputSystem {
template<typename TControl>
struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class InputManager__ListControlLayouts_d__97;
}
namespace UnityEngine::InputSystem {
class InputManager___c;
}
namespace UnityEngine::InputSystem {
template<typename TDevice>
class InputManager___c__82_1;
}
namespace UnityEngine::InputSystem {
class InputSettings;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputManager;
}
namespace UnityEngine::InputSystem {
class InputManager__ListControlLayouts_d__97;
}
namespace UnityEngine::InputSystem {
class InputManager___c;
}
namespace UnityEngine::InputSystem {
template<typename TDevice>
class InputManager___c__82_1;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::InputManager*);
MARK_REF_T(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*);
MARK_REF_T(::UnityEngine::InputSystem::InputManager___c*);
MARK_GEN_REF_T_PTR(::UnityEngine::InputSystem::InputManager___c__82_1);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputManager*, "UnityEngine.InputSystem", "InputManager");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*, "UnityEngine.InputSystem", "InputManager/<ListControlLayouts>d__97");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputManager___c*, "UnityEngine.InputSystem", "InputManager/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::InputSystem::InputManager___c__82_1, "UnityEngine.InputSystem", "InputManager/<>c__82`1");
// Dependencies System.Object, Unity.Profiling.ProfilerMarker, UnityEngine.InputSystem.InputControl, UnityEngine.InputSystem.InputDevice, UnityEngine.InputSystem.InputManager::AvailableDevice, UnityEngine.InputSystem.InputManager::StateChangeMonitorTimeout, UnityEngine.InputSystem.InputManager::StateChangeMonitorsForDevice, UnityEngine.InputSystem.InputSettings::ScrollDeltaBehavior, UnityEngine.InputSystem.Layouts.InputControlLayout::Collection, UnityEngine.InputSystem.LowLevel.IInputDeviceCommandInfo, UnityEngine.InputSystem.LowLevel.IInputEventTypeInfo, UnityEngine.InputSystem.LowLevel.InputEventStream, UnityEngine.InputSystem.LowLevel.InputMetrics, UnityEngine.InputSystem.LowLevel.InputStateBuffers, UnityEngine.InputSystem.LowLevel.InputUpdateType, UnityEngine.InputSystem.Utilities.CallbackArray`1<TDelegate>, UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>, UnityEngine.InputSystem.Utilities.TypeTable
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputManager
class CORDL_TYPE InputManager : public ::System::Object {
public:
// Declarations
using AvailableDevice = ::GlobalNamespace::InputManager_AvailableDevice;

using DeviceDisableScope = ::GlobalNamespace::InputManager_DeviceDisableScope;

using StateChangeMonitorListener = ::GlobalNamespace::InputManager_StateChangeMonitorListener;

using StateChangeMonitorTimeout = ::GlobalNamespace::InputManager_StateChangeMonitorTimeout;

using StateChangeMonitorsForDevice = ::GlobalNamespace::InputManager_StateChangeMonitorsForDevice;

using _ListControlLayouts_d__97 = ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97;

using __c = ::UnityEngine::InputSystem::InputManager___c;

template<typename TDevice>
using __c__82_1 = ::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>;

 __declspec(property(get=get_actions, put=set_actions)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  actions;

 __declspec(property(get=get_composites)) ::UnityEngine::InputSystem::Utilities::TypeTable  composites;

 __declspec(property(get=get_defaultUpdateType)) ::UnityEngine::InputSystem::LowLevel::InputUpdateType  defaultUpdateType;

 __declspec(property(get=get_devices)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>  devices;

 __declspec(property(get=get_gameHasFocus)) bool  gameHasFocus;

 __declspec(property(get=get_gameIsPlaying)) bool  gameIsPlaying;

 __declspec(property(get=get_gameShouldGetInputRegardlessOfFocus)) bool  gameShouldGetInputRegardlessOfFocus;

 __declspec(property(get=get_interactions)) ::UnityEngine::InputSystem::Utilities::TypeTable  interactions;

 __declspec(property(get=get_isProcessingEvents)) bool  isProcessingEvents;

/// @brief Field k_InputAddDeviceMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputAddDeviceMarker, put=setStaticF_k_InputAddDeviceMarker)) ::Unity::Profiling::ProfilerMarker  k_InputAddDeviceMarker;

/// @brief Field k_InputOnActionsChangeMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputOnActionsChangeMarker, put=setStaticF_k_InputOnActionsChangeMarker)) ::Unity::Profiling::ProfilerMarker  k_InputOnActionsChangeMarker;

/// @brief Field k_InputOnAfterUpdateMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputOnAfterUpdateMarker, put=setStaticF_k_InputOnAfterUpdateMarker)) ::Unity::Profiling::ProfilerMarker  k_InputOnAfterUpdateMarker;

/// @brief Field k_InputOnBeforeUpdateMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputOnBeforeUpdateMarker, put=setStaticF_k_InputOnBeforeUpdateMarker)) ::Unity::Profiling::ProfilerMarker  k_InputOnBeforeUpdateMarker;

/// @brief Field k_InputOnDeviceChangeMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputOnDeviceChangeMarker, put=setStaticF_k_InputOnDeviceChangeMarker)) ::Unity::Profiling::ProfilerMarker  k_InputOnDeviceChangeMarker;

/// @brief Field k_InputOnDeviceSettingsChangeMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputOnDeviceSettingsChangeMarker, put=setStaticF_k_InputOnDeviceSettingsChangeMarker)) ::Unity::Profiling::ProfilerMarker  k_InputOnDeviceSettingsChangeMarker;

/// @brief Field k_InputOnEventMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputOnEventMarker, put=setStaticF_k_InputOnEventMarker)) ::Unity::Profiling::ProfilerMarker  k_InputOnEventMarker;

/// @brief Field k_InputOnLayoutChangeMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputOnLayoutChangeMarker, put=setStaticF_k_InputOnLayoutChangeMarker)) ::Unity::Profiling::ProfilerMarker  k_InputOnLayoutChangeMarker;

/// @brief Field k_InputOnSettingsChangeMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputOnSettingsChangeMarker, put=setStaticF_k_InputOnSettingsChangeMarker)) ::Unity::Profiling::ProfilerMarker  k_InputOnSettingsChangeMarker;

/// @brief Field k_InputRegisterCustomTypesMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputRegisterCustomTypesMarker, put=setStaticF_k_InputRegisterCustomTypesMarker)) ::Unity::Profiling::ProfilerMarker  k_InputRegisterCustomTypesMarker;

/// @brief Field k_InputRestoreDevicesAfterReloadMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputRestoreDevicesAfterReloadMarker, put=setStaticF_k_InputRestoreDevicesAfterReloadMarker)) ::Unity::Profiling::ProfilerMarker  k_InputRestoreDevicesAfterReloadMarker;

/// @brief Field k_InputTryFindMatchingControllerMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputTryFindMatchingControllerMarker, put=setStaticF_k_InputTryFindMatchingControllerMarker)) ::Unity::Profiling::ProfilerMarker  k_InputTryFindMatchingControllerMarker;

/// @brief Field k_InputUpdateProfilerMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputUpdateProfilerMarker, put=setStaticF_k_InputUpdateProfilerMarker)) ::Unity::Profiling::ProfilerMarker  k_InputUpdateProfilerMarker;

/// @brief Field m_Actions, offset 0x4f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Actions, put=__cordl_internal_set_m_Actions)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  m_Actions;

/// @brief Field m_ActionsChangedListeners, offset 0x3c0, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_ActionsChangedListeners, put=__cordl_internal_set_m_ActionsChangedListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  m_ActionsChangedListeners;

/// @brief Field m_AfterUpdateListeners, offset 0x320, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_AfterUpdateListeners, put=__cordl_internal_set_m_AfterUpdateListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  m_AfterUpdateListeners;

/// @brief Field m_AvailableDeviceCount, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AvailableDeviceCount, put=__cordl_internal_set_m_AvailableDeviceCount)) int32_t  m_AvailableDeviceCount;

/// @brief Field m_AvailableDevices, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AvailableDevices, put=__cordl_internal_set_m_AvailableDevices)) ::ArrayW<::GlobalNamespace::InputManager_AvailableDevice>  m_AvailableDevices;

/// @brief Field m_BeforeUpdateListeners, offset 0x2d0, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_BeforeUpdateListeners, put=__cordl_internal_set_m_BeforeUpdateListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  m_BeforeUpdateListeners;

/// @brief Field m_Composites, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Composites, put=__cordl_internal_set_m_Composites)) ::UnityEngine::InputSystem::Utilities::TypeTable  m_Composites;

/// @brief Field m_CurrentUpdate, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentUpdate, put=__cordl_internal_set_m_CurrentUpdate)) ::UnityEngine::InputSystem::LowLevel::InputUpdateType  m_CurrentUpdate;

/// @brief Field m_DeviceChangeListeners, offset 0xf0, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_DeviceChangeListeners, put=__cordl_internal_set_m_DeviceChangeListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*>  m_DeviceChangeListeners;

/// @brief Field m_DeviceCommandCallbacks, offset 0x1e0, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_DeviceCommandCallbacks, put=__cordl_internal_set_m_DeviceCommandCallbacks)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>  m_DeviceCommandCallbacks;

/// @brief Field m_DeviceFindExecuteCommandDelegate, offset 0x490, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeviceFindExecuteCommandDelegate, put=__cordl_internal_set_m_DeviceFindExecuteCommandDelegate)) ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*  m_DeviceFindExecuteCommandDelegate;

/// @brief Field m_DeviceFindExecuteCommandDeviceId, offset 0x498, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DeviceFindExecuteCommandDeviceId, put=__cordl_internal_set_m_DeviceFindExecuteCommandDeviceId)) int32_t  m_DeviceFindExecuteCommandDeviceId;

/// @brief Field m_DeviceFindLayoutCallbacks, offset 0x190, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_DeviceFindLayoutCallbacks, put=__cordl_internal_set_m_DeviceFindLayoutCallbacks)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>  m_DeviceFindLayoutCallbacks;

/// @brief Field m_DeviceStateChangeListeners, offset 0x140, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_DeviceStateChangeListeners, put=__cordl_internal_set_m_DeviceStateChangeListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>  m_DeviceStateChangeListeners;

/// @brief Field m_Devices, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Devices, put=__cordl_internal_set_m_Devices)) ::ArrayW<::UnityEngine::InputSystem::InputDevice*>  m_Devices;

/// @brief Field m_DevicesById, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DevicesById, put=__cordl_internal_set_m_DevicesById)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::InputSystem::InputDevice*>*  m_DevicesById;

/// @brief Field m_DevicesCount, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DevicesCount, put=__cordl_internal_set_m_DevicesCount)) int32_t  m_DevicesCount;

/// @brief Field m_DisconnectedDevices, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DisconnectedDevices, put=__cordl_internal_set_m_DisconnectedDevices)) ::ArrayW<::UnityEngine::InputSystem::InputDevice*>  m_DisconnectedDevices;

/// @brief Field m_DisconnectedDevicesCount, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DisconnectedDevicesCount, put=__cordl_internal_set_m_DisconnectedDevicesCount)) int32_t  m_DisconnectedDevicesCount;

/// @brief Field m_EventListeners, offset 0x280, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_EventListeners, put=__cordl_internal_set_m_EventListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*>  m_EventListeners;

/// @brief Field m_HasFocus, offset 0x412, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasFocus, put=__cordl_internal_set_m_HasFocus)) bool  m_HasFocus;

/// @brief Field m_HaveDevicesWithStateCallbackReceivers, offset 0x411, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HaveDevicesWithStateCallbackReceivers, put=__cordl_internal_set_m_HaveDevicesWithStateCallbackReceivers)) bool  m_HaveDevicesWithStateCallbackReceivers;

/// @brief Field m_InputEventStream, offset 0x418, size 0x78 
 __declspec(property(get=__cordl_internal_get_m_InputEventStream, put=__cordl_internal_set_m_InputEventStream)) ::UnityEngine::InputSystem::LowLevel::InputEventStream  m_InputEventStream;

/// @brief Field m_Interactions, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Interactions, put=__cordl_internal_set_m_Interactions)) ::UnityEngine::InputSystem::Utilities::TypeTable  m_Interactions;

/// @brief Field m_LayoutChangeListeners, offset 0x230, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_LayoutChangeListeners, put=__cordl_internal_set_m_LayoutChangeListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*>  m_LayoutChangeListeners;

/// @brief Field m_LayoutRegistrationVersion, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LayoutRegistrationVersion, put=__cordl_internal_set_m_LayoutRegistrationVersion)) int32_t  m_LayoutRegistrationVersion;

/// @brief Field m_Layouts, offset 0x18, size 0x40 
 __declspec(property(get=__cordl_internal_get_m_Layouts, put=__cordl_internal_set_m_Layouts)) ::GlobalNamespace::InputControlLayout_Collection  m_Layouts;

/// @brief Field m_Metrics, offset 0x4a8, size 0x38 
 __declspec(property(get=__cordl_internal_get_m_Metrics, put=__cordl_internal_set_m_Metrics)) ::UnityEngine::InputSystem::LowLevel::InputMetrics  m_Metrics;

/// @brief Field m_NativeBeforeUpdateHooked, offset 0x410, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_NativeBeforeUpdateHooked, put=__cordl_internal_set_m_NativeBeforeUpdateHooked)) bool  m_NativeBeforeUpdateHooked;

/// @brief Field m_OptimizedControlsFeatureEnabled, offset 0x4e8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OptimizedControlsFeatureEnabled, put=__cordl_internal_set_m_OptimizedControlsFeatureEnabled)) bool  m_OptimizedControlsFeatureEnabled;

/// @brief Field m_ParanoidReadValueCachingChecksEnabled, offset 0x4ea, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ParanoidReadValueCachingChecksEnabled, put=__cordl_internal_set_m_ParanoidReadValueCachingChecksEnabled)) bool  m_ParanoidReadValueCachingChecksEnabled;

/// @brief Field m_PollingFrequency, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PollingFrequency, put=__cordl_internal_set_m_PollingFrequency)) float_t  m_PollingFrequency;

/// @brief Field m_Processors, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Processors, put=__cordl_internal_set_m_Processors)) ::UnityEngine::InputSystem::Utilities::TypeTable  m_Processors;

/// @brief Field m_ReadValueCachingFeatureEnabled, offset 0x4e9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ReadValueCachingFeatureEnabled, put=__cordl_internal_set_m_ReadValueCachingFeatureEnabled)) bool  m_ReadValueCachingFeatureEnabled;

/// @brief Field m_Runtime, offset 0x4a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Runtime, put=__cordl_internal_set_m_Runtime)) ::UnityEngine::InputSystem::LowLevel::IInputRuntime*  m_Runtime;

/// @brief Field m_ScrollDeltaBehavior, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ScrollDeltaBehavior, put=__cordl_internal_set_m_ScrollDeltaBehavior)) ::GlobalNamespace::InputSettings_ScrollDeltaBehavior  m_ScrollDeltaBehavior;

/// @brief Field m_Settings, offset 0x4e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Settings, put=__cordl_internal_set_m_Settings)) ::UnityW<::UnityEngine::InputSystem::InputSettings>  m_Settings;

/// @brief Field m_SettingsChangedListeners, offset 0x370, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_SettingsChangedListeners, put=__cordl_internal_set_m_SettingsChangedListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  m_SettingsChangedListeners;

/// @brief Field m_ShouldMakeCurrentlyUpdatingDeviceCurrent, offset 0x4f8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ShouldMakeCurrentlyUpdatingDeviceCurrent, put=__cordl_internal_set_m_ShouldMakeCurrentlyUpdatingDeviceCurrent)) bool  m_ShouldMakeCurrentlyUpdatingDeviceCurrent;

/// @brief Field m_StateBuffers, offset 0xb0, size 0x38 
 __declspec(property(get=__cordl_internal_get_m_StateBuffers, put=__cordl_internal_set_m_StateBuffers)) ::UnityEngine::InputSystem::LowLevel::InputStateBuffers  m_StateBuffers;

/// @brief Field m_StateChangeMonitorTimeouts, offset 0x508, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_StateChangeMonitorTimeouts, put=__cordl_internal_set_m_StateChangeMonitorTimeouts)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::GlobalNamespace::InputManager_StateChangeMonitorTimeout>  m_StateChangeMonitorTimeouts;

/// @brief Field m_StateChangeMonitors, offset 0x500, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StateChangeMonitors, put=__cordl_internal_set_m_StateChangeMonitors)) ::ArrayW<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice>  m_StateChangeMonitors;

/// @brief Field m_UpdateMask, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UpdateMask, put=__cordl_internal_set_m_UpdateMask)) ::UnityEngine::InputSystem::LowLevel::InputUpdateType  m_UpdateMask;

 __declspec(property(get=get_metrics)) ::UnityEngine::InputSystem::LowLevel::InputMetrics  metrics;

 __declspec(property(get=get_optimizedControlsFeatureEnabled, put=set_optimizedControlsFeatureEnabled)) bool  optimizedControlsFeatureEnabled;

 __declspec(property(get=get_paranoidReadValueCachingChecksEnabled, put=set_paranoidReadValueCachingChecksEnabled)) bool  paranoidReadValueCachingChecksEnabled;

 __declspec(property(get=get_pollingFrequency, put=set_pollingFrequency)) float_t  pollingFrequency;

 __declspec(property(get=get_processors)) ::UnityEngine::InputSystem::Utilities::TypeTable  processors;

 __declspec(property(get=get_readValueCachingFeatureEnabled, put=set_readValueCachingFeatureEnabled)) bool  readValueCachingFeatureEnabled;

 __declspec(property(get=get_scrollDeltaBehavior, put=set_scrollDeltaBehavior)) ::GlobalNamespace::InputSettings_ScrollDeltaBehavior  scrollDeltaBehavior;

 __declspec(property(get=get_settings, put=set_settings)) ::UnityW<::UnityEngine::InputSystem::InputSettings>  settings;

 __declspec(property(get=get_updateMask, put=set_updateMask)) ::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateMask;

/// @brief Method AddAvailableDevicesMatchingDescription, addr 0xafac468, size 0x37c, virtual false, abstract: false, final false
inline void AddAvailableDevicesMatchingDescription(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher, ::UnityEngine::InputSystem::Utilities::InternedString  layout) ;

/// @brief Method AddAvailableDevicesThatAreNowRecognized, addr 0xafaa8d0, size 0x264, virtual false, abstract: false, final false
inline void AddAvailableDevicesThatAreNowRecognized() ;

/// @brief Method AddDevice, addr 0xafaea58, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description) ;

/// @brief Method AddDevice, addr 0xafaec68, size 0xc8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description, ::UnityEngine::InputSystem::Utilities::InternedString  layout, ::StringW  deviceName, int32_t  deviceId, ::GlobalNamespace::InputDevice_DeviceFlags  deviceFlags) ;

/// @brief Method AddDevice, addr 0xafaea9c, size 0x1cc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description, bool  throwIfNoLayoutFound, ::StringW  deviceName, int32_t  deviceId, ::GlobalNamespace::InputDevice_DeviceFlags  deviceFlags) ;

/// @brief Method AddDevice, addr 0xafa47cc, size 0x14c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::StringW  layout, ::StringW  name, ::UnityEngine::InputSystem::Utilities::InternedString  variants) ;

/// @brief Method AddDevice, addr 0xafad45c, size 0x1b4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Utilities::InternedString  layout, int32_t  deviceId, ::StringW  deviceName, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  deviceDescription, ::GlobalNamespace::InputDevice_DeviceFlags  deviceFlags, ::UnityEngine::InputSystem::Utilities::InternedString  variants) ;

/// @brief Method AddDevice, addr 0xafadf00, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::System::Type*  type, ::StringW  name) ;

/// @brief Method AddDevice, addr 0xafaced8, size 0x584, virtual false, abstract: false, final false
inline void AddDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method AddDeviceUsage, addr 0xafa4918, size 0x12c, virtual false, abstract: false, final false
inline void AddDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method AddStateChangeMonitor, addr 0xafb5e60, size 0x160, virtual false, abstract: false, final false
inline void AddStateChangeMonitor(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, uint32_t  groupIndex) ;

/// @brief Method AddStateChangeMonitorTimeout, addr 0xafb6118, size 0xd0, virtual false, abstract: false, final false
inline void AddStateChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, double_t  time, int64_t  monitorIndex, int32_t  timerIndex) ;

/// @brief Method ApplyActions, addr 0xafaa270, size 0x80, virtual false, abstract: false, final false
inline void ApplyActions() ;

/// @brief Method ApplySettings, addr 0xafa9c6c, size 0x5dc, virtual false, abstract: false, final false
inline void ApplySettings() ;

/// @brief Method AreMaximumEventBytesPerUpdateExceeded, addr 0xafb4f2c, size 0x120, virtual false, abstract: false, final false
inline bool AreMaximumEventBytesPerUpdateExceeded(uint32_t  totalEventBytesProcessed) ;

/// @brief Method AssignUniqueDeviceId, addr 0xafae178, size 0x184, virtual false, abstract: false, final false
inline void AssignUniqueDeviceId(::UnityEngine::InputSystem::InputDevice*  device) ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method CheckAllDevicesOptimizedControlsHaveValidState, addr 0xafb5234, size 0x180, virtual false, abstract: false, final false
inline void CheckAllDevicesOptimizedControlsHaveValidState() ;

/// @brief Method Destroy, addr 0xafb1e34, size 0x10c, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method DontMakeCurrentlyUpdatingDeviceCurrent, addr 0xafb53b4, size 0x8, virtual false, abstract: false, final false
inline void DontMakeCurrentlyUpdatingDeviceCurrent() ;

/// @brief Method EnableOrDisableDevice, addr 0xafae5e0, size 0x478, virtual false, abstract: false, final false
inline void EnableOrDisableDevice(::UnityEngine::InputSystem::InputDevice*  device, bool  enable, ::GlobalNamespace::InputManager_DeviceDisableScope  scope) ;

/// @brief Method ExecuteGlobalCommand, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TCommand>
requires(::cordl_internals::type_constraint<TCommand, ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*> && ::cordl_internals::value_type_constraint<TCommand> && ::cordl_internals::default_constructor_constraint<TCommand>)
inline int64_t ExecuteGlobalCommand(::by_ref<TCommand>  command) ;

/// @brief Method FindOrRegisterDeviceLayoutForType, addr 0xafada60, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString FindOrRegisterDeviceLayoutForType(::System::Type*  type) ;

/// @brief Method FireStateChangeNotifications, addr 0xafb63f0, size 0x14c, virtual false, abstract: false, final false
inline void FireStateChangeNotifications() ;

/// @brief Method FireStateChangeNotifications, addr 0xafb5960, size 0x500, virtual false, abstract: false, final false
inline void FireStateChangeNotifications(int32_t  deviceIndex, double_t  internalTime, ::UnityEngine::InputSystem::LowLevel::InputEvent*  eventPtr) ;

/// @brief Method FlipBuffersForDeviceIfNecessary, addr 0xafb56a0, size 0xa4, virtual false, abstract: false, final false
inline bool FlipBuffersForDeviceIfNecessary(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method FlushDisconnectedDevices, addr 0xafaee44, size 0x54, virtual false, abstract: false, final false
inline void FlushDisconnectedDevices() ;

/// @brief Method GetControls, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
inline int32_t GetControls(::StringW  path, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<TControl>>  controls) ;

/// @brief Method GetDevice, addr 0xafafac8, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* GetDevice(::StringW  nameOrLayout) ;

/// @brief Method GetUnsupportedDevices, addr 0xafafbc4, size 0x1d4, virtual false, abstract: false, final false
inline int32_t GetUnsupportedDevices(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*  descriptions) ;

/// @brief Method Initialize, addr 0xafaff3c, size 0x5c, virtual false, abstract: false, final false
inline void Initialize(::UnityEngine::InputSystem::LowLevel::IInputRuntime*  runtime, ::UnityEngine::InputSystem::InputSettings*  settings) ;

/// @brief Method InitializeActions, addr 0xafaff98, size 0xb8, virtual false, abstract: false, final false
inline void InitializeActions() ;

/// @brief Method InitializeData, addr 0xafb0050, size 0x1494, virtual false, abstract: false, final false
inline void InitializeData() ;

/// @brief Method InitializeDefaultState, addr 0xafb2890, size 0x1b0, virtual false, abstract: false, final false
inline void InitializeDefaultState(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method InitializeDeviceState, addr 0xafae2fc, size 0x2a8, virtual false, abstract: false, final false
inline void InitializeDeviceState(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method InstallBeforeUpdateHookIfNecessary, addr 0xafaabec, size 0xfc, virtual false, abstract: false, final false
inline void InstallBeforeUpdateHookIfNecessary() ;

/// @brief Method InstallGlobals, addr 0xafb1bcc, size 0x268, virtual false, abstract: false, final false
inline void InstallGlobals() ;

/// @brief Method InstallRuntime, addr 0xafb14e4, size 0x6e8, virtual false, abstract: false, final false
inline void InstallRuntime(::UnityEngine::InputSystem::LowLevel::IInputRuntime*  runtime) ;

/// @brief Method InvokeAfterUpdateCallback, addr 0xafb4d24, size 0x98, virtual false, abstract: false, final false
inline void InvokeAfterUpdateCallback(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method IsControlOrChildUsingLayoutRecursive, addr 0xafabfdc, size 0xf8, virtual false, abstract: false, final false
inline bool IsControlOrChildUsingLayoutRecursive(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::Utilities::InternedString  layout) ;

/// @brief Method IsControlUsingLayout, addr 0xafabf08, size 0xd4, virtual false, abstract: false, final false
inline bool IsControlUsingLayout(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::Utilities::InternedString  layout) ;

/// @brief Method IsDeviceLayoutMarkedAsSupportedInSettings, addr 0xafadb04, size 0x108, virtual false, abstract: false, final false
inline bool IsDeviceLayoutMarkedAsSupportedInSettings(::UnityEngine::InputSystem::Utilities::InternedString  layoutName) ;

/// [IteratorStateMachine(typeof(UnityEngine.InputSystem.InputManager::<ListControlLayouts>d__97))]
/// @brief Method ListControlLayouts, addr 0xafadc0c, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* ListControlLayouts(::StringW  basedOn) ;

/// @brief Method MakeDeviceNameUnique, addr 0xafadfc0, size 0x1b8, virtual false, abstract: false, final false
inline void MakeDeviceNameUnique(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method MakeEscapedJsonString, addr 0xafb3144, size 0x1a0, virtual false, abstract: false, final false
inline ::GlobalNamespace::JsonParser_JsonString MakeEscapedJsonString(::StringW  theString) ;

/// @brief Method MakeStringWithEventsProcessedByDevice, addr 0xafb50f4, size 0x140, virtual false, abstract: false, final false
inline ::StringW MakeStringWithEventsProcessedByDevice() ;

static inline ::UnityEngine::InputSystem::InputManager* New_ctor() ;

/// @brief Method NotifyUsageChanged, addr 0xafade08, size 0xf8, virtual false, abstract: false, final false
inline void NotifyUsageChanged(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method OnBeforeUpdate, addr 0xafb32e8, size 0x1f8, virtual false, abstract: false, final false
inline void OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method OnFocusChanged, addr 0xafb34e0, size 0x240, virtual false, abstract: false, final false
inline void OnFocusChanged(bool  focus) ;

/// @brief Method OnNativeDeviceDiscovered, addr 0xafb2a40, size 0x454, virtual false, abstract: false, final false
inline void OnNativeDeviceDiscovered(int32_t  deviceId, ::StringW  deviceDescriptor) ;

/// @brief Method OnUpdate, addr 0xafb373c, size 0x1338, virtual false, abstract: false, final false
inline void OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType, ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>  eventBuffer) ;

/// @brief Method PerformLayoutPostRegistration, addr 0xafab51c, size 0x498, virtual false, abstract: false, final false
inline void PerformLayoutPostRegistration(::UnityEngine::InputSystem::Utilities::InternedString  layoutName, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  baseLayouts, bool  isReplacement, bool  isKnownToBeDeviceLayout, bool  isOverride) ;

/// @brief Method ProcessStateChangeMonitorTimeouts, addr 0xafb4a74, size 0x2b0, virtual false, abstract: false, final false
inline void ProcessStateChangeMonitorTimeouts() ;

/// @brief Method ProcessStateChangeMonitors, addr 0xafb5408, size 0x298, virtual false, abstract: false, final false
inline bool ProcessStateChangeMonitors(int32_t  deviceIndex, void*  newStateFromEvent, void*  oldStateOfDevice, uint32_t  newStateSizeInBytes, uint32_t  newStateOffsetInBytes) ;

/// @brief Method QueueEvent, addr 0xafafd98, size 0xcc, virtual false, abstract: false, final false
inline void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEvent*  eventPtr) ;

/// @brief Method QueueEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEvent>
requires(::cordl_internals::type_constraint<TEvent, ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*> && ::cordl_internals::value_type_constraint<TEvent> && ::cordl_internals::default_constructor_constraint<TEvent>)
inline void QueueEvent(::by_ref<TEvent>  inputEvent) ;

/// @brief Method QueueEvent, addr 0xafa4ad8, size 0x4, virtual false, abstract: false, final false
inline void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  ptr) ;

/// @brief Method ReallocateStateBuffers, addr 0xafaa31c, size 0x1b8, virtual false, abstract: false, final false
inline void ReallocateStateBuffers() ;

/// @brief Method RecreateDevice, addr 0xafac0d4, size 0x154, virtual false, abstract: false, final false
inline void RecreateDevice(::UnityEngine::InputSystem::InputDevice*  oldDevice, ::UnityEngine::InputSystem::Utilities::InternedString  newLayout) ;

/// @brief Method RecreateDevicesUsingLayout, addr 0xafabc94, size 0x274, virtual false, abstract: false, final false
inline void RecreateDevicesUsingLayout(::UnityEngine::InputSystem::Utilities::InternedString  layout, bool  isKnownToBeDeviceLayout) ;

/// @brief Method RecreateDevicesUsingLayoutWithInferiorMatch, addr 0xafac228, size 0x240, virtual false, abstract: false, final false
inline void RecreateDevicesUsingLayoutWithInferiorMatch(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  deviceMatcher) ;

/// @brief Method RegisterControlLayout, addr 0xafa4300, size 0x4cc, virtual false, abstract: false, final false
inline void RegisterControlLayout(::StringW  json, ::StringW  name, bool  isOverride) ;

/// @brief Method RegisterControlLayout, addr 0xafaafb0, size 0x56c, virtual false, abstract: false, final false
inline void RegisterControlLayout(::StringW  name, ::System::Type*  type) ;

/// @brief Method RegisterControlLayoutBuilder, addr 0xafabb08, size 0x18c, virtual false, abstract: false, final false
inline void RegisterControlLayoutBuilder(::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*  method, ::StringW  name, ::StringW  baseLayout) ;

/// @brief Method RegisterControlLayoutMatcher, addr 0xafab9b4, size 0x154, virtual false, abstract: false, final false
inline void RegisterControlLayoutMatcher(::StringW  layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher) ;

/// @brief Method RegisterControlLayoutMatcher, addr 0xafac7e4, size 0x20c, virtual false, abstract: false, final false
inline void RegisterControlLayoutMatcher(::System::Type*  type, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher) ;

/// @brief Method RegisterCustomTypes, addr 0xafb22f0, size 0x258, virtual false, abstract: false, final false
inline void RegisterCustomTypes() ;

/// @brief Method RegisterCustomTypes, addr 0xafb2548, size 0x230, virtual false, abstract: false, final false
inline void RegisterCustomTypes(::ArrayW<::System::Type*>  types) ;

/// @brief Method RegisterPrecompiledLayout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
requires(::cordl_internals::type_constraint<TDevice, ::UnityEngine::InputSystem::InputDevice*> && ::cordl_internals::default_constructor_constraint<TDevice>)
inline void RegisterPrecompiledLayout(::StringW  metadata) ;

/// @brief Method RemoveControlLayout, addr 0xafad610, size 0x240, virtual false, abstract: false, final false
inline void RemoveControlLayout(::StringW  name) ;

/// @brief Method RemoveDevice, addr 0xafa3dac, size 0x4ec, virtual false, abstract: false, final false
inline void RemoveDevice(::UnityEngine::InputSystem::InputDevice*  device, bool  keepOnListOfAvailableDevices) ;

/// @brief Method RemoveDeviceUsage, addr 0xafa4adc, size 0x12c, virtual false, abstract: false, final false
inline void RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method RemoveStateChangeMonitor, addr 0xafb5fc0, size 0x158, virtual false, abstract: false, final false
inline void RemoveStateChangeMonitor(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex) ;

/// @brief Method RemoveStateChangeMonitorTimeout, addr 0xafb61e8, size 0x118, virtual false, abstract: false, final false
inline void RemoveStateChangeMonitorTimeout(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, int32_t  timerIndex) ;

/// @brief Method RemoveStateChangeMonitors, addr 0xafaed30, size 0x114, virtual false, abstract: false, final false
inline void RemoveStateChangeMonitors(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method ResetControlPathsRecursive, addr 0xafb27a8, size 0xe8, virtual false, abstract: false, final false
static inline void ResetControlPathsRecursive(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ResetCurrentProcessedEventBytesForDevices, addr 0xafb504c, size 0xa8, virtual false, abstract: false, final false
inline void ResetCurrentProcessedEventBytesForDevices() ;

/// @brief Method ResetDevice, addr 0xafaee98, size 0x608, virtual false, abstract: false, final false
inline void ResetDevice(::UnityEngine::InputSystem::InputDevice*  device, bool  alsoResetDontResetControls, ::System::Nullable_1<bool>  issueResetCommand) ;

/// @brief Method RestoreDevicesAfterDomainReloadIfNecessary, addr 0xafb2e94, size 0x4, virtual false, abstract: false, final false
inline void RestoreDevicesAfterDomainReloadIfNecessary() ;

/// @brief Method SetDeviceUsage, addr 0xafadc9c, size 0x16c, virtual false, abstract: false, final false
inline void SetDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method ShouldRunDeviceInBackground, addr 0xafae5a4, size 0x3c, virtual false, abstract: false, final false
inline bool ShouldRunDeviceInBackground(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method ShouldRunUpdate, addr 0xafb3720, size 0x1c, virtual false, abstract: false, final false
inline bool ShouldRunUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method SignalStateChangeMonitor, addr 0xafb6300, size 0xf0, virtual false, abstract: false, final false
inline void SignalStateChangeMonitor(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor) ;

/// @brief Method SortStateChangeMonitorsIfNecessary, addr 0xafb53bc, size 0x4c, virtual false, abstract: false, final false
inline void SortStateChangeMonitorsIfNecessary(int32_t  deviceIndex) ;

/// @brief Method TryFindMatchingControlLayout, addr 0xafac9f0, size 0x4e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString TryFindMatchingControlLayout(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>  deviceDescription, int32_t  deviceId) ;

/// @brief Method TryGetDevice, addr 0xafafb68, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* TryGetDevice(::System::Type*  layoutType) ;

/// @brief Method TryGetDevice, addr 0xafaf9a4, size 0x124, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* TryGetDevice(::StringW  nameOrLayout) ;

/// @brief Method TryGetDeviceById, addr 0xafa3c30, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* TryGetDeviceById(int32_t  id) ;

/// @brief Method TryLoadControlLayout, addr 0xafa42f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadControlLayout(::UnityEngine::InputSystem::Utilities::InternedString  name) ;

/// @brief Method TryLoadControlLayout, addr 0xafad850, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadControlLayout(::System::Type*  type) ;

/// @brief Method TryMatchDisconnectedDevice, addr 0xafb2e98, size 0x2ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* TryMatchDisconnectedDevice(::StringW  deviceDescriptor) ;

/// @brief Method UninstallGlobals, addr 0xafb1f40, size 0x3b0, virtual false, abstract: false, final false
inline void UninstallGlobals() ;

/// @brief Method Update, addr 0xafafe64, size 0x2c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method Update, addr 0xafafe90, size 0xac, virtual false, abstract: false, final false
inline void Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method UpdateState, addr 0xafb4dbc, size 0x170, virtual false, abstract: false, final false
inline bool UpdateState(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::LowLevel::InputEvent*  eventPtr, ::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method UpdateState, addr 0xafaf4a0, size 0x504, virtual false, abstract: false, final false
inline bool UpdateState(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType, void*  statePtr, uint32_t  stateOffsetInDevice, uint32_t  stateSize, double_t  internalTime, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// @brief Method WarnAboutDevicesFailingToRecreateAfterDomainReload, addr 0xafb32e4, size 0x4, virtual false, abstract: false, final false
inline void WarnAboutDevicesFailingToRecreateAfterDomainReload() ;

/// @brief Method WriteStateChange, addr 0xafb5744, size 0x21c, virtual false, abstract: false, final false
inline void WriteStateChange(::GlobalNamespace::InputStateBuffers_DoubleBuffers  buffers, int32_t  deviceIndex, ::by_ref<::UnityEngine::InputSystem::LowLevel::InputStateBlock>  deviceStateBlock, uint32_t  stateOffsetInDevice, void*  statePtr, uint32_t  stateSizeInBytes, bool  flippedBuffers) ;

/// [CompilerGenerated]
/// @brief Method <TryFindMatchingControlLayout>b__94_0, addr 0xafb68a8, size 0x68, virtual false, abstract: false, final false
inline int64_t _TryFindMatchingControlLayout_b__94_0(::by_ref<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>  commandRef) ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get_m_Actions() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get_m_Actions() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> const& __cordl_internal_get_m_ActionsChangedListeners() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& __cordl_internal_get_m_ActionsChangedListeners() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> const& __cordl_internal_get_m_AfterUpdateListeners() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& __cordl_internal_get_m_AfterUpdateListeners() ;

constexpr int32_t const& __cordl_internal_get_m_AvailableDeviceCount() const;

constexpr int32_t& __cordl_internal_get_m_AvailableDeviceCount() ;

constexpr ::ArrayW<::GlobalNamespace::InputManager_AvailableDevice> const& __cordl_internal_get_m_AvailableDevices() const;

constexpr ::ArrayW<::GlobalNamespace::InputManager_AvailableDevice>& __cordl_internal_get_m_AvailableDevices() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> const& __cordl_internal_get_m_BeforeUpdateListeners() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& __cordl_internal_get_m_BeforeUpdateListeners() ;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable const& __cordl_internal_get_m_Composites() const;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable& __cordl_internal_get_m_Composites() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType const& __cordl_internal_get_m_CurrentUpdate() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType& __cordl_internal_get_m_CurrentUpdate() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*> const& __cordl_internal_get_m_DeviceChangeListeners() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*>& __cordl_internal_get_m_DeviceChangeListeners() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*> const& __cordl_internal_get_m_DeviceCommandCallbacks() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>& __cordl_internal_get_m_DeviceCommandCallbacks() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* const& __cordl_internal_get_m_DeviceFindExecuteCommandDelegate() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*& __cordl_internal_get_m_DeviceFindExecuteCommandDelegate() ;

constexpr int32_t const& __cordl_internal_get_m_DeviceFindExecuteCommandDeviceId() const;

constexpr int32_t& __cordl_internal_get_m_DeviceFindExecuteCommandDeviceId() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*> const& __cordl_internal_get_m_DeviceFindLayoutCallbacks() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>& __cordl_internal_get_m_DeviceFindLayoutCallbacks() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const& __cordl_internal_get_m_DeviceStateChangeListeners() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>& __cordl_internal_get_m_DeviceStateChangeListeners() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*> const& __cordl_internal_get_m_Devices() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*>& __cordl_internal_get_m_Devices() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::InputSystem::InputDevice*>* const& __cordl_internal_get_m_DevicesById() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::InputSystem::InputDevice*>*& __cordl_internal_get_m_DevicesById() ;

constexpr int32_t const& __cordl_internal_get_m_DevicesCount() const;

constexpr int32_t& __cordl_internal_get_m_DevicesCount() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*> const& __cordl_internal_get_m_DisconnectedDevices() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*>& __cordl_internal_get_m_DisconnectedDevices() ;

constexpr int32_t const& __cordl_internal_get_m_DisconnectedDevicesCount() const;

constexpr int32_t& __cordl_internal_get_m_DisconnectedDevicesCount() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*> const& __cordl_internal_get_m_EventListeners() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*>& __cordl_internal_get_m_EventListeners() ;

constexpr bool const& __cordl_internal_get_m_HasFocus() const;

constexpr bool& __cordl_internal_get_m_HasFocus() ;

constexpr bool const& __cordl_internal_get_m_HaveDevicesWithStateCallbackReceivers() const;

constexpr bool& __cordl_internal_get_m_HaveDevicesWithStateCallbackReceivers() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventStream const& __cordl_internal_get_m_InputEventStream() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventStream& __cordl_internal_get_m_InputEventStream() ;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable const& __cordl_internal_get_m_Interactions() const;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable& __cordl_internal_get_m_Interactions() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*> const& __cordl_internal_get_m_LayoutChangeListeners() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*>& __cordl_internal_get_m_LayoutChangeListeners() ;

constexpr int32_t const& __cordl_internal_get_m_LayoutRegistrationVersion() const;

constexpr int32_t& __cordl_internal_get_m_LayoutRegistrationVersion() ;

constexpr ::GlobalNamespace::InputControlLayout_Collection const& __cordl_internal_get_m_Layouts() const;

constexpr ::GlobalNamespace::InputControlLayout_Collection& __cordl_internal_get_m_Layouts() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputMetrics const& __cordl_internal_get_m_Metrics() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputMetrics& __cordl_internal_get_m_Metrics() ;

constexpr bool const& __cordl_internal_get_m_NativeBeforeUpdateHooked() const;

constexpr bool& __cordl_internal_get_m_NativeBeforeUpdateHooked() ;

constexpr bool const& __cordl_internal_get_m_OptimizedControlsFeatureEnabled() const;

constexpr bool& __cordl_internal_get_m_OptimizedControlsFeatureEnabled() ;

constexpr bool const& __cordl_internal_get_m_ParanoidReadValueCachingChecksEnabled() const;

constexpr bool& __cordl_internal_get_m_ParanoidReadValueCachingChecksEnabled() ;

constexpr float_t const& __cordl_internal_get_m_PollingFrequency() const;

constexpr float_t& __cordl_internal_get_m_PollingFrequency() ;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable const& __cordl_internal_get_m_Processors() const;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable& __cordl_internal_get_m_Processors() ;

constexpr bool const& __cordl_internal_get_m_ReadValueCachingFeatureEnabled() const;

constexpr bool& __cordl_internal_get_m_ReadValueCachingFeatureEnabled() ;

constexpr ::UnityEngine::InputSystem::LowLevel::IInputRuntime* const& __cordl_internal_get_m_Runtime() const;

constexpr ::UnityEngine::InputSystem::LowLevel::IInputRuntime*& __cordl_internal_get_m_Runtime() ;

constexpr ::GlobalNamespace::InputSettings_ScrollDeltaBehavior const& __cordl_internal_get_m_ScrollDeltaBehavior() const;

constexpr ::GlobalNamespace::InputSettings_ScrollDeltaBehavior& __cordl_internal_get_m_ScrollDeltaBehavior() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputSettings> const& __cordl_internal_get_m_Settings() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputSettings>& __cordl_internal_get_m_Settings() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> const& __cordl_internal_get_m_SettingsChangedListeners() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& __cordl_internal_get_m_SettingsChangedListeners() ;

constexpr bool const& __cordl_internal_get_m_ShouldMakeCurrentlyUpdatingDeviceCurrent() const;

constexpr bool& __cordl_internal_get_m_ShouldMakeCurrentlyUpdatingDeviceCurrent() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBuffers const& __cordl_internal_get_m_StateBuffers() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBuffers& __cordl_internal_get_m_StateBuffers() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::GlobalNamespace::InputManager_StateChangeMonitorTimeout> const& __cordl_internal_get_m_StateChangeMonitorTimeouts() const;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::GlobalNamespace::InputManager_StateChangeMonitorTimeout>& __cordl_internal_get_m_StateChangeMonitorTimeouts() ;

constexpr ::ArrayW<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice> const& __cordl_internal_get_m_StateChangeMonitors() const;

constexpr ::ArrayW<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice>& __cordl_internal_get_m_StateChangeMonitors() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType const& __cordl_internal_get_m_UpdateMask() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType& __cordl_internal_get_m_UpdateMask() ;

constexpr void __cordl_internal_set_m_Actions(::UnityW<::UnityEngine::InputSystem::InputActionAsset>  value) ;

constexpr void __cordl_internal_set_m_ActionsChangedListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  value) ;

constexpr void __cordl_internal_set_m_AfterUpdateListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  value) ;

constexpr void __cordl_internal_set_m_AvailableDeviceCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_AvailableDevices(::ArrayW<::GlobalNamespace::InputManager_AvailableDevice>  value) ;

constexpr void __cordl_internal_set_m_BeforeUpdateListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  value) ;

constexpr void __cordl_internal_set_m_Composites(::UnityEngine::InputSystem::Utilities::TypeTable  value) ;

constexpr void __cordl_internal_set_m_CurrentUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  value) ;

constexpr void __cordl_internal_set_m_DeviceChangeListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*>  value) ;

constexpr void __cordl_internal_set_m_DeviceCommandCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>  value) ;

constexpr void __cordl_internal_set_m_DeviceFindExecuteCommandDelegate(::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*  value) ;

constexpr void __cordl_internal_set_m_DeviceFindExecuteCommandDeviceId(int32_t  value) ;

constexpr void __cordl_internal_set_m_DeviceFindLayoutCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>  value) ;

constexpr void __cordl_internal_set_m_DeviceStateChangeListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>  value) ;

constexpr void __cordl_internal_set_m_Devices(::ArrayW<::UnityEngine::InputSystem::InputDevice*>  value) ;

constexpr void __cordl_internal_set_m_DevicesById(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::InputSystem::InputDevice*>*  value) ;

constexpr void __cordl_internal_set_m_DevicesCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_DisconnectedDevices(::ArrayW<::UnityEngine::InputSystem::InputDevice*>  value) ;

constexpr void __cordl_internal_set_m_DisconnectedDevicesCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_EventListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*>  value) ;

constexpr void __cordl_internal_set_m_HasFocus(bool  value) ;

constexpr void __cordl_internal_set_m_HaveDevicesWithStateCallbackReceivers(bool  value) ;

constexpr void __cordl_internal_set_m_InputEventStream(::UnityEngine::InputSystem::LowLevel::InputEventStream  value) ;

constexpr void __cordl_internal_set_m_Interactions(::UnityEngine::InputSystem::Utilities::TypeTable  value) ;

constexpr void __cordl_internal_set_m_LayoutChangeListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*>  value) ;

constexpr void __cordl_internal_set_m_LayoutRegistrationVersion(int32_t  value) ;

constexpr void __cordl_internal_set_m_Layouts(::GlobalNamespace::InputControlLayout_Collection  value) ;

constexpr void __cordl_internal_set_m_Metrics(::UnityEngine::InputSystem::LowLevel::InputMetrics  value) ;

constexpr void __cordl_internal_set_m_NativeBeforeUpdateHooked(bool  value) ;

constexpr void __cordl_internal_set_m_OptimizedControlsFeatureEnabled(bool  value) ;

constexpr void __cordl_internal_set_m_ParanoidReadValueCachingChecksEnabled(bool  value) ;

constexpr void __cordl_internal_set_m_PollingFrequency(float_t  value) ;

constexpr void __cordl_internal_set_m_Processors(::UnityEngine::InputSystem::Utilities::TypeTable  value) ;

constexpr void __cordl_internal_set_m_ReadValueCachingFeatureEnabled(bool  value) ;

constexpr void __cordl_internal_set_m_Runtime(::UnityEngine::InputSystem::LowLevel::IInputRuntime*  value) ;

constexpr void __cordl_internal_set_m_ScrollDeltaBehavior(::GlobalNamespace::InputSettings_ScrollDeltaBehavior  value) ;

constexpr void __cordl_internal_set_m_Settings(::UnityW<::UnityEngine::InputSystem::InputSettings>  value) ;

constexpr void __cordl_internal_set_m_SettingsChangedListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  value) ;

constexpr void __cordl_internal_set_m_ShouldMakeCurrentlyUpdatingDeviceCurrent(bool  value) ;

constexpr void __cordl_internal_set_m_StateBuffers(::UnityEngine::InputSystem::LowLevel::InputStateBuffers  value) ;

constexpr void __cordl_internal_set_m_StateChangeMonitorTimeouts(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::GlobalNamespace::InputManager_StateChangeMonitorTimeout>  value) ;

constexpr void __cordl_internal_set_m_StateChangeMonitors(::ArrayW<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice>  value) ;

constexpr void __cordl_internal_set_m_UpdateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType  value) ;

/// @brief Method .ctor, addr 0xafb653c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_onActionsChange, addr 0xafaaea0, size 0x58, virtual false, abstract: false, final false
inline void add_onActionsChange(::System::Action*  value) ;

/// @brief Method add_onAfterUpdate, addr 0xafaad40, size 0x58, virtual false, abstract: false, final false
inline void add_onAfterUpdate(::System::Action*  value) ;

/// @brief Method add_onBeforeUpdate, addr 0xafaab8c, size 0x60, virtual false, abstract: false, final false
inline void add_onBeforeUpdate(::System::Action*  value) ;

/// @brief Method add_onDeviceChange, addr 0xafa18d0, size 0x58, virtual false, abstract: false, final false
inline void add_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*  value) ;

/// @brief Method add_onDeviceCommand, addr 0xafaa7c0, size 0x58, virtual false, abstract: false, final false
inline void add_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*  value) ;

/// @brief Method add_onDeviceStateChange, addr 0xafaa710, size 0x58, virtual false, abstract: false, final false
inline void add_onDeviceStateChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value) ;

/// @brief Method add_onEvent, addr 0xafa1878, size 0x58, virtual false, abstract: false, final false
inline void add_onEvent(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  value) ;

/// @brief Method add_onFindControlLayoutForDevice, addr 0xafaa870, size 0x60, virtual false, abstract: false, final false
inline void add_onFindControlLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*  value) ;

/// @brief Method add_onLayoutChange, addr 0xafa1928, size 0x58, virtual false, abstract: false, final false
inline void add_onLayoutChange(::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*  value) ;

/// @brief Method add_onSettingsChange, addr 0xafaadf0, size 0x58, virtual false, abstract: false, final false
inline void add_onSettingsChange(::System::Action*  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputAddDeviceMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputOnActionsChangeMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputOnAfterUpdateMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputOnBeforeUpdateMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputOnDeviceChangeMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputOnDeviceSettingsChangeMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputOnEventMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputOnLayoutChangeMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputOnSettingsChangeMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputRegisterCustomTypesMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputRestoreDevicesAfterReloadMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputTryFindMatchingControllerMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputUpdateProfilerMarker() ;

/// @brief Method get_actions, addr 0xafaa248, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> get_actions() ;

/// @brief Method get_composites, addr 0xafa99b8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::TypeTable get_composites() ;

/// @brief Method get_defaultUpdateType, addr 0xafaa4d4, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType get_defaultUpdateType() ;

/// @brief Method get_devices, addr 0xafa307c, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_devices() ;

/// @brief Method get_gameHasFocus, addr 0xafaaf60, size 0x30, virtual false, abstract: false, final false
inline bool get_gameHasFocus() ;

/// @brief Method get_gameIsPlaying, addr 0xafaaf58, size 0x8, virtual false, abstract: false, final false
inline bool get_gameIsPlaying() ;

/// @brief Method get_gameShouldGetInputRegardlessOfFocus, addr 0xafaaf90, size 0x20, virtual false, abstract: false, final false
inline bool get_gameShouldGetInputRegardlessOfFocus() ;

/// @brief Method get_interactions, addr 0xafa99b0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::TypeTable get_interactions() ;

/// @brief Method get_isProcessingEvents, addr 0xafaaf50, size 0x8, virtual false, abstract: false, final false
inline bool get_isProcessingEvents() ;

/// @brief Method get_metrics, addr 0xafa99c0, size 0x1a0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::LowLevel::InputMetrics get_metrics() ;

/// @brief Method get_optimizedControlsFeatureEnabled, addr 0xafb2778, size 0x8, virtual false, abstract: false, final false
inline bool get_optimizedControlsFeatureEnabled() ;

/// @brief Method get_paranoidReadValueCachingChecksEnabled, addr 0xafb2798, size 0x8, virtual false, abstract: false, final false
inline bool get_paranoidReadValueCachingChecksEnabled() ;

/// @brief Method get_pollingFrequency, addr 0xafaa5e0, size 0x8, virtual false, abstract: false, final false
inline float_t get_pollingFrequency() ;

/// @brief Method get_processors, addr 0xafa99a8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::TypeTable get_processors() ;

/// @brief Method get_readValueCachingFeatureEnabled, addr 0xafb2788, size 0x8, virtual false, abstract: false, final false
inline bool get_readValueCachingFeatureEnabled() ;

/// @brief Method get_scrollDeltaBehavior, addr 0xafaa4f0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputSettings_ScrollDeltaBehavior get_scrollDeltaBehavior() ;

/// @brief Method get_settings, addr 0xafa9b60, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputSettings> get_settings() ;

/// @brief Method get_updateMask, addr 0xafaa2f0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType get_updateMask() ;

/// @brief Method remove_onActionsChange, addr 0xafaaef8, size 0x58, virtual false, abstract: false, final false
inline void remove_onActionsChange(::System::Action*  value) ;

/// @brief Method remove_onAfterUpdate, addr 0xafaad98, size 0x58, virtual false, abstract: false, final false
inline void remove_onAfterUpdate(::System::Action*  value) ;

/// @brief Method remove_onBeforeUpdate, addr 0xafaace8, size 0x58, virtual false, abstract: false, final false
inline void remove_onBeforeUpdate(::System::Action*  value) ;

/// @brief Method remove_onDeviceChange, addr 0xafa1b3c, size 0x58, virtual false, abstract: false, final false
inline void remove_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*  value) ;

/// @brief Method remove_onDeviceCommand, addr 0xafaa818, size 0x58, virtual false, abstract: false, final false
inline void remove_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*  value) ;

/// @brief Method remove_onDeviceStateChange, addr 0xafaa768, size 0x58, virtual false, abstract: false, final false
inline void remove_onDeviceStateChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value) ;

/// @brief Method remove_onEvent, addr 0xafa1ae4, size 0x58, virtual false, abstract: false, final false
inline void remove_onEvent(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  value) ;

/// @brief Method remove_onFindControlLayoutForDevice, addr 0xafaab34, size 0x58, virtual false, abstract: false, final false
inline void remove_onFindControlLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*  value) ;

/// @brief Method remove_onLayoutChange, addr 0xafa1b94, size 0x58, virtual false, abstract: false, final false
inline void remove_onLayoutChange(::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*  value) ;

/// @brief Method remove_onSettingsChange, addr 0xafaae48, size 0x58, virtual false, abstract: false, final false
inline void remove_onSettingsChange(::System::Action*  value) ;

static inline void setStaticF_k_InputAddDeviceMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputOnActionsChangeMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputOnAfterUpdateMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputOnBeforeUpdateMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputOnDeviceChangeMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputOnDeviceSettingsChangeMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputOnEventMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputOnLayoutChangeMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputOnSettingsChangeMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputRegisterCustomTypesMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputRestoreDevicesAfterReloadMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputTryFindMatchingControllerMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputUpdateProfilerMarker(::Unity::Profiling::ProfilerMarker  value) ;

/// @brief Method set_actions, addr 0xafaa250, size 0x20, virtual false, abstract: false, final false
inline void set_actions(::UnityEngine::InputSystem::InputActionAsset*  value) ;

/// @brief Method set_optimizedControlsFeatureEnabled, addr 0xafb2780, size 0x8, virtual false, abstract: false, final false
inline void set_optimizedControlsFeatureEnabled(bool  value) ;

/// @brief Method set_paranoidReadValueCachingChecksEnabled, addr 0xafb27a0, size 0x8, virtual false, abstract: false, final false
inline void set_paranoidReadValueCachingChecksEnabled(bool  value) ;

/// @brief Method set_pollingFrequency, addr 0xafaa5e8, size 0x128, virtual false, abstract: false, final false
inline void set_pollingFrequency(float_t  value) ;

/// @brief Method set_readValueCachingFeatureEnabled, addr 0xafb2790, size 0x8, virtual false, abstract: false, final false
inline void set_readValueCachingFeatureEnabled(bool  value) ;

/// @brief Method set_scrollDeltaBehavior, addr 0xafaa4f8, size 0xe8, virtual false, abstract: false, final false
inline void set_scrollDeltaBehavior(::GlobalNamespace::InputSettings_ScrollDeltaBehavior  value) ;

/// @brief Method set_settings, addr 0xafa9b68, size 0x104, virtual false, abstract: false, final false
inline void set_settings(::UnityEngine::InputSystem::InputSettings*  value) ;

/// @brief Method set_updateMask, addr 0xafaa2f8, size 0x24, virtual false, abstract: false, final false
inline void set_updateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputManager(InputManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputManager(InputManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13514};

/// @brief Field m_LayoutRegistrationVersion, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_LayoutRegistrationVersion;

/// @brief Field m_PollingFrequency, offset: 0x14, size: 0x4, def value: None
 float_t  ___m_PollingFrequency;

/// @brief Field m_Layouts, offset: 0x18, size: 0x40, def value: None
 ::GlobalNamespace::InputControlLayout_Collection  ___m_Layouts;

/// @brief Field m_Processors, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Utilities::TypeTable  ___m_Processors;

/// @brief Field m_Interactions, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Utilities::TypeTable  ___m_Interactions;

/// @brief Field m_Composites, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Utilities::TypeTable  ___m_Composites;

/// @brief Field m_DevicesCount, offset: 0x70, size: 0x4, def value: None
 int32_t  ___m_DevicesCount;

/// @brief Field m_Devices, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputDevice*>  ___m_Devices;

/// @brief Field m_DevicesById, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::InputSystem::InputDevice*>*  ___m_DevicesById;

/// @brief Field m_AvailableDeviceCount, offset: 0x88, size: 0x4, def value: None
 int32_t  ___m_AvailableDeviceCount;

/// @brief Field m_AvailableDevices, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputManager_AvailableDevice>  ___m_AvailableDevices;

/// @brief Field m_DisconnectedDevicesCount, offset: 0x98, size: 0x4, def value: None
 int32_t  ___m_DisconnectedDevicesCount;

/// @brief Field m_DisconnectedDevices, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputDevice*>  ___m_DisconnectedDevices;

/// @brief Field m_UpdateMask, offset: 0xa8, size: 0x4, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputUpdateType  ___m_UpdateMask;

/// @brief Field m_CurrentUpdate, offset: 0xac, size: 0x4, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputUpdateType  ___m_CurrentUpdate;

/// @brief Field m_StateBuffers, offset: 0xb0, size: 0x38, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputStateBuffers  ___m_StateBuffers;

/// @brief Field m_ScrollDeltaBehavior, offset: 0xe8, size: 0x4, def value: None
 ::GlobalNamespace::InputSettings_ScrollDeltaBehavior  ___m_ScrollDeltaBehavior;

/// @brief Field m_DeviceChangeListeners, offset: 0xf0, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*>  ___m_DeviceChangeListeners;

/// @brief Field m_DeviceStateChangeListeners, offset: 0x140, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>  ___m_DeviceStateChangeListeners;

/// @brief Field m_DeviceFindLayoutCallbacks, offset: 0x190, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>  ___m_DeviceFindLayoutCallbacks;

/// @brief Field m_DeviceCommandCallbacks, offset: 0x1e0, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>  ___m_DeviceCommandCallbacks;

/// @brief Field m_LayoutChangeListeners, offset: 0x230, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*>  ___m_LayoutChangeListeners;

/// @brief Field m_EventListeners, offset: 0x280, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*>  ___m_EventListeners;

/// @brief Field m_BeforeUpdateListeners, offset: 0x2d0, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  ___m_BeforeUpdateListeners;

/// @brief Field m_AfterUpdateListeners, offset: 0x320, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  ___m_AfterUpdateListeners;

/// @brief Field m_SettingsChangedListeners, offset: 0x370, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  ___m_SettingsChangedListeners;

/// @brief Field m_ActionsChangedListeners, offset: 0x3c0, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  ___m_ActionsChangedListeners;

/// @brief Field m_NativeBeforeUpdateHooked, offset: 0x410, size: 0x1, def value: None
 bool  ___m_NativeBeforeUpdateHooked;

/// @brief Field m_HaveDevicesWithStateCallbackReceivers, offset: 0x411, size: 0x1, def value: None
 bool  ___m_HaveDevicesWithStateCallbackReceivers;

/// @brief Field m_HasFocus, offset: 0x412, size: 0x1, def value: None
 bool  ___m_HasFocus;

/// @brief Field m_InputEventStream, offset: 0x418, size: 0x78, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputEventStream  ___m_InputEventStream;

/// @brief Field m_DeviceFindExecuteCommandDelegate, offset: 0x490, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*  ___m_DeviceFindExecuteCommandDelegate;

/// @brief Field m_DeviceFindExecuteCommandDeviceId, offset: 0x498, size: 0x4, def value: None
 int32_t  ___m_DeviceFindExecuteCommandDeviceId;

/// @brief Field m_Runtime, offset: 0x4a0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::IInputRuntime*  ___m_Runtime;

/// @brief Field m_Metrics, offset: 0x4a8, size: 0x38, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputMetrics  ___m_Metrics;

/// @brief Field m_Settings, offset: 0x4e0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputSettings>  ___m_Settings;

/// @brief Field m_OptimizedControlsFeatureEnabled, offset: 0x4e8, size: 0x1, def value: None
 bool  ___m_OptimizedControlsFeatureEnabled;

/// @brief Field m_ReadValueCachingFeatureEnabled, offset: 0x4e9, size: 0x1, def value: None
 bool  ___m_ReadValueCachingFeatureEnabled;

/// @brief Field m_ParanoidReadValueCachingChecksEnabled, offset: 0x4ea, size: 0x1, def value: None
 bool  ___m_ParanoidReadValueCachingChecksEnabled;

/// @brief Field m_Actions, offset: 0x4f0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  ___m_Actions;

/// @brief Field m_ShouldMakeCurrentlyUpdatingDeviceCurrent, offset: 0x4f8, size: 0x1, def value: None
 bool  ___m_ShouldMakeCurrentlyUpdatingDeviceCurrent;

/// @brief Field m_StateChangeMonitors, offset: 0x500, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice>  ___m_StateChangeMonitors;

/// @brief Field m_StateChangeMonitorTimeouts, offset: 0x508, size: 0x18, def value: None
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::GlobalNamespace::InputManager_StateChangeMonitorTimeout>  ___m_StateChangeMonitorTimeouts;

/// @brief Size padding 0x540 - 0x520 = 0x20, packed as 0x20
 uint8_t  _cordl_size_padding[0x20];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_LayoutRegistrationVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_PollingFrequency) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Layouts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Processors) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Interactions) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Composites) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DevicesCount) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Devices) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DevicesById) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_AvailableDeviceCount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_AvailableDevices) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DisconnectedDevicesCount) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DisconnectedDevices) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_UpdateMask) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_CurrentUpdate) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_StateBuffers) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_ScrollDeltaBehavior) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DeviceChangeListeners) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DeviceStateChangeListeners) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DeviceFindLayoutCallbacks) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DeviceCommandCallbacks) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_LayoutChangeListeners) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_EventListeners) == 0x280, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_BeforeUpdateListeners) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_AfterUpdateListeners) == 0x320, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_SettingsChangedListeners) == 0x370, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_ActionsChangedListeners) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_NativeBeforeUpdateHooked) == 0x410, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_HaveDevicesWithStateCallbackReceivers) == 0x411, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_HasFocus) == 0x412, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_InputEventStream) == 0x418, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DeviceFindExecuteCommandDelegate) == 0x490, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DeviceFindExecuteCommandDeviceId) == 0x498, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Runtime) == 0x4a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Metrics) == 0x4a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Settings) == 0x4e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_OptimizedControlsFeatureEnabled) == 0x4e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_ReadValueCachingFeatureEnabled) == 0x4e9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_ParanoidReadValueCachingChecksEnabled) == 0x4ea, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Actions) == 0x4f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_ShouldMakeCurrentlyUpdatingDeviceCurrent) == 0x4f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_StateChangeMonitors) == 0x500, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_StateChangeMonitorTimeouts) == 0x508, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputManager) == 0x540, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>, System.Object, UnityEngine.InputSystem.Utilities.InternedString
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__97
class CORDL_TYPE InputManager__ListControlLayouts_d__97 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_String__get_Current)) ::StringW  System_Collections_Generic_IEnumerator_System_String__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::StringW  __2__current;

/// @brief Field <>3__basedOn, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__basedOn, put=__cordl_internal_set___3__basedOn)) ::StringW  __3__basedOn;

/// @brief Field <>4__this, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityEngine::InputSystem::InputManager*  __4__this;

/// @brief Field <>7__wrap2, offset 0x50, size 0x28 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) ::GlobalNamespace::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>  __7__wrap2;

/// @brief Field <>7__wrap3, offset 0x78, size 0x28 
 __declspec(property(get=__cordl_internal_get___7__wrap3, put=__cordl_internal_set___7__wrap3)) ::GlobalNamespace::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>  __7__wrap3;

/// @brief Field <>7__wrap4, offset 0xa0, size 0x28 
 __declspec(property(get=__cordl_internal_get___7__wrap4, put=__cordl_internal_set___7__wrap4)) ::GlobalNamespace::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>  __7__wrap4;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <internedBasedOn>5__2, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__internedBasedOn_5__2, put=__cordl_internal_set__internedBasedOn_5__2)) ::UnityEngine::InputSystem::Utilities::InternedString  _internedBasedOn_5__2;

/// @brief Field basedOn, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_basedOn, put=__cordl_internal_set_basedOn)) ::StringW  basedOn;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xafb7090, size 0x7a4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator, addr 0xafb7a5c, size 0xb4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current, addr 0xafb7a14, size 0x8, virtual true, abstract: false, final true
inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xafb7b10, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xafb7a1c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xafb7a54, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xafb6ff0, size 0xa0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::StringW const& __cordl_internal_get___2__current() const;

constexpr ::StringW& __cordl_internal_get___2__current() ;

constexpr ::StringW const& __cordl_internal_get___3__basedOn() const;

constexpr ::StringW& __cordl_internal_get___3__basedOn() ;

constexpr ::UnityEngine::InputSystem::InputManager* const& __cordl_internal_get___4__this() const;

constexpr ::UnityEngine::InputSystem::InputManager*& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*> const& __cordl_internal_get___7__wrap2() const;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>& __cordl_internal_get___7__wrap2() ;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::StringW> const& __cordl_internal_get___7__wrap3() const;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>& __cordl_internal_get___7__wrap3() ;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*> const& __cordl_internal_get___7__wrap4() const;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>& __cordl_internal_get___7__wrap4() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get__internedBasedOn_5__2() const;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get__internedBasedOn_5__2() ;

constexpr ::StringW const& __cordl_internal_get_basedOn() const;

constexpr ::StringW& __cordl_internal_get_basedOn() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::StringW  value) ;

constexpr void __cordl_internal_set___3__basedOn(::StringW  value) ;

constexpr void __cordl_internal_set___4__this(::UnityEngine::InputSystem::InputManager*  value) ;

constexpr void __cordl_internal_set___7__wrap2(::GlobalNamespace::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>  value) ;

constexpr void __cordl_internal_set___7__wrap3(::GlobalNamespace::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>  value) ;

constexpr void __cordl_internal_set___7__wrap4(::GlobalNamespace::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__internedBasedOn_5__2(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr void __cordl_internal_set_basedOn(::StringW  value) ;

/// @brief Method <>m__Finally1, addr 0xafb7834, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2, addr 0xafb7884, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally2() ;

/// @brief Method <>m__Finally3, addr 0xafb78d4, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally3() ;

/// @brief Method <>m__Finally4, addr 0xafb7924, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally4() ;

/// @brief Method <>m__Finally5, addr 0xafb7974, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally5() ;

/// @brief Method <>m__Finally6, addr 0xafb79c4, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally6() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xafb6fbc, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputManager__ListControlLayouts_d__97() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputManager__ListControlLayouts_d__97", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputManager__ListControlLayouts_d__97(InputManager__ListControlLayouts_d__97 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputManager__ListControlLayouts_d__97", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputManager__ListControlLayouts_d__97(InputManager__ListControlLayouts_d__97 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13513};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::StringW  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field basedOn, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___basedOn;

/// @brief Field <>3__basedOn, offset: 0x30, size: 0x8, def value: None
 ::StringW  _____3__basedOn;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputManager*  _____4__this;

/// @brief Field <internedBasedOn>5__2, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::InternedString  ____internedBasedOn_5__2;

/// @brief Field <>7__wrap2, offset: 0x50, size: 0x28, def value: None
 ::GlobalNamespace::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>  _____7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x78, size: 0x28, def value: None
 ::GlobalNamespace::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>  _____7__wrap3;

/// @brief Field <>7__wrap4, offset: 0xa0, size: 0x28, def value: None
 ::GlobalNamespace::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>  _____7__wrap4;

/// @brief Size padding 0xe0 - 0xc8 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, ___basedOn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, _____3__basedOn) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, ____internedBasedOn_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, _____7__wrap2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, _____7__wrap3) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, _____7__wrap4) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97) == 0xe0, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// cpp template
template<typename TDevice>
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputManager/<>c__82`1<TDevice>
class CORDL_TYPE InputManager___c__82_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>*  __9;

/// @brief Field <>9__82_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__82_0, put=setStaticF___9__82_0)) ::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*  __9__82_0;

static inline ::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>* New_ctor() ;

/// @brief Method <RegisterPrecompiledLayout>b__82_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* _RegisterPrecompiledLayout_b__82_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>* getStaticF___9() ;

static inline ::System::Func_1<::UnityEngine::InputSystem::InputDevice*>* getStaticF___9__82_0() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>*  value) ;

static inline void setStaticF___9__82_0(::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputManager___c__82_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputManager___c__82_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputManager___c__82_1(InputManager___c__82_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputManager___c__82_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputManager___c__82_1(InputManager___c__82_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13512};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputManager/<>c
class CORDL_TYPE InputManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::InputManager___c*  __9;

/// @brief Field <>9__184_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__184_0, put=setStaticF___9__184_0)) ::System::Func_2<::UnityEngine::InputSystem::InputDevice*,::StringW>*  __9__184_0;

static inline ::UnityEngine::InputSystem::InputManager___c* New_ctor() ;

/// @brief Method <MakeDeviceNameUnique>b__184_0, addr 0xafb6f94, size 0x28, virtual false, abstract: false, final false
inline ::StringW _MakeDeviceNameUnique_b__184_0(::UnityEngine::InputSystem::InputDevice*  x) ;

/// @brief Method .ctor, addr 0xafb6f8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::InputManager___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::InputSystem::InputDevice*,::StringW>* getStaticF___9__184_0() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::InputManager___c*  value) ;

static inline void setStaticF___9__184_0(::System::Func_2<::UnityEngine::InputSystem::InputDevice*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputManager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputManager___c(InputManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputManager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputManager___c(InputManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13511};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputManager___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
