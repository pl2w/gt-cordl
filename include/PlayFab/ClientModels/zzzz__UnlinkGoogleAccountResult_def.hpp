#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkGoogleAccountResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkGoogleAccountResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkGoogleAccountResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkGoogleAccountResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkGoogleAccountResult*, "PlayFab.ClientModels", "UnlinkGoogleAccountResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkGoogleAccountResult
class CORDL_TYPE UnlinkGoogleAccountResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkGoogleAccountResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e340, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkGoogleAccountResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkGoogleAccountResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkGoogleAccountResult(UnlinkGoogleAccountResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkGoogleAccountResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkGoogleAccountResult(UnlinkGoogleAccountResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20256};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkGoogleAccountResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
