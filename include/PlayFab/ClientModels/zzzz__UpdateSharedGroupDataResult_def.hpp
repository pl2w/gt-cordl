#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UpdateSharedGroupDataResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(UpdateSharedGroupDataResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class UpdateSharedGroupDataResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UpdateSharedGroupDataResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UpdateSharedGroupDataResult*, "PlayFab.ClientModels", "UpdateSharedGroupDataResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UpdateSharedGroupDataResult
class CORDL_TYPE UpdateSharedGroupDataResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UpdateSharedGroupDataResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e430, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateSharedGroupDataResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateSharedGroupDataResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateSharedGroupDataResult(UpdateSharedGroupDataResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateSharedGroupDataResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateSharedGroupDataResult(UpdateSharedGroupDataResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20286};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UpdateSharedGroupDataResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
