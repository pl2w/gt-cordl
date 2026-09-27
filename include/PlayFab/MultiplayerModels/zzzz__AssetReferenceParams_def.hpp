#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/AssetReferenceParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AssetReferenceParams)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class AssetReferenceParams;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::AssetReferenceParams*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::AssetReferenceParams*, "PlayFab.MultiplayerModels", "AssetReferenceParams");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.AssetReferenceParams
class CORDL_TYPE AssetReferenceParams : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field FileName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_FileName, put=__cordl_internal_set_FileName)) ::StringW  FileName;

/// @brief Field MountPath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MountPath, put=__cordl_internal_set_MountPath)) ::StringW  MountPath;

static inline ::PlayFab::MultiplayerModels::AssetReferenceParams* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_FileName() const;

constexpr ::StringW& __cordl_internal_get_FileName() ;

constexpr ::StringW const& __cordl_internal_get_MountPath() const;

constexpr ::StringW& __cordl_internal_get_MountPath() ;

constexpr void __cordl_internal_set_FileName(::StringW  value) ;

constexpr void __cordl_internal_set_MountPath(::StringW  value) ;

/// @brief Method .ctor, addr 0xa8407a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetReferenceParams() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceParams", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetReferenceParams(AssetReferenceParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceParams", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetReferenceParams(AssetReferenceParams const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19582};

/// @brief Field FileName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___FileName;

/// @brief Field MountPath, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___MountPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::AssetReferenceParams, ___FileName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::AssetReferenceParams, ___MountPath) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::AssetReferenceParams) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
