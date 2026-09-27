#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineBrain_LensModeOverrideSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__LensSettings_OverrideModes_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineBrain_LensModeOverrideSettings)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineBrain_LensModeOverrideSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineBrain_LensModeOverrideSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineBrain_LensModeOverrideSettings, "Unity.Cinemachine", "CinemachineBrain/LensModeOverrideSettings");
// Dependencies Unity.Cinemachine.LensSettings::OverrideModes
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineBrain/LensModeOverrideSettings
struct CORDL_TYPE CinemachineBrain_LensModeOverrideSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineBrain_LensModeOverrideSettings() ;

// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "DefaultMode", ty: "::GlobalNamespace::LensSettings_OverrideModes", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineBrain_LensModeOverrideSettings(bool  Enabled, ::GlobalNamespace::LensSettings_OverrideModes  DefaultMode) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22142};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [Tooltip("If set, enables CinemachineCameras to override the lens mode of the camera")]
/// @brief Field Enabled, offset: 0x0, size: 0x1, def value: None
 bool  Enabled;

/// [Tooltip("Lens mode to use when no mode override is active")]
/// @brief Field DefaultMode, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::LensSettings_OverrideModes  DefaultMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineBrain_LensModeOverrideSettings, Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineBrain_LensModeOverrideSettings, DefaultMode) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineBrain_LensModeOverrideSettings) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
