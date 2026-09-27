#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ReportAdActivityResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(ReportAdActivityResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class ReportAdActivityResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ReportAdActivityResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ReportAdActivityResult*, "PlayFab.ClientModels", "ReportAdActivityResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ReportAdActivityResult
class CORDL_TYPE ReportAdActivityResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::ReportAdActivityResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e1d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReportAdActivityResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReportAdActivityResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReportAdActivityResult(ReportAdActivityResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReportAdActivityResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReportAdActivityResult(ReportAdActivityResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20206};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::ReportAdActivityResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
