#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/ButtonWithOneModifier.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__ButtonWithOneModifier_ModifiersOrder_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_impl.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__ButtonWithOneModifier_def.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__ButtonWithOneModifier_ModifiersOrder_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::ReadValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaf46cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier.ModifierIsPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::ModifierIsPressed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaf46d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>(),
                        {"ModifierIsPressed", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier.EvaluateMagnitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf46dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier.FinishSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::FinishSetup)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaf46dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::*)()>(&::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaf46e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_get_modifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifier;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_get_modifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifier;
}
constexpr void UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_set_modifier(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modifier = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_get_button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_get_button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr void UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_set_button(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button = value;
}
constexpr bool& UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_get_overrideModifiersNeedToBePressedFirst()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideModifiersNeedToBePressedFirst;
}
constexpr bool const& UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_get_overrideModifiersNeedToBePressedFirst() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideModifiersNeedToBePressedFirst;
}
constexpr void UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_set_overrideModifiersNeedToBePressedFirst(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideModifiersNeedToBePressedFirst = value;
}
constexpr ::GlobalNamespace::ButtonWithOneModifier_ModifiersOrder& UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_get_modifiersOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifiersOrder;
}
constexpr ::GlobalNamespace::ButtonWithOneModifier_ModifiersOrder const& UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_get_modifiersOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifiersOrder;
}
constexpr void UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_set_modifiersOrder(::GlobalNamespace::ButtonWithOneModifier_ModifiersOrder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modifiersOrder = value;
}
inline float_t UnityEngine::InputSystem::Composites::ButtonWithOneModifier::ReadValue(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, context);
}
inline bool UnityEngine::InputSystem::Composites::ButtonWithOneModifier::ModifierIsPressed(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>(),
                        {"ModifierIsPressed", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline float_t UnityEngine::InputSystem::Composites::ButtonWithOneModifier::EvaluateMagnitude(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::Composites::ButtonWithOneModifier::FinishSetup(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::Composites::ButtonWithOneModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier* UnityEngine::InputSystem::Composites::ButtonWithOneModifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::ButtonWithOneModifier()   {
}
