#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetTitleMultiplayerServersQuotasResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetTitleMultiplayerServersQuotasResponse)
namespace PlayFab::MultiplayerModels {
class TitleMultiplayerServersQuotas;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetTitleMultiplayerServersQuotasResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse*, "PlayFab.MultiplayerModels", "GetTitleMultiplayerServersQuotasResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetTitleMultiplayerServersQuotasResponse
class CORDL_TYPE GetTitleMultiplayerServersQuotasResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Quotas, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Quotas, put=__cordl_internal_set_Quotas)) ::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas*  Quotas;

static inline ::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse* New_ctor() ;

constexpr ::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas* const& __cordl_internal_get_Quotas() const;

constexpr ::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas*& __cordl_internal_get_Quotas() ;

constexpr void __cordl_internal_set_Quotas(::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas*  value) ;

/// @brief Method .ctor, addr 0xa840a30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTitleMultiplayerServersQuotasResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTitleMultiplayerServersQuotasResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTitleMultiplayerServersQuotasResponse(GetTitleMultiplayerServersQuotasResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTitleMultiplayerServersQuotasResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTitleMultiplayerServersQuotasResponse(GetTitleMultiplayerServersQuotasResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19672};

/// @brief Field Quotas, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas*  ___Quotas;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse, ___Quotas) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
