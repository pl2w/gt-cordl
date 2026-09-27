#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/TradeInfo.hpp"
#include "PlayFab/ClientModels/zzzz__TradeStatus_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__TradeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::TradeInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::TradeInfo::*)()>(&::PlayFab::ClientModels::TradeInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::TradeInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_AcceptedInventoryInstanceIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AcceptedInventoryInstanceIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_AcceptedInventoryInstanceIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AcceptedInventoryInstanceIds;
}
constexpr void PlayFab::ClientModels::TradeInfo::__cordl_internal_set_AcceptedInventoryInstanceIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AcceptedInventoryInstanceIds = value;
}
constexpr ::StringW& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_AcceptedPlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AcceptedPlayerId;
}
constexpr ::StringW const& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_AcceptedPlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AcceptedPlayerId;
}
constexpr void PlayFab::ClientModels::TradeInfo::__cordl_internal_set_AcceptedPlayerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AcceptedPlayerId = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_AllowedPlayerIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowedPlayerIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_AllowedPlayerIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowedPlayerIds;
}
constexpr void PlayFab::ClientModels::TradeInfo::__cordl_internal_set_AllowedPlayerIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowedPlayerIds = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_CancelledAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CancelledAt;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_CancelledAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CancelledAt;
}
constexpr void PlayFab::ClientModels::TradeInfo::__cordl_internal_set_CancelledAt(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CancelledAt = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_FilledAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilledAt;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_FilledAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilledAt;
}
constexpr void PlayFab::ClientModels::TradeInfo::__cordl_internal_set_FilledAt(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FilledAt = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_InvalidatedAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InvalidatedAt;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_InvalidatedAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InvalidatedAt;
}
constexpr void PlayFab::ClientModels::TradeInfo::__cordl_internal_set_InvalidatedAt(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InvalidatedAt = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_OfferedCatalogItemIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OfferedCatalogItemIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_OfferedCatalogItemIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OfferedCatalogItemIds;
}
constexpr void PlayFab::ClientModels::TradeInfo::__cordl_internal_set_OfferedCatalogItemIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OfferedCatalogItemIds = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_OfferedInventoryInstanceIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OfferedInventoryInstanceIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_OfferedInventoryInstanceIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OfferedInventoryInstanceIds;
}
constexpr void PlayFab::ClientModels::TradeInfo::__cordl_internal_set_OfferedInventoryInstanceIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OfferedInventoryInstanceIds = value;
}
constexpr ::StringW& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_OfferingPlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OfferingPlayerId;
}
constexpr ::StringW const& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_OfferingPlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OfferingPlayerId;
}
constexpr void PlayFab::ClientModels::TradeInfo::__cordl_internal_set_OfferingPlayerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OfferingPlayerId = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_OpenedAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OpenedAt;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_OpenedAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OpenedAt;
}
constexpr void PlayFab::ClientModels::TradeInfo::__cordl_internal_set_OpenedAt(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OpenedAt = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_RequestedCatalogItemIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestedCatalogItemIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_RequestedCatalogItemIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestedCatalogItemIds;
}
constexpr void PlayFab::ClientModels::TradeInfo::__cordl_internal_set_RequestedCatalogItemIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RequestedCatalogItemIds = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::TradeStatus>& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_Status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::TradeStatus> const& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_Status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr void PlayFab::ClientModels::TradeInfo::__cordl_internal_set_Status(::System::Nullable_1<::PlayFab::ClientModels::TradeStatus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Status = value;
}
constexpr ::StringW& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_TradeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TradeId;
}
constexpr ::StringW const& PlayFab::ClientModels::TradeInfo::__cordl_internal_get_TradeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TradeId;
}
constexpr void PlayFab::ClientModels::TradeInfo::__cordl_internal_set_TradeId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TradeId = value;
}
inline void PlayFab::ClientModels::TradeInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::TradeInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::TradeInfo* PlayFab::ClientModels::TradeInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::TradeInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::TradeInfo::TradeInfo()   {
}
