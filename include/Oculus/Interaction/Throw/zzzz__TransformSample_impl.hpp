#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/TransformSample.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Throw/zzzz__TransformSample_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Throw::TransformSample._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::TransformSample::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, int32_t)>(&::Oculus::Interaction::Throw::TransformSample::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa493ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::TransformSample>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::TransformSample.Interpolate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Throw::TransformSample (*)(::Oculus::Interaction::Throw::TransformSample, ::Oculus::Interaction::Throw::TransformSample, float_t)>(&::Oculus::Interaction::Throw::TransformSample::Interpolate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa493f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::TransformSample>(),
                        {"Interpolate", {}, {::i2c::type_of<::Oculus::Interaction::Throw::TransformSample>(), ::i2c::type_of<::Oculus::Interaction::Throw::TransformSample>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Throw::TransformSample::_ctor(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  time, int32_t  frameIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::TransformSample>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, time, frameIndex);
}
inline ::Oculus::Interaction::Throw::TransformSample Oculus::Interaction::Throw::TransformSample::Interpolate(::Oculus::Interaction::Throw::TransformSample  start, ::Oculus::Interaction::Throw::TransformSample  fin, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::TransformSample>(),
                        {"Interpolate", {}, {::i2c::type_of<::Oculus::Interaction::Throw::TransformSample>(), ::i2c::type_of<::Oculus::Interaction::Throw::TransformSample>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Throw::TransformSample>(nullptr, ___internal_method, start, fin, time);
}
// Ctor Parameters [CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SampleTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Throw::TransformSample::TransformSample(::UnityEngine::Vector3  Position, ::UnityEngine::Quaternion  Rotation, float_t  SampleTime, int32_t  FrameIndex) noexcept  {
this->Position = Position;
this->Rotation = Rotation;
this->SampleTime = SampleTime;
this->FrameIndex = FrameIndex;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Throw::TransformSample::TransformSample()   {
}
