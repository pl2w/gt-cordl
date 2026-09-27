#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ValidateWindowsReceiptResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ValidateWindowsReceiptResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__PurchaseReceiptFulfillment_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ValidateWindowsReceiptResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ValidateWindowsReceiptResult::*)()>(&::PlayFab::ClientModels::ValidateWindowsReceiptResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ValidateWindowsReceiptResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>*& PlayFab::ClientModels::ValidateWindowsReceiptResult::__cordl_internal_get_Fulfillments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Fulfillments;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>* const& PlayFab::ClientModels::ValidateWindowsReceiptResult::__cordl_internal_get_Fulfillments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Fulfillments;
}
constexpr void PlayFab::ClientModels::ValidateWindowsReceiptResult::__cordl_internal_set_Fulfillments(::System::Collections::Generic::List_1<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Fulfillments = value;
}
inline void PlayFab::ClientModels::ValidateWindowsReceiptResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ValidateWindowsReceiptResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ValidateWindowsReceiptResult* PlayFab::ClientModels::ValidateWindowsReceiptResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ValidateWindowsReceiptResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ValidateWindowsReceiptResult::ValidateWindowsReceiptResult()   {
}
