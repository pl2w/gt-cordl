#pragma once
// IWYU pragma private; include "Fusion/LagCompensatedHit.hpp"
#include "Fusion/LagCompensation/zzzz__HitType_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/zzzz__LagCompensatedHit_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxHit_def.hpp"
#include "Fusion/zzzz__Hitbox_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensatedHit.op_Explicit___Fusion__LagCompensatedHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::LagCompensatedHit (*)(::UnityEngine::RaycastHit)>(&::Fusion::LagCompensatedHit::op_Explicit___Fusion__LagCompensatedHit)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f948d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensatedHit>(),
                        {"op_Explicit", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensatedHit.op_Explicit___Fusion__LagCompensatedHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::LagCompensatedHit (*)(::UnityEngine::RaycastHit2D)>(&::Fusion::LagCompensatedHit::op_Explicit___Fusion__LagCompensatedHit)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f949c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensatedHit>(),
                        {"op_Explicit", {}, {::i2c::type_of<::UnityEngine::RaycastHit2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensatedHit.FromHitboxHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::LagCompensatedHit (*)(::by_ref<::Fusion::LagCompensation::HitboxHit>)>(&::Fusion::LagCompensatedHit::FromHitboxHit)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5f937bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensatedHit>(),
                        {"FromHitboxHit", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensatedHit.QuickSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*, int32_t, int32_t)>(&::Fusion::LagCompensatedHit::QuickSort)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5f94aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensatedHit>(),
                        {"QuickSort", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensatedHit.QuickSortDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*, int32_t, int32_t)>(&::Fusion::LagCompensatedHit::QuickSortDistance)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5f94cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensatedHit>(),
                        {"QuickSortDistance", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Fusion::LagCompensatedHit Fusion::LagCompensatedHit::op_Explicit___Fusion__LagCompensatedHit(::UnityEngine::RaycastHit  raycastHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensatedHit>(),
                        {"op_Explicit", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::LagCompensatedHit>(nullptr, ___internal_method, raycastHit);
}
inline ::Fusion::LagCompensatedHit Fusion::LagCompensatedHit::op_Explicit___Fusion__LagCompensatedHit(::UnityEngine::RaycastHit2D  raycastHit2D)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensatedHit>(),
                        {"op_Explicit", {}, {::i2c::type_of<::UnityEngine::RaycastHit2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::LagCompensatedHit>(nullptr, ___internal_method, raycastHit2D);
}
inline ::Fusion::LagCompensatedHit Fusion::LagCompensatedHit::FromHitboxHit(::by_ref<::Fusion::LagCompensation::HitboxHit>  hitboxHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensatedHit>(),
                        {"FromHitboxHit", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::LagCompensatedHit>(nullptr, ___internal_method, hitboxHit);
}
inline void Fusion::LagCompensatedHit::QuickSort(::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, int32_t  low, int32_t  high)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensatedHit>(),
                        {"QuickSort", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hits, low, high);
}
inline void Fusion::LagCompensatedHit::QuickSortDistance(::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, int32_t  low, int32_t  high)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensatedHit>(),
                        {"QuickSortDistance", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hits, low, high);
}
// Ctor Parameters [CppParam { name: "Type", ty: "::Fusion::LagCompensation::HitType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "HitboxColliderPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "HitboxColliderRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Distance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Hitbox", ty: "::UnityW<::Fusion::Hitbox>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Collider", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Collider2D", ty: "::UnityW<::UnityEngine::Collider2D>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sortAux", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::LagCompensatedHit::LagCompensatedHit(::Fusion::LagCompensation::HitType  Type, ::UnityW<::UnityEngine::GameObject>  GameObject, ::UnityEngine::Vector3  Normal, ::UnityEngine::Vector3  Point, ::UnityEngine::Vector3  HitboxColliderPosition, ::UnityEngine::Quaternion  HitboxColliderRotation, float_t  Distance, ::UnityW<::Fusion::Hitbox>  Hitbox, ::UnityW<::UnityEngine::Collider>  Collider, ::UnityW<::UnityEngine::Collider2D>  Collider2D, float_t  _sortAux) noexcept  {
this->Type = Type;
this->GameObject = GameObject;
this->Normal = Normal;
this->Point = Point;
this->HitboxColliderPosition = HitboxColliderPosition;
this->HitboxColliderRotation = HitboxColliderRotation;
this->Distance = Distance;
this->Hitbox = Hitbox;
this->Collider = Collider;
this->Collider2D = Collider2D;
this->_sortAux = _sortAux;
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensatedHit::LagCompensatedHit()   {
}
