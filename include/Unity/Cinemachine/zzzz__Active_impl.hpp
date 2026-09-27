#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Active.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__LocalMinima_impl.hpp"
#include "Unity/Cinemachine/zzzz__Point64_impl.hpp"
#include "Unity/Cinemachine/zzzz__Active_def.hpp"
#include "Unity/Cinemachine/zzzz__OutRec_def.hpp"
#include "Unity/Cinemachine/zzzz__Vertex_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::Active._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Active::*)()>(&::Unity::Cinemachine::Active::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeef5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Active*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::Point64& Unity::Cinemachine::Active::__cordl_internal_get_bot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bot;
}
constexpr ::Unity::Cinemachine::Point64 const& Unity::Cinemachine::Active::__cordl_internal_get_bot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bot;
}
constexpr void Unity::Cinemachine::Active::__cordl_internal_set_bot(::Unity::Cinemachine::Point64  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bot = value;
}
constexpr ::Unity::Cinemachine::Point64& Unity::Cinemachine::Active::__cordl_internal_get_top()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___top;
}
constexpr ::Unity::Cinemachine::Point64 const& Unity::Cinemachine::Active::__cordl_internal_get_top() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___top;
}
constexpr void Unity::Cinemachine::Active::__cordl_internal_set_top(::Unity::Cinemachine::Point64  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___top = value;
}
constexpr int64_t& Unity::Cinemachine::Active::__cordl_internal_get_curX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curX;
}
constexpr int64_t const& Unity::Cinemachine::Active::__cordl_internal_get_curX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curX;
}
constexpr void Unity::Cinemachine::Active::__cordl_internal_set_curX(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curX = value;
}
constexpr double_t& Unity::Cinemachine::Active::__cordl_internal_get_dx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dx;
}
constexpr double_t const& Unity::Cinemachine::Active::__cordl_internal_get_dx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dx;
}
constexpr void Unity::Cinemachine::Active::__cordl_internal_set_dx(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dx = value;
}
constexpr int32_t& Unity::Cinemachine::Active::__cordl_internal_get_windDx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windDx;
}
constexpr int32_t const& Unity::Cinemachine::Active::__cordl_internal_get_windDx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windDx;
}
constexpr void Unity::Cinemachine::Active::__cordl_internal_set_windDx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windDx = value;
}
constexpr int32_t& Unity::Cinemachine::Active::__cordl_internal_get_windCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windCount;
}
constexpr int32_t const& Unity::Cinemachine::Active::__cordl_internal_get_windCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windCount;
}
constexpr void Unity::Cinemachine::Active::__cordl_internal_set_windCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windCount = value;
}
constexpr int32_t& Unity::Cinemachine::Active::__cordl_internal_get_windCount2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windCount2;
}
constexpr int32_t const& Unity::Cinemachine::Active::__cordl_internal_get_windCount2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windCount2;
}
constexpr void Unity::Cinemachine::Active::__cordl_internal_set_windCount2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windCount2 = value;
}
constexpr ::Unity::Cinemachine::OutRec*& Unity::Cinemachine::Active::__cordl_internal_get_outrec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outrec;
}
constexpr ::Unity::Cinemachine::OutRec* const& Unity::Cinemachine::Active::__cordl_internal_get_outrec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outrec;
}
constexpr void Unity::Cinemachine::Active::__cordl_internal_set_outrec(::Unity::Cinemachine::OutRec*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outrec = value;
}
constexpr ::Unity::Cinemachine::Active*& Unity::Cinemachine::Active::__cordl_internal_get_prevInAEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevInAEL;
}
constexpr ::Unity::Cinemachine::Active* const& Unity::Cinemachine::Active::__cordl_internal_get_prevInAEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevInAEL;
}
constexpr void Unity::Cinemachine::Active::__cordl_internal_set_prevInAEL(::Unity::Cinemachine::Active*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevInAEL = value;
}
constexpr ::Unity::Cinemachine::Active*& Unity::Cinemachine::Active::__cordl_internal_get_nextInAEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextInAEL;
}
constexpr ::Unity::Cinemachine::Active* const& Unity::Cinemachine::Active::__cordl_internal_get_nextInAEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextInAEL;
}
constexpr void Unity::Cinemachine::Active::__cordl_internal_set_nextInAEL(::Unity::Cinemachine::Active*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextInAEL = value;
}
constexpr ::Unity::Cinemachine::Active*& Unity::Cinemachine::Active::__cordl_internal_get_prevInSEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevInSEL;
}
constexpr ::Unity::Cinemachine::Active* const& Unity::Cinemachine::Active::__cordl_internal_get_prevInSEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevInSEL;
}
constexpr void Unity::Cinemachine::Active::__cordl_internal_set_prevInSEL(::Unity::Cinemachine::Active*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevInSEL = value;
}
constexpr ::Unity::Cinemachine::Active*& Unity::Cinemachine::Active::__cordl_internal_get_nextInSEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextInSEL;
}
constexpr ::Unity::Cinemachine::Active* const& Unity::Cinemachine::Active::__cordl_internal_get_nextInSEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextInSEL;
}
constexpr void Unity::Cinemachine::Active::__cordl_internal_set_nextInSEL(::Unity::Cinemachine::Active*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextInSEL = value;
}
constexpr ::Unity::Cinemachine::Active*& Unity::Cinemachine::Active::__cordl_internal_get_jump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jump;
}
constexpr ::Unity::Cinemachine::Active* const& Unity::Cinemachine::Active::__cordl_internal_get_jump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jump;
}
constexpr void Unity::Cinemachine::Active::__cordl_internal_set_jump(::Unity::Cinemachine::Active*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jump = value;
}
constexpr ::Unity::Cinemachine::Vertex*& Unity::Cinemachine::Active::__cordl_internal_get_vertexTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertexTop;
}
constexpr ::Unity::Cinemachine::Vertex* const& Unity::Cinemachine::Active::__cordl_internal_get_vertexTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertexTop;
}
constexpr void Unity::Cinemachine::Active::__cordl_internal_set_vertexTop(::Unity::Cinemachine::Vertex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertexTop = value;
}
constexpr ::Unity::Cinemachine::LocalMinima& Unity::Cinemachine::Active::__cordl_internal_get_localMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localMin;
}
constexpr ::Unity::Cinemachine::LocalMinima const& Unity::Cinemachine::Active::__cordl_internal_get_localMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localMin;
}
constexpr void Unity::Cinemachine::Active::__cordl_internal_set_localMin(::Unity::Cinemachine::LocalMinima  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localMin = value;
}
constexpr bool& Unity::Cinemachine::Active::__cordl_internal_get_isLeftBound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftBound;
}
constexpr bool const& Unity::Cinemachine::Active::__cordl_internal_get_isLeftBound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftBound;
}
constexpr void Unity::Cinemachine::Active::__cordl_internal_set_isLeftBound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeftBound = value;
}
inline void Unity::Cinemachine::Active::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Active*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::Active* Unity::Cinemachine::Active::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::Active*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::Active::Active()   {
}
