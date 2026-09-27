#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkCustomIDResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(LinkCustomIDResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class LinkCustomIDResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LinkCustomIDResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LinkCustomIDResult*, "PlayFab.ClientModels", "LinkCustomIDResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LinkCustomIDResult
class CORDL_TYPE LinkCustomIDResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::LinkCustomIDResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84df08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkCustomIDResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkCustomIDResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkCustomIDResult(LinkCustomIDResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkCustomIDResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkCustomIDResult(LinkCustomIDResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20112};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::LinkCustomIDResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
