#pragma once
// IWYU pragma private; include "Liv/Lck/LckVideoMixer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckVideoMixer)
namespace GlobalNamespace {
class ILckVideoTextureProvider;
}
namespace GlobalNamespace {
struct LckEvents_CameraResolutionChangedEvent;
}
namespace Liv::Lck::Telemetry {
class ILckTelemetryClient;
}
namespace Liv::Lck {
struct CameraResolutionDescriptor;
}
namespace Liv::Lck {
class ILckActiveCameraConfigurer;
}
namespace Liv::Lck {
class ILckCamera;
}
namespace Liv::Lck {
class ILckEventBus;
}
namespace Liv::Lck {
class ILckOutputConfigurer;
}
namespace Liv::Lck {
class ILckVideoMixer;
}
namespace Liv::Lck {
template<typename T>
class LckResult_1;
}
namespace Liv::Lck {
class LckResult;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace Liv::Lck {
class LckVideoMixer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckVideoMixer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckVideoMixer*, "Liv.Lck", "LckVideoMixer");
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckVideoMixer
class CORDL_TYPE LckVideoMixer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CameraTrackTexture, put=set_CameraTrackTexture)) ::UnityW<::UnityEngine::RenderTexture>  CameraTrackTexture;

/// @brief Field <CameraTrackTexture>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__CameraTrackTexture_k__BackingField, put=__cordl_internal_set__CameraTrackTexture_k__BackingField)) ::UnityW<::UnityEngine::RenderTexture>  _CameraTrackTexture_k__BackingField;

/// @brief Field _activeCamera, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeCamera, put=__cordl_internal_set__activeCamera)) ::Liv::Lck::ILckCamera*  _activeCamera;

/// @brief Field _eventBus, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventBus, put=__cordl_internal_set__eventBus)) ::Liv::Lck::ILckEventBus*  _eventBus;

/// @brief Field _hasLoggedResolutionError, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasLoggedResolutionError, put=__cordl_internal_set__hasLoggedResolutionError)) bool  _hasLoggedResolutionError;

/// @brief Field _telemetryClient, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__telemetryClient, put=__cordl_internal_set__telemetryClient)) ::Liv::Lck::Telemetry::ILckTelemetryClient*  _telemetryClient;

/// @brief Convert operator to "::GlobalNamespace::ILckVideoTextureProvider"
constexpr operator  ::GlobalNamespace::ILckVideoTextureProvider*() noexcept;

/// @brief Convert operator to "::Liv::Lck::ILckActiveCameraConfigurer"
constexpr operator  ::Liv::Lck::ILckActiveCameraConfigurer*() noexcept;

/// @brief Convert operator to "::Liv::Lck::ILckVideoMixer"
constexpr operator  ::Liv::Lck::ILckVideoMixer*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ActivateCameraById, addr 0x9cea654, size 0x210, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* ActivateCameraById(::StringW  cameraId, ::StringW  monitorId) ;

/// @brief Method Dispose, addr 0x9ceacd0, size 0xe0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetActiveCamera, addr 0x9cea60c, size 0x48, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* GetActiveCamera() ;

/// @brief Method InitCameraTexture, addr 0x9ceb330, size 0x598, virtual false, abstract: false, final false
inline void InitCameraTexture(::Liv::Lck::CameraResolutionDescriptor  resolution) ;

/// @brief Method InitializeTargetRenderTexture, addr 0x9ceb1d4, size 0x15c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> InitializeTargetRenderTexture(::Liv::Lck::CameraResolutionDescriptor  cameraResolutionDescriptor) ;

/// @brief [Preserve]
static inline ::Liv::Lck::LckVideoMixer* New_ctor(::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient) ;

/// @brief Method OnCameraRegistered, addr 0x9ceb8e8, size 0x4, virtual false, abstract: false, final false
inline void OnCameraRegistered(::Liv::Lck::ILckCamera*  camera) ;

/// @brief Method OnCameraUnregistered, addr 0x9ceb8ec, size 0x14, virtual false, abstract: false, final false
inline void OnCameraUnregistered(::Liv::Lck::ILckCamera*  camera) ;

/// @brief Method OnResolutionChanged, addr 0x9ceb900, size 0x118, virtual false, abstract: false, final false
inline void OnResolutionChanged(::GlobalNamespace::LckEvents_CameraResolutionChangedEvent  cameraResolutionChangedEvent) ;

/// @brief Method ReleaseCameraTrackTextures, addr 0x9ceadb0, size 0x124, virtual false, abstract: false, final false
inline void ReleaseCameraTrackTextures() ;

/// @brief Method StopActiveCamera, addr 0x9ceac10, size 0xc0, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* StopActiveCamera() ;

/// @brief Method TriggerActiveCameraChangedEvent, addr 0x9ceaa84, size 0x54, virtual false, abstract: false, final false
inline void TriggerActiveCameraChangedEvent() ;

/// @brief Method TriggerActiveCameraChangedEvent, addr 0x9ceaed4, size 0xe0, virtual false, abstract: false, final false
inline void TriggerActiveCameraChangedEvent(::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*  result) ;

/// @brief Method UpdateMonitorTexture, addr 0x9ceaad8, size 0x138, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult* UpdateMonitorTexture(::StringW  monitorId) ;

/// @brief Method UpdateTextureResolution, addr 0x9cea0b8, size 0x554, virtual false, abstract: false, final false
inline void UpdateTextureResolution(::Liv::Lck::CameraResolutionDescriptor  resolution) ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__CameraTrackTexture_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__CameraTrackTexture_k__BackingField() ;

constexpr ::Liv::Lck::ILckCamera* const& __cordl_internal_get__activeCamera() const;

constexpr ::Liv::Lck::ILckCamera*& __cordl_internal_get__activeCamera() ;

constexpr ::Liv::Lck::ILckEventBus* const& __cordl_internal_get__eventBus() const;

constexpr ::Liv::Lck::ILckEventBus*& __cordl_internal_get__eventBus() ;

constexpr bool const& __cordl_internal_get__hasLoggedResolutionError() const;

constexpr bool& __cordl_internal_get__hasLoggedResolutionError() ;

constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient* const& __cordl_internal_get__telemetryClient() const;

constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient*& __cordl_internal_get__telemetryClient() ;

constexpr void __cordl_internal_set__CameraTrackTexture_k__BackingField(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__activeCamera(::Liv::Lck::ILckCamera*  value) ;

constexpr void __cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value) ;

constexpr void __cordl_internal_set__hasLoggedResolutionError(bool  value) ;

constexpr void __cordl_internal_set__telemetryClient(::Liv::Lck::Telemetry::ILckTelemetryClient*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9ce9e2c, size 0x28c, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient) ;

/// [CompilerGenerated]
/// @brief Method get_CameraTrackTexture, addr 0x9ce9e1c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::RenderTexture> get_CameraTrackTexture() ;

/// @brief Convert to "::GlobalNamespace::ILckVideoTextureProvider"
constexpr ::GlobalNamespace::ILckVideoTextureProvider* i___GlobalNamespace__ILckVideoTextureProvider() noexcept;

/// @brief Convert to "::Liv::Lck::ILckActiveCameraConfigurer"
constexpr ::Liv::Lck::ILckActiveCameraConfigurer* i___Liv__Lck__ILckActiveCameraConfigurer() noexcept;

/// @brief Convert to "::Liv::Lck::ILckVideoMixer"
constexpr ::Liv::Lck::ILckVideoMixer* i___Liv__Lck__ILckVideoMixer() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CameraTrackTexture, addr 0x9ce9e24, size 0x8, virtual false, abstract: false, final false
inline void set_CameraTrackTexture(::UnityEngine::RenderTexture*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckVideoMixer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckVideoMixer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckVideoMixer(LckVideoMixer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckVideoMixer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckVideoMixer(LckVideoMixer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24751};

/// @brief Field _activeCamera, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::ILckCamera*  ____activeCamera;

/// @brief Field _eventBus, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::ILckEventBus*  ____eventBus;

/// @brief Field _telemetryClient, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::Telemetry::ILckTelemetryClient*  ____telemetryClient;

/// @brief Field _hasLoggedResolutionError, offset: 0x28, size: 0x1, def value: None
 bool  ____hasLoggedResolutionError;

/// [CompilerGenerated]
/// @brief Field <CameraTrackTexture>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____CameraTrackTexture_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckVideoMixer, ____activeCamera) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckVideoMixer, ____eventBus) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckVideoMixer, ____telemetryClient) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckVideoMixer, ____hasLoggedResolutionError) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckVideoMixer, ____CameraTrackTexture_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckVideoMixer) == 0x38, "Size mismatch!");

} // namespace end def Liv::Lck
