#pragma once
// IWYU pragma private; include "Pathfinding/GraphUpdateShape.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__GraphUpdateShape_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::GraphUpdateShape.get_points
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::Pathfinding::GraphUpdateShape::*)()>(&::Pathfinding::GraphUpdateShape::get_points)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e52488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"get_points", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateShape.set_points
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateShape::*)(::ArrayW<::UnityEngine::Vector3>)>(&::Pathfinding::GraphUpdateShape::set_points)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5e52490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"set_points", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateShape.get_convex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GraphUpdateShape::*)()>(&::Pathfinding::GraphUpdateShape::get_convex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e52544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"get_convex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateShape.set_convex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateShape::*)(bool)>(&::Pathfinding::GraphUpdateShape::set_convex)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e5254c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"set_convex", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateShape._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateShape::*)()>(&::Pathfinding::GraphUpdateShape::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5e52584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateShape._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateShape::*)(::ArrayW<::UnityEngine::Vector3>, bool, ::UnityEngine::Matrix4x4, float_t)>(&::Pathfinding::GraphUpdateShape::_ctor)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5e518f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateShape.CalculateConvexHull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateShape::*)()>(&::Pathfinding::GraphUpdateShape::CalculateConvexHull)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e524d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"CalculateConvexHull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateShape.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Pathfinding::GraphUpdateShape::*)()>(&::Pathfinding::GraphUpdateShape::GetBounds)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e51b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"GetBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateShape.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Matrix4x4, float_t)>(&::Pathfinding::GraphUpdateShape::GetBounds)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5e51708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"GetBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateShape.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Pathfinding::GraphUpdateShape::GetBounds)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5e5264c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"GetBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateShape.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GraphUpdateShape::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::GraphUpdateShape::Contains)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e48dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"Contains", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateShape.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GraphUpdateShape::*)(::UnityEngine::Vector3)>(&::Pathfinding::GraphUpdateShape::Contains)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5e5281c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector3>& Pathfinding::GraphUpdateShape::__cordl_internal_get__points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____points;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& Pathfinding::GraphUpdateShape::__cordl_internal_get__points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____points;
}
constexpr void Pathfinding::GraphUpdateShape::__cordl_internal_set__points(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____points = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& Pathfinding::GraphUpdateShape::__cordl_internal_get__convexPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____convexPoints;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& Pathfinding::GraphUpdateShape::__cordl_internal_get__convexPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____convexPoints;
}
constexpr void Pathfinding::GraphUpdateShape::__cordl_internal_set__convexPoints(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____convexPoints = value;
}
constexpr bool& Pathfinding::GraphUpdateShape::__cordl_internal_get__convex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____convex;
}
constexpr bool const& Pathfinding::GraphUpdateShape::__cordl_internal_get__convex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____convex;
}
constexpr void Pathfinding::GraphUpdateShape::__cordl_internal_set__convex(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____convex = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::GraphUpdateShape::__cordl_internal_get_right()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___right;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::GraphUpdateShape::__cordl_internal_get_right() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___right;
}
constexpr void Pathfinding::GraphUpdateShape::__cordl_internal_set_right(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___right = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::GraphUpdateShape::__cordl_internal_get_forward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forward;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::GraphUpdateShape::__cordl_internal_get_forward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forward;
}
constexpr void Pathfinding::GraphUpdateShape::__cordl_internal_set_forward(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forward = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::GraphUpdateShape::__cordl_internal_get_up()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___up;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::GraphUpdateShape::__cordl_internal_get_up() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___up;
}
constexpr void Pathfinding::GraphUpdateShape::__cordl_internal_set_up(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___up = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::GraphUpdateShape::__cordl_internal_get_origin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origin;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::GraphUpdateShape::__cordl_internal_get_origin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origin;
}
constexpr void Pathfinding::GraphUpdateShape::__cordl_internal_set_origin(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___origin = value;
}
constexpr float_t& Pathfinding::GraphUpdateShape::__cordl_internal_get_minimumHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumHeight;
}
constexpr float_t const& Pathfinding::GraphUpdateShape::__cordl_internal_get_minimumHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumHeight;
}
constexpr void Pathfinding::GraphUpdateShape::__cordl_internal_set_minimumHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minimumHeight = value;
}
inline ::ArrayW<::UnityEngine::Vector3> Pathfinding::GraphUpdateShape::get_points()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"get_points", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void Pathfinding::GraphUpdateShape::set_points(::ArrayW<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"set_points", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::GraphUpdateShape::get_convex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"get_convex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::GraphUpdateShape::set_convex(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"set_convex", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::GraphUpdateShape::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphUpdateShape::_ctor(::ArrayW<::UnityEngine::Vector3>  points, bool  convex, ::UnityEngine::Matrix4x4  matrix, float_t  minimumHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points, convex, matrix, minimumHeight);
}
inline void Pathfinding::GraphUpdateShape::CalculateConvexHull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"CalculateConvexHull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bounds Pathfinding::GraphUpdateShape::GetBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"GetBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline ::UnityEngine::Bounds Pathfinding::GraphUpdateShape::GetBounds(::ArrayW<::UnityEngine::Vector3>  points, ::UnityEngine::Matrix4x4  matrix, float_t  minimumHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"GetBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, points, matrix, minimumHeight);
}
inline ::UnityEngine::Bounds Pathfinding::GraphUpdateShape::GetBounds(::ArrayW<::UnityEngine::Vector3>  points, ::UnityEngine::Vector3  right, ::UnityEngine::Vector3  up, ::UnityEngine::Vector3  forward, ::UnityEngine::Vector3  origin, float_t  minimumHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"GetBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, points, right, up, forward, origin, minimumHeight);
}
inline bool Pathfinding::GraphUpdateShape::Contains(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"Contains", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline bool Pathfinding::GraphUpdateShape::Contains(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateShape*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point);
}
inline ::Pathfinding::GraphUpdateShape* Pathfinding::GraphUpdateShape::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GraphUpdateShape*>());
}
inline ::Pathfinding::GraphUpdateShape* Pathfinding::GraphUpdateShape::New_ctor(::ArrayW<::UnityEngine::Vector3>  points, bool  convex, ::UnityEngine::Matrix4x4  matrix, float_t  minimumHeight)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GraphUpdateShape*>(points, convex, matrix, minimumHeight));
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphUpdateShape::GraphUpdateShape()   {
}
