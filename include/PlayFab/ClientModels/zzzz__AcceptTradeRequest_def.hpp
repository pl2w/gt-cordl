#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AcceptTradeRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AcceptTradeRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class AcceptTradeRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::AcceptTradeRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::AcceptTradeRequest*, "PlayFab.ClientModels", "AcceptTradeRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.AcceptTradeRequest
class CORDL_TYPE AcceptTradeRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field AcceptedInventoryInstanceIds, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AcceptedInventoryInstanceIds, put=__cordl_internal_set_AcceptedInventoryInstanceIds)) ::System::Collections::Generic::List_1<::StringW>*  AcceptedInventoryInstanceIds;

/// @brief Field OfferingPlayerId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OfferingPlayerId, put=__cordl_internal_set_OfferingPlayerId)) ::StringW  OfferingPlayerId;

/// @brief Field TradeId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TradeId, put=__cordl_internal_set_TradeId)) ::StringW  TradeId;

static inline ::PlayFab::ClientModels::AcceptTradeRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_AcceptedInventoryInstanceIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_AcceptedInventoryInstanceIds() ;

constexpr ::StringW const& __cordl_internal_get_OfferingPlayerId() const;

constexpr ::StringW& __cordl_internal_get_OfferingPlayerId() ;

constexpr ::StringW const& __cordl_internal_get_TradeId() const;

constexpr ::StringW& __cordl_internal_get_TradeId() ;

constexpr void __cordl_internal_set_AcceptedInventoryInstanceIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OfferingPlayerId(::StringW  value) ;

constexpr void __cordl_internal_set_TradeId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84d9d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AcceptTradeRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AcceptTradeRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AcceptTradeRequest(AcceptTradeRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AcceptTradeRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AcceptTradeRequest(AcceptTradeRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19937};

/// @brief Field AcceptedInventoryInstanceIds, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___AcceptedInventoryInstanceIds;

/// @brief Field OfferingPlayerId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___OfferingPlayerId;

/// @brief Field TradeId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___TradeId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::AcceptTradeRequest, ___AcceptedInventoryInstanceIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AcceptTradeRequest, ___OfferingPlayerId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AcceptTradeRequest, ___TradeId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::AcceptTradeRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
