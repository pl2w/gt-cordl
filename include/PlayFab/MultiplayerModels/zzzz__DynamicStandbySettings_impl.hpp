#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/DynamicStandbySettings.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__DynamicStandbySettings_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__DynamicStandbyThreshold_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::DynamicStandbySettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::DynamicStandbySettings::*)()>(&::PlayFab::MultiplayerModels::DynamicStandbySettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::DynamicStandbySettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DynamicStandbyThreshold*>*& PlayFab::MultiplayerModels::DynamicStandbySettings::__cordl_internal_get_DynamicFloorMultiplierThresholds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DynamicFloorMultiplierThresholds;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DynamicStandbyThreshold*>* const& PlayFab::MultiplayerModels::DynamicStandbySettings::__cordl_internal_get_DynamicFloorMultiplierThresholds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DynamicFloorMultiplierThresholds;
}
constexpr void PlayFab::MultiplayerModels::DynamicStandbySettings::__cordl_internal_set_DynamicFloorMultiplierThresholds(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DynamicStandbyThreshold*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DynamicFloorMultiplierThresholds = value;
}
constexpr bool& PlayFab::MultiplayerModels::DynamicStandbySettings::__cordl_internal_get_IsEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsEnabled;
}
constexpr bool const& PlayFab::MultiplayerModels::DynamicStandbySettings::__cordl_internal_get_IsEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsEnabled;
}
constexpr void PlayFab::MultiplayerModels::DynamicStandbySettings::__cordl_internal_set_IsEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsEnabled = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::MultiplayerModels::DynamicStandbySettings::__cordl_internal_get_RampDownSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RampDownSeconds;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::MultiplayerModels::DynamicStandbySettings::__cordl_internal_get_RampDownSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RampDownSeconds;
}
constexpr void PlayFab::MultiplayerModels::DynamicStandbySettings::__cordl_internal_set_RampDownSeconds(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RampDownSeconds = value;
}
inline void PlayFab::MultiplayerModels::DynamicStandbySettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::DynamicStandbySettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::DynamicStandbySettings* PlayFab::MultiplayerModels::DynamicStandbySettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::DynamicStandbySettings*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::DynamicStandbySettings::DynamicStandbySettings()   {
}
