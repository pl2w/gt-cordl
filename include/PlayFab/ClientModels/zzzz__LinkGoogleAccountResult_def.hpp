#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkGoogleAccountResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(LinkGoogleAccountResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class LinkGoogleAccountResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LinkGoogleAccountResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LinkGoogleAccountResult*, "PlayFab.ClientModels", "LinkGoogleAccountResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LinkGoogleAccountResult
class CORDL_TYPE LinkGoogleAccountResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::LinkGoogleAccountResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84df50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkGoogleAccountResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkGoogleAccountResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkGoogleAccountResult(LinkGoogleAccountResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkGoogleAccountResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkGoogleAccountResult(LinkGoogleAccountResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20121};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::LinkGoogleAccountResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
