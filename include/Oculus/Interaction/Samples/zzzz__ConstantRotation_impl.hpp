#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ConstantRotation.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__ConstantRotation_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::ConstantRotation.get_RotationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Samples::ConstantRotation::*)()>(&::Oculus::Interaction::Samples::ConstantRotation::get_RotationSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa440820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ConstantRotation*>(),
                        {"get_RotationSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ConstantRotation.set_RotationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ConstantRotation::*)(float_t)>(&::Oculus::Interaction::Samples::ConstantRotation::set_RotationSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa440828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ConstantRotation*>(),
                        {"set_RotationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ConstantRotation.get_LocalAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Samples::ConstantRotation::*)()>(&::Oculus::Interaction::Samples::ConstantRotation::get_LocalAxis)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa440830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ConstantRotation*>(),
                        {"get_LocalAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ConstantRotation.set_LocalAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ConstantRotation::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Samples::ConstantRotation::set_LocalAxis)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa44083c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ConstantRotation*>(),
                        {"set_LocalAxis", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ConstantRotation.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ConstantRotation::*)()>(&::Oculus::Interaction::Samples::ConstantRotation::Update)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa440848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::ConstantRotation*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::ConstantRotation*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ConstantRotation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ConstantRotation::*)()>(&::Oculus::Interaction::Samples::ConstantRotation::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa4408a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ConstantRotation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::Samples::ConstantRotation::__cordl_internal_get__rotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationSpeed;
}
constexpr float_t const& Oculus::Interaction::Samples::ConstantRotation::__cordl_internal_get__rotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationSpeed;
}
constexpr void Oculus::Interaction::Samples::ConstantRotation::__cordl_internal_set__rotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationSpeed = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Samples::ConstantRotation::__cordl_internal_get__localAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localAxis;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Samples::ConstantRotation::__cordl_internal_get__localAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localAxis;
}
constexpr void Oculus::Interaction::Samples::ConstantRotation::__cordl_internal_set__localAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localAxis = value;
}
inline float_t Oculus::Interaction::Samples::ConstantRotation::get_RotationSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ConstantRotation*>(),
                        {"get_RotationSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::ConstantRotation::set_RotationSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ConstantRotation*>(),
                        {"set_RotationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Samples::ConstantRotation::get_LocalAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ConstantRotation*>(),
                        {"get_LocalAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::ConstantRotation::set_LocalAxis(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ConstantRotation*>(),
                        {"set_LocalAxis", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Samples::ConstantRotation::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::ConstantRotation*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::ConstantRotation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ConstantRotation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::ConstantRotation* Oculus::Interaction::Samples::ConstantRotation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::ConstantRotation*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::ConstantRotation::ConstantRotation()   {
}
