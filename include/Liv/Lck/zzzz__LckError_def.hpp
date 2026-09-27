#pragma once
// IWYU pragma private; include "Liv/Lck/LckError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckError)
// Forward declare root types
namespace Liv::Lck {
struct LckError;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::LckError);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckError, "Liv.Lck", "LckError");
// Dependencies 
namespace Liv::Lck {
// Is value type: true
// CS Name: Liv.Lck.LckError
struct CORDL_TYPE LckError {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LckError_Unwrapped
enum struct __LckError_Unwrapped : int32_t {
__E_ServiceNotCreated = static_cast<int32_t>(0x1),
__E_ServiceDisposed = static_cast<int32_t>(0x2),
__E_InvalidDescriptor = static_cast<int32_t>(0x3),
__E_CameraIdNotFound = static_cast<int32_t>(0x4),
__E_MonitorIdNotFound = static_cast<int32_t>(0x5),
__E_MicrophonePermissionDenied = static_cast<int32_t>(0x6),
__E_CaptureAlreadyStarted = static_cast<int32_t>(0x7),
__E_NotCurrentlyRecording = static_cast<int32_t>(0x8),
__E_NotPaused = static_cast<int32_t>(0x9),
__E_RecordingError = static_cast<int32_t>(0xa),
__E_PhotoCaptureError = static_cast<int32_t>(0xb),
__E_CantEditSettingsWhileCapturing = static_cast<int32_t>(0xc),
__E_NotEnoughStorageSpace = static_cast<int32_t>(0xd),
__E_FailedToCopyRecordingToGallery = static_cast<int32_t>(0xe),
__E_FailedToCopyPhotoToGallery = static_cast<int32_t>(0xf),
__E_UnsupportedGraphicsApi = static_cast<int32_t>(0x10),
__E_UnsupportedPlatform = static_cast<int32_t>(0x11),
__E_MicrophoneError = static_cast<int32_t>(0x12),
__E_StreamerNotImplemented = static_cast<int32_t>(0x13),
__E_StreamingError = static_cast<int32_t>(0x14),
__E_EncodingError = static_cast<int32_t>(0x15),
__E_EchoError = static_cast<int32_t>(0x16),
__E_UnknownError = static_cast<int32_t>(0x17),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LckError_Unwrapped () const noexcept {
return static_cast<__LckError_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LckError() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckError(int32_t  value__) noexcept;

/// @brief Field CameraIdNotFound value: I32(4)
static ::Liv::Lck::LckError const CameraIdNotFound;

/// @brief Field CantEditSettingsWhileCapturing value: I32(12)
static ::Liv::Lck::LckError const CantEditSettingsWhileCapturing;

/// @brief Field CaptureAlreadyStarted value: I32(7)
static ::Liv::Lck::LckError const CaptureAlreadyStarted;

/// @brief Field EchoError value: I32(22)
static ::Liv::Lck::LckError const EchoError;

/// @brief Field EncodingError value: I32(21)
static ::Liv::Lck::LckError const EncodingError;

/// @brief Field FailedToCopyPhotoToGallery value: I32(15)
static ::Liv::Lck::LckError const FailedToCopyPhotoToGallery;

/// @brief Field FailedToCopyRecordingToGallery value: I32(14)
static ::Liv::Lck::LckError const FailedToCopyRecordingToGallery;

/// @brief Field InvalidDescriptor value: I32(3)
static ::Liv::Lck::LckError const InvalidDescriptor;

/// @brief Field MicrophoneError value: I32(18)
static ::Liv::Lck::LckError const MicrophoneError;

/// @brief Field MicrophonePermissionDenied value: I32(6)
static ::Liv::Lck::LckError const MicrophonePermissionDenied;

/// @brief Field MonitorIdNotFound value: I32(5)
static ::Liv::Lck::LckError const MonitorIdNotFound;

/// @brief Field NotCurrentlyRecording value: I32(8)
static ::Liv::Lck::LckError const NotCurrentlyRecording;

/// @brief Field NotEnoughStorageSpace value: I32(13)
static ::Liv::Lck::LckError const NotEnoughStorageSpace;

/// @brief Field NotPaused value: I32(9)
static ::Liv::Lck::LckError const NotPaused;

/// @brief Field PhotoCaptureError value: I32(11)
static ::Liv::Lck::LckError const PhotoCaptureError;

/// @brief Field RecordingError value: I32(10)
static ::Liv::Lck::LckError const RecordingError;

/// @brief Field ServiceDisposed value: I32(2)
static ::Liv::Lck::LckError const ServiceDisposed;

/// @brief Field ServiceNotCreated value: I32(1)
static ::Liv::Lck::LckError const ServiceNotCreated;

/// @brief Field StreamerNotImplemented value: I32(19)
static ::Liv::Lck::LckError const StreamerNotImplemented;

/// @brief Field StreamingError value: I32(20)
static ::Liv::Lck::LckError const StreamingError;

/// @brief Field UnknownError value: I32(23)
static ::Liv::Lck::LckError const UnknownError;

/// @brief Field UnsupportedGraphicsApi value: I32(16)
static ::Liv::Lck::LckError const UnsupportedGraphicsApi;

/// @brief Field UnsupportedPlatform value: I32(17)
static ::Liv::Lck::LckError const UnsupportedPlatform;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24788};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckError, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckError) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck
