#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ScreenComposerSettings_DeadZoneSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ScreenComposerSettings_DeadZoneSettings)
// Forward declare root types
namespace GlobalNamespace {
struct ScreenComposerSettings_DeadZoneSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScreenComposerSettings_DeadZoneSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScreenComposerSettings_DeadZoneSettings, "Unity.Cinemachine", "ScreenComposerSettings/DeadZoneSettings");
// Dependencies UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.ScreenComposerSettings/DeadZoneSettings
struct CORDL_TYPE ScreenComposerSettings_DeadZoneSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ScreenComposerSettings_DeadZoneSettings() ;

// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Size", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }]
constexpr ScreenComposerSettings_DeadZoneSettings(bool  Enabled, ::UnityEngine::Vector2  Size) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22355};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Enabled, offset: 0x0, size: 0x1, def value: None
 bool  Enabled;

/// [Tooltip("The camera will not adjust if the target is within this range of the screen position.  Full screen size is 1.")]
/// [DelayedVector]
/// @brief Field Size, offset: 0x4, size: 0x8, def value: None
 ::UnityEngine::Vector2  Size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenComposerSettings_DeadZoneSettings, Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenComposerSettings_DeadZoneSettings, Size) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScreenComposerSettings_DeadZoneSettings) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
