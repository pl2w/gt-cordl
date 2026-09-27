#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/LinearRegionSelectionRuleExpansion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinearRegionSelectionRuleExpansion)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class LinearRegionSelectionRuleExpansion;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::LinearRegionSelectionRuleExpansion*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::LinearRegionSelectionRuleExpansion*, "PlayFab.MultiplayerModels", "LinearRegionSelectionRuleExpansion");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.LinearRegionSelectionRuleExpansion
class CORDL_TYPE LinearRegionSelectionRuleExpansion : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Delta, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Delta, put=__cordl_internal_set_Delta)) uint32_t  Delta;

/// @brief Field Limit, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_Limit, put=__cordl_internal_set_Limit)) uint32_t  Limit;

/// @brief Field SecondsBetweenExpansions, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondsBetweenExpansions, put=__cordl_internal_set_SecondsBetweenExpansions)) uint32_t  SecondsBetweenExpansions;

static inline ::PlayFab::MultiplayerModels::LinearRegionSelectionRuleExpansion* New_ctor() ;

constexpr uint32_t const& __cordl_internal_get_Delta() const;

constexpr uint32_t& __cordl_internal_get_Delta() ;

constexpr uint32_t const& __cordl_internal_get_Limit() const;

constexpr uint32_t& __cordl_internal_get_Limit() ;

constexpr uint32_t const& __cordl_internal_get_SecondsBetweenExpansions() const;

constexpr uint32_t& __cordl_internal_get_SecondsBetweenExpansions() ;

constexpr void __cordl_internal_set_Delta(uint32_t  value) ;

constexpr void __cordl_internal_set_Limit(uint32_t  value) ;

constexpr void __cordl_internal_set_SecondsBetweenExpansions(uint32_t  value) ;

/// @brief Method .ctor, addr 0xa840a58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinearRegionSelectionRuleExpansion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinearRegionSelectionRuleExpansion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinearRegionSelectionRuleExpansion(LinearRegionSelectionRuleExpansion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinearRegionSelectionRuleExpansion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinearRegionSelectionRuleExpansion(LinearRegionSelectionRuleExpansion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19677};

/// @brief Field Delta, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___Delta;

/// @brief Field Limit, offset: 0x14, size: 0x4, def value: None
 uint32_t  ___Limit;

/// @brief Field SecondsBetweenExpansions, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___SecondsBetweenExpansions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::LinearRegionSelectionRuleExpansion, ___Delta) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::LinearRegionSelectionRuleExpansion, ___Limit) == 0x14, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::LinearRegionSelectionRuleExpansion, ___SecondsBetweenExpansions) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::LinearRegionSelectionRuleExpansion) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
