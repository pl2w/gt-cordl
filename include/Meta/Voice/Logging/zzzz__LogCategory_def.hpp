#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/LogCategory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogCategory)
// Forward declare root types
namespace Meta::Voice::Logging {
struct LogCategory;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::Logging::LogCategory);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::LogCategory, "Meta.Voice.Logging", "LogCategory");
// Dependencies 
namespace Meta::Voice::Logging {
// Is value type: true
// CS Name: Meta.Voice.Logging.LogCategory
struct CORDL_TYPE LogCategory {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LogCategory_Unwrapped
enum struct __LogCategory_Unwrapped : int32_t {
__E_Global = static_cast<int32_t>(0x0),
__E_Conduit = static_cast<int32_t>(0x1),
__E_ManifestGenerator = static_cast<int32_t>(0x2),
__E_AssemblyMiner = static_cast<int32_t>(0x3),
__E_Logging = static_cast<int32_t>(0x4),
__E_ErrorMitigator = static_cast<int32_t>(0x5),
__E_ContextSystem = static_cast<int32_t>(0x6),
__E_Requests = static_cast<int32_t>(0x7),
__E_TextToSpeech = static_cast<int32_t>(0x8),
__E_Audio = static_cast<int32_t>(0x9),
__E_ActivationBlocker = static_cast<int32_t>(0xa),
__E_Listener = static_cast<int32_t>(0xb),
__E_Speaker = static_cast<int32_t>(0xc),
__E_ActivationSystem = static_cast<int32_t>(0xd),
__E_SpeechService = static_cast<int32_t>(0xe),
__E_Network = static_cast<int32_t>(0xf),
__E_Input = static_cast<int32_t>(0x10),
__E_Output = static_cast<int32_t>(0x11),
__E_Encoding = static_cast<int32_t>(0x12),
__E_WebSockets = static_cast<int32_t>(0x13),
__E_Editor = static_cast<int32_t>(0x14),
__E_Composer = static_cast<int32_t>(0x15),
__E_Telemetry = static_cast<int32_t>(0x16),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LogCategory_Unwrapped () const noexcept {
return static_cast<__LogCategory_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LogCategory() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LogCategory(int32_t  value__) noexcept;

/// @brief Field ActivationBlocker value: I32(10)
static ::Meta::Voice::Logging::LogCategory const ActivationBlocker;

/// @brief Field ActivationSystem value: I32(13)
static ::Meta::Voice::Logging::LogCategory const ActivationSystem;

/// @brief Field AssemblyMiner value: I32(3)
static ::Meta::Voice::Logging::LogCategory const AssemblyMiner;

/// @brief Field Audio value: I32(9)
static ::Meta::Voice::Logging::LogCategory const Audio;

/// @brief Field Composer value: I32(21)
static ::Meta::Voice::Logging::LogCategory const Composer;

/// @brief Field Conduit value: I32(1)
static ::Meta::Voice::Logging::LogCategory const Conduit;

/// @brief Field ContextSystem value: I32(6)
static ::Meta::Voice::Logging::LogCategory const ContextSystem;

/// @brief Field Editor value: I32(20)
static ::Meta::Voice::Logging::LogCategory const Editor;

/// @brief Field Encoding value: I32(18)
static ::Meta::Voice::Logging::LogCategory const Encoding;

/// @brief Field ErrorMitigator value: I32(5)
static ::Meta::Voice::Logging::LogCategory const ErrorMitigator;

/// @brief Field Global value: I32(0)
static ::Meta::Voice::Logging::LogCategory const Global;

/// @brief Field Input value: I32(16)
static ::Meta::Voice::Logging::LogCategory const Input;

/// @brief Field Listener value: I32(11)
static ::Meta::Voice::Logging::LogCategory const Listener;

/// @brief Field Logging value: I32(4)
static ::Meta::Voice::Logging::LogCategory const Logging;

/// @brief Field ManifestGenerator value: I32(2)
static ::Meta::Voice::Logging::LogCategory const ManifestGenerator;

/// @brief Field Network value: I32(15)
static ::Meta::Voice::Logging::LogCategory const Network;

/// @brief Field Output value: I32(17)
static ::Meta::Voice::Logging::LogCategory const Output;

/// @brief Field Requests value: I32(7)
static ::Meta::Voice::Logging::LogCategory const Requests;

/// @brief Field Speaker value: I32(12)
static ::Meta::Voice::Logging::LogCategory const Speaker;

/// @brief Field SpeechService value: I32(14)
static ::Meta::Voice::Logging::LogCategory const SpeechService;

/// @brief Field Telemetry value: I32(22)
static ::Meta::Voice::Logging::LogCategory const Telemetry;

/// @brief Field TextToSpeech value: I32(8)
static ::Meta::Voice::Logging::LogCategory const TextToSpeech;

/// @brief Field WebSockets value: I32(19)
static ::Meta::Voice::Logging::LogCategory const WebSockets;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30954};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::LogCategory, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::LogCategory) == 0x4, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
