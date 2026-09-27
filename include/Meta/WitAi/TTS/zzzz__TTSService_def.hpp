#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/TTSService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Requests/zzzz__VoiceErrorSimulationType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TTSService)
namespace GlobalNamespace {
struct TTSService__DownloadAsync_d__68;
}
namespace GlobalNamespace {
struct TTSService__DownloadAsync_d__69;
}
namespace GlobalNamespace {
struct TTSService__LoadAsync_d__54;
}
namespace GlobalNamespace {
struct TTSService__PerformDownloadAndStream_d__55;
}
namespace GlobalNamespace {
struct TTSService__PerformStreamFromDisk_d__57;
}
namespace GlobalNamespace {
struct TTSService__PerformStreamFromWeb_d__56;
}
namespace GlobalNamespace {
struct TTSService__ShouldDownload_d__70;
}
namespace Meta::Voice::Audio {
class IAudioSystem;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::Voice::Logging {
struct VLoggerVerbosity;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::Requests {
struct VoiceErrorSimulationType;
}
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace Meta::WitAi::TTS::Data {
struct TTSClipLoadState;
}
namespace Meta::WitAi::TTS::Data {
class TTSDiskCacheSettings;
}
namespace Meta::WitAi::TTS::Data {
class TTSVoiceSettings;
}
namespace Meta::WitAi::TTS::Events {
class TTSServiceEvents;
}
namespace Meta::WitAi::TTS::Interfaces {
class ITTSDiskCacheHandler;
}
namespace Meta::WitAi::TTS::Interfaces {
class ITTSRuntimeCacheHandler;
}
namespace Meta::WitAi::TTS::Interfaces {
class ITTSVoiceProvider;
}
namespace Meta::WitAi::TTS::Interfaces {
class ITTSWebHandler;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass50_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass72_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass73_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass74_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass77_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass80_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass83_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass86_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass89_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass90_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass91_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass92_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass93_0;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::TTS {
class TTSService;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass50_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass72_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass73_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass74_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass77_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass80_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass83_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass86_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass89_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass90_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass91_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass92_0;
}
namespace Meta::WitAi::TTS {
class TTSService___c__DisplayClass93_0;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::TTSService*);
MARK_REF_T(::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0*);
MARK_REF_T(::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0*);
MARK_REF_T(::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0*);
MARK_REF_T(::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0*);
MARK_REF_T(::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0*);
MARK_REF_T(::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0*);
MARK_REF_T(::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0*);
MARK_REF_T(::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0*);
MARK_REF_T(::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0*);
MARK_REF_T(::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0*);
MARK_REF_T(::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0*);
MARK_REF_T(::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0*);
MARK_REF_T(::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::TTSService*, "Meta.WitAi.TTS", "TTSService");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0*, "Meta.WitAi.TTS", "TTSService/<>c__DisplayClass50_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0*, "Meta.WitAi.TTS", "TTSService/<>c__DisplayClass72_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0*, "Meta.WitAi.TTS", "TTSService/<>c__DisplayClass73_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0*, "Meta.WitAi.TTS", "TTSService/<>c__DisplayClass74_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0*, "Meta.WitAi.TTS", "TTSService/<>c__DisplayClass77_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0*, "Meta.WitAi.TTS", "TTSService/<>c__DisplayClass80_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0*, "Meta.WitAi.TTS", "TTSService/<>c__DisplayClass83_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0*, "Meta.WitAi.TTS", "TTSService/<>c__DisplayClass86_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0*, "Meta.WitAi.TTS", "TTSService/<>c__DisplayClass89_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0*, "Meta.WitAi.TTS", "TTSService/<>c__DisplayClass90_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0*, "Meta.WitAi.TTS", "TTSService/<>c__DisplayClass91_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0*, "Meta.WitAi.TTS", "TTSService/<>c__DisplayClass92_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0*, "Meta.WitAi.TTS", "TTSService/<>c__DisplayClass93_0");
// [LogCategory((Meta.Voice.Logging.LogCategory)8)]
// Dependencies Meta.WitAi.Requests.VoiceErrorSimulationType, UnityEngine.MonoBehaviour
namespace Meta::WitAi::TTS {
// Is value type: false
// CS Name: Meta.WitAi.TTS.TTSService
class CORDL_TYPE TTSService : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DownloadAsync_d__68 = ::GlobalNamespace::TTSService__DownloadAsync_d__68;

using _DownloadAsync_d__69 = ::GlobalNamespace::TTSService__DownloadAsync_d__69;

using _LoadAsync_d__54 = ::GlobalNamespace::TTSService__LoadAsync_d__54;

using _PerformDownloadAndStream_d__55 = ::GlobalNamespace::TTSService__PerformDownloadAndStream_d__55;

using _PerformStreamFromDisk_d__57 = ::GlobalNamespace::TTSService__PerformStreamFromDisk_d__57;

using _PerformStreamFromWeb_d__56 = ::GlobalNamespace::TTSService__PerformStreamFromWeb_d__56;

using _ShouldDownload_d__70 = ::GlobalNamespace::TTSService__ShouldDownload_d__70;

using __c__DisplayClass50_0 = ::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0;

using __c__DisplayClass72_0 = ::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0;

using __c__DisplayClass73_0 = ::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0;

using __c__DisplayClass74_0 = ::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0;

using __c__DisplayClass77_0 = ::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0;

using __c__DisplayClass80_0 = ::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0;

using __c__DisplayClass83_0 = ::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0;

using __c__DisplayClass86_0 = ::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0;

using __c__DisplayClass89_0 = ::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0;

using __c__DisplayClass90_0 = ::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0;

using __c__DisplayClass91_0 = ::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0;

using __c__DisplayClass92_0 = ::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0;

using __c__DisplayClass93_0 = ::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0;

 __declspec(property(get=get_AudioSystem, put=set_AudioSystem)) ::Meta::Voice::Audio::IAudioSystem*  AudioSystem;

 __declspec(property(get=get_DiskCacheHandler, put=set_DiskCacheHandler)) ::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler*  DiskCacheHandler;

 __declspec(property(get=get_Events)) ::Meta::WitAi::TTS::Events::TTSServiceEvents*  Events;

 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

/// @brief Field OnServiceDestroy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnServiceDestroy, put=setStaticF_OnServiceDestroy)) ::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*  OnServiceDestroy;

/// @brief Field OnServiceStart, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnServiceStart, put=setStaticF_OnServiceStart)) ::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*  OnServiceStart;

 __declspec(property(get=get_RuntimeCacheHandler, put=set_RuntimeCacheHandler)) ::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler*  RuntimeCacheHandler;

 __declspec(property(get=get_SimulatedErrorType, put=set_SimulatedErrorType)) ::Meta::WitAi::Requests::VoiceErrorSimulationType  SimulatedErrorType;

 __declspec(property(get=get_VoiceProvider)) ::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*  VoiceProvider;

 __declspec(property(get=get_WebHandler)) ::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*  WebHandler;

/// @brief Field <Logger>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field <SimulatedErrorType>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__SimulatedErrorType_k__BackingField, put=__cordl_internal_set__SimulatedErrorType_k__BackingField)) ::Meta::WitAi::Requests::VoiceErrorSimulationType  _SimulatedErrorType_k__BackingField;

/// @brief Field _audioSystem, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioSystem, put=__cordl_internal_set__audioSystem)) ::UnityW<::UnityEngine::Object>  _audioSystem;

/// @brief Field _diskCacheHandler, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__diskCacheHandler, put=__cordl_internal_set__diskCacheHandler)) ::UnityW<::UnityEngine::Object>  _diskCacheHandler;

/// @brief Field _events, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::Meta::WitAi::TTS::Events::TTSServiceEvents*  _events;

/// @brief Field _hasListeners, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasListeners, put=__cordl_internal_set__hasListeners)) bool  _hasListeners;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Meta::WitAi::TTS::TTSService>  _instance;

/// @brief Field _isActive, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActive, put=__cordl_internal_set__isActive)) bool  _isActive;

/// @brief Field _runtimeCacheHandler, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__runtimeCacheHandler, put=__cordl_internal_set__runtimeCacheHandler)) ::UnityW<::UnityEngine::Object>  _runtimeCacheHandler;

/// @brief Field verboseLogging, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_verboseLogging, put=__cordl_internal_set_verboseLogging)) bool  verboseLogging;

/// @brief Method Awake, addr 0x9e4841c, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DecodeTts, addr 0x9e49db8, size 0xd4, virtual false, abstract: false, final false
inline bool DecodeTts(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::by_ref<::StringW>  textToSpeak, ::by_ref<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>  voiceSettings) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.TTSService::<DownloadAsync>d__69))]
/// @brief Method DownloadAsync, addr 0x9e4ad50, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* DownloadAsync(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::System::Action_3<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW,::StringW>*  onDownloadComplete) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.TTSService::<DownloadAsync>d__68))]
/// @brief Method DownloadAsync, addr 0x9e4ae8c, size 0x150, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* DownloadAsync(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings) ;

/// @brief Method DownloadToDiskCache, addr 0x9e4acc8, size 0x48, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Data::TTSClipData* DownloadToDiskCache(::StringW  textToSpeak, ::StringW  presetVoiceId, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::System::Action_3<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW,::StringW>*  onDownloadComplete) ;

/// @brief Method DownloadToDiskCache, addr 0x9e4ad10, size 0x40, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Data::TTSClipData* DownloadToDiskCache(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::System::Action_3<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW,::StringW>*  onDownloadComplete) ;

/// @brief Method GetAllPresetVoiceSettings, addr 0x9e4b114, size 0xbc, virtual false, abstract: false, final false
inline ::ArrayW<::Meta::WitAi::TTS::Data::TTSVoiceSettings*> GetAllPresetVoiceSettings() ;

/// @brief Method GetAllRuntimeCachedClips, addr 0x9e4a930, size 0xb4, virtual false, abstract: false, final false
inline ::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*> GetAllRuntimeCachedClips() ;

/// @brief Method GetClipData, addr 0x9e49940, size 0x284, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Data::TTSClipData* GetClipData(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings) ;

/// @brief Method GetClipID, addr 0x9e495dc, size 0x44, virtual false, abstract: false, final false
inline ::StringW GetClipID(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings) ;

/// @brief Method GetClipIDWithFinalText, addr 0x9e49620, size 0x320, virtual true, abstract: false, final false
inline ::StringW GetClipIDWithFinalText(::StringW  formattedText, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings) ;

/// @brief Method GetDiskCachePath, addr 0x9e4abd4, size 0xf4, virtual false, abstract: false, final false
inline ::StringW GetDiskCachePath(::StringW  textToSpeak, ::StringW  clipID, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings) ;

/// @brief Method GetFinalText, addr 0x9e494bc, size 0x120, virtual true, abstract: false, final false
inline ::StringW GetFinalText(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings) ;

/// @brief Method GetInterface, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TInterface>
inline TInterface GetInterface(TInterface  current) ;

/// @brief Method GetInvalidError, addr 0x9e48384, size 0x98, virtual true, abstract: false, final false
inline ::StringW GetInvalidError() ;

/// @brief Method GetOrCreateInterface, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TInterface,typename TDefault>
requires(::cordl_internals::type_constraint<TDefault, ::UnityEngine::MonoBehaviour*> && ::cordl_internals::type_constraint<TDefault, TInterface>)
inline TInterface GetOrCreateInterface(TInterface  current) ;

/// @brief Method GetPresetVoiceSettings, addr 0x9e49edc, size 0x20c, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Data::TTSVoiceSettings* GetPresetVoiceSettings(::StringW  presetVoiceId) ;

/// @brief Method GetRuntimeCachedClip, addr 0x9e49bc4, size 0xbc, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Data::TTSClipData* GetRuntimeCachedClip(::StringW  clipID) ;

/// @brief Method Load, addr 0x9e49e8c, size 0x50, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Data::TTSClipData* Load(::StringW  textToSpeak, ::StringW  presetVoiceId, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onStreamReady, ::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*  onStreamComplete) ;

/// @brief Method Load, addr 0x9e4a0e8, size 0x50, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Data::TTSClipData* Load(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onStreamReady, ::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*  onStreamComplete) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.TTSService::<LoadAsync>d__54))]
/// @brief Method LoadAsync, addr 0x9e4a138, size 0x150, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* LoadAsync(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onStreamReady, ::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*  onStreamComplete) ;

/// @brief Method Log, addr 0x9e4854c, size 0x208, virtual false, abstract: false, final false
inline void Log(::StringW  logMessage, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::Meta::Voice::Logging::VLoggerVerbosity  logLevel) ;

/// @brief Method LogState, addr 0x9e48ebc, size 0x600, virtual false, abstract: false, final false
inline void LogState(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  message, bool  fromDisk, ::StringW  error) ;

static inline ::Meta::WitAi::TTS::TTSService* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9e48be8, size 0xe0, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9e48754, size 0x14, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e484e0, size 0x6c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRuntimeClipAdded, addr 0x9e4a9e4, size 0x8, virtual true, abstract: false, final false
inline void OnRuntimeClipAdded(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnRuntimeClipRemoved, addr 0x9e4aae4, size 0x8, virtual true, abstract: false, final false
inline void OnRuntimeClipRemoved(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.TTSService::<PerformDownloadAndStream>d__55))]
/// @brief Method PerformDownloadAndStream, addr 0x9e4a288, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* PerformDownloadAndStream(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.TTSService::<PerformStreamFromDisk>d__57))]
/// @brief Method PerformStreamFromDisk, addr 0x9e4a4c8, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* PerformStreamFromDisk(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.TTSService::<PerformStreamFromWeb>d__56))]
/// @brief Method PerformStreamFromWeb, addr 0x9e4a3a8, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* PerformStreamFromWeb(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method RaiseDiskStreamBegin, addr 0x9e4b1e8, size 0x8, virtual false, abstract: false, final false
inline void RaiseDiskStreamBegin(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method RaiseDiskStreamCancel, addr 0x9e4b5b0, size 0x8, virtual false, abstract: false, final false
inline void RaiseDiskStreamCancel(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method RaiseDiskStreamComplete, addr 0x9e4b90c, size 0x8, virtual false, abstract: false, final false
inline void RaiseDiskStreamComplete(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method RaiseDiskStreamError, addr 0x9e4b2e4, size 0x8, virtual false, abstract: false, final false
inline void RaiseDiskStreamError(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, int32_t  errorCode, ::StringW  error) ;

/// @brief Method RaiseDiskStreamReady, addr 0x9e4b5c8, size 0x8, virtual false, abstract: false, final false
inline void RaiseDiskStreamReady(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method RaiseDownloadBegin, addr 0x9e4ba08, size 0xec, virtual false, abstract: false, final false
inline void RaiseDownloadBegin(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  downloadPath) ;

/// @brief Method RaiseDownloadCancel, addr 0x9e4bbf0, size 0xec, virtual false, abstract: false, final false
inline void RaiseDownloadCancel(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  downloadPath) ;

/// @brief Method RaiseDownloadError, addr 0x9e4bce4, size 0x158, virtual false, abstract: false, final false
inline void RaiseDownloadError(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  downloadPath, ::StringW  error) ;

/// @brief Method RaiseDownloadSuccess, addr 0x9e4bafc, size 0xec, virtual false, abstract: false, final false
inline void RaiseDownloadSuccess(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  downloadPath) ;

/// @brief Method RaiseEvents, addr 0x9e49d58, size 0x60, virtual false, abstract: false, final false
inline void RaiseEvents(::System::Action*  events) ;

/// @brief Method RaiseLoadBegin, addr 0x9e4a9ec, size 0xf8, virtual false, abstract: false, final false
inline void RaiseLoadBegin(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, bool  download) ;

/// @brief Method RaiseStreamBegin, addr 0x9e4b1f0, size 0xe4, virtual false, abstract: false, final false
inline void RaiseStreamBegin(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, bool  fromDisk) ;

/// @brief Method RaiseStreamCancel, addr 0x9e4b484, size 0x12c, virtual false, abstract: false, final false
inline void RaiseStreamCancel(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, bool  fromDisk) ;

/// @brief Method RaiseStreamComplete, addr 0x9e4b914, size 0xe4, virtual false, abstract: false, final false
inline void RaiseStreamComplete(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, bool  fromDisk) ;

/// @brief Method RaiseStreamError, addr 0x9e4b2ec, size 0x188, virtual false, abstract: false, final false
inline void RaiseStreamError(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, int32_t  errorCode, ::StringW  error, bool  fromDisk) ;

/// @brief Method RaiseStreamReady, addr 0x9e4b5d0, size 0x32c, virtual false, abstract: false, final false
inline void RaiseStreamReady(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, bool  fromDisk) ;

/// @brief Method RaiseUnloadComplete, addr 0x9e4a6c8, size 0x268, virtual false, abstract: false, final false
inline void RaiseUnloadComplete(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, bool  download) ;

/// @brief Method RaiseWebStreamBegin, addr 0x9e4b2d4, size 0x8, virtual false, abstract: false, final false
inline void RaiseWebStreamBegin(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method RaiseWebStreamCancel, addr 0x9e4b5b8, size 0x8, virtual false, abstract: false, final false
inline void RaiseWebStreamCancel(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method RaiseWebStreamComplete, addr 0x9e4b9f8, size 0x8, virtual false, abstract: false, final false
inline void RaiseWebStreamComplete(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method RaiseWebStreamError, addr 0x9e4b474, size 0x8, virtual false, abstract: false, final false
inline void RaiseWebStreamError(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, int32_t  errorCode, ::StringW  error) ;

/// @brief Method RaiseWebStreamReady, addr 0x9e4b8fc, size 0x8, virtual false, abstract: false, final false
inline void RaiseWebStreamReady(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method SetClipLoadState, addr 0x9e49c80, size 0xd0, virtual true, abstract: false, final false
inline void SetClipLoadState(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::Meta::WitAi::TTS::Data::TTSClipLoadState  loadState) ;

/// @brief Method SetInterface, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TInterface>
inline ::UnityW<::UnityEngine::Object> SetInterface(TInterface  newValue) ;

/// @brief Method SetListeners, addr 0x9e48768, size 0x378, virtual true, abstract: false, final false
inline void SetListeners(bool  add) ;

/// @brief Method ShouldCacheToDisk, addr 0x9e4aaec, size 0xe8, virtual false, abstract: false, final false
inline bool ShouldCacheToDisk(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.TTSService::<ShouldDownload>d__70))]
/// @brief Method ShouldDownload, addr 0x9e4afdc, size 0x138, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Tuple_2<bool,::StringW>*>* ShouldDownload(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  downloadPath) ;

/// @brief Method Start, addr 0x9e48474, size 0x6c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Unload, addr 0x9e4a5e8, size 0xe0, virtual false, abstract: false, final false
inline void Unload(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method UnloadAll, addr 0x9e48cc8, size 0x1f4, virtual false, abstract: false, final false
inline void UnloadAll() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr ::Meta::WitAi::Requests::VoiceErrorSimulationType const& __cordl_internal_get__SimulatedErrorType_k__BackingField() const;

constexpr ::Meta::WitAi::Requests::VoiceErrorSimulationType& __cordl_internal_get__SimulatedErrorType_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__audioSystem() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__audioSystem() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__diskCacheHandler() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__diskCacheHandler() ;

constexpr ::Meta::WitAi::TTS::Events::TTSServiceEvents* const& __cordl_internal_get__events() const;

constexpr ::Meta::WitAi::TTS::Events::TTSServiceEvents*& __cordl_internal_get__events() ;

constexpr bool const& __cordl_internal_get__hasListeners() const;

constexpr bool& __cordl_internal_get__hasListeners() ;

constexpr bool const& __cordl_internal_get__isActive() const;

constexpr bool& __cordl_internal_get__isActive() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__runtimeCacheHandler() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__runtimeCacheHandler() ;

constexpr bool const& __cordl_internal_get_verboseLogging() const;

constexpr bool& __cordl_internal_get_verboseLogging() ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__SimulatedErrorType_k__BackingField(::Meta::WitAi::Requests::VoiceErrorSimulationType  value) ;

constexpr void __cordl_internal_set__audioSystem(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__diskCacheHandler(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__events(::Meta::WitAi::TTS::Events::TTSServiceEvents*  value) ;

constexpr void __cordl_internal_set__hasListeners(bool  value) ;

constexpr void __cordl_internal_set__isActive(bool  value) ;

constexpr void __cordl_internal_set__runtimeCacheHandler(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_verboseLogging(bool  value) ;

/// @brief Method .ctor, addr 0x9e4be54, size 0x160, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnServiceDestroy, addr 0x9e481dc, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnServiceDestroy(::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnServiceStart, addr 0x9e4803c, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnServiceStart(::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*  value) ;

static inline ::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>* getStaticF_OnServiceDestroy() ;

static inline ::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>* getStaticF_OnServiceStart() ;

static inline ::UnityW<::Meta::WitAi::TTS::TTSService> getStaticF__instance() ;

/// @brief Method get_AudioSystem, addr 0x9e47e2c, size 0x48, virtual false, abstract: false, final false
inline ::Meta::Voice::Audio::IAudioSystem* get_AudioSystem() ;

/// @brief Method get_DiskCacheHandler, addr 0x9e47f8c, size 0x48, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler* get_DiskCacheHandler() ;

/// @brief Method get_Events, addr 0x9e4837c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Events::TTSServiceEvents* get_Events() ;

/// @brief Method get_Instance, addr 0x9e47d98, size 0x94, virtual false, abstract: false, final false
static inline ::UnityW<::Meta::WitAi::TTS::TTSService> get_Instance() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x9e47d90, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

/// @brief Method get_RuntimeCacheHandler, addr 0x9e47edc, size 0x48, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler* get_RuntimeCacheHandler() ;

/// [CompilerGenerated]
/// @brief Method get_SimulatedErrorType, addr 0x9e4be44, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Requests::VoiceErrorSimulationType get_SimulatedErrorType() ;

/// @brief Method get_VoiceProvider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider* get_VoiceProvider() ;

/// @brief Method get_WebHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::TTS::Interfaces::ITTSWebHandler* get_WebHandler() ;

/// [CompilerGenerated]
/// @brief Method remove_OnServiceDestroy, addr 0x9e482ac, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnServiceDestroy(::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnServiceStart, addr 0x9e4810c, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnServiceStart(::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*  value) ;

static inline void setStaticF_OnServiceDestroy(::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*  value) ;

static inline void setStaticF_OnServiceStart(::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*  value) ;

static inline void setStaticF__instance(::UnityW<::Meta::WitAi::TTS::TTSService>  value) ;

/// @brief Method set_AudioSystem, addr 0x9e47e74, size 0x68, virtual false, abstract: false, final false
inline void set_AudioSystem(::Meta::Voice::Audio::IAudioSystem*  value) ;

/// @brief Method set_DiskCacheHandler, addr 0x9e47fd4, size 0x68, virtual false, abstract: false, final false
inline void set_DiskCacheHandler(::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler*  value) ;

/// @brief Method set_RuntimeCacheHandler, addr 0x9e47f24, size 0x68, virtual false, abstract: false, final false
inline void set_RuntimeCacheHandler(::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method set_SimulatedErrorType, addr 0x9e4be4c, size 0x8, virtual false, abstract: false, final false
inline void set_SimulatedErrorType(::Meta::WitAi::Requests::VoiceErrorSimulationType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSService", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSService(TTSService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSService(TTSService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29082};

/// [SerializeField]
/// @brief Field verboseLogging, offset: 0x20, size: 0x1, def value: None
 bool  ___verboseLogging;

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

/// [Header("TTS Modules")]
/// [Tooltip("Audio system to be used for obtaining audio clip streams.")]
/// [SerializeField]
/// [ObjectType(typeof(Meta.Voice.Audio.IAudioSystem), new[] {  })]
/// @brief Field _audioSystem, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____audioSystem;

/// [Tooltip("Runtime cache that assists with the temporary storage of audio clips.")]
/// [SerializeField]
/// [ObjectType(typeof(Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler), new[] {  })]
/// @brief Field _runtimeCacheHandler, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____runtimeCacheHandler;

/// [Tooltip("Disk cache that assists with the backup and retrieval of audio clips saved to disk.")]
/// [SerializeField]
/// [ObjectType(typeof(Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler), new[] {  })]
/// @brief Field _diskCacheHandler, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____diskCacheHandler;

/// [Header("Event Settings")]
/// [SerializeField]
/// @brief Field _events, offset: 0x48, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSServiceEvents*  ____events;

/// @brief Field _isActive, offset: 0x50, size: 0x1, def value: None
 bool  ____isActive;

/// @brief Field _hasListeners, offset: 0x51, size: 0x1, def value: None
 bool  ____hasListeners;

/// [CompilerGenerated]
/// @brief Field <SimulatedErrorType>k__BackingField, offset: 0x54, size: 0x4, def value: None
 ::Meta::WitAi::Requests::VoiceErrorSimulationType  ____SimulatedErrorType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::TTSService, ___verboseLogging) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService, ____Logger_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService, ____audioSystem) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService, ____runtimeCacheHandler) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService, ____diskCacheHandler) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService, ____events) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService, ____isActive) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService, ____hasListeners) == 0x51, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService, ____SimulatedErrorType_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::TTSService) == 0x58, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS {
// Is value type: false
// CS Name: Meta.WitAi.TTS.TTSService/<>c__DisplayClass93_0
class CORDL_TYPE TTSService___c__DisplayClass93_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::TTSService>  __4__this;

/// @brief Field clipData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipData, put=__cordl_internal_set_clipData)) ::Meta::WitAi::TTS::Data::TTSClipData*  clipData;

/// @brief Field downloadPath, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_downloadPath, put=__cordl_internal_set_downloadPath)) ::StringW  downloadPath;

/// @brief Field error, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_error, put=__cordl_internal_set_error)) ::StringW  error;

static inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0* New_ctor() ;

/// @brief Method <RaiseDownloadError>b__0, addr 0x9e4cb38, size 0xe0, virtual false, abstract: false, final false
inline void _RaiseDownloadError_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& __cordl_internal_get_clipData() const;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& __cordl_internal_get_clipData() ;

constexpr ::StringW const& __cordl_internal_get_downloadPath() const;

constexpr ::StringW& __cordl_internal_get_downloadPath() ;

constexpr ::StringW const& __cordl_internal_get_error() const;

constexpr ::StringW& __cordl_internal_get_error() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value) ;

constexpr void __cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value) ;

constexpr void __cordl_internal_set_downloadPath(::StringW  value) ;

constexpr void __cordl_internal_set_error(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e4be3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSService___c__DisplayClass93_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass93_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSService___c__DisplayClass93_0(TTSService___c__DisplayClass93_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass93_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSService___c__DisplayClass93_0(TTSService___c__DisplayClass93_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29074};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::TTSService>  _____4__this;

/// @brief Field clipData, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  ___clipData;

/// @brief Field error, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___error;

/// @brief Field downloadPath, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___downloadPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0, ___clipData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0, ___error) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0, ___downloadPath) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS {
// Is value type: false
// CS Name: Meta.WitAi.TTS.TTSService/<>c__DisplayClass92_0
class CORDL_TYPE TTSService___c__DisplayClass92_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::TTSService>  __4__this;

/// @brief Field clipData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipData, put=__cordl_internal_set_clipData)) ::Meta::WitAi::TTS::Data::TTSClipData*  clipData;

/// @brief Field downloadPath, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_downloadPath, put=__cordl_internal_set_downloadPath)) ::StringW  downloadPath;

static inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0* New_ctor() ;

/// @brief Method <RaiseDownloadCancel>b__0, addr 0x9e4ca44, size 0xf4, virtual false, abstract: false, final false
inline void _RaiseDownloadCancel_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& __cordl_internal_get_clipData() const;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& __cordl_internal_get_clipData() ;

constexpr ::StringW const& __cordl_internal_get_downloadPath() const;

constexpr ::StringW& __cordl_internal_get_downloadPath() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value) ;

constexpr void __cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value) ;

constexpr void __cordl_internal_set_downloadPath(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e4bcdc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSService___c__DisplayClass92_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass92_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSService___c__DisplayClass92_0(TTSService___c__DisplayClass92_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass92_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSService___c__DisplayClass92_0(TTSService___c__DisplayClass92_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29073};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::TTSService>  _____4__this;

/// @brief Field clipData, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  ___clipData;

/// @brief Field downloadPath, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___downloadPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0, ___clipData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0, ___downloadPath) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS {
// Is value type: false
// CS Name: Meta.WitAi.TTS.TTSService/<>c__DisplayClass91_0
class CORDL_TYPE TTSService___c__DisplayClass91_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::TTSService>  __4__this;

/// @brief Field clipData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipData, put=__cordl_internal_set_clipData)) ::Meta::WitAi::TTS::Data::TTSClipData*  clipData;

/// @brief Field downloadPath, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_downloadPath, put=__cordl_internal_set_downloadPath)) ::StringW  downloadPath;

static inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0* New_ctor() ;

/// @brief Method <RaiseDownloadSuccess>b__0, addr 0x9e4c954, size 0xf0, virtual false, abstract: false, final false
inline void _RaiseDownloadSuccess_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& __cordl_internal_get_clipData() const;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& __cordl_internal_get_clipData() ;

constexpr ::StringW const& __cordl_internal_get_downloadPath() const;

constexpr ::StringW& __cordl_internal_get_downloadPath() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value) ;

constexpr void __cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value) ;

constexpr void __cordl_internal_set_downloadPath(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e4bbe8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSService___c__DisplayClass91_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass91_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSService___c__DisplayClass91_0(TTSService___c__DisplayClass91_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass91_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSService___c__DisplayClass91_0(TTSService___c__DisplayClass91_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29072};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::TTSService>  _____4__this;

/// @brief Field clipData, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  ___clipData;

/// @brief Field downloadPath, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___downloadPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0, ___clipData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0, ___downloadPath) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS {
// Is value type: false
// CS Name: Meta.WitAi.TTS.TTSService/<>c__DisplayClass90_0
class CORDL_TYPE TTSService___c__DisplayClass90_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::TTSService>  __4__this;

/// @brief Field clipData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipData, put=__cordl_internal_set_clipData)) ::Meta::WitAi::TTS::Data::TTSClipData*  clipData;

/// @brief Field downloadPath, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_downloadPath, put=__cordl_internal_set_downloadPath)) ::StringW  downloadPath;

static inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0* New_ctor() ;

/// @brief Method <RaiseDownloadBegin>b__0, addr 0x9e4c8ac, size 0xa8, virtual false, abstract: false, final false
inline void _RaiseDownloadBegin_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& __cordl_internal_get_clipData() const;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& __cordl_internal_get_clipData() ;

constexpr ::StringW const& __cordl_internal_get_downloadPath() const;

constexpr ::StringW& __cordl_internal_get_downloadPath() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value) ;

constexpr void __cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value) ;

constexpr void __cordl_internal_set_downloadPath(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e4baf4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSService___c__DisplayClass90_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass90_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSService___c__DisplayClass90_0(TTSService___c__DisplayClass90_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass90_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSService___c__DisplayClass90_0(TTSService___c__DisplayClass90_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29071};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::TTSService>  _____4__this;

/// @brief Field clipData, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  ___clipData;

/// @brief Field downloadPath, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___downloadPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0, ___clipData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0, ___downloadPath) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS {
// Is value type: false
// CS Name: Meta.WitAi.TTS.TTSService/<>c__DisplayClass89_0
class CORDL_TYPE TTSService___c__DisplayClass89_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::TTSService>  __4__this;

/// @brief Field clipData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipData, put=__cordl_internal_set_clipData)) ::Meta::WitAi::TTS::Data::TTSClipData*  clipData;

/// @brief Field fromDisk, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_fromDisk, put=__cordl_internal_set_fromDisk)) bool  fromDisk;

static inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0* New_ctor() ;

/// @brief Method <RaiseStreamComplete>b__0, addr 0x9e4c744, size 0x168, virtual false, abstract: false, final false
inline void _RaiseStreamComplete_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& __cordl_internal_get_clipData() const;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& __cordl_internal_get_clipData() ;

constexpr bool const& __cordl_internal_get_fromDisk() const;

constexpr bool& __cordl_internal_get_fromDisk() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value) ;

constexpr void __cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value) ;

constexpr void __cordl_internal_set_fromDisk(bool  value) ;

/// @brief Method .ctor, addr 0x9e4ba00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSService___c__DisplayClass89_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass89_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSService___c__DisplayClass89_0(TTSService___c__DisplayClass89_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass89_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSService___c__DisplayClass89_0(TTSService___c__DisplayClass89_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29070};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::TTSService>  _____4__this;

/// @brief Field clipData, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  ___clipData;

/// @brief Field fromDisk, offset: 0x20, size: 0x1, def value: None
 bool  ___fromDisk;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0, ___clipData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0, ___fromDisk) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS {
// Is value type: false
// CS Name: Meta.WitAi.TTS.TTSService/<>c__DisplayClass86_0
class CORDL_TYPE TTSService___c__DisplayClass86_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::TTSService>  __4__this;

/// @brief Field clipData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipData, put=__cordl_internal_set_clipData)) ::Meta::WitAi::TTS::Data::TTSClipData*  clipData;

/// @brief Field fromDisk, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_fromDisk, put=__cordl_internal_set_fromDisk)) bool  fromDisk;

static inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0* New_ctor() ;

/// @brief Method <RaiseStreamReady>b__0, addr 0x9e4c604, size 0x140, virtual false, abstract: false, final false
inline void _RaiseStreamReady_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& __cordl_internal_get_clipData() const;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& __cordl_internal_get_clipData() ;

constexpr bool const& __cordl_internal_get_fromDisk() const;

constexpr bool& __cordl_internal_get_fromDisk() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value) ;

constexpr void __cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value) ;

constexpr void __cordl_internal_set_fromDisk(bool  value) ;

/// @brief Method .ctor, addr 0x9e4b904, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSService___c__DisplayClass86_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass86_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSService___c__DisplayClass86_0(TTSService___c__DisplayClass86_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass86_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSService___c__DisplayClass86_0(TTSService___c__DisplayClass86_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29069};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::TTSService>  _____4__this;

/// @brief Field clipData, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  ___clipData;

/// @brief Field fromDisk, offset: 0x20, size: 0x1, def value: None
 bool  ___fromDisk;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0, ___clipData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0, ___fromDisk) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS {
// Is value type: false
// CS Name: Meta.WitAi.TTS.TTSService/<>c__DisplayClass83_0
class CORDL_TYPE TTSService___c__DisplayClass83_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::TTSService>  __4__this;

/// @brief Field clipData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipData, put=__cordl_internal_set_clipData)) ::Meta::WitAi::TTS::Data::TTSClipData*  clipData;

/// @brief Field fromDisk, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_fromDisk, put=__cordl_internal_set_fromDisk)) bool  fromDisk;

static inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0* New_ctor() ;

/// @brief Method <RaiseStreamCancel>b__0, addr 0x9e4c4f4, size 0x110, virtual false, abstract: false, final false
inline void _RaiseStreamCancel_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& __cordl_internal_get_clipData() const;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& __cordl_internal_get_clipData() ;

constexpr bool const& __cordl_internal_get_fromDisk() const;

constexpr bool& __cordl_internal_get_fromDisk() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value) ;

constexpr void __cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value) ;

constexpr void __cordl_internal_set_fromDisk(bool  value) ;

/// @brief Method .ctor, addr 0x9e4b5c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSService___c__DisplayClass83_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass83_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSService___c__DisplayClass83_0(TTSService___c__DisplayClass83_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass83_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSService___c__DisplayClass83_0(TTSService___c__DisplayClass83_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29068};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::TTSService>  _____4__this;

/// @brief Field clipData, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  ___clipData;

/// @brief Field fromDisk, offset: 0x20, size: 0x1, def value: None
 bool  ___fromDisk;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0, ___clipData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0, ___fromDisk) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS {
// Is value type: false
// CS Name: Meta.WitAi.TTS.TTSService/<>c__DisplayClass80_0
class CORDL_TYPE TTSService___c__DisplayClass80_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::TTSService>  __4__this;

/// @brief Field clipData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipData, put=__cordl_internal_set_clipData)) ::Meta::WitAi::TTS::Data::TTSClipData*  clipData;

/// @brief Field error, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_error, put=__cordl_internal_set_error)) ::StringW  error;

/// @brief Field fromDisk, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_fromDisk, put=__cordl_internal_set_fromDisk)) bool  fromDisk;

static inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0* New_ctor() ;

/// @brief Method <RaiseStreamError>b__0, addr 0x9e4c3e0, size 0x114, virtual false, abstract: false, final false
inline void _RaiseStreamError_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& __cordl_internal_get_clipData() const;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& __cordl_internal_get_clipData() ;

constexpr ::StringW const& __cordl_internal_get_error() const;

constexpr ::StringW& __cordl_internal_get_error() ;

constexpr bool const& __cordl_internal_get_fromDisk() const;

constexpr bool& __cordl_internal_get_fromDisk() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value) ;

constexpr void __cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value) ;

constexpr void __cordl_internal_set_error(::StringW  value) ;

constexpr void __cordl_internal_set_fromDisk(bool  value) ;

/// @brief Method .ctor, addr 0x9e4b47c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSService___c__DisplayClass80_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass80_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSService___c__DisplayClass80_0(TTSService___c__DisplayClass80_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass80_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSService___c__DisplayClass80_0(TTSService___c__DisplayClass80_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29067};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::TTSService>  _____4__this;

/// @brief Field clipData, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  ___clipData;

/// @brief Field fromDisk, offset: 0x20, size: 0x1, def value: None
 bool  ___fromDisk;

/// @brief Field error, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0, ___clipData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0, ___fromDisk) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0, ___error) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS {
// Is value type: false
// CS Name: Meta.WitAi.TTS.TTSService/<>c__DisplayClass77_0
class CORDL_TYPE TTSService___c__DisplayClass77_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::TTSService>  __4__this;

/// @brief Field clipData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipData, put=__cordl_internal_set_clipData)) ::Meta::WitAi::TTS::Data::TTSClipData*  clipData;

/// @brief Field fromDisk, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_fromDisk, put=__cordl_internal_set_fromDisk)) bool  fromDisk;

static inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0* New_ctor() ;

/// @brief Method <RaiseStreamBegin>b__0, addr 0x9e4c338, size 0xa8, virtual false, abstract: false, final false
inline void _RaiseStreamBegin_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& __cordl_internal_get_clipData() const;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& __cordl_internal_get_clipData() ;

constexpr bool const& __cordl_internal_get_fromDisk() const;

constexpr bool& __cordl_internal_get_fromDisk() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value) ;

constexpr void __cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value) ;

constexpr void __cordl_internal_set_fromDisk(bool  value) ;

/// @brief Method .ctor, addr 0x9e4b2dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSService___c__DisplayClass77_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass77_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSService___c__DisplayClass77_0(TTSService___c__DisplayClass77_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass77_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSService___c__DisplayClass77_0(TTSService___c__DisplayClass77_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29066};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::TTSService>  _____4__this;

/// @brief Field clipData, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  ___clipData;

/// @brief Field fromDisk, offset: 0x20, size: 0x1, def value: None
 bool  ___fromDisk;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0, ___clipData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0, ___fromDisk) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS {
// Is value type: false
// CS Name: Meta.WitAi.TTS.TTSService/<>c__DisplayClass74_0
class CORDL_TYPE TTSService___c__DisplayClass74_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::TTSService>  __4__this;

/// @brief Field clipData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipData, put=__cordl_internal_set_clipData)) ::Meta::WitAi::TTS::Data::TTSClipData*  clipData;

static inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0* New_ctor() ;

/// @brief Method <RaiseUnloadComplete>b__0, addr 0x9e4c1a0, size 0x198, virtual false, abstract: false, final false
inline void _RaiseUnloadComplete_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& __cordl_internal_get_clipData() const;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& __cordl_internal_get_clipData() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value) ;

constexpr void __cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value) ;

/// @brief Method .ctor, addr 0x9e4b1e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSService___c__DisplayClass74_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass74_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSService___c__DisplayClass74_0(TTSService___c__DisplayClass74_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass74_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSService___c__DisplayClass74_0(TTSService___c__DisplayClass74_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29065};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::TTSService>  _____4__this;

/// @brief Field clipData, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  ___clipData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0, ___clipData) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS {
// Is value type: false
// CS Name: Meta.WitAi.TTS.TTSService/<>c__DisplayClass73_0
class CORDL_TYPE TTSService___c__DisplayClass73_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::TTSService>  __4__this;

/// @brief Field clipData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipData, put=__cordl_internal_set_clipData)) ::Meta::WitAi::TTS::Data::TTSClipData*  clipData;

static inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0* New_ctor() ;

/// @brief Method <RaiseLoadBegin>b__0, addr 0x9e4c008, size 0x198, virtual false, abstract: false, final false
inline void _RaiseLoadBegin_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& __cordl_internal_get_clipData() const;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& __cordl_internal_get_clipData() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value) ;

constexpr void __cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value) ;

/// @brief Method .ctor, addr 0x9e4b1d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSService___c__DisplayClass73_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass73_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSService___c__DisplayClass73_0(TTSService___c__DisplayClass73_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass73_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSService___c__DisplayClass73_0(TTSService___c__DisplayClass73_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29064};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::TTSService>  _____4__this;

/// @brief Field clipData, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  ___clipData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0, ___clipData) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS {
// Is value type: false
// CS Name: Meta.WitAi.TTS.TTSService/<>c__DisplayClass72_0
class CORDL_TYPE TTSService___c__DisplayClass72_0 : public ::System::Object {
public:
// Declarations
/// @brief Field presetVoiceId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_presetVoiceId, put=__cordl_internal_set_presetVoiceId)) ::StringW  presetVoiceId;

static inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0* New_ctor() ;

/// @brief Method <GetPresetVoiceSettings>b__0, addr 0x9e4bfe4, size 0x24, virtual false, abstract: false, final false
inline bool _GetPresetVoiceSettings_b__0(::Meta::WitAi::TTS::Data::TTSVoiceSettings*  v) ;

constexpr ::StringW const& __cordl_internal_get_presetVoiceId() const;

constexpr ::StringW& __cordl_internal_get_presetVoiceId() ;

constexpr void __cordl_internal_set_presetVoiceId(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e4b1d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSService___c__DisplayClass72_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass72_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSService___c__DisplayClass72_0(TTSService___c__DisplayClass72_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass72_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSService___c__DisplayClass72_0(TTSService___c__DisplayClass72_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29063};

/// @brief Field presetVoiceId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___presetVoiceId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0, ___presetVoiceId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS {
// Is value type: false
// CS Name: Meta.WitAi.TTS.TTSService/<>c__DisplayClass50_0
class CORDL_TYPE TTSService___c__DisplayClass50_0 : public ::System::Object {
public:
// Declarations
/// @brief Field clipData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipData, put=__cordl_internal_set_clipData)) ::Meta::WitAi::TTS::Data::TTSClipData*  clipData;

static inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0* New_ctor() ;

/// @brief Method <SetClipLoadState>b__0, addr 0x9e4bfb4, size 0x30, virtual false, abstract: false, final false
inline void _SetClipLoadState_b__0() ;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& __cordl_internal_get_clipData() const;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& __cordl_internal_get_clipData() ;

constexpr void __cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value) ;

/// @brief Method .ctor, addr 0x9e49d50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSService___c__DisplayClass50_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass50_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSService___c__DisplayClass50_0(TTSService___c__DisplayClass50_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSService___c__DisplayClass50_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSService___c__DisplayClass50_0(TTSService___c__DisplayClass50_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29062};

/// @brief Field clipData, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  ___clipData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0, ___clipData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS
