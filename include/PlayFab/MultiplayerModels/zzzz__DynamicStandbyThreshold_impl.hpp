#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/DynamicStandbyThreshold.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__DynamicStandbyThreshold_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::DynamicStandbyThreshold._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::DynamicStandbyThreshold::*)()>(&::PlayFab::MultiplayerModels::DynamicStandbyThreshold::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::DynamicStandbyThreshold*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& PlayFab::MultiplayerModels::DynamicStandbyThreshold::__cordl_internal_get_Multiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Multiplier;
}
constexpr double_t const& PlayFab::MultiplayerModels::DynamicStandbyThreshold::__cordl_internal_get_Multiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Multiplier;
}
constexpr void PlayFab::MultiplayerModels::DynamicStandbyThreshold::__cordl_internal_set_Multiplier(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Multiplier = value;
}
constexpr double_t& PlayFab::MultiplayerModels::DynamicStandbyThreshold::__cordl_internal_get_TriggerThresholdPercentage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggerThresholdPercentage;
}
constexpr double_t const& PlayFab::MultiplayerModels::DynamicStandbyThreshold::__cordl_internal_get_TriggerThresholdPercentage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggerThresholdPercentage;
}
constexpr void PlayFab::MultiplayerModels::DynamicStandbyThreshold::__cordl_internal_set_TriggerThresholdPercentage(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TriggerThresholdPercentage = value;
}
inline void PlayFab::MultiplayerModels::DynamicStandbyThreshold::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::DynamicStandbyThreshold*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::DynamicStandbyThreshold* PlayFab::MultiplayerModels::DynamicStandbyThreshold::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::DynamicStandbyThreshold*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::DynamicStandbyThreshold::DynamicStandbyThreshold()   {
}
