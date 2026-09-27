#pragma once
// IWYU pragma private; include "GorillaTagScripts/SnapOverlap.hpp"
#include "GlobalNamespace/zzzz__SnapBounds_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/zzzz__SnapOverlap_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderAttachGridPlane_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::SnapOverlap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SnapOverlap::*)()>(&::GorillaTagScripts::SnapOverlap::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b82d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SnapOverlap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>& GorillaTagScripts::SnapOverlap::__cordl_internal_get_otherPlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherPlane;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderAttachGridPlane> const& GorillaTagScripts::SnapOverlap::__cordl_internal_get_otherPlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherPlane;
}
constexpr void GorillaTagScripts::SnapOverlap::__cordl_internal_set_otherPlane(::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___otherPlane = value;
}
constexpr ::GlobalNamespace::SnapBounds& GorillaTagScripts::SnapOverlap::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::GlobalNamespace::SnapBounds const& GorillaTagScripts::SnapOverlap::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void GorillaTagScripts::SnapOverlap::__cordl_internal_set_bounds(::GlobalNamespace::SnapBounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
constexpr ::GorillaTagScripts::SnapOverlap*& GorillaTagScripts::SnapOverlap::__cordl_internal_get_nextOverlap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextOverlap;
}
constexpr ::GorillaTagScripts::SnapOverlap* const& GorillaTagScripts::SnapOverlap::__cordl_internal_get_nextOverlap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextOverlap;
}
constexpr void GorillaTagScripts::SnapOverlap::__cordl_internal_set_nextOverlap(::GorillaTagScripts::SnapOverlap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextOverlap = value;
}
constexpr bool& GorillaTagScripts::SnapOverlap::__cordl_internal_get_inPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inPool;
}
constexpr bool const& GorillaTagScripts::SnapOverlap::__cordl_internal_get_inPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inPool;
}
constexpr void GorillaTagScripts::SnapOverlap::__cordl_internal_set_inPool(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inPool = value;
}
inline void GorillaTagScripts::SnapOverlap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SnapOverlap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::SnapOverlap* GorillaTagScripts::SnapOverlap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::SnapOverlap*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::SnapOverlap::SnapOverlap()   {
}
