#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/OpenTradeRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__OpenTradeRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::OpenTradeRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::OpenTradeRequest::*)()>(&::PlayFab::ClientModels::OpenTradeRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::OpenTradeRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::OpenTradeRequest::__cordl_internal_get_AllowedPlayerIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowedPlayerIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::OpenTradeRequest::__cordl_internal_get_AllowedPlayerIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowedPlayerIds;
}
constexpr void PlayFab::ClientModels::OpenTradeRequest::__cordl_internal_set_AllowedPlayerIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowedPlayerIds = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::OpenTradeRequest::__cordl_internal_get_OfferedInventoryInstanceIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OfferedInventoryInstanceIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::OpenTradeRequest::__cordl_internal_get_OfferedInventoryInstanceIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OfferedInventoryInstanceIds;
}
constexpr void PlayFab::ClientModels::OpenTradeRequest::__cordl_internal_set_OfferedInventoryInstanceIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OfferedInventoryInstanceIds = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::OpenTradeRequest::__cordl_internal_get_RequestedCatalogItemIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestedCatalogItemIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::OpenTradeRequest::__cordl_internal_get_RequestedCatalogItemIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestedCatalogItemIds;
}
constexpr void PlayFab::ClientModels::OpenTradeRequest::__cordl_internal_set_RequestedCatalogItemIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RequestedCatalogItemIds = value;
}
inline void PlayFab::ClientModels::OpenTradeRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::OpenTradeRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::OpenTradeRequest* PlayFab::ClientModels::OpenTradeRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::OpenTradeRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::OpenTradeRequest::OpenTradeRequest()   {
}
