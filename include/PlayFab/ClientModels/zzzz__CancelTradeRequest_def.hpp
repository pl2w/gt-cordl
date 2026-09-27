#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CancelTradeRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CancelTradeRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class CancelTradeRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::CancelTradeRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::CancelTradeRequest*, "PlayFab.ClientModels", "CancelTradeRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.CancelTradeRequest
class CORDL_TYPE CancelTradeRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field TradeId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TradeId, put=__cordl_internal_set_TradeId)) ::StringW  TradeId;

static inline ::PlayFab::ClientModels::CancelTradeRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_TradeId() const;

constexpr ::StringW& __cordl_internal_get_TradeId() ;

constexpr void __cordl_internal_set_TradeId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84da78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CancelTradeRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CancelTradeRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CancelTradeRequest(CancelTradeRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CancelTradeRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CancelTradeRequest(CancelTradeRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19959};

/// @brief Field TradeId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___TradeId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::CancelTradeRequest, ___TradeId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::CancelTradeRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
