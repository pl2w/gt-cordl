#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RemoveGenericIDResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(RemoveGenericIDResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class RemoveGenericIDResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::RemoveGenericIDResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::RemoveGenericIDResult*, "PlayFab.ClientModels", "RemoveGenericIDResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.RemoveGenericIDResult
class CORDL_TYPE RemoveGenericIDResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::RemoveGenericIDResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e1b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoveGenericIDResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoveGenericIDResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoveGenericIDResult(RemoveGenericIDResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoveGenericIDResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoveGenericIDResult(RemoveGenericIDResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20202};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::RemoveGenericIDResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
