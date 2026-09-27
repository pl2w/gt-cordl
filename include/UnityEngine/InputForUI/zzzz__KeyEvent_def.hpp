#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/KeyEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_ButtonsState_def.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_Type_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyEvent)
namespace GlobalNamespace {
struct KeyEvent_ButtonsState;
}
namespace GlobalNamespace {
struct KeyEvent_Type;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::IntegerTime {
struct DiscreteTime;
}
namespace UnityEngine::InputForUI {
struct EventModifiers;
}
namespace UnityEngine::InputForUI {
struct EventSource;
}
namespace UnityEngine::InputForUI {
class IEventProperties;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
class ButtonsState_KeyEvent__GetAllPressed_d__8;
}
namespace UnityEngine::InputForUI {
struct KeyEvent;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*);
MARK_VAL_T(::UnityEngine::InputForUI::KeyEvent);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*, "UnityEngine.InputForUI", "KeyEvent/ButtonsState/<GetAllPressed>d__8");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputForUI::KeyEvent, "UnityEngine.InputForUI", "KeyEvent");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies Unity.IntegerTime.DiscreteTime, UnityEngine.InputForUI.EventModifiers, UnityEngine.InputForUI.EventSource, UnityEngine.InputForUI.KeyEvent::ButtonsState, UnityEngine.InputForUI.KeyEvent::Type, UnityEngine.KeyCode
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.KeyEvent
struct CORDL_TYPE KeyEvent {
public:
// Declarations
using ButtonsState = ::GlobalNamespace::KeyEvent_ButtonsState;

using Type = ::GlobalNamespace::KeyEvent_Type;

 __declspec(property(get=get_eventModifiers, put=set_eventModifiers)) ::UnityEngine::InputForUI::EventModifiers  eventModifiers;

 __declspec(property(get=get_eventSource, put=set_eventSource)) ::UnityEngine::InputForUI::EventSource  eventSource;

 __declspec(property(put=set_playerId)) uint32_t  playerId;

 __declspec(property(put=set_timestamp)) ::Unity::IntegerTime::DiscreteTime  timestamp;

/// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
constexpr operator  ::UnityEngine::InputForUI::IEventProperties*() ;

/// @brief Method ToString, addr 0xb65e408, size 0x198, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_eventModifiers, addr 0xb65e3f8, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::InputForUI::EventModifiers get_eventModifiers() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_eventSource, addr 0xb65e3e0, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::InputForUI::EventSource get_eventSource() ;

/// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
constexpr ::UnityEngine::InputForUI::IEventProperties* i___UnityEngine__InputForUI__IEventProperties() ;

/// [CompilerGenerated]
/// @brief Method set_eventModifiers, addr 0xb65e400, size 0x8, virtual false, abstract: false, final false
inline void set_eventModifiers(::UnityEngine::InputForUI::EventModifiers  value) ;

/// [CompilerGenerated]
/// @brief Method set_eventSource, addr 0xb65e3e8, size 0x8, virtual false, abstract: false, final false
inline void set_eventSource(::UnityEngine::InputForUI::EventSource  value) ;

/// [CompilerGenerated]
/// @brief Method set_playerId, addr 0xb65e3f0, size 0x8, virtual false, abstract: false, final false
inline void set_playerId(uint32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_timestamp, addr 0xb65e3d8, size 0x8, virtual false, abstract: false, final false
inline void set_timestamp(::Unity::IntegerTime::DiscreteTime  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr KeyEvent() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::KeyEvent_Type", modifiers: "", def_value: None, comment: None }, CppParam { name: "keyCode", ty: "::UnityEngine::KeyCode", modifiers: "", def_value: None, comment: None }, CppParam { name: "buttonsState", ty: "::GlobalNamespace::KeyEvent_ButtonsState", modifiers: "", def_value: None, comment: None }, CppParam { name: "_timestamp_k__BackingField", ty: "::Unity::IntegerTime::DiscreteTime", modifiers: "", def_value: None, comment: None }, CppParam { name: "_eventSource_k__BackingField", ty: "::UnityEngine::InputForUI::EventSource", modifiers: "", def_value: None, comment: None }, CppParam { name: "_playerId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_eventModifiers_k__BackingField", ty: "::UnityEngine::InputForUI::EventModifiers", modifiers: "", def_value: None, comment: None }]
constexpr KeyEvent(::GlobalNamespace::KeyEvent_Type  type, ::UnityEngine::KeyCode  keyCode, ::GlobalNamespace::KeyEvent_ButtonsState  buttonsState, ::Unity::IntegerTime::DiscreteTime  _timestamp_k__BackingField, ::UnityEngine::InputForUI::EventSource  _eventSource_k__BackingField, uint32_t  _playerId_k__BackingField, ::UnityEngine::InputForUI::EventModifiers  _eventModifiers_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31870};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::KeyEvent_Type  type;

/// @brief Field keyCode, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::KeyCode  keyCode;

/// @brief Field buttonsState, offset: 0x8, size: 0x28, def value: None
 ::GlobalNamespace::KeyEvent_ButtonsState  buttonsState;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <timestamp>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Unity::IntegerTime::DiscreteTime  _timestamp_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <eventSource>k__BackingField, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::InputForUI::EventSource  _eventSource_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <playerId>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 uint32_t  _playerId_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <eventModifiers>k__BackingField, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::InputForUI::EventModifiers  _eventModifiers_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::KeyEvent, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::KeyEvent, keyCode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::KeyEvent, buttonsState) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::KeyEvent, _timestamp_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::KeyEvent, _eventSource_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::KeyEvent, _playerId_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::KeyEvent, _eventModifiers_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputForUI::KeyEvent) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::InputForUI
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.InputForUI.KeyEvent::ButtonsState, UnityEngine.KeyCode
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.KeyEvent/ButtonsState/<GetAllPressed>d__8
class CORDL_TYPE ButtonsState_KeyEvent__GetAllPressed_d__8 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_KeyCode__get_Current)) ::UnityEngine::KeyCode  System_Collections_Generic_IEnumerator_UnityEngine_KeyCode__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityEngine::KeyCode  __2__current;

/// @brief Field <>3__<>4__this, offset 0x44, size 0x28 
 __declspec(property(get=__cordl_internal_get___3____4__this, put=__cordl_internal_set___3____4__this)) ::GlobalNamespace::KeyEvent_ButtonsState  __3____4__this;

/// @brief Field <>4__this, offset 0x1c, size 0x28 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::GlobalNamespace::KeyEvent_ButtonsState  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <index>5__1, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__index_5__1, put=__cordl_internal_set__index_5__1)) uint32_t  _index_5__1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb65e910, size 0x74, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.KeyCode>.GetEnumerator, addr 0xb65ea20, size 0xac, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>* System_Collections_Generic_IEnumerable_UnityEngine_KeyCode__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.KeyCode>.get_Current, addr 0xb65e984, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::KeyCode System_Collections_Generic_IEnumerator_UnityEngine_KeyCode__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb65eacc, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb65e98c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb65e9c4, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb65e90c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityEngine::KeyCode const& __cordl_internal_get___2__current() const;

constexpr ::UnityEngine::KeyCode& __cordl_internal_get___2__current() ;

constexpr ::GlobalNamespace::KeyEvent_ButtonsState const& __cordl_internal_get___3____4__this() const;

constexpr ::GlobalNamespace::KeyEvent_ButtonsState& __cordl_internal_get___3____4__this() ;

constexpr ::GlobalNamespace::KeyEvent_ButtonsState const& __cordl_internal_get___4__this() const;

constexpr ::GlobalNamespace::KeyEvent_ButtonsState& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr uint32_t const& __cordl_internal_get__index_5__1() const;

constexpr uint32_t& __cordl_internal_get__index_5__1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityEngine::KeyCode  value) ;

constexpr void __cordl_internal_set___3____4__this(::GlobalNamespace::KeyEvent_ButtonsState  value) ;

constexpr void __cordl_internal_set___4__this(::GlobalNamespace::KeyEvent_ButtonsState  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__index_5__1(uint32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb65e6c0, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__KeyCode_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__KeyCode_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ButtonsState_KeyEvent__GetAllPressed_d__8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ButtonsState_KeyEvent__GetAllPressed_d__8", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ButtonsState_KeyEvent__GetAllPressed_d__8(ButtonsState_KeyEvent__GetAllPressed_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ButtonsState_KeyEvent__GetAllPressed_d__8", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ButtonsState_KeyEvent__GetAllPressed_d__8(ButtonsState_KeyEvent__GetAllPressed_d__8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31867};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::KeyCode  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x1c, size: 0x28, def value: None
 ::GlobalNamespace::KeyEvent_ButtonsState  _____4__this;

/// @brief Field <>3__<>4__this, offset: 0x44, size: 0x28, def value: None
 ::GlobalNamespace::KeyEvent_ButtonsState  _____3____4__this;

/// @brief Field <index>5__1, offset: 0x6c, size: 0x4, def value: None
 uint32_t  ____index_5__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8, _____4__this) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8, _____3____4__this) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8, ____index_5__1) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8) == 0x70, "Size mismatch!");

} // namespace end def UnityEngine::InputForUI
