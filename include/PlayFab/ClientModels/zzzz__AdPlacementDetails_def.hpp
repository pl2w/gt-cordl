#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AdPlacementDetails.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AdPlacementDetails)
// Forward declare root types
namespace PlayFab::ClientModels {
class AdPlacementDetails;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::AdPlacementDetails*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::AdPlacementDetails*, "PlayFab.ClientModels", "AdPlacementDetails");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.AdPlacementDetails
class CORDL_TYPE AdPlacementDetails : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field PlacementId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlacementId, put=__cordl_internal_set_PlacementId)) ::StringW  PlacementId;

/// @brief Field PlacementName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlacementName, put=__cordl_internal_set_PlacementName)) ::StringW  PlacementName;

/// @brief Field PlacementViewsRemaining, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_PlacementViewsRemaining, put=__cordl_internal_set_PlacementViewsRemaining)) ::System::Nullable_1<int32_t>  PlacementViewsRemaining;

/// @brief Field PlacementViewsResetMinutes, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_PlacementViewsResetMinutes, put=__cordl_internal_set_PlacementViewsResetMinutes)) ::System::Nullable_1<double_t>  PlacementViewsResetMinutes;

/// @brief Field RewardAssetUrl, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_RewardAssetUrl, put=__cordl_internal_set_RewardAssetUrl)) ::StringW  RewardAssetUrl;

/// @brief Field RewardDescription, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_RewardDescription, put=__cordl_internal_set_RewardDescription)) ::StringW  RewardDescription;

/// @brief Field RewardId, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_RewardId, put=__cordl_internal_set_RewardId)) ::StringW  RewardId;

/// @brief Field RewardName, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_RewardName, put=__cordl_internal_set_RewardName)) ::StringW  RewardName;

static inline ::PlayFab::ClientModels::AdPlacementDetails* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_PlacementId() const;

constexpr ::StringW& __cordl_internal_get_PlacementId() ;

constexpr ::StringW const& __cordl_internal_get_PlacementName() const;

constexpr ::StringW& __cordl_internal_get_PlacementName() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_PlacementViewsRemaining() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_PlacementViewsRemaining() ;

constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get_PlacementViewsResetMinutes() const;

constexpr ::System::Nullable_1<double_t>& __cordl_internal_get_PlacementViewsResetMinutes() ;

constexpr ::StringW const& __cordl_internal_get_RewardAssetUrl() const;

constexpr ::StringW& __cordl_internal_get_RewardAssetUrl() ;

constexpr ::StringW const& __cordl_internal_get_RewardDescription() const;

constexpr ::StringW& __cordl_internal_get_RewardDescription() ;

constexpr ::StringW const& __cordl_internal_get_RewardId() const;

constexpr ::StringW& __cordl_internal_get_RewardId() ;

constexpr ::StringW const& __cordl_internal_get_RewardName() const;

constexpr ::StringW& __cordl_internal_get_RewardName() ;

constexpr void __cordl_internal_set_PlacementId(::StringW  value) ;

constexpr void __cordl_internal_set_PlacementName(::StringW  value) ;

constexpr void __cordl_internal_set_PlacementViewsRemaining(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_PlacementViewsResetMinutes(::System::Nullable_1<double_t>  value) ;

constexpr void __cordl_internal_set_RewardAssetUrl(::StringW  value) ;

constexpr void __cordl_internal_set_RewardDescription(::StringW  value) ;

constexpr void __cordl_internal_set_RewardId(::StringW  value) ;

constexpr void __cordl_internal_set_RewardName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84da48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdPlacementDetails() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdPlacementDetails", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AdPlacementDetails(AdPlacementDetails && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdPlacementDetails", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdPlacementDetails(AdPlacementDetails const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19952};

/// @brief Field PlacementId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___PlacementId;

/// @brief Field PlacementName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PlacementName;

/// @brief Field PlacementViewsRemaining, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___PlacementViewsRemaining;

/// @brief Field PlacementViewsResetMinutes, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<double_t>  ___PlacementViewsResetMinutes;

/// @brief Field RewardAssetUrl, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___RewardAssetUrl;

/// @brief Field RewardDescription, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___RewardDescription;

/// @brief Field RewardId, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___RewardId;

/// @brief Field RewardName, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___RewardName;

/// @brief Size padding 0x58 - 0x60 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::AdPlacementDetails, ___PlacementId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AdPlacementDetails, ___PlacementName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AdPlacementDetails, ___PlacementViewsRemaining) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AdPlacementDetails, ___PlacementViewsResetMinutes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AdPlacementDetails, ___RewardAssetUrl) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AdPlacementDetails, ___RewardDescription) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AdPlacementDetails, ___RewardId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AdPlacementDetails, ___RewardName) == 0x58, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::AdPlacementDetails) == 0x58, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
