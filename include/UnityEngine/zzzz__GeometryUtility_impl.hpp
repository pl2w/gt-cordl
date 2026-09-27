#pragma once
// IWYU pragma private; include "UnityEngine/GeometryUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GeometryUtility_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::GeometryUtility.CalculateFrustumPlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Plane> (*)(::UnityEngine::Camera*)>(&::UnityEngine::GeometryUtility::CalculateFrustumPlanes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb57565c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateFrustumPlanes", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.CalculateFrustumPlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::ArrayW<::UnityEngine::Plane>)>(&::UnityEngine::GeometryUtility::CalculateFrustumPlanes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb5756bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateFrustumPlanes", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.CalculateFrustumPlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Matrix4x4, ::ArrayW<::UnityEngine::Plane>)>(&::UnityEngine::GeometryUtility::CalculateFrustumPlanes)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb57573c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateFrustumPlanes", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.CalculateBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Matrix4x4)>(&::UnityEngine::GeometryUtility::CalculateBounds)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb57592c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.TestPlanesAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Plane>, ::UnityEngine::Bounds)>(&::UnityEngine::GeometryUtility::TestPlanesAABB)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb575b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"TestPlanesAABB", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Plane>>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.Internal_ExtractPlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<::UnityEngine::Plane>>, ::UnityEngine::Matrix4x4)>(&::UnityEngine::GeometryUtility::Internal_ExtractPlanes)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb575818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_ExtractPlanes", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Plane>>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.Internal_CalculateBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Matrix4x4)>(&::UnityEngine::GeometryUtility::Internal_CalculateBounds)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb575a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_CalculateBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.TestPlanesAABB_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::GeometryUtility::TestPlanesAABB_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb575bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"TestPlanesAABB_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.Internal_ExtractPlanes_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::GeometryUtility::Internal_ExtractPlanes_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb575c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_ExtractPlanes_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.Internal_CalculateBounds_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::GeometryUtility::Internal_CalculateBounds_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb575c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_CalculateBounds_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityEngine::Plane> UnityEngine::GeometryUtility::CalculateFrustumPlanes(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateFrustumPlanes", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Plane>>(nullptr, ___internal_method, camera);
}
inline void UnityEngine::GeometryUtility::CalculateFrustumPlanes(::UnityEngine::Camera*  camera, ::ArrayW<::UnityEngine::Plane>  planes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateFrustumPlanes", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, planes);
}
inline void UnityEngine::GeometryUtility::CalculateFrustumPlanes(::UnityEngine::Matrix4x4  worldToProjectionMatrix, ::ArrayW<::UnityEngine::Plane>  planes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateFrustumPlanes", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldToProjectionMatrix, planes);
}
inline ::UnityEngine::Bounds UnityEngine::GeometryUtility::CalculateBounds(::ArrayW<::UnityEngine::Vector3>  positions, ::UnityEngine::Matrix4x4  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, positions, transform);
}
inline bool UnityEngine::GeometryUtility::TestPlanesAABB(::ArrayW<::UnityEngine::Plane>  planes, ::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"TestPlanesAABB", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Plane>>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, planes, bounds);
}
inline void UnityEngine::GeometryUtility::Internal_ExtractPlanes(::by_ref<::ArrayW<::UnityEngine::Plane>>  planes, ::UnityEngine::Matrix4x4  worldToProjectionMatrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_ExtractPlanes", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Plane>>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, planes, worldToProjectionMatrix);
}
inline ::UnityEngine::Bounds UnityEngine::GeometryUtility::Internal_CalculateBounds(::ArrayW<::UnityEngine::Vector3>  positions, ::UnityEngine::Matrix4x4  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_CalculateBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, positions, transform);
}
inline bool UnityEngine::GeometryUtility::TestPlanesAABB_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  planes, ::by_ref<::UnityEngine::Bounds>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"TestPlanesAABB_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, planes, bounds);
}
inline void UnityEngine::GeometryUtility::Internal_ExtractPlanes_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  planes, ::by_ref<::UnityEngine::Matrix4x4>  worldToProjectionMatrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_ExtractPlanes_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, planes, worldToProjectionMatrix);
}
inline void UnityEngine::GeometryUtility::Internal_CalculateBounds_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  positions, ::by_ref<::UnityEngine::Matrix4x4>  transform, ::by_ref<::UnityEngine::Bounds>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_CalculateBounds_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, positions, transform, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::GeometryUtility::GeometryUtility()   {
}
