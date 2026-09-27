#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/AlarmClocks/AlarmClock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AlarmClock)
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GorillaTagScripts::Subscription::AlarmClocks {
class AlarmClock__ActivateCoroutine_d__23;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
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
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTagScripts::Subscription::AlarmClocks {
class AlarmClock;
}
namespace GorillaTagScripts::Subscription::AlarmClocks {
class AlarmClock__ActivateCoroutine_d__23;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*);
MARK_REF_T(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*, "GorillaTagScripts.Subscription.AlarmClocks", "AlarmClock");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23*, "GorillaTagScripts.Subscription.AlarmClocks", "AlarmClock/<ActivateCoroutine>d__23");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Subscription::AlarmClocks {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.AlarmClocks.AlarmClock
class CORDL_TYPE AlarmClock : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _ActivateCoroutine_d__23 = ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23;

 __declspec(property(get=get_Initialized, put=set_Initialized)) bool  Initialized;

 __declspec(property(get=get_IsVIMOnly)) bool  IsVIMOnly;

 __declspec(property(get=get_Key)) ::StringW  Key;

/// @brief Field OnActivate, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnActivate, put=__cordl_internal_set_OnActivate)) ::UnityEngine::Events::UnityEvent*  OnActivate;

/// @brief Field OnDeactivate, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDeactivate, put=__cordl_internal_set_OnDeactivate)) ::UnityEngine::Events::UnityEvent*  OnDeactivate;

 __declspec(property(get=get_ShouldBePressable)) bool  ShouldBePressable;

/// @brief Field <Initialized>k__BackingField, offset 0x5e, size 0x1 
 __declspec(property(get=__cordl_internal_get__Initialized_k__BackingField, put=__cordl_internal_set__Initialized_k__BackingField)) bool  _Initialized_k__BackingField;

/// @brief Field _VIMLabel, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__VIMLabel, put=__cordl_internal_set__VIMLabel)) ::UnityW<::UnityEngine::GameObject>  _VIMLabel;

/// @brief Field _alarmClockOff, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__alarmClockOff, put=__cordl_internal_set__alarmClockOff)) ::UnityW<::UnityEngine::GameObject>  _alarmClockOff;

/// @brief Field _button, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  _button;

/// @brief Field _isVIMOnly, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isVIMOnly, put=__cordl_internal_set__isVIMOnly)) bool  _isVIMOnly;

/// @brief Field _key, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__key, put=__cordl_internal_set__key)) ::StringW  _key;

/// @brief Field _lastTouchTime, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastTouchTime, put=__cordl_internal_set__lastTouchTime)) float_t  _lastTouchTime;

/// @brief Field _offTime, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__offTime, put=__cordl_internal_set__offTime)) float_t  _offTime;

/// @brief Field _onTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__onTime, put=__cordl_internal_set__onTime)) float_t  _onTime;

/// @brief Field _vim_only_fetched, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get__vim_only_fetched, put=__cordl_internal_set__vim_only_fetched)) bool  _vim_only_fetched;

/// [IteratorStateMachine(typeof(GorillaTagScripts.Subscription.AlarmClocks.AlarmClock::<ActivateCoroutine>d__23))]
/// @brief Method ActivateCoroutine, addr 0x5c0f3bc, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ActivateCoroutine() ;

static inline ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock* New_ctor() ;

/// @brief Method OnActivateCallback, addr 0x5c0f638, size 0x58, virtual false, abstract: false, final false
inline void OnActivateCallback() ;

/// @brief Method OnButtonPressed, addr 0x5c0f584, size 0x58, virtual false, abstract: false, final false
inline void OnButtonPressed() ;

/// @brief Method OnDeactivateCallback, addr 0x5c0f690, size 0x80, virtual false, abstract: false, final false
inline void OnDeactivateCallback() ;

/// @brief Method OnDisable, addr 0x5c0f450, size 0x134, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c0f27c, size 0x140, virtual false, abstract: false, final false
inline void OnEnable() ;

/// [ContextMenu("Set Alarm Clock")]
/// @brief Method ToggleAlarmClock, addr 0x5c0f5dc, size 0x4, virtual false, abstract: false, final false
inline void ToggleAlarmClock() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnActivate() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnActivate() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnDeactivate() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnDeactivate() ;

constexpr bool const& __cordl_internal_get__Initialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__Initialized_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__VIMLabel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__VIMLabel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__alarmClockOff() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__alarmClockOff() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get__button() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get__button() ;

constexpr bool const& __cordl_internal_get__isVIMOnly() const;

constexpr bool& __cordl_internal_get__isVIMOnly() ;

constexpr ::StringW const& __cordl_internal_get__key() const;

constexpr ::StringW& __cordl_internal_get__key() ;

constexpr float_t const& __cordl_internal_get__lastTouchTime() const;

constexpr float_t& __cordl_internal_get__lastTouchTime() ;

constexpr float_t const& __cordl_internal_get__offTime() const;

constexpr float_t& __cordl_internal_get__offTime() ;

constexpr float_t const& __cordl_internal_get__onTime() const;

constexpr float_t& __cordl_internal_get__onTime() ;

constexpr bool const& __cordl_internal_get__vim_only_fetched() const;

constexpr bool& __cordl_internal_get__vim_only_fetched() ;

constexpr void __cordl_internal_set_OnActivate(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnDeactivate(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__Initialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__VIMLabel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__alarmClockOff(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__button(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set__isVIMOnly(bool  value) ;

constexpr void __cordl_internal_set__key(::StringW  value) ;

constexpr void __cordl_internal_set__lastTouchTime(float_t  value) ;

constexpr void __cordl_internal_set__offTime(float_t  value) ;

constexpr void __cordl_internal_set__onTime(float_t  value) ;

constexpr void __cordl_internal_set__vim_only_fetched(bool  value) ;

/// @brief Method .ctor, addr 0x5c0f710, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Initialized, addr 0x5c0f0ac, size 0x8, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_IsVIMOnly, addr 0x5c0f0bc, size 0x44, virtual false, abstract: false, final false
inline bool get_IsVIMOnly() ;

/// @brief Method get_Key, addr 0x5c0f0a4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_ShouldBePressable, addr 0x5c0f1ec, size 0x90, virtual false, abstract: false, final false
inline bool get_ShouldBePressable() ;

/// [CompilerGenerated]
/// @brief Method set_Initialized, addr 0x5c0f0b4, size 0x8, virtual false, abstract: false, final false
inline void set_Initialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AlarmClock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AlarmClock", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AlarmClock(AlarmClock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlarmClock", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlarmClock(AlarmClock const& ) = delete;

/// @brief Field TouchDebouncePeriod offset 0xffffffff size 0x4
static constexpr float_t  TouchDebouncePeriod{static_cast<float_t>(0.25f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4097};

/// [SerializeField]
/// @brief Field _key, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____key;

/// [SerializeField]
/// @brief Field _button, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ____button;

/// [SerializeField]
/// @brief Field _VIMLabel, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____VIMLabel;

/// [SerializeField]
/// @brief Field _alarmClockOff, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____alarmClockOff;

/// [SerializeField]
/// @brief Field _onTime, offset: 0x40, size: 0x4, def value: None
 float_t  ____onTime;

/// [SerializeField]
/// @brief Field _offTime, offset: 0x44, size: 0x4, def value: None
 float_t  ____offTime;

/// @brief Field OnActivate, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnActivate;

/// @brief Field OnDeactivate, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnDeactivate;

/// @brief Field _lastTouchTime, offset: 0x58, size: 0x4, def value: None
 float_t  ____lastTouchTime;

/// @brief Field _isVIMOnly, offset: 0x5c, size: 0x1, def value: None
 bool  ____isVIMOnly;

/// @brief Field _vim_only_fetched, offset: 0x5d, size: 0x1, def value: None
 bool  ____vim_only_fetched;

/// [CompilerGenerated]
/// @brief Field <Initialized>k__BackingField, offset: 0x5e, size: 0x1, def value: None
 bool  ____Initialized_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock, ____key) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock, ____button) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock, ____VIMLabel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock, ____alarmClockOff) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock, ____onTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock, ____offTime) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock, ___OnActivate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock, ___OnDeactivate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock, ____lastTouchTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock, ____isVIMOnly) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock, ____vim_only_fetched) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock, ____Initialized_k__BackingField) == 0x5e, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock) == 0x60, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription::AlarmClocks
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::Subscription::AlarmClocks {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.AlarmClocks.AlarmClock/<ActivateCoroutine>d__23
class CORDL_TYPE AlarmClock__ActivateCoroutine_d__23 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c0f730, size 0x20c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c0f93c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c0f944, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c0f97c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c0f72c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c0f428, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AlarmClock__ActivateCoroutine_d__23() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AlarmClock__ActivateCoroutine_d__23", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AlarmClock__ActivateCoroutine_d__23(AlarmClock__ActivateCoroutine_d__23 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlarmClock__ActivateCoroutine_d__23", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlarmClock__ActivateCoroutine_d__23(AlarmClock__ActivateCoroutine_d__23 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4096};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription::AlarmClocks
