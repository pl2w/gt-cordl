#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_InputEventControlEnumerator_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlExtensions)
namespace GlobalNamespace {
struct InputControlExtensions_ControlBuilder;
}
namespace GlobalNamespace {
struct InputControlExtensions_DeviceBuilder;
}
namespace GlobalNamespace {
struct InputControlExtensions_Enumerate;
}
namespace GlobalNamespace {
struct InputControlExtensions_InputEventControlCollection;
}
namespace GlobalNamespace {
struct InputControlExtensions_InputEventControlEnumerator;
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
class IList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem {
class InputControlExtensions__GetAllButtonPresses_d__43;
}
namespace UnityEngine::InputSystem {
template<typename TValue>
class InputControl_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputControlExtensions;
}
namespace UnityEngine::InputSystem {
class InputControlExtensions__GetAllButtonPresses_d__43;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::InputControlExtensions*);
MARK_REF_T(::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputControlExtensions*, "UnityEngine.InputSystem", "InputControlExtensions");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*, "UnityEngine.InputSystem", "InputControlExtensions/<GetAllButtonPresses>d__43");
// [Extension]
// Dependencies System.Object, UnityEngine.InputSystem.InputControl, UnityEngine.InputSystem.LowLevel.IInputStateTypeInfo
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputControlExtensions
class CORDL_TYPE InputControlExtensions : public ::System::Object {
public:
// Declarations
using ControlBuilder = ::GlobalNamespace::InputControlExtensions_ControlBuilder;

using DeviceBuilder = ::GlobalNamespace::InputControlExtensions_DeviceBuilder;

using Enumerate = ::GlobalNamespace::InputControlExtensions_Enumerate;

using InputEventControlCollection = ::GlobalNamespace::InputControlExtensions_InputEventControlCollection;

using InputEventControlEnumerator = ::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator;

using _GetAllButtonPresses_d__43 = ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43;

/// [Extension]
/// @brief Method AccumulateValueInEvent, addr 0xaf54f60, size 0x100, virtual false, abstract: false, final false
static inline void AccumulateValueInEvent(::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2>*  control, void*  currentStatePtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  newState) ;

/// [Extension]
/// @brief Method AccumulateValueInEvent, addr 0xaf54e64, size 0xfc, virtual false, abstract: false, final false
static inline void AccumulateValueInEvent(::UnityEngine::InputSystem::InputControl_1<float_t>*  control, void*  currentStatePtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  newState) ;

/// [Extension]
/// @brief Method BuildPath, addr 0xaf55060, size 0x2d4, virtual false, abstract: false, final false
static inline ::StringW BuildPath(::UnityEngine::InputSystem::InputControl*  control, ::StringW  deviceLayout, ::System::Text::StringBuilder*  builder) ;

/// [Extension]
/// @brief Method CheckStateIsAtDefault, addr 0xaf53c90, size 0x74, virtual false, abstract: false, final false
static inline bool CheckStateIsAtDefault(::UnityEngine::InputSystem::InputControl*  control) ;

/// [Extension]
/// @brief Method CheckStateIsAtDefault, addr 0xaf54328, size 0xd8, virtual false, abstract: false, final false
static inline bool CheckStateIsAtDefault(::UnityEngine::InputSystem::InputControl*  control, void*  statePtr, void*  maskPtr) ;

/// [Extension]
/// @brief Method CheckStateIsAtDefaultIgnoringNoise, addr 0xaf54564, size 0x70, virtual false, abstract: false, final false
static inline bool CheckStateIsAtDefaultIgnoringNoise(::UnityEngine::InputSystem::InputControl*  control) ;

/// [Extension]
/// @brief Method CheckStateIsAtDefaultIgnoringNoise, addr 0xaf545d4, size 0xc8, virtual false, abstract: false, final false
static inline bool CheckStateIsAtDefaultIgnoringNoise(::UnityEngine::InputSystem::InputControl*  control, void*  statePtr) ;

/// [Extension]
/// @brief Method CompareState, addr 0xaf54400, size 0x164, virtual false, abstract: false, final false
static inline bool CompareState(::UnityEngine::InputSystem::InputControl*  control, void*  firstStatePtr, void*  secondStatePtr, void*  maskPtr) ;

/// [Extension]
/// @brief Method CompareState, addr 0xaf54780, size 0xac, virtual false, abstract: false, final false
static inline bool CompareState(::UnityEngine::InputSystem::InputControl*  control, void*  statePtr, void*  maskPtr) ;

/// [Extension]
/// @brief Method CompareStateIgnoringNoise, addr 0xaf5469c, size 0xe4, virtual false, abstract: false, final false
static inline bool CompareStateIgnoringNoise(::UnityEngine::InputSystem::InputControl*  control, void*  statePtr) ;

/// [Extension]
/// @brief Method CopyState, addr 0xaf541a4, size 0x184, virtual false, abstract: false, final false
static inline void CopyState(::UnityEngine::InputSystem::InputDevice*  device, void*  buffer, int32_t  bufferSizeInBytes) ;

/// [Extension]
/// @brief Method CopyState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TState>
requires(::cordl_internals::type_constraint<TState, ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState>)
static inline void CopyState(::UnityEngine::InputSystem::InputDevice*  device, ::by_ref<TState>  state) ;

/// [Extension]
/// @brief Method EnumerateChangedControls, addr 0xaf55554, size 0x38, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputControlExtensions_InputEventControlCollection EnumerateChangedControls(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::UnityEngine::InputSystem::InputDevice*  device, float_t  magnitudeThreshold) ;

/// [Extension]
/// @brief Method EnumerateControls, addr 0xaf55334, size 0x220, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputControlExtensions_InputEventControlCollection EnumerateControls(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::GlobalNamespace::InputControlExtensions_Enumerate  flags, ::UnityEngine::InputSystem::InputDevice*  device, float_t  magnitudeThreshold) ;

/// [Extension]
/// @brief Method FindControlsRecursive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
static inline void FindControlsRecursive(::UnityEngine::InputSystem::InputControl*  parent, ::System::Collections::Generic::IList_1<TControl>*  controls, ::System::Func_2<TControl,bool>*  predicate) ;

/// [Extension]
/// @brief Method FindInParentChain, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
static inline TControl FindInParentChain(::UnityEngine::InputSystem::InputControl*  control) ;

/// [IteratorStateMachine(typeof(UnityEngine.InputSystem.InputControlExtensions::<GetAllButtonPresses>d__43))]
/// [Extension]
/// @brief Method GetAllButtonPresses, addr 0xaf55994, size 0x94, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* GetAllButtonPresses(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, float_t  magnitude, bool  buttonControlsOnly) ;

/// [Extension]
/// @brief Method GetFirstButtonPressOrNull, addr 0xaf516f4, size 0x19c, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputControl* GetFirstButtonPressOrNull(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, float_t  magnitude, bool  buttonControlsOnly) ;

/// [Extension]
/// @brief Method GetStatePtrFromStateEvent, addr 0xaf53edc, size 0xb8, virtual false, abstract: false, final false
static inline void* GetStatePtrFromStateEvent(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// [Extension]
/// @brief Method GetStatePtrFromStateEventUnchecked, addr 0xaf549b0, size 0x2f4, virtual false, abstract: false, final false
static inline void* GetStatePtrFromStateEventUnchecked(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::UnityEngine::InputSystem::Utilities::FourCC  eventType) ;

/// [Extension]
/// @brief Method HasButtonPress, addr 0xaf5558c, size 0x18, virtual false, abstract: false, final false
static inline bool HasButtonPress(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, float_t  magnitude, bool  buttonControlsOnly) ;

/// [Extension]
/// @brief Method HasValueChangeInEvent, addr 0xaf548d8, size 0xd8, virtual false, abstract: false, final false
static inline bool HasValueChangeInEvent(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// [Extension]
/// @brief Method HasValueChangeInState, addr 0xaf5482c, size 0xac, virtual false, abstract: false, final false
static inline bool HasValueChangeInState(::UnityEngine::InputSystem::InputControl*  control, void*  statePtr) ;

/// [Extension]
/// @brief Method IsActuated, addr 0xaf53b68, size 0x128, virtual false, abstract: false, final false
static inline bool IsActuated(::UnityEngine::InputSystem::InputControl*  control, float_t  threshold) ;

/// [Extension]
/// @brief Method IsPressed, addr 0xaf53a24, size 0x144, virtual false, abstract: false, final false
static inline bool IsPressed(::UnityEngine::InputSystem::InputControl*  control, float_t  buttonPressPoint) ;

/// [Extension]
/// @brief Method QueueValueChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
static inline void QueueValueChange(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, TValue  value, double_t  time) ;

/// [Extension]
/// @brief Method ReadDefaultValueAsObject, addr 0xaf53db8, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Object* ReadDefaultValueAsObject(::UnityEngine::InputSystem::InputControl*  control) ;

/// [Extension]
/// @brief Method ReadUnprocessedValueFromEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
static inline TValue ReadUnprocessedValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// [Extension]
/// @brief Method ReadUnprocessedValueFromEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
static inline bool ReadUnprocessedValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  inputEvent, ::by_ref<TValue>  value) ;

/// [Extension]
/// @brief Method ReadValueAsObject, addr 0xaf527f4, size 0x78, virtual false, abstract: false, final false
static inline ::System::Object* ReadValueAsObject(::UnityEngine::InputSystem::InputControl*  control) ;

/// [Extension]
/// @brief Method ReadValueFromEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
static inline TValue ReadValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  inputEvent) ;

/// [Extension]
/// @brief Method ReadValueFromEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
static inline bool ReadValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  inputEvent, ::by_ref<TValue>  value) ;

/// [Extension]
/// @brief Method ReadValueFromEventAsObject, addr 0xaf53e5c, size 0x80, virtual false, abstract: false, final false
static inline ::System::Object* ReadValueFromEventAsObject(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  inputEvent) ;

/// [Extension]
/// @brief Method ReadValueIntoBuffer, addr 0xaf53d04, size 0xb4, virtual false, abstract: false, final false
static inline void ReadValueIntoBuffer(::UnityEngine::InputSystem::InputControl*  control, void*  buffer, int32_t  bufferSize) ;

/// [Extension]
/// @brief Method ResetToDefaultStateInEvent, addr 0xaf54cb0, size 0x1b4, virtual false, abstract: false, final false
static inline bool ResetToDefaultStateInEvent(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// [Extension]
/// @brief Method Setup, addr 0xaf55a5c, size 0xd8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputControlExtensions_ControlBuilder Setup(::UnityEngine::InputSystem::InputControl*  control) ;

/// [Extension]
/// @brief Method Setup, addr 0xaf55b34, size 0x23c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder Setup(::UnityEngine::InputSystem::InputDevice*  device, int32_t  controlCount, int32_t  usageCount, int32_t  aliasCount) ;

/// [Extension]
/// @brief Method WriteValueFromObjectIntoEvent, addr 0xaf53f94, size 0x90, virtual false, abstract: false, final false
static inline void WriteValueFromObjectIntoEvent(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::System::Object*  value) ;

/// [Extension]
/// @brief Method WriteValueIntoEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
static inline void WriteValueIntoEvent(::UnityEngine::InputSystem::InputControl*  control, TValue  value, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// [Extension]
/// @brief Method WriteValueIntoEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
static inline void WriteValueIntoEvent(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, TValue  value, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// [Extension]
/// @brief Method WriteValueIntoState, addr 0xaf54024, size 0x180, virtual false, abstract: false, final false
static inline void WriteValueIntoState(::UnityEngine::InputSystem::InputControl*  control, void*  statePtr) ;

/// [Extension]
/// @brief Method WriteValueIntoState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
static inline void WriteValueIntoState(::UnityEngine::InputSystem::InputControl*  control, TValue  value, void*  statePtr) ;

/// [Extension]
/// @brief Method WriteValueIntoState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
static inline void WriteValueIntoState(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, void*  statePtr) ;

/// [Extension]
/// @brief Method WriteValueIntoState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue,typename TState>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue> && ::cordl_internals::type_constraint<TState, ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState>)
static inline void WriteValueIntoState(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, TValue  value, ::by_ref<TState>  state) ;

/// [Extension]
/// @brief Method WriteValueIntoState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
static inline void WriteValueIntoState(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, TValue  value, void*  statePtr) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputControlExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputControlExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControlExtensions(InputControlExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControlExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControlExtensions(InputControlExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13433};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputControlExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.InputSystem.InputControlExtensions::InputEventControlEnumerator, UnityEngine.InputSystem.LowLevel.InputEventPtr
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43
class CORDL_TYPE InputControlExtensions__GetAllButtonPresses_d__43 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current)) ::UnityEngine::InputSystem::InputControl*  System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityEngine::InputSystem::InputControl*  __2__current;

/// @brief Field <>3__buttonControlsOnly, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get___3__buttonControlsOnly, put=__cordl_internal_set___3__buttonControlsOnly)) bool  __3__buttonControlsOnly;

/// @brief Field <>3__eventPtr, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__eventPtr, put=__cordl_internal_set___3__eventPtr)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr  __3__eventPtr;

/// @brief Field <>3__magnitude, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get___3__magnitude, put=__cordl_internal_set___3__magnitude)) float_t  __3__magnitude;

/// @brief Field <>7__wrap1, offset 0x48, size 0x70 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator  __7__wrap1;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field buttonControlsOnly, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_buttonControlsOnly, put=__cordl_internal_set_buttonControlsOnly)) bool  buttonControlsOnly;

/// @brief Field eventPtr, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventPtr, put=__cordl_internal_set_eventPtr)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr;

/// @brief Field magnitude, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_magnitude, put=__cordl_internal_set_magnitude)) float_t  magnitude;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xaf57080, size 0x254, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator, addr 0xaf5732c, size 0xac, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControl>.get_Current, addr 0xaf572e4, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::InputControl* System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xaf573d8, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xaf572ec, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xaf57324, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xaf5705c, size 0x24, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityEngine::InputSystem::InputControl* const& __cordl_internal_get___2__current() const;

constexpr ::UnityEngine::InputSystem::InputControl*& __cordl_internal_get___2__current() ;

constexpr bool const& __cordl_internal_get___3__buttonControlsOnly() const;

constexpr bool& __cordl_internal_get___3__buttonControlsOnly() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& __cordl_internal_get___3__eventPtr() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& __cordl_internal_get___3__eventPtr() ;

constexpr float_t const& __cordl_internal_get___3__magnitude() const;

constexpr float_t& __cordl_internal_get___3__magnitude() ;

constexpr ::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr bool const& __cordl_internal_get_buttonControlsOnly() const;

constexpr bool& __cordl_internal_get_buttonControlsOnly() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& __cordl_internal_get_eventPtr() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& __cordl_internal_get_eventPtr() ;

constexpr float_t const& __cordl_internal_get_magnitude() const;

constexpr float_t& __cordl_internal_get_magnitude() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityEngine::InputSystem::InputControl*  value) ;

constexpr void __cordl_internal_set___3__buttonControlsOnly(bool  value) ;

constexpr void __cordl_internal_set___3__eventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr  value) ;

constexpr void __cordl_internal_set___3__magnitude(float_t  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_buttonControlsOnly(bool  value) ;

constexpr void __cordl_internal_set_eventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr  value) ;

constexpr void __cordl_internal_set_magnitude(float_t  value) ;

/// @brief Method <>m__Finally1, addr 0xaf572d4, size 0x10, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xaf55a28, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputControl__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputControl__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputControlExtensions__GetAllButtonPresses_d__43() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputControlExtensions__GetAllButtonPresses_d__43", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControlExtensions__GetAllButtonPresses_d__43(InputControlExtensions__GetAllButtonPresses_d__43 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControlExtensions__GetAllButtonPresses_d__43", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControlExtensions__GetAllButtonPresses_d__43(InputControlExtensions__GetAllButtonPresses_d__43 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13432};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputControl*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field eventPtr, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputEventPtr  ___eventPtr;

/// @brief Field <>3__eventPtr, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputEventPtr  _____3__eventPtr;

/// @brief Field magnitude, offset: 0x38, size: 0x4, def value: None
 float_t  ___magnitude;

/// @brief Field <>3__magnitude, offset: 0x3c, size: 0x4, def value: None
 float_t  _____3__magnitude;

/// @brief Field buttonControlsOnly, offset: 0x40, size: 0x1, def value: None
 bool  ___buttonControlsOnly;

/// @brief Field <>3__buttonControlsOnly, offset: 0x41, size: 0x1, def value: None
 bool  _____3__buttonControlsOnly;

/// @brief Field <>7__wrap1, offset: 0x48, size: 0x70, def value: None
 ::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43, ___eventPtr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43, _____3__eventPtr) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43, ___magnitude) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43, _____3__magnitude) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43, ___buttonControlsOnly) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43, _____3__buttonControlsOnly) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43, _____7__wrap1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43) == 0xb8, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
