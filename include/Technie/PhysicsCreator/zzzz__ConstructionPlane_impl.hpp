#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/ConstructionPlane.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__ConstructionPlane_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::ConstructionPlane._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::ConstructionPlane::*)(::UnityEngine::Vector3)>(&::Technie::PhysicsCreator::ConstructionPlane::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xadc3998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ConstructionPlane*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::ConstructionPlane._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::ConstructionPlane::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Technie::PhysicsCreator::ConstructionPlane::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xadc3c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ConstructionPlane*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::ConstructionPlane._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::ConstructionPlane::*)(::Technie::PhysicsCreator::ConstructionPlane*, float_t)>(&::Technie::PhysicsCreator::ConstructionPlane::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xadc61a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ConstructionPlane*>(),
                        {".ctor", {}, {::i2c::type_of<::Technie::PhysicsCreator::ConstructionPlane*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::ConstructionPlane._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::ConstructionPlane::*)(::Technie::PhysicsCreator::ConstructionPlane*, ::UnityEngine::Vector3)>(&::Technie::PhysicsCreator::ConstructionPlane::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xadc622c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ConstructionPlane*>(),
                        {".ctor", {}, {::i2c::type_of<::Technie::PhysicsCreator::ConstructionPlane*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::ConstructionPlane.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::ConstructionPlane::*)()>(&::Technie::PhysicsCreator::ConstructionPlane::Init)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xadc5fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ConstructionPlane*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Technie::PhysicsCreator::ConstructionPlane::__cordl_internal_get_center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr ::UnityEngine::Vector3 const& Technie::PhysicsCreator::ConstructionPlane::__cordl_internal_get_center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr void Technie::PhysicsCreator::ConstructionPlane::__cordl_internal_set_center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___center = value;
}
constexpr ::UnityEngine::Vector3& Technie::PhysicsCreator::ConstructionPlane::__cordl_internal_get_normal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normal;
}
constexpr ::UnityEngine::Vector3 const& Technie::PhysicsCreator::ConstructionPlane::__cordl_internal_get_normal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normal;
}
constexpr void Technie::PhysicsCreator::ConstructionPlane::__cordl_internal_set_normal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normal = value;
}
constexpr ::UnityEngine::Vector3& Technie::PhysicsCreator::ConstructionPlane::__cordl_internal_get_tangent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangent;
}
constexpr ::UnityEngine::Vector3 const& Technie::PhysicsCreator::ConstructionPlane::__cordl_internal_get_tangent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangent;
}
constexpr void Technie::PhysicsCreator::ConstructionPlane::__cordl_internal_set_tangent(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tangent = value;
}
constexpr ::UnityEngine::Quaternion& Technie::PhysicsCreator::ConstructionPlane::__cordl_internal_get_rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr ::UnityEngine::Quaternion const& Technie::PhysicsCreator::ConstructionPlane::__cordl_internal_get_rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr void Technie::PhysicsCreator::ConstructionPlane::__cordl_internal_set_rotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotation = value;
}
constexpr ::UnityEngine::Matrix4x4& Technie::PhysicsCreator::ConstructionPlane::__cordl_internal_get_planeToWorld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___planeToWorld;
}
constexpr ::UnityEngine::Matrix4x4 const& Technie::PhysicsCreator::ConstructionPlane::__cordl_internal_get_planeToWorld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___planeToWorld;
}
constexpr void Technie::PhysicsCreator::ConstructionPlane::__cordl_internal_set_planeToWorld(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___planeToWorld = value;
}
constexpr ::UnityEngine::Matrix4x4& Technie::PhysicsCreator::ConstructionPlane::__cordl_internal_get_worldToPlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldToPlane;
}
constexpr ::UnityEngine::Matrix4x4 const& Technie::PhysicsCreator::ConstructionPlane::__cordl_internal_get_worldToPlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldToPlane;
}
constexpr void Technie::PhysicsCreator::ConstructionPlane::__cordl_internal_set_worldToPlane(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldToPlane = value;
}
inline void Technie::PhysicsCreator::ConstructionPlane::_ctor(::UnityEngine::Vector3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ConstructionPlane*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Technie::PhysicsCreator::ConstructionPlane::_ctor(::UnityEngine::Vector3  c, ::UnityEngine::Vector3  n, ::UnityEngine::Vector3  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ConstructionPlane*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c, n, t);
}
inline void Technie::PhysicsCreator::ConstructionPlane::_ctor(::Technie::PhysicsCreator::ConstructionPlane*  basePlane, float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ConstructionPlane*>(),
                        {".ctor", {}, {::i2c::type_of<::Technie::PhysicsCreator::ConstructionPlane*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, basePlane, angle);
}
inline void Technie::PhysicsCreator::ConstructionPlane::_ctor(::Technie::PhysicsCreator::ConstructionPlane*  basePlane, ::UnityEngine::Vector3  positionOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ConstructionPlane*>(),
                        {".ctor", {}, {::i2c::type_of<::Technie::PhysicsCreator::ConstructionPlane*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, basePlane, positionOffset);
}
inline void Technie::PhysicsCreator::ConstructionPlane::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::ConstructionPlane*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::ConstructionPlane* Technie::PhysicsCreator::ConstructionPlane::New_ctor(::UnityEngine::Vector3  c)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::ConstructionPlane*>(c));
}
inline ::Technie::PhysicsCreator::ConstructionPlane* Technie::PhysicsCreator::ConstructionPlane::New_ctor(::UnityEngine::Vector3  c, ::UnityEngine::Vector3  n, ::UnityEngine::Vector3  t)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::ConstructionPlane*>(c, n, t));
}
inline ::Technie::PhysicsCreator::ConstructionPlane* Technie::PhysicsCreator::ConstructionPlane::New_ctor(::Technie::PhysicsCreator::ConstructionPlane*  basePlane, float_t  angle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::ConstructionPlane*>(basePlane, angle));
}
inline ::Technie::PhysicsCreator::ConstructionPlane* Technie::PhysicsCreator::ConstructionPlane::New_ctor(::Technie::PhysicsCreator::ConstructionPlane*  basePlane, ::UnityEngine::Vector3  positionOffset)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::ConstructionPlane*>(basePlane, positionOffset));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::ConstructionPlane::ConstructionPlane()   {
}
