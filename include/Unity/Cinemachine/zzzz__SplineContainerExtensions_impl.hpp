#pragma once
// IWYU pragma private; include "Unity/Cinemachine/SplineContainerExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__SplineContainerExtensions_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineRoll_def.hpp"
#include "UnityEngine/Splines/zzzz__ISplineContainer_def.hpp"
#include "UnityEngine/Splines/zzzz__ISpline_def.hpp"
#include "UnityEngine/Splines/zzzz__PathIndexUnit_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::SplineContainerExtensions.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Splines::ISplineContainer*)>(&::Unity::Cinemachine::SplineContainerExtensions::IsValid)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xaebb788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineContainerExtensions*>(),
                        {"IsValid", {}, {::i2c::type_of<::UnityEngine::Splines::ISplineContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineContainerExtensions.LocalEvaluateSplineWithRoll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Splines::ISpline*, float_t, ::Unity::Cinemachine::CinemachineSplineRoll*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Unity::Cinemachine::SplineContainerExtensions::LocalEvaluateSplineWithRoll)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0xaebbac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineContainerExtensions*>(),
                        {"LocalEvaluateSplineWithRoll", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineSplineRoll*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineContainerExtensions.EvaluateSplineWithRoll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Splines::ISpline*, ::UnityEngine::Transform*, float_t, ::Unity::Cinemachine::CinemachineSplineRoll*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Unity::Cinemachine::SplineContainerExtensions::EvaluateSplineWithRoll)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xaebbf3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineContainerExtensions*>(),
                        {"EvaluateSplineWithRoll", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineSplineRoll*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineContainerExtensions.EvaluateSplinePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Splines::ISpline*, ::UnityEngine::Transform*, float_t)>(&::Unity::Cinemachine::SplineContainerExtensions::EvaluateSplinePosition)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xaebc104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineContainerExtensions*>(),
                        {"EvaluateSplinePosition", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineContainerExtensions.GetMaxPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Splines::ISpline*, ::UnityEngine::Splines::PathIndexUnit)>(&::Unity::Cinemachine::SplineContainerExtensions::GetMaxPosition)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xaebc2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineContainerExtensions*>(),
                        {"GetMaxPosition", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineContainerExtensions.StandardizePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Splines::ISpline*, float_t, ::UnityEngine::Splines::PathIndexUnit, ::by_ref<float_t>)>(&::Unity::Cinemachine::SplineContainerExtensions::StandardizePosition)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xaebc4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineContainerExtensions*>(),
                        {"StandardizePosition", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineContainerExtensions._LocalEvaluateSplineWithRoll_g__RollAroundForward_1_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(float_t)>(&::Unity::Cinemachine::SplineContainerExtensions::_LocalEvaluateSplineWithRoll_g__RollAroundForward_1_0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaebbf04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineContainerExtensions*>(),
                        {"<LocalEvaluateSplineWithRoll>g__RollAroundForward|1_0", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Unity::Cinemachine::SplineContainerExtensions::IsValid(::UnityEngine::Splines::ISplineContainer*  spline)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineContainerExtensions*>(),
                        {"IsValid", {}, {::i2c::type_of<::UnityEngine::Splines::ISplineContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, spline);
}
inline bool Unity::Cinemachine::SplineContainerExtensions::LocalEvaluateSplineWithRoll(::UnityEngine::Splines::ISpline*  spline, float_t  tNormalized, ::Unity::Cinemachine::CinemachineSplineRoll*  roll, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineContainerExtensions*>(),
                        {"LocalEvaluateSplineWithRoll", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineSplineRoll*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, spline, tNormalized, roll, position, rotation);
}
inline bool Unity::Cinemachine::SplineContainerExtensions::EvaluateSplineWithRoll(::UnityEngine::Splines::ISpline*  spline, ::UnityEngine::Transform*  transform, float_t  tNormalized, ::Unity::Cinemachine::CinemachineSplineRoll*  roll, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineContainerExtensions*>(),
                        {"EvaluateSplineWithRoll", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineSplineRoll*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, spline, transform, tNormalized, roll, position, rotation);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::SplineContainerExtensions::EvaluateSplinePosition(::UnityEngine::Splines::ISpline*  spline, ::UnityEngine::Transform*  transform, float_t  tNormalized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineContainerExtensions*>(),
                        {"EvaluateSplinePosition", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, spline, transform, tNormalized);
}
inline float_t Unity::Cinemachine::SplineContainerExtensions::GetMaxPosition(::UnityEngine::Splines::ISpline*  spline, ::UnityEngine::Splines::PathIndexUnit  unit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineContainerExtensions*>(),
                        {"GetMaxPosition", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, spline, unit);
}
inline float_t Unity::Cinemachine::SplineContainerExtensions::StandardizePosition(::UnityEngine::Splines::ISpline*  spline, float_t  t, ::UnityEngine::Splines::PathIndexUnit  unit, ::by_ref<float_t>  maxPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineContainerExtensions*>(),
                        {"StandardizePosition", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, spline, t, unit, maxPos);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::SplineContainerExtensions::_LocalEvaluateSplineWithRoll_g__RollAroundForward_1_0(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineContainerExtensions*>(),
                        {"<LocalEvaluateSplineWithRoll>g__RollAroundForward|1_0", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, angle);
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::SplineContainerExtensions::SplineContainerExtensions()   {
}
