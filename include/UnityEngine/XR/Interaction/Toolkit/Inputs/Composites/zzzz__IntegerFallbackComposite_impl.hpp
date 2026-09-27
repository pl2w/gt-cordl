#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/IntegerFallbackComposite.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/zzzz__FallbackComposite_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/zzzz__IntegerFallbackComposite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::ReadValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb4cd040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4cd0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4cd158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::__cordl_internal_get_first()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___first;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::__cordl_internal_get_first() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___first;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::__cordl_internal_set_first(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___first = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::__cordl_internal_get_second()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___second;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::__cordl_internal_get_second() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___second;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::__cordl_internal_set_second(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___second = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::__cordl_internal_get_third()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___third;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::__cordl_internal_get_third() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___third;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::__cordl_internal_set_third(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___third = value;
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::ReadValue(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite* UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite::IntegerFallbackComposite()   {
}
