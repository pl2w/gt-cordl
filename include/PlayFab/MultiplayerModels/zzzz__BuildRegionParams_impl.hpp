#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/BuildRegionParams.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__BuildRegionParams_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__DynamicStandbySettings_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::BuildRegionParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::BuildRegionParams::*)()>(&::PlayFab::MultiplayerModels::BuildRegionParams::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8407c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::BuildRegionParams*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::MultiplayerModels::DynamicStandbySettings*& PlayFab::MultiplayerModels::BuildRegionParams::__cordl_internal_get_DynamicStandbySettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DynamicStandbySettings;
}
constexpr ::PlayFab::MultiplayerModels::DynamicStandbySettings* const& PlayFab::MultiplayerModels::BuildRegionParams::__cordl_internal_get_DynamicStandbySettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DynamicStandbySettings;
}
constexpr void PlayFab::MultiplayerModels::BuildRegionParams::__cordl_internal_set_DynamicStandbySettings(::PlayFab::MultiplayerModels::DynamicStandbySettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DynamicStandbySettings = value;
}
constexpr int32_t& PlayFab::MultiplayerModels::BuildRegionParams::__cordl_internal_get_MaxServers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxServers;
}
constexpr int32_t const& PlayFab::MultiplayerModels::BuildRegionParams::__cordl_internal_get_MaxServers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxServers;
}
constexpr void PlayFab::MultiplayerModels::BuildRegionParams::__cordl_internal_set_MaxServers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxServers = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::BuildRegionParams::__cordl_internal_get_Region()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::BuildRegionParams::__cordl_internal_get_Region() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr void PlayFab::MultiplayerModels::BuildRegionParams::__cordl_internal_set_Region(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Region = value;
}
constexpr int32_t& PlayFab::MultiplayerModels::BuildRegionParams::__cordl_internal_get_StandbyServers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StandbyServers;
}
constexpr int32_t const& PlayFab::MultiplayerModels::BuildRegionParams::__cordl_internal_get_StandbyServers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StandbyServers;
}
constexpr void PlayFab::MultiplayerModels::BuildRegionParams::__cordl_internal_set_StandbyServers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StandbyServers = value;
}
inline void PlayFab::MultiplayerModels::BuildRegionParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::BuildRegionParams*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::BuildRegionParams* PlayFab::MultiplayerModels::BuildRegionParams::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::BuildRegionParams*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::BuildRegionParams::BuildRegionParams()   {
}
