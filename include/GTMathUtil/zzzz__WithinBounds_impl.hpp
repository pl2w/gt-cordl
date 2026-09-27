#pragma once
// IWYU pragma private; include "GTMathUtil/WithinBounds.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GTMathUtil/zzzz__WithinBounds_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
#include "UnityEngine/zzzz__SphereCollider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GTMathUtil::WithinBounds.PointWithinBoxColliderBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::BoxCollider*)>(&::GTMathUtil::WithinBounds::PointWithinBoxColliderBounds)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5b795ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GTMathUtil::WithinBounds*>(),
                        {"PointWithinBoxColliderBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::BoxCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GTMathUtil::WithinBounds.PointWithinCapsuleColliderBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::CapsuleCollider*)>(&::GTMathUtil::WithinBounds::PointWithinCapsuleColliderBounds)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x5b7967c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GTMathUtil::WithinBounds*>(),
                        {"PointWithinCapsuleColliderBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::CapsuleCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GTMathUtil::WithinBounds.PointWithinSphereColliderBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::SphereCollider*)>(&::GTMathUtil::WithinBounds::PointWithinSphereColliderBounds)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b79aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GTMathUtil::WithinBounds*>(),
                        {"PointWithinSphereColliderBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::SphereCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GTMathUtil::WithinBounds._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GTMathUtil::WithinBounds::*)()>(&::GTMathUtil::WithinBounds::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GTMathUtil::WithinBounds*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GTMathUtil::WithinBounds::PointWithinBoxColliderBounds(::UnityEngine::Vector3  point, ::UnityEngine::BoxCollider*  boxCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GTMathUtil::WithinBounds*>(),
                        {"PointWithinBoxColliderBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::BoxCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, point, boxCollider);
}
inline bool GTMathUtil::WithinBounds::PointWithinCapsuleColliderBounds(::UnityEngine::Vector3  point, ::UnityEngine::CapsuleCollider*  capsuleCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GTMathUtil::WithinBounds*>(),
                        {"PointWithinCapsuleColliderBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::CapsuleCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, point, capsuleCollider);
}
inline bool GTMathUtil::WithinBounds::PointWithinSphereColliderBounds(::UnityEngine::Vector3  point, ::UnityEngine::SphereCollider*  sphereCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GTMathUtil::WithinBounds*>(),
                        {"PointWithinSphereColliderBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::SphereCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, point, sphereCollider);
}
inline void GTMathUtil::WithinBounds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GTMathUtil::WithinBounds*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GTMathUtil::WithinBounds* GTMathUtil::WithinBounds::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GTMathUtil::WithinBounds*>());
}
// Ctor Parameters []
constexpr ::GTMathUtil::WithinBounds::WithinBounds()   {
}
