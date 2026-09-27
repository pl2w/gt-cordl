#pragma once
// IWYU pragma private; include "Liv/Lck/ILckOutputConfigurer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ILckOutputConfigurer)
namespace Liv::Lck {
struct CameraResolutionDescriptor;
}
namespace Liv::Lck {
struct CameraTrackDescriptor;
}
namespace Liv::Lck {
struct LckCameraOrientation;
}
namespace Liv::Lck {
struct LckCaptureType;
}
namespace Liv::Lck {
template<typename T>
class LckResult_1;
}
namespace Liv::Lck {
class LckResult;
}
namespace Liv::Lck {
struct QualityOption;
}
// Forward declare root types
namespace Liv::Lck {
class ILckOutputConfigurer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckOutputConfigurer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckOutputConfigurer*, "Liv.Lck", "ILckOutputConfigurer");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckOutputConfigurer
class CORDL_TYPE ILckOutputConfigurer {
public:
// Declarations
/// @brief Method ConfigureFromQualityConfig, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* ConfigureFromQualityConfig(::Liv::Lck::QualityOption  qualityOption) ;

/// @brief Method GetActiveCameraTrackDescriptor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<::Liv::Lck::CameraTrackDescriptor>* GetActiveCameraTrackDescriptor() ;

/// @brief Method GetActiveCaptureType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<::Liv::Lck::LckCaptureType>* GetActiveCaptureType() ;

/// @brief Method GetAudioSampleRate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<uint32_t>* GetAudioSampleRate() ;

/// @brief Method GetCameraTrackDescriptor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<::Liv::Lck::CameraTrackDescriptor>* GetCameraTrackDescriptor(::Liv::Lck::LckCaptureType  captureType) ;

/// @brief Method GetNumberOfAudioChannels, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<uint32_t>* GetNumberOfAudioChannels() ;

/// @brief Method SetActiveAudioBitrate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetActiveAudioBitrate(uint32_t  bitrate) ;

/// @brief Method SetActiveCameraTrackDescriptor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetActiveCameraTrackDescriptor(::Liv::Lck::CameraTrackDescriptor  trackDescriptor) ;

/// @brief Method SetActiveCaptureType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetActiveCaptureType(::Liv::Lck::LckCaptureType  captureType) ;

/// @brief Method SetActiveResolution, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetActiveResolution(::Liv::Lck::CameraResolutionDescriptor  resolution) ;

/// @brief Method SetActiveVideoBitrate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetActiveVideoBitrate(uint32_t  bitrate) ;

/// @brief Method SetActiveVideoFramerate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetActiveVideoFramerate(uint32_t  framerate) ;

/// @brief Method SetCameraOrientation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetCameraOrientation(::Liv::Lck::LckCameraOrientation  orientation) ;

/// @brief Method SetCameraTrackDescriptor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetCameraTrackDescriptor(::Liv::Lck::LckCaptureType  captureType, ::Liv::Lck::CameraTrackDescriptor  trackDescriptor) ;

// Ctor Parameters [CppParam { name: "", ty: "ILckOutputConfigurer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckOutputConfigurer(ILckOutputConfigurer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24758};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
