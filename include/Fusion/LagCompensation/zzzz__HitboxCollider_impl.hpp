#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/HitboxCollider.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_BoxNarrowData_impl.hpp"
#include "Fusion/zzzz__HitboxTypes_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxCollider_def.hpp"
#include "Fusion/zzzz__Hitbox_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxCollider.get_LocalToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::Fusion::LagCompensation::HitboxCollider::*)()>(&::Fusion::LagCompensation::HitboxCollider::get_LocalToWorld)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6017f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxCollider>(),
                        {"get_LocalToWorld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxCollider.get_IsBoxNarrowDataInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::HitboxCollider::*)()>(&::Fusion::LagCompensation::HitboxCollider::get_IsBoxNarrowDataInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601bc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxCollider>(),
                        {"get_IsBoxNarrowDataInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxCollider.set_IsBoxNarrowDataInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxCollider::*)(bool)>(&::Fusion::LagCompensation::HitboxCollider::set_IsBoxNarrowDataInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601bc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxCollider>(),
                        {"set_IsBoxNarrowDataInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxCollider.get_CapsuleLocalTopCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Fusion::LagCompensation::HitboxCollider::*)()>(&::Fusion::LagCompensation::HitboxCollider::get_CapsuleLocalTopCenter)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6017ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxCollider>(),
                        {"get_CapsuleLocalTopCenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxCollider.get_CapsuleLocalBottomCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Fusion::LagCompensation::HitboxCollider::*)()>(&::Fusion::LagCompensation::HitboxCollider::get_CapsuleLocalBottomCenter)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6017e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxCollider>(),
                        {"get_CapsuleLocalBottomCenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxCollider.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Fusion::LagCompensation::HitboxCollider>, ::by_ref<::Fusion::LagCompensation::HitboxCollider>, float_t, ::by_ref<::Fusion::LagCompensation::HitboxCollider>)>(&::Fusion::LagCompensation::HitboxCollider::Lerp)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x601a130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxCollider>(),
                        {"Lerp", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxCollider>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxCollider.InitNarrowData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxCollider::*)()>(&::Fusion::LagCompensation::HitboxCollider::InitNarrowData)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x601a4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxCollider>(),
                        {"InitNarrowData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxCollider.ResetCachedMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxCollider::*)()>(&::Fusion::LagCompensation::HitboxCollider::ResetCachedMatrix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601bc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxCollider>(),
                        {"ResetCachedMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxCollider.CustomTRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::Fusion::LagCompensation::HitboxCollider::CustomTRS)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x601bb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxCollider>(),
                        {"CustomTRS", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Matrix4x4 Fusion::LagCompensation::HitboxCollider::get_LocalToWorld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxCollider>(),
                        {"get_LocalToWorld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(*this, ___internal_method);
}
inline bool Fusion::LagCompensation::HitboxCollider::get_IsBoxNarrowDataInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxCollider>(),
                        {"get_IsBoxNarrowDataInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Fusion::LagCompensation::HitboxCollider::set_IsBoxNarrowDataInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxCollider>(),
                        {"set_IsBoxNarrowDataInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Fusion::LagCompensation::HitboxCollider::get_CapsuleLocalTopCenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxCollider>(),
                        {"get_CapsuleLocalTopCenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 Fusion::LagCompensation::HitboxCollider::get_CapsuleLocalBottomCenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxCollider>(),
                        {"get_CapsuleLocalBottomCenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void Fusion::LagCompensation::HitboxCollider::Lerp(::by_ref<::Fusion::LagCompensation::HitboxCollider>  from, ::by_ref<::Fusion::LagCompensation::HitboxCollider>  to, float_t  alpha, ::by_ref<::Fusion::LagCompensation::HitboxCollider>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxCollider>(),
                        {"Lerp", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxCollider>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, alpha, result);
}
inline void Fusion::LagCompensation::HitboxCollider::InitNarrowData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxCollider>(),
                        {"InitNarrowData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::LagCompensation::HitboxCollider::ResetCachedMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxCollider>(),
                        {"ResetCachedMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::LagCompensation::HitboxCollider::CustomTRS(::by_ref<::UnityEngine::Matrix4x4>  res, ::UnityEngine::Vector3  t, ::UnityEngine::Quaternion  r, ::UnityEngine::Vector3  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxCollider>(),
                        {"CustomTRS", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, res, t, r, s);
}
// Ctor Parameters [CppParam { name: "Type", ty: "::Fusion::HitboxTypes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_cachedMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_matrixCalculated", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Offset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BoxExtents", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Radius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CapsuleExtents", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Active", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Hitbox", ty: "::UnityW<::Fusion::Hitbox>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "layerMask", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DebugTick", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Used", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Next", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BoxNarrowData", ty: "::GlobalNamespace::LagCompensationUtils_BoxNarrowData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_IsBoxNarrowDataInitialized_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::LagCompensation::HitboxCollider::HitboxCollider(::Fusion::HitboxTypes  Type, ::UnityEngine::Matrix4x4  _cachedMatrix, bool  _matrixCalculated, ::UnityEngine::Vector3  Offset, ::UnityEngine::Vector3  BoxExtents, float_t  Radius, float_t  CapsuleExtents, bool  Active, ::UnityW<::Fusion::Hitbox>  Hitbox, int32_t  layerMask, int32_t  DebugTick, bool  Used, int32_t  Next, ::GlobalNamespace::LagCompensationUtils_BoxNarrowData  BoxNarrowData, bool  _IsBoxNarrowDataInitialized_k__BackingField, ::UnityEngine::Vector3  Position, ::UnityEngine::Quaternion  Rotation) noexcept  {
this->Type = Type;
this->_cachedMatrix = _cachedMatrix;
this->_matrixCalculated = _matrixCalculated;
this->Offset = Offset;
this->BoxExtents = BoxExtents;
this->Radius = Radius;
this->CapsuleExtents = CapsuleExtents;
this->Active = Active;
this->Hitbox = Hitbox;
this->layerMask = layerMask;
this->DebugTick = DebugTick;
this->Used = Used;
this->Next = Next;
this->BoxNarrowData = BoxNarrowData;
this->_IsBoxNarrowDataInitialized_k__BackingField = _IsBoxNarrowDataInitialized_k__BackingField;
this->Position = Position;
this->Rotation = Rotation;
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::HitboxCollider::HitboxCollider()   {
}
