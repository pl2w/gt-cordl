#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/DynamicStandbySettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicStandbySettings)
namespace PlayFab::MultiplayerModels {
class DynamicStandbyThreshold;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class DynamicStandbySettings;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::DynamicStandbySettings*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::DynamicStandbySettings*, "PlayFab.MultiplayerModels", "DynamicStandbySettings");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.DynamicStandbySettings
class CORDL_TYPE DynamicStandbySettings : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field DynamicFloorMultiplierThresholds, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_DynamicFloorMultiplierThresholds, put=__cordl_internal_set_DynamicFloorMultiplierThresholds)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DynamicStandbyThreshold*>*  DynamicFloorMultiplierThresholds;

/// @brief Field IsEnabled, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsEnabled, put=__cordl_internal_set_IsEnabled)) bool  IsEnabled;

/// @brief Field RampDownSeconds, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_RampDownSeconds, put=__cordl_internal_set_RampDownSeconds)) ::System::Nullable_1<int32_t>  RampDownSeconds;

static inline ::PlayFab::MultiplayerModels::DynamicStandbySettings* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DynamicStandbyThreshold*>* const& __cordl_internal_get_DynamicFloorMultiplierThresholds() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DynamicStandbyThreshold*>*& __cordl_internal_get_DynamicFloorMultiplierThresholds() ;

constexpr bool const& __cordl_internal_get_IsEnabled() const;

constexpr bool& __cordl_internal_get_IsEnabled() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_RampDownSeconds() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_RampDownSeconds() ;

constexpr void __cordl_internal_set_DynamicFloorMultiplierThresholds(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DynamicStandbyThreshold*>*  value) ;

constexpr void __cordl_internal_set_IsEnabled(bool  value) ;

constexpr void __cordl_internal_set_RampDownSeconds(::System::Nullable_1<int32_t>  value) ;

/// @brief Method .ctor, addr 0xa840918, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicStandbySettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicStandbySettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicStandbySettings(DynamicStandbySettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicStandbySettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicStandbySettings(DynamicStandbySettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19637};

/// @brief Field DynamicFloorMultiplierThresholds, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DynamicStandbyThreshold*>*  ___DynamicFloorMultiplierThresholds;

/// @brief Field IsEnabled, offset: 0x18, size: 0x1, def value: None
 bool  ___IsEnabled;

/// @brief Field RampDownSeconds, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___RampDownSeconds;

/// @brief Size padding 0x28 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::DynamicStandbySettings, ___DynamicFloorMultiplierThresholds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::DynamicStandbySettings, ___IsEnabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::DynamicStandbySettings, ___RampDownSeconds) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::DynamicStandbySettings) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
