#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/Vector3Composite.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__Vector3Composite_Mode_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__Vector3Composite_def.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__Vector3Composite_Mode_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::Vector3Composite.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::InputSystem::Composites::Vector3Composite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::InputSystem::Composites::Vector3Composite::ReadValue)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xaf47c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::Composites::Vector3Composite*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::Composites::Vector3Composite*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::Vector3Composite.EvaluateMagnitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Composites::Vector3Composite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::InputSystem::Composites::Vector3Composite::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaf47e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::Composites::Vector3Composite*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::Composites::Vector3Composite*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::Vector3Composite._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Composites::Vector3Composite::*)()>(&::UnityEngine::InputSystem::Composites::Vector3Composite::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaf47edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Composites::Vector3Composite*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_get_up()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___up;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_get_up() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___up;
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_set_up(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___up = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_get_down()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___down;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_get_down() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___down;
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_set_down(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___down = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_get_left()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___left;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_get_left() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___left;
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_set_left(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___left = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_get_right()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___right;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_get_right() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___right;
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_set_right(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___right = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_get_forward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forward;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_get_forward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forward;
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_set_forward(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forward = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_get_backward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backward;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_get_backward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backward;
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_set_backward(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backward = value;
}
constexpr ::GlobalNamespace::Vector3Composite_Mode& UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::Vector3Composite_Mode const& UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__cordl_internal_set_mode(::GlobalNamespace::Vector3Composite_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
inline ::UnityEngine::Vector3 UnityEngine::InputSystem::Composites::Vector3Composite::ReadValue(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::Composites::Vector3Composite*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, context);
}
inline float_t UnityEngine::InputSystem::Composites::Vector3Composite::EvaluateMagnitude(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::Composites::Vector3Composite*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::Composites::Vector3Composite::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Composites::Vector3Composite*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Composites::Vector3Composite* UnityEngine::InputSystem::Composites::Vector3Composite::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Composites::Vector3Composite*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Composites::Vector3Composite::Vector3Composite()   {
}
