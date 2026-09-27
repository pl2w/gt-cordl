#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/Transitions/SelectableTransitionActive.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/Selectables/Transitions/zzzz__SelectableTransitionActive_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/Transitions/zzzz__ISelectableTransition_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__IModioUISelectable_SelectionState_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive.OnSelectionStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::*)(::GlobalNamespace::IModioUISelectable_SelectionState, bool)>(&::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::OnSelectionStateChanged)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9fc302c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive*>(),
                        {"OnSelectionStateChanged", {}, {::i2c::type_of<::GlobalNamespace::IModioUISelectable_SelectionState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::*)()>(&::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc3114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::__cordl_internal_set__target(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr bool& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::__cordl_internal_get__normal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normal;
}
constexpr bool const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::__cordl_internal_get__normal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normal;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::__cordl_internal_set__normal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normal = value;
}
constexpr bool& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::__cordl_internal_get__highlighted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlighted;
}
constexpr bool const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::__cordl_internal_get__highlighted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlighted;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::__cordl_internal_set__highlighted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____highlighted = value;
}
constexpr bool& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::__cordl_internal_get__pressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressed;
}
constexpr bool const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::__cordl_internal_get__pressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressed;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::__cordl_internal_set__pressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressed = value;
}
constexpr bool& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::__cordl_internal_get__selected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selected;
}
constexpr bool const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::__cordl_internal_get__selected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selected;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::__cordl_internal_set__selected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selected = value;
}
constexpr bool& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::__cordl_internal_get__disabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabled;
}
constexpr bool const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::__cordl_internal_get__disabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabled;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::__cordl_internal_set__disabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disabled = value;
}
inline void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::OnSelectionStateChanged(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive*>(),
                        {"OnSelectionStateChanged", {}, {::i2c::type_of<::GlobalNamespace::IModioUISelectable_SelectionState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, instant);
}
inline void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive* Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition"
constexpr  Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::operator ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*() noexcept {
return static_cast<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition"
constexpr ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition* Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::i___Modio__Unity__UI__Components__Selectables__Transitions__ISelectableTransition() noexcept {
return static_cast<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive::SelectableTransitionActive()   {
}
