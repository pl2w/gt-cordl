#pragma once
// IWYU pragma private; include "Oculus/Interaction/Collisions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__Collisions_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Collisions.ClosestPointToColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Collider*>)>(&::Oculus::Interaction::Collisions::ClosestPointToColliders)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa400128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Collisions*>(),
                        {"ClosestPointToColliders", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Collisions.ClosestPointToCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Collider*)>(&::Oculus::Interaction::Collisions::ClosestPointToCollider)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xa40024c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Collisions*>(),
                        {"ClosestPointToCollider", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Collisions.IsCapsuleWithinColliderApprox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Collider*)>(&::Oculus::Interaction::Collisions::IsCapsuleWithinColliderApprox)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa4004d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Collisions*>(),
                        {"IsCapsuleWithinColliderApprox", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Collisions.IsPointWithinCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Collider*)>(&::Oculus::Interaction::Collisions::IsPointWithinCollider)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa40073c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Collisions*>(),
                        {"IsPointWithinCollider", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Collisions.IsSphereWithinCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Collider*)>(&::Oculus::Interaction::Collisions::IsSphereWithinCollider)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa4006e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Collisions*>(),
                        {"IsSphereWithinCollider", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 Oculus::Interaction::Collisions::ClosestPointToColliders(::UnityEngine::Vector3  point, ::ArrayW<::UnityEngine::Collider*>  colliders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Collisions*>(),
                        {"ClosestPointToColliders", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, point, colliders);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Collisions::ClosestPointToCollider(::UnityEngine::Vector3  point, ::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Collisions*>(),
                        {"ClosestPointToCollider", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, point, collider);
}
inline bool Oculus::Interaction::Collisions::IsCapsuleWithinColliderApprox(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, float_t  radius, ::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Collisions*>(),
                        {"IsCapsuleWithinColliderApprox", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, p0, p1, radius, collider);
}
inline bool Oculus::Interaction::Collisions::IsPointWithinCollider(::UnityEngine::Vector3  point, ::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Collisions*>(),
                        {"IsPointWithinCollider", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, point, collider);
}
inline bool Oculus::Interaction::Collisions::IsSphereWithinCollider(::UnityEngine::Vector3  point, float_t  radius, ::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Collisions*>(),
                        {"IsSphereWithinCollider", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, point, radius, collider);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Collisions::Collisions()   {
}
