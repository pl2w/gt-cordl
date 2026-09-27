#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AddOrUpdateContactEmailResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(AddOrUpdateContactEmailResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class AddOrUpdateContactEmailResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::AddOrUpdateContactEmailResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::AddOrUpdateContactEmailResult*, "PlayFab.ClientModels", "AddOrUpdateContactEmailResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.AddOrUpdateContactEmailResult
class CORDL_TYPE AddOrUpdateContactEmailResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::AddOrUpdateContactEmailResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84da18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddOrUpdateContactEmailResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddOrUpdateContactEmailResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AddOrUpdateContactEmailResult(AddOrUpdateContactEmailResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddOrUpdateContactEmailResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddOrUpdateContactEmailResult(AddOrUpdateContactEmailResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19946};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::AddOrUpdateContactEmailResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
