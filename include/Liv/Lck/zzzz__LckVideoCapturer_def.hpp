#pragma once
// IWYU pragma private; include "Liv/Lck/LckVideoCapturer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckVideoCapturer)
namespace GlobalNamespace {
class ILckVideoTextureProvider;
}
namespace GlobalNamespace {
struct LckEvents_CameraFramerateChangedEvent;
}
namespace Liv::Lck::Encoding {
class ILckEncoder;
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
class ILckPreviewer;
}
namespace Liv::Lck {
class ILckVideoCapturer;
}
namespace Liv::Lck {
class LckVideoCapturer__CaptureLoopCoroutine_d__24;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Liv::Lck {
class LckVideoCapturer;
}
namespace Liv::Lck {
class LckVideoCapturer__CaptureLoopCoroutine_d__24;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckVideoCapturer*);
MARK_REF_T(::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckVideoCapturer*, "Liv.Lck", "LckVideoCapturer");
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24*, "Liv.Lck", "LckVideoCapturer/<CaptureLoopCoroutine>d__24");
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckVideoCapturer
class CORDL_TYPE LckVideoCapturer : public ::System::Object {
public:
// Declarations
using _CaptureLoopCoroutine_d__24 = ::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24;

 __declspec(property(get=get_ForceCaptureAllFrames, put=set_ForceCaptureAllFrames)) bool  ForceCaptureAllFrames;

 __declspec(property(get=get_IsCapturing, put=set_IsCapturing)) bool  IsCapturing;

/// @brief Field <ForceCaptureAllFrames>k__BackingField, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__ForceCaptureAllFrames_k__BackingField, put=__cordl_internal_set__ForceCaptureAllFrames_k__BackingField)) bool  _ForceCaptureAllFrames_k__BackingField;

/// @brief Field <IsCapturing>k__BackingField, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsCapturing_k__BackingField, put=__cordl_internal_set__IsCapturing_k__BackingField)) bool  _IsCapturing_k__BackingField;

/// @brief Field _activeCameraConfigurer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeCameraConfigurer, put=__cordl_internal_set__activeCameraConfigurer)) ::Liv::Lck::ILckActiveCameraConfigurer*  _activeCameraConfigurer;

/// @brief Field _captureStopwatch, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__captureStopwatch, put=__cordl_internal_set__captureStopwatch)) ::System::Diagnostics::Stopwatch*  _captureStopwatch;

/// @brief Field _captureTimeOverflow, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__captureTimeOverflow, put=__cordl_internal_set__captureTimeOverflow)) double_t  _captureTimeOverflow;

/// @brief Field _encoder, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoder, put=__cordl_internal_set__encoder)) ::Liv::Lck::Encoding::ILckEncoder*  _encoder;

/// @brief Field _eventBus, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventBus, put=__cordl_internal_set__eventBus)) ::Liv::Lck::ILckEventBus*  _eventBus;

/// @brief Field _frameHasBeenRendered, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__frameHasBeenRendered, put=__cordl_internal_set__frameHasBeenRendered)) bool  _frameHasBeenRendered;

/// @brief Field _previewer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__previewer, put=__cordl_internal_set__previewer)) ::Liv::Lck::ILckPreviewer*  _previewer;

/// @brief Field _targetSecondsPerCapture, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetSecondsPerCapture, put=__cordl_internal_set__targetSecondsPerCapture)) double_t  _targetSecondsPerCapture;

/// @brief Field _videoTextureProvider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__videoTextureProvider, put=__cordl_internal_set__videoTextureProvider)) ::GlobalNamespace::ILckVideoTextureProvider*  _videoTextureProvider;

/// @brief Convert operator to "::Liv::Lck::ILckVideoCapturer"
constexpr operator  ::Liv::Lck::ILckVideoCapturer*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CaptureCanBeCulled, addr 0x9d3333c, size 0x12c, virtual false, abstract: false, final false
inline bool CaptureCanBeCulled() ;

/// [IteratorStateMachine(typeof(Liv.Lck.LckVideoCapturer::<CaptureLoopCoroutine>d__24))]
/// @brief Method CaptureLoopCoroutine, addr 0x9d33088, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CaptureLoopCoroutine() ;

/// @brief Method Dispose, addr 0x9d33690, size 0x118, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method HandleCameraFrame, addr 0x9d335b0, size 0xe0, virtual false, abstract: false, final false
inline void HandleCameraFrame() ;

/// @brief Method HandleCameraFrame, addr 0x9d33468, size 0x148, virtual false, abstract: false, final false
inline void HandleCameraFrame(::Liv::Lck::ILckCamera*  activeCamera) ;

/// @brief Method HasCurrentFrameBeenCaptured, addr 0x9d33164, size 0x8, virtual true, abstract: false, final true
inline bool HasCurrentFrameBeenCaptured() ;

/// @brief [Preserve]
static inline ::Liv::Lck::LckVideoCapturer* New_ctor(::GlobalNamespace::ILckVideoTextureProvider*  videoTextureProvider, ::Liv::Lck::ILckActiveCameraConfigurer*  activeCameraConfigurer, ::Liv::Lck::ILckPreviewer*  previewer, ::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckEventBus*  eventBus) ;

/// @brief Method OnCameraFramerateChanged, addr 0x9d32f74, size 0x6c, virtual false, abstract: false, final false
inline void OnCameraFramerateChanged(::GlobalNamespace::LckEvents_CameraFramerateChangedEvent  cameraFramerateChangedEvent) ;

/// @brief Method PrepareCameraForCapture, addr 0x9d33194, size 0x1a8, virtual false, abstract: false, final false
inline void PrepareCameraForCapture(::Liv::Lck::ILckCamera*  camera) ;

/// @brief Method SetTargetCaptureFramerate, addr 0x9d32f60, size 0x14, virtual false, abstract: false, final false
inline void SetTargetCaptureFramerate(uint32_t  targetCaptureFramerate) ;

/// @brief Method StartCapturing, addr 0x9d33000, size 0x88, virtual true, abstract: false, final true
inline void StartCapturing() ;

/// @brief Method StopCapturing, addr 0x9d330f4, size 0x70, virtual true, abstract: false, final true
inline void StopCapturing() ;

constexpr bool const& __cordl_internal_get__ForceCaptureAllFrames_k__BackingField() const;

constexpr bool& __cordl_internal_get__ForceCaptureAllFrames_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsCapturing_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsCapturing_k__BackingField() ;

constexpr ::Liv::Lck::ILckActiveCameraConfigurer* const& __cordl_internal_get__activeCameraConfigurer() const;

constexpr ::Liv::Lck::ILckActiveCameraConfigurer*& __cordl_internal_get__activeCameraConfigurer() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__captureStopwatch() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__captureStopwatch() ;

constexpr double_t const& __cordl_internal_get__captureTimeOverflow() const;

constexpr double_t& __cordl_internal_get__captureTimeOverflow() ;

constexpr ::Liv::Lck::Encoding::ILckEncoder* const& __cordl_internal_get__encoder() const;

constexpr ::Liv::Lck::Encoding::ILckEncoder*& __cordl_internal_get__encoder() ;

constexpr ::Liv::Lck::ILckEventBus* const& __cordl_internal_get__eventBus() const;

constexpr ::Liv::Lck::ILckEventBus*& __cordl_internal_get__eventBus() ;

constexpr bool const& __cordl_internal_get__frameHasBeenRendered() const;

constexpr bool& __cordl_internal_get__frameHasBeenRendered() ;

constexpr ::Liv::Lck::ILckPreviewer* const& __cordl_internal_get__previewer() const;

constexpr ::Liv::Lck::ILckPreviewer*& __cordl_internal_get__previewer() ;

constexpr double_t const& __cordl_internal_get__targetSecondsPerCapture() const;

constexpr double_t& __cordl_internal_get__targetSecondsPerCapture() ;

constexpr ::GlobalNamespace::ILckVideoTextureProvider* const& __cordl_internal_get__videoTextureProvider() const;

constexpr ::GlobalNamespace::ILckVideoTextureProvider*& __cordl_internal_get__videoTextureProvider() ;

constexpr void __cordl_internal_set__ForceCaptureAllFrames_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsCapturing_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__activeCameraConfigurer(::Liv::Lck::ILckActiveCameraConfigurer*  value) ;

constexpr void __cordl_internal_set__captureStopwatch(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set__captureTimeOverflow(double_t  value) ;

constexpr void __cordl_internal_set__encoder(::Liv::Lck::Encoding::ILckEncoder*  value) ;

constexpr void __cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value) ;

constexpr void __cordl_internal_set__frameHasBeenRendered(bool  value) ;

constexpr void __cordl_internal_set__previewer(::Liv::Lck::ILckPreviewer*  value) ;

constexpr void __cordl_internal_set__targetSecondsPerCapture(double_t  value) ;

constexpr void __cordl_internal_set__videoTextureProvider(::GlobalNamespace::ILckVideoTextureProvider*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9d32d04, size 0x25c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::ILckVideoTextureProvider*  videoTextureProvider, ::Liv::Lck::ILckActiveCameraConfigurer*  activeCameraConfigurer, ::Liv::Lck::ILckPreviewer*  previewer, ::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckEventBus*  eventBus) ;

/// [CompilerGenerated]
/// @brief Method get_ForceCaptureAllFrames, addr 0x9d32fe0, size 0x8, virtual true, abstract: false, final true
inline bool get_ForceCaptureAllFrames() ;

/// [CompilerGenerated]
/// @brief Method get_IsCapturing, addr 0x9d32ff0, size 0x8, virtual true, abstract: false, final true
inline bool get_IsCapturing() ;

/// @brief Convert to "::Liv::Lck::ILckVideoCapturer"
constexpr ::Liv::Lck::ILckVideoCapturer* i___Liv__Lck__ILckVideoCapturer() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_ForceCaptureAllFrames, addr 0x9d32fe8, size 0x8, virtual true, abstract: false, final true
inline void set_ForceCaptureAllFrames(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsCapturing, addr 0x9d32ff8, size 0x8, virtual false, abstract: false, final false
inline void set_IsCapturing(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckVideoCapturer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckVideoCapturer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckVideoCapturer(LckVideoCapturer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckVideoCapturer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckVideoCapturer(LckVideoCapturer const& ) = delete;

/// @brief Field CaptureLoopCoroutineName offset 0xffffffff size 0x8
static constexpr ::ConstString  CaptureLoopCoroutineName{u"LckCaptureLooper:CaptureLoopCoroutine"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24802};

/// @brief Field _videoTextureProvider, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::ILckVideoTextureProvider*  ____videoTextureProvider;

/// @brief Field _activeCameraConfigurer, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::ILckActiveCameraConfigurer*  ____activeCameraConfigurer;

/// @brief Field _previewer, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckPreviewer*  ____previewer;

/// @brief Field _encoder, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::Encoding::ILckEncoder*  ____encoder;

/// @brief Field _eventBus, offset: 0x30, size: 0x8, def value: None
 ::Liv::Lck::ILckEventBus*  ____eventBus;

/// @brief Field _captureStopwatch, offset: 0x38, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ____captureStopwatch;

/// @brief Field _frameHasBeenRendered, offset: 0x40, size: 0x1, def value: None
 bool  ____frameHasBeenRendered;

/// @brief Field _captureTimeOverflow, offset: 0x48, size: 0x8, def value: None
 double_t  ____captureTimeOverflow;

/// @brief Field _targetSecondsPerCapture, offset: 0x50, size: 0x8, def value: None
 double_t  ____targetSecondsPerCapture;

/// [CompilerGenerated]
/// @brief Field <ForceCaptureAllFrames>k__BackingField, offset: 0x58, size: 0x1, def value: None
 bool  ____ForceCaptureAllFrames_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsCapturing>k__BackingField, offset: 0x59, size: 0x1, def value: None
 bool  ____IsCapturing_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckVideoCapturer, ____videoTextureProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckVideoCapturer, ____activeCameraConfigurer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckVideoCapturer, ____previewer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckVideoCapturer, ____encoder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckVideoCapturer, ____eventBus) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckVideoCapturer, ____captureStopwatch) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckVideoCapturer, ____frameHasBeenRendered) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckVideoCapturer, ____captureTimeOverflow) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckVideoCapturer, ____targetSecondsPerCapture) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckVideoCapturer, ____ForceCaptureAllFrames_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckVideoCapturer, ____IsCapturing_k__BackingField) == 0x59, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckVideoCapturer) == 0x60, "Size mismatch!");

} // namespace end def Liv::Lck
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckVideoCapturer/<CaptureLoopCoroutine>d__24
class CORDL_TYPE LckVideoCapturer__CaptureLoopCoroutine_d__24 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Liv::Lck::LckVideoCapturer*  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d337ac, size 0x90, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d3383c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d33844, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d3387c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d337a8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Liv::Lck::LckVideoCapturer* const& __cordl_internal_get___4__this() const;

constexpr ::Liv::Lck::LckVideoCapturer*& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Liv::Lck::LckVideoCapturer*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d3316c, size 0x28, virtual false, abstract: false, final false
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
constexpr LckVideoCapturer__CaptureLoopCoroutine_d__24() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckVideoCapturer__CaptureLoopCoroutine_d__24", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckVideoCapturer__CaptureLoopCoroutine_d__24(LckVideoCapturer__CaptureLoopCoroutine_d__24 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckVideoCapturer__CaptureLoopCoroutine_d__24", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckVideoCapturer__CaptureLoopCoroutine_d__24(LckVideoCapturer__CaptureLoopCoroutine_d__24 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24801};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::LckVideoCapturer*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck
