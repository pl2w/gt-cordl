#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputDevice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_ControlBitRangeNode_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_DeviceFlags_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDevice)
namespace GlobalNamespace {
struct InputDevice_ControlBitRangeNode;
}
namespace GlobalNamespace {
struct InputDevice_DeviceFlags;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::InputDevice*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputDevice*, "UnityEngine.InputSystem", "InputDevice");
// Dependencies UnityEngine.InputSystem.InputControl, UnityEngine.InputSystem.InputDevice::ControlBitRangeNode, UnityEngine.InputSystem.InputDevice::DeviceFlags, UnityEngine.InputSystem.Layouts.InputDeviceDescription, UnityEngine.InputSystem.LowLevel.IInputDeviceCommandInfo, UnityEngine.InputSystem.Utilities.InternedString
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputDevice
class CORDL_TYPE InputDevice : public ::UnityEngine::InputSystem::InputControl {
public:
// Declarations
using ControlBitRangeNode = ::GlobalNamespace::InputDevice_ControlBitRangeNode;

using DeviceFlags = ::GlobalNamespace::InputDevice_DeviceFlags;

 __declspec(property(get=get_added)) bool  added;

 __declspec(property(get=get_allControls)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>  allControls;

 __declspec(property(get=get_canDeviceRunInBackground)) bool  canDeviceRunInBackground;

 __declspec(property(get=get_canRunInBackground)) bool  canRunInBackground;

 __declspec(property(get=get_description)) ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description;

 __declspec(property(get=get_deviceId)) int32_t  deviceId;

 __declspec(property(get=get_disabledInFrontend, put=set_disabledInFrontend)) bool  disabledInFrontend;

 __declspec(property(get=get_disabledInRuntime, put=set_disabledInRuntime)) bool  disabledInRuntime;

 __declspec(property(get=get_disabledWhileInBackground, put=set_disabledWhileInBackground)) bool  disabledWhileInBackground;

 __declspec(property(get=get_enabled)) bool  enabled;

 __declspec(property(get=get_hasControlsWithDefaultState, put=set_hasControlsWithDefaultState)) bool  hasControlsWithDefaultState;

 __declspec(property(get=get_hasDontResetControls, put=set_hasDontResetControls)) bool  hasDontResetControls;

 __declspec(property(get=get_hasEventMerger, put=set_hasEventMerger)) bool  hasEventMerger;

 __declspec(property(get=get_hasEventPreProcessor, put=set_hasEventPreProcessor)) bool  hasEventPreProcessor;

 __declspec(property(get=get_hasStateCallbacks, put=set_hasStateCallbacks)) bool  hasStateCallbacks;

 __declspec(property(get=get_lastUpdateTime)) double_t  lastUpdateTime;

/// @brief Field m_AliasesForEachControl, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AliasesForEachControl, put=__cordl_internal_set_m_AliasesForEachControl)) ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>  m_AliasesForEachControl;

/// @brief Field m_ButtonControlsCheckingPressState, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ButtonControlsCheckingPressState, put=__cordl_internal_set_m_ButtonControlsCheckingPressState)) ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Controls::ButtonControl*>*  m_ButtonControlsCheckingPressState;

/// @brief Field m_ChildrenForEachControl, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ChildrenForEachControl, put=__cordl_internal_set_m_ChildrenForEachControl)) ::ArrayW<::UnityEngine::InputSystem::InputControl*>  m_ChildrenForEachControl;

/// @brief Field m_ControlTreeIndices, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ControlTreeIndices, put=__cordl_internal_set_m_ControlTreeIndices)) ::ArrayW<uint16_t>  m_ControlTreeIndices;

/// @brief Field m_ControlTreeNodes, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ControlTreeNodes, put=__cordl_internal_set_m_ControlTreeNodes)) ::ArrayW<::GlobalNamespace::InputDevice_ControlBitRangeNode>  m_ControlTreeNodes;

/// @brief Field m_CurrentProcessedEventBytesOnUpdate, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentProcessedEventBytesOnUpdate, put=__cordl_internal_set_m_CurrentProcessedEventBytesOnUpdate)) uint32_t  m_CurrentProcessedEventBytesOnUpdate;

/// @brief Field m_CurrentUpdateStepCount, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentUpdateStepCount, put=__cordl_internal_set_m_CurrentUpdateStepCount)) uint32_t  m_CurrentUpdateStepCount;

/// @brief Field m_Description, offset 0xf0, size 0x38 
 __declspec(property(get=__cordl_internal_get_m_Description, put=__cordl_internal_set_m_Description)) ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  m_Description;

/// @brief Field m_DeviceFlags, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DeviceFlags, put=__cordl_internal_set_m_DeviceFlags)) ::GlobalNamespace::InputDevice_DeviceFlags  m_DeviceFlags;

/// @brief Field m_DeviceId, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DeviceId, put=__cordl_internal_set_m_DeviceId)) int32_t  m_DeviceId;

/// @brief Field m_DeviceIndex, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DeviceIndex, put=__cordl_internal_set_m_DeviceIndex)) int32_t  m_DeviceIndex;

/// @brief Field m_LastUpdateTimeInternal, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastUpdateTimeInternal, put=__cordl_internal_set_m_LastUpdateTimeInternal)) double_t  m_LastUpdateTimeInternal;

/// @brief Field m_ParticipantId, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ParticipantId, put=__cordl_internal_set_m_ParticipantId)) int32_t  m_ParticipantId;

/// @brief Field m_StateOffsetToControlMap, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StateOffsetToControlMap, put=__cordl_internal_set_m_StateOffsetToControlMap)) ::ArrayW<uint32_t>  m_StateOffsetToControlMap;

/// @brief Field m_UpdatedButtons, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UpdatedButtons, put=__cordl_internal_set_m_UpdatedButtons)) ::System::Collections::Generic::HashSet_1<int32_t>*  m_UpdatedButtons;

/// @brief Field m_UsageToControl, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UsageToControl, put=__cordl_internal_set_m_UsageToControl)) ::ArrayW<::UnityEngine::InputSystem::InputControl*>  m_UsageToControl;

/// @brief Field m_UsagesForEachControl, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UsagesForEachControl, put=__cordl_internal_set_m_UsagesForEachControl)) ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>  m_UsagesForEachControl;

/// @brief Field m_UseCachePathForButtonPresses, offset 0x168, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseCachePathForButtonPresses, put=__cordl_internal_set_m_UseCachePathForButtonPresses)) bool  m_UseCachePathForButtonPresses;

 __declspec(property(get=get_native)) bool  native;

 __declspec(property(get=get_remote)) bool  remote;

 __declspec(property(get=get_updateBeforeRender)) bool  updateBeforeRender;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_wasUpdatedThisFrame)) bool  wasUpdatedThisFrame;

/// @brief Method AddDeviceUsage, addr 0xaf5ba4c, size 0xb8, virtual false, abstract: false, final false
inline void AddDeviceUsage(::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method Build, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
static inline TDevice Build(::StringW  layoutName, ::StringW  layoutVariants, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  deviceDescription, bool  noPrecompiledLayouts) ;

/// @brief Method ClearDeviceUsages, addr 0xaf5bbe4, size 0x60, virtual false, abstract: false, final false
inline void ClearDeviceUsages() ;

/// @brief Method CompareValue, addr 0xaf5b6cc, size 0xfc, virtual true, abstract: false, final false
inline bool CompareValue(void*  firstStatePtr, void*  secondStatePtr) ;

/// @brief Method DecodeStateOffsetToControlMapEntry, addr 0xaf5651c, size 0x1c, virtual false, abstract: false, final false
static inline void DecodeStateOffsetToControlMapEntry(uint32_t  entry, ::by_ref<uint32_t>  controlIndex, ::by_ref<uint32_t>  stateOffset, ::by_ref<uint32_t>  stateSize) ;

/// @brief Method DumpControlBitRangeNode, addr 0xaf5c56c, size 0x424, virtual false, abstract: false, final false
inline void DumpControlBitRangeNode(int32_t  nodeIndex, ::GlobalNamespace::InputDevice_ControlBitRangeNode  node, uint32_t  startOffset, uint32_t  sizeInBits, ::System::Collections::Generic::List_1<::StringW>*  output) ;

/// @brief Method DumpControlTree, addr 0xaf5cab4, size 0xcc, virtual false, abstract: false, final false
inline ::StringW DumpControlTree() ;

/// @brief Method DumpControlTree, addr 0xaf5c990, size 0x124, virtual false, abstract: false, final false
inline void DumpControlTree(::GlobalNamespace::InputDevice_ControlBitRangeNode  parentNode, uint32_t  startOffset, ::System::Collections::Generic::List_1<::StringW>*  output) ;

/// @brief Method EncodeStateOffsetToControlMapEntry, addr 0xaf5b9b0, size 0xc, virtual false, abstract: false, final false
static inline uint32_t EncodeStateOffsetToControlMapEntry(uint32_t  controlIndex, uint32_t  stateOffsetInBits, uint32_t  stateSizeInBits) ;

/// @brief Method ExecuteCommand, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TCommand>
requires(::cordl_internals::type_constraint<TCommand, ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*> && ::cordl_internals::value_type_constraint<TCommand> && ::cordl_internals::default_constructor_constraint<TCommand>)
inline int64_t ExecuteCommand(::by_ref<TCommand>  command) ;

/// @brief Method ExecuteCommand, addr 0xaf5b854, size 0xd8, virtual true, abstract: false, final false
inline int64_t ExecuteCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*  commandPtr) ;

/// @brief Method ExecuteDisableCommand, addr 0xaf5bcc4, size 0x74, virtual false, abstract: false, final false
inline bool ExecuteDisableCommand() ;

/// @brief Method ExecuteEnableCommand, addr 0xaf5bc44, size 0x80, virtual false, abstract: false, final false
inline bool ExecuteEnableCommand() ;

/// @brief Method HasDataChangedInRange, addr 0xaf5cb80, size 0x748, virtual false, abstract: false, final false
static inline bool HasDataChangedInRange(uint8_t*  deviceStatePtr, void*  statePtr, uint32_t  startOffset, uint32_t  sizeInBits) ;

/// @brief Method MakeCurrent, addr 0xaf5ae3c, size 0x4, virtual true, abstract: false, final false
inline void MakeCurrent() ;

static inline ::UnityEngine::InputSystem::InputDevice* New_ctor() ;

/// @brief Method NotifyAdded, addr 0xaf5bd38, size 0x10, virtual false, abstract: false, final false
inline void NotifyAdded() ;

/// @brief Method NotifyConfigurationChanged, addr 0xaf5b7c8, size 0x80, virtual false, abstract: false, final false
inline void NotifyConfigurationChanged() ;

/// @brief Method NotifyRemoved, addr 0xaf5bd48, size 0x10, virtual false, abstract: false, final false
inline void NotifyRemoved() ;

/// @brief Method OnAdded, addr 0xaf5b848, size 0x4, virtual true, abstract: false, final false
inline void OnAdded() ;

/// @brief Method OnConfigurationChanged, addr 0xaf5b850, size 0x4, virtual true, abstract: false, final false
inline void OnConfigurationChanged() ;

/// @brief Method OnRemoved, addr 0xaf5b84c, size 0x4, virtual true, abstract: false, final false
inline void OnRemoved() ;

/// @brief Method QueryEnabledStateFromRuntime, addr 0xaf5b098, size 0xa8, virtual false, abstract: false, final false
inline bool QueryEnabledStateFromRuntime() ;

/// @brief Method ReadValueFromBufferAsObject, addr 0xaf5b3d8, size 0x38, virtual true, abstract: false, final false
inline ::System::Object* ReadValueFromBufferAsObject(void*  buffer, int32_t  bufferSize) ;

/// @brief Method ReadValueFromStateAsObject, addr 0xaf5b410, size 0x10c, virtual true, abstract: false, final false
inline ::System::Object* ReadValueFromStateAsObject(void*  statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer, addr 0xaf5b51c, size 0x1b0, virtual true, abstract: false, final false
inline void ReadValueFromStateIntoBuffer(void*  statePtr, void*  bufferPtr, int32_t  bufferSize) ;

/// @brief Method RemoveDeviceUsage, addr 0xaf5bb04, size 0xe0, virtual false, abstract: false, final false
inline void RemoveDeviceUsage(::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method RequestReset, addr 0xaf4e954, size 0x80, virtual false, abstract: false, final false
inline bool RequestReset() ;

/// @brief Method RequestSync, addr 0xaf4e800, size 0x80, virtual false, abstract: false, final false
inline bool RequestSync() ;

/// @brief Method WriteChangedControlStates, addr 0xaf5bd58, size 0x15c, virtual false, abstract: false, final false
inline void WriteChangedControlStates(uint8_t*  deviceStateBuffer, void*  statePtr, uint32_t  stateSizeInBytes, uint32_t  stateOffsetInDevice) ;

/// @brief Method WriteChangedControlStatesInternal, addr 0xaf5c1f4, size 0x378, virtual false, abstract: false, final false
inline void WriteChangedControlStatesInternal(void*  statePtr, uint8_t*  deviceStatePtr, ::GlobalNamespace::InputDevice_ControlBitRangeNode  parentNode, uint32_t  startOffset) ;

/// @brief Method WritePartialChangedControlStatesInternal, addr 0xaf5beb4, size 0x340, virtual false, abstract: false, final false
inline void WritePartialChangedControlStatesInternal(uint32_t  stateSizeInBits, uint32_t  stateOffsetInDeviceInBits, ::GlobalNamespace::InputDevice_ControlBitRangeNode  parentNode, uint32_t  startOffset) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> const& __cordl_internal_get_m_AliasesForEachControl() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>& __cordl_internal_get_m_AliasesForEachControl() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Controls::ButtonControl*>* const& __cordl_internal_get_m_ButtonControlsCheckingPressState() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Controls::ButtonControl*>*& __cordl_internal_get_m_ButtonControlsCheckingPressState() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*> const& __cordl_internal_get_m_ChildrenForEachControl() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*>& __cordl_internal_get_m_ChildrenForEachControl() ;

constexpr ::ArrayW<uint16_t> const& __cordl_internal_get_m_ControlTreeIndices() const;

constexpr ::ArrayW<uint16_t>& __cordl_internal_get_m_ControlTreeIndices() ;

constexpr ::ArrayW<::GlobalNamespace::InputDevice_ControlBitRangeNode> const& __cordl_internal_get_m_ControlTreeNodes() const;

constexpr ::ArrayW<::GlobalNamespace::InputDevice_ControlBitRangeNode>& __cordl_internal_get_m_ControlTreeNodes() ;

constexpr uint32_t const& __cordl_internal_get_m_CurrentProcessedEventBytesOnUpdate() const;

constexpr uint32_t& __cordl_internal_get_m_CurrentProcessedEventBytesOnUpdate() ;

constexpr uint32_t const& __cordl_internal_get_m_CurrentUpdateStepCount() const;

constexpr uint32_t& __cordl_internal_get_m_CurrentUpdateStepCount() ;

constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription const& __cordl_internal_get_m_Description() const;

constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription& __cordl_internal_get_m_Description() ;

constexpr ::GlobalNamespace::InputDevice_DeviceFlags const& __cordl_internal_get_m_DeviceFlags() const;

constexpr ::GlobalNamespace::InputDevice_DeviceFlags& __cordl_internal_get_m_DeviceFlags() ;

constexpr int32_t const& __cordl_internal_get_m_DeviceId() const;

constexpr int32_t& __cordl_internal_get_m_DeviceId() ;

constexpr int32_t const& __cordl_internal_get_m_DeviceIndex() const;

constexpr int32_t& __cordl_internal_get_m_DeviceIndex() ;

constexpr double_t const& __cordl_internal_get_m_LastUpdateTimeInternal() const;

constexpr double_t& __cordl_internal_get_m_LastUpdateTimeInternal() ;

constexpr int32_t const& __cordl_internal_get_m_ParticipantId() const;

constexpr int32_t& __cordl_internal_get_m_ParticipantId() ;

constexpr ::ArrayW<uint32_t> const& __cordl_internal_get_m_StateOffsetToControlMap() const;

constexpr ::ArrayW<uint32_t>& __cordl_internal_get_m_StateOffsetToControlMap() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_m_UpdatedButtons() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_m_UpdatedButtons() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*> const& __cordl_internal_get_m_UsageToControl() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*>& __cordl_internal_get_m_UsageToControl() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> const& __cordl_internal_get_m_UsagesForEachControl() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>& __cordl_internal_get_m_UsagesForEachControl() ;

constexpr bool const& __cordl_internal_get_m_UseCachePathForButtonPresses() const;

constexpr bool& __cordl_internal_get_m_UseCachePathForButtonPresses() ;

constexpr void __cordl_internal_set_m_AliasesForEachControl(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>  value) ;

constexpr void __cordl_internal_set_m_ButtonControlsCheckingPressState(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Controls::ButtonControl*>*  value) ;

constexpr void __cordl_internal_set_m_ChildrenForEachControl(::ArrayW<::UnityEngine::InputSystem::InputControl*>  value) ;

constexpr void __cordl_internal_set_m_ControlTreeIndices(::ArrayW<uint16_t>  value) ;

constexpr void __cordl_internal_set_m_ControlTreeNodes(::ArrayW<::GlobalNamespace::InputDevice_ControlBitRangeNode>  value) ;

constexpr void __cordl_internal_set_m_CurrentProcessedEventBytesOnUpdate(uint32_t  value) ;

constexpr void __cordl_internal_set_m_CurrentUpdateStepCount(uint32_t  value) ;

constexpr void __cordl_internal_set_m_Description(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  value) ;

constexpr void __cordl_internal_set_m_DeviceFlags(::GlobalNamespace::InputDevice_DeviceFlags  value) ;

constexpr void __cordl_internal_set_m_DeviceId(int32_t  value) ;

constexpr void __cordl_internal_set_m_DeviceIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_LastUpdateTimeInternal(double_t  value) ;

constexpr void __cordl_internal_set_m_ParticipantId(int32_t  value) ;

constexpr void __cordl_internal_set_m_StateOffsetToControlMap(::ArrayW<uint32_t>  value) ;

constexpr void __cordl_internal_set_m_UpdatedButtons(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_UsageToControl(::ArrayW<::UnityEngine::InputSystem::InputControl*>  value) ;

constexpr void __cordl_internal_set_m_UsagesForEachControl(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>  value) ;

constexpr void __cordl_internal_set_m_UseCachePathForButtonPresses(bool  value) ;

/// @brief Method .ctor, addr 0xaf5b040, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_added, addr 0xaf4a028, size 0x10, virtual false, abstract: false, final false
inline bool get_added() ;

/// @brief Method get_all, addr 0xaf5b38c, size 0x4c, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_all() ;

/// @brief Method get_allControls, addr 0xaf56ffc, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> get_allControls() ;

/// @brief Method get_canDeviceRunInBackground, addr 0xaf5b144, size 0xb8, virtual false, abstract: false, final false
inline bool get_canDeviceRunInBackground() ;

/// @brief Method get_canRunInBackground, addr 0xaf5b140, size 0x4, virtual false, abstract: false, final false
inline bool get_canRunInBackground() ;

/// @brief Method get_description, addr 0xaf5b060, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputDeviceDescription get_description() ;

/// @brief Method get_deviceId, addr 0xaf5b220, size 0x8, virtual false, abstract: false, final false
inline int32_t get_deviceId() ;

/// @brief Method get_disabledInFrontend, addr 0xaf5b92c, size 0xc, virtual false, abstract: false, final false
inline bool get_disabledInFrontend() ;

/// @brief Method get_disabledInRuntime, addr 0xaf5b958, size 0xc, virtual false, abstract: false, final false
inline bool get_disabledInRuntime() ;

/// @brief Method get_disabledWhileInBackground, addr 0xaf5b984, size 0xc, virtual false, abstract: false, final false
inline bool get_disabledWhileInBackground() ;

/// @brief Method get_enabled, addr 0xaf5b07c, size 0x1c, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_hasControlsWithDefaultState, addr 0xaf5b9bc, size 0xc, virtual false, abstract: false, final false
inline bool get_hasControlsWithDefaultState() ;

/// @brief Method get_hasDontResetControls, addr 0xaf5b9c8, size 0xc, virtual false, abstract: false, final false
inline bool get_hasDontResetControls() ;

/// @brief Method get_hasEventMerger, addr 0xaf5b9f4, size 0xc, virtual false, abstract: false, final false
inline bool get_hasEventMerger() ;

/// @brief Method get_hasEventPreProcessor, addr 0xaf5ba20, size 0xc, virtual false, abstract: false, final false
inline bool get_hasEventPreProcessor() ;

/// @brief Method get_hasStateCallbacks, addr 0xaf54ca4, size 0xc, virtual false, abstract: false, final false
inline bool get_hasStateCallbacks() ;

/// @brief Method get_lastUpdateTime, addr 0xaf5b228, size 0x54, virtual false, abstract: false, final false
inline double_t get_lastUpdateTime() ;

/// @brief Method get_native, addr 0xaf5b208, size 0xc, virtual false, abstract: false, final false
inline bool get_native() ;

/// @brief Method get_remote, addr 0xaf5b1fc, size 0xc, virtual false, abstract: false, final false
inline bool get_remote() ;

/// @brief Method get_updateBeforeRender, addr 0xaf5b214, size 0xc, virtual false, abstract: false, final false
inline bool get_updateBeforeRender() ;

/// @brief Method get_valueSizeInBytes, addr 0xaf5b334, size 0x58, virtual true, abstract: false, final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method get_valueType, addr 0xaf5b2d4, size 0x60, virtual true, abstract: false, final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_wasUpdatedThisFrame, addr 0xaf5b27c, size 0x58, virtual false, abstract: false, final false
inline bool get_wasUpdatedThisFrame() ;

/// @brief Method set_disabledInFrontend, addr 0xaf5b938, size 0x20, virtual false, abstract: false, final false
inline void set_disabledInFrontend(bool  value) ;

/// @brief Method set_disabledInRuntime, addr 0xaf5b964, size 0x20, virtual false, abstract: false, final false
inline void set_disabledInRuntime(bool  value) ;

/// @brief Method set_disabledWhileInBackground, addr 0xaf5b990, size 0x20, virtual false, abstract: false, final false
inline void set_disabledWhileInBackground(bool  value) ;

/// @brief Method set_hasControlsWithDefaultState, addr 0xaf56804, size 0x20, virtual false, abstract: false, final false
inline void set_hasControlsWithDefaultState(bool  value) ;

/// @brief Method set_hasDontResetControls, addr 0xaf568fc, size 0x20, virtual false, abstract: false, final false
inline void set_hasDontResetControls(bool  value) ;

/// @brief Method set_hasEventMerger, addr 0xaf5ba00, size 0x20, virtual false, abstract: false, final false
inline void set_hasEventMerger(bool  value) ;

/// @brief Method set_hasEventPreProcessor, addr 0xaf5ba2c, size 0x20, virtual false, abstract: false, final false
inline void set_hasEventPreProcessor(bool  value) ;

/// @brief Method set_hasStateCallbacks, addr 0xaf5b9d4, size 0x20, virtual false, abstract: false, final false
inline void set_hasStateCallbacks(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputDevice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputDevice", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputDevice(InputDevice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputDevice", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputDevice(InputDevice const& ) = delete;

/// @brief Field InvalidDeviceId offset 0xffffffff size 0x4
static constexpr int32_t  InvalidDeviceId{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13451};

/// @brief Field kControlIndexBits offset 0xffffffff size 0x4
static constexpr int32_t  kControlIndexBits{static_cast<int32_t>(0xa)};

/// @brief Field kInvalidDeviceIndex offset 0xffffffff size 0x4
static constexpr int32_t  kInvalidDeviceIndex{static_cast<int32_t>(0xffffffff)};

/// @brief Field kLocalParticipantId offset 0xffffffff size 0x4
static constexpr int32_t  kLocalParticipantId{static_cast<int32_t>(0x0)};

/// @brief Field kStateOffsetBits offset 0xffffffff size 0x4
static constexpr int32_t  kStateOffsetBits{static_cast<int32_t>(0xd)};

/// @brief Field kStateSizeBits offset 0xffffffff size 0x4
static constexpr int32_t  kStateSizeBits{static_cast<int32_t>(0x9)};

/// @brief Field m_DeviceFlags, offset: 0xdc, size: 0x4, def value: None
 ::GlobalNamespace::InputDevice_DeviceFlags  ___m_DeviceFlags;

/// @brief Field m_DeviceId, offset: 0xe0, size: 0x4, def value: None
 int32_t  ___m_DeviceId;

/// @brief Field m_ParticipantId, offset: 0xe4, size: 0x4, def value: None
 int32_t  ___m_ParticipantId;

/// @brief Field m_DeviceIndex, offset: 0xe8, size: 0x4, def value: None
 int32_t  ___m_DeviceIndex;

/// @brief Field m_CurrentProcessedEventBytesOnUpdate, offset: 0xec, size: 0x4, def value: None
 uint32_t  ___m_CurrentProcessedEventBytesOnUpdate;

/// @brief Field m_Description, offset: 0xf0, size: 0x38, def value: None
 ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  ___m_Description;

/// @brief Field m_LastUpdateTimeInternal, offset: 0x128, size: 0x8, def value: None
 double_t  ___m_LastUpdateTimeInternal;

/// @brief Field m_CurrentUpdateStepCount, offset: 0x130, size: 0x4, def value: None
 uint32_t  ___m_CurrentUpdateStepCount;

/// @brief Field m_AliasesForEachControl, offset: 0x138, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>  ___m_AliasesForEachControl;

/// @brief Field m_UsagesForEachControl, offset: 0x140, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>  ___m_UsagesForEachControl;

/// @brief Field m_UsageToControl, offset: 0x148, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputControl*>  ___m_UsageToControl;

/// @brief Field m_ChildrenForEachControl, offset: 0x150, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputControl*>  ___m_ChildrenForEachControl;

/// @brief Field m_UpdatedButtons, offset: 0x158, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___m_UpdatedButtons;

/// @brief Field m_ButtonControlsCheckingPressState, offset: 0x160, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Controls::ButtonControl*>*  ___m_ButtonControlsCheckingPressState;

/// @brief Field m_UseCachePathForButtonPresses, offset: 0x168, size: 0x1, def value: None
 bool  ___m_UseCachePathForButtonPresses;

/// @brief Field m_StateOffsetToControlMap, offset: 0x170, size: 0x8, def value: None
 ::ArrayW<uint32_t>  ___m_StateOffsetToControlMap;

/// @brief Field m_ControlTreeNodes, offset: 0x178, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputDevice_ControlBitRangeNode>  ___m_ControlTreeNodes;

/// @brief Field m_ControlTreeIndices, offset: 0x180, size: 0x8, def value: None
 ::ArrayW<uint16_t>  ___m_ControlTreeIndices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_DeviceFlags) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_DeviceId) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_ParticipantId) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_DeviceIndex) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_CurrentProcessedEventBytesOnUpdate) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_Description) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_LastUpdateTimeInternal) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_CurrentUpdateStepCount) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_AliasesForEachControl) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_UsagesForEachControl) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_UsageToControl) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_ChildrenForEachControl) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_UpdatedButtons) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_ButtonControlsCheckingPressState) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_UseCachePathForButtonPresses) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_StateOffsetToControlMap) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_ControlTreeNodes) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_ControlTreeIndices) == 0x180, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputDevice) == 0x188, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
