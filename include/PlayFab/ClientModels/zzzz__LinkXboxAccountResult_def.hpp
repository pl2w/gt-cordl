#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkXboxAccountResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(LinkXboxAccountResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class LinkXboxAccountResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LinkXboxAccountResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LinkXboxAccountResult*, "PlayFab.ClientModels", "LinkXboxAccountResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LinkXboxAccountResult
class CORDL_TYPE LinkXboxAccountResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::LinkXboxAccountResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84dfe0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkXboxAccountResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkXboxAccountResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkXboxAccountResult(LinkXboxAccountResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkXboxAccountResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkXboxAccountResult(LinkXboxAccountResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20139};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::LinkXboxAccountResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
