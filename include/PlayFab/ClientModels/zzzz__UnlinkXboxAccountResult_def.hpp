#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkXboxAccountResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkXboxAccountResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkXboxAccountResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkXboxAccountResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkXboxAccountResult*, "PlayFab.ClientModels", "UnlinkXboxAccountResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkXboxAccountResult
class CORDL_TYPE UnlinkXboxAccountResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkXboxAccountResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e3d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkXboxAccountResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkXboxAccountResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkXboxAccountResult(UnlinkXboxAccountResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkXboxAccountResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkXboxAccountResult(UnlinkXboxAccountResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20274};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkXboxAccountResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
