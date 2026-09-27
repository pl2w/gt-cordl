#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ScreenComposerSettings_HardLimitSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ScreenComposerSettings_HardLimitSettings)
// Forward declare root types
namespace GlobalNamespace {
struct ScreenComposerSettings_HardLimitSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScreenComposerSettings_HardLimitSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScreenComposerSettings_HardLimitSettings, "Unity.Cinemachine", "ScreenComposerSettings/HardLimitSettings");
// Dependencies UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.ScreenComposerSettings/HardLimitSettings
struct CORDL_TYPE ScreenComposerSettings_HardLimitSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ScreenComposerSettings_HardLimitSettings() ;

// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Size", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "Offset", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }]
constexpr ScreenComposerSettings_HardLimitSettings(bool  Enabled, ::UnityEngine::Vector2  Size, ::UnityEngine::Vector2  Offset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22356};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field Enabled, offset: 0x0, size: 0x1, def value: None
 bool  Enabled;

/// [Tooltip("The target will not be allowed to be outside this region. When the target is within this region, the camera will gradually adjust to re-align towards the desired position, depending on the damping speed.  Full screen size is 1")]
/// [DelayedVector]
/// @brief Field Size, offset: 0x4, size: 0x8, def value: None
 ::UnityEngine::Vector2  Size;

/// [Tooltip("A zero Offset means that the hard limits will be centered around the target screen position.  A nonzero Offset will uncenter the hard limits relative to the target screen position.")]
/// [DelayedVector]
/// @brief Field Offset, offset: 0xc, size: 0x8, def value: None
 ::UnityEngine::Vector2  Offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenComposerSettings_HardLimitSettings, Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenComposerSettings_HardLimitSettings, Size) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenComposerSettings_HardLimitSettings, Offset) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScreenComposerSettings_HardLimitSettings) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
