#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AdRewardItemGranted.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AdRewardItemGranted)
// Forward declare root types
namespace PlayFab::ClientModels {
class AdRewardItemGranted;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::AdRewardItemGranted*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::AdRewardItemGranted*, "PlayFab.ClientModels", "AdRewardItemGranted");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.AdRewardItemGranted
class CORDL_TYPE AdRewardItemGranted : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field CatalogId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CatalogId, put=__cordl_internal_set_CatalogId)) ::StringW  CatalogId;

/// @brief Field DisplayName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field InstanceId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_InstanceId, put=__cordl_internal_set_InstanceId)) ::StringW  InstanceId;

/// @brief Field ItemId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemId, put=__cordl_internal_set_ItemId)) ::StringW  ItemId;

static inline ::PlayFab::ClientModels::AdRewardItemGranted* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CatalogId() const;

constexpr ::StringW& __cordl_internal_get_CatalogId() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr ::StringW const& __cordl_internal_get_InstanceId() const;

constexpr ::StringW& __cordl_internal_get_InstanceId() ;

constexpr ::StringW const& __cordl_internal_get_ItemId() const;

constexpr ::StringW& __cordl_internal_get_ItemId() ;

constexpr void __cordl_internal_set_CatalogId(::StringW  value) ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_InstanceId(::StringW  value) ;

constexpr void __cordl_internal_set_ItemId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84da50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdRewardItemGranted() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdRewardItemGranted", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AdRewardItemGranted(AdRewardItemGranted && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdRewardItemGranted", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdRewardItemGranted(AdRewardItemGranted const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19953};

/// @brief Field CatalogId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___CatalogId;

/// @brief Field DisplayName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field InstanceId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___InstanceId;

/// @brief Field ItemId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ItemId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::AdRewardItemGranted, ___CatalogId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AdRewardItemGranted, ___DisplayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AdRewardItemGranted, ___InstanceId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AdRewardItemGranted, ___ItemId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::AdRewardItemGranted) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
