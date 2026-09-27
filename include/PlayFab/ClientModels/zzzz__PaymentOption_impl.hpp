#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PaymentOption.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__PaymentOption_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::PaymentOption._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::PaymentOption::*)()>(&::PlayFab::ClientModels::PaymentOption::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PaymentOption*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::PaymentOption::__cordl_internal_get_Currency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Currency;
}
constexpr ::StringW const& PlayFab::ClientModels::PaymentOption::__cordl_internal_get_Currency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Currency;
}
constexpr void PlayFab::ClientModels::PaymentOption::__cordl_internal_set_Currency(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Currency = value;
}
constexpr uint32_t& PlayFab::ClientModels::PaymentOption::__cordl_internal_get_Price()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Price;
}
constexpr uint32_t const& PlayFab::ClientModels::PaymentOption::__cordl_internal_get_Price() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Price;
}
constexpr void PlayFab::ClientModels::PaymentOption::__cordl_internal_set_Price(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Price = value;
}
constexpr ::StringW& PlayFab::ClientModels::PaymentOption::__cordl_internal_get_ProviderName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProviderName;
}
constexpr ::StringW const& PlayFab::ClientModels::PaymentOption::__cordl_internal_get_ProviderName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProviderName;
}
constexpr void PlayFab::ClientModels::PaymentOption::__cordl_internal_set_ProviderName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProviderName = value;
}
constexpr uint32_t& PlayFab::ClientModels::PaymentOption::__cordl_internal_get_StoreCredit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StoreCredit;
}
constexpr uint32_t const& PlayFab::ClientModels::PaymentOption::__cordl_internal_get_StoreCredit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StoreCredit;
}
constexpr void PlayFab::ClientModels::PaymentOption::__cordl_internal_set_StoreCredit(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StoreCredit = value;
}
inline void PlayFab::ClientModels::PaymentOption::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PaymentOption*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::PaymentOption* PlayFab::ClientModels::PaymentOption::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::PaymentOption*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::PaymentOption::PaymentOption()   {
}
