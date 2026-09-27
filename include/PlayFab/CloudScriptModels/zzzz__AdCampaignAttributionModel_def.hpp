#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/AdCampaignAttributionModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AdCampaignAttributionModel)
// Forward declare root types
namespace PlayFab::CloudScriptModels {
class AdCampaignAttributionModel;
}
// Write type traits
MARK_REF_T(::PlayFab::CloudScriptModels::AdCampaignAttributionModel*);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::AdCampaignAttributionModel*, "PlayFab.CloudScriptModels", "AdCampaignAttributionModel");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.DateTime
namespace PlayFab::CloudScriptModels {
// Is value type: false
// CS Name: PlayFab.CloudScriptModels.AdCampaignAttributionModel
class CORDL_TYPE AdCampaignAttributionModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field AttributedAt, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AttributedAt, put=__cordl_internal_set_AttributedAt)) ::System::DateTime  AttributedAt;

/// @brief Field CampaignId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CampaignId, put=__cordl_internal_set_CampaignId)) ::StringW  CampaignId;

/// @brief Field Platform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Platform, put=__cordl_internal_set_Platform)) ::StringW  Platform;

static inline ::PlayFab::CloudScriptModels::AdCampaignAttributionModel* New_ctor() ;

constexpr ::System::DateTime const& __cordl_internal_get_AttributedAt() const;

constexpr ::System::DateTime& __cordl_internal_get_AttributedAt() ;

constexpr ::StringW const& __cordl_internal_get_CampaignId() const;

constexpr ::StringW& __cordl_internal_get_CampaignId() ;

constexpr ::StringW const& __cordl_internal_get_Platform() const;

constexpr ::StringW& __cordl_internal_get_Platform() ;

constexpr void __cordl_internal_set_AttributedAt(::System::DateTime  value) ;

constexpr void __cordl_internal_set_CampaignId(::StringW  value) ;

constexpr void __cordl_internal_set_Platform(::StringW  value) ;

/// @brief Method .ctor, addr 0xa842f0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdCampaignAttributionModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdCampaignAttributionModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AdCampaignAttributionModel(AdCampaignAttributionModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdCampaignAttributionModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdCampaignAttributionModel(AdCampaignAttributionModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19869};

/// @brief Field AttributedAt, offset: 0x10, size: 0x8, def value: None
 ::System::DateTime  ___AttributedAt;

/// @brief Field CampaignId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CampaignId;

/// @brief Field Platform, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Platform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::AdCampaignAttributionModel, ___AttributedAt) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::AdCampaignAttributionModel, ___CampaignId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::AdCampaignAttributionModel, ___Platform) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::AdCampaignAttributionModel) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
