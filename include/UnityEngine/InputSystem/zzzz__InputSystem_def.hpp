#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputSystem)
namespace GlobalNamespace {
struct InputSystem_DeltaStateEventBuffer;
}
namespace GlobalNamespace {
struct InputSystem_StateEventBuffer;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
template<typename T>
class IObservable_1;
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
namespace System {
class Version;
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
class InputDeviceCommandDelegate;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventListener;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputMetrics;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
namespace UnityEngine::InputSystem {
class InputAction;
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
class InputManager;
}
namespace UnityEngine::InputSystem {
class InputRemoting;
}
namespace UnityEngine::InputSystem {
class InputSettings;
}
namespace UnityEngine::InputSystem {
class InputSystem___c;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputSystem;
}
namespace UnityEngine::InputSystem {
class InputSystem___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::InputSystem*);
MARK_REF_T(::UnityEngine::InputSystem::InputSystem___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputSystem*, "UnityEngine.InputSystem", "InputSystem");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputSystem___c*, "UnityEngine.InputSystem", "InputSystem/<>c");
// Dependencies System.Object, Unity.Profiling.ProfilerMarker, UnityEngine.InputSystem.InputControl, UnityEngine.InputSystem.InputDevice, UnityEngine.InputSystem.LowLevel.IInputEventTypeInfo, UnityEngine.InputSystem.LowLevel.IInputStateTypeInfo
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputSystem
class CORDL_TYPE InputSystem : public ::System::Object {
public:
// Declarations
using DeltaStateEventBuffer = ::GlobalNamespace::InputSystem_DeltaStateEventBuffer;

using StateEventBuffer = ::GlobalNamespace::InputSystem_StateEventBuffer;

using __c = ::UnityEngine::InputSystem::InputSystem___c;

/// @brief Field k_InputResetMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputResetMarker, put=setStaticF_k_InputResetMarker)) ::Unity::Profiling::ProfilerMarker  k_InputResetMarker;

/// @brief Field s_Manager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Manager, put=setStaticF_s_Manager)) ::UnityEngine::InputSystem::InputManager*  s_Manager;

/// @brief Field s_Remote, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Remote, put=setStaticF_s_Remote)) ::UnityEngine::InputSystem::InputRemoting*  s_Remote;

/// @brief Method AddDevice, addr 0xaf4dfe0, size 0xfc, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description) ;

/// @brief Method AddDevice, addr 0xaf4dee0, size 0x100, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::StringW  layout, ::StringW  name, ::StringW  variants) ;

/// @brief Method AddDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
requires(::cordl_internals::type_constraint<TDevice, ::UnityEngine::InputSystem::InputDevice*>)
static inline TDevice AddDevice(::StringW  name) ;

/// @brief Method AddDevice, addr 0xaf4e0dc, size 0xb8, virtual false, abstract: false, final false
static inline void AddDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method AddDeviceUsage, addr 0xaf4ee74, size 0xa0, virtual false, abstract: false, final false
static inline void AddDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::StringW  usage) ;

/// @brief Method AddDeviceUsage, addr 0xaf4ef14, size 0x84, virtual false, abstract: false, final false
static inline void AddDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method DisableActions, addr 0xaf5046c, size 0xc0, virtual false, abstract: false, final false
static inline void DisableActions(bool  triggerSetupChanged) ;

/// @brief Method DisableAllEnabledActions, addr 0xaf50dfc, size 0x50, virtual false, abstract: false, final false
static inline void DisableAllEnabledActions() ;

/// @brief Method DisableDevice, addr 0xaf4e6b8, size 0x80, virtual false, abstract: false, final false
static inline void DisableDevice(::UnityEngine::InputSystem::InputDevice*  device, bool  keepSendingEvents) ;

/// @brief Method EnableActions, addr 0xaf50348, size 0xbc, virtual false, abstract: false, final false
static inline void EnableActions() ;

/// @brief Method EnableDevice, addr 0xaf4e644, size 0x74, virtual false, abstract: false, final false
static inline void EnableDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method EnsureInitialized, addr 0xaf4a024, size 0x4, virtual false, abstract: false, final false
static inline void EnsureInitialized() ;

/// @brief Method FindControl, addr 0xaf4f0bc, size 0x13c, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputControl* FindControl(::StringW  path) ;

/// @brief Method FindControls, addr 0xaf4f1f8, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> FindControls(::StringW  path) ;

/// @brief Method FindControls, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
static inline ::UnityEngine::InputSystem::InputControlList_1<TControl> FindControls(::StringW  path) ;

/// @brief Method FindControls, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
static inline int32_t FindControls(::StringW  path, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<TControl>>  controls) ;

/// @brief Method FlushDisconnectedDevices, addr 0xaf4e204, size 0x64, virtual false, abstract: false, final false
static inline void FlushDisconnectedDevices() ;

/// @brief Method GetDevice, addr 0xaf4e268, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputDevice* GetDevice(::StringW  nameOrLayout) ;

/// @brief Method GetDevice, addr 0xaf4e2d4, size 0x1fc, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputDevice* GetDevice(::System::Type*  type) ;

/// @brief Method GetDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
requires(::cordl_internals::type_constraint<TDevice, ::UnityEngine::InputSystem::InputDevice*>)
static inline TDevice GetDevice() ;

/// @brief Method GetDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
requires(::cordl_internals::type_constraint<TDevice, ::UnityEngine::InputSystem::InputDevice*>)
static inline TDevice GetDevice(::StringW  usage) ;

/// @brief Method GetDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
requires(::cordl_internals::type_constraint<TDevice, ::UnityEngine::InputSystem::InputDevice*>)
static inline TDevice GetDevice(::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method GetDeviceById, addr 0xaf4e4d0, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputDevice* GetDeviceById(int32_t  deviceId) ;

/// @brief Method GetNameOfBaseLayout, addr 0xaf4cd48, size 0x118, virtual false, abstract: false, final false
static inline ::StringW GetNameOfBaseLayout(::StringW  layoutName) ;

/// @brief Method GetUnsupportedDevices, addr 0xaf4e53c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* GetUnsupportedDevices() ;

/// @brief Method GetUnsupportedDevices, addr 0xaf4e5d8, size 0x6c, virtual false, abstract: false, final false
static inline int32_t GetUnsupportedDevices(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*  descriptions) ;

/// @brief Method InitializeInPlayer, addr 0xaf513d0, size 0x1a0, virtual false, abstract: false, final false
static inline void InitializeInPlayer(::UnityEngine::InputSystem::LowLevel::IInputRuntime*  runtime, ::UnityEngine::InputSystem::InputSettings*  settings) ;

/// @brief Method IsFirstLayoutBasedOnSecond, addr 0xaf4ce60, size 0x148, virtual false, abstract: false, final false
static inline bool IsFirstLayoutBasedOnSecond(::StringW  firstLayoutName, ::StringW  secondLayoutName) ;

/// @brief Method ListEnabledActions, addr 0xaf50e4c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>* ListEnabledActions() ;

/// @brief Method ListEnabledActions, addr 0xaf50ee8, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ListEnabledActions(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*  actions) ;

/// @brief Method ListInteractions, addr 0xaf50b30, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* ListInteractions() ;

/// @brief Method ListLayouts, addr 0xaf4cb34, size 0x68, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* ListLayouts() ;

/// @brief Method ListLayoutsBasedOn, addr 0xaf4cb9c, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* ListLayoutsBasedOn(::StringW  baseLayout) ;

/// @brief Method ListProcessors, addr 0xaf4d440, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* ListProcessors() ;

/// @brief Method LoadLayout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* LoadLayout() ;

/// @brief Method LoadLayout, addr 0xaf4cc60, size 0xe8, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* LoadLayout(::StringW  name) ;

/// @brief Method PauseHaptics, addr 0xaf4e9d4, size 0x130, virtual false, abstract: false, final false
static inline void PauseHaptics() ;

/// @brief Method PerformDefaultPluginInitialization, addr 0xaf515ec, size 0x38, virtual false, abstract: false, final false
static inline void PerformDefaultPluginInitialization() ;

/// @brief Method QueueConfigChangeEvent, addr 0xaf4f5e8, size 0x230, virtual false, abstract: false, final false
static inline void QueueConfigChangeEvent(::UnityEngine::InputSystem::InputDevice*  device, double_t  time) ;

/// @brief Method QueueDeltaStateEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDelta>
requires(::cordl_internals::value_type_constraint<TDelta> && ::cordl_internals::default_constructor_constraint<TDelta>)
static inline void QueueDeltaStateEvent(::UnityEngine::InputSystem::InputControl*  control, TDelta  delta, double_t  time) ;

/// @brief Method QueueEvent, addr 0xaf4f50c, size 0xdc, virtual false, abstract: false, final false
static inline void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// @brief Method QueueEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEvent>
requires(::cordl_internals::type_constraint<TEvent, ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*> && ::cordl_internals::value_type_constraint<TEvent> && ::cordl_internals::default_constructor_constraint<TEvent>)
static inline void QueueEvent(::by_ref<TEvent>  inputEvent) ;

/// @brief Method QueueStateEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TState>
requires(::cordl_internals::type_constraint<TState, ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState>)
static inline void QueueStateEvent(::UnityEngine::InputSystem::InputDevice*  device, TState  state, double_t  time) ;

/// @brief Method QueueTextEvent, addr 0xaf4f818, size 0x240, virtual false, abstract: false, final false
static inline void QueueTextEvent(::UnityEngine::InputSystem::InputDevice*  device, char16_t  character, double_t  time) ;

/// @brief Method RegisterBindingComposite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RegisterBindingComposite(::StringW  name) ;

/// @brief Method RegisterBindingComposite, addr 0xaf50ba8, size 0x17c, virtual false, abstract: false, final false
static inline void RegisterBindingComposite(::System::Type*  type, ::StringW  name) ;

/// @brief Method RegisterInteraction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RegisterInteraction(::StringW  name) ;

/// @brief Method RegisterInteraction, addr 0xaf508dc, size 0x17c, virtual false, abstract: false, final false
static inline void RegisterInteraction(::System::Type*  type, ::StringW  name) ;

/// @brief Method RegisterLayout, addr 0xaf4c6dc, size 0xfc, virtual false, abstract: false, final false
static inline void RegisterLayout(::StringW  json, ::StringW  name, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>  matches) ;

/// @brief Method RegisterLayout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::InputSystem::InputControl*>)
static inline void RegisterLayout(::StringW  name, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>  matches) ;

/// @brief Method RegisterLayout, addr 0xaf4c548, size 0x194, virtual false, abstract: false, final false
static inline void RegisterLayout(::System::Type*  type, ::StringW  name, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>  matches) ;

/// @brief Method RegisterLayoutBuilder, addr 0xaf4c8d4, size 0x17c, virtual false, abstract: false, final false
static inline void RegisterLayoutBuilder(::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*  buildMethod, ::StringW  name, ::StringW  baseLayout, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>  matches) ;

/// @brief Method RegisterLayoutMatcher, addr 0xaf4c858, size 0x7c, virtual false, abstract: false, final false
static inline void RegisterLayoutMatcher(::StringW  layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher) ;

/// @brief Method RegisterLayoutMatcher, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
requires(::cordl_internals::type_constraint<TDevice, ::UnityEngine::InputSystem::InputDevice*>)
static inline void RegisterLayoutMatcher(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher) ;

/// @brief Method RegisterLayoutOverride, addr 0xaf4c7d8, size 0x80, virtual false, abstract: false, final false
static inline void RegisterLayoutOverride(::StringW  json, ::StringW  name) ;

/// @brief Method RegisterPrecompiledLayout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
requires(::cordl_internals::type_constraint<TDevice, ::UnityEngine::InputSystem::InputDevice*> && ::cordl_internals::default_constructor_constraint<TDevice>)
static inline void RegisterPrecompiledLayout(::StringW  metadata) ;

/// @brief Method RegisterProcessor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RegisterProcessor(::StringW  name) ;

/// @brief Method RegisterProcessor, addr 0xaf4cfa8, size 0x3c0, virtual false, abstract: false, final false
static inline void RegisterProcessor(::System::Type*  type, ::StringW  name) ;

/// @brief Method RemoveDevice, addr 0xaf4e194, size 0x70, virtual false, abstract: false, final false
static inline void RemoveDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method RemoveDeviceUsage, addr 0xaf4ef98, size 0xa0, virtual false, abstract: false, final false
static inline void RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::StringW  usage) ;

/// @brief Method RemoveDeviceUsage, addr 0xaf4f038, size 0x84, virtual false, abstract: false, final false
static inline void RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method RemoveLayout, addr 0xaf4ca50, size 0x6c, virtual false, abstract: false, final false
static inline void RemoveLayout(::StringW  name) ;

/// @brief Method ResetDevice, addr 0xaf4e880, size 0x80, virtual false, abstract: false, final false
static inline void ResetDevice(::UnityEngine::InputSystem::InputDevice*  device, bool  alsoResetDontResetControls) ;

/// @brief Method ResetHaptics, addr 0xaf4ec38, size 0x134, virtual false, abstract: false, final false
static inline void ResetHaptics() ;

/// @brief Method ResumeHaptics, addr 0xaf4eb04, size 0x134, virtual false, abstract: false, final false
static inline void ResumeHaptics() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method RunInitialUpdate, addr 0xaf51624, size 0x50, virtual false, abstract: false, final false
static inline void RunInitialUpdate() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
/// @brief Method RunInitializeInPlayer, addr 0xaf51570, size 0x7c, virtual false, abstract: false, final false
static inline void RunInitializeInPlayer() ;

/// @brief Method SetDeviceUsage, addr 0xaf4ed6c, size 0x84, virtual false, abstract: false, final false
static inline void SetDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::StringW  usage) ;

/// @brief Method SetDeviceUsage, addr 0xaf4edf0, size 0x84, virtual false, abstract: false, final false
static inline void SetDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method TryFindMatchingLayout, addr 0xaf4cabc, size 0x78, virtual false, abstract: false, final false
static inline ::StringW TryFindMatchingLayout(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  deviceDescription) ;

/// @brief Method TryGetBindingComposite, addr 0xaf50d24, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Type* TryGetBindingComposite(::StringW  name) ;

/// @brief Method TryGetInteraction, addr 0xaf50a58, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Type* TryGetInteraction(::StringW  name) ;

/// @brief Method TryGetProcessor, addr 0xaf4d368, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Type* TryGetProcessor(::StringW  name) ;

/// [Obsolete("Use \'ResetDevice\' instead.", false)]
/// @brief Method TryResetDevice, addr 0xaf4e900, size 0x54, virtual false, abstract: false, final false
static inline bool TryResetDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method TrySyncDevice, addr 0xaf4e738, size 0xc8, virtual false, abstract: false, final false
static inline bool TrySyncDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method Update, addr 0xaf4fa58, size 0x64, virtual false, abstract: false, final false
static inline void Update() ;

/// @brief Method Update, addr 0xaf4fabc, size 0x150, virtual false, abstract: false, final false
static inline void Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method add_onActionChange, addr 0xaf50754, size 0xc4, virtual false, abstract: false, final false
static inline void add_onActionChange(::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*  value) ;

/// @brief Method add_onActionsChange, addr 0xaf5067c, size 0x6c, virtual false, abstract: false, final false
static inline void add_onActionsChange(::System::Action*  value) ;

/// @brief Method add_onAfterUpdate, addr 0xaf4fed0, size 0x130, virtual false, abstract: false, final false
static inline void add_onAfterUpdate(::System::Action*  value) ;

/// @brief Method add_onBeforeUpdate, addr 0xaf4fc70, size 0x130, virtual false, abstract: false, final false
static inline void add_onBeforeUpdate(::System::Action*  value) ;

/// @brief Method add_onDeviceChange, addr 0xaf4d5b8, size 0x17c, virtual false, abstract: false, final false
static inline void add_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*  value) ;

/// @brief Method add_onDeviceCommand, addr 0xaf4d8b0, size 0x17c, virtual false, abstract: false, final false
static inline void add_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*  value) ;

/// @brief Method add_onFindLayoutForDevice, addr 0xaf4dba8, size 0x130, virtual false, abstract: false, final false
static inline void add_onFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*  value) ;

/// @brief Method add_onLayoutChange, addr 0xaf4c2e8, size 0x130, virtual false, abstract: false, final false
static inline void add_onLayoutChange(::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*  value) ;

/// @brief Method add_onSettingsChange, addr 0xaf50270, size 0x6c, virtual false, abstract: false, final false
static inline void add_onSettingsChange(::System::Action*  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputResetMarker() ;

static inline ::UnityEngine::InputSystem::InputManager* getStaticF_s_Manager() ;

static inline ::UnityEngine::InputSystem::InputRemoting* getStaticF_s_Remote() ;

/// @brief Method get_actions, addr 0xaf50404, size 0x68, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> get_actions() ;

/// @brief Method get_devices, addr 0xaf4d4b8, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_devices() ;

/// @brief Method get_disconnectedDevices, addr 0xaf4d51c, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_disconnectedDevices() ;

/// @brief Method get_isProcessingEvents, addr 0xaf4f288, size 0x64, virtual false, abstract: false, final false
static inline bool get_isProcessingEvents() ;

/// @brief Method get_metrics, addr 0xaf512bc, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::LowLevel::InputMetrics get_metrics() ;

/// @brief Method get_onAnyButtonPress, addr 0xaf4f2f8, size 0x214, virtual false, abstract: false, final false
static inline ::System::IObservable_1<::UnityEngine::InputSystem::InputControl*>* get_onAnyButtonPress() ;

/// @brief Method get_onEvent, addr 0xaf4f2ec, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::LowLevel::InputEventListener get_onEvent() ;

/// @brief Method get_pollingFrequency, addr 0xaf4de08, size 0x64, virtual false, abstract: false, final false
static inline float_t get_pollingFrequency() ;

/// @brief Method get_remoting, addr 0xaf50f8c, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputRemoting* get_remoting() ;

/// @brief Method get_runInBackground, addr 0xaf51050, size 0xd4, virtual false, abstract: false, final false
static inline bool get_runInBackground() ;

/// @brief Method get_scrollWheelDeltaPerTick, addr 0xaf51200, size 0xbc, virtual false, abstract: false, final false
static inline float_t get_scrollWheelDeltaPerTick() ;

/// @brief Method get_settings, addr 0xaf4fc0c, size 0x64, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::InputSystem::InputSettings> get_settings() ;

/// @brief Method get_version, addr 0xaf50fe4, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Version* get_version() ;

/// @brief Method remove_onActionChange, addr 0xaf50818, size 0xc4, virtual false, abstract: false, final false
static inline void remove_onActionChange(::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*  value) ;

/// @brief Method remove_onActionsChange, addr 0xaf506e8, size 0x6c, virtual false, abstract: false, final false
static inline void remove_onActionsChange(::System::Action*  value) ;

/// @brief Method remove_onAfterUpdate, addr 0xaf50000, size 0x130, virtual false, abstract: false, final false
static inline void remove_onAfterUpdate(::System::Action*  value) ;

/// @brief Method remove_onBeforeUpdate, addr 0xaf4fda0, size 0x130, virtual false, abstract: false, final false
static inline void remove_onBeforeUpdate(::System::Action*  value) ;

/// @brief Method remove_onDeviceChange, addr 0xaf4d734, size 0x17c, virtual false, abstract: false, final false
static inline void remove_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*  value) ;

/// @brief Method remove_onDeviceCommand, addr 0xaf4da2c, size 0x17c, virtual false, abstract: false, final false
static inline void remove_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*  value) ;

/// @brief Method remove_onFindLayoutForDevice, addr 0xaf4dcd8, size 0x130, virtual false, abstract: false, final false
static inline void remove_onFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*  value) ;

/// @brief Method remove_onLayoutChange, addr 0xaf4c418, size 0x130, virtual false, abstract: false, final false
static inline void remove_onLayoutChange(::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*  value) ;

/// @brief Method remove_onSettingsChange, addr 0xaf502dc, size 0x6c, virtual false, abstract: false, final false
static inline void remove_onSettingsChange(::System::Action*  value) ;

static inline void setStaticF_k_InputResetMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_Manager(::UnityEngine::InputSystem::InputManager*  value) ;

static inline void setStaticF_s_Remote(::UnityEngine::InputSystem::InputRemoting*  value) ;

/// @brief Method set_actions, addr 0xaf5052c, size 0x150, virtual false, abstract: false, final false
static inline void set_actions(::UnityEngine::InputSystem::InputActionAsset*  value) ;

/// @brief Method set_onEvent, addr 0xaf4f2f4, size 0x4, virtual false, abstract: false, final false
static inline void set_onEvent(::UnityEngine::InputSystem::LowLevel::InputEventListener  value) ;

/// @brief Method set_pollingFrequency, addr 0xaf4de6c, size 0x74, virtual false, abstract: false, final false
static inline void set_pollingFrequency(float_t  value) ;

/// @brief Method set_runInBackground, addr 0xaf51124, size 0xdc, virtual false, abstract: false, final false
static inline void set_runInBackground(bool  value) ;

/// @brief Method set_settings, addr 0xaf50130, size 0x140, virtual false, abstract: false, final false
static inline void set_settings(::UnityEngine::InputSystem::InputSettings*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputSystem(InputSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputSystem(InputSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13422};

/// @brief Field kAssemblyVersion offset 0xffffffff size 0x8
static constexpr ::ConstString  kAssemblyVersion{u"1.14.2"};

/// @brief Field kDocUrl offset 0xffffffff size 0x8
static constexpr ::ConstString  kDocUrl{u"https://docs.unity3d.com/Packages/com.unity.inputsystem@1.14"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputSystem) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputSystem/<>c
class CORDL_TYPE InputSystem___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::InputSystem___c*  __9;

/// @brief Field <>9__80_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__80_0, put=setStaticF___9__80_0)) ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputControl*>*  __9__80_0;

/// @brief Field <>9__80_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__80_1, put=setStaticF___9__80_1)) ::System::Func_2<::UnityEngine::InputSystem::InputControl*,bool>*  __9__80_1;

static inline ::UnityEngine::InputSystem::InputSystem___c* New_ctor() ;

/// @brief Method .ctor, addr 0xaf516dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_onAnyButtonPress>b__80_0, addr 0xaf516e4, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControl* _get_onAnyButtonPress_b__80_0(::UnityEngine::InputSystem::LowLevel::InputEventPtr  e) ;

/// @brief Method <get_onAnyButtonPress>b__80_1, addr 0xaf51890, size 0xc, virtual false, abstract: false, final false
inline bool _get_onAnyButtonPress_b__80_1(::UnityEngine::InputSystem::InputControl*  c) ;

static inline ::UnityEngine::InputSystem::InputSystem___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputControl*>* getStaticF___9__80_0() ;

static inline ::System::Func_2<::UnityEngine::InputSystem::InputControl*,bool>* getStaticF___9__80_1() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::InputSystem___c*  value) ;

static inline void setStaticF___9__80_0(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputControl*>*  value) ;

static inline void setStaticF___9__80_1(::System::Func_2<::UnityEngine::InputSystem::InputControl*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputSystem___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputSystem___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputSystem___c(InputSystem___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputSystem___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputSystem___c(InputSystem___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13421};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputSystem___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
