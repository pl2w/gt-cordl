#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetTradeStatusRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetTradeStatusRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetTradeStatusRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetTradeStatusRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetTradeStatusRequest*, "PlayFab.ClientModels", "GetTradeStatusRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetTradeStatusRequest
class CORDL_TYPE GetTradeStatusRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field OfferingPlayerId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OfferingPlayerId, put=__cordl_internal_set_OfferingPlayerId)) ::StringW  OfferingPlayerId;

/// @brief Field TradeId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TradeId, put=__cordl_internal_set_TradeId)) ::StringW  TradeId;

static inline ::PlayFab::ClientModels::GetTradeStatusRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_OfferingPlayerId() const;

constexpr ::StringW& __cordl_internal_get_OfferingPlayerId() ;

constexpr ::StringW const& __cordl_internal_get_TradeId() const;

constexpr ::StringW& __cordl_internal_get_TradeId() ;

constexpr void __cordl_internal_set_OfferingPlayerId(::StringW  value) ;

constexpr void __cordl_internal_set_TradeId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84de78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTradeStatusRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTradeStatusRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTradeStatusRequest(GetTradeStatusRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTradeStatusRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTradeStatusRequest(GetTradeStatusRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20094};

/// @brief Field OfferingPlayerId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___OfferingPlayerId;

/// @brief Field TradeId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___TradeId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetTradeStatusRequest, ___OfferingPlayerId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetTradeStatusRequest, ___TradeId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetTradeStatusRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
