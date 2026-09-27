#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineMath.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineMath_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::SplineMath.RayLineParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::UnityEngine::Splines::SplineMath::RayLineParameter)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb3260f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineMath*>(),
                        {"RayLineParameter", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineMath.RayLineDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::UnityEngine::Splines::SplineMath::RayLineDistance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb32618c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineMath*>(),
                        {"RayLineDistance", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineMath.RayLineNearestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::Unity::Mathematics::float3,::Unity::Mathematics::float3> (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::UnityEngine::Splines::SplineMath::RayLineNearestPoint)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb3261ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineMath*>(),
                        {"RayLineNearestPoint", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineMath.RayLineNearestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::Unity::Mathematics::float3,::Unity::Mathematics::float3> (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::Splines::SplineMath::RayLineNearestPoint)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb326248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineMath*>(),
                        {"RayLineNearestPoint", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineMath.PointLineNearestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::by_ref<float_t>)>(&::UnityEngine::Splines::SplineMath::PointLineNearestPoint)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xb3263d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineMath*>(),
                        {"PointLineNearestPoint", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineMath.DistancePointLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::UnityEngine::Splines::SplineMath::DistancePointLine)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb32653c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineMath*>(),
                        {"DistancePointLine", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineMath.GetUnitCircleTangentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Splines::SplineMath::GetUnitCircleTangentLength)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb3265fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineMath*>(),
                        {"GetUnitCircleTangentLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t UnityEngine::Splines::SplineMath::RayLineParameter(::Unity::Mathematics::float3  ro, ::Unity::Mathematics::float3  rd, ::Unity::Mathematics::float3  lineOrigin, ::Unity::Mathematics::float3  lineDir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineMath*>(),
                        {"RayLineParameter", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ro, rd, lineOrigin, lineDir);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineMath::RayLineDistance(::Unity::Mathematics::float3  ro, ::Unity::Mathematics::float3  rd, ::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineMath*>(),
                        {"RayLineDistance", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, ro, rd, a, b);
}
inline ::System::ValueTuple_2<::Unity::Mathematics::float3,::Unity::Mathematics::float3> UnityEngine::Splines::SplineMath::RayLineNearestPoint(::Unity::Mathematics::float3  ro, ::Unity::Mathematics::float3  rd, ::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineMath*>(),
                        {"RayLineNearestPoint", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Unity::Mathematics::float3,::Unity::Mathematics::float3>>(nullptr, ___internal_method, ro, rd, a, b);
}
inline ::System::ValueTuple_2<::Unity::Mathematics::float3,::Unity::Mathematics::float3> UnityEngine::Splines::SplineMath::RayLineNearestPoint(::Unity::Mathematics::float3  ro, ::Unity::Mathematics::float3  rd, ::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::by_ref<float_t>  rayParam, ::by_ref<float_t>  lineParam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineMath*>(),
                        {"RayLineNearestPoint", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Unity::Mathematics::float3,::Unity::Mathematics::float3>>(nullptr, ___internal_method, ro, rd, a, b, rayParam, lineParam);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineMath::PointLineNearestPoint(::Unity::Mathematics::float3  p, ::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::by_ref<float_t>  lineParam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineMath*>(),
                        {"PointLineNearestPoint", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, p, a, b, lineParam);
}
inline float_t UnityEngine::Splines::SplineMath::DistancePointLine(::Unity::Mathematics::float3  p, ::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineMath*>(),
                        {"DistancePointLine", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, p, a, b);
}
inline float_t UnityEngine::Splines::SplineMath::GetUnitCircleTangentLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineMath*>(),
                        {"GetUnitCircleTangentLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineMath::SplineMath()   {
}
