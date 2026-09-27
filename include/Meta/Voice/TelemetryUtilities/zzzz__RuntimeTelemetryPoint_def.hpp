#pragma once
// IWYU pragma private; include "Meta/Voice/TelemetryUtilities/RuntimeTelemetryPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeTelemetryPoint)
// Forward declare root types
namespace Meta::Voice::TelemetryUtilities {
struct RuntimeTelemetryPoint;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint);
DEFINE_IL2CPP_CLASS(::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint, "Meta.Voice.TelemetryUtilities", "RuntimeTelemetryPoint");
// Dependencies 
namespace Meta::Voice::TelemetryUtilities {
// Is value type: true
// CS Name: Meta.Voice.TelemetryUtilities.RuntimeTelemetryPoint
struct CORDL_TYPE RuntimeTelemetryPoint {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RuntimeTelemetryPoint_Unwrapped
enum struct __RuntimeTelemetryPoint_Unwrapped : int32_t {
__E_MicOn = static_cast<int32_t>(0x0),
__E_ListeningStarted = static_cast<int32_t>(0x1),
__E_AudioBlockSent = static_cast<int32_t>(0x2),
__E_PartialResponseReceived = static_cast<int32_t>(0x3),
__E_FullResponseReceived = static_cast<int32_t>(0x4),
__E_FirstPartialTranscriptionReceivedByClient = static_cast<int32_t>(0x5),
__E_FullTranscriptionReceivedByClient = static_cast<int32_t>(0x6),
__E_FullUserTranscriptionSentToServer = static_cast<int32_t>(0x7),
__E_FirstPartialTranscriptionReceivedFromClient = static_cast<int32_t>(0x8),
__E_FullUserTranscriptionReceivedFromClient = static_cast<int32_t>(0x9),
__E_FullUserTranscriptionSentFromServer = static_cast<int32_t>(0xa),
__E_FirstPartialTextResponseSentToServer = static_cast<int32_t>(0xb),
__E_FullTextResponseSentToServer = static_cast<int32_t>(0xc),
__E_PartialTTSSent = static_cast<int32_t>(0xd),
__E_FullTTSSent = static_cast<int32_t>(0xe),
__E_PartialTTSAudioReceived = static_cast<int32_t>(0xf),
__E_FinalTTSAudioReceived = static_cast<int32_t>(0x10),
__E_FirstPartialAudioDecode = static_cast<int32_t>(0x11),
__E_FinalAudioDecode = static_cast<int32_t>(0x12),
__E_FirstPartialAudioSentToClient = static_cast<int32_t>(0x13),
__E_FinalAudioSentToClient = static_cast<int32_t>(0x14),
__E_FirstPartialAudioFromServer = static_cast<int32_t>(0x15),
__E_FinalAudioFromServer = static_cast<int32_t>(0x16),
__E_PlaybackStarted = static_cast<int32_t>(0x17),
__E_PlaybackStopped = static_cast<int32_t>(0x18),
__E_TtsLoadBegin = static_cast<int32_t>(0x19),
__E_TtsLoadComplete = static_cast<int32_t>(0x1a),
__E_ListeningStopped = static_cast<int32_t>(0x1b),
__E_FinalAudioSamplesEmpty = static_cast<int32_t>(0x1c),
__E_FinalAudioEventsEmpty = static_cast<int32_t>(0x1d),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RuntimeTelemetryPoint_Unwrapped () const noexcept {
return static_cast<__RuntimeTelemetryPoint_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RuntimeTelemetryPoint() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RuntimeTelemetryPoint(int32_t  value__) noexcept;

/// @brief Field AudioBlockSent value: I32(2)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const AudioBlockSent;

/// @brief Field FinalAudioDecode value: I32(18)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FinalAudioDecode;

/// @brief Field FinalAudioEventsEmpty value: I32(29)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FinalAudioEventsEmpty;

/// @brief Field FinalAudioFromServer value: I32(22)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FinalAudioFromServer;

/// @brief Field FinalAudioSamplesEmpty value: I32(28)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FinalAudioSamplesEmpty;

/// @brief Field FinalAudioSentToClient value: I32(20)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FinalAudioSentToClient;

/// @brief Field FinalTTSAudioReceived value: I32(16)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FinalTTSAudioReceived;

/// @brief Field FirstPartialAudioDecode value: I32(17)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FirstPartialAudioDecode;

/// @brief Field FirstPartialAudioFromServer value: I32(21)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FirstPartialAudioFromServer;

/// @brief Field FirstPartialAudioSentToClient value: I32(19)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FirstPartialAudioSentToClient;

/// @brief Field FirstPartialTextResponseSentToServer value: I32(11)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FirstPartialTextResponseSentToServer;

/// @brief Field FirstPartialTranscriptionReceivedByClient value: I32(5)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FirstPartialTranscriptionReceivedByClient;

/// @brief Field FirstPartialTranscriptionReceivedFromClient value: I32(8)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FirstPartialTranscriptionReceivedFromClient;

/// @brief Field FullResponseReceived value: I32(4)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FullResponseReceived;

/// @brief Field FullTTSSent value: I32(14)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FullTTSSent;

/// @brief Field FullTextResponseSentToServer value: I32(12)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FullTextResponseSentToServer;

/// @brief Field FullTranscriptionReceivedByClient value: I32(6)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FullTranscriptionReceivedByClient;

/// @brief Field FullUserTranscriptionReceivedFromClient value: I32(9)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FullUserTranscriptionReceivedFromClient;

/// @brief Field FullUserTranscriptionSentFromServer value: I32(10)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FullUserTranscriptionSentFromServer;

/// @brief Field FullUserTranscriptionSentToServer value: I32(7)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const FullUserTranscriptionSentToServer;

/// @brief Field ListeningStarted value: I32(1)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const ListeningStarted;

/// @brief Field ListeningStopped value: I32(27)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const ListeningStopped;

/// @brief Field MicOn value: I32(0)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const MicOn;

/// @brief Field PartialResponseReceived value: I32(3)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const PartialResponseReceived;

/// @brief Field PartialTTSAudioReceived value: I32(15)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const PartialTTSAudioReceived;

/// @brief Field PartialTTSSent value: I32(13)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const PartialTTSSent;

/// @brief Field PlaybackStarted value: I32(23)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const PlaybackStarted;

/// @brief Field PlaybackStopped value: I32(24)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const PlaybackStopped;

/// @brief Field TtsLoadBegin value: I32(25)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const TtsLoadBegin;

/// @brief Field TtsLoadComplete value: I32(26)
static ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint const TtsLoadComplete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33057};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint) == 0x4, "Size mismatch!");

} // namespace end def Meta::Voice::TelemetryUtilities
