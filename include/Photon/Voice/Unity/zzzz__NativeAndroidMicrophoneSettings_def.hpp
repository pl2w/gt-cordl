#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/NativeAndroidMicrophoneSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(NativeAndroidMicrophoneSettings)
// Forward declare root types
namespace Photon::Voice::Unity {
struct NativeAndroidMicrophoneSettings;
}
// Write type traits
MARK_VAL_T(::Photon::Voice::Unity::NativeAndroidMicrophoneSettings);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::NativeAndroidMicrophoneSettings, "Photon.Voice.Unity", "NativeAndroidMicrophoneSettings");
// Dependencies 
namespace Photon::Voice::Unity {
// Is value type: true
// CS Name: Photon.Voice.Unity.NativeAndroidMicrophoneSettings
struct CORDL_TYPE NativeAndroidMicrophoneSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NativeAndroidMicrophoneSettings() ;

// Ctor Parameters [CppParam { name: "AcousticEchoCancellation", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AutomaticGainControl", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "NoiseSuppression", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr NativeAndroidMicrophoneSettings(bool  AcousticEchoCancellation, bool  AutomaticGainControl, bool  NoiseSuppression) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28877};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3};

/// @brief Field AcousticEchoCancellation, offset: 0x0, size: 0x1, def value: None
 bool  AcousticEchoCancellation;

/// @brief Field AutomaticGainControl, offset: 0x1, size: 0x1, def value: None
 bool  AutomaticGainControl;

/// @brief Field NoiseSuppression, offset: 0x2, size: 0x1, def value: None
 bool  NoiseSuppression;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::NativeAndroidMicrophoneSettings, AcousticEchoCancellation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::NativeAndroidMicrophoneSettings, AutomaticGainControl) == 0x1, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::NativeAndroidMicrophoneSettings, NoiseSuppression) == 0x2, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::NativeAndroidMicrophoneSettings) == 0x3, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
