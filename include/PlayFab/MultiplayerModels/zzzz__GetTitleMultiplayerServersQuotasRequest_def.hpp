#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetTitleMultiplayerServersQuotasRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(GetTitleMultiplayerServersQuotasRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetTitleMultiplayerServersQuotasRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasRequest*, "PlayFab.MultiplayerModels", "GetTitleMultiplayerServersQuotasRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetTitleMultiplayerServersQuotasRequest
class CORDL_TYPE GetTitleMultiplayerServersQuotasRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa840a28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTitleMultiplayerServersQuotasRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTitleMultiplayerServersQuotasRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTitleMultiplayerServersQuotasRequest(GetTitleMultiplayerServersQuotasRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTitleMultiplayerServersQuotasRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTitleMultiplayerServersQuotasRequest(GetTitleMultiplayerServersQuotasRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19671};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
