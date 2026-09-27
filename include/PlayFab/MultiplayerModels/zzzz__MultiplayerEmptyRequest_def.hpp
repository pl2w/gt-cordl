#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/MultiplayerEmptyRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerEmptyRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class MultiplayerEmptyRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::MultiplayerEmptyRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::MultiplayerEmptyRequest*, "PlayFab.MultiplayerModels", "MultiplayerEmptyRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.MultiplayerEmptyRequest
class CORDL_TYPE MultiplayerEmptyRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::MultiplayerModels::MultiplayerEmptyRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa840b88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiplayerEmptyRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerEmptyRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerEmptyRequest(MultiplayerEmptyRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerEmptyRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerEmptyRequest(MultiplayerEmptyRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19715};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::MultiplayerModels::MultiplayerEmptyRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
