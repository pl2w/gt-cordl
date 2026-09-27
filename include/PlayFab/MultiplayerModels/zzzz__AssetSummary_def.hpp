#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/AssetSummary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AssetSummary)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class AssetSummary;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::AssetSummary*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::AssetSummary*, "PlayFab.MultiplayerModels", "AssetSummary");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.AssetSummary
class CORDL_TYPE AssetSummary : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field FileName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_FileName, put=__cordl_internal_set_FileName)) ::StringW  FileName;

/// @brief Field Metadata, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Metadata, put=__cordl_internal_set_Metadata)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  Metadata;

static inline ::PlayFab::MultiplayerModels::AssetSummary* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_FileName() const;

constexpr ::StringW& __cordl_internal_get_FileName() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_Metadata() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_Metadata() ;

constexpr void __cordl_internal_set_FileName(::StringW  value) ;

constexpr void __cordl_internal_set_Metadata(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa8407a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetSummary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetSummary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetSummary(AssetSummary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetSummary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetSummary(AssetSummary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19583};

/// @brief Field FileName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___FileName;

/// @brief Field Metadata, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___Metadata;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::AssetSummary, ___FileName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::AssetSummary, ___Metadata) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::AssetSummary) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
