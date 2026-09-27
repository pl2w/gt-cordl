#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CancelTradeResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(CancelTradeResponse)
namespace PlayFab::ClientModels {
class TradeInfo;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class CancelTradeResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::CancelTradeResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::CancelTradeResponse*, "PlayFab.ClientModels", "CancelTradeResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.CancelTradeResponse
class CORDL_TYPE CancelTradeResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Trade, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Trade, put=__cordl_internal_set_Trade)) ::PlayFab::ClientModels::TradeInfo*  Trade;

static inline ::PlayFab::ClientModels::CancelTradeResponse* New_ctor() ;

constexpr ::PlayFab::ClientModels::TradeInfo* const& __cordl_internal_get_Trade() const;

constexpr ::PlayFab::ClientModels::TradeInfo*& __cordl_internal_get_Trade() ;

constexpr void __cordl_internal_set_Trade(::PlayFab::ClientModels::TradeInfo*  value) ;

/// @brief Method .ctor, addr 0xa84da80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CancelTradeResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CancelTradeResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CancelTradeResponse(CancelTradeResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CancelTradeResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CancelTradeResponse(CancelTradeResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19960};

/// @brief Field Trade, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::ClientModels::TradeInfo*  ___Trade;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::CancelTradeResponse, ___Trade) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::CancelTradeResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
