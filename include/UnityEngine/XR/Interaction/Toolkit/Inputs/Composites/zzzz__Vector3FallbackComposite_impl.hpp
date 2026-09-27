#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/Vector3FallbackComposite.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/zzzz__FallbackComposite_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/zzzz__Vector3FallbackComposite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::ReadValue)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb4ccd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4cce20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4cce8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::__cordl_internal_get_first()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___first;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::__cordl_internal_get_first() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___first;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::__cordl_internal_set_first(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___first = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::__cordl_internal_get_second()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___second;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::__cordl_internal_get_second() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___second;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::__cordl_internal_set_second(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___second = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::__cordl_internal_get_third()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___third;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::__cordl_internal_get_third() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___third;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::__cordl_internal_set_third(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___third = value;
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::ReadValue(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite* UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::Vector3FallbackComposite()   {
}
