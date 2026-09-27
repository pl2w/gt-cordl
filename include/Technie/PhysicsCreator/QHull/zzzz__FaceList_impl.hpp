#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/QHull/FaceList.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__FaceList_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Face_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::FaceList.clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::FaceList::*)()>(&::Technie::PhysicsCreator::QHull::FaceList::clear)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xadddd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::FaceList*>(),
                        {"clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::FaceList.add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::FaceList::*)(::Technie::PhysicsCreator::QHull::Face*)>(&::Technie::PhysicsCreator::QHull::FaceList::add)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xadddcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::FaceList*>(),
                        {"add", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::FaceList.first
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::Face* (::Technie::PhysicsCreator::QHull::FaceList::*)()>(&::Technie::PhysicsCreator::QHull::FaceList::first)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadddd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::FaceList*>(),
                        {"first", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::FaceList.isEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::QHull::FaceList::*)()>(&::Technie::PhysicsCreator::QHull::FaceList::isEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xadddd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::FaceList*>(),
                        {"isEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::FaceList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::FaceList::*)()>(&::Technie::PhysicsCreator::QHull::FaceList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadddd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::FaceList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Technie::PhysicsCreator::QHull::Face*& Technie::PhysicsCreator::QHull::FaceList::__cordl_internal_get_head()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___head;
}
constexpr ::Technie::PhysicsCreator::QHull::Face* const& Technie::PhysicsCreator::QHull::FaceList::__cordl_internal_get_head() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___head;
}
constexpr void Technie::PhysicsCreator::QHull::FaceList::__cordl_internal_set_head(::Technie::PhysicsCreator::QHull::Face*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___head = value;
}
constexpr ::Technie::PhysicsCreator::QHull::Face*& Technie::PhysicsCreator::QHull::FaceList::__cordl_internal_get_tail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tail;
}
constexpr ::Technie::PhysicsCreator::QHull::Face* const& Technie::PhysicsCreator::QHull::FaceList::__cordl_internal_get_tail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tail;
}
constexpr void Technie::PhysicsCreator::QHull::FaceList::__cordl_internal_set_tail(::Technie::PhysicsCreator::QHull::Face*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tail = value;
}
inline void Technie::PhysicsCreator::QHull::FaceList::clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::FaceList*>(),
                        {"clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::QHull::FaceList::add(::Technie::PhysicsCreator::QHull::Face*  vtx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::FaceList*>(),
                        {"add", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vtx);
}
inline ::Technie::PhysicsCreator::QHull::Face* Technie::PhysicsCreator::QHull::FaceList::first()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::FaceList*>(),
                        {"first", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::Face*>(this, ___internal_method);
}
inline bool Technie::PhysicsCreator::QHull::FaceList::isEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::FaceList*>(),
                        {"isEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::QHull::FaceList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::FaceList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::QHull::FaceList* Technie::PhysicsCreator::QHull::FaceList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::QHull::FaceList*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::QHull::FaceList::FaceList()   {
}
