#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RemoveContactEmailResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(RemoveContactEmailResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class RemoveContactEmailResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::RemoveContactEmailResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::RemoveContactEmailResult*, "PlayFab.ClientModels", "RemoveContactEmailResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.RemoveContactEmailResult
class CORDL_TYPE RemoveContactEmailResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::RemoveContactEmailResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e198, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoveContactEmailResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoveContactEmailResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoveContactEmailResult(RemoveContactEmailResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoveContactEmailResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoveContactEmailResult(RemoveContactEmailResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20198};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::RemoveContactEmailResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
