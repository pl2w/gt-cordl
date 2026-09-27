#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkFacebookAccountResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkFacebookAccountResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkFacebookAccountResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkFacebookAccountResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkFacebookAccountResult*, "PlayFab.ClientModels", "UnlinkFacebookAccountResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkFacebookAccountResult
class CORDL_TYPE UnlinkFacebookAccountResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkFacebookAccountResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e310, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkFacebookAccountResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkFacebookAccountResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkFacebookAccountResult(UnlinkFacebookAccountResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkFacebookAccountResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkFacebookAccountResult(UnlinkFacebookAccountResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20250};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkFacebookAccountResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
