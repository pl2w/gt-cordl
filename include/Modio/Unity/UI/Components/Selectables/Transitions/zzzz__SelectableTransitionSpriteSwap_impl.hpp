#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/Transitions/SelectableTransitionSpriteSwap.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__SpriteState_impl.hpp"
#include "Modio/Unity/UI/Components/Selectables/Transitions/zzzz__SelectableTransitionSpriteSwap_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/Transitions/zzzz__ISelectableTransition_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__IModioUISelectable_SelectionState_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap.OnSelectionStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::*)(::GlobalNamespace::IModioUISelectable_SelectionState, bool)>(&::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::OnSelectionStateChanged)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9fc3868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap*>(),
                        {"OnSelectionStateChanged", {}, {::i2c::type_of<::GlobalNamespace::IModioUISelectable_SelectionState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::*)()>(&::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc39b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Image>& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::__cordl_internal_set__target(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr ::UnityEngine::UI::SpriteState& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::__cordl_internal_get__spriteState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spriteState;
}
constexpr ::UnityEngine::UI::SpriteState const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::__cordl_internal_get__spriteState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spriteState;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::__cordl_internal_set__spriteState(::UnityEngine::UI::SpriteState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spriteState = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::__cordl_internal_get__overrideDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overrideDefault;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::__cordl_internal_get__overrideDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overrideDefault;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::__cordl_internal_set__overrideDefault(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overrideDefault = value;
}
constexpr bool& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::__cordl_internal_get__isInitialised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialised;
}
constexpr bool const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::__cordl_internal_get__isInitialised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialised;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::__cordl_internal_set__isInitialised(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInitialised = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::__cordl_internal_get__defaultSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::__cordl_internal_get__defaultSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultSprite;
}
constexpr void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::__cordl_internal_set__defaultSprite(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultSprite = value;
}
inline void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::OnSelectionStateChanged(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap*>(),
                        {"OnSelectionStateChanged", {}, {::i2c::type_of<::GlobalNamespace::IModioUISelectable_SelectionState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, instant);
}
inline void Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap* Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition"
constexpr  Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::operator ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*() noexcept {
return static_cast<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition"
constexpr ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition* Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::i___Modio__Unity__UI__Components__Selectables__Transitions__ISelectableTransition() noexcept {
return static_cast<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap::SelectableTransitionSpriteSwap()   {
}
