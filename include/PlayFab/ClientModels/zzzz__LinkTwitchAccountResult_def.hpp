#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkTwitchAccountResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(LinkTwitchAccountResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class LinkTwitchAccountResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LinkTwitchAccountResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LinkTwitchAccountResult*, "PlayFab.ClientModels", "LinkTwitchAccountResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LinkTwitchAccountResult
class CORDL_TYPE LinkTwitchAccountResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::LinkTwitchAccountResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84dfc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkTwitchAccountResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkTwitchAccountResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkTwitchAccountResult(LinkTwitchAccountResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkTwitchAccountResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkTwitchAccountResult(LinkTwitchAccountResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20135};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::LinkTwitchAccountResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
