#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ModifyUserVirtualCurrencyResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ModifyUserVirtualCurrencyResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ModifyUserVirtualCurrencyResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ModifyUserVirtualCurrencyResult::*)()>(&::PlayFab::ClientModels::ModifyUserVirtualCurrencyResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ModifyUserVirtualCurrencyResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::ClientModels::ModifyUserVirtualCurrencyResult::__cordl_internal_get_Balance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Balance;
}
constexpr int32_t const& PlayFab::ClientModels::ModifyUserVirtualCurrencyResult::__cordl_internal_get_Balance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Balance;
}
constexpr void PlayFab::ClientModels::ModifyUserVirtualCurrencyResult::__cordl_internal_set_Balance(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Balance = value;
}
constexpr int32_t& PlayFab::ClientModels::ModifyUserVirtualCurrencyResult::__cordl_internal_get_BalanceChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BalanceChange;
}
constexpr int32_t const& PlayFab::ClientModels::ModifyUserVirtualCurrencyResult::__cordl_internal_get_BalanceChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BalanceChange;
}
constexpr void PlayFab::ClientModels::ModifyUserVirtualCurrencyResult::__cordl_internal_set_BalanceChange(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BalanceChange = value;
}
constexpr ::StringW& PlayFab::ClientModels::ModifyUserVirtualCurrencyResult::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::ModifyUserVirtualCurrencyResult::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::ModifyUserVirtualCurrencyResult::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
constexpr ::StringW& PlayFab::ClientModels::ModifyUserVirtualCurrencyResult::__cordl_internal_get_VirtualCurrency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrency;
}
constexpr ::StringW const& PlayFab::ClientModels::ModifyUserVirtualCurrencyResult::__cordl_internal_get_VirtualCurrency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrency;
}
constexpr void PlayFab::ClientModels::ModifyUserVirtualCurrencyResult::__cordl_internal_set_VirtualCurrency(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VirtualCurrency = value;
}
inline void PlayFab::ClientModels::ModifyUserVirtualCurrencyResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ModifyUserVirtualCurrencyResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ModifyUserVirtualCurrencyResult* PlayFab::ClientModels::ModifyUserVirtualCurrencyResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ModifyUserVirtualCurrencyResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ModifyUserVirtualCurrencyResult::ModifyUserVirtualCurrencyResult()   {
}
