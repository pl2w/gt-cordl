#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXAudioSpectrumBinder_AudioSourceMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXAudioSpectrumBinder_AudioSourceMode)
// Forward declare root types
namespace GlobalNamespace {
struct VFXAudioSpectrumBinder_AudioSourceMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VFXAudioSpectrumBinder_AudioSourceMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VFXAudioSpectrumBinder_AudioSourceMode, "UnityEngine.VFX.Utility", "VFXAudioSpectrumBinder/AudioSourceMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.VFX.Utility.VFXAudioSpectrumBinder/AudioSourceMode
struct CORDL_TYPE VFXAudioSpectrumBinder_AudioSourceMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VFXAudioSpectrumBinder_AudioSourceMode_Unwrapped
enum struct __VFXAudioSpectrumBinder_AudioSourceMode_Unwrapped : int32_t {
__E_AudioSource = static_cast<int32_t>(0x0),
__E_AudioListener = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VFXAudioSpectrumBinder_AudioSourceMode_Unwrapped () const noexcept {
return static_cast<__VFXAudioSpectrumBinder_AudioSourceMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VFXAudioSpectrumBinder_AudioSourceMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VFXAudioSpectrumBinder_AudioSourceMode(int32_t  value__) noexcept;

/// @brief Field AudioListener value: I32(1)
static ::GlobalNamespace::VFXAudioSpectrumBinder_AudioSourceMode const AudioListener;

/// @brief Field AudioSource value: I32(0)
static ::GlobalNamespace::VFXAudioSpectrumBinder_AudioSourceMode const AudioSource;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30057};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VFXAudioSpectrumBinder_AudioSourceMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VFXAudioSpectrumBinder_AudioSourceMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
