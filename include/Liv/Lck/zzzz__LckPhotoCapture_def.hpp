#pragma once
// IWYU pragma private; include "Liv/Lck/LckPhotoCapture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Settings/zzzz__LckSettings_ImageFileFormat_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_AutoScope_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckPhotoCapture)
namespace GlobalNamespace {
class ILckVideoTextureProvider;
}
namespace GlobalNamespace {
struct LckEvents_ActiveCameraTrackTextureChangedEvent;
}
namespace GlobalNamespace {
struct LckSettings_ImageFileFormat;
}
namespace Liv::Lck::Telemetry {
class ILckTelemetryClient;
}
namespace Liv::Lck {
class ILckEventBus;
}
namespace Liv::Lck {
class ILckPhotoCapture;
}
namespace Liv::Lck {
class LckPhotoCapture__CopyImageToGalleryWhenReady_d__17;
}
namespace Liv::Lck {
class LckPhotoCapture___c__DisplayClass17_0;
}
namespace Liv::Lck {
class LckPhotoCapture___c__DisplayClass17_1;
}
namespace Liv::Lck {
class LckPhotoCapture___c__DisplayClass19_0;
}
namespace Liv::Lck {
class LckResult;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class WaitForSecondsRealtime;
}
// Forward declare root types
namespace Liv::Lck {
class LckPhotoCapture;
}
namespace Liv::Lck {
class LckPhotoCapture__CopyImageToGalleryWhenReady_d__17;
}
namespace Liv::Lck {
class LckPhotoCapture___c__DisplayClass17_0;
}
namespace Liv::Lck {
class LckPhotoCapture___c__DisplayClass17_1;
}
namespace Liv::Lck {
class LckPhotoCapture___c__DisplayClass19_0;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckPhotoCapture*);
MARK_REF_T(::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17*);
MARK_REF_T(::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0*);
MARK_REF_T(::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1*);
MARK_REF_T(::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckPhotoCapture*, "Liv.Lck", "LckPhotoCapture");
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17*, "Liv.Lck", "LckPhotoCapture/<CopyImageToGalleryWhenReady>d__17");
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0*, "Liv.Lck", "LckPhotoCapture/<>c__DisplayClass17_0");
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1*, "Liv.Lck", "LckPhotoCapture/<>c__DisplayClass17_1");
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0*, "Liv.Lck", "LckPhotoCapture/<>c__DisplayClass19_0");
// Dependencies System.Object, Unity.Profiling.ProfilerMarker
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckPhotoCapture
class CORDL_TYPE LckPhotoCapture : public ::System::Object {
public:
// Declarations
using _CopyImageToGalleryWhenReady_d__17 = ::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17;

using __c__DisplayClass17_0 = ::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0;

using __c__DisplayClass17_1 = ::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1;

using __c__DisplayClass19_0 = ::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0;

/// @brief Field ImageFileFormatStrings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ImageFileFormatStrings, put=setStaticF_ImageFileFormatStrings)) ::ArrayW<::StringW>  ImageFileFormatStrings;

/// @brief Field _asyncCallbackProfileMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__asyncCallbackProfileMarker, put=setStaticF__asyncCallbackProfileMarker)) ::Unity::Profiling::ProfilerMarker  _asyncCallbackProfileMarker;

/// @brief Field _captureProfileMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__captureProfileMarker, put=setStaticF__captureProfileMarker)) ::Unity::Profiling::ProfilerMarker  _captureProfileMarker;

/// @brief Field _captureQueue, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__captureQueue, put=__cordl_internal_set__captureQueue)) ::System::Collections::Generic::Queue_1<::System::Action*>*  _captureQueue;

/// @brief Field _copyOutputFileToNativeGalleryProfileMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__copyOutputFileToNativeGalleryProfileMarker, put=setStaticF__copyOutputFileToNativeGalleryProfileMarker)) ::Unity::Profiling::ProfilerMarker  _copyOutputFileToNativeGalleryProfileMarker;

/// @brief Field _copyPhotoSpinWait, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__copyPhotoSpinWait, put=__cordl_internal_set__copyPhotoSpinWait)) ::UnityEngine::WaitForSecondsRealtime*  _copyPhotoSpinWait;

/// @brief Field _eventBus, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventBus, put=__cordl_internal_set__eventBus)) ::Liv::Lck::ILckEventBus*  _eventBus;

/// @brief Field _imageFilePathBuilder, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__imageFilePathBuilder, put=__cordl_internal_set__imageFilePathBuilder)) ::System::Text::StringBuilder*  _imageFilePathBuilder;

/// @brief Field _isCapturing, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__isCapturing, put=__cordl_internal_set__isCapturing)) bool  _isCapturing;

/// @brief Field _renderTexture, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderTexture, put=__cordl_internal_set__renderTexture)) ::UnityW<::UnityEngine::RenderTexture>  _renderTexture;

/// @brief Field _telemetryClient, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__telemetryClient, put=__cordl_internal_set__telemetryClient)) ::Liv::Lck::Telemetry::ILckTelemetryClient*  _telemetryClient;

/// @brief Field _videoTextureProvider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__videoTextureProvider, put=__cordl_internal_set__videoTextureProvider)) ::GlobalNamespace::ILckVideoTextureProvider*  _videoTextureProvider;

/// @brief Convert operator to "::Liv::Lck::ILckPhotoCapture"
constexpr operator  ::Liv::Lck::ILckPhotoCapture*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Capture, addr 0x9ce6374, size 0x33c, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* Capture() ;

/// [IteratorStateMachine(typeof(Liv.Lck.LckPhotoCapture::<CopyImageToGalleryWhenReady>d__17))]
/// @brief Method CopyImageToGalleryWhenReady, addr 0x9ce68a4, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CopyImageToGalleryWhenReady() ;

/// @brief Method Dispose, addr 0x9ce6ba8, size 0x114, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method FillAlphaChannel, addr 0x9ce6b7c, size 0x2c, virtual false, abstract: false, final false
static inline void FillAlphaChannel(::Unity::Collections::NativeArray_1<uint8_t>  narray) ;

/// @brief [Preserve]
static inline ::Liv::Lck::LckPhotoCapture* New_ctor(::GlobalNamespace::ILckVideoTextureProvider*  videoTextureProvider, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient) ;

/// @brief Method OnCameraTrackTextureChanged, addr 0x9ce6324, size 0x50, virtual false, abstract: false, final false
inline void OnCameraTrackTextureChanged(::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent  activeCameraTrackTextureChangedEvent) ;

/// @brief Method OnCaptureComplete, addr 0x9ce674c, size 0x158, virtual false, abstract: false, final false
inline void OnCaptureComplete(::Liv::Lck::LckResult*  result) ;

/// @brief Method ProcessQueue, addr 0x9ce66b0, size 0x9c, virtual false, abstract: false, final false
inline void ProcessQueue() ;

/// @brief Method SaveRenderTextureToFile, addr 0x9ce6940, size 0x234, virtual false, abstract: false, final false
inline void SaveRenderTextureToFile(::StringW  filePath, ::GlobalNamespace::LckSettings_ImageFileFormat  fileFormat, ::System::Action_1<::Liv::Lck::LckResult*>*  onCaptureComplete) ;

/// @brief Method SetRenderTexture, addr 0x9ce6938, size 0x8, virtual false, abstract: false, final false
inline void SetRenderTexture(::UnityEngine::RenderTexture*  renderTexture) ;

/// [CompilerGenerated]
/// @brief Method <Capture>b__13_0, addr 0x9ce6ec4, size 0x2a0, virtual false, abstract: false, final false
inline void _Capture_b__13_0() ;

/// [CompilerGenerated]
/// @brief Method <CopyImageToGalleryWhenReady>b__17_0, addr 0x9ce7164, size 0x118, virtual false, abstract: false, final false
inline void _CopyImageToGalleryWhenReady_b__17_0(bool  success, ::StringW  path) ;

constexpr ::System::Collections::Generic::Queue_1<::System::Action*>* const& __cordl_internal_get__captureQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::System::Action*>*& __cordl_internal_get__captureQueue() ;

constexpr ::UnityEngine::WaitForSecondsRealtime* const& __cordl_internal_get__copyPhotoSpinWait() const;

constexpr ::UnityEngine::WaitForSecondsRealtime*& __cordl_internal_get__copyPhotoSpinWait() ;

constexpr ::Liv::Lck::ILckEventBus* const& __cordl_internal_get__eventBus() const;

constexpr ::Liv::Lck::ILckEventBus*& __cordl_internal_get__eventBus() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__imageFilePathBuilder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get__imageFilePathBuilder() ;

constexpr bool const& __cordl_internal_get__isCapturing() const;

constexpr bool& __cordl_internal_get__isCapturing() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__renderTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__renderTexture() ;

constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient* const& __cordl_internal_get__telemetryClient() const;

constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient*& __cordl_internal_get__telemetryClient() ;

constexpr ::GlobalNamespace::ILckVideoTextureProvider* const& __cordl_internal_get__videoTextureProvider() const;

constexpr ::GlobalNamespace::ILckVideoTextureProvider*& __cordl_internal_get__videoTextureProvider() ;

constexpr void __cordl_internal_set__captureQueue(::System::Collections::Generic::Queue_1<::System::Action*>*  value) ;

constexpr void __cordl_internal_set__copyPhotoSpinWait(::UnityEngine::WaitForSecondsRealtime*  value) ;

constexpr void __cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value) ;

constexpr void __cordl_internal_set__imageFilePathBuilder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set__isCapturing(bool  value) ;

constexpr void __cordl_internal_set__renderTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__telemetryClient(::Liv::Lck::Telemetry::ILckTelemetryClient*  value) ;

constexpr void __cordl_internal_set__videoTextureProvider(::GlobalNamespace::ILckVideoTextureProvider*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9ce6074, size 0x2b0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::ILckVideoTextureProvider*  videoTextureProvider, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient) ;

static inline ::ArrayW<::StringW> getStaticF_ImageFileFormatStrings() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF__asyncCallbackProfileMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF__captureProfileMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF__copyOutputFileToNativeGalleryProfileMarker() ;

/// @brief Convert to "::Liv::Lck::ILckPhotoCapture"
constexpr ::Liv::Lck::ILckPhotoCapture* i___Liv__Lck__ILckPhotoCapture() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_ImageFileFormatStrings(::ArrayW<::StringW>  value) ;

static inline void setStaticF__asyncCallbackProfileMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF__captureProfileMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF__copyOutputFileToNativeGalleryProfileMarker(::Unity::Profiling::ProfilerMarker  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckPhotoCapture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckPhotoCapture", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckPhotoCapture(LckPhotoCapture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckPhotoCapture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckPhotoCapture(LckPhotoCapture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24745};

/// @brief Field _videoTextureProvider, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::ILckVideoTextureProvider*  ____videoTextureProvider;

/// @brief Field _eventBus, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::ILckEventBus*  ____eventBus;

/// @brief Field _telemetryClient, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::Telemetry::ILckTelemetryClient*  ____telemetryClient;

/// @brief Field _renderTexture, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____renderTexture;

/// @brief Field _imageFilePathBuilder, offset: 0x30, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ____imageFilePathBuilder;

/// @brief Field _captureQueue, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::Action*>*  ____captureQueue;

/// @brief Field _isCapturing, offset: 0x40, size: 0x1, def value: None
 bool  ____isCapturing;

/// @brief Field _copyPhotoSpinWait, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::WaitForSecondsRealtime*  ____copyPhotoSpinWait;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckPhotoCapture, ____videoTextureProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture, ____eventBus) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture, ____telemetryClient) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture, ____renderTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture, ____imageFilePathBuilder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture, ____captureQueue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture, ____isCapturing) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture, ____copyPhotoSpinWait) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckPhotoCapture) == 0x50, "Size mismatch!");

} // namespace end def Liv::Lck
// [CompilerGenerated]
// Dependencies System.Object, Unity.Profiling.ProfilerMarker::AutoScope
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckPhotoCapture/<CopyImageToGalleryWhenReady>d__17
class CORDL_TYPE LckPhotoCapture__CopyImageToGalleryWhenReady_d__17 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Liv::Lck::LckPhotoCapture*  __4__this;

/// @brief Field <>7__wrap1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::ProfilerMarker_AutoScope  __7__wrap1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9ce7cc4, size 0x354, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9ce8038, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9ce8040, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9ce8078, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9ce7c90, size 0x34, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Liv::Lck::LckPhotoCapture* const& __cordl_internal_get___4__this() const;

constexpr ::Liv::Lck::LckPhotoCapture*& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProfilerMarker_AutoScope const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::ProfilerMarker_AutoScope& __cordl_internal_get___7__wrap1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Liv::Lck::LckPhotoCapture*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::ProfilerMarker_AutoScope  value) ;

/// @brief Method <>m__Finally1, addr 0x9ce8018, size 0x20, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9ce6910, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckPhotoCapture__CopyImageToGalleryWhenReady_d__17() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckPhotoCapture__CopyImageToGalleryWhenReady_d__17", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckPhotoCapture__CopyImageToGalleryWhenReady_d__17(LckPhotoCapture__CopyImageToGalleryWhenReady_d__17 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckPhotoCapture__CopyImageToGalleryWhenReady_d__17", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckPhotoCapture__CopyImageToGalleryWhenReady_d__17(LckPhotoCapture__CopyImageToGalleryWhenReady_d__17 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24744};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::LckPhotoCapture*  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProfilerMarker_AutoScope  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17, _____7__wrap1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17) == 0x30, "Size mismatch!");

} // namespace end def Liv::Lck
// [CompilerGenerated]
// Dependencies Liv.Lck.Settings.LckSettings::ImageFileFormat, System.Object, Unity.Collections.NativeArray`1<T>, UnityEngine.Experimental.Rendering.GraphicsFormat
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckPhotoCapture/<>c__DisplayClass19_0
class CORDL_TYPE LckPhotoCapture___c__DisplayClass19_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__1, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::System::Action*  __9__1;

/// @brief Field <>9__2, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__2, put=__cordl_internal_set___9__2)) ::System::Action*  __9__2;

/// @brief Field <>9__3, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action*  __9__3;

/// @brief Field <>9__4, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__4, put=__cordl_internal_set___9__4)) ::System::Action*  __9__4;

/// @brief Field fileFormat, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_fileFormat, put=__cordl_internal_set_fileFormat)) ::GlobalNamespace::LckSettings_ImageFileFormat  fileFormat;

/// @brief Field filePath, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_filePath, put=__cordl_internal_set_filePath)) ::StringW  filePath;

/// @brief Field height, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) int32_t  height;

/// @brief Field narray, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_narray, put=__cordl_internal_set_narray)) ::Unity::Collections::NativeArray_1<uint8_t>  narray;

/// @brief Field onCaptureComplete, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCaptureComplete, put=__cordl_internal_set_onCaptureComplete)) ::System::Action_1<::Liv::Lck::LckResult*>*  onCaptureComplete;

/// @brief Field renderTextureGraphicsFormat, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderTextureGraphicsFormat, put=__cordl_internal_set_renderTextureGraphicsFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  renderTextureGraphicsFormat;

/// @brief Field width, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) int32_t  width;

static inline ::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0* New_ctor() ;

/// @brief Method <SaveRenderTextureToFile>b__0, addr 0x9ce7534, size 0x268, virtual false, abstract: false, final false
inline void _SaveRenderTextureToFile_b__0(::UnityEngine::Rendering::AsyncGPUReadbackRequest  request) ;

/// @brief Method <SaveRenderTextureToFile>b__1, addr 0x9ce779c, size 0x3e4, virtual false, abstract: false, final false
inline void _SaveRenderTextureToFile_b__1() ;

/// @brief Method <SaveRenderTextureToFile>b__2, addr 0x9ce7c20, size 0x70, virtual false, abstract: false, final false
inline void _SaveRenderTextureToFile_b__2() ;

/// @brief Method <SaveRenderTextureToFile>b__3, addr 0x9ce7b80, size 0x70, virtual false, abstract: false, final false
inline void _SaveRenderTextureToFile_b__3() ;

/// @brief Method <SaveRenderTextureToFile>b__4, addr 0x9ce7bf0, size 0x30, virtual false, abstract: false, final false
inline void _SaveRenderTextureToFile_b__4() ;

constexpr ::System::Action* const& __cordl_internal_get___9__1() const;

constexpr ::System::Action*& __cordl_internal_get___9__1() ;

constexpr ::System::Action* const& __cordl_internal_get___9__2() const;

constexpr ::System::Action*& __cordl_internal_get___9__2() ;

constexpr ::System::Action* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action*& __cordl_internal_get___9__3() ;

constexpr ::System::Action* const& __cordl_internal_get___9__4() const;

constexpr ::System::Action*& __cordl_internal_get___9__4() ;

constexpr ::GlobalNamespace::LckSettings_ImageFileFormat const& __cordl_internal_get_fileFormat() const;

constexpr ::GlobalNamespace::LckSettings_ImageFileFormat& __cordl_internal_get_fileFormat() ;

constexpr ::StringW const& __cordl_internal_get_filePath() const;

constexpr ::StringW& __cordl_internal_get_filePath() ;

constexpr int32_t const& __cordl_internal_get_height() const;

constexpr int32_t& __cordl_internal_get_height() ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_narray() const;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_narray() ;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& __cordl_internal_get_onCaptureComplete() const;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& __cordl_internal_get_onCaptureComplete() ;

constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_renderTextureGraphicsFormat() const;

constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_renderTextureGraphicsFormat() ;

constexpr int32_t const& __cordl_internal_get_width() const;

constexpr int32_t& __cordl_internal_get_width() ;

constexpr void __cordl_internal_set___9__1(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__2(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__4(::System::Action*  value) ;

constexpr void __cordl_internal_set_fileFormat(::GlobalNamespace::LckSettings_ImageFileFormat  value) ;

constexpr void __cordl_internal_set_filePath(::StringW  value) ;

constexpr void __cordl_internal_set_height(int32_t  value) ;

constexpr void __cordl_internal_set_narray(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr void __cordl_internal_set_onCaptureComplete(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

constexpr void __cordl_internal_set_renderTextureGraphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

constexpr void __cordl_internal_set_width(int32_t  value) ;

/// @brief Method .ctor, addr 0x9ce6b74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckPhotoCapture___c__DisplayClass19_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckPhotoCapture___c__DisplayClass19_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckPhotoCapture___c__DisplayClass19_0(LckPhotoCapture___c__DisplayClass19_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckPhotoCapture___c__DisplayClass19_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckPhotoCapture___c__DisplayClass19_0(LckPhotoCapture___c__DisplayClass19_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24743};

/// @brief Field narray, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  ___narray;

/// @brief Field fileFormat, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::LckSettings_ImageFileFormat  ___fileFormat;

/// @brief Field renderTextureGraphicsFormat, offset: 0x24, size: 0x4, def value: None
 ::UnityEngine::Experimental::Rendering::GraphicsFormat  ___renderTextureGraphicsFormat;

/// @brief Field width, offset: 0x28, size: 0x4, def value: None
 int32_t  ___width;

/// @brief Field height, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___height;

/// @brief Field filePath, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___filePath;

/// @brief Field onCaptureComplete, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::LckResult*>*  ___onCaptureComplete;

/// @brief Field <>9__3, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  _____9__3;

/// @brief Field <>9__4, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  _____9__4;

/// @brief Field <>9__1, offset: 0x50, size: 0x8, def value: None
 ::System::Action*  _____9__1;

/// @brief Field <>9__2, offset: 0x58, size: 0x8, def value: None
 ::System::Action*  _____9__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0, ___narray) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0, ___fileFormat) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0, ___renderTextureGraphicsFormat) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0, ___width) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0, ___height) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0, ___filePath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0, ___onCaptureComplete) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0, _____9__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0, _____9__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0, _____9__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0, _____9__2) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0) == 0x60, "Size mismatch!");

} // namespace end def Liv::Lck
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckPhotoCapture/<>c__DisplayClass17_1
class CORDL_TYPE LckPhotoCapture___c__DisplayClass17_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Liv::Lck::LckPhotoCapture*  __4__this;

/// @brief Field path, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::StringW  path;

/// @brief Field success, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_success, put=__cordl_internal_set_success)) bool  success;

static inline ::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1* New_ctor() ;

/// @brief Method <CopyImageToGalleryWhenReady>b__2, addr 0x9ce72a4, size 0x290, virtual false, abstract: false, final false
inline void _CopyImageToGalleryWhenReady_b__2() ;

constexpr ::Liv::Lck::LckPhotoCapture* const& __cordl_internal_get___4__this() const;

constexpr ::Liv::Lck::LckPhotoCapture*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_path() const;

constexpr ::StringW& __cordl_internal_get_path() ;

constexpr bool const& __cordl_internal_get_success() const;

constexpr bool& __cordl_internal_get_success() ;

constexpr void __cordl_internal_set___4__this(::Liv::Lck::LckPhotoCapture*  value) ;

constexpr void __cordl_internal_set_path(::StringW  value) ;

constexpr void __cordl_internal_set_success(bool  value) ;

/// @brief Method .ctor, addr 0x9ce727c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckPhotoCapture___c__DisplayClass17_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckPhotoCapture___c__DisplayClass17_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckPhotoCapture___c__DisplayClass17_1(LckPhotoCapture___c__DisplayClass17_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckPhotoCapture___c__DisplayClass17_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckPhotoCapture___c__DisplayClass17_1(LckPhotoCapture___c__DisplayClass17_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24742};

/// @brief Field success, offset: 0x10, size: 0x1, def value: None
 bool  ___success;

/// @brief Field path, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___path;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::LckPhotoCapture*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1, ___success) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1, ___path) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckPhotoCapture/<>c__DisplayClass17_0
class CORDL_TYPE LckPhotoCapture___c__DisplayClass17_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Liv::Lck::LckPhotoCapture*  __4__this;

/// @brief Field task, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::System::Threading::Tasks::Task*  task;

static inline ::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0* New_ctor() ;

/// @brief Method <CopyImageToGalleryWhenReady>b__1, addr 0x9ce728c, size 0x18, virtual false, abstract: false, final false
inline bool _CopyImageToGalleryWhenReady_b__1() ;

constexpr ::Liv::Lck::LckPhotoCapture* const& __cordl_internal_get___4__this() const;

constexpr ::Liv::Lck::LckPhotoCapture*& __cordl_internal_get___4__this() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_task() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set___4__this(::Liv::Lck::LckPhotoCapture*  value) ;

constexpr void __cordl_internal_set_task(::System::Threading::Tasks::Task*  value) ;

/// @brief Method .ctor, addr 0x9ce7284, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckPhotoCapture___c__DisplayClass17_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckPhotoCapture___c__DisplayClass17_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckPhotoCapture___c__DisplayClass17_0(LckPhotoCapture___c__DisplayClass17_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckPhotoCapture___c__DisplayClass17_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckPhotoCapture___c__DisplayClass17_0(LckPhotoCapture___c__DisplayClass17_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24741};

/// @brief Field task, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ___task;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::LckPhotoCapture*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0, ___task) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck
