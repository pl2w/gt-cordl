#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ValidateGooglePlayPurchaseResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ValidateGooglePlayPurchaseResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__PurchaseReceiptFulfillment_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ValidateGooglePlayPurchaseResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ValidateGooglePlayPurchaseResult::*)()>(&::PlayFab::ClientModels::ValidateGooglePlayPurchaseResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ValidateGooglePlayPurchaseResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>*& PlayFab::ClientModels::ValidateGooglePlayPurchaseResult::__cordl_internal_get_Fulfillments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Fulfillments;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>* const& PlayFab::ClientModels::ValidateGooglePlayPurchaseResult::__cordl_internal_get_Fulfillments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Fulfillments;
}
constexpr void PlayFab::ClientModels::ValidateGooglePlayPurchaseResult::__cordl_internal_set_Fulfillments(::System::Collections::Generic::List_1<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Fulfillments = value;
}
inline void PlayFab::ClientModels::ValidateGooglePlayPurchaseResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ValidateGooglePlayPurchaseResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ValidateGooglePlayPurchaseResult* PlayFab::ClientModels::ValidateGooglePlayPurchaseResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ValidateGooglePlayPurchaseResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ValidateGooglePlayPurchaseResult::ValidateGooglePlayPurchaseResult()   {
}
