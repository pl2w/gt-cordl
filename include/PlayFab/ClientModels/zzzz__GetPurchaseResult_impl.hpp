#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPurchaseResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPurchaseResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPurchaseResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPurchaseResult::*)()>(&::PlayFab::ClientModels::GetPurchaseResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84de08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPurchaseResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetPurchaseResult::__cordl_internal_get_OrderId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrderId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetPurchaseResult::__cordl_internal_get_OrderId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrderId;
}
constexpr void PlayFab::ClientModels::GetPurchaseResult::__cordl_internal_set_OrderId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OrderId = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetPurchaseResult::__cordl_internal_get_PaymentProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PaymentProvider;
}
constexpr ::StringW const& PlayFab::ClientModels::GetPurchaseResult::__cordl_internal_get_PaymentProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PaymentProvider;
}
constexpr void PlayFab::ClientModels::GetPurchaseResult::__cordl_internal_set_PaymentProvider(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PaymentProvider = value;
}
constexpr ::System::DateTime& PlayFab::ClientModels::GetPurchaseResult::__cordl_internal_get_PurchaseDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseDate;
}
constexpr ::System::DateTime const& PlayFab::ClientModels::GetPurchaseResult::__cordl_internal_get_PurchaseDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseDate;
}
constexpr void PlayFab::ClientModels::GetPurchaseResult::__cordl_internal_set_PurchaseDate(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchaseDate = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetPurchaseResult::__cordl_internal_get_TransactionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransactionId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetPurchaseResult::__cordl_internal_get_TransactionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransactionId;
}
constexpr void PlayFab::ClientModels::GetPurchaseResult::__cordl_internal_set_TransactionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TransactionId = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetPurchaseResult::__cordl_internal_get_TransactionStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransactionStatus;
}
constexpr ::StringW const& PlayFab::ClientModels::GetPurchaseResult::__cordl_internal_get_TransactionStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransactionStatus;
}
constexpr void PlayFab::ClientModels::GetPurchaseResult::__cordl_internal_set_TransactionStatus(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TransactionStatus = value;
}
inline void PlayFab::ClientModels::GetPurchaseResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPurchaseResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPurchaseResult* PlayFab::ClientModels::GetPurchaseResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPurchaseResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPurchaseResult::GetPurchaseResult()   {
}
