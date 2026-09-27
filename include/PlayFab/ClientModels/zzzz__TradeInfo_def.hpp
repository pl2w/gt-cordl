#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/TradeInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ClientModels/zzzz__TradeStatus_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TradeInfo)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class TradeInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::TradeInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::TradeInfo*, "PlayFab.ClientModels", "TradeInfo");
// Dependencies PlayFab.ClientModels.TradeStatus, PlayFab.SharedModels.PlayFabBaseModel, System.DateTime, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.TradeInfo
class CORDL_TYPE TradeInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field AcceptedInventoryInstanceIds, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AcceptedInventoryInstanceIds, put=__cordl_internal_set_AcceptedInventoryInstanceIds)) ::System::Collections::Generic::List_1<::StringW>*  AcceptedInventoryInstanceIds;

/// @brief Field AcceptedPlayerId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AcceptedPlayerId, put=__cordl_internal_set_AcceptedPlayerId)) ::StringW  AcceptedPlayerId;

/// @brief Field AllowedPlayerIds, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AllowedPlayerIds, put=__cordl_internal_set_AllowedPlayerIds)) ::System::Collections::Generic::List_1<::StringW>*  AllowedPlayerIds;

/// @brief Field CancelledAt, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_CancelledAt, put=__cordl_internal_set_CancelledAt)) ::System::Nullable_1<::System::DateTime>  CancelledAt;

/// @brief Field FilledAt, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_FilledAt, put=__cordl_internal_set_FilledAt)) ::System::Nullable_1<::System::DateTime>  FilledAt;

/// @brief Field InvalidatedAt, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_InvalidatedAt, put=__cordl_internal_set_InvalidatedAt)) ::System::Nullable_1<::System::DateTime>  InvalidatedAt;

/// @brief Field OfferedCatalogItemIds, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OfferedCatalogItemIds, put=__cordl_internal_set_OfferedCatalogItemIds)) ::System::Collections::Generic::List_1<::StringW>*  OfferedCatalogItemIds;

/// @brief Field OfferedInventoryInstanceIds, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OfferedInventoryInstanceIds, put=__cordl_internal_set_OfferedInventoryInstanceIds)) ::System::Collections::Generic::List_1<::StringW>*  OfferedInventoryInstanceIds;

/// @brief Field OfferingPlayerId, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OfferingPlayerId, put=__cordl_internal_set_OfferingPlayerId)) ::StringW  OfferingPlayerId;

/// @brief Field OpenedAt, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_OpenedAt, put=__cordl_internal_set_OpenedAt)) ::System::Nullable_1<::System::DateTime>  OpenedAt;

/// @brief Field RequestedCatalogItemIds, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_RequestedCatalogItemIds, put=__cordl_internal_set_RequestedCatalogItemIds)) ::System::Collections::Generic::List_1<::StringW>*  RequestedCatalogItemIds;

/// @brief Field Status, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_Status, put=__cordl_internal_set_Status)) ::System::Nullable_1<::PlayFab::ClientModels::TradeStatus>  Status;

/// @brief Field TradeId, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_TradeId, put=__cordl_internal_set_TradeId)) ::StringW  TradeId;

static inline ::PlayFab::ClientModels::TradeInfo* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_AcceptedInventoryInstanceIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_AcceptedInventoryInstanceIds() ;

constexpr ::StringW const& __cordl_internal_get_AcceptedPlayerId() const;

constexpr ::StringW& __cordl_internal_get_AcceptedPlayerId() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_AllowedPlayerIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_AllowedPlayerIds() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_CancelledAt() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_CancelledAt() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_FilledAt() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_FilledAt() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_InvalidatedAt() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_InvalidatedAt() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_OfferedCatalogItemIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_OfferedCatalogItemIds() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_OfferedInventoryInstanceIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_OfferedInventoryInstanceIds() ;

constexpr ::StringW const& __cordl_internal_get_OfferingPlayerId() const;

constexpr ::StringW& __cordl_internal_get_OfferingPlayerId() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_OpenedAt() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_OpenedAt() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_RequestedCatalogItemIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_RequestedCatalogItemIds() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::TradeStatus> const& __cordl_internal_get_Status() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::TradeStatus>& __cordl_internal_get_Status() ;

constexpr ::StringW const& __cordl_internal_get_TradeId() const;

constexpr ::StringW& __cordl_internal_get_TradeId() ;

constexpr void __cordl_internal_set_AcceptedInventoryInstanceIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_AcceptedPlayerId(::StringW  value) ;

constexpr void __cordl_internal_set_AllowedPlayerIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_CancelledAt(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_FilledAt(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_InvalidatedAt(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_OfferedCatalogItemIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OfferedInventoryInstanceIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OfferingPlayerId(::StringW  value) ;

constexpr void __cordl_internal_set_OpenedAt(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_RequestedCatalogItemIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_Status(::System::Nullable_1<::PlayFab::ClientModels::TradeStatus>  value) ;

constexpr void __cordl_internal_set_TradeId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e2c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TradeInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TradeInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TradeInfo(TradeInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TradeInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TradeInfo(TradeInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20239};

/// @brief Field AcceptedInventoryInstanceIds, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___AcceptedInventoryInstanceIds;

/// @brief Field AcceptedPlayerId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___AcceptedPlayerId;

/// @brief Field AllowedPlayerIds, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___AllowedPlayerIds;

/// @brief Field CancelledAt, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___CancelledAt;

/// @brief Field FilledAt, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___FilledAt;

/// @brief Field InvalidatedAt, offset: 0x48, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___InvalidatedAt;

/// @brief Field OfferedCatalogItemIds, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___OfferedCatalogItemIds;

/// @brief Field OfferedInventoryInstanceIds, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___OfferedInventoryInstanceIds;

/// @brief Field OfferingPlayerId, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___OfferingPlayerId;

/// @brief Field OpenedAt, offset: 0x70, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___OpenedAt;

/// @brief Field RequestedCatalogItemIds, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___RequestedCatalogItemIds;

/// @brief Field Status, offset: 0x88, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::TradeStatus>  ___Status;

/// @brief Field TradeId, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___TradeId;

/// @brief Size padding 0x98 - 0xa0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::TradeInfo, ___AcceptedInventoryInstanceIds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::TradeInfo, ___AcceptedPlayerId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::TradeInfo, ___AllowedPlayerIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::TradeInfo, ___CancelledAt) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::TradeInfo, ___FilledAt) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::TradeInfo, ___InvalidatedAt) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::TradeInfo, ___OfferedCatalogItemIds) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::TradeInfo, ___OfferedInventoryInstanceIds) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::TradeInfo, ___OfferingPlayerId) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::TradeInfo, ___OpenedAt) == 0x70, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::TradeInfo, ___RequestedCatalogItemIds) == 0x80, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::TradeInfo, ___Status) == 0x88, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::TradeInfo, ___TradeId) == 0x98, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::TradeInfo) == 0x98, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
