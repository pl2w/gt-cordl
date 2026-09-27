#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UpdateUserTitleDisplayNameResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdateUserTitleDisplayNameResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class UpdateUserTitleDisplayNameResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UpdateUserTitleDisplayNameResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UpdateUserTitleDisplayNameResult*, "PlayFab.ClientModels", "UpdateUserTitleDisplayNameResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UpdateUserTitleDisplayNameResult
class CORDL_TYPE UpdateUserTitleDisplayNameResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field DisplayName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

static inline ::PlayFab::ClientModels::UpdateUserTitleDisplayNameResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e450, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateUserTitleDisplayNameResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateUserTitleDisplayNameResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateUserTitleDisplayNameResult(UpdateUserTitleDisplayNameResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateUserTitleDisplayNameResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateUserTitleDisplayNameResult(UpdateUserTitleDisplayNameResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20290};

/// @brief Field DisplayName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___DisplayName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UpdateUserTitleDisplayNameResult, ___DisplayName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UpdateUserTitleDisplayNameResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
