#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/VirtualCurrencyRechargeTime.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "PlayFab/ClientModels/zzzz__VirtualCurrencyRechargeTime_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::VirtualCurrencyRechargeTime._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::VirtualCurrencyRechargeTime::*)()>(&::PlayFab::ClientModels::VirtualCurrencyRechargeTime::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::ClientModels::VirtualCurrencyRechargeTime::__cordl_internal_get_RechargeMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RechargeMax;
}
constexpr int32_t const& PlayFab::ClientModels::VirtualCurrencyRechargeTime::__cordl_internal_get_RechargeMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RechargeMax;
}
constexpr void PlayFab::ClientModels::VirtualCurrencyRechargeTime::__cordl_internal_set_RechargeMax(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RechargeMax = value;
}
constexpr ::System::DateTime& PlayFab::ClientModels::VirtualCurrencyRechargeTime::__cordl_internal_get_RechargeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RechargeTime;
}
constexpr ::System::DateTime const& PlayFab::ClientModels::VirtualCurrencyRechargeTime::__cordl_internal_get_RechargeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RechargeTime;
}
constexpr void PlayFab::ClientModels::VirtualCurrencyRechargeTime::__cordl_internal_set_RechargeTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RechargeTime = value;
}
constexpr int32_t& PlayFab::ClientModels::VirtualCurrencyRechargeTime::__cordl_internal_get_SecondsToRecharge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsToRecharge;
}
constexpr int32_t const& PlayFab::ClientModels::VirtualCurrencyRechargeTime::__cordl_internal_get_SecondsToRecharge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsToRecharge;
}
constexpr void PlayFab::ClientModels::VirtualCurrencyRechargeTime::__cordl_internal_set_SecondsToRecharge(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondsToRecharge = value;
}
inline void PlayFab::ClientModels::VirtualCurrencyRechargeTime::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::VirtualCurrencyRechargeTime* PlayFab::ClientModels::VirtualCurrencyRechargeTime::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::VirtualCurrencyRechargeTime::VirtualCurrencyRechargeTime()   {
}
