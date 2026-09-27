#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/LocalMinima.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/ClipperLib/zzzz__LocalMinima_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__TEdge_def.hpp"
//  Writing Method size for method: ::Pathfinding::ClipperLib::LocalMinima._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::LocalMinima::*)()>(&::Pathfinding::ClipperLib::LocalMinima::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6835d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::LocalMinima*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Pathfinding::ClipperLib::LocalMinima::__cordl_internal_get_Y()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Y;
}
constexpr int64_t const& Pathfinding::ClipperLib::LocalMinima::__cordl_internal_get_Y() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Y;
}
constexpr void Pathfinding::ClipperLib::LocalMinima::__cordl_internal_set_Y(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Y = value;
}
constexpr ::Pathfinding::ClipperLib::TEdge*& Pathfinding::ClipperLib::LocalMinima::__cordl_internal_get_LeftBound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeftBound;
}
constexpr ::Pathfinding::ClipperLib::TEdge* const& Pathfinding::ClipperLib::LocalMinima::__cordl_internal_get_LeftBound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeftBound;
}
constexpr void Pathfinding::ClipperLib::LocalMinima::__cordl_internal_set_LeftBound(::Pathfinding::ClipperLib::TEdge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LeftBound = value;
}
constexpr ::Pathfinding::ClipperLib::TEdge*& Pathfinding::ClipperLib::LocalMinima::__cordl_internal_get_RightBound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RightBound;
}
constexpr ::Pathfinding::ClipperLib::TEdge* const& Pathfinding::ClipperLib::LocalMinima::__cordl_internal_get_RightBound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RightBound;
}
constexpr void Pathfinding::ClipperLib::LocalMinima::__cordl_internal_set_RightBound(::Pathfinding::ClipperLib::TEdge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RightBound = value;
}
constexpr ::Pathfinding::ClipperLib::LocalMinima*& Pathfinding::ClipperLib::LocalMinima::__cordl_internal_get_Next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr ::Pathfinding::ClipperLib::LocalMinima* const& Pathfinding::ClipperLib::LocalMinima::__cordl_internal_get_Next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr void Pathfinding::ClipperLib::LocalMinima::__cordl_internal_set_Next(::Pathfinding::ClipperLib::LocalMinima*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Next = value;
}
inline void Pathfinding::ClipperLib::LocalMinima::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::LocalMinima*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::ClipperLib::LocalMinima* Pathfinding::ClipperLib::LocalMinima::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ClipperLib::LocalMinima*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::ClipperLib::LocalMinima::LocalMinima()   {
}
