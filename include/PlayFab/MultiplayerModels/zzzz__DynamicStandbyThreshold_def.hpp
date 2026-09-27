#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/DynamicStandbyThreshold.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DynamicStandbyThreshold)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class DynamicStandbyThreshold;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::DynamicStandbyThreshold*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::DynamicStandbyThreshold*, "PlayFab.MultiplayerModels", "DynamicStandbyThreshold");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.DynamicStandbyThreshold
class CORDL_TYPE DynamicStandbyThreshold : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Multiplier, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Multiplier, put=__cordl_internal_set_Multiplier)) double_t  Multiplier;

/// @brief Field TriggerThresholdPercentage, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TriggerThresholdPercentage, put=__cordl_internal_set_TriggerThresholdPercentage)) double_t  TriggerThresholdPercentage;

static inline ::PlayFab::MultiplayerModels::DynamicStandbyThreshold* New_ctor() ;

constexpr double_t const& __cordl_internal_get_Multiplier() const;

constexpr double_t& __cordl_internal_get_Multiplier() ;

constexpr double_t const& __cordl_internal_get_TriggerThresholdPercentage() const;

constexpr double_t& __cordl_internal_get_TriggerThresholdPercentage() ;

constexpr void __cordl_internal_set_Multiplier(double_t  value) ;

constexpr void __cordl_internal_set_TriggerThresholdPercentage(double_t  value) ;

/// @brief Method .ctor, addr 0xa840920, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicStandbyThreshold() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicStandbyThreshold", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicStandbyThreshold(DynamicStandbyThreshold && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicStandbyThreshold", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicStandbyThreshold(DynamicStandbyThreshold const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19638};

/// @brief Field Multiplier, offset: 0x10, size: 0x8, def value: None
 double_t  ___Multiplier;

/// @brief Field TriggerThresholdPercentage, offset: 0x18, size: 0x8, def value: None
 double_t  ___TriggerThresholdPercentage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::DynamicStandbyThreshold, ___Multiplier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::DynamicStandbyThreshold, ___TriggerThresholdPercentage) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::DynamicStandbyThreshold) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
