#pragma once
// IWYU pragma private; include "Unity/Cinemachine/LookaheadSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LookaheadSettings)
// Forward declare root types
namespace Unity::Cinemachine {
struct LookaheadSettings;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::LookaheadSettings);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::LookaheadSettings, "Unity.Cinemachine", "LookaheadSettings");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.LookaheadSettings
struct CORDL_TYPE LookaheadSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LookaheadSettings() ;

// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Time", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Smoothing", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IgnoreY", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr LookaheadSettings(bool  Enabled, float_t  Time, float_t  Smoothing, bool  IgnoreY) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22345};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Enabled, offset: 0x0, size: 0x1, def value: None
 bool  Enabled;

/// [Tooltip("Predict the position this many seconds into the future.  Note that this setting is sensitive to noisy animation, and can amplify the noise, resulting in undesirable jitter.  If the camera jitters unacceptably when the target is in motion, turn down this setting, or animate the target more smoothly.")]
/// [Range(0, 1)]
/// @brief Field Time, offset: 0x4, size: 0x4, def value: None
 float_t  Time;

/// [Tooltip("Controls the smoothness of the lookahead algorithm.  Larger values smooth out jittery predictions and also increase prediction lag")]
/// [Range(0, 30)]
/// @brief Field Smoothing, offset: 0x8, size: 0x4, def value: None
 float_t  Smoothing;

/// [Tooltip("If checked, movement along the Y axis will be ignored for lookahead calculations")]
/// @brief Field IgnoreY, offset: 0xc, size: 0x1, def value: None
 bool  IgnoreY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::LookaheadSettings, Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LookaheadSettings, Time) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LookaheadSettings, Smoothing) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LookaheadSettings, IgnoreY) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::LookaheadSettings) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
