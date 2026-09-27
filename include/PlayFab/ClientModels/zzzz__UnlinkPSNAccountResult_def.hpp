#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkPSNAccountResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkPSNAccountResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkPSNAccountResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkPSNAccountResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkPSNAccountResult*, "PlayFab.ClientModels", "UnlinkPSNAccountResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkPSNAccountResult
class CORDL_TYPE UnlinkPSNAccountResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkPSNAccountResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e390, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkPSNAccountResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkPSNAccountResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkPSNAccountResult(UnlinkPSNAccountResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkPSNAccountResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkPSNAccountResult(UnlinkPSNAccountResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20266};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkPSNAccountResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
