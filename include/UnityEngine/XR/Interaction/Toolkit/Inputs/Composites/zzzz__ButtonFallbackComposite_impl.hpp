#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/ButtonFallbackComposite.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/zzzz__FallbackComposite_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/zzzz__ButtonFallbackComposite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::ReadValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb4cd1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite.EvaluateMagnitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4cd24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4cd258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4cd2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::__cordl_internal_get_first()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___first;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::__cordl_internal_get_first() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___first;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::__cordl_internal_set_first(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___first = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::__cordl_internal_get_second()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___second;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::__cordl_internal_get_second() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___second;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::__cordl_internal_set_second(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___second = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::__cordl_internal_get_third()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___third;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::__cordl_internal_get_third() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___third;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::__cordl_internal_set_third(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___third = value;
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::ReadValue(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, context);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::EvaluateMagnitude(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite* UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite::ButtonFallbackComposite()   {
}
