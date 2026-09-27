#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetTradeStatusResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetTradeStatusResponse)
namespace PlayFab::ClientModels {
class TradeInfo;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetTradeStatusResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetTradeStatusResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetTradeStatusResponse*, "PlayFab.ClientModels", "GetTradeStatusResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetTradeStatusResponse
class CORDL_TYPE GetTradeStatusResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Trade, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Trade, put=__cordl_internal_set_Trade)) ::PlayFab::ClientModels::TradeInfo*  Trade;

static inline ::PlayFab::ClientModels::GetTradeStatusResponse* New_ctor() ;

constexpr ::PlayFab::ClientModels::TradeInfo* const& __cordl_internal_get_Trade() const;

constexpr ::PlayFab::ClientModels::TradeInfo*& __cordl_internal_get_Trade() ;

constexpr void __cordl_internal_set_Trade(::PlayFab::ClientModels::TradeInfo*  value) ;

/// @brief Method .ctor, addr 0xa84de80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTradeStatusResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTradeStatusResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTradeStatusResponse(GetTradeStatusResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTradeStatusResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTradeStatusResponse(GetTradeStatusResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20095};

/// @brief Field Trade, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::ClientModels::TradeInfo*  ___Trade;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetTradeStatusResponse, ___Trade) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetTradeStatusResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
