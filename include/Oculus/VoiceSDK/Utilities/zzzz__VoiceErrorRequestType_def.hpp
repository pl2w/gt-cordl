#pragma once
// IWYU pragma private; include "Oculus/VoiceSDK/Utilities/VoiceErrorRequestType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceErrorRequestType)
// Forward declare root types
namespace Oculus::VoiceSDK::Utilities {
struct VoiceErrorRequestType;
}
// Write type traits
MARK_VAL_T(::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType);
DEFINE_IL2CPP_CLASS(::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType, "Oculus.VoiceSDK.Utilities", "VoiceErrorRequestType");
// Dependencies 
namespace Oculus::VoiceSDK::Utilities {
// Is value type: true
// CS Name: Oculus.VoiceSDK.Utilities.VoiceErrorRequestType
struct CORDL_TYPE VoiceErrorRequestType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VoiceErrorRequestType_Unwrapped
enum struct __VoiceErrorRequestType_Unwrapped : int32_t {
__E_AudioInputAnalysisRequest = static_cast<int32_t>(0x0),
__E_TextInputAnalysisRequest = static_cast<int32_t>(0x1),
__E_TextToSpeechRequest = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VoiceErrorRequestType_Unwrapped () const noexcept {
return static_cast<__VoiceErrorRequestType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VoiceErrorRequestType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VoiceErrorRequestType(int32_t  value__) noexcept;

/// @brief Field AudioInputAnalysisRequest value: I32(0)
static ::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType const AudioInputAnalysisRequest;

/// @brief Field TextInputAnalysisRequest value: I32(1)
static ::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType const TextInputAnalysisRequest;

/// @brief Field TextToSpeechRequest value: I32(2)
static ::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType const TextToSpeechRequest;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31686};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType) == 0x4, "Size mismatch!");

} // namespace end def Oculus::VoiceSDK::Utilities
