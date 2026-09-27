#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AcceptTradeRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__AcceptTradeRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::AcceptTradeRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::AcceptTradeRequest::*)()>(&::PlayFab::ClientModels::AcceptTradeRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84d9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AcceptTradeRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::AcceptTradeRequest::__cordl_internal_get_AcceptedInventoryInstanceIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AcceptedInventoryInstanceIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::AcceptTradeRequest::__cordl_internal_get_AcceptedInventoryInstanceIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AcceptedInventoryInstanceIds;
}
constexpr void PlayFab::ClientModels::AcceptTradeRequest::__cordl_internal_set_AcceptedInventoryInstanceIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AcceptedInventoryInstanceIds = value;
}
constexpr ::StringW& PlayFab::ClientModels::AcceptTradeRequest::__cordl_internal_get_OfferingPlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OfferingPlayerId;
}
constexpr ::StringW const& PlayFab::ClientModels::AcceptTradeRequest::__cordl_internal_get_OfferingPlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OfferingPlayerId;
}
constexpr void PlayFab::ClientModels::AcceptTradeRequest::__cordl_internal_set_OfferingPlayerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OfferingPlayerId = value;
}
constexpr ::StringW& PlayFab::ClientModels::AcceptTradeRequest::__cordl_internal_get_TradeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TradeId;
}
constexpr ::StringW const& PlayFab::ClientModels::AcceptTradeRequest::__cordl_internal_get_TradeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TradeId;
}
constexpr void PlayFab::ClientModels::AcceptTradeRequest::__cordl_internal_set_TradeId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TradeId = value;
}
inline void PlayFab::ClientModels::AcceptTradeRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AcceptTradeRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::AcceptTradeRequest* PlayFab::ClientModels::AcceptTradeRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::AcceptTradeRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::AcceptTradeRequest::AcceptTradeRequest()   {
}
