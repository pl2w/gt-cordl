#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/OpenTradeRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OpenTradeRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class OpenTradeRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::OpenTradeRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::OpenTradeRequest*, "PlayFab.ClientModels", "OpenTradeRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.OpenTradeRequest
class CORDL_TYPE OpenTradeRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field AllowedPlayerIds, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AllowedPlayerIds, put=__cordl_internal_set_AllowedPlayerIds)) ::System::Collections::Generic::List_1<::StringW>*  AllowedPlayerIds;

/// @brief Field OfferedInventoryInstanceIds, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OfferedInventoryInstanceIds, put=__cordl_internal_set_OfferedInventoryInstanceIds)) ::System::Collections::Generic::List_1<::StringW>*  OfferedInventoryInstanceIds;

/// @brief Field RequestedCatalogItemIds, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_RequestedCatalogItemIds, put=__cordl_internal_set_RequestedCatalogItemIds)) ::System::Collections::Generic::List_1<::StringW>*  RequestedCatalogItemIds;

static inline ::PlayFab::ClientModels::OpenTradeRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_AllowedPlayerIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_AllowedPlayerIds() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_OfferedInventoryInstanceIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_OfferedInventoryInstanceIds() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_RequestedCatalogItemIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_RequestedCatalogItemIds() ;

constexpr void __cordl_internal_set_AllowedPlayerIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OfferedInventoryInstanceIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_RequestedCatalogItemIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84e0d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenTradeRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenTradeRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenTradeRequest(OpenTradeRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenTradeRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenTradeRequest(OpenTradeRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20172};

/// @brief Field AllowedPlayerIds, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___AllowedPlayerIds;

/// @brief Field OfferedInventoryInstanceIds, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___OfferedInventoryInstanceIds;

/// @brief Field RequestedCatalogItemIds, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___RequestedCatalogItemIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::OpenTradeRequest, ___AllowedPlayerIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::OpenTradeRequest, ___OfferedInventoryInstanceIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::OpenTradeRequest, ___RequestedCatalogItemIds) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::OpenTradeRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
