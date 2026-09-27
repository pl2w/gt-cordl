#pragma once
// IWYU pragma private; include "Pathfinding/Util/GraphTransform.hpp"
#include "Pathfinding/zzzz__Int3_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/Util/zzzz__GraphTransform_def.hpp"
#include "Pathfinding/Util/zzzz__IMovementPlane_def.hpp"
#include "Pathfinding/Util/zzzz__ITransform_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Util::GraphTransform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::GraphTransform::*)(::UnityEngine::Matrix4x4)>(&::Pathfinding::Util::GraphTransform::_ctor)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x5ed7d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphTransform.WorldUpAtGraphPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Util::GraphTransform::*)(::UnityEngine::Vector3)>(&::Pathfinding::Util::GraphTransform::WorldUpAtGraphPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ed82d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"WorldUpAtGraphPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphTransform.MatrixIsTranslational
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Matrix4x4)>(&::Pathfinding::Util::GraphTransform::MatrixIsTranslational)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ed81a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"MatrixIsTranslational", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphTransform.Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Util::GraphTransform::*)(::UnityEngine::Vector3)>(&::Pathfinding::Util::GraphTransform::Transform)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ed82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphTransform.TransformVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Util::GraphTransform::*)(::UnityEngine::Vector3)>(&::Pathfinding::Util::GraphTransform::TransformVector)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ed8288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"TransformVector", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphTransform.Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::GraphTransform::*)(::ArrayW<::Pathfinding::Int3>)>(&::Pathfinding::Util::GraphTransform::Transform)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5ed8344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"Transform", {}, {::i2c::type_of<::ArrayW<::Pathfinding::Int3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphTransform.Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::GraphTransform::*)(::ArrayW<::UnityEngine::Vector3>)>(&::Pathfinding::Util::GraphTransform::Transform)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5ed8488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"Transform", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphTransform.InverseTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Util::GraphTransform::*)(::UnityEngine::Vector3)>(&::Pathfinding::Util::GraphTransform::InverseTransform)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ed859c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"InverseTransform", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphTransform.InverseTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Int3 (::Pathfinding::Util::GraphTransform::*)(::Pathfinding::Int3)>(&::Pathfinding::Util::GraphTransform::InverseTransform)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ed8600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"InverseTransform", {}, {::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphTransform.InverseTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::GraphTransform::*)(::ArrayW<::Pathfinding::Int3>)>(&::Pathfinding::Util::GraphTransform::InverseTransform)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5ed868c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"InverseTransform", {}, {::i2c::type_of<::ArrayW<::Pathfinding::Int3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphTransform.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Util::GraphTransform* (*)(::Pathfinding::Util::GraphTransform*, ::UnityEngine::Matrix4x4)>(&::Pathfinding::Util::GraphTransform::op_Multiply)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ed8750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphTransform.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Util::GraphTransform* (*)(::UnityEngine::Matrix4x4, ::Pathfinding::Util::GraphTransform*)>(&::Pathfinding::Util::GraphTransform::op_Multiply)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ed8810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"op_Multiply", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::Pathfinding::Util::GraphTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphTransform.Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Pathfinding::Util::GraphTransform::*)(::UnityEngine::Bounds)>(&::Pathfinding::Util::GraphTransform::Transform)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5ed88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphTransform.InverseTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Pathfinding::Util::GraphTransform::*)(::UnityEngine::Bounds)>(&::Pathfinding::Util::GraphTransform::InverseTransform)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5ed8c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"InverseTransform", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphTransform.Pathfinding_Util_IMovementPlane_ToPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Pathfinding::Util::GraphTransform::*)(::UnityEngine::Vector3)>(&::Pathfinding::Util::GraphTransform::Pathfinding_Util_IMovementPlane_ToPlane)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ed8f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"Pathfinding.Util.IMovementPlane.ToPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphTransform.Pathfinding_Util_IMovementPlane_ToPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Pathfinding::Util::GraphTransform::*)(::UnityEngine::Vector3, ::by_ref<float_t>)>(&::Pathfinding::Util::GraphTransform::Pathfinding_Util_IMovementPlane_ToPlane)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ed8fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"Pathfinding.Util.IMovementPlane.ToPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphTransform.Pathfinding_Util_IMovementPlane_ToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Util::GraphTransform::*)(::UnityEngine::Vector2, float_t)>(&::Pathfinding::Util::GraphTransform::Pathfinding_Util_IMovementPlane_ToWorld)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ed8fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"Pathfinding.Util.IMovementPlane.ToWorld", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Pathfinding::Util::GraphTransform::__cordl_internal_get_identity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___identity;
}
constexpr bool const& Pathfinding::Util::GraphTransform::__cordl_internal_get_identity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___identity;
}
constexpr void Pathfinding::Util::GraphTransform::__cordl_internal_set_identity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___identity = value;
}
constexpr bool& Pathfinding::Util::GraphTransform::__cordl_internal_get_onlyTranslational()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyTranslational;
}
constexpr bool const& Pathfinding::Util::GraphTransform::__cordl_internal_get_onlyTranslational() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyTranslational;
}
constexpr void Pathfinding::Util::GraphTransform::__cordl_internal_set_onlyTranslational(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlyTranslational = value;
}
constexpr bool& Pathfinding::Util::GraphTransform::__cordl_internal_get_isXY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isXY;
}
constexpr bool const& Pathfinding::Util::GraphTransform::__cordl_internal_get_isXY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isXY;
}
constexpr void Pathfinding::Util::GraphTransform::__cordl_internal_set_isXY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isXY = value;
}
constexpr bool& Pathfinding::Util::GraphTransform::__cordl_internal_get_isXZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isXZ;
}
constexpr bool const& Pathfinding::Util::GraphTransform::__cordl_internal_get_isXZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isXZ;
}
constexpr void Pathfinding::Util::GraphTransform::__cordl_internal_set_isXZ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isXZ = value;
}
constexpr ::UnityEngine::Matrix4x4& Pathfinding::Util::GraphTransform::__cordl_internal_get_matrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matrix;
}
constexpr ::UnityEngine::Matrix4x4 const& Pathfinding::Util::GraphTransform::__cordl_internal_get_matrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matrix;
}
constexpr void Pathfinding::Util::GraphTransform::__cordl_internal_set_matrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matrix = value;
}
constexpr ::UnityEngine::Matrix4x4& Pathfinding::Util::GraphTransform::__cordl_internal_get_inverseMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inverseMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& Pathfinding::Util::GraphTransform::__cordl_internal_get_inverseMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inverseMatrix;
}
constexpr void Pathfinding::Util::GraphTransform::__cordl_internal_set_inverseMatrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inverseMatrix = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::Util::GraphTransform::__cordl_internal_get_up()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___up;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::Util::GraphTransform::__cordl_internal_get_up() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___up;
}
constexpr void Pathfinding::Util::GraphTransform::__cordl_internal_set_up(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___up = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::Util::GraphTransform::__cordl_internal_get_translation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___translation;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::Util::GraphTransform::__cordl_internal_get_translation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___translation;
}
constexpr void Pathfinding::Util::GraphTransform::__cordl_internal_set_translation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___translation = value;
}
constexpr ::Pathfinding::Int3& Pathfinding::Util::GraphTransform::__cordl_internal_get_i3translation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i3translation;
}
constexpr ::Pathfinding::Int3 const& Pathfinding::Util::GraphTransform::__cordl_internal_get_i3translation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i3translation;
}
constexpr void Pathfinding::Util::GraphTransform::__cordl_internal_set_i3translation(::Pathfinding::Int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___i3translation = value;
}
constexpr ::UnityEngine::Quaternion& Pathfinding::Util::GraphTransform::__cordl_internal_get_rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr ::UnityEngine::Quaternion const& Pathfinding::Util::GraphTransform::__cordl_internal_get_rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr void Pathfinding::Util::GraphTransform::__cordl_internal_set_rotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotation = value;
}
constexpr ::UnityEngine::Quaternion& Pathfinding::Util::GraphTransform::__cordl_internal_get_inverseRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inverseRotation;
}
constexpr ::UnityEngine::Quaternion const& Pathfinding::Util::GraphTransform::__cordl_internal_get_inverseRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inverseRotation;
}
constexpr void Pathfinding::Util::GraphTransform::__cordl_internal_set_inverseRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inverseRotation = value;
}
inline void Pathfinding::Util::GraphTransform::setStaticF_identityTransform(::Pathfinding::Util::GraphTransform*  value)  {
::cordl_internals::setStaticField<::Pathfinding::Util::GraphTransform*, "identityTransform", ::Pathfinding::Util::GraphTransform*>(std::forward<::Pathfinding::Util::GraphTransform*>(value));
}
inline ::Pathfinding::Util::GraphTransform* Pathfinding::Util::GraphTransform::getStaticF_identityTransform()  {
return ::cordl_internals::getStaticField<::Pathfinding::Util::GraphTransform*, "identityTransform", ::Pathfinding::Util::GraphTransform*>();
}
inline void Pathfinding::Util::GraphTransform::_ctor(::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, matrix);
}
inline ::UnityEngine::Vector3 Pathfinding::Util::GraphTransform::WorldUpAtGraphPosition(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"WorldUpAtGraphPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, point);
}
inline bool Pathfinding::Util::GraphTransform::MatrixIsTranslational(::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"MatrixIsTranslational", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, matrix);
}
inline ::UnityEngine::Vector3 Pathfinding::Util::GraphTransform::Transform(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, point);
}
inline ::UnityEngine::Vector3 Pathfinding::Util::GraphTransform::TransformVector(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"TransformVector", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, point);
}
inline void Pathfinding::Util::GraphTransform::Transform(::ArrayW<::Pathfinding::Int3>  arr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"Transform", {}, {::i2c::type_of<::ArrayW<::Pathfinding::Int3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arr);
}
inline void Pathfinding::Util::GraphTransform::Transform(::ArrayW<::UnityEngine::Vector3>  arr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"Transform", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arr);
}
inline ::UnityEngine::Vector3 Pathfinding::Util::GraphTransform::InverseTransform(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"InverseTransform", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, point);
}
inline ::Pathfinding::Int3 Pathfinding::Util::GraphTransform::InverseTransform(::Pathfinding::Int3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"InverseTransform", {}, {::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Int3>(this, ___internal_method, point);
}
inline void Pathfinding::Util::GraphTransform::InverseTransform(::ArrayW<::Pathfinding::Int3>  arr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"InverseTransform", {}, {::i2c::type_of<::ArrayW<::Pathfinding::Int3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arr);
}
inline ::Pathfinding::Util::GraphTransform* Pathfinding::Util::GraphTransform::op_Multiply(::Pathfinding::Util::GraphTransform*  lhs, ::UnityEngine::Matrix4x4  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::GraphTransform*>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Pathfinding::Util::GraphTransform* Pathfinding::Util::GraphTransform::op_Multiply(::UnityEngine::Matrix4x4  lhs, ::Pathfinding::Util::GraphTransform*  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"op_Multiply", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::Pathfinding::Util::GraphTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::GraphTransform*>(nullptr, ___internal_method, lhs, rhs);
}
inline ::UnityEngine::Bounds Pathfinding::Util::GraphTransform::Transform(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, bounds);
}
inline ::UnityEngine::Bounds Pathfinding::Util::GraphTransform::InverseTransform(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"InverseTransform", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, bounds);
}
inline ::UnityEngine::Vector2 Pathfinding::Util::GraphTransform::Pathfinding_Util_IMovementPlane_ToPlane(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"Pathfinding.Util.IMovementPlane.ToPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, point);
}
inline ::UnityEngine::Vector2 Pathfinding::Util::GraphTransform::Pathfinding_Util_IMovementPlane_ToPlane(::UnityEngine::Vector3  point, ::by_ref<float_t>  elevation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"Pathfinding.Util.IMovementPlane.ToPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, point, elevation);
}
inline ::UnityEngine::Vector3 Pathfinding::Util::GraphTransform::Pathfinding_Util_IMovementPlane_ToWorld(::UnityEngine::Vector2  point, float_t  elevation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphTransform*>(),
                        {"Pathfinding.Util.IMovementPlane.ToWorld", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, point, elevation);
}
inline ::Pathfinding::Util::GraphTransform* Pathfinding::Util::GraphTransform::New_ctor(::UnityEngine::Matrix4x4  matrix)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::GraphTransform*>(matrix));
}
/// @brief Convert operator to "::Pathfinding::Util::IMovementPlane"
constexpr  Pathfinding::Util::GraphTransform::operator ::Pathfinding::Util::IMovementPlane*() noexcept {
return static_cast<::Pathfinding::Util::IMovementPlane*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::Util::IMovementPlane"
constexpr ::Pathfinding::Util::IMovementPlane* Pathfinding::Util::GraphTransform::i___Pathfinding__Util__IMovementPlane() noexcept {
return static_cast<::Pathfinding::Util::IMovementPlane*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Pathfinding::Util::ITransform"
constexpr  Pathfinding::Util::GraphTransform::operator ::Pathfinding::Util::ITransform*() noexcept {
return static_cast<::Pathfinding::Util::ITransform*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::Util::ITransform"
constexpr ::Pathfinding::Util::ITransform* Pathfinding::Util::GraphTransform::i___Pathfinding__Util__ITransform() noexcept {
return static_cast<::Pathfinding::Util::ITransform*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Util::GraphTransform::GraphTransform()   {
}
