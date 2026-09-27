#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/AssetReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AssetReference)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class AssetReference;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::AssetReference*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::AssetReference*, "PlayFab.MultiplayerModels", "AssetReference");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.AssetReference
class CORDL_TYPE AssetReference : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field FileName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_FileName, put=__cordl_internal_set_FileName)) ::StringW  FileName;

/// @brief Field MountPath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MountPath, put=__cordl_internal_set_MountPath)) ::StringW  MountPath;

static inline ::PlayFab::MultiplayerModels::AssetReference* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_FileName() const;

constexpr ::StringW& __cordl_internal_get_FileName() ;

constexpr ::StringW const& __cordl_internal_get_MountPath() const;

constexpr ::StringW& __cordl_internal_get_MountPath() ;

constexpr void __cordl_internal_set_FileName(::StringW  value) ;

constexpr void __cordl_internal_set_MountPath(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840798, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetReference(AssetReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetReference(AssetReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19581};

/// @brief Field FileName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___FileName;

/// @brief Field MountPath, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___MountPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::AssetReference, ___FileName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::AssetReference, ___MountPath) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::AssetReference) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
