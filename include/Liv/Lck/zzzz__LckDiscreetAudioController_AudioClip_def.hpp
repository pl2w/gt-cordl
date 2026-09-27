#pragma once
// IWYU pragma private; include "Liv/Lck/LckDiscreetAudioController_AudioClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckDiscreetAudioController_AudioClip)
// Forward declare root types
namespace GlobalNamespace {
struct LckDiscreetAudioController_AudioClip;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckDiscreetAudioController_AudioClip);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckDiscreetAudioController_AudioClip, "Liv.Lck", "LckDiscreetAudioController/AudioClip");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.LckDiscreetAudioController/AudioClip
struct CORDL_TYPE LckDiscreetAudioController_AudioClip {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LckDiscreetAudioController_AudioClip_Unwrapped
enum struct __LckDiscreetAudioController_AudioClip_Unwrapped : int32_t {
__E_RecordingStart = static_cast<int32_t>(0x0),
__E_RecordingSaved = static_cast<int32_t>(0x1),
__E_ClickDown = static_cast<int32_t>(0x2),
__E_ClickUp = static_cast<int32_t>(0x3),
__E_HoverSound = static_cast<int32_t>(0x4),
__E_CameraShutterSound = static_cast<int32_t>(0x5),
__E_ScreenshotBeepSound = static_cast<int32_t>(0x6),
__E_StreamingStarted = static_cast<int32_t>(0x7),
__E_StreamingStopped = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LckDiscreetAudioController_AudioClip_Unwrapped () const noexcept {
return static_cast<__LckDiscreetAudioController_AudioClip_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LckDiscreetAudioController_AudioClip() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckDiscreetAudioController_AudioClip(int32_t  value__) noexcept;

/// @brief Field CameraShutterSound value: I32(5)
static ::GlobalNamespace::LckDiscreetAudioController_AudioClip const CameraShutterSound;

/// @brief Field ClickDown value: I32(2)
static ::GlobalNamespace::LckDiscreetAudioController_AudioClip const ClickDown;

/// @brief Field ClickUp value: I32(3)
static ::GlobalNamespace::LckDiscreetAudioController_AudioClip const ClickUp;

/// @brief Field HoverSound value: I32(4)
static ::GlobalNamespace::LckDiscreetAudioController_AudioClip const HoverSound;

/// @brief Field RecordingSaved value: I32(1)
static ::GlobalNamespace::LckDiscreetAudioController_AudioClip const RecordingSaved;

/// @brief Field RecordingStart value: I32(0)
static ::GlobalNamespace::LckDiscreetAudioController_AudioClip const RecordingStart;

/// @brief Field ScreenshotBeepSound value: I32(6)
static ::GlobalNamespace::LckDiscreetAudioController_AudioClip const ScreenshotBeepSound;

/// @brief Field StreamingStarted value: I32(7)
static ::GlobalNamespace::LckDiscreetAudioController_AudioClip const StreamingStarted;

/// @brief Field StreamingStopped value: I32(8)
static ::GlobalNamespace::LckDiscreetAudioController_AudioClip const StreamingStopped;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24699};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckDiscreetAudioController_AudioClip, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckDiscreetAudioController_AudioClip) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
