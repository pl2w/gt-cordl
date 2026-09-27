#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkTwitchAccountResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkTwitchAccountResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkTwitchAccountResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkTwitchAccountResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkTwitchAccountResult*, "PlayFab.ClientModels", "UnlinkTwitchAccountResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkTwitchAccountResult
class CORDL_TYPE UnlinkTwitchAccountResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkTwitchAccountResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e3b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkTwitchAccountResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkTwitchAccountResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkTwitchAccountResult(UnlinkTwitchAccountResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkTwitchAccountResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkTwitchAccountResult(UnlinkTwitchAccountResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20270};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkTwitchAccountResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
