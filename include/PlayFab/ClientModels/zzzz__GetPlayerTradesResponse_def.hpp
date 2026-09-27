#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerTradesResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetPlayerTradesResponse)
namespace PlayFab::ClientModels {
class TradeInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayerTradesResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayerTradesResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayerTradesResponse*, "PlayFab.ClientModels", "GetPlayerTradesResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayerTradesResponse
class CORDL_TYPE GetPlayerTradesResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field AcceptedTrades, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AcceptedTrades, put=__cordl_internal_set_AcceptedTrades)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>*  AcceptedTrades;

/// @brief Field OpenedTrades, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OpenedTrades, put=__cordl_internal_set_OpenedTrades)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>*  OpenedTrades;

static inline ::PlayFab::ClientModels::GetPlayerTradesResponse* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>* const& __cordl_internal_get_AcceptedTrades() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>*& __cordl_internal_get_AcceptedTrades() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>* const& __cordl_internal_get_OpenedTrades() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>*& __cordl_internal_get_OpenedTrades() ;

constexpr void __cordl_internal_set_AcceptedTrades(::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>*  value) ;

constexpr void __cordl_internal_set_OpenedTrades(::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>*  value) ;

/// @brief Method .ctor, addr 0xa84dd38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerTradesResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerTradesResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerTradesResponse(GetPlayerTradesResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerTradesResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerTradesResponse(GetPlayerTradesResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20054};

/// @brief Field AcceptedTrades, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>*  ___AcceptedTrades;

/// @brief Field OpenedTrades, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>*  ___OpenedTrades;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayerTradesResponse, ___AcceptedTrades) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerTradesResponse, ___OpenedTrades) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayerTradesResponse) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
