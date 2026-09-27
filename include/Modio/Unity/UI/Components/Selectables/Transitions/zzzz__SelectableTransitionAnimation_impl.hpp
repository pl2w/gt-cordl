#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/Transitions/SelectableTransitionAnimation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/Selectables/Transitions/zzzz__SelectableTransitionAnimation_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/Transitions/zzzz__ISelectableTransition_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__IModioUISelectable_SelectionState_def.hpp"
#include "UnityEngine/UI/zzzz__AnimationTriggers_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation.OnSelectionStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation::*)(::GlobalNamespace::IModioUISelectable_SelectionState, bool)>(&::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation::OnSelectionStateChanged)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x9fc311c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation*>(),
                        {"OnSelectionStateChanged", {}, {::i2c::type_of<::GlobalNamespace::IModioUISelectable_SelectionState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation::*)()>(&::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc32f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animator>& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation::__cordl_internal_set__target(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr ::UnityEngine::UI::AnimationTriggers*& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation::__cordl_internal_get__animationTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationTriggers;
}
constexpr ::UnityEngine::UI::AnimationTriggers* const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation::__cordl_internal_get__animationTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationTriggers;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation::__cordl_internal_set__animationTriggers(::UnityEngine::UI::AnimationTriggers*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animationTriggers = value;
}
inline void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation::OnSelectionStateChanged(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation*>(),
                        {"OnSelectionStateChanged", {}, {::i2c::type_of<::GlobalNamespace::IModioUISelectable_SelectionState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, instant);
}
inline void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation* Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition"
constexpr  Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation::operator ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*() noexcept {
return static_cast<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition"
constexpr ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition* Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation::i___Modio__Unity__UI__Components__Selectables__Transitions__ISelectableTransition() noexcept {
return static_cast<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation::SelectableTransitionAnimation()   {
}
