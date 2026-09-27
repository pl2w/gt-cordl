#pragma once
// IWYU pragma private; include "UnityEngine/Physics2D.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Physics2D_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__ContactFilter2D_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene2D_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_def.hpp"
#include "UnityEngine/zzzz__Rigidbody2D_def.hpp"
#include "UnityEngine/zzzz__SimulationMode2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Physics2D.get_defaultPhysicsScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PhysicsScene2D (*)()>(&::UnityEngine::Physics2D::get_defaultPhysicsScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb67b308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"get_defaultPhysicsScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.get_queriesHitTriggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Physics2D::get_queriesHitTriggers)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb67b310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"get_queriesHitTriggers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.get_simulationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SimulationMode2D (*)()>(&::UnityEngine::Physics2D::get_simulationMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb67b338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"get_simulationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Simulate_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::PhysicsScene2D, float_t, int32_t)>(&::UnityEngine::Physics2D::Simulate_Internal)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb679cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Simulate_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.SyncTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Physics2D::SyncTransforms)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb67b3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"SyncTransforms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, int32_t)>(&::UnityEngine::Physics2D::Linecast)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb67b3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Physics2D::Raycast)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb67b4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t)>(&::UnityEngine::Physics2D::Raycast)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb67b5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, int32_t)>(&::UnityEngine::Physics2D::Raycast)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb67b688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, int32_t, float_t)>(&::UnityEngine::Physics2D::Raycast)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb67b7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, int32_t, float_t, float_t)>(&::UnityEngine::Physics2D::Raycast)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb67b8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::RaycastHit2D>)>(&::UnityEngine::Physics2D::Raycast)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb67ba14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::RaycastHit2D>, float_t)>(&::UnityEngine::Physics2D::Raycast)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb67bad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*, float_t)>(&::UnityEngine::Physics2D::Raycast)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb67bb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.CircleCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, float_t, ::UnityEngine::Vector2, float_t, int32_t)>(&::UnityEngine::Physics2D::CircleCast)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb67bc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"CircleCast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetRayIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Ray, float_t, int32_t)>(&::UnityEngine::Physics2D::GetRayIntersection)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb67bd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersection", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetRayIntersectionAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (*)(::UnityEngine::Ray)>(&::UnityEngine::Physics2D::GetRayIntersectionAll)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb67be3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetRayIntersectionAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (*)(::UnityEngine::Ray, float_t)>(&::UnityEngine::Physics2D::GetRayIntersectionAll)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb67c010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetRayIntersectionAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (*)(::UnityEngine::Ray, float_t, int32_t)>(&::UnityEngine::Physics2D::GetRayIntersectionAll)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb67c084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetRayIntersectionAll_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t)>(&::UnityEngine::Physics2D::GetRayIntersectionAll_Internal)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xb67bea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetRayIntersectionNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit2D>, float_t, int32_t)>(&::UnityEngine::Physics2D::GetRayIntersectionNonAlloc)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb67c180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.OverlapPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::Collider2D*>)>(&::UnityEngine::Physics2D::OverlapPoint)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb67c208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"OverlapPoint", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.OverlapCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector2, float_t, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::Collider2D*>)>(&::UnityEngine::Physics2D::OverlapCircle)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb67c2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"OverlapCircle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::ArrayW<::UnityEngine::RaycastHit2D>, float_t)>(&::UnityEngine::Physics2D::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb67c350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetRayIntersectionNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit2D>)>(&::UnityEngine::Physics2D::GetRayIntersectionNonAlloc)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb67c3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetRayIntersectionNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit2D>, float_t)>(&::UnityEngine::Physics2D::GetRayIntersectionNonAlloc)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb67c474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Simulate_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::PhysicsScene2D>, float_t, int32_t)>(&::UnityEngine::Physics2D::Simulate_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb67b360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Simulate_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetRayIntersectionAll_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::PhysicsScene2D>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Physics2D::GetRayIntersectionAll_Internal_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb67c104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Physics2D::setStaticF_m_LastDisabledRigidbody2D(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>*, "m_LastDisabledRigidbody2D", ::UnityEngine::Physics2D*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>* UnityEngine::Physics2D::getStaticF_m_LastDisabledRigidbody2D()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>*, "m_LastDisabledRigidbody2D", ::UnityEngine::Physics2D*>();
}
inline ::UnityEngine::PhysicsScene2D UnityEngine::Physics2D::get_defaultPhysicsScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"get_defaultPhysicsScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsScene2D>(nullptr, ___internal_method);
}
inline bool UnityEngine::Physics2D::get_queriesHitTriggers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"get_queriesHitTriggers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::SimulationMode2D UnityEngine::Physics2D::get_simulationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"get_simulationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SimulationMode2D>(nullptr, ___internal_method);
}
inline bool UnityEngine::Physics2D::Simulate_Internal(::UnityEngine::PhysicsScene2D  physicsScene, float_t  deltaTime, int32_t  simulationLayers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Simulate_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, deltaTime, simulationLayers);
}
inline void UnityEngine::Physics2D::SyncTransforms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"SyncTransforms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::Physics2D::Linecast(::UnityEngine::Vector2  start, ::UnityEngine::Vector2  end, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(nullptr, ___internal_method, start, end, layerMask);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::Physics2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(nullptr, ___internal_method, origin, direction);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::Physics2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(nullptr, ___internal_method, origin, direction, distance);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::Physics2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(nullptr, ___internal_method, origin, direction, distance, layerMask);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::Physics2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, int32_t  layerMask, float_t  minDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(nullptr, ___internal_method, origin, direction, distance, layerMask, minDepth);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::Physics2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, /* [DefaultValue("Mathf.Infinity")] */ float_t  distance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("-Mathf.Infinity")] */ float_t  minDepth, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(nullptr, ___internal_method, origin, direction, distance, layerMask, minDepth, maxDepth);
}
inline int32_t UnityEngine::Physics2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, direction, contactFilter, results);
}
inline int32_t UnityEngine::Physics2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D>  results, /* [DefaultValue("Mathf.Infinity")] */ float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, direction, contactFilter, results, distance);
}
inline int32_t UnityEngine::Physics2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, ::UnityEngine::ContactFilter2D  contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*  results, /* [DefaultValue("Mathf.Infinity")] */ float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, direction, contactFilter, results, distance);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::Physics2D::CircleCast(::UnityEngine::Vector2  origin, float_t  radius, ::UnityEngine::Vector2  direction, float_t  distance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"CircleCast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(nullptr, ___internal_method, origin, radius, direction, distance, layerMask);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::Physics2D::GetRayIntersection(::UnityEngine::Ray  ray, float_t  distance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersection", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(nullptr, ___internal_method, ray, distance, layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit2D> UnityEngine::Physics2D::GetRayIntersectionAll(::UnityEngine::Ray  ray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit2D>>(nullptr, ___internal_method, ray);
}
inline ::ArrayW<::UnityEngine::RaycastHit2D> UnityEngine::Physics2D::GetRayIntersectionAll(::UnityEngine::Ray  ray, float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit2D>>(nullptr, ___internal_method, ray, distance);
}
inline ::ArrayW<::UnityEngine::RaycastHit2D> UnityEngine::Physics2D::GetRayIntersectionAll(::UnityEngine::Ray  ray, float_t  distance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit2D>>(nullptr, ___internal_method, ray, distance, layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit2D> UnityEngine::Physics2D::GetRayIntersectionAll_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  distance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit2D>>(nullptr, ___internal_method, physicsScene, origin, direction, distance, layerMask);
}
inline int32_t UnityEngine::Physics2D::GetRayIntersectionNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit2D>  results, float_t  distance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, results, distance, layerMask);
}
inline int32_t UnityEngine::Physics2D::OverlapPoint(::UnityEngine::Vector2  point, ::UnityEngine::ContactFilter2D  contactFilter, /* [Unmarshalled] */ ::ArrayW<::UnityEngine::Collider2D*>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"OverlapPoint", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, point, contactFilter, results);
}
inline int32_t UnityEngine::Physics2D::OverlapCircle(::UnityEngine::Vector2  point, float_t  radius, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::Collider2D*>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"OverlapCircle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, point, radius, contactFilter, results);
}
inline int32_t UnityEngine::Physics2D::RaycastNonAlloc(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, ::ArrayW<::UnityEngine::RaycastHit2D>  results, float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, direction, results, distance);
}
inline int32_t UnityEngine::Physics2D::GetRayIntersectionNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit2D>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, results);
}
inline int32_t UnityEngine::Physics2D::GetRayIntersectionNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit2D>  results, float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, results, distance);
}
inline bool UnityEngine::Physics2D::Simulate_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, float_t  deltaTime, int32_t  simulationLayers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Simulate_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, deltaTime, simulationLayers);
}
inline void UnityEngine::Physics2D::GetRayIntersectionAll_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  direction, float_t  distance, int32_t  layerMask, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene, origin, direction, distance, layerMask, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::Physics2D::Physics2D()   {
}
