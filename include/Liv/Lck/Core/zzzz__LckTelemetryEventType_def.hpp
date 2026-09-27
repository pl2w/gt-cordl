#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckTelemetryEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckTelemetryEventType)
// Forward declare root types
namespace Liv::Lck::Core {
struct LckTelemetryEventType;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Core::LckTelemetryEventType);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::LckTelemetryEventType, "Liv.Lck.Core", "LckTelemetryEventType");
// Dependencies 
namespace Liv::Lck::Core {
// Is value type: true
// CS Name: Liv.Lck.Core.LckTelemetryEventType
struct CORDL_TYPE LckTelemetryEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __LckTelemetryEventType_Unwrapped
enum struct __LckTelemetryEventType_Unwrapped : uint32_t {
__E_GameInitialized = static_cast<uint32_t>(0x0u),
__E_RecordingStarted = static_cast<uint32_t>(0x1u),
__E_StreamingStarted = static_cast<uint32_t>(0x2u),
__E_ServiceCreated = static_cast<uint32_t>(0x3u),
__E_ServiceDisposed = static_cast<uint32_t>(0x4u),
__E_CameraEnabled = static_cast<uint32_t>(0x5u),
__E_CameraDisabled = static_cast<uint32_t>(0x6u),
__E_RecordingStopped = static_cast<uint32_t>(0x7u),
__E_StreamingStopped = static_cast<uint32_t>(0x8u),
__E_StreamingError = static_cast<uint32_t>(0x9u),
__E_PhotoCaptured = static_cast<uint32_t>(0xau),
__E_RecorderError = static_cast<uint32_t>(0xbu),
__E_PhotoCaptureError = static_cast<uint32_t>(0xcu),
__E_SdkError = static_cast<uint32_t>(0xdu),
__E_Performance = static_cast<uint32_t>(0xeu),
__E_EchoEnabled = static_cast<uint32_t>(0xfu),
__E_EchoSaved = static_cast<uint32_t>(0x10u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LckTelemetryEventType_Unwrapped () const noexcept {
return static_cast<__LckTelemetryEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LckTelemetryEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckTelemetryEventType(uint32_t  value__) noexcept;

/// @brief Field CameraDisabled value: U32(6)
static ::Liv::Lck::Core::LckTelemetryEventType const CameraDisabled;

/// @brief Field CameraEnabled value: U32(5)
static ::Liv::Lck::Core::LckTelemetryEventType const CameraEnabled;

/// @brief Field EchoEnabled value: U32(15)
static ::Liv::Lck::Core::LckTelemetryEventType const EchoEnabled;

/// @brief Field EchoSaved value: U32(16)
static ::Liv::Lck::Core::LckTelemetryEventType const EchoSaved;

/// @brief Field GameInitialized value: U32(0)
static ::Liv::Lck::Core::LckTelemetryEventType const GameInitialized;

/// @brief Field Performance value: U32(14)
static ::Liv::Lck::Core::LckTelemetryEventType const Performance;

/// @brief Field PhotoCaptureError value: U32(12)
static ::Liv::Lck::Core::LckTelemetryEventType const PhotoCaptureError;

/// @brief Field PhotoCaptured value: U32(10)
static ::Liv::Lck::Core::LckTelemetryEventType const PhotoCaptured;

/// @brief Field RecorderError value: U32(11)
static ::Liv::Lck::Core::LckTelemetryEventType const RecorderError;

/// @brief Field RecordingStarted value: U32(1)
static ::Liv::Lck::Core::LckTelemetryEventType const RecordingStarted;

/// @brief Field RecordingStopped value: U32(7)
static ::Liv::Lck::Core::LckTelemetryEventType const RecordingStopped;

/// @brief Field SdkError value: U32(13)
static ::Liv::Lck::Core::LckTelemetryEventType const SdkError;

/// @brief Field ServiceCreated value: U32(3)
static ::Liv::Lck::Core::LckTelemetryEventType const ServiceCreated;

/// @brief Field ServiceDisposed value: U32(4)
static ::Liv::Lck::Core::LckTelemetryEventType const ServiceDisposed;

/// @brief Field StreamingError value: U32(9)
static ::Liv::Lck::Core::LckTelemetryEventType const StreamingError;

/// @brief Field StreamingStarted value: U32(2)
static ::Liv::Lck::Core::LckTelemetryEventType const StreamingStarted;

/// @brief Field StreamingStopped value: U32(8)
static ::Liv::Lck::Core::LckTelemetryEventType const StreamingStopped;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31932};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::LckTelemetryEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::LckTelemetryEventType) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck::Core
