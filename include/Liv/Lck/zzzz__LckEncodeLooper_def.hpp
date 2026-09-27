#pragma once
// IWYU pragma private; include "Liv/Lck/LckEncodeLooper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckEncodeLooper)
namespace GlobalNamespace {
struct LckEvents_EncoderStartedEvent;
}
namespace Liv::Lck::Collections {
class AudioBuffer;
}
namespace Liv::Lck::Encoding {
class ILckEncoder;
}
namespace Liv::Lck::Telemetry {
class ILckTelemetryClient;
}
namespace Liv::Lck {
class ILckAudioMixer;
}
namespace Liv::Lck {
class ILckEarlyUpdate;
}
namespace Liv::Lck {
class ILckEncodeLooper;
}
namespace Liv::Lck {
class ILckEventBus;
}
namespace Liv::Lck {
class ILckOutputConfigurer;
}
namespace Liv::Lck {
class ILckVideoCapturer;
}
namespace Liv::Lck {
class LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Liv::Lck {
class LckEncodeLooper;
}
namespace Liv::Lck {
class LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckEncodeLooper*);
MARK_REF_T(::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckEncodeLooper*, "Liv.Lck", "LckEncodeLooper");
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21*, "Liv.Lck", "LckEncodeLooper/<StartEncodingAfterWarmupFrames>d__21");
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckEncodeLooper
class CORDL_TYPE LckEncodeLooper : public ::System::Object {
public:
// Declarations
using _StartEncodingAfterWarmupFrames_d__21 = ::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21;

/// @brief Field _audioMixer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioMixer, put=__cordl_internal_set__audioMixer)) ::Liv::Lck::ILckAudioMixer*  _audioMixer;

/// @brief Field _disposed, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _encoder, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoder, put=__cordl_internal_set__encoder)) ::Liv::Lck::Encoding::ILckEncoder*  _encoder;

/// @brief Field _eventBus, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventBus, put=__cordl_internal_set__eventBus)) ::Liv::Lck::ILckEventBus*  _eventBus;

/// @brief Field _outputConfigurer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputConfigurer, put=__cordl_internal_set__outputConfigurer)) ::Liv::Lck::ILckOutputConfigurer*  _outputConfigurer;

/// @brief Field _pausedForTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__pausedForTime, put=__cordl_internal_set__pausedForTime)) float_t  _pausedForTime;

/// @brief Field _prevVideoTime, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__prevVideoTime, put=__cordl_internal_set__prevVideoTime)) float_t  _prevVideoTime;

/// @brief Field _telemetryClient, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__telemetryClient, put=__cordl_internal_set__telemetryClient)) ::Liv::Lck::Telemetry::ILckTelemetryClient*  _telemetryClient;

/// @brief Field _videoCapturer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__videoCapturer, put=__cordl_internal_set__videoCapturer)) ::Liv::Lck::ILckVideoCapturer*  _videoCapturer;

/// @brief Field _videoTime, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__videoTime, put=__cordl_internal_set__videoTime)) float_t  _videoTime;

/// @brief Convert operator to "::Liv::Lck::ILckEarlyUpdate"
constexpr operator  ::Liv::Lck::ILckEarlyUpdate*() noexcept;

/// @brief Convert operator to "::Liv::Lck::ILckEncodeLooper"
constexpr operator  ::Liv::Lck::ILckEncodeLooper*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CalculateAudioTime, addr 0x9ced960, size 0x154, virtual false, abstract: false, final false
inline float_t CalculateAudioTime() ;

/// @brief Method Dispose, addr 0x9cedf98, size 0x84, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EarlyUpdate, addr 0x9ced270, size 0x5b4, virtual true, abstract: false, final true
inline void EarlyUpdate() ;

/// @brief Method EnsureTrackTimeAlignment, addr 0x9cedab4, size 0x224, virtual false, abstract: false, final false
static inline void EnsureTrackTimeAlignment(::by_ref<float_t>  videoTime, float_t  audioTime, float_t  prevVideoTime) ;

/// @brief Method HandleEncodeFrameError, addr 0x9cedcd8, size 0x170, virtual false, abstract: false, final false
inline void HandleEncodeFrameError(::StringW  errorMessage) ;

/// @brief Method IsAudioDataValid, addr 0x9ced828, size 0x138, virtual false, abstract: false, final false
inline bool IsAudioDataValid(::Liv::Lck::Collections::AudioBuffer*  audioData) ;

/// @brief [Preserve]
static inline ::Liv::Lck::LckEncodeLooper* New_ctor(::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckAudioMixer*  audioMixer, ::Liv::Lck::ILckVideoCapturer*  videoCapturer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient) ;

/// @brief Method OnEncoderStarted, addr 0x9cedef8, size 0xa0, virtual false, abstract: false, final false
inline void OnEncoderStarted(::GlobalNamespace::LckEvents_EncoderStartedEvent  encoderStartedEvent) ;

/// [IteratorStateMachine(typeof(Liv.Lck.LckEncodeLooper::<StartEncodingAfterWarmupFrames>d__21))]
/// @brief Method StartEncodingAfterWarmupFrames, addr 0x9cede54, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* StartEncodingAfterWarmupFrames(int32_t  warmupFrameCount) ;

/// @brief Method StartEncodingFrames, addr 0x9cede48, size 0xc, virtual false, abstract: false, final false
inline void StartEncodingFrames() ;

/// @brief Method UnregisterEncodeFrameEarlyUpdate, addr 0x9ced824, size 0x4, virtual false, abstract: false, final false
inline void UnregisterEncodeFrameEarlyUpdate() ;

constexpr ::Liv::Lck::ILckAudioMixer* const& __cordl_internal_get__audioMixer() const;

constexpr ::Liv::Lck::ILckAudioMixer*& __cordl_internal_get__audioMixer() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr ::Liv::Lck::Encoding::ILckEncoder* const& __cordl_internal_get__encoder() const;

constexpr ::Liv::Lck::Encoding::ILckEncoder*& __cordl_internal_get__encoder() ;

constexpr ::Liv::Lck::ILckEventBus* const& __cordl_internal_get__eventBus() const;

constexpr ::Liv::Lck::ILckEventBus*& __cordl_internal_get__eventBus() ;

constexpr ::Liv::Lck::ILckOutputConfigurer* const& __cordl_internal_get__outputConfigurer() const;

constexpr ::Liv::Lck::ILckOutputConfigurer*& __cordl_internal_get__outputConfigurer() ;

constexpr float_t const& __cordl_internal_get__pausedForTime() const;

constexpr float_t& __cordl_internal_get__pausedForTime() ;

constexpr float_t const& __cordl_internal_get__prevVideoTime() const;

constexpr float_t& __cordl_internal_get__prevVideoTime() ;

constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient* const& __cordl_internal_get__telemetryClient() const;

constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient*& __cordl_internal_get__telemetryClient() ;

constexpr ::Liv::Lck::ILckVideoCapturer* const& __cordl_internal_get__videoCapturer() const;

constexpr ::Liv::Lck::ILckVideoCapturer*& __cordl_internal_get__videoCapturer() ;

constexpr float_t const& __cordl_internal_get__videoTime() const;

constexpr float_t& __cordl_internal_get__videoTime() ;

constexpr void __cordl_internal_set__audioMixer(::Liv::Lck::ILckAudioMixer*  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__encoder(::Liv::Lck::Encoding::ILckEncoder*  value) ;

constexpr void __cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value) ;

constexpr void __cordl_internal_set__outputConfigurer(::Liv::Lck::ILckOutputConfigurer*  value) ;

constexpr void __cordl_internal_set__pausedForTime(float_t  value) ;

constexpr void __cordl_internal_set__prevVideoTime(float_t  value) ;

constexpr void __cordl_internal_set__telemetryClient(::Liv::Lck::Telemetry::ILckTelemetryClient*  value) ;

constexpr void __cordl_internal_set__videoCapturer(::Liv::Lck::ILckVideoCapturer*  value) ;

constexpr void __cordl_internal_set__videoTime(float_t  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9ced0c8, size 0x1a8, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckAudioMixer*  audioMixer, ::Liv::Lck::ILckVideoCapturer*  videoCapturer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient) ;

/// @brief Convert to "::Liv::Lck::ILckEarlyUpdate"
constexpr ::Liv::Lck::ILckEarlyUpdate* i___Liv__Lck__ILckEarlyUpdate() noexcept;

/// @brief Convert to "::Liv::Lck::ILckEncodeLooper"
constexpr ::Liv::Lck::ILckEncodeLooper* i___Liv__Lck__ILckEncodeLooper() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckEncodeLooper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEncodeLooper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEncodeLooper(LckEncodeLooper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEncodeLooper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEncodeLooper(LckEncodeLooper const& ) = delete;

/// @brief Field EncodingWarmupCoroutineName offset 0xffffffff size 0x8
static constexpr ::ConstString  EncodingWarmupCoroutineName{u"LckEncodeLooper:StartEncodingAfterWarmupFrames"};

/// @brief Field EncodingWarmupFrames offset 0xffffffff size 0x4
static constexpr int32_t  EncodingWarmupFrames{static_cast<int32_t>(0x3)};

/// @brief Field MinVideoTimeIncrement offset 0xffffffff size 0x4
static constexpr float_t  MinVideoTimeIncrement{static_cast<float_t>(0.001f)};

/// @brief Field TrackTimestampDifferenceTolerance offset 0xffffffff size 0x4
static constexpr float_t  TrackTimestampDifferenceTolerance{static_cast<float_t>(0.3f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24770};

/// @brief Field _encoder, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::Encoding::ILckEncoder*  ____encoder;

/// @brief Field _outputConfigurer, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::ILckOutputConfigurer*  ____outputConfigurer;

/// @brief Field _audioMixer, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckAudioMixer*  ____audioMixer;

/// @brief Field _videoCapturer, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::ILckVideoCapturer*  ____videoCapturer;

/// @brief Field _eventBus, offset: 0x30, size: 0x8, def value: None
 ::Liv::Lck::ILckEventBus*  ____eventBus;

/// @brief Field _telemetryClient, offset: 0x38, size: 0x8, def value: None
 ::Liv::Lck::Telemetry::ILckTelemetryClient*  ____telemetryClient;

/// @brief Field _pausedForTime, offset: 0x40, size: 0x4, def value: None
 float_t  ____pausedForTime;

/// @brief Field _videoTime, offset: 0x44, size: 0x4, def value: None
 float_t  ____videoTime;

/// @brief Field _prevVideoTime, offset: 0x48, size: 0x4, def value: None
 float_t  ____prevVideoTime;

/// @brief Field _disposed, offset: 0x4c, size: 0x1, def value: None
 bool  ____disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckEncodeLooper, ____encoder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckEncodeLooper, ____outputConfigurer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckEncodeLooper, ____audioMixer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckEncodeLooper, ____videoCapturer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckEncodeLooper, ____eventBus) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckEncodeLooper, ____telemetryClient) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckEncodeLooper, ____pausedForTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckEncodeLooper, ____videoTime) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckEncodeLooper, ____prevVideoTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckEncodeLooper, ____disposed) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckEncodeLooper) == 0x50, "Size mismatch!");

} // namespace end def Liv::Lck
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckEncodeLooper/<StartEncodingAfterWarmupFrames>d__21
class CORDL_TYPE LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Liv::Lck::LckEncodeLooper*  __4__this;

/// @brief Field warmupFrameCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_warmupFrameCount, put=__cordl_internal_set_warmupFrameCount)) int32_t  warmupFrameCount;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9cee020, size 0x194, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9cee1b4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9cee1bc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9cee1f4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9cee01c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Liv::Lck::LckEncodeLooper* const& __cordl_internal_get___4__this() const;

constexpr ::Liv::Lck::LckEncodeLooper*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_warmupFrameCount() const;

constexpr int32_t& __cordl_internal_get_warmupFrameCount() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Liv::Lck::LckEncodeLooper*  value) ;

constexpr void __cordl_internal_set_warmupFrameCount(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9ceded0, size 0x28, virtual false, abstract: false, final false
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
constexpr LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21(LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21(LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24769};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::LckEncodeLooper*  _____4__this;

/// @brief Field warmupFrameCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ___warmupFrameCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21, ___warmupFrameCount) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21) == 0x30, "Size mismatch!");

} // namespace end def Liv::Lck
