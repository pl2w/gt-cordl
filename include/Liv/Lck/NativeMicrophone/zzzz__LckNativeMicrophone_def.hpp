#pragma once
// IWYU pragma private; include "Liv/Lck/NativeMicrophone/LckNativeMicrophone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckNativeMicrophone)
namespace GlobalNamespace {
struct LckNativeMicrophone_ReturnCode;
}
namespace GlobalNamespace {
struct LckNativeMicrophone__SetMicrophoneCaptureActive_d__26;
}
namespace Liv::Lck::Collections {
class AudioBuffer;
}
namespace Liv::Lck::NativeMicrophone {
class LckNativeMicrophone_AudioDataCallbackDelegate;
}
namespace Liv::Lck::NativeMicrophone {
struct LogLevel;
}
namespace Liv::Lck {
class ILckAudioSource_AudioDataCallbackDelegate;
}
namespace Liv::Lck {
class ILckAudioSource;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Liv::Lck::NativeMicrophone {
class LckNativeMicrophone;
}
namespace Liv::Lck::NativeMicrophone {
class LckNativeMicrophone_AudioDataCallbackDelegate;
}
// Write type traits
MARK_REF_T(::Liv::Lck::NativeMicrophone::LckNativeMicrophone*);
MARK_REF_T(::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::NativeMicrophone::LckNativeMicrophone*, "Liv.Lck.NativeMicrophone", "LckNativeMicrophone");
DEFINE_IL2CPP_CLASS(::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*, "Liv.Lck.NativeMicrophone", "LckNativeMicrophone/AudioDataCallbackDelegate");
// Dependencies System.IntPtr, System.Object
namespace Liv::Lck::NativeMicrophone {
// Is value type: false
// CS Name: Liv.Lck.NativeMicrophone.LckNativeMicrophone
class CORDL_TYPE LckNativeMicrophone : public ::System::Object {
public:
// Declarations
using ReturnCode = ::GlobalNamespace::LckNativeMicrophone_ReturnCode;

using _SetMicrophoneCaptureActive_d__26 = ::GlobalNamespace::LckNativeMicrophone__SetMicrophoneCaptureActive_d__26;

using AudioDataCallbackDelegate = ::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate;

/// @brief Field _audioBuffer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioBuffer, put=__cordl_internal_set__audioBuffer)) ::Liv::Lck::Collections::AudioBuffer*  _audioBuffer;

/// @brief Field _callback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__callback, put=__cordl_internal_set__callback)) ::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*  _callback;

/// @brief Field _callbackPtr, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__callbackPtr, put=__cordl_internal_set__callbackPtr)) ::System::IntPtr  _callbackPtr;

/// @brief Field _instances, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instances, put=setStaticF__instances)) ::System::Collections::Generic::Dictionary_2<uint64_t,::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>*  _instances;

/// @brief Field _isCapturing, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isCapturing, put=__cordl_internal_set__isCapturing)) bool  _isCapturing;

/// @brief Field _nativeInstance, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__nativeInstance, put=__cordl_internal_set__nativeInstance)) uint64_t  _nativeInstance;

/// @brief Field _setMicStateTask, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__setMicStateTask, put=__cordl_internal_set__setMicStateTask)) ::System::Threading::Tasks::Task*  _setMicStateTask;

/// @brief Field _shouldDisableCapture, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldDisableCapture, put=__cordl_internal_set__shouldDisableCapture)) bool  _shouldDisableCapture;

/// @brief Field _shouldEnableCapture, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldEnableCapture, put=__cordl_internal_set__shouldEnableCapture)) bool  _shouldEnableCapture;

/// @brief Convert operator to "::Liv::Lck::ILckAudioSource"
constexpr operator  ::Liv::Lck::ILckAudioSource*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// [MonoPInvokeCallback(typeof(Liv.Lck.NativeMicrophone.LckNativeMicrophone::AudioDataCallbackDelegate))]
/// @brief Method AudioDataCallback, addr 0x9d6dfa0, size 0x3fc, virtual false, abstract: false, final false
static inline void AudioDataCallback(::System::IntPtr  dataPtr, int32_t  length, uint64_t  audioCaptureKey) ;

/// @brief Method DisableCapture, addr 0x9d6ec24, size 0xcc, virtual true, abstract: false, final true
inline void DisableCapture() ;

/// @brief Method Dispose, addr 0x9d6ea18, size 0x98, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EnableCapture, addr 0x9d6eb58, size 0xcc, virtual true, abstract: false, final true
inline void EnableCapture() ;

/// @brief Method GetAudioData, addr 0x9d6eab8, size 0xa0, virtual true, abstract: false, final true
inline void GetAudioData(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*  callback) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)2)]
/// @brief Method InitMicrophone, addr 0x9d6e934, size 0xe4, virtual false, abstract: false, final false
static inline void InitMicrophone() ;

/// @brief Method IsCapturing, addr 0x9d6eab0, size 0x8, virtual true, abstract: false, final true
inline bool IsCapturing() ;

static inline ::Liv::Lck::NativeMicrophone::LckNativeMicrophone* New_ctor(int32_t  sampleRate) ;

/// @brief Method SetMaxLogLevel, addr 0x9d6e840, size 0x54, virtual false, abstract: false, final false
static inline void SetMaxLogLevel(::Liv::Lck::NativeMicrophone::LogLevel  logLevel) ;

/// [AsyncStateMachine(typeof(Liv.Lck.NativeMicrophone.LckNativeMicrophone::<SetMicrophoneCaptureActive>d__26))]
/// @brief Method SetMicrophoneCaptureActive, addr 0x9d6ecf0, size 0xf0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SetMicrophoneCaptureActive(bool  active) ;

/// [CompilerGenerated]
/// @brief Method <DisableCapture>b__25_0, addr 0x9d6ee80, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _DisableCapture_b__25_0() ;

/// [CompilerGenerated]
/// @brief Method <EnableCapture>b__24_0, addr 0x9d6ee78, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _EnableCapture_b__24_0() ;

constexpr ::Liv::Lck::Collections::AudioBuffer* const& __cordl_internal_get__audioBuffer() const;

constexpr ::Liv::Lck::Collections::AudioBuffer*& __cordl_internal_get__audioBuffer() ;

constexpr ::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate* const& __cordl_internal_get__callback() const;

constexpr ::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*& __cordl_internal_get__callback() ;

constexpr ::System::IntPtr const& __cordl_internal_get__callbackPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get__callbackPtr() ;

constexpr bool const& __cordl_internal_get__isCapturing() const;

constexpr bool& __cordl_internal_get__isCapturing() ;

constexpr uint64_t const& __cordl_internal_get__nativeInstance() const;

constexpr uint64_t& __cordl_internal_get__nativeInstance() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__setMicStateTask() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__setMicStateTask() ;

constexpr bool const& __cordl_internal_get__shouldDisableCapture() const;

constexpr bool& __cordl_internal_get__shouldDisableCapture() ;

constexpr bool const& __cordl_internal_get__shouldEnableCapture() const;

constexpr bool& __cordl_internal_get__shouldEnableCapture() ;

constexpr void __cordl_internal_set__audioBuffer(::Liv::Lck::Collections::AudioBuffer*  value) ;

constexpr void __cordl_internal_set__callback(::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*  value) ;

constexpr void __cordl_internal_set__callbackPtr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set__isCapturing(bool  value) ;

constexpr void __cordl_internal_set__nativeInstance(uint64_t  value) ;

constexpr void __cordl_internal_set__setMicStateTask(::System::Threading::Tasks::Task*  value) ;

constexpr void __cordl_internal_set__shouldDisableCapture(bool  value) ;

constexpr void __cordl_internal_set__shouldEnableCapture(bool  value) ;

/// @brief Method .ctor, addr 0x9d6e688, size 0x1b8, virtual false, abstract: false, final false
inline void _ctor(int32_t  sampleRate) ;

static inline ::System::Collections::Generic::Dictionary_2<uint64_t,::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>* getStaticF__instances() ;

/// @brief Convert to "::Liv::Lck::ILckAudioSource"
constexpr ::Liv::Lck::ILckAudioSource* i___Liv__Lck__ILckAudioSource() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method microphone_capture_free, addr 0x9d6e418, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::LckNativeMicrophone_ReturnCode microphone_capture_free(uint64_t  audioCaptureKey) ;

/// @brief Method microphone_capture_get_audio, addr 0x9d6e58c, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::LckNativeMicrophone_ReturnCode microphone_capture_get_audio(uint64_t  audioCaptureKey, ::System::IntPtr  callback) ;

/// @brief Method microphone_capture_new, addr 0x9d6e39c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t microphone_capture_new(uint32_t  sampleRate) ;

/// @brief Method microphone_capture_start, addr 0x9d6e494, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::LckNativeMicrophone_ReturnCode microphone_capture_start(uint64_t  audioCaptureKey) ;

/// @brief Method microphone_capture_stop, addr 0x9d6e510, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::LckNativeMicrophone_ReturnCode microphone_capture_stop(uint64_t  audioCaptureKey) ;

static inline void setStaticF__instances(::System::Collections::Generic::Dictionary_2<uint64_t,::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>*  value) ;

/// @brief Method set_max_log_level, addr 0x9d6e610, size 0x78, virtual false, abstract: false, final false
static inline void set_max_log_level(::Liv::Lck::NativeMicrophone::LogLevel  levelFilter) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckNativeMicrophone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckNativeMicrophone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckNativeMicrophone(LckNativeMicrophone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckNativeMicrophone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckNativeMicrophone(LckNativeMicrophone const& ) = delete;

/// @brief Field __DllName offset 0xffffffff size 0x8
static constexpr ::ConstString  __DllName{u"native_microphone"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25008};

/// @brief Field _nativeInstance, offset: 0x10, size: 0x8, def value: None
 uint64_t  ____nativeInstance;

/// @brief Field _callback, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*  ____callback;

/// @brief Field _audioBuffer, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::Collections::AudioBuffer*  ____audioBuffer;

/// @brief Field _callbackPtr, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  ____callbackPtr;

/// @brief Field _isCapturing, offset: 0x30, size: 0x1, def value: None
 bool  ____isCapturing;

/// @brief Field _shouldDisableCapture, offset: 0x31, size: 0x1, def value: None
 bool  ____shouldDisableCapture;

/// @brief Field _shouldEnableCapture, offset: 0x32, size: 0x1, def value: None
 bool  ____shouldEnableCapture;

/// @brief Field _setMicStateTask, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ____setMicStateTask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::NativeMicrophone::LckNativeMicrophone, ____nativeInstance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::NativeMicrophone::LckNativeMicrophone, ____callback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::NativeMicrophone::LckNativeMicrophone, ____audioBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::NativeMicrophone::LckNativeMicrophone, ____callbackPtr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::NativeMicrophone::LckNativeMicrophone, ____isCapturing) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::NativeMicrophone::LckNativeMicrophone, ____shouldDisableCapture) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::NativeMicrophone::LckNativeMicrophone, ____shouldEnableCapture) == 0x32, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::NativeMicrophone::LckNativeMicrophone, ____setMicStateTask) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::NativeMicrophone::LckNativeMicrophone) == 0x40, "Size mismatch!");

} // namespace end def Liv::Lck::NativeMicrophone
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Liv::Lck::NativeMicrophone {
// Is value type: false
// CS Name: Liv.Lck.NativeMicrophone.LckNativeMicrophone/AudioDataCallbackDelegate
class CORDL_TYPE LckNativeMicrophone_AudioDataCallbackDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d6ee9c, size 0x94, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  dataPtr, int32_t  length, uint64_t  audioCaptureKey, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d6ef30, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d6ee88, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  dataPtr, int32_t  length, uint64_t  audioCaptureKey) ;

static inline ::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d6e894, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckNativeMicrophone_AudioDataCallbackDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckNativeMicrophone_AudioDataCallbackDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckNativeMicrophone_AudioDataCallbackDelegate(LckNativeMicrophone_AudioDataCallbackDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckNativeMicrophone_AudioDataCallbackDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckNativeMicrophone_AudioDataCallbackDelegate(LckNativeMicrophone_AudioDataCallbackDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25006};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::NativeMicrophone
