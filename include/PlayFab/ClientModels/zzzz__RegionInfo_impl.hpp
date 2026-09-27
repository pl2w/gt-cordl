#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RegionInfo.hpp"
#include "PlayFab/ClientModels/zzzz__Region_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__RegionInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::RegionInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::RegionInfo::*)()>(&::PlayFab::ClientModels::RegionInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RegionInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& PlayFab::ClientModels::RegionInfo::__cordl_internal_get_Available()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Available;
}
constexpr bool const& PlayFab::ClientModels::RegionInfo::__cordl_internal_get_Available() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Available;
}
constexpr void PlayFab::ClientModels::RegionInfo::__cordl_internal_set_Available(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Available = value;
}
constexpr ::StringW& PlayFab::ClientModels::RegionInfo::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::ClientModels::RegionInfo::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::ClientModels::RegionInfo::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::StringW& PlayFab::ClientModels::RegionInfo::__cordl_internal_get_PingUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PingUrl;
}
constexpr ::StringW const& PlayFab::ClientModels::RegionInfo::__cordl_internal_get_PingUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PingUrl;
}
constexpr void PlayFab::ClientModels::RegionInfo::__cordl_internal_set_PingUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PingUrl = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::Region>& PlayFab::ClientModels::RegionInfo::__cordl_internal_get_Region()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::Region> const& PlayFab::ClientModels::RegionInfo::__cordl_internal_get_Region() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr void PlayFab::ClientModels::RegionInfo::__cordl_internal_set_Region(::System::Nullable_1<::PlayFab::ClientModels::Region>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Region = value;
}
inline void PlayFab::ClientModels::RegionInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RegionInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::RegionInfo* PlayFab::ClientModels::RegionInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::RegionInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::RegionInfo::RegionInfo()   {
}
