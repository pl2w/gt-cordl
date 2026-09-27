#pragma once
// IWYU pragma private; include "Unity/Cinemachine/OutRec.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__Rect64_impl.hpp"
#include "Unity/Cinemachine/zzzz__OutRec_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__Active_def.hpp"
#include "Unity/Cinemachine/zzzz__OutPt_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
#include "Unity/Cinemachine/zzzz__PolyPathBase_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::OutRec._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::OutRec::*)()>(&::Unity::Cinemachine::OutRec::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaeef3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::OutRec*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::Cinemachine::OutRec::__cordl_internal_get_idx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idx;
}
constexpr int32_t const& Unity::Cinemachine::OutRec::__cordl_internal_get_idx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idx;
}
constexpr void Unity::Cinemachine::OutRec::__cordl_internal_set_idx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idx = value;
}
constexpr ::Unity::Cinemachine::OutRec*& Unity::Cinemachine::OutRec::__cordl_internal_get_owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr ::Unity::Cinemachine::OutRec* const& Unity::Cinemachine::OutRec::__cordl_internal_get_owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr void Unity::Cinemachine::OutRec::__cordl_internal_set_owner(::Unity::Cinemachine::OutRec*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___owner = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::OutRec*>*& Unity::Cinemachine::OutRec::__cordl_internal_get_splits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splits;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::OutRec*>* const& Unity::Cinemachine::OutRec::__cordl_internal_get_splits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splits;
}
constexpr void Unity::Cinemachine::OutRec::__cordl_internal_set_splits(::System::Collections::Generic::List_1<::Unity::Cinemachine::OutRec*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splits = value;
}
constexpr ::Unity::Cinemachine::Active*& Unity::Cinemachine::OutRec::__cordl_internal_get_frontEdge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontEdge;
}
constexpr ::Unity::Cinemachine::Active* const& Unity::Cinemachine::OutRec::__cordl_internal_get_frontEdge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontEdge;
}
constexpr void Unity::Cinemachine::OutRec::__cordl_internal_set_frontEdge(::Unity::Cinemachine::Active*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frontEdge = value;
}
constexpr ::Unity::Cinemachine::Active*& Unity::Cinemachine::OutRec::__cordl_internal_get_backEdge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backEdge;
}
constexpr ::Unity::Cinemachine::Active* const& Unity::Cinemachine::OutRec::__cordl_internal_get_backEdge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backEdge;
}
constexpr void Unity::Cinemachine::OutRec::__cordl_internal_set_backEdge(::Unity::Cinemachine::Active*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backEdge = value;
}
constexpr ::Unity::Cinemachine::OutPt*& Unity::Cinemachine::OutRec::__cordl_internal_get_pts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pts;
}
constexpr ::Unity::Cinemachine::OutPt* const& Unity::Cinemachine::OutRec::__cordl_internal_get_pts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pts;
}
constexpr void Unity::Cinemachine::OutRec::__cordl_internal_set_pts(::Unity::Cinemachine::OutPt*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pts = value;
}
constexpr ::Unity::Cinemachine::PolyPathBase*& Unity::Cinemachine::OutRec::__cordl_internal_get_polypath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___polypath;
}
constexpr ::Unity::Cinemachine::PolyPathBase* const& Unity::Cinemachine::OutRec::__cordl_internal_get_polypath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___polypath;
}
constexpr void Unity::Cinemachine::OutRec::__cordl_internal_set_polypath(::Unity::Cinemachine::PolyPathBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___polypath = value;
}
constexpr ::Unity::Cinemachine::Rect64& Unity::Cinemachine::OutRec::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::Unity::Cinemachine::Rect64 const& Unity::Cinemachine::OutRec::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void Unity::Cinemachine::OutRec::__cordl_internal_set_bounds(::Unity::Cinemachine::Rect64  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*& Unity::Cinemachine::OutRec::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* const& Unity::Cinemachine::OutRec::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Unity::Cinemachine::OutRec::__cordl_internal_set_path(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr bool& Unity::Cinemachine::OutRec::__cordl_internal_get_isOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOpen;
}
constexpr bool const& Unity::Cinemachine::OutRec::__cordl_internal_get_isOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOpen;
}
constexpr void Unity::Cinemachine::OutRec::__cordl_internal_set_isOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOpen = value;
}
inline void Unity::Cinemachine::OutRec::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::OutRec*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::OutRec* Unity::Cinemachine::OutRec::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::OutRec*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::OutRec::OutRec()   {
}
