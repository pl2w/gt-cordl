#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ConfirmPurchaseRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ConfirmPurchaseRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ConfirmPurchaseRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ConfirmPurchaseRequest::*)()>(&::PlayFab::ClientModels::ConfirmPurchaseRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ConfirmPurchaseRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::ConfirmPurchaseRequest::__cordl_internal_get_OrderId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrderId;
}
constexpr ::StringW const& PlayFab::ClientModels::ConfirmPurchaseRequest::__cordl_internal_get_OrderId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrderId;
}
constexpr void PlayFab::ClientModels::ConfirmPurchaseRequest::__cordl_internal_set_OrderId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OrderId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& PlayFab::ClientModels::ConfirmPurchaseRequest::__cordl_internal_get_CustomTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomTags;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& PlayFab::ClientModels::ConfirmPurchaseRequest::__cordl_internal_get_CustomTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomTags;
}
constexpr void PlayFab::ClientModels::ConfirmPurchaseRequest::__cordl_internal_set_CustomTags(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomTags = value;
}
inline void PlayFab::ClientModels::ConfirmPurchaseRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ConfirmPurchaseRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ConfirmPurchaseRequest* PlayFab::ClientModels::ConfirmPurchaseRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ConfirmPurchaseRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ConfirmPurchaseRequest::ConfirmPurchaseRequest()   {
}
