#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserSettings.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UserSettings_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UserSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UserSettings::*)()>(&::PlayFab::ClientModels::UserSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& PlayFab::ClientModels::UserSettings::__cordl_internal_get_GatherDeviceInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GatherDeviceInfo;
}
constexpr bool const& PlayFab::ClientModels::UserSettings::__cordl_internal_get_GatherDeviceInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GatherDeviceInfo;
}
constexpr void PlayFab::ClientModels::UserSettings::__cordl_internal_set_GatherDeviceInfo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GatherDeviceInfo = value;
}
constexpr bool& PlayFab::ClientModels::UserSettings::__cordl_internal_get_GatherFocusInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GatherFocusInfo;
}
constexpr bool const& PlayFab::ClientModels::UserSettings::__cordl_internal_get_GatherFocusInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GatherFocusInfo;
}
constexpr void PlayFab::ClientModels::UserSettings::__cordl_internal_set_GatherFocusInfo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GatherFocusInfo = value;
}
constexpr bool& PlayFab::ClientModels::UserSettings::__cordl_internal_get_NeedsAttribution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NeedsAttribution;
}
constexpr bool const& PlayFab::ClientModels::UserSettings::__cordl_internal_get_NeedsAttribution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NeedsAttribution;
}
constexpr void PlayFab::ClientModels::UserSettings::__cordl_internal_set_NeedsAttribution(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NeedsAttribution = value;
}
inline void PlayFab::ClientModels::UserSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UserSettings* PlayFab::ClientModels::UserSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UserSettings*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UserSettings::UserSettings()   {
}
