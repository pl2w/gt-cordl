#pragma once
// IWYU pragma private; include "Liv/Lck/Echo/LckEcho.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Encoding/zzzz__LckEncodedPacketHandler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckEcho)
namespace GlobalNamespace {
class ILckCaptureStateProvider;
}
namespace GlobalNamespace {
struct LckEcho__DisableAsync_d__27;
}
namespace GlobalNamespace {
struct LckEcho__SetEnabledAsync_d__22;
}
namespace GlobalNamespace {
struct LckEvents_CaptureErrorEvent;
}
namespace GlobalNamespace {
struct LckEvents_EncoderStoppedEvent;
}
namespace GlobalNamespace {
struct LckEvents_LowStorageSpaceDetectedEvent;
}
namespace Liv::Lck::Echo {
class ILckEcho;
}
namespace Liv::Lck::Echo {
class LckEcho__CopyEchoToGalleryWhenReady_d__32;
}
namespace Liv::Lck::Echo {
class LckEcho___c__DisplayClass31_0;
}
namespace Liv::Lck::Echo {
class LckEcho___c__DisplayClass32_0;
}
namespace Liv::Lck::Echo {
class LckEcho___c__DisplayClass32_1;
}
namespace Liv::Lck::Echo {
class LckNativeEchoApi_EchoCompletionCallback;
}
namespace Liv::Lck::Encoding {
class ILckEncoder;
}
namespace Liv::Lck::Recorder {
struct MuxerConfig;
}
namespace Liv::Lck::Telemetry {
class ILckTelemetryClient;
}
namespace Liv::Lck {
class ILckEventBus;
}
namespace Liv::Lck {
class ILckOutputConfigurer;
}
namespace Liv::Lck {
class ILckStorageWatcher;
}
namespace Liv::Lck {
struct LckCaptureState;
}
namespace Liv::Lck {
template<typename T>
class LckResult_1;
}
namespace Liv::Lck {
class LckResult;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
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
namespace System {
struct TimeSpan;
}
namespace UnityEngine {
class WaitForSeconds;
}
// Forward declare root types
namespace Liv::Lck::Echo {
class LckEcho;
}
namespace Liv::Lck::Echo {
class LckEcho__CopyEchoToGalleryWhenReady_d__32;
}
namespace Liv::Lck::Echo {
class LckEcho___c__DisplayClass31_0;
}
namespace Liv::Lck::Echo {
class LckEcho___c__DisplayClass32_0;
}
namespace Liv::Lck::Echo {
class LckEcho___c__DisplayClass32_1;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Echo::LckEcho*);
MARK_REF_T(::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32*);
MARK_REF_T(::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0*);
MARK_REF_T(::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*);
MARK_REF_T(::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Echo::LckEcho*, "Liv.Lck.Echo", "LckEcho");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32*, "Liv.Lck.Echo", "LckEcho/<CopyEchoToGalleryWhenReady>d__32");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0*, "Liv.Lck.Echo", "LckEcho/<>c__DisplayClass31_0");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*, "Liv.Lck.Echo", "LckEcho/<>c__DisplayClass32_0");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1*, "Liv.Lck.Echo", "LckEcho/<>c__DisplayClass32_1");
// Dependencies Liv.Lck.Encoding.LckEncodedPacketHandler, System.IntPtr, System.Object, System.TimeSpan
namespace Liv::Lck::Echo {
// Is value type: false
// CS Name: Liv.Lck.Echo.LckEcho
class CORDL_TYPE LckEcho : public ::System::Object {
public:
// Declarations
using _DisableAsync_d__27 = ::GlobalNamespace::LckEcho__DisableAsync_d__27;

using _SetEnabledAsync_d__22 = ::GlobalNamespace::LckEcho__SetEnabledAsync_d__22;

using _CopyEchoToGalleryWhenReady_d__32 = ::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32;

using __c__DisplayClass31_0 = ::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0;

using __c__DisplayClass32_0 = ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0;

using __c__DisplayClass32_1 = ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1;

 __declspec(property(get=get_CurrentCaptureState)) ::Liv::Lck::LckCaptureState  CurrentCaptureState;

 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

 __declspec(property(get=get_IsSaving)) bool  IsSaving;

/// @brief Field _activeInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__activeInstance, put=setStaticF__activeInstance)) ::Liv::Lck::Echo::LckEcho*  _activeInstance;

/// @brief Field _completionCallbackDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__completionCallbackDelegate, put=setStaticF__completionCallbackDelegate)) ::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*  _completionCallbackDelegate;

/// @brief Field _copyEchoSpinWait, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__copyEchoSpinWait, put=__cordl_internal_set__copyEchoSpinWait)) ::UnityEngine::WaitForSeconds*  _copyEchoSpinWait;

/// @brief Field _disposed, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _echoContext, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__echoContext, put=__cordl_internal_set__echoContext)) ::System::IntPtr  _echoContext;

/// @brief Field _echoPacketHandler, offset 0x40, size 0x18 
 __declspec(property(get=__cordl_internal_get__echoPacketHandler, put=__cordl_internal_set__echoPacketHandler)) ::Liv::Lck::Encoding::LckEncodedPacketHandler  _echoPacketHandler;

/// @brief Field _echoTelemetryContext, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__echoTelemetryContext, put=__cordl_internal_set__echoTelemetryContext)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _echoTelemetryContext;

/// @brief Field _encoder, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoder, put=__cordl_internal_set__encoder)) ::Liv::Lck::Encoding::ILckEncoder*  _encoder;

/// @brief Field _eventBus, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventBus, put=__cordl_internal_set__eventBus)) ::Liv::Lck::ILckEventBus*  _eventBus;

/// @brief Field _isSaving, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSaving, put=__cordl_internal_set__isSaving)) bool  _isSaving;

/// @brief Field _lastSaveDuration, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastSaveDuration, put=__cordl_internal_set__lastSaveDuration)) ::System::TimeSpan  _lastSaveDuration;

/// @brief Field _outputConfigurer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputConfigurer, put=__cordl_internal_set__outputConfigurer)) ::Liv::Lck::ILckOutputConfigurer*  _outputConfigurer;

/// @brief Field _storageWatcher, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__storageWatcher, put=__cordl_internal_set__storageWatcher)) ::Liv::Lck::ILckStorageWatcher*  _storageWatcher;

/// @brief Field _telemetryClient, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__telemetryClient, put=__cordl_internal_set__telemetryClient)) ::Liv::Lck::Telemetry::ILckTelemetryClient*  _telemetryClient;

/// @brief Convert operator to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr operator  ::GlobalNamespace::ILckCaptureStateProvider*() noexcept;

/// @brief Convert operator to "::Liv::Lck::Echo::ILckEcho"
constexpr operator  ::Liv::Lck::Echo::ILckEcho*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method BuildMuxerConfig, addr 0x9d489bc, size 0x308, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::MuxerConfig>* BuildMuxerConfig() ;

/// [IteratorStateMachine(typeof(Liv.Lck.Echo.LckEcho::<CopyEchoToGalleryWhenReady>d__32))]
/// @brief Method CopyEchoToGalleryWhenReady, addr 0x9d48e4c, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CopyEchoToGalleryWhenReady(::StringW  outputPath) ;

/// @brief Method DestroyEchoBuffer, addr 0x9d48e34, size 0x10, virtual false, abstract: false, final false
static inline void DestroyEchoBuffer(::System::IntPtr  echoContext) ;

/// @brief Method DestroyNativeContext, addr 0x9d48cc4, size 0x64, virtual false, abstract: false, final false
inline void DestroyNativeContext() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Echo.LckEcho::<DisableAsync>d__27))]
/// @brief Method DisableAsync, addr 0x9d48d28, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* DisableAsync() ;

/// @brief Method Dispose, addr 0x9d492f8, size 0x2e0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Enable, addr 0x9d481e0, size 0x7dc, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult* Enable() ;

/// @brief Method GetBufferDuration, addr 0x9d480c4, size 0xa4, virtual true, abstract: false, final true
inline ::System::TimeSpan GetBufferDuration() ;

/// @brief Method GetMaxBufferDuration, addr 0x9d48168, size 0x78, virtual true, abstract: false, final true
inline ::System::TimeSpan GetMaxBufferDuration() ;

/// @brief Method IsPaused, addr 0x9d47ca0, size 0x44, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<bool>* IsPaused() ;

/// @brief [Preserve]
static inline ::Liv::Lck::Echo::LckEcho* New_ctor(::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient, ::Liv::Lck::ILckStorageWatcher*  storageWatcher) ;

/// @brief Method OnCaptureError, addr 0x9d49150, size 0x1a8, virtual false, abstract: false, final false
inline void OnCaptureError(::GlobalNamespace::LckEvents_CaptureErrorEvent  captureErrorEvent) ;

/// @brief Method OnEncoderStopped, addr 0x9d49088, size 0xc8, virtual false, abstract: false, final false
inline void OnEncoderStopped(::GlobalNamespace::LckEvents_EncoderStoppedEvent  encoderStoppedEvent) ;

/// @brief Method OnLowStorageSpaceDetected, addr 0x9d48efc, size 0x18c, virtual false, abstract: false, final false
inline void OnLowStorageSpaceDetected(::GlobalNamespace::LckEvents_LowStorageSpaceDetectedEvent  lowStorageSpaceDetectedEvent) ;

/// [MonoPInvokeCallback(typeof(Liv.Lck.Echo.LckNativeEchoApi::EchoCompletionCallback))]
/// @brief Method OnNativeEchoCompleted, addr 0x9d47784, size 0x10c, virtual false, abstract: false, final false
static inline void OnNativeEchoCompleted(uint32_t  status, ::StringW  outputPath) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Echo.LckEcho::<SetEnabledAsync>d__22))]
/// @brief Method SetEnabledAsync, addr 0x9d47ce4, size 0x118, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* SetEnabledAsync(bool  enabled) ;

/// @brief Method TriggerSave, addr 0x9d47dfc, size 0x2c8, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* TriggerSave() ;

constexpr ::UnityEngine::WaitForSeconds* const& __cordl_internal_get__copyEchoSpinWait() const;

constexpr ::UnityEngine::WaitForSeconds*& __cordl_internal_get__copyEchoSpinWait() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr ::System::IntPtr const& __cordl_internal_get__echoContext() const;

constexpr ::System::IntPtr& __cordl_internal_get__echoContext() ;

constexpr ::Liv::Lck::Encoding::LckEncodedPacketHandler const& __cordl_internal_get__echoPacketHandler() const;

constexpr ::Liv::Lck::Encoding::LckEncodedPacketHandler& __cordl_internal_get__echoPacketHandler() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get__echoTelemetryContext() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& __cordl_internal_get__echoTelemetryContext() ;

constexpr ::Liv::Lck::Encoding::ILckEncoder* const& __cordl_internal_get__encoder() const;

constexpr ::Liv::Lck::Encoding::ILckEncoder*& __cordl_internal_get__encoder() ;

constexpr ::Liv::Lck::ILckEventBus* const& __cordl_internal_get__eventBus() const;

constexpr ::Liv::Lck::ILckEventBus*& __cordl_internal_get__eventBus() ;

constexpr bool const& __cordl_internal_get__isSaving() const;

constexpr bool& __cordl_internal_get__isSaving() ;

constexpr ::System::TimeSpan const& __cordl_internal_get__lastSaveDuration() const;

constexpr ::System::TimeSpan& __cordl_internal_get__lastSaveDuration() ;

constexpr ::Liv::Lck::ILckOutputConfigurer* const& __cordl_internal_get__outputConfigurer() const;

constexpr ::Liv::Lck::ILckOutputConfigurer*& __cordl_internal_get__outputConfigurer() ;

constexpr ::Liv::Lck::ILckStorageWatcher* const& __cordl_internal_get__storageWatcher() const;

constexpr ::Liv::Lck::ILckStorageWatcher*& __cordl_internal_get__storageWatcher() ;

constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient* const& __cordl_internal_get__telemetryClient() const;

constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient*& __cordl_internal_get__telemetryClient() ;

constexpr void __cordl_internal_set__copyEchoSpinWait(::UnityEngine::WaitForSeconds*  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__echoContext(::System::IntPtr  value) ;

constexpr void __cordl_internal_set__echoPacketHandler(::Liv::Lck::Encoding::LckEncodedPacketHandler  value) ;

constexpr void __cordl_internal_set__echoTelemetryContext(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

constexpr void __cordl_internal_set__encoder(::Liv::Lck::Encoding::ILckEncoder*  value) ;

constexpr void __cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value) ;

constexpr void __cordl_internal_set__isSaving(bool  value) ;

constexpr void __cordl_internal_set__lastSaveDuration(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set__outputConfigurer(::Liv::Lck::ILckOutputConfigurer*  value) ;

constexpr void __cordl_internal_set__storageWatcher(::Liv::Lck::ILckStorageWatcher*  value) ;

constexpr void __cordl_internal_set__telemetryClient(::Liv::Lck::Telemetry::ILckTelemetryClient*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9d478d4, size 0x3cc, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient, ::Liv::Lck::ILckStorageWatcher*  storageWatcher) ;

static inline ::Liv::Lck::Echo::LckEcho* getStaticF__activeInstance() ;

static inline ::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback* getStaticF__completionCallbackDelegate() ;

/// @brief Method get_CurrentCaptureState, addr 0x9d478ac, size 0x28, virtual true, abstract: false, final true
inline ::Liv::Lck::LckCaptureState get_CurrentCaptureState() ;

/// @brief Method get_IsEnabled, addr 0x9d47890, size 0x14, virtual true, abstract: false, final true
inline bool get_IsEnabled() ;

/// @brief Method get_IsSaving, addr 0x9d478a4, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSaving() ;

/// @brief Convert to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr ::GlobalNamespace::ILckCaptureStateProvider* i___GlobalNamespace__ILckCaptureStateProvider() noexcept;

/// @brief Convert to "::Liv::Lck::Echo::ILckEcho"
constexpr ::Liv::Lck::Echo::ILckEcho* i___Liv__Lck__Echo__ILckEcho() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF__activeInstance(::Liv::Lck::Echo::LckEcho*  value) ;

static inline void setStaticF__completionCallbackDelegate(::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckEcho() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEcho", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEcho(LckEcho && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEcho", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEcho(LckEcho const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24902};

/// @brief Field _encoder, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::Encoding::ILckEncoder*  ____encoder;

/// @brief Field _outputConfigurer, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::ILckOutputConfigurer*  ____outputConfigurer;

/// @brief Field _eventBus, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckEventBus*  ____eventBus;

/// @brief Field _telemetryClient, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::Telemetry::ILckTelemetryClient*  ____telemetryClient;

/// @brief Field _storageWatcher, offset: 0x30, size: 0x8, def value: None
 ::Liv::Lck::ILckStorageWatcher*  ____storageWatcher;

/// @brief Field _echoContext, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  ____echoContext;

/// @brief Field _echoPacketHandler, offset: 0x40, size: 0x18, def value: None
 ::Liv::Lck::Encoding::LckEncodedPacketHandler  ____echoPacketHandler;

/// @brief Field _isSaving, offset: 0x58, size: 0x1, def value: None
 bool  ____isSaving;

/// @brief Field _disposed, offset: 0x59, size: 0x1, def value: None
 bool  ____disposed;

/// @brief Field _lastSaveDuration, offset: 0x60, size: 0x8, def value: None
 ::System::TimeSpan  ____lastSaveDuration;

/// @brief Field _echoTelemetryContext, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ____echoTelemetryContext;

/// @brief Field _copyEchoSpinWait, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::WaitForSeconds*  ____copyEchoSpinWait;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Echo::LckEcho, ____encoder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho, ____outputConfigurer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho, ____eventBus) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho, ____telemetryClient) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho, ____storageWatcher) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho, ____echoContext) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho, ____echoPacketHandler) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho, ____isSaving) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho, ____disposed) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho, ____lastSaveDuration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho, ____echoTelemetryContext) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho, ____copyEchoSpinWait) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Echo::LckEcho) == 0x78, "Size mismatch!");

} // namespace end def Liv::Lck::Echo
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Echo {
// Is value type: false
// CS Name: Liv.Lck.Echo.LckEcho/<CopyEchoToGalleryWhenReady>d__32
class CORDL_TYPE LckEcho__CopyEchoToGalleryWhenReady_d__32 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Liv::Lck::Echo::LckEcho*  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*  __8__1;

/// @brief Field outputPath, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputPath, put=__cordl_internal_set_outputPath)) ::StringW  outputPath;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d49ffc, size 0x21c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d4a218, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d4a220, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d4a258, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d49ff8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Liv::Lck::Echo::LckEcho* const& __cordl_internal_get___4__this() const;

constexpr ::Liv::Lck::Echo::LckEcho*& __cordl_internal_get___4__this() ;

constexpr ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0* const& __cordl_internal_get___8__1() const;

constexpr ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*& __cordl_internal_get___8__1() ;

constexpr ::StringW const& __cordl_internal_get_outputPath() const;

constexpr ::StringW& __cordl_internal_get_outputPath() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Liv::Lck::Echo::LckEcho*  value) ;

constexpr void __cordl_internal_set___8__1(::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*  value) ;

constexpr void __cordl_internal_set_outputPath(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d48ed4, size 0x28, virtual false, abstract: false, final false
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
constexpr LckEcho__CopyEchoToGalleryWhenReady_d__32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEcho__CopyEchoToGalleryWhenReady_d__32", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEcho__CopyEchoToGalleryWhenReady_d__32(LckEcho__CopyEchoToGalleryWhenReady_d__32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEcho__CopyEchoToGalleryWhenReady_d__32", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEcho__CopyEchoToGalleryWhenReady_d__32(LckEcho__CopyEchoToGalleryWhenReady_d__32 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24899};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::Echo::LckEcho*  _____4__this;

/// @brief Field outputPath, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___outputPath;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32, ___outputPath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32, _____8__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32) == 0x38, "Size mismatch!");

} // namespace end def Liv::Lck::Echo
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Echo {
// Is value type: false
// CS Name: Liv.Lck.Echo.LckEcho/<>c__DisplayClass32_1
class CORDL_TYPE LckEcho___c__DisplayClass32_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*  CS$__8__locals1;

/// @brief Field path, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::StringW  path;

/// @brief Field success, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_success, put=__cordl_internal_set_success)) bool  success;

static inline ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1* New_ctor() ;

/// @brief Method <CopyEchoToGalleryWhenReady>b__2, addr 0x9d499dc, size 0x61c, virtual false, abstract: false, final false
inline void _CopyEchoToGalleryWhenReady_b__2() ;

constexpr ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::StringW const& __cordl_internal_get_path() const;

constexpr ::StringW& __cordl_internal_get_path() ;

constexpr bool const& __cordl_internal_get_success() const;

constexpr bool& __cordl_internal_get_success() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*  value) ;

constexpr void __cordl_internal_set_path(::StringW  value) ;

constexpr void __cordl_internal_set_success(bool  value) ;

/// @brief Method .ctor, addr 0x9d499bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckEcho___c__DisplayClass32_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEcho___c__DisplayClass32_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEcho___c__DisplayClass32_1(LckEcho___c__DisplayClass32_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEcho___c__DisplayClass32_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEcho___c__DisplayClass32_1(LckEcho___c__DisplayClass32_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24898};

/// @brief Field success, offset: 0x10, size: 0x1, def value: None
 bool  ___success;

/// @brief Field path, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___path;

/// @brief Field CS$<>8__locals1, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1, ___success) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1, ___path) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1, ___CS$__8__locals1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::Echo
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Echo {
// Is value type: false
// CS Name: Liv.Lck.Echo.LckEcho/<>c__DisplayClass32_0
class CORDL_TYPE LckEcho___c__DisplayClass32_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Liv::Lck::Echo::LckEcho*  __4__this;

/// @brief Field task, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::System::Threading::Tasks::Task*  task;

static inline ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0* New_ctor() ;

/// @brief Method <CopyEchoToGalleryWhenReady>b__0, addr 0x9d49898, size 0x124, virtual false, abstract: false, final false
inline void _CopyEchoToGalleryWhenReady_b__0(bool  success, ::StringW  path) ;

/// @brief Method <CopyEchoToGalleryWhenReady>b__1, addr 0x9d499c4, size 0x18, virtual false, abstract: false, final false
inline bool _CopyEchoToGalleryWhenReady_b__1() ;

constexpr ::Liv::Lck::Echo::LckEcho* const& __cordl_internal_get___4__this() const;

constexpr ::Liv::Lck::Echo::LckEcho*& __cordl_internal_get___4__this() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_task() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set___4__this(::Liv::Lck::Echo::LckEcho*  value) ;

constexpr void __cordl_internal_set_task(::System::Threading::Tasks::Task*  value) ;

/// @brief Method .ctor, addr 0x9d49890, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckEcho___c__DisplayClass32_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEcho___c__DisplayClass32_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEcho___c__DisplayClass32_0(LckEcho___c__DisplayClass32_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEcho___c__DisplayClass32_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEcho___c__DisplayClass32_0(LckEcho___c__DisplayClass32_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24897};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::Echo::LckEcho*  _____4__this;

/// @brief Field task, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ___task;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0, ___task) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Echo
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Echo {
// Is value type: false
// CS Name: Liv.Lck.Echo.LckEcho/<>c__DisplayClass31_0
class CORDL_TYPE LckEcho___c__DisplayClass31_0 : public ::System::Object {
public:
// Declarations
/// @brief Field outputPath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputPath, put=__cordl_internal_set_outputPath)) ::StringW  outputPath;

/// @brief Field status, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_status, put=__cordl_internal_set_status)) uint32_t  status;

static inline ::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0* New_ctor() ;

/// @brief Method <OnNativeEchoCompleted>b__0, addr 0x9d495d8, size 0x2b8, virtual false, abstract: false, final false
inline void _OnNativeEchoCompleted_b__0() ;

constexpr ::StringW const& __cordl_internal_get_outputPath() const;

constexpr ::StringW& __cordl_internal_get_outputPath() ;

constexpr uint32_t const& __cordl_internal_get_status() const;

constexpr uint32_t& __cordl_internal_get_status() ;

constexpr void __cordl_internal_set_outputPath(::StringW  value) ;

constexpr void __cordl_internal_set_status(uint32_t  value) ;

/// @brief Method .ctor, addr 0x9d48e44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckEcho___c__DisplayClass31_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEcho___c__DisplayClass31_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEcho___c__DisplayClass31_0(LckEcho___c__DisplayClass31_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEcho___c__DisplayClass31_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEcho___c__DisplayClass31_0(LckEcho___c__DisplayClass31_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24896};

/// @brief Field status, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___status;

/// @brief Field outputPath, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___outputPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0, ___status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0, ___outputPath) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Echo
