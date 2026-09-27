#pragma once
// IWYU pragma private; include "Oculus/Interaction/SurfaceUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__SurfaceUtils_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ISurfacePatch_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::SurfaceUtils.ComputeDistanceAbove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Oculus::Interaction::Surfaces::ISurfacePatch*, ::UnityEngine::Vector3, float_t)>(&::Oculus::Interaction::SurfaceUtils::ComputeDistanceAbove)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa48d2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceUtils*>(),
                        {"ComputeDistanceAbove", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurfacePatch*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SurfaceUtils.ComputeTangentDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Oculus::Interaction::Surfaces::ISurfacePatch*, ::UnityEngine::Vector3, float_t)>(&::Oculus::Interaction::SurfaceUtils::ComputeTangentDistance)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xa48d460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceUtils*>(),
                        {"ComputeTangentDistance", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurfacePatch*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SurfaceUtils.ComputeDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Oculus::Interaction::Surfaces::ISurfacePatch*, ::UnityEngine::Vector3, float_t)>(&::Oculus::Interaction::SurfaceUtils::ComputeDepth)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa48d6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceUtils*>(),
                        {"ComputeDepth", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurfacePatch*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SurfaceUtils.ComputeDistanceFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Oculus::Interaction::Surfaces::ISurfacePatch*, ::UnityEngine::Vector3, float_t)>(&::Oculus::Interaction::SurfaceUtils::ComputeDistanceFrom)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa48d6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceUtils*>(),
                        {"ComputeDistanceFrom", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurfacePatch*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Oculus::Interaction::SurfaceUtils::ComputeDistanceAbove(::Oculus::Interaction::Surfaces::ISurfacePatch*  surfacePatch, ::UnityEngine::Vector3  point, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceUtils*>(),
                        {"ComputeDistanceAbove", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurfacePatch*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, surfacePatch, point, radius);
}
inline float_t Oculus::Interaction::SurfaceUtils::ComputeTangentDistance(::Oculus::Interaction::Surfaces::ISurfacePatch*  surfacePatch, ::UnityEngine::Vector3  point, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceUtils*>(),
                        {"ComputeTangentDistance", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurfacePatch*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, surfacePatch, point, radius);
}
inline float_t Oculus::Interaction::SurfaceUtils::ComputeDepth(::Oculus::Interaction::Surfaces::ISurfacePatch*  surfacePatch, ::UnityEngine::Vector3  point, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceUtils*>(),
                        {"ComputeDepth", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurfacePatch*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, surfacePatch, point, radius);
}
inline float_t Oculus::Interaction::SurfaceUtils::ComputeDistanceFrom(::Oculus::Interaction::Surfaces::ISurfacePatch*  surfacePatch, ::UnityEngine::Vector3  point, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceUtils*>(),
                        {"ComputeDistanceFrom", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurfacePatch*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, surfacePatch, point, radius);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::SurfaceUtils::SurfaceUtils()   {
}
