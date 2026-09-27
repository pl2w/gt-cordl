#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/Transitions/SelectableTransitionColorTint.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__ColorBlock_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Modio/Unity/UI/Components/Selectables/Transitions/zzzz__SelectableTransitionColorTint_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/Transitions/zzzz__ISelectableTransition_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/Transitions/zzzz__SelectableTransitionColorTint_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__IModioUISelectable_SelectionState_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint.OnSelectionStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::*)(::GlobalNamespace::IModioUISelectable_SelectionState, bool)>(&::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::OnSelectionStateChanged)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x9fc3300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint*>(),
                        {"OnSelectionStateChanged", {}, {::i2c::type_of<::GlobalNamespace::IModioUISelectable_SelectionState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint.CrossFadeColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::*)(::UnityEngine::Color, float_t)>(&::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::CrossFadeColor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9fc359c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint*>(),
                        {"CrossFadeColor", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::*)()>(&::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9fc3668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Graphic>& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic> const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::__cordl_internal_set__target(::UnityW<::UnityEngine::UI::Graphic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr ::UnityEngine::UI::ColorBlock& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::__cordl_internal_get__colorBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorBlock;
}
constexpr ::UnityEngine::UI::ColorBlock const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::__cordl_internal_get__colorBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorBlock;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::__cordl_internal_set__colorBlock(::UnityEngine::UI::ColorBlock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorBlock = value;
}
constexpr ::UnityEngine::Coroutine*& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::__cordl_internal_get__coroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coroutine;
}
constexpr ::UnityEngine::Coroutine* const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::__cordl_internal_get__coroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coroutine;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::__cordl_internal_set__coroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coroutine = value;
}
inline void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::OnSelectionStateChanged(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint*>(),
                        {"OnSelectionStateChanged", {}, {::i2c::type_of<::GlobalNamespace::IModioUISelectable_SelectionState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, instant);
}
inline ::System::Collections::IEnumerator* Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::CrossFadeColor(::UnityEngine::Color  targetColor, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint*>(),
                        {"CrossFadeColor", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, targetColor, duration);
}
inline void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint* Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition"
constexpr  Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::operator ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*() noexcept {
return static_cast<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition"
constexpr ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition* Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::i___Modio__Unity__UI__Components__Selectables__Transitions__ISelectableTransition() noexcept {
return static_cast<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint::SelectableTransitionColorTint()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::*)(int32_t)>(&::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9fc3640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::*)()>(&::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9fc36d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::*)()>(&::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9fc36d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::*)()>(&::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc3820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::*)()>(&::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9fc3828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::*)()>(&::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc3860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint*& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint* const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_set___4__this(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Color& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_get_targetColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetColor;
}
constexpr ::UnityEngine::Color const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_get_targetColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetColor;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_set_targetColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetColor = value;
}
constexpr float_t& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr ::UnityEngine::Color& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_get__startColor_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startColor_5__2;
}
constexpr ::UnityEngine::Color const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_get__startColor_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startColor_5__2;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_set__startColor_5__2(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startColor_5__2 = value;
}
constexpr float_t& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_get__t_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____t_5__3;
}
constexpr float_t const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_get__t_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____t_5__3;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::__cordl_internal_set__t_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____t_5__3 = value;
}
inline void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4* Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4::SelectableTransitionColorTint__CrossFadeColor_d__4()   {
}
