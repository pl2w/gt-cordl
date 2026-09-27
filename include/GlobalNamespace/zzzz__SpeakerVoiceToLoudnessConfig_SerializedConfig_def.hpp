#pragma once
// IWYU pragma private; include "GlobalNamespace/SpeakerVoiceToLoudnessConfig_SerializedConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SpeakerVoiceToLoudnessConfig_SerializedConfig)
// Forward declare root types
namespace GlobalNamespace {
struct SpeakerVoiceToLoudnessConfig_SerializedConfig;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SpeakerVoiceToLoudnessConfig_SerializedConfig);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpeakerVoiceToLoudnessConfig_SerializedConfig, "", "SpeakerVoiceToLoudnessConfig/SerializedConfig");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SpeakerVoiceToLoudnessConfig/SerializedConfig
struct CORDL_TYPE SpeakerVoiceToLoudnessConfig_SerializedConfig {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SpeakerVoiceToLoudnessConfig_SerializedConfig() ;

// Ctor Parameters [CppParam { name: "EnableLoudnessLimit", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "LoudnessLimitThreshold", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr SpeakerVoiceToLoudnessConfig_SerializedConfig(bool  EnableLoudnessLimit, float_t  LoudnessLimitThreshold) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2548};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field EnableLoudnessLimit, offset: 0x0, size: 0x1, def value: None
 bool  EnableLoudnessLimit;

/// @brief Field LoudnessLimitThreshold, offset: 0x4, size: 0x4, def value: None
 float_t  LoudnessLimitThreshold;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpeakerVoiceToLoudnessConfig_SerializedConfig, EnableLoudnessLimit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeakerVoiceToLoudnessConfig_SerializedConfig, LoudnessLimitThreshold) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpeakerVoiceToLoudnessConfig_SerializedConfig) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
