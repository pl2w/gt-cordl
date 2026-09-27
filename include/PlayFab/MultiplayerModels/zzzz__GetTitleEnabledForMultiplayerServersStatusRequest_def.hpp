#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetTitleEnabledForMultiplayerServersStatusRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(GetTitleEnabledForMultiplayerServersStatusRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetTitleEnabledForMultiplayerServersStatusRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusRequest*, "PlayFab.MultiplayerModels", "GetTitleEnabledForMultiplayerServersStatusRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetTitleEnabledForMultiplayerServersStatusRequest
class CORDL_TYPE GetTitleEnabledForMultiplayerServersStatusRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa840a18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTitleEnabledForMultiplayerServersStatusRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTitleEnabledForMultiplayerServersStatusRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTitleEnabledForMultiplayerServersStatusRequest(GetTitleEnabledForMultiplayerServersStatusRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTitleEnabledForMultiplayerServersStatusRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTitleEnabledForMultiplayerServersStatusRequest(GetTitleEnabledForMultiplayerServersStatusRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19669};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
