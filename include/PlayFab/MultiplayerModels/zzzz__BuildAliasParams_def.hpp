#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/BuildAliasParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BuildAliasParams)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class BuildAliasParams;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::BuildAliasParams*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::BuildAliasParams*, "PlayFab.MultiplayerModels", "BuildAliasParams");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.BuildAliasParams
class CORDL_TYPE BuildAliasParams : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field AliasId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AliasId, put=__cordl_internal_set_AliasId)) ::StringW  AliasId;

static inline ::PlayFab::MultiplayerModels::BuildAliasParams* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AliasId() const;

constexpr ::StringW& __cordl_internal_get_AliasId() ;

constexpr void __cordl_internal_set_AliasId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa8407b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuildAliasParams() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuildAliasParams", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuildAliasParams(BuildAliasParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuildAliasParams", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuildAliasParams(BuildAliasParams const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19591};

/// @brief Field AliasId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___AliasId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::BuildAliasParams, ___AliasId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::BuildAliasParams) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
