#pragma once
// IWYU pragma private; include "Unity/Cinemachine/SplineHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__SplineHelpers_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::SplineHelpers.Bezier3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::SplineHelpers::Bezier3)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xaebc5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineHelpers*>(),
                        {"Bezier3", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineHelpers.BezierTangent3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::SplineHelpers::BezierTangent3)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xaebc670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineHelpers*>(),
                        {"BezierTangent3", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineHelpers.BezierTangentWeights3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Unity::Cinemachine::SplineHelpers::BezierTangentWeights3)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xaebc76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineHelpers*>(),
                        {"BezierTangentWeights3", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineHelpers.Bezier1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, float_t)>(&::Unity::Cinemachine::SplineHelpers::Bezier1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaebc86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineHelpers*>(),
                        {"Bezier1", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineHelpers.BezierTangent1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, float_t)>(&::Unity::Cinemachine::SplineHelpers::BezierTangent1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xaebc8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineHelpers*>(),
                        {"BezierTangent1", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineHelpers.ComputeSmoothControlPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<::UnityEngine::Vector4>>, ::by_ref<::ArrayW<::UnityEngine::Vector4>>, ::by_ref<::ArrayW<::UnityEngine::Vector4>>)>(&::Unity::Cinemachine::SplineHelpers::ComputeSmoothControlPoints)> {
  constexpr static std::size_t size = 0xa38;
  constexpr static std::size_t addrs = 0xaebc948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineHelpers*>(),
                        {"ComputeSmoothControlPoints", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineHelpers.ComputeSmoothControlPointsLooped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<::UnityEngine::Vector4>>, ::by_ref<::ArrayW<::UnityEngine::Vector4>>, ::by_ref<::ArrayW<::UnityEngine::Vector4>>)>(&::Unity::Cinemachine::SplineHelpers::ComputeSmoothControlPointsLooped)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xaebd380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineHelpers*>(),
                        {"ComputeSmoothControlPointsLooped", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineHelpers.ComputeSmoothControlPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<::Unity::Mathematics::float3>>, ::by_ref<::ArrayW<::Unity::Mathematics::float3>>, ::by_ref<::ArrayW<::Unity::Mathematics::float3>>)>(&::Unity::Cinemachine::SplineHelpers::ComputeSmoothControlPoints)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0xaebd634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineHelpers*>(),
                        {"ComputeSmoothControlPoints", {}, {::i2c::type_of<::by_ref<::ArrayW<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::Unity::Mathematics::float3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineHelpers.ComputeSmoothControlPointsLooped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<::Unity::Mathematics::float3>>, ::by_ref<::ArrayW<::Unity::Mathematics::float3>>, ::by_ref<::ArrayW<::Unity::Mathematics::float3>>)>(&::Unity::Cinemachine::SplineHelpers::ComputeSmoothControlPointsLooped)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xaebddb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineHelpers*>(),
                        {"ComputeSmoothControlPointsLooped", {}, {::i2c::type_of<::by_ref<::ArrayW<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::Unity::Mathematics::float3>>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 Unity::Cinemachine::SplineHelpers::Bezier3(float_t  t, ::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineHelpers*>(),
                        {"Bezier3", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, t, p0, p1, p2, p3);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::SplineHelpers::BezierTangent3(float_t  t, ::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineHelpers*>(),
                        {"BezierTangent3", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, t, p0, p1, p2, p3);
}
inline void Unity::Cinemachine::SplineHelpers::BezierTangentWeights3(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3, ::by_ref<::UnityEngine::Vector3>  w0, ::by_ref<::UnityEngine::Vector3>  w1, ::by_ref<::UnityEngine::Vector3>  w2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineHelpers*>(),
                        {"BezierTangentWeights3", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, p1, p2, p3, w0, w1, w2);
}
inline float_t Unity::Cinemachine::SplineHelpers::Bezier1(float_t  t, float_t  p0, float_t  p1, float_t  p2, float_t  p3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineHelpers*>(),
                        {"Bezier1", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, t, p0, p1, p2, p3);
}
inline float_t Unity::Cinemachine::SplineHelpers::BezierTangent1(float_t  t, float_t  p0, float_t  p1, float_t  p2, float_t  p3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineHelpers*>(),
                        {"BezierTangent1", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, t, p0, p1, p2, p3);
}
inline void Unity::Cinemachine::SplineHelpers::ComputeSmoothControlPoints(::by_ref<::ArrayW<::UnityEngine::Vector4>>  knot, ::by_ref<::ArrayW<::UnityEngine::Vector4>>  ctrl1, ::by_ref<::ArrayW<::UnityEngine::Vector4>>  ctrl2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineHelpers*>(),
                        {"ComputeSmoothControlPoints", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, knot, ctrl1, ctrl2);
}
inline void Unity::Cinemachine::SplineHelpers::ComputeSmoothControlPointsLooped(::by_ref<::ArrayW<::UnityEngine::Vector4>>  knot, ::by_ref<::ArrayW<::UnityEngine::Vector4>>  ctrl1, ::by_ref<::ArrayW<::UnityEngine::Vector4>>  ctrl2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineHelpers*>(),
                        {"ComputeSmoothControlPointsLooped", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, knot, ctrl1, ctrl2);
}
inline void Unity::Cinemachine::SplineHelpers::ComputeSmoothControlPoints(::by_ref<::ArrayW<::Unity::Mathematics::float3>>  knot, ::by_ref<::ArrayW<::Unity::Mathematics::float3>>  ctrl1, ::by_ref<::ArrayW<::Unity::Mathematics::float3>>  ctrl2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineHelpers*>(),
                        {"ComputeSmoothControlPoints", {}, {::i2c::type_of<::by_ref<::ArrayW<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::Unity::Mathematics::float3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, knot, ctrl1, ctrl2);
}
inline void Unity::Cinemachine::SplineHelpers::ComputeSmoothControlPointsLooped(::by_ref<::ArrayW<::Unity::Mathematics::float3>>  knot, ::by_ref<::ArrayW<::Unity::Mathematics::float3>>  ctrl1, ::by_ref<::ArrayW<::Unity::Mathematics::float3>>  ctrl2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineHelpers*>(),
                        {"ComputeSmoothControlPointsLooped", {}, {::i2c::type_of<::by_ref<::ArrayW<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::Unity::Mathematics::float3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, knot, ctrl1, ctrl2);
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::SplineHelpers::SplineHelpers()   {
}
