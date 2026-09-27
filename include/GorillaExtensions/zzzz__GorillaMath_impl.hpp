#pragma once
// IWYU pragma private; include "GorillaExtensions/GorillaMath.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaExtensions/zzzz__GorillaMath_def.hpp"
#include "GorillaExtensions/zzzz__GorillaMath_FloatIntUnion_def.hpp"
#include "GorillaExtensions/zzzz__GorillaMath_RemapFloatInfo_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GorillaExtensions::GorillaMath.GetAngularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::GorillaExtensions::GorillaMath::GetAngularVelocity)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5cf785c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GorillaMath*>(),
                        {"GetAngularVelocity", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GorillaMath.FastInvSqrt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GorillaExtensions::GorillaMath::FastInvSqrt)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5cf7a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GorillaMath*>(),
                        {"FastInvSqrt", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GorillaMath.Dot2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Vector3>)>(&::GorillaExtensions::GorillaMath::Dot2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cf7a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GorillaMath*>(),
                        {"Dot2", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GorillaMath.RaycastToCappedCone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GorillaExtensions::GorillaMath::RaycastToCappedCone)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x5cf7a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GorillaMath*>(),
                        {"RaycastToCappedCone", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GorillaMath.LineSegClosestPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaExtensions::GorillaMath::LineSegClosestPoints)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5cf7e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GorillaMath*>(),
                        {"LineSegClosestPoints", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 GorillaExtensions::GorillaMath::GetAngularVelocity(::UnityEngine::Quaternion  oldRotation, ::UnityEngine::Quaternion  newRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GorillaMath*>(),
                        {"GetAngularVelocity", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, oldRotation, newRotation);
}
inline float_t GorillaExtensions::GorillaMath::FastInvSqrt(float_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GorillaMath*>(),
                        {"FastInvSqrt", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, z);
}
inline float_t GorillaExtensions::GorillaMath::Dot2(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GorillaMath*>(),
                        {"Dot2", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GorillaMath::RaycastToCappedCone(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rayOrigin, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rayDirection, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  coneTip, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  coneBase, /* [IsReadOnly] */ ::by_ref<float_t>  coneTipRadius, /* [IsReadOnly] */ ::by_ref<float_t>  coneBaseRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GorillaMath*>(),
                        {"RaycastToCappedCone", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, rayOrigin, rayDirection, coneTip, coneBase, coneTipRadius, coneBaseRadius);
}
inline void GorillaExtensions::GorillaMath::LineSegClosestPoints(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  u, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  v, ::by_ref<::UnityEngine::Vector3>  lineAPoint, ::by_ref<::UnityEngine::Vector3>  lineBPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GorillaMath*>(),
                        {"LineSegClosestPoints", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, u, b, v, lineAPoint, lineBPoint);
}
// Ctor Parameters []
constexpr ::GorillaExtensions::GorillaMath::GorillaMath()   {
}
