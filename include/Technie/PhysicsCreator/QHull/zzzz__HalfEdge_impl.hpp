#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/QHull/HalfEdge.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__HalfEdge_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Face_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Vertex_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::HalfEdge._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::HalfEdge::*)(::Technie::PhysicsCreator::QHull::Vertex*, ::Technie::PhysicsCreator::QHull::Face*)>(&::Technie::PhysicsCreator::QHull::HalfEdge::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaddcd2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {".ctor", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::HalfEdge._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::HalfEdge::*)()>(&::Technie::PhysicsCreator::QHull::HalfEdge::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadddd94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::HalfEdge.setNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::HalfEdge::*)(::Technie::PhysicsCreator::QHull::HalfEdge*)>(&::Technie::PhysicsCreator::QHull::HalfEdge::setNext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadddd9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"setNext", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::HalfEdge.getNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::HalfEdge* (::Technie::PhysicsCreator::QHull::HalfEdge::*)()>(&::Technie::PhysicsCreator::QHull::HalfEdge::getNext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadddda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"getNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::HalfEdge.setPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::HalfEdge::*)(::Technie::PhysicsCreator::QHull::HalfEdge*)>(&::Technie::PhysicsCreator::QHull::HalfEdge::setPrev)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaddddac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"setPrev", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::HalfEdge.getPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::HalfEdge* (::Technie::PhysicsCreator::QHull::HalfEdge::*)()>(&::Technie::PhysicsCreator::QHull::HalfEdge::getPrev)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaddddb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"getPrev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::HalfEdge.getFace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::Face* (::Technie::PhysicsCreator::QHull::HalfEdge::*)()>(&::Technie::PhysicsCreator::QHull::HalfEdge::getFace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaddddbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"getFace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::HalfEdge.getOpposite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::HalfEdge* (::Technie::PhysicsCreator::QHull::HalfEdge::*)()>(&::Technie::PhysicsCreator::QHull::HalfEdge::getOpposite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaddddc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"getOpposite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::HalfEdge.setOpposite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::HalfEdge::*)(::Technie::PhysicsCreator::QHull::HalfEdge*)>(&::Technie::PhysicsCreator::QHull::HalfEdge::setOpposite)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xadddcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"setOpposite", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::HalfEdge.head
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::Vertex* (::Technie::PhysicsCreator::QHull::HalfEdge::*)()>(&::Technie::PhysicsCreator::QHull::HalfEdge::head)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaddddcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"head", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::HalfEdge.tail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::Vertex* (::Technie::PhysicsCreator::QHull::HalfEdge::*)()>(&::Technie::PhysicsCreator::QHull::HalfEdge::tail)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaddc6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"tail", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::HalfEdge.oppositeFace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::Face* (::Technie::PhysicsCreator::QHull::HalfEdge::*)()>(&::Technie::PhysicsCreator::QHull::HalfEdge::oppositeFace)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaddd1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"oppositeFace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::HalfEdge.getVertexString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Technie::PhysicsCreator::QHull::HalfEdge::*)()>(&::Technie::PhysicsCreator::QHull::HalfEdge::getVertexString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xaddd734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"getVertexString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::HalfEdge.length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Technie::PhysicsCreator::QHull::HalfEdge::*)()>(&::Technie::PhysicsCreator::QHull::HalfEdge::length)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaddddd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::HalfEdge.lengthSquared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Technie::PhysicsCreator::QHull::HalfEdge::*)()>(&::Technie::PhysicsCreator::QHull::HalfEdge::lengthSquared)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaddc688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"lengthSquared", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Technie::PhysicsCreator::QHull::Vertex*& Technie::PhysicsCreator::QHull::HalfEdge::__cordl_internal_get_vertex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertex;
}
constexpr ::Technie::PhysicsCreator::QHull::Vertex* const& Technie::PhysicsCreator::QHull::HalfEdge::__cordl_internal_get_vertex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertex;
}
constexpr void Technie::PhysicsCreator::QHull::HalfEdge::__cordl_internal_set_vertex(::Technie::PhysicsCreator::QHull::Vertex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertex = value;
}
constexpr ::Technie::PhysicsCreator::QHull::Face*& Technie::PhysicsCreator::QHull::HalfEdge::__cordl_internal_get_face()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___face;
}
constexpr ::Technie::PhysicsCreator::QHull::Face* const& Technie::PhysicsCreator::QHull::HalfEdge::__cordl_internal_get_face() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___face;
}
constexpr void Technie::PhysicsCreator::QHull::HalfEdge::__cordl_internal_set_face(::Technie::PhysicsCreator::QHull::Face*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___face = value;
}
constexpr ::Technie::PhysicsCreator::QHull::HalfEdge*& Technie::PhysicsCreator::QHull::HalfEdge::__cordl_internal_get_next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr ::Technie::PhysicsCreator::QHull::HalfEdge* const& Technie::PhysicsCreator::QHull::HalfEdge::__cordl_internal_get_next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr void Technie::PhysicsCreator::QHull::HalfEdge::__cordl_internal_set_next(::Technie::PhysicsCreator::QHull::HalfEdge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___next = value;
}
constexpr ::Technie::PhysicsCreator::QHull::HalfEdge*& Technie::PhysicsCreator::QHull::HalfEdge::__cordl_internal_get_prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr ::Technie::PhysicsCreator::QHull::HalfEdge* const& Technie::PhysicsCreator::QHull::HalfEdge::__cordl_internal_get_prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr void Technie::PhysicsCreator::QHull::HalfEdge::__cordl_internal_set_prev(::Technie::PhysicsCreator::QHull::HalfEdge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prev = value;
}
constexpr ::Technie::PhysicsCreator::QHull::HalfEdge*& Technie::PhysicsCreator::QHull::HalfEdge::__cordl_internal_get_opposite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___opposite;
}
constexpr ::Technie::PhysicsCreator::QHull::HalfEdge* const& Technie::PhysicsCreator::QHull::HalfEdge::__cordl_internal_get_opposite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___opposite;
}
constexpr void Technie::PhysicsCreator::QHull::HalfEdge::__cordl_internal_set_opposite(::Technie::PhysicsCreator::QHull::HalfEdge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___opposite = value;
}
inline void Technie::PhysicsCreator::QHull::HalfEdge::_ctor(::Technie::PhysicsCreator::QHull::Vertex*  v, ::Technie::PhysicsCreator::QHull::Face*  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {".ctor", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v, f);
}
inline void Technie::PhysicsCreator::QHull::HalfEdge::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::QHull::HalfEdge::setNext(::Technie::PhysicsCreator::QHull::HalfEdge*  edge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"setNext", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, edge);
}
inline ::Technie::PhysicsCreator::QHull::HalfEdge* Technie::PhysicsCreator::QHull::HalfEdge::getNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"getNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::HalfEdge*>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::QHull::HalfEdge::setPrev(::Technie::PhysicsCreator::QHull::HalfEdge*  edge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"setPrev", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, edge);
}
inline ::Technie::PhysicsCreator::QHull::HalfEdge* Technie::PhysicsCreator::QHull::HalfEdge::getPrev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"getPrev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::HalfEdge*>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::QHull::Face* Technie::PhysicsCreator::QHull::HalfEdge::getFace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"getFace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::Face*>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::QHull::HalfEdge* Technie::PhysicsCreator::QHull::HalfEdge::getOpposite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"getOpposite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::HalfEdge*>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::QHull::HalfEdge::setOpposite(::Technie::PhysicsCreator::QHull::HalfEdge*  edge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"setOpposite", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, edge);
}
inline ::Technie::PhysicsCreator::QHull::Vertex* Technie::PhysicsCreator::QHull::HalfEdge::head()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"head", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::Vertex*>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::QHull::Vertex* Technie::PhysicsCreator::QHull::HalfEdge::tail()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"tail", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::Vertex*>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::QHull::Face* Technie::PhysicsCreator::QHull::HalfEdge::oppositeFace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"oppositeFace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::Face*>(this, ___internal_method);
}
inline ::StringW Technie::PhysicsCreator::QHull::HalfEdge::getVertexString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"getVertexString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline double_t Technie::PhysicsCreator::QHull::HalfEdge::length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Technie::PhysicsCreator::QHull::HalfEdge::lengthSquared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(),
                        {"lengthSquared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::QHull::HalfEdge* Technie::PhysicsCreator::QHull::HalfEdge::New_ctor(::Technie::PhysicsCreator::QHull::Vertex*  v, ::Technie::PhysicsCreator::QHull::Face*  f)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::QHull::HalfEdge*>(v, f));
}
inline ::Technie::PhysicsCreator::QHull::HalfEdge* Technie::PhysicsCreator::QHull::HalfEdge::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::QHull::HalfEdge*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::QHull::HalfEdge::HalfEdge()   {
}
