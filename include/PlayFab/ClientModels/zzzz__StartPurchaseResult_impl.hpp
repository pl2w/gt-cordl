#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/StartPurchaseResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__StartPurchaseResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__CartItem_def.hpp"
#include "PlayFab/ClientModels/zzzz__PaymentOption_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::StartPurchaseResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::StartPurchaseResult::*)()>(&::PlayFab::ClientModels::StartPurchaseResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::StartPurchaseResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CartItem*>*& PlayFab::ClientModels::StartPurchaseResult::__cordl_internal_get_Contents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Contents;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CartItem*>* const& PlayFab::ClientModels::StartPurchaseResult::__cordl_internal_get_Contents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Contents;
}
constexpr void PlayFab::ClientModels::StartPurchaseResult::__cordl_internal_set_Contents(::System::Collections::Generic::List_1<::PlayFab::ClientModels::CartItem*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Contents = value;
}
constexpr ::StringW& PlayFab::ClientModels::StartPurchaseResult::__cordl_internal_get_OrderId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrderId;
}
constexpr ::StringW const& PlayFab::ClientModels::StartPurchaseResult::__cordl_internal_get_OrderId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrderId;
}
constexpr void PlayFab::ClientModels::StartPurchaseResult::__cordl_internal_set_OrderId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OrderId = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PaymentOption*>*& PlayFab::ClientModels::StartPurchaseResult::__cordl_internal_get_PaymentOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PaymentOptions;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PaymentOption*>* const& PlayFab::ClientModels::StartPurchaseResult::__cordl_internal_get_PaymentOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PaymentOptions;
}
constexpr void PlayFab::ClientModels::StartPurchaseResult::__cordl_internal_set_PaymentOptions(::System::Collections::Generic::List_1<::PlayFab::ClientModels::PaymentOption*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PaymentOptions = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& PlayFab::ClientModels::StartPurchaseResult::__cordl_internal_get_VirtualCurrencyBalances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrencyBalances;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& PlayFab::ClientModels::StartPurchaseResult::__cordl_internal_get_VirtualCurrencyBalances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrencyBalances;
}
constexpr void PlayFab::ClientModels::StartPurchaseResult::__cordl_internal_set_VirtualCurrencyBalances(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VirtualCurrencyBalances = value;
}
inline void PlayFab::ClientModels::StartPurchaseResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::StartPurchaseResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::StartPurchaseResult* PlayFab::ClientModels::StartPurchaseResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::StartPurchaseResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::StartPurchaseResult::StartPurchaseResult()   {
}
