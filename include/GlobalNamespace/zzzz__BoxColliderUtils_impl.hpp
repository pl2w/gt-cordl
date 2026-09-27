#pragma once
// IWYU pragma private; include "GlobalNamespace/BoxColliderUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BoxColliderUtils_def.hpp"
#include "GlobalNamespace/zzzz__BoundsInt_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BoxColliderUtils.GetWorldToNormalizedBoxMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::BoxCollider*)>(&::GlobalNamespace::BoxColliderUtils::GetWorldToNormalizedBoxMatrix)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5b42e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoxColliderUtils*>(),
                        {"GetWorldToNormalizedBoxMatrix", {}, {::i2c::type_of<::UnityEngine::BoxCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoxColliderUtils.DoesBoxContainPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::BoxCollider*, ::UnityEngine::Vector3)>(&::GlobalNamespace::BoxColliderUtils::DoesBoxContainPoint)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b42fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoxColliderUtils*>(),
                        {"DoesBoxContainPoint", {}, {::i2c::type_of<::UnityEngine::BoxCollider*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoxColliderUtils.DoesBoxContainBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::BoxCollider*, ::UnityEngine::BoxCollider*)>(&::GlobalNamespace::BoxColliderUtils::DoesBoxContainBox)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5b43064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoxColliderUtils*>(),
                        {"DoesBoxContainBox", {}, {::i2c::type_of<::UnityEngine::BoxCollider*>(), ::i2c::type_of<::UnityEngine::BoxCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoxColliderUtils.DoesBoxContainRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::BoxCollider*, ::GlobalNamespace::BoundsInt)>(&::GlobalNamespace::BoxColliderUtils::DoesBoxContainRegion)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5b43338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoxColliderUtils*>(),
                        {"DoesBoxContainRegion", {}, {::i2c::type_of<::UnityEngine::BoxCollider*>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Matrix4x4 GlobalNamespace::BoxColliderUtils::GetWorldToNormalizedBoxMatrix(::UnityEngine::BoxCollider*  boxCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoxColliderUtils*>(),
                        {"GetWorldToNormalizedBoxMatrix", {}, {::i2c::type_of<::UnityEngine::BoxCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, boxCollider);
}
inline bool GlobalNamespace::BoxColliderUtils::DoesBoxContainPoint(::UnityEngine::BoxCollider*  boxCollider, ::UnityEngine::Vector3  worldPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoxColliderUtils*>(),
                        {"DoesBoxContainPoint", {}, {::i2c::type_of<::UnityEngine::BoxCollider*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, boxCollider, worldPoint);
}
inline bool GlobalNamespace::BoxColliderUtils::DoesBoxContainBox(::UnityEngine::BoxCollider*  containerBox, ::UnityEngine::BoxCollider*  containedBox)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoxColliderUtils*>(),
                        {"DoesBoxContainBox", {}, {::i2c::type_of<::UnityEngine::BoxCollider*>(), ::i2c::type_of<::UnityEngine::BoxCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, containerBox, containedBox);
}
inline bool GlobalNamespace::BoxColliderUtils::DoesBoxContainRegion(::UnityEngine::BoxCollider*  box, ::GlobalNamespace::BoundsInt  regionBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoxColliderUtils*>(),
                        {"DoesBoxContainRegion", {}, {::i2c::type_of<::UnityEngine::BoxCollider*>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, box, regionBounds);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BoxColliderUtils::BoxColliderUtils()   {
}
