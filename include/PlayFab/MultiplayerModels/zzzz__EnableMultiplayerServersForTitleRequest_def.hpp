#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/EnableMultiplayerServersForTitleRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(EnableMultiplayerServersForTitleRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class EnableMultiplayerServersForTitleRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleRequest*, "PlayFab.MultiplayerModels", "EnableMultiplayerServersForTitleRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.EnableMultiplayerServersForTitleRequest
class CORDL_TYPE EnableMultiplayerServersForTitleRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa840930, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnableMultiplayerServersForTitleRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnableMultiplayerServersForTitleRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnableMultiplayerServersForTitleRequest(EnableMultiplayerServersForTitleRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnableMultiplayerServersForTitleRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnableMultiplayerServersForTitleRequest(EnableMultiplayerServersForTitleRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19640};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
