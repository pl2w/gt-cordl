#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkCustomIDResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkCustomIDResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkCustomIDResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkCustomIDResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkCustomIDResult*, "PlayFab.ClientModels", "UnlinkCustomIDResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkCustomIDResult
class CORDL_TYPE UnlinkCustomIDResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkCustomIDResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e300, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkCustomIDResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkCustomIDResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkCustomIDResult(UnlinkCustomIDResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkCustomIDResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkCustomIDResult(UnlinkCustomIDResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20248};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkCustomIDResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
