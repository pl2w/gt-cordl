#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/StoreMarketingModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StoreMarketingModel)
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class StoreMarketingModel;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::StoreMarketingModel*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::StoreMarketingModel*, "PlayFab.ClientModels", "StoreMarketingModel");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.StoreMarketingModel
class CORDL_TYPE StoreMarketingModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Description, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Description, put=__cordl_internal_set_Description)) ::StringW  Description;

/// @brief Field DisplayName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field Metadata, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Metadata, put=__cordl_internal_set_Metadata)) ::System::Object*  Metadata;

static inline ::PlayFab::ClientModels::StoreMarketingModel* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Description() const;

constexpr ::StringW& __cordl_internal_get_Description() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr ::System::Object* const& __cordl_internal_get_Metadata() const;

constexpr ::System::Object*& __cordl_internal_get_Metadata() ;

constexpr void __cordl_internal_set_Description(::StringW  value) ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_Metadata(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xa84e2a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StoreMarketingModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StoreMarketingModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StoreMarketingModel(StoreMarketingModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StoreMarketingModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StoreMarketingModel(StoreMarketingModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20232};

/// @brief Field Description, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Description;

/// @brief Field DisplayName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field Metadata, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___Metadata;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::StoreMarketingModel, ___Description) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StoreMarketingModel, ___DisplayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StoreMarketingModel, ___Metadata) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::StoreMarketingModel) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
