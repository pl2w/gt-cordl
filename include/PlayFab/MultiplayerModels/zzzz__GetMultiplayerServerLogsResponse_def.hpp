#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetMultiplayerServerLogsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetMultiplayerServerLogsResponse)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetMultiplayerServerLogsResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse*, "PlayFab.MultiplayerModels", "GetMultiplayerServerLogsResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetMultiplayerServerLogsResponse
class CORDL_TYPE GetMultiplayerServerLogsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field LogDownloadUrl, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_LogDownloadUrl, put=__cordl_internal_set_LogDownloadUrl)) ::StringW  LogDownloadUrl;

static inline ::PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_LogDownloadUrl() const;

constexpr ::StringW& __cordl_internal_get_LogDownloadUrl() ;

constexpr void __cordl_internal_set_LogDownloadUrl(::StringW  value) ;

/// @brief Method .ctor, addr 0xa8409d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetMultiplayerServerLogsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetMultiplayerServerLogsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetMultiplayerServerLogsResponse(GetMultiplayerServerLogsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetMultiplayerServerLogsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetMultiplayerServerLogsResponse(GetMultiplayerServerLogsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19661};

/// @brief Field LogDownloadUrl, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___LogDownloadUrl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse, ___LogDownloadUrl) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
