#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Curves/CurveUtility.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Curves/zzzz__CurveUtility_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Curves/zzzz__CurveUtility_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.SampleQuadraticBezierPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::SampleQuadraticBezierPoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb42bec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"SampleQuadraticBezierPoint", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.SampleCubicBezierPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::SampleCubicBezierPoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb42becc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"SampleCubicBezierPoint", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.ElevateQuadraticToCubicBezier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::ElevateQuadraticToCubicBezier)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb42bed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"ElevateQuadraticToCubicBezier", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.GenerateCubicBezierCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::GenerateCubicBezierCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb42bed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"GenerateCubicBezierCurve", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.TryGenerateCubicBezierCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, float_t, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::TryGenerateCubicBezierCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb42bed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"TryGenerateCubicBezierCurve", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.TryGenerateCubicBezierCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, float_t, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::TryGenerateCubicBezierCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb42bedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"TryGenerateCubicBezierCurve", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.TryGenerateCubicBezierCurveCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, float_t, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::TryGenerateCubicBezierCurveCore)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xb42c6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"TryGenerateCubicBezierCurveCore", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.ApproximateCubicBezierLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::ApproximateCubicBezierLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb42bee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"ApproximateCubicBezierLength", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.SampleProjectilePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::SampleProjectilePoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb42bee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"SampleProjectilePoint", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.CalculateProjectileFlightTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t, float_t, float_t, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::CalculateProjectileFlightTime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb42bee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"CalculateProjectileFlightTime", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.SampleQuadraticBezierPoint$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::SampleQuadraticBezierPoint$BurstManaged)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb42cc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"SampleQuadraticBezierPoint$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.SampleCubicBezierPoint$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::SampleCubicBezierPoint$BurstManaged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb42ccf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"SampleCubicBezierPoint$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.ElevateQuadraticToCubicBezier$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::ElevateQuadraticToCubicBezier$BurstManaged)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb42cd84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"ElevateQuadraticToCubicBezier$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.GenerateCubicBezierCurve$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::GenerateCubicBezierCurve$BurstManaged)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xb42ce1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"GenerateCubicBezierCurve$BurstManaged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.TryGenerateCubicBezierCurve$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, float_t, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::TryGenerateCubicBezierCurve$BurstManaged)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb42cfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"TryGenerateCubicBezierCurve$BurstManaged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.TryGenerateCubicBezierCurve$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, float_t, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::TryGenerateCubicBezierCurve$BurstManaged)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb42d168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"TryGenerateCubicBezierCurve$BurstManaged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.ApproximateCubicBezierLength$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::ApproximateCubicBezierLength$BurstManaged)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb42d28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"ApproximateCubicBezierLength$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.SampleProjectilePoint$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::SampleProjectilePoint$BurstManaged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb42d3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"SampleProjectilePoint$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility.CalculateProjectileFlightTime$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t, float_t, float_t, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::CalculateProjectileFlightTime$BurstManaged)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb42d410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"CalculateProjectileFlightTime$BurstManaged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::SampleQuadraticBezierPoint(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"SampleQuadraticBezierPoint", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, p1, p2, t, point);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::SampleCubicBezierPoint(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"SampleCubicBezierPoint", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, p1, p2, p3, t, point);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::ElevateQuadraticToCubicBezier(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, ::by_ref<::Unity::Mathematics::float3>  c0, ::by_ref<::Unity::Mathematics::float3>  c1, ::by_ref<::Unity::Mathematics::float3>  c2, ::by_ref<::Unity::Mathematics::float3>  c3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"ElevateQuadraticToCubicBezier", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, p1, p2, c0, c1, c2, c3);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::GenerateCubicBezierCurve(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"GenerateCubicBezierCurve", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, numTargetPoints, curveRatio, lineOrigin, lineDirection, endPoint, targetPoints);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::TryGenerateCubicBezierCurve(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"TryGenerateCubicBezierCurve", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, numTargetPoints, curveRatio, curveOrigin, curveDirection, endPoint, targetPoints, minLineLength, startOffset, endOffset);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::TryGenerateCubicBezierCurve(int32_t  numTargetPoints, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  midPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"TryGenerateCubicBezierCurve", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, numTargetPoints, curveOrigin, midPoint, endPoint, targetPoints, minLineLength, startOffset, endOffset);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::TryGenerateCubicBezierCurveCore(int32_t  numTargetPoints, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  midPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"TryGenerateCubicBezierCurveCore", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, numTargetPoints, curveOrigin, midPoint, endPoint, targetPoints, minLineLength, startOffset, endOffset);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::ApproximateCubicBezierLength(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, int32_t  subdivisions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"ApproximateCubicBezierLength", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, p0, p1, p2, p3, subdivisions);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::SampleProjectilePoint(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialVelocity, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  constantAcceleration, float_t  time, ::by_ref<::Unity::Mathematics::float3>  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"SampleProjectilePoint", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, initialPosition, initialVelocity, constantAcceleration, time, point);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::CalculateProjectileFlightTime(float_t  velocityMagnitude, float_t  gravityAcceleration, float_t  angleRad, float_t  height, float_t  extraFlightTime, ::by_ref<float_t>  flightTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"CalculateProjectileFlightTime", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, velocityMagnitude, gravityAcceleration, angleRad, height, extraFlightTime, flightTime);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::SampleQuadraticBezierPoint$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"SampleQuadraticBezierPoint$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, p1, p2, t, point);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::SampleCubicBezierPoint$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"SampleCubicBezierPoint$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, p1, p2, p3, t, point);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::ElevateQuadraticToCubicBezier$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, ::by_ref<::Unity::Mathematics::float3>  c0, ::by_ref<::Unity::Mathematics::float3>  c1, ::by_ref<::Unity::Mathematics::float3>  c2, ::by_ref<::Unity::Mathematics::float3>  c3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"ElevateQuadraticToCubicBezier$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, p1, p2, c0, c1, c2, c3);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::GenerateCubicBezierCurve$BurstManaged(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"GenerateCubicBezierCurve$BurstManaged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, numTargetPoints, curveRatio, lineOrigin, lineDirection, endPoint, targetPoints);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::TryGenerateCubicBezierCurve$BurstManaged(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"TryGenerateCubicBezierCurve$BurstManaged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, numTargetPoints, curveRatio, curveOrigin, curveDirection, endPoint, targetPoints, minLineLength, startOffset, endOffset);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::TryGenerateCubicBezierCurve$BurstManaged(int32_t  numTargetPoints, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  midPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"TryGenerateCubicBezierCurve$BurstManaged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, numTargetPoints, curveOrigin, midPoint, endPoint, targetPoints, minLineLength, startOffset, endOffset);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::ApproximateCubicBezierLength$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, int32_t  subdivisions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"ApproximateCubicBezierLength$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, p0, p1, p2, p3, subdivisions);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::SampleProjectilePoint$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialVelocity, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  constantAcceleration, float_t  time, ::by_ref<::Unity::Mathematics::float3>  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"SampleProjectilePoint$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, initialPosition, initialVelocity, constantAcceleration, time, point);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::CalculateProjectileFlightTime$BurstManaged(float_t  velocityMagnitude, float_t  gravityAcceleration, float_t  angleRad, float_t  height, float_t  extraFlightTime, ::by_ref<float_t>  flightTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*>(),
                        {"CalculateProjectileFlightTime$BurstManaged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, velocityMagnitude, gravityAcceleration, angleRad, height, extraFlightTime, flightTime);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility::CurveUtility()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb42ef04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb42eff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t, float_t, float_t, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xb42cb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall::Invoke(float_t  velocityMagnitude, float_t  gravityAcceleration, float_t  angleRad, float_t  height, float_t  extraFlightTime, ::by_ref<float_t>  flightTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, velocityMagnitude, gravityAcceleration, angleRad, height, extraFlightTime, flightTime);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb42ed64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate::*)(float_t, float_t, float_t, float_t, float_t, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb42ee04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate::*)(float_t, float_t, float_t, float_t, float_t, ::by_ref<float_t>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb42ee18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb42eef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate::Invoke(float_t  velocityMagnitude, float_t  gravityAcceleration, float_t  angleRad, float_t  height, float_t  extraFlightTime, ::by_ref<float_t>  flightTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocityMagnitude, gravityAcceleration, angleRad, height, extraFlightTime, flightTime);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate::BeginInvoke(float_t  velocityMagnitude, float_t  gravityAcceleration, float_t  angleRad, float_t  height, float_t  extraFlightTime, ::by_ref<float_t>  flightTime, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, velocityMagnitude, gravityAcceleration, angleRad, height, extraFlightTime, flightTime, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_7);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb42ec5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb42ed4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb42ca14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialVelocity, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  constantAcceleration, float_t  time, ::by_ref<::Unity::Mathematics::float3>  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, initialPosition, initialVelocity, constantAcceleration, time, point);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb42ea84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb42eb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb42eb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb42ec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialVelocity, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  constantAcceleration, float_t  time, ::by_ref<::Unity::Mathematics::float3>  point)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialPosition, initialVelocity, constantAcceleration, time, point);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialVelocity, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  constantAcceleration, float_t  time, ::by_ref<::Unity::Mathematics::float3>  point, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, initialPosition, initialVelocity, constantAcceleration, time, point, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb42e97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb42ea6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xb42c848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, int32_t  subdivisions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, p0, p1, p2, p3, subdivisions);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb42e788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb42e83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb42e850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb42e954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, int32_t  subdivisions)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, p0, p1, p2, p3, subdivisions);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, int32_t  subdivisions, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, p0, p1, p2, p3, subdivisions, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_6);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb42e680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb42e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, float_t, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xb42c4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall::Invoke(int32_t  numTargetPoints, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  midPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, numTargetPoints, curveOrigin, midPoint, endPoint, targetPoints, minLineLength, startOffset, endOffset);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb42e438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate::*)(int32_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, float_t, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb42e4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate::*)(int32_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, float_t, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb42e4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb42e658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate::Invoke(int32_t  numTargetPoints, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  midPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, numTargetPoints, curveOrigin, midPoint, endPoint, targetPoints, minLineLength, startOffset, endOffset);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate::BeginInvoke(int32_t  numTargetPoints, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  midPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_9)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, numTargetPoints, curveOrigin, midPoint, endPoint, targetPoints, minLineLength, startOffset, endOffset, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_9);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb42e330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb42e420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, float_t, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb42c3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall::Invoke(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, numTargetPoints, curveRatio, curveOrigin, curveDirection, endPoint, targetPoints, minLineLength, startOffset, endOffset);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb42e0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate::*)(int32_t, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, float_t, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb42e170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate::*)(int32_t, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, float_t, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb42e184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb42e308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate::Invoke(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, numTargetPoints, curveRatio, curveOrigin, curveDirection, endPoint, targetPoints, minLineLength, startOffset, endOffset);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate::BeginInvoke(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_10)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, numTargetPoints, curveRatio, curveOrigin, curveDirection, endPoint, targetPoints, minLineLength, startOffset, endOffset, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_10);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb42dfc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb42e0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb42c2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall::Invoke(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, numTargetPoints, curveRatio, lineOrigin, lineDirection, endPoint, targetPoints);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb42ddcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate::*)(int32_t, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb42de6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate::*)(int32_t, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb42de80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb42dfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate::Invoke(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numTargetPoints, curveRatio, lineOrigin, lineDirection, endPoint, targetPoints);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate::BeginInvoke(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, numTargetPoints, curveRatio, lineOrigin, lineDirection, endPoint, targetPoints, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_7);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb42dcc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb42ddb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb42c174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, ::by_ref<::Unity::Mathematics::float3>  c0, ::by_ref<::Unity::Mathematics::float3>  c1, ::by_ref<::Unity::Mathematics::float3>  c2, ::by_ref<::Unity::Mathematics::float3>  c3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, p1, p2, c0, c1, c2, c3);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb42dabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb42db70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb42db88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb42dcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, ::by_ref<::Unity::Mathematics::float3>  c0, ::by_ref<::Unity::Mathematics::float3>  c1, ::by_ref<::Unity::Mathematics::float3>  c2, ::by_ref<::Unity::Mathematics::float3>  c3)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p0, p1, p2, c0, c1, c2, c3);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, ::by_ref<::Unity::Mathematics::float3>  c0, ::by_ref<::Unity::Mathematics::float3>  c1, ::by_ref<::Unity::Mathematics::float3>  c2, ::by_ref<::Unity::Mathematics::float3>  c3, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_8)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, p0, p1, p2, c0, c1, c2, c3, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_8);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb42d9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb42daa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb42c01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, p1, p2, p3, t, point);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb42d7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb42d86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb42d880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb42d9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p0, p1, p2, p3, t, point);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, p0, p1, p2, p3, t, point, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_7);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb42d6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb42d7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb42beec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, p1, p2, t, point);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb42d4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb42d58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb42d5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb42d6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p0, p1, p2, t, point);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, p0, p1, p2, t, point, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate()   {
}
