#pragma once
// IWYU pragma private; include "Photon/Voice/IOS/AudioSessionMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSessionMode)
// Forward declare root types
namespace Photon::Voice::IOS {
struct AudioSessionMode;
}
// Write type traits
MARK_VAL_T(::Photon::Voice::IOS::AudioSessionMode);
DEFINE_IL2CPP_CLASS(::Photon::Voice::IOS::AudioSessionMode, "Photon.Voice.IOS", "AudioSessionMode");
// Dependencies 
namespace Photon::Voice::IOS {
// Is value type: true
// CS Name: Photon.Voice.IOS.AudioSessionMode
struct CORDL_TYPE AudioSessionMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioSessionMode_Unwrapped
enum struct __AudioSessionMode_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_VoiceChat = static_cast<int32_t>(0x1),
__E_VideoRecording = static_cast<int32_t>(0x3),
__E_Measurement = static_cast<int32_t>(0x4),
__E_MoviePlayback = static_cast<int32_t>(0x5),
__E_VideoChat = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioSessionMode_Unwrapped () const noexcept {
return static_cast<__AudioSessionMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioSessionMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AudioSessionMode(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::Photon::Voice::IOS::AudioSessionMode const Default;

/// @brief Field Measurement value: I32(4)
static ::Photon::Voice::IOS::AudioSessionMode const Measurement;

/// @brief Field MoviePlayback value: I32(5)
static ::Photon::Voice::IOS::AudioSessionMode const MoviePlayback;

/// @brief Field VideoChat value: I32(6)
static ::Photon::Voice::IOS::AudioSessionMode const VideoChat;

/// @brief Field VideoRecording value: I32(3)
static ::Photon::Voice::IOS::AudioSessionMode const VideoRecording;

/// @brief Field VoiceChat value: I32(1)
static ::Photon::Voice::IOS::AudioSessionMode const VoiceChat;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28521};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::IOS::AudioSessionMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::IOS::AudioSessionMode) == 0x4, "Size mismatch!");

} // namespace end def Photon::Voice::IOS
