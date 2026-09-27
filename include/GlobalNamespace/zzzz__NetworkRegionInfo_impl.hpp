#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkRegionInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkRegionInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkRegionInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkRegionInfo::*)()>(&::GlobalNamespace::NetworkRegionInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56ecf1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkRegionInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::NetworkRegionInfo::__cordl_internal_get_playersInRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersInRegion;
}
constexpr int32_t const& GlobalNamespace::NetworkRegionInfo::__cordl_internal_get_playersInRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersInRegion;
}
constexpr void GlobalNamespace::NetworkRegionInfo::__cordl_internal_set_playersInRegion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersInRegion = value;
}
constexpr int32_t& GlobalNamespace::NetworkRegionInfo::__cordl_internal_get_pingToRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingToRegion;
}
constexpr int32_t const& GlobalNamespace::NetworkRegionInfo::__cordl_internal_get_pingToRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingToRegion;
}
constexpr void GlobalNamespace::NetworkRegionInfo::__cordl_internal_set_pingToRegion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pingToRegion = value;
}
inline void GlobalNamespace::NetworkRegionInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkRegionInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkRegionInfo* GlobalNamespace::NetworkRegionInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkRegionInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkRegionInfo::NetworkRegionInfo()   {
}
