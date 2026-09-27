#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/VelocityCalculatorUtilMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Throw/zzzz__VelocityCalculatorUtilMethods_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__TransformSample_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods.ToLinearVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::ToLinearVelocity)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa498960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*>(),
                        {"ToLinearVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods.ToAngularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float_t)>(&::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::ToAngularVelocity)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xa498260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*>(),
                        {"ToAngularVelocity", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods.AngularVelocityToQuat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::AngularVelocityToQuat)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa496808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*>(),
                        {"AngularVelocityToQuat", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods.QuatToAngleAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<float_t,::UnityEngine::Vector3> (*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::QuatToAngleAxis)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa498b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*>(),
                        {"QuatToAngleAxis", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods.QuatToAngularVeloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::QuatToAngularVeloc)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa496918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*>(),
                        {"QuatToAngularVeloc", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods.DeltaRotationToAngularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Quaternion, float_t)>(&::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::DeltaRotationToAngularVelocity)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa498a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*>(),
                        {"DeltaRotationToAngularVelocity", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods.GetVelocityAndAngularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> (*)(::Oculus::Interaction::Throw::TransformSample, ::Oculus::Interaction::Throw::TransformSample, float_t)>(&::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::GetVelocityAndAngularVelocity)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa498c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*>(),
                        {"GetVelocityAndAngularVelocity", {}, {::i2c::type_of<::Oculus::Interaction::Throw::TransformSample>(), ::i2c::type_of<::Oculus::Interaction::Throw::TransformSample>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::*)()>(&::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa498d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::ToLinearVelocity(::UnityEngine::Vector3  startPosition, ::UnityEngine::Vector3  destinationPosition, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*>(),
                        {"ToLinearVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, startPosition, destinationPosition, deltaTime);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::ToAngularVelocity(::UnityEngine::Quaternion  startQuaternion, ::UnityEngine::Quaternion  destinationQuaternion, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*>(),
                        {"ToAngularVelocity", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, startQuaternion, destinationQuaternion, deltaTime);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::AngularVelocityToQuat(::UnityEngine::Vector3  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*>(),
                        {"AngularVelocityToQuat", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, angularVelocity);
}
inline ::System::ValueTuple_2<float_t,::UnityEngine::Vector3> Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::QuatToAngleAxis(::UnityEngine::Quaternion  inputQuat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*>(),
                        {"QuatToAngleAxis", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<float_t,::UnityEngine::Vector3>>(nullptr, ___internal_method, inputQuat);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::QuatToAngularVeloc(::UnityEngine::Quaternion  inputQuat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*>(),
                        {"QuatToAngularVeloc", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, inputQuat);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::DeltaRotationToAngularVelocity(::UnityEngine::Quaternion  deltaRotation, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*>(),
                        {"DeltaRotationToAngularVelocity", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, deltaRotation, deltaTime);
}
inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::GetVelocityAndAngularVelocity(::Oculus::Interaction::Throw::TransformSample  startSample, ::Oculus::Interaction::Throw::TransformSample  endSample, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*>(),
                        {"GetVelocityAndAngularVelocity", {}, {::i2c::type_of<::Oculus::Interaction::Throw::TransformSample>(), ::i2c::type_of<::Oculus::Interaction::Throw::TransformSample>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>(nullptr, ___internal_method, startSample, endSample, duration);
}
inline void Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods* Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Throw::VelocityCalculatorUtilMethods::VelocityCalculatorUtilMethods()   {
}
