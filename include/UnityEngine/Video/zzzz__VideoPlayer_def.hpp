#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoPlayer)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Video {
class VideoClip;
}
namespace UnityEngine::Video {
class VideoPlayer_ErrorEventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_EventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_FrameReadyEventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_TimeEventHandler;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace UnityEngine::Video {
class VideoPlayer;
}
namespace UnityEngine::Video {
class VideoPlayer_ErrorEventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_EventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_FrameReadyEventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_TimeEventHandler;
}
// Write type traits
MARK_REF_T(::UnityEngine::Video::VideoPlayer*);
MARK_REF_T(::UnityEngine::Video::VideoPlayer_ErrorEventHandler*);
MARK_REF_T(::UnityEngine::Video::VideoPlayer_EventHandler*);
MARK_REF_T(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*);
MARK_REF_T(::UnityEngine::Video::VideoPlayer_TimeEventHandler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Video::VideoPlayer*, "UnityEngine.Video", "VideoPlayer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Video::VideoPlayer_ErrorEventHandler*, "UnityEngine.Video", "VideoPlayer/ErrorEventHandler");
DEFINE_IL2CPP_CLASS(::UnityEngine::Video::VideoPlayer_EventHandler*, "UnityEngine.Video", "VideoPlayer/EventHandler");
DEFINE_IL2CPP_CLASS(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*, "UnityEngine.Video", "VideoPlayer/FrameReadyEventHandler");
DEFINE_IL2CPP_CLASS(::UnityEngine::Video::VideoPlayer_TimeEventHandler*, "UnityEngine.Video", "VideoPlayer/TimeEventHandler");
// [RequireComponent(typeof(UnityEngine.Transform))]
// [NativeHeader("Modules/Video/Public/VideoPlayer.h")]
// [RequiredByNativeCode]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer
class CORDL_TYPE VideoPlayer : public ::UnityEngine::Behaviour {
public:
// Declarations
using ErrorEventHandler = ::UnityEngine::Video::VideoPlayer_ErrorEventHandler;

using EventHandler = ::UnityEngine::Video::VideoPlayer_EventHandler;

using FrameReadyEventHandler = ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler;

using TimeEventHandler = ::UnityEngine::Video::VideoPlayer_TimeEventHandler;

/// @brief [NativeName("VideoClip")]
 __declspec(property(get=get_clip, put=set_clip)) ::UnityW<::UnityEngine::Video::VideoClip>  clip;

/// @brief Field clockResyncOccurred, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_clockResyncOccurred, put=__cordl_internal_set_clockResyncOccurred)) ::UnityEngine::Video::VideoPlayer_TimeEventHandler*  clockResyncOccurred;

/// @brief Field errorReceived, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorReceived, put=__cordl_internal_set_errorReceived)) ::UnityEngine::Video::VideoPlayer_ErrorEventHandler*  errorReceived;

/// @brief Field frameDropped, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_frameDropped, put=__cordl_internal_set_frameDropped)) ::UnityEngine::Video::VideoPlayer_EventHandler*  frameDropped;

/// @brief Field frameReady, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_frameReady, put=__cordl_internal_set_frameReady)) ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*  frameReady;

 __declspec(property(get=get_isPlaying)) bool  isPlaying;

 __declspec(property(get=get_isPrepared)) bool  isPrepared;

/// @brief [NativeName("Duration")]
 __declspec(property(get=get_length)) double_t  length;

/// @brief Field loopPointReached, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopPointReached, put=__cordl_internal_set_loopPointReached)) ::UnityEngine::Video::VideoPlayer_EventHandler*  loopPointReached;

/// @brief Field prepareCompleted, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_prepareCompleted, put=__cordl_internal_set_prepareCompleted)) ::UnityEngine::Video::VideoPlayer_EventHandler*  prepareCompleted;

/// @brief Field seekCompleted, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_seekCompleted, put=__cordl_internal_set_seekCompleted)) ::UnityEngine::Video::VideoPlayer_EventHandler*  seekCompleted;

/// @brief Field started, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_started, put=__cordl_internal_set_started)) ::UnityEngine::Video::VideoPlayer_EventHandler*  started;

/// @brief [NativeName("SecPosition")]
 __declspec(property(put=set_time)) double_t  time;

/// @brief [NativeName("VideoUrl")]
 __declspec(property(put=set_url)) ::StringW  url;

/// [RequiredByNativeCode]
/// @brief Method InvokeClockResyncOccurredCallback_Internal, addr 0xb931cb4, size 0x2c, virtual false, abstract: false, final false
static inline void InvokeClockResyncOccurredCallback_Internal(::UnityEngine::Video::VideoPlayer*  source, double_t  seconds) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeErrorReceivedCallback_Internal, addr 0xb931c54, size 0x34, virtual false, abstract: false, final false
static inline void InvokeErrorReceivedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source, ::StringW  errorStr) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeFrameDroppedCallback_Internal, addr 0xb931c28, size 0x2c, virtual false, abstract: false, final false
static inline void InvokeFrameDroppedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeFrameReadyCallback_Internal, addr 0xb931b9c, size 0x34, virtual false, abstract: false, final false
static inline void InvokeFrameReadyCallback_Internal(::UnityEngine::Video::VideoPlayer*  source, int64_t  frameIdx) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeLoopPointReachedCallback_Internal, addr 0xb931bd0, size 0x2c, virtual false, abstract: false, final false
static inline void InvokeLoopPointReachedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source) ;

/// [RequiredByNativeCode]
/// @brief Method InvokePrepareCompletedCallback_Internal, addr 0xb931b70, size 0x2c, virtual false, abstract: false, final false
static inline void InvokePrepareCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeSeekCompletedCallback_Internal, addr 0xb931c88, size 0x2c, virtual false, abstract: false, final false
static inline void InvokeSeekCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeStartedCallback_Internal, addr 0xb931bfc, size 0x2c, virtual false, abstract: false, final false
static inline void InvokeStartedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source) ;

static inline ::UnityEngine::Video::VideoPlayer* New_ctor() ;

/// @brief Method Pause, addr 0xb931584, size 0x78, virtual false, abstract: false, final false
inline void Pause() ;

/// @brief Method Pause_Injected, addr 0xb9315fc, size 0x3c, virtual false, abstract: false, final false
static inline void Pause_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Play, addr 0xb9314d0, size 0x78, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Play_Injected, addr 0xb931548, size 0x3c, virtual false, abstract: false, final false
static inline void Play_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Prepare, addr 0xb931368, size 0x78, virtual false, abstract: false, final false
inline void Prepare() ;

/// @brief Method Prepare_Injected, addr 0xb9313e0, size 0x3c, virtual false, abstract: false, final false
static inline void Prepare_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method SetTargetAudioSource, addr 0xb931928, size 0xbc, virtual false, abstract: false, final false
inline void SetTargetAudioSource(uint16_t  trackIndex, ::UnityEngine::AudioSource*  source) ;

/// @brief Method SetTargetAudioSource_Injected, addr 0xb9319e4, size 0x54, virtual false, abstract: false, final false
static inline void SetTargetAudioSource_Injected(::System::IntPtr  _unity_self, uint16_t  trackIndex, ::System::IntPtr  source) ;

/// @brief Method Stop, addr 0xb931638, size 0x78, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Stop_Injected, addr 0xb9316b0, size 0x3c, virtual false, abstract: false, final false
static inline void Stop_Injected(::System::IntPtr  _unity_self) ;

constexpr ::UnityEngine::Video::VideoPlayer_TimeEventHandler* const& __cordl_internal_get_clockResyncOccurred() const;

constexpr ::UnityEngine::Video::VideoPlayer_TimeEventHandler*& __cordl_internal_get_clockResyncOccurred() ;

constexpr ::UnityEngine::Video::VideoPlayer_ErrorEventHandler* const& __cordl_internal_get_errorReceived() const;

constexpr ::UnityEngine::Video::VideoPlayer_ErrorEventHandler*& __cordl_internal_get_errorReceived() ;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_frameDropped() const;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_frameDropped() ;

constexpr ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* const& __cordl_internal_get_frameReady() const;

constexpr ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*& __cordl_internal_get_frameReady() ;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_loopPointReached() const;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_loopPointReached() ;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_prepareCompleted() const;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_prepareCompleted() ;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_seekCompleted() const;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_seekCompleted() ;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_started() const;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_started() ;

constexpr void __cordl_internal_set_clockResyncOccurred(::UnityEngine::Video::VideoPlayer_TimeEventHandler*  value) ;

constexpr void __cordl_internal_set_errorReceived(::UnityEngine::Video::VideoPlayer_ErrorEventHandler*  value) ;

constexpr void __cordl_internal_set_frameDropped(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

constexpr void __cordl_internal_set_frameReady(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*  value) ;

constexpr void __cordl_internal_set_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

constexpr void __cordl_internal_set_prepareCompleted(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

constexpr void __cordl_internal_set_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

constexpr void __cordl_internal_set_started(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

/// @brief Method .ctor, addr 0xb931ce0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_loopPointReached, addr 0xb931a38, size 0x9c, virtual false, abstract: false, final false
inline void add_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

/// @brief Method get_clip, addr 0xb9311a0, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Video::VideoClip> get_clip() ;

/// @brief Method get_clip_Injected, addr 0xb931234, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_clip_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("IsPlaying")]
/// @brief Method get_isPlaying, addr 0xb9316ec, size 0x78, virtual false, abstract: false, final false
inline bool get_isPlaying() ;

/// @brief Method get_isPlaying_Injected, addr 0xb931764, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isPlaying_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("IsPrepared")]
/// @brief Method get_isPrepared, addr 0xb93141c, size 0x78, virtual false, abstract: false, final false
inline bool get_isPrepared() ;

/// @brief Method get_isPrepared_Injected, addr 0xb931494, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isPrepared_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_length, addr 0xb931874, size 0x78, virtual false, abstract: false, final false
inline double_t get_length() ;

/// @brief Method get_length_Injected, addr 0xb9318ec, size 0x3c, virtual false, abstract: false, final false
static inline double_t get_length_Injected(::System::IntPtr  _unity_self) ;

/// [CompilerGenerated]
/// @brief Method remove_loopPointReached, addr 0xb931ad4, size 0x9c, virtual false, abstract: false, final false
inline void remove_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

/// @brief Method set_clip, addr 0xb931270, size 0xb4, virtual false, abstract: false, final false
inline void set_clip(::UnityEngine::Video::VideoClip*  value) ;

/// @brief Method set_clip_Injected, addr 0xb931324, size 0x44, virtual false, abstract: false, final false
static inline void set_clip_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_time, addr 0xb9317a0, size 0x88, virtual false, abstract: false, final false
inline void set_time(double_t  value) ;

/// @brief Method set_time_Injected, addr 0xb931828, size 0x4c, virtual false, abstract: false, final false
static inline void set_time_Injected(::System::IntPtr  _unity_self, double_t  value) ;

/// @brief Method set_url, addr 0xb930fc0, size 0x19c, virtual false, abstract: false, final false
inline void set_url(::StringW  value) ;

/// @brief Method set_url_Injected, addr 0xb93115c, size 0x44, virtual false, abstract: false, final false
static inline void set_url_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoPlayer(VideoPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoPlayer(VideoPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32708};

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field prepareCompleted, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_EventHandler*  ___prepareCompleted;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field loopPointReached, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_EventHandler*  ___loopPointReached;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field started, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_EventHandler*  ___started;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field frameDropped, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_EventHandler*  ___frameDropped;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field errorReceived, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_ErrorEventHandler*  ___errorReceived;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field seekCompleted, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_EventHandler*  ___seekCompleted;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field clockResyncOccurred, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_TimeEventHandler*  ___clockResyncOccurred;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field frameReady, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*  ___frameReady;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___prepareCompleted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___loopPointReached) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___started) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___frameDropped) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___errorReceived) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___seekCompleted) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___clockResyncOccurred) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___frameReady) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Video::VideoPlayer) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::Video
// Dependencies System.MulticastDelegate
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer/TimeEventHandler
class CORDL_TYPE VideoPlayer_TimeEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb931ff0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Video::VideoPlayer*  source, double_t  seconds) ;

static inline ::UnityEngine::Video::VideoPlayer_TimeEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb931f3c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoPlayer_TimeEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_TimeEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoPlayer_TimeEventHandler(VideoPlayer_TimeEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_TimeEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoPlayer_TimeEventHandler(VideoPlayer_TimeEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32707};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Video::VideoPlayer_TimeEventHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Video
// Dependencies System.MulticastDelegate
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
class CORDL_TYPE VideoPlayer_FrameReadyEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb931f28, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Video::VideoPlayer*  source, int64_t  frameIdx) ;

static inline ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb931e74, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoPlayer_FrameReadyEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_FrameReadyEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoPlayer_FrameReadyEventHandler(VideoPlayer_FrameReadyEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_FrameReadyEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoPlayer_FrameReadyEventHandler(VideoPlayer_FrameReadyEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32706};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Video
// Dependencies System.MulticastDelegate
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer/ErrorEventHandler
class CORDL_TYPE VideoPlayer_ErrorEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb931e60, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Video::VideoPlayer*  source, ::StringW  message) ;

static inline ::UnityEngine::Video::VideoPlayer_ErrorEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb931dac, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoPlayer_ErrorEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_ErrorEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoPlayer_ErrorEventHandler(VideoPlayer_ErrorEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_ErrorEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoPlayer_ErrorEventHandler(VideoPlayer_ErrorEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32705};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Video::VideoPlayer_ErrorEventHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Video
// Dependencies System.MulticastDelegate
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer/EventHandler
class CORDL_TYPE VideoPlayer_EventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb931d98, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Video::VideoPlayer*  source) ;

static inline ::UnityEngine::Video::VideoPlayer_EventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb931ce8, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoPlayer_EventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_EventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoPlayer_EventHandler(VideoPlayer_EventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_EventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoPlayer_EventHandler(VideoPlayer_EventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32704};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Video::VideoPlayer_EventHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Video
