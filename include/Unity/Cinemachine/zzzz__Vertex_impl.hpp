#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Vertex.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__Point64_impl.hpp"
#include "Unity/Cinemachine/zzzz__VertexFlags_impl.hpp"
#include "Unity/Cinemachine/zzzz__Vertex_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
#include "Unity/Cinemachine/zzzz__VertexFlags_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::Vertex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Vertex::*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::VertexFlags, ::Unity::Cinemachine::Vertex*)>(&::Unity::Cinemachine::Vertex::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaeef1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Vertex*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::VertexFlags>(), ::i2c::type_of<::Unity::Cinemachine::Vertex*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::Point64& Unity::Cinemachine::Vertex::__cordl_internal_get_pt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pt;
}
constexpr ::Unity::Cinemachine::Point64 const& Unity::Cinemachine::Vertex::__cordl_internal_get_pt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pt;
}
constexpr void Unity::Cinemachine::Vertex::__cordl_internal_set_pt(::Unity::Cinemachine::Point64  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pt = value;
}
constexpr ::Unity::Cinemachine::Vertex*& Unity::Cinemachine::Vertex::__cordl_internal_get_next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr ::Unity::Cinemachine::Vertex* const& Unity::Cinemachine::Vertex::__cordl_internal_get_next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr void Unity::Cinemachine::Vertex::__cordl_internal_set_next(::Unity::Cinemachine::Vertex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___next = value;
}
constexpr ::Unity::Cinemachine::Vertex*& Unity::Cinemachine::Vertex::__cordl_internal_get_prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr ::Unity::Cinemachine::Vertex* const& Unity::Cinemachine::Vertex::__cordl_internal_get_prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr void Unity::Cinemachine::Vertex::__cordl_internal_set_prev(::Unity::Cinemachine::Vertex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prev = value;
}
constexpr ::Unity::Cinemachine::VertexFlags& Unity::Cinemachine::Vertex::__cordl_internal_get_flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr ::Unity::Cinemachine::VertexFlags const& Unity::Cinemachine::Vertex::__cordl_internal_get_flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr void Unity::Cinemachine::Vertex::__cordl_internal_set_flags(::Unity::Cinemachine::VertexFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flags = value;
}
inline void Unity::Cinemachine::Vertex::_ctor(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::VertexFlags  flags, ::Unity::Cinemachine::Vertex*  prev)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Vertex*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::VertexFlags>(), ::i2c::type_of<::Unity::Cinemachine::Vertex*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pt, flags, prev);
}
inline ::Unity::Cinemachine::Vertex* Unity::Cinemachine::Vertex::New_ctor(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::VertexFlags  flags, ::Unity::Cinemachine::Vertex*  prev)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::Vertex*>(pt, flags, prev));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::Vertex::Vertex()   {
}
