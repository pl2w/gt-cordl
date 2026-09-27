#pragma once
// IWYU pragma private; include "UnityEngine/Splines/CurveUtility.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/zzzz__DistanceToInterpolation_impl.hpp"
#include "UnityEngine/Splines/zzzz__CurveUtility_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierCurve_def.hpp"
#include "UnityEngine/Splines/zzzz__CurveUtility_FrenetFrame_def.hpp"
#include "UnityEngine/Splines/zzzz__DistanceToInterpolation_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::CurveUtility.EvaluatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::UnityEngine::Splines::BezierCurve, float_t)>(&::UnityEngine::Splines::CurveUtility::EvaluatePosition)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb30c3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"EvaluatePosition", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::CurveUtility.EvaluateTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::UnityEngine::Splines::BezierCurve, float_t)>(&::UnityEngine::Splines::CurveUtility::EvaluateTangent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb30c474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"EvaluateTangent", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::CurveUtility.EvaluateAcceleration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::UnityEngine::Splines::BezierCurve, float_t)>(&::UnityEngine::Splines::CurveUtility::EvaluateAcceleration)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb30c544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"EvaluateAcceleration", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::CurveUtility.EvaluateCurvature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Splines::BezierCurve, float_t)>(&::UnityEngine::Splines::CurveUtility::EvaluateCurvature)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xb30c5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"EvaluateCurvature", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::CurveUtility.DeCasteljau
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::UnityEngine::Splines::BezierCurve, float_t)>(&::UnityEngine::Splines::CurveUtility::DeCasteljau)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb30c7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"DeCasteljau", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::CurveUtility.Split
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Splines::BezierCurve, float_t, ::by_ref<::UnityEngine::Splines::BezierCurve>, ::by_ref<::UnityEngine::Splines::BezierCurve>)>(&::UnityEngine::Splines::CurveUtility::Split)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb30c864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"Split", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Splines::BezierCurve>>(), ::i2c::type_of<::by_ref<::UnityEngine::Splines::BezierCurve>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::CurveUtility.CalculateLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Splines::BezierCurve, int32_t)>(&::UnityEngine::Splines::CurveUtility::CalculateLength)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb30c994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"CalculateLength", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::CurveUtility.CalculateCurveLengths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Splines::BezierCurve, ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>)>(&::UnityEngine::Splines::CurveUtility::CalculateCurveLengths)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb30cb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"CalculateCurveLengths", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::CurveUtility.CalculateCurveLengths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Splines::BezierCurve, ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::DistanceToInterpolation>)>(&::UnityEngine::Splines::CurveUtility::CalculateCurveLengths)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xb30cc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"CalculateCurveLengths", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Splines::DistanceToInterpolation>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::CurveUtility.Approximately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t)>(&::UnityEngine::Splines::CurveUtility::Approximately)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb30cdc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"Approximately", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::CurveUtility.ApproximateLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Splines::BezierCurve)>(&::UnityEngine::Splines::CurveUtility::ApproximateLength)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xb30ce08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"ApproximateLength", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::CurveUtility.EvaluateUpVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Splines::BezierCurve, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>)>(&::UnityEngine::Splines::CurveUtility::EvaluateUpVectors)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xb30d0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"EvaluateUpVectors", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::CurveUtility.EvaluateUpVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::UnityEngine::Splines::BezierCurve, float_t, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, bool)>(&::UnityEngine::Splines::CurveUtility::EvaluateUpVector)> {
  constexpr static std::size_t size = 0xdec;
  constexpr static std::size_t addrs = 0xb30d1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"EvaluateUpVector", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::CurveUtility.GetNextRotationMinimizingFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CurveUtility_FrenetFrame (*)(::UnityEngine::Splines::BezierCurve, ::GlobalNamespace::CurveUtility_FrenetFrame, float_t)>(&::UnityEngine::Splines::CurveUtility::GetNextRotationMinimizingFrame)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xb30dfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"GetNextRotationMinimizingFrame", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<::GlobalNamespace::CurveUtility_FrenetFrame>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::CurveUtility.GetDistanceToInterpolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Splines::BezierCurve, float_t)>(&::UnityEngine::Splines::CurveUtility::GetDistanceToInterpolation)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb30e29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"GetDistanceToInterpolation", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::CurveUtility.GetNearestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::UnityEngine::Splines::BezierCurve, ::UnityEngine::Ray, int32_t)>(&::UnityEngine::Splines::CurveUtility::GetNearestPoint)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb30e34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"GetNearestPoint", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::CurveUtility.GetNearestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Splines::BezierCurve, ::UnityEngine::Ray, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>, int32_t)>(&::UnityEngine::Splines::CurveUtility::GetNearestPoint)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xb30e400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"GetNearestPoint", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Splines::CurveUtility::setStaticF_k_DistanceLUT(::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>, "k_DistanceLUT", ::UnityEngine::Splines::CurveUtility*>(std::forward<::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>>(value));
}
inline ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation> UnityEngine::Splines::CurveUtility::getStaticF_k_DistanceLUT()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>, "k_DistanceLUT", ::UnityEngine::Splines::CurveUtility*>();
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::CurveUtility::EvaluatePosition(::UnityEngine::Splines::BezierCurve  curve, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"EvaluatePosition", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, curve, t);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::CurveUtility::EvaluateTangent(::UnityEngine::Splines::BezierCurve  curve, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"EvaluateTangent", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, curve, t);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::CurveUtility::EvaluateAcceleration(::UnityEngine::Splines::BezierCurve  curve, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"EvaluateAcceleration", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, curve, t);
}
inline float_t UnityEngine::Splines::CurveUtility::EvaluateCurvature(::UnityEngine::Splines::BezierCurve  curve, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"EvaluateCurvature", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, curve, t);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::CurveUtility::DeCasteljau(::UnityEngine::Splines::BezierCurve  curve, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"DeCasteljau", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, curve, t);
}
inline void UnityEngine::Splines::CurveUtility::Split(::UnityEngine::Splines::BezierCurve  curve, float_t  t, ::by_ref<::UnityEngine::Splines::BezierCurve>  left, ::by_ref<::UnityEngine::Splines::BezierCurve>  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"Split", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Splines::BezierCurve>>(), ::i2c::type_of<::by_ref<::UnityEngine::Splines::BezierCurve>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, curve, t, left, right);
}
inline float_t UnityEngine::Splines::CurveUtility::CalculateLength(::UnityEngine::Splines::BezierCurve  curve, int32_t  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"CalculateLength", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, curve, resolution);
}
inline void UnityEngine::Splines::CurveUtility::CalculateCurveLengths(::UnityEngine::Splines::BezierCurve  curve, ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>  lookupTable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"CalculateCurveLengths", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, curve, lookupTable);
}
inline void UnityEngine::Splines::CurveUtility::CalculateCurveLengths(::UnityEngine::Splines::BezierCurve  curve, ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::DistanceToInterpolation>  lookupTable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"CalculateCurveLengths", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Splines::DistanceToInterpolation>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, curve, lookupTable);
}
inline bool UnityEngine::Splines::CurveUtility::Approximately(float_t  a, float_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"Approximately", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline float_t UnityEngine::Splines::CurveUtility::ApproximateLength(::UnityEngine::Splines::BezierCurve  curve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"ApproximateLength", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, curve);
}
inline void UnityEngine::Splines::CurveUtility::EvaluateUpVectors(::UnityEngine::Splines::BezierCurve  curve, ::Unity::Mathematics::float3  startUp, ::Unity::Mathematics::float3  endUp, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  upVectors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"EvaluateUpVectors", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, curve, startUp, endUp, upVectors);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::CurveUtility::EvaluateUpVector(::UnityEngine::Splines::BezierCurve  curve, float_t  t, ::Unity::Mathematics::float3  startUp, ::Unity::Mathematics::float3  endUp, bool  fixEndUpMismatch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"EvaluateUpVector", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, curve, t, startUp, endUp, fixEndUpMismatch);
}
inline ::GlobalNamespace::CurveUtility_FrenetFrame UnityEngine::Splines::CurveUtility::GetNextRotationMinimizingFrame(::UnityEngine::Splines::BezierCurve  curve, ::GlobalNamespace::CurveUtility_FrenetFrame  previousRMFrame, float_t  nextRMFrameT)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"GetNextRotationMinimizingFrame", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<::GlobalNamespace::CurveUtility_FrenetFrame>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CurveUtility_FrenetFrame>(nullptr, ___internal_method, curve, previousRMFrame, nextRMFrameT);
}
inline float_t UnityEngine::Splines::CurveUtility::GetDistanceToInterpolation(::UnityEngine::Splines::BezierCurve  curve, float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"GetDistanceToInterpolation", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, curve, distance);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::DistanceToInterpolation>*>)
inline float_t UnityEngine::Splines::CurveUtility::GetDistanceToInterpolation(T  lut, float_t  distance)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                    {"GetDistanceToInterpolation", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lut, distance);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::CurveUtility::GetNearestPoint(::UnityEngine::Splines::BezierCurve  curve, ::UnityEngine::Ray  ray, int32_t  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"GetNearestPoint", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, curve, ray, resolution);
}
inline float_t UnityEngine::Splines::CurveUtility::GetNearestPoint(::UnityEngine::Splines::BezierCurve  curve, ::UnityEngine::Ray  ray, ::by_ref<::Unity::Mathematics::float3>  position, ::by_ref<float_t>  interpolation, int32_t  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::CurveUtility*>(),
                        {"GetNearestPoint", {}, {::i2c::type_of<::UnityEngine::Splines::BezierCurve>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, curve, ray, position, interpolation, resolution);
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::CurveUtility::CurveUtility()   {
}
