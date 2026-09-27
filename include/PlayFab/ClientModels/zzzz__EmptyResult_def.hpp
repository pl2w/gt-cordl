#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/EmptyResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(EmptyResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class EmptyResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::EmptyResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::EmptyResult*, "PlayFab.ClientModels", "EmptyResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.EmptyResult
class CORDL_TYPE EmptyResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::EmptyResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84db48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmptyResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmptyResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyResult(EmptyResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyResult(EmptyResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19991};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::EmptyResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
