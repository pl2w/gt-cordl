#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsScene2D.hpp"
#include "UnityEngine/zzzz__PhysicsScene2D_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableListWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__ContactFilter2D_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::PhysicsScene2D::*)()>(&::UnityEngine::PhysicsScene2D::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb679a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                    {::i2c::class_of<::UnityEngine::PhysicsScene2D>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::PhysicsScene2D)>(&::UnityEngine::PhysicsScene2D::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb679a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::PhysicsScene2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene2D::*)()>(&::UnityEngine::PhysicsScene2D::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb679a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                    {::i2c::class_of<::UnityEngine::PhysicsScene2D>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PhysicsScene2D::*)(::System::Object*)>(&::UnityEngine::PhysicsScene2D::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb679a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                    {::i2c::class_of<::UnityEngine::PhysicsScene2D>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::PhysicsScene2D)>(&::UnityEngine::PhysicsScene2D::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb679b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PhysicsScene2D::*)()>(&::UnityEngine::PhysicsScene2D::IsValid)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb679b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.IsValid_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::PhysicsScene2D)>(&::UnityEngine::PhysicsScene2D::IsValid_Internal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb679b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"IsValid_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Simulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PhysicsScene2D::*)(float_t)>(&::UnityEngine::PhysicsScene2D::Simulate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb679be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Simulate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Simulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PhysicsScene2D::*)(float_t, int32_t)>(&::UnityEngine::PhysicsScene2D::Simulate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb679be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Simulate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D)>(&::UnityEngine::PhysicsScene2D::Linecast)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb679d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Linecast_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D)>(&::UnityEngine::PhysicsScene2D::Linecast_Internal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb679dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Linecast_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, int32_t)>(&::UnityEngine::PhysicsScene2D::Raycast)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb679eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::UnityEngine::ContactFilter2D)>(&::UnityEngine::PhysicsScene2D::Raycast)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb67a158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::ArrayW<::UnityEngine::RaycastHit2D>, int32_t)>(&::UnityEngine::PhysicsScene2D::Raycast)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb67a1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::RaycastHit2D>)>(&::UnityEngine::PhysicsScene2D::Raycast)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb67a3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*)>(&::UnityEngine::PhysicsScene2D::Raycast)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb67a3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Raycast_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::UnityEngine::ContactFilter2D)>(&::UnityEngine::PhysicsScene2D::Raycast_Internal)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb67a0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.RaycastArray_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::RaycastHit2D>)>(&::UnityEngine::PhysicsScene2D::RaycastArray_Internal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb67a294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"RaycastArray_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.RaycastList_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*)>(&::UnityEngine::PhysicsScene2D::RaycastList_Internal)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb67a414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"RaycastList_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.CircleCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::Vector2, float_t, ::UnityEngine::Vector2, float_t, ::UnityEngine::ContactFilter2D)>(&::UnityEngine::PhysicsScene2D::CircleCast)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb67a78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"CircleCast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.CircleCast_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, float_t, ::UnityEngine::Vector2, float_t, ::UnityEngine::ContactFilter2D)>(&::UnityEngine::PhysicsScene2D::CircleCast_Internal)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb67a7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"CircleCast_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.GetRayIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::Ray, float_t, int32_t)>(&::UnityEngine::PhysicsScene2D::GetRayIntersection)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb67a8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"GetRayIntersection", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.GetRayIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::Ray, float_t, ::ArrayW<::UnityEngine::RaycastHit2D>, int32_t)>(&::UnityEngine::PhysicsScene2D::GetRayIntersection)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb67a9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"GetRayIntersection", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.GetRayIntersection_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t)>(&::UnityEngine::PhysicsScene2D::GetRayIntersection_Internal)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb67a944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"GetRayIntersection_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.GetRayIntersectionArray_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::ArrayW<::UnityEngine::RaycastHit2D>)>(&::UnityEngine::PhysicsScene2D::GetRayIntersectionArray_Internal)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb67a9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"GetRayIntersectionArray_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.OverlapPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::Collider2D*>)>(&::UnityEngine::PhysicsScene2D::OverlapPoint)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb67ac1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapPoint", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.OverlapPointArray_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::Collider2D*>)>(&::UnityEngine::PhysicsScene2D::OverlapPointArray_Internal)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb67ac4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapPointArray_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.OverlapCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::Vector2, float_t, ::ArrayW<::UnityEngine::Collider2D*>, int32_t)>(&::UnityEngine::PhysicsScene2D::OverlapCircle)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb67ad44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapCircle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.OverlapCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::Vector2, float_t, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::Collider2D*>)>(&::UnityEngine::PhysicsScene2D::OverlapCircle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb67aec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapCircle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.OverlapCircleArray_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, float_t, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::Collider2D*>)>(&::UnityEngine::PhysicsScene2D::OverlapCircleArray_Internal)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb67ae1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapCircleArray_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.OverlapBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::ArrayW<::UnityEngine::Collider2D*>, int32_t)>(&::UnityEngine::PhysicsScene2D::OverlapBox)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb67af64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapBox", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.OverlapBoxArray_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::Collider2D*>)>(&::UnityEngine::PhysicsScene2D::OverlapBoxArray_Internal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb67b054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapBoxArray_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.IsValid_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::PhysicsScene2D>)>(&::UnityEngine::PhysicsScene2D::IsValid_Internal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb679ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"IsValid_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Linecast_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::PhysicsScene2D>, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::ContactFilter2D>, ::by_ref<::UnityEngine::RaycastHit2D>)>(&::UnityEngine::PhysicsScene2D::Linecast_Internal_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb679e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Linecast_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Raycast_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::PhysicsScene2D>, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>, float_t, ::by_ref<::UnityEngine::ContactFilter2D>, ::by_ref<::UnityEngine::RaycastHit2D>)>(&::UnityEngine::PhysicsScene2D::Raycast_Internal_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb67a618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.RaycastArray_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::PhysicsScene2D>, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>, float_t, ::by_ref<::UnityEngine::ContactFilter2D>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::PhysicsScene2D::RaycastArray_Internal_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb67a694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"RaycastArray_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.RaycastList_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::PhysicsScene2D>, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>, float_t, ::by_ref<::UnityEngine::ContactFilter2D>, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(&::UnityEngine::PhysicsScene2D::RaycastList_Internal_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb67a710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"RaycastList_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.CircleCast_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::PhysicsScene2D>, ::by_ref<::UnityEngine::Vector2>, float_t, ::by_ref<::UnityEngine::Vector2>, float_t, ::by_ref<::UnityEngine::ContactFilter2D>, ::by_ref<::UnityEngine::RaycastHit2D>)>(&::UnityEngine::PhysicsScene2D::CircleCast_Internal_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb67a874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"CircleCast_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.GetRayIntersection_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::PhysicsScene2D>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, int32_t, ::by_ref<::UnityEngine::RaycastHit2D>)>(&::UnityEngine::PhysicsScene2D::GetRayIntersection_Internal_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb67ab24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"GetRayIntersection_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.GetRayIntersectionArray_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::PhysicsScene2D>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::PhysicsScene2D::GetRayIntersectionArray_Internal_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb67aba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"GetRayIntersectionArray_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.OverlapPointArray_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::PhysicsScene2D>, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::ContactFilter2D>, ::ArrayW<::UnityEngine::Collider2D*>)>(&::UnityEngine::PhysicsScene2D::OverlapPointArray_Internal_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb67ace8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapPointArray_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.OverlapCircleArray_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::PhysicsScene2D>, ::by_ref<::UnityEngine::Vector2>, float_t, ::by_ref<::UnityEngine::ContactFilter2D>, ::ArrayW<::UnityEngine::Collider2D*>)>(&::UnityEngine::PhysicsScene2D::OverlapCircleArray_Internal_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb67aef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapCircleArray_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.OverlapBoxArray_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::PhysicsScene2D>, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>, float_t, ::by_ref<::UnityEngine::ContactFilter2D>, ::ArrayW<::UnityEngine::Collider2D*>)>(&::UnityEngine::PhysicsScene2D::OverlapBoxArray_Internal_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb67b108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapBoxArray_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::PhysicsScene2D::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::PhysicsScene2D>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::PhysicsScene2D::op_Inequality(::UnityEngine::PhysicsScene2D  lhs, ::UnityEngine::PhysicsScene2D  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::PhysicsScene2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline int32_t UnityEngine::PhysicsScene2D::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::PhysicsScene2D>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::PhysicsScene2D::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::PhysicsScene2D>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::PhysicsScene2D::Equals(::UnityEngine::PhysicsScene2D  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::PhysicsScene2D::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::PhysicsScene2D::IsValid_Internal(::UnityEngine::PhysicsScene2D  physicsScene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"IsValid_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene);
}
inline bool UnityEngine::PhysicsScene2D::Simulate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Simulate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, deltaTime);
}
inline bool UnityEngine::PhysicsScene2D::Simulate(float_t  deltaTime, /* [DefaultValue("Physics2D.AllLayers")] */ int32_t  simulationLayers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Simulate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, deltaTime, simulationLayers);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::PhysicsScene2D::Linecast(::UnityEngine::Vector2  start, ::UnityEngine::Vector2  end, ::UnityEngine::ContactFilter2D  contactFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(*this, ___internal_method, start, end, contactFilter);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::PhysicsScene2D::Linecast_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  start, ::UnityEngine::Vector2  end, ::UnityEngine::ContactFilter2D  contactFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Linecast_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(nullptr, ___internal_method, physicsScene, start, end, contactFilter);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::PhysicsScene2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, /* [DefaultValue("Physics2D.DefaultRaycastLayers")] */ int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(*this, ___internal_method, origin, direction, distance, layerMask);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::PhysicsScene2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(*this, ___internal_method, origin, direction, distance, contactFilter);
}
inline int32_t UnityEngine::PhysicsScene2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::ArrayW<::UnityEngine::RaycastHit2D>  results, /* [DefaultValue("Physics2D.DefaultRaycastLayers")] */ int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, origin, direction, distance, results, layerMask);
}
inline int32_t UnityEngine::PhysicsScene2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, origin, direction, distance, contactFilter, results);
}
inline int32_t UnityEngine::PhysicsScene2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, origin, direction, distance, contactFilter, results);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::PhysicsScene2D::Raycast_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(nullptr, ___internal_method, physicsScene, origin, direction, distance, contactFilter);
}
inline int32_t UnityEngine::PhysicsScene2D::RaycastArray_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter, /* [NotNull] */ ::ArrayW<::UnityEngine::RaycastHit2D>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"RaycastArray_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, origin, direction, distance, contactFilter, results);
}
inline int32_t UnityEngine::PhysicsScene2D::RaycastList_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter, /* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"RaycastList_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, origin, direction, distance, contactFilter, results);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::PhysicsScene2D::CircleCast(::UnityEngine::Vector2  origin, float_t  radius, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"CircleCast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(*this, ___internal_method, origin, radius, direction, distance, contactFilter);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::PhysicsScene2D::CircleCast_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  origin, float_t  radius, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"CircleCast_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(nullptr, ___internal_method, physicsScene, origin, radius, direction, distance, contactFilter);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::PhysicsScene2D::GetRayIntersection(::UnityEngine::Ray  ray, float_t  distance, /* [DefaultValue("Physics2D.DefaultRaycastLayers")] */ int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"GetRayIntersection", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(*this, ___internal_method, ray, distance, layerMask);
}
inline int32_t UnityEngine::PhysicsScene2D::GetRayIntersection(::UnityEngine::Ray  ray, float_t  distance, ::ArrayW<::UnityEngine::RaycastHit2D>  results, /* [DefaultValue("Physics2D.DefaultRaycastLayers")] */ int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"GetRayIntersection", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, ray, distance, results, layerMask);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::PhysicsScene2D::GetRayIntersection_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  distance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"GetRayIntersection_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(nullptr, ___internal_method, physicsScene, origin, direction, distance, layerMask);
}
inline int32_t UnityEngine::PhysicsScene2D::GetRayIntersectionArray_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  distance, int32_t  layerMask, /* [NotNull] */ ::ArrayW<::UnityEngine::RaycastHit2D>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"GetRayIntersectionArray_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, origin, direction, distance, layerMask, results);
}
inline int32_t UnityEngine::PhysicsScene2D::OverlapPoint(::UnityEngine::Vector2  point, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::Collider2D*>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapPoint", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, point, contactFilter, results);
}
inline int32_t UnityEngine::PhysicsScene2D::OverlapPointArray_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  point, ::UnityEngine::ContactFilter2D  contactFilter, /* [NotNull] [Unmarshalled] */ ::ArrayW<::UnityEngine::Collider2D*>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapPointArray_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, point, contactFilter, results);
}
inline int32_t UnityEngine::PhysicsScene2D::OverlapCircle(::UnityEngine::Vector2  point, float_t  radius, ::ArrayW<::UnityEngine::Collider2D*>  results, /* [DefaultValue("Physics2D.DefaultRaycastLayers")] */ int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapCircle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, point, radius, results, layerMask);
}
inline int32_t UnityEngine::PhysicsScene2D::OverlapCircle(::UnityEngine::Vector2  point, float_t  radius, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::Collider2D*>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapCircle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, point, radius, contactFilter, results);
}
inline int32_t UnityEngine::PhysicsScene2D::OverlapCircleArray_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  point, float_t  radius, ::UnityEngine::ContactFilter2D  contactFilter, /* [NotNull] [Unmarshalled] */ ::ArrayW<::UnityEngine::Collider2D*>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapCircleArray_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, point, radius, contactFilter, results);
}
inline int32_t UnityEngine::PhysicsScene2D::OverlapBox(::UnityEngine::Vector2  point, ::UnityEngine::Vector2  size, float_t  angle, ::ArrayW<::UnityEngine::Collider2D*>  results, /* [DefaultValue("Physics2D.DefaultRaycastLayers")] */ int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapBox", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, point, size, angle, results, layerMask);
}
inline int32_t UnityEngine::PhysicsScene2D::OverlapBoxArray_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  point, ::UnityEngine::Vector2  size, float_t  angle, ::UnityEngine::ContactFilter2D  contactFilter, /* [NotNull] [Unmarshalled] */ ::ArrayW<::UnityEngine::Collider2D*>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapBoxArray_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, point, size, angle, contactFilter, results);
}
inline bool UnityEngine::PhysicsScene2D::IsValid_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"IsValid_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene);
}
inline void UnityEngine::PhysicsScene2D::Linecast_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  start, ::by_ref<::UnityEngine::Vector2>  end, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::by_ref<::UnityEngine::RaycastHit2D>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Linecast_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene, start, end, contactFilter, ret);
}
inline void UnityEngine::PhysicsScene2D::Raycast_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  origin, ::by_ref<::UnityEngine::Vector2>  direction, float_t  distance, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::by_ref<::UnityEngine::RaycastHit2D>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene, origin, direction, distance, contactFilter, ret);
}
inline int32_t UnityEngine::PhysicsScene2D::RaycastArray_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  origin, ::by_ref<::UnityEngine::Vector2>  direction, float_t  distance, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"RaycastArray_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, origin, direction, distance, contactFilter, results);
}
inline int32_t UnityEngine::PhysicsScene2D::RaycastList_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  origin, ::by_ref<::UnityEngine::Vector2>  direction, float_t  distance, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"RaycastList_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, origin, direction, distance, contactFilter, results);
}
inline void UnityEngine::PhysicsScene2D::CircleCast_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  origin, float_t  radius, ::by_ref<::UnityEngine::Vector2>  direction, float_t  distance, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::by_ref<::UnityEngine::RaycastHit2D>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"CircleCast_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene, origin, radius, direction, distance, contactFilter, ret);
}
inline void UnityEngine::PhysicsScene2D::GetRayIntersection_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  direction, float_t  distance, int32_t  layerMask, ::by_ref<::UnityEngine::RaycastHit2D>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"GetRayIntersection_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene, origin, direction, distance, layerMask, ret);
}
inline int32_t UnityEngine::PhysicsScene2D::GetRayIntersectionArray_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  direction, float_t  distance, int32_t  layerMask, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"GetRayIntersectionArray_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, origin, direction, distance, layerMask, results);
}
inline int32_t UnityEngine::PhysicsScene2D::OverlapPointArray_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  point, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::ArrayW<::UnityEngine::Collider2D*>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapPointArray_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, point, contactFilter, results);
}
inline int32_t UnityEngine::PhysicsScene2D::OverlapCircleArray_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  point, float_t  radius, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::ArrayW<::UnityEngine::Collider2D*>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapCircleArray_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, point, radius, contactFilter, results);
}
inline int32_t UnityEngine::PhysicsScene2D::OverlapBoxArray_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  point, ::by_ref<::UnityEngine::Vector2>  size, float_t  angle, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::ArrayW<::UnityEngine::Collider2D*>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"OverlapBoxArray_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, point, size, angle, contactFilter, results);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::PhysicsScene2D>"
constexpr  UnityEngine::PhysicsScene2D::operator ::System::IEquatable_1<::UnityEngine::PhysicsScene2D>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::PhysicsScene2D>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::PhysicsScene2D>"
constexpr ::System::IEquatable_1<::UnityEngine::PhysicsScene2D>* UnityEngine::PhysicsScene2D::i___System__IEquatable_1___UnityEngine__PhysicsScene2D_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::PhysicsScene2D>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::PhysicsScene2D::PhysicsScene2D(int32_t  m_Handle) noexcept  {
this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::PhysicsScene2D::PhysicsScene2D()   {
}
