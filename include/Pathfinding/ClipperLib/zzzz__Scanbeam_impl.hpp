#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/Scanbeam.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/ClipperLib/zzzz__Scanbeam_def.hpp"
//  Writing Method size for method: ::Pathfinding::ClipperLib::Scanbeam._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Scanbeam::*)()>(&::Pathfinding::ClipperLib::Scanbeam::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6835d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Scanbeam*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Pathfinding::ClipperLib::Scanbeam::__cordl_internal_get_Y()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Y;
}
constexpr int64_t const& Pathfinding::ClipperLib::Scanbeam::__cordl_internal_get_Y() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Y;
}
constexpr void Pathfinding::ClipperLib::Scanbeam::__cordl_internal_set_Y(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Y = value;
}
constexpr ::Pathfinding::ClipperLib::Scanbeam*& Pathfinding::ClipperLib::Scanbeam::__cordl_internal_get_Next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr ::Pathfinding::ClipperLib::Scanbeam* const& Pathfinding::ClipperLib::Scanbeam::__cordl_internal_get_Next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr void Pathfinding::ClipperLib::Scanbeam::__cordl_internal_set_Next(::Pathfinding::ClipperLib::Scanbeam*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Next = value;
}
inline void Pathfinding::ClipperLib::Scanbeam::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Scanbeam*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::ClipperLib::Scanbeam* Pathfinding::ClipperLib::Scanbeam::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ClipperLib::Scanbeam*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::ClipperLib::Scanbeam::Scanbeam()   {
}
