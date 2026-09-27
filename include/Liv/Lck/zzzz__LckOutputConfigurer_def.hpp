#pragma once
// IWYU pragma private; include "Liv/Lck/LckOutputConfigurer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "Liv/Lck/zzzz__LckCaptureType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckOutputConfigurer)
namespace Liv::Lck {
struct CameraResolutionDescriptor;
}
namespace Liv::Lck {
struct CameraTrackDescriptor;
}
namespace Liv::Lck {
class ILckEventBus;
}
namespace Liv::Lck {
class ILckOutputConfigurer;
}
namespace Liv::Lck {
class ILckQualityConfig;
}
namespace Liv::Lck {
struct LckCameraOrientation;
}
namespace Liv::Lck {
struct LckCaptureType;
}
namespace Liv::Lck {
class LckOutputConfigurer___c;
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
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace Liv::Lck {
class LckOutputConfigurer;
}
namespace Liv::Lck {
class LckOutputConfigurer___c;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckOutputConfigurer*);
MARK_REF_T(::Liv::Lck::LckOutputConfigurer___c*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckOutputConfigurer*, "Liv.Lck", "LckOutputConfigurer");
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckOutputConfigurer___c*, "Liv.Lck", "LckOutputConfigurer/<>c");
// Dependencies Liv.Lck.CameraTrackDescriptor, Liv.Lck.LckCaptureType, System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckOutputConfigurer
class CORDL_TYPE LckOutputConfigurer : public ::System::Object {
public:
// Declarations
using __c = ::Liv::Lck::LckOutputConfigurer___c;

/// @brief Field _activeCaptureType, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__activeCaptureType, put=__cordl_internal_set__activeCaptureType)) ::Liv::Lck::LckCaptureType  _activeCaptureType;

/// @brief Field _eventBus, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventBus, put=__cordl_internal_set__eventBus)) ::Liv::Lck::ILckEventBus*  _eventBus;

/// @brief Field _recordingCameraTrackDescriptor, offset 0x18, size 0x14 
 __declspec(property(get=__cordl_internal_get__recordingCameraTrackDescriptor, put=__cordl_internal_set__recordingCameraTrackDescriptor)) ::Liv::Lck::CameraTrackDescriptor  _recordingCameraTrackDescriptor;

/// @brief Field _streamingCameraTrackDescriptor, offset 0x2c, size 0x14 
 __declspec(property(get=__cordl_internal_get__streamingCameraTrackDescriptor, put=__cordl_internal_set__streamingCameraTrackDescriptor)) ::Liv::Lck::CameraTrackDescriptor  _streamingCameraTrackDescriptor;

/// @brief Convert operator to "::Liv::Lck::ILckOutputConfigurer"
constexpr operator  ::Liv::Lck::ILckOutputConfigurer*() noexcept;

/// @brief Method ConfigureDefaultSettings, addr 0x9cef738, size 0x250, virtual false, abstract: false, final false
inline void ConfigureDefaultSettings(::Liv::Lck::ILckQualityConfig*  qualityConfig) ;

/// @brief Method ConfigureFromQualityConfig, addr 0x9cef988, size 0x10c, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* ConfigureFromQualityConfig(::Liv::Lck::QualityOption  qualityOption) ;

/// @brief Method CreateQualityConfigurationResult, addr 0x9cefb78, size 0xf4, virtual false, abstract: false, final false
static inline ::Liv::Lck::LckResult* CreateQualityConfigurationResult(::Liv::Lck::QualityOption  qualityOption, bool  isRecordingValid, bool  isStreamingValid) ;

/// @brief Method DetermineAudioSystemSampleRate, addr 0x9cf0358, size 0x8, virtual false, abstract: false, final false
static inline int32_t DetermineAudioSystemSampleRate() ;

/// @brief Method GetActiveCameraTrackDescriptor, addr 0x9cf0170, size 0xb0, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<::Liv::Lck::CameraTrackDescriptor>* GetActiveCameraTrackDescriptor() ;

/// @brief Method GetActiveCaptureType, addr 0x9cefc6c, size 0x48, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<::Liv::Lck::LckCaptureType>* GetActiveCaptureType() ;

/// @brief Method GetAudioSampleRate, addr 0x9cf0294, size 0xc4, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<uint32_t>* GetAudioSampleRate() ;

/// @brief Method GetCameraOrientation, addr 0x9cf04b4, size 0x10, virtual false, abstract: false, final false
static inline ::Liv::Lck::LckCameraOrientation GetCameraOrientation(::Liv::Lck::CameraResolutionDescriptor  resolution) ;

/// @brief Method GetCameraTrackDescriptor, addr 0x9ceff4c, size 0xb0, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<::Liv::Lck::CameraTrackDescriptor>* GetCameraTrackDescriptor(::Liv::Lck::LckCaptureType  captureType) ;

/// @brief Method GetNumberOfAudioChannels, addr 0x9cf0250, size 0x44, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<uint32_t>* GetNumberOfAudioChannels() ;

/// @brief Method GetResolution, addr 0x9cf0460, size 0x54, virtual false, abstract: false, final false
inline ::Liv::Lck::CameraResolutionDescriptor GetResolution(::Liv::Lck::LckCaptureType  captureType) ;

/// @brief Method IsValidDescriptor, addr 0x9cefa94, size 0x38, virtual false, abstract: false, final false
static inline bool IsValidDescriptor(::Liv::Lck::CameraTrackDescriptor  descriptor) ;

/// @brief Method NewUnknownCaptureTypeError, addr 0x9cefd68, size 0x44, virtual false, abstract: false, final false
static inline ::Liv::Lck::LckResult* NewUnknownCaptureTypeError() ;

/// @brief Method NewUnknownCaptureTypeError, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Liv::Lck::LckResult_1<T>* NewUnknownCaptureTypeError() ;

/// @brief [Preserve]
static inline ::Liv::Lck::LckOutputConfigurer* New_ctor(::Liv::Lck::ILckQualityConfig*  qualityConfig, ::Liv::Lck::ILckEventBus*  eventBus) ;

/// @brief Method OnActiveCameraTrackDescriptorChanged, addr 0x9cefcd4, size 0x60, virtual false, abstract: false, final false
inline void OnActiveCameraTrackDescriptorChanged() ;

/// @brief Method SetActiveAudioBitrate, addr 0x9cefed4, size 0x28, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetActiveAudioBitrate(uint32_t  bitrate) ;

/// @brief Method SetActiveCameraTrackDescriptor, addr 0x9cf0220, size 0x30, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetActiveCameraTrackDescriptor(::Liv::Lck::CameraTrackDescriptor  trackDescriptor) ;

/// @brief Method SetActiveCaptureType, addr 0x9cefcb4, size 0x20, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetActiveCaptureType(::Liv::Lck::LckCaptureType  captureType) ;

/// @brief Method SetActiveResolution, addr 0x9cefefc, size 0x10, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetActiveResolution(::Liv::Lck::CameraResolutionDescriptor  resolution) ;

/// @brief Method SetActiveVideoBitrate, addr 0x9cefeac, size 0x28, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetActiveVideoBitrate(uint32_t  bitrate) ;

/// @brief Method SetActiveVideoFramerate, addr 0x9cefd34, size 0x34, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetActiveVideoFramerate(uint32_t  framerate) ;

/// @brief Method SetCameraOrientation, addr 0x9cf0100, size 0x70, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult* SetCameraOrientation(::Liv::Lck::LckCaptureType  captureType, ::Liv::Lck::LckCameraOrientation  orientation) ;

/// @brief Method SetCameraOrientation, addr 0x9cefffc, size 0x104, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetCameraOrientation(::Liv::Lck::LckCameraOrientation  orientation) ;

/// @brief Method SetCameraTrackDescriptor, addr 0x9cefacc, size 0xac, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetCameraTrackDescriptor(::Liv::Lck::LckCaptureType  captureType, ::Liv::Lck::CameraTrackDescriptor  trackDescriptor) ;

/// @brief Method SetResolution, addr 0x9ceff0c, size 0x40, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult* SetResolution(::Liv::Lck::LckCaptureType  captureType, ::Liv::Lck::CameraResolutionDescriptor  resolution) ;

/// @brief Method TriggerCameraFramerateChangedEvent, addr 0x9cefdac, size 0x100, virtual false, abstract: false, final false
inline void TriggerCameraFramerateChangedEvent(uint32_t  framerate) ;

/// @brief Method TriggerCameraResolutionChangedEvent, addr 0x9cf0360, size 0x100, virtual false, abstract: false, final false
inline void TriggerCameraResolutionChangedEvent(::Liv::Lck::CameraResolutionDescriptor  resolution) ;

constexpr ::Liv::Lck::LckCaptureType const& __cordl_internal_get__activeCaptureType() const;

constexpr ::Liv::Lck::LckCaptureType& __cordl_internal_get__activeCaptureType() ;

constexpr ::Liv::Lck::ILckEventBus* const& __cordl_internal_get__eventBus() const;

constexpr ::Liv::Lck::ILckEventBus*& __cordl_internal_get__eventBus() ;

constexpr ::Liv::Lck::CameraTrackDescriptor const& __cordl_internal_get__recordingCameraTrackDescriptor() const;

constexpr ::Liv::Lck::CameraTrackDescriptor& __cordl_internal_get__recordingCameraTrackDescriptor() ;

constexpr ::Liv::Lck::CameraTrackDescriptor const& __cordl_internal_get__streamingCameraTrackDescriptor() const;

constexpr ::Liv::Lck::CameraTrackDescriptor& __cordl_internal_get__streamingCameraTrackDescriptor() ;

constexpr void __cordl_internal_set__activeCaptureType(::Liv::Lck::LckCaptureType  value) ;

constexpr void __cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value) ;

constexpr void __cordl_internal_set__recordingCameraTrackDescriptor(::Liv::Lck::CameraTrackDescriptor  value) ;

constexpr void __cordl_internal_set__streamingCameraTrackDescriptor(::Liv::Lck::CameraTrackDescriptor  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9cef6f8, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::ILckQualityConfig*  qualityConfig, ::Liv::Lck::ILckEventBus*  eventBus) ;

/// @brief Convert to "::Liv::Lck::ILckOutputConfigurer"
constexpr ::Liv::Lck::ILckOutputConfigurer* i___Liv__Lck__ILckOutputConfigurer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckOutputConfigurer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckOutputConfigurer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckOutputConfigurer(LckOutputConfigurer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckOutputConfigurer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckOutputConfigurer(LckOutputConfigurer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24776};

/// @brief Field _eventBus, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::ILckEventBus*  ____eventBus;

/// @brief Field _recordingCameraTrackDescriptor, offset: 0x18, size: 0x14, def value: None
 ::Liv::Lck::CameraTrackDescriptor  ____recordingCameraTrackDescriptor;

/// @brief Field _streamingCameraTrackDescriptor, offset: 0x2c, size: 0x14, def value: None
 ::Liv::Lck::CameraTrackDescriptor  ____streamingCameraTrackDescriptor;

/// @brief Field _activeCaptureType, offset: 0x40, size: 0x4, def value: None
 ::Liv::Lck::LckCaptureType  ____activeCaptureType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckOutputConfigurer, ____eventBus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckOutputConfigurer, ____recordingCameraTrackDescriptor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckOutputConfigurer, ____streamingCameraTrackDescriptor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckOutputConfigurer, ____activeCaptureType) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckOutputConfigurer) == 0x48, "Size mismatch!");

} // namespace end def Liv::Lck
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckOutputConfigurer/<>c
class CORDL_TYPE LckOutputConfigurer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Liv::Lck::LckOutputConfigurer___c*  __9;

/// @brief Field <>9__19_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_0, put=setStaticF___9__19_0)) ::System::Predicate_1<::Liv::Lck::QualityOption>*  __9__19_0;

static inline ::Liv::Lck::LckOutputConfigurer___c* New_ctor() ;

/// @brief Method <ConfigureDefaultSettings>b__19_0, addr 0x9cf0534, size 0xc, virtual false, abstract: false, final false
inline bool _ConfigureDefaultSettings_b__19_0(::Liv::Lck::QualityOption  option) ;

/// @brief Method .ctor, addr 0x9cf052c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::LckOutputConfigurer___c* getStaticF___9() ;

static inline ::System::Predicate_1<::Liv::Lck::QualityOption>* getStaticF___9__19_0() ;

static inline void setStaticF___9(::Liv::Lck::LckOutputConfigurer___c*  value) ;

static inline void setStaticF___9__19_0(::System::Predicate_1<::Liv::Lck::QualityOption>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckOutputConfigurer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckOutputConfigurer___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckOutputConfigurer___c(LckOutputConfigurer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckOutputConfigurer___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckOutputConfigurer___c(LckOutputConfigurer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24775};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::LckOutputConfigurer___c) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck
