#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/QHull/Vertex.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Vertex_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Face_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Point3d_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Vertex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::Vertex::*)()>(&::Technie::PhysicsCreator::QHull::Vertex::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaddf934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Vertex*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Vertex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::Vertex::*)(double_t, double_t, double_t, int32_t)>(&::Technie::PhysicsCreator::QHull::Vertex::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xade1fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Vertex*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Technie::PhysicsCreator::QHull::Point3d*& Technie::PhysicsCreator::QHull::Vertex::__cordl_internal_get_pnt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pnt;
}
constexpr ::Technie::PhysicsCreator::QHull::Point3d* const& Technie::PhysicsCreator::QHull::Vertex::__cordl_internal_get_pnt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pnt;
}
constexpr void Technie::PhysicsCreator::QHull::Vertex::__cordl_internal_set_pnt(::Technie::PhysicsCreator::QHull::Point3d*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pnt = value;
}
constexpr int32_t& Technie::PhysicsCreator::QHull::Vertex::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& Technie::PhysicsCreator::QHull::Vertex::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void Technie::PhysicsCreator::QHull::Vertex::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr ::Technie::PhysicsCreator::QHull::Vertex*& Technie::PhysicsCreator::QHull::Vertex::__cordl_internal_get_prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr ::Technie::PhysicsCreator::QHull::Vertex* const& Technie::PhysicsCreator::QHull::Vertex::__cordl_internal_get_prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr void Technie::PhysicsCreator::QHull::Vertex::__cordl_internal_set_prev(::Technie::PhysicsCreator::QHull::Vertex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prev = value;
}
constexpr ::Technie::PhysicsCreator::QHull::Vertex*& Technie::PhysicsCreator::QHull::Vertex::__cordl_internal_get_next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr ::Technie::PhysicsCreator::QHull::Vertex* const& Technie::PhysicsCreator::QHull::Vertex::__cordl_internal_get_next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr void Technie::PhysicsCreator::QHull::Vertex::__cordl_internal_set_next(::Technie::PhysicsCreator::QHull::Vertex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___next = value;
}
constexpr ::Technie::PhysicsCreator::QHull::Face*& Technie::PhysicsCreator::QHull::Vertex::__cordl_internal_get_face()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___face;
}
constexpr ::Technie::PhysicsCreator::QHull::Face* const& Technie::PhysicsCreator::QHull::Vertex::__cordl_internal_get_face() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___face;
}
constexpr void Technie::PhysicsCreator::QHull::Vertex::__cordl_internal_set_face(::Technie::PhysicsCreator::QHull::Face*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___face = value;
}
inline void Technie::PhysicsCreator::QHull::Vertex::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Vertex*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::QHull::Vertex::_ctor(double_t  x, double_t  y, double_t  z, int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Vertex*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, z, idx);
}
inline ::Technie::PhysicsCreator::QHull::Vertex* Technie::PhysicsCreator::QHull::Vertex::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::QHull::Vertex*>());
}
inline ::Technie::PhysicsCreator::QHull::Vertex* Technie::PhysicsCreator::QHull::Vertex::New_ctor(double_t  x, double_t  y, double_t  z, int32_t  idx)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::QHull::Vertex*>(x, y, z, idx));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::QHull::Vertex::Vertex()   {
}
