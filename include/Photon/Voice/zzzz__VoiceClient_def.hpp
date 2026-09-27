#pragma once
// IWYU pragma private; include "Photon/Voice/VoiceClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceClient)
namespace GlobalNamespace {
struct VoiceClient_CreateOptions;
}
namespace Photon::Voice {
struct AudioSampleType;
}
namespace Photon::Voice {
struct Codec;
}
namespace Photon::Voice {
struct FrameBuffer;
}
namespace Photon::Voice {
class IAudioDesc;
}
namespace Photon::Voice {
class IEncoder;
}
namespace Photon::Voice {
class ILogger;
}
namespace Photon::Voice {
class IVoiceTransport;
}
namespace Photon::Voice {
template<typename T>
class LocalVoiceAudio_1;
}
namespace Photon::Voice {
template<typename T>
class LocalVoiceFramed_1;
}
namespace Photon::Voice {
class LocalVoice;
}
namespace Photon::Voice {
class RemoteVoiceInfo;
}
namespace Photon::Voice {
struct RemoteVoiceOptions;
}
namespace Photon::Voice {
class RemoteVoice;
}
namespace Photon::Voice {
class VoiceClient_RemoteVoiceInfoDelegate;
}
namespace Photon::Voice {
class VoiceClient___c;
}
namespace Photon::Voice {
class VoiceClient___c__DisplayClass49_0;
}
namespace Photon::Voice {
template<typename T>
class VoiceClient___c__DisplayClass50_0_1;
}
namespace Photon::Voice {
template<typename T>
class VoiceClient___c__DisplayClass51_0_1;
}
namespace Photon::Voice {
class VoiceClient___c__DisplayClass52_0;
}
namespace Photon::Voice {
class VoiceClient___c__DisplayClass52_1;
}
namespace Photon::Voice {
class VoiceClient___c__DisplayClass52_2;
}
namespace Photon::Voice {
class VoiceClient___c__DisplayClass52_3;
}
namespace Photon::Voice {
class VoiceClient__get_RemoteVoiceInfos_d__40;
}
namespace Photon::Voice {
struct VoiceInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
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
namespace System {
class Random;
}
// Forward declare root types
namespace Photon::Voice {
class VoiceClient;
}
namespace Photon::Voice {
class VoiceClient_RemoteVoiceInfoDelegate;
}
namespace Photon::Voice {
class VoiceClient___c;
}
namespace Photon::Voice {
class VoiceClient___c__DisplayClass49_0;
}
namespace Photon::Voice {
template<typename T>
class VoiceClient___c__DisplayClass50_0_1;
}
namespace Photon::Voice {
template<typename T>
class VoiceClient___c__DisplayClass51_0_1;
}
namespace Photon::Voice {
class VoiceClient___c__DisplayClass52_0;
}
namespace Photon::Voice {
class VoiceClient___c__DisplayClass52_1;
}
namespace Photon::Voice {
class VoiceClient___c__DisplayClass52_2;
}
namespace Photon::Voice {
class VoiceClient___c__DisplayClass52_3;
}
namespace Photon::Voice {
class VoiceClient__get_RemoteVoiceInfos_d__40;
}
// Write type traits
MARK_REF_T(::Photon::Voice::VoiceClient*);
MARK_REF_T(::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*);
MARK_REF_T(::Photon::Voice::VoiceClient___c*);
MARK_REF_T(::Photon::Voice::VoiceClient___c__DisplayClass49_0*);
MARK_GEN_REF_T_PTR(::Photon::Voice::VoiceClient___c__DisplayClass50_0_1);
MARK_GEN_REF_T_PTR(::Photon::Voice::VoiceClient___c__DisplayClass51_0_1);
MARK_REF_T(::Photon::Voice::VoiceClient___c__DisplayClass52_0*);
MARK_REF_T(::Photon::Voice::VoiceClient___c__DisplayClass52_1*);
MARK_REF_T(::Photon::Voice::VoiceClient___c__DisplayClass52_2*);
MARK_REF_T(::Photon::Voice::VoiceClient___c__DisplayClass52_3*);
MARK_REF_T(::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::VoiceClient*, "Photon.Voice", "VoiceClient");
DEFINE_IL2CPP_CLASS(::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*, "Photon.Voice", "VoiceClient/RemoteVoiceInfoDelegate");
DEFINE_IL2CPP_CLASS(::Photon::Voice::VoiceClient___c*, "Photon.Voice", "VoiceClient/<>c");
DEFINE_IL2CPP_CLASS(::Photon::Voice::VoiceClient___c__DisplayClass49_0*, "Photon.Voice", "VoiceClient/<>c__DisplayClass49_0");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::VoiceClient___c__DisplayClass50_0_1, "Photon.Voice", "VoiceClient/<>c__DisplayClass50_0`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::VoiceClient___c__DisplayClass51_0_1, "Photon.Voice", "VoiceClient/<>c__DisplayClass51_0`1");
DEFINE_IL2CPP_CLASS(::Photon::Voice::VoiceClient___c__DisplayClass52_0*, "Photon.Voice", "VoiceClient/<>c__DisplayClass52_0");
DEFINE_IL2CPP_CLASS(::Photon::Voice::VoiceClient___c__DisplayClass52_1*, "Photon.Voice", "VoiceClient/<>c__DisplayClass52_1");
DEFINE_IL2CPP_CLASS(::Photon::Voice::VoiceClient___c__DisplayClass52_2*, "Photon.Voice", "VoiceClient/<>c__DisplayClass52_2");
DEFINE_IL2CPP_CLASS(::Photon::Voice::VoiceClient___c__DisplayClass52_3*, "Photon.Voice", "VoiceClient/<>c__DisplayClass52_3");
DEFINE_IL2CPP_CLASS(::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*, "Photon.Voice", "VoiceClient/<get_RemoteVoiceInfos>d__40");
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.VoiceClient
class CORDL_TYPE VoiceClient : public ::System::Object {
public:
// Declarations
using CreateOptions = ::GlobalNamespace::VoiceClient_CreateOptions;

using RemoteVoiceInfoDelegate = ::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate;

using __c = ::Photon::Voice::VoiceClient___c;

using __c__DisplayClass49_0 = ::Photon::Voice::VoiceClient___c__DisplayClass49_0;

template<typename T>
using __c__DisplayClass50_0_1 = ::Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>;

template<typename T>
using __c__DisplayClass51_0_1 = ::Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>;

using __c__DisplayClass52_0 = ::Photon::Voice::VoiceClient___c__DisplayClass52_0;

using __c__DisplayClass52_1 = ::Photon::Voice::VoiceClient___c__DisplayClass52_1;

using __c__DisplayClass52_2 = ::Photon::Voice::VoiceClient___c__DisplayClass52_2;

using __c__DisplayClass52_3 = ::Photon::Voice::VoiceClient___c__DisplayClass52_3;

using _get_RemoteVoiceInfos_d__40 = ::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40;

 __declspec(property(get=get_DebugLostPercent, put=set_DebugLostPercent)) int32_t  DebugLostPercent;

 __declspec(property(get=get_FramesLost, put=set_FramesLost)) int32_t  FramesLost;

 __declspec(property(get=get_FramesReceived, put=set_FramesReceived)) int32_t  FramesReceived;

 __declspec(property(get=get_FramesSent)) int32_t  FramesSent;

 __declspec(property(get=get_FramesSentBytes)) int32_t  FramesSentBytes;

 __declspec(property(get=get_GlobalInterestGroup, put=set_GlobalInterestGroup)) uint8_t  GlobalInterestGroup;

 __declspec(property(get=get_LocalVoices)) ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*  LocalVoices;

 __declspec(property(get=get_OnRemoteVoiceInfoAction, put=set_OnRemoteVoiceInfoAction)) ::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*  OnRemoteVoiceInfoAction;

 __declspec(property(get=get_RemoteVoiceInfos)) ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>*  RemoteVoiceInfos;

 __declspec(property(get=get_RoundTripTime, put=set_RoundTripTime)) int32_t  RoundTripTime;

 __declspec(property(get=get_RoundTripTimeVariance, put=set_RoundTripTimeVariance)) int32_t  RoundTripTimeVariance;

 __declspec(property(get=get_SuppressInfoDuplicateWarning, put=set_SuppressInfoDuplicateWarning)) bool  SuppressInfoDuplicateWarning;

/// @brief Field <DebugLostPercent>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__DebugLostPercent_k__BackingField, put=__cordl_internal_set__DebugLostPercent_k__BackingField)) int32_t  _DebugLostPercent_k__BackingField;

/// @brief Field <FramesLost>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__FramesLost_k__BackingField, put=__cordl_internal_set__FramesLost_k__BackingField)) int32_t  _FramesLost_k__BackingField;

/// @brief Field <FramesReceived>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__FramesReceived_k__BackingField, put=__cordl_internal_set__FramesReceived_k__BackingField)) int32_t  _FramesReceived_k__BackingField;

/// @brief Field <OnRemoteVoiceInfoAction>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnRemoteVoiceInfoAction_k__BackingField, put=__cordl_internal_set__OnRemoteVoiceInfoAction_k__BackingField)) ::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*  _OnRemoteVoiceInfoAction_k__BackingField;

/// @brief Field <RoundTripTimeVariance>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__RoundTripTimeVariance_k__BackingField, put=__cordl_internal_set__RoundTripTimeVariance_k__BackingField)) int32_t  _RoundTripTimeVariance_k__BackingField;

/// @brief Field <RoundTripTime>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__RoundTripTime_k__BackingField, put=__cordl_internal_set__RoundTripTime_k__BackingField)) int32_t  _RoundTripTime_k__BackingField;

/// @brief Field <SuppressInfoDuplicateWarning>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__SuppressInfoDuplicateWarning_k__BackingField, put=__cordl_internal_set__SuppressInfoDuplicateWarning_k__BackingField)) bool  _SuppressInfoDuplicateWarning_k__BackingField;

/// @brief Field globalInterestGroup, offset 0x53, size 0x1 
 __declspec(property(get=__cordl_internal_get_globalInterestGroup, put=__cordl_internal_set_globalInterestGroup)) uint8_t  globalInterestGroup;

/// @brief Field localVoices, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_localVoices, put=__cordl_internal_set_localVoices)) ::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::LocalVoice*>*  localVoices;

/// @brief Field localVoicesPerChannel, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_localVoicesPerChannel, put=__cordl_internal_set_localVoicesPerChannel)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Photon::Voice::LocalVoice*>*>*  localVoicesPerChannel;

/// @brief Field logger, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::Photon::Voice::ILogger*  logger;

/// @brief Field prevRtt, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_prevRtt, put=__cordl_internal_set_prevRtt)) int32_t  prevRtt;

/// @brief Field remoteVoiceDelayFrames, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_remoteVoiceDelayFrames, put=__cordl_internal_set_remoteVoiceDelayFrames)) ::System::Collections::Generic::Dictionary_2<::Photon::Voice::Codec,int32_t>*  remoteVoiceDelayFrames;

/// @brief Field remoteVoices, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_remoteVoices, put=__cordl_internal_set_remoteVoices)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>*  remoteVoices;

/// @brief Field rnd, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_rnd, put=__cordl_internal_set_rnd)) ::System::Random*  rnd;

/// @brief Field transport, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_transport, put=__cordl_internal_set_transport)) ::Photon::Voice::IVoiceTransport*  transport;

/// @brief Field voiceIDMax, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_voiceIDMax, put=__cordl_internal_set_voiceIDMax)) uint8_t  voiceIDMax;

/// @brief Field voiceIDMin, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_voiceIDMin, put=__cordl_internal_set_voiceIDMin)) uint8_t  voiceIDMin;

/// @brief Field voiceIdLast, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get_voiceIdLast, put=__cordl_internal_set_voiceIdLast)) uint8_t  voiceIdLast;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CreateLocalVoice, addr 0xa74e80c, size 0x104, virtual false, abstract: false, final false
inline ::Photon::Voice::LocalVoice* CreateLocalVoice(::Photon::Voice::VoiceInfo  voiceInfo, int32_t  channelId, ::Photon::Voice::IEncoder*  encoder) ;

/// @brief Method CreateLocalVoiceAudio, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Photon::Voice::LocalVoiceAudio_1<T>* CreateLocalVoiceAudio(::Photon::Voice::VoiceInfo  voiceInfo, ::Photon::Voice::IAudioDesc*  audioSourceDesc, ::Photon::Voice::IEncoder*  encoder, int32_t  channelId) ;

/// @brief Method CreateLocalVoiceAudioFromSource, addr 0xa74e918, size 0xdd4, virtual false, abstract: false, final false
inline ::Photon::Voice::LocalVoice* CreateLocalVoiceAudioFromSource(::Photon::Voice::VoiceInfo  voiceInfo, ::Photon::Voice::IAudioDesc*  source, ::Photon::Voice::AudioSampleType  sampleType, ::Photon::Voice::IEncoder*  encoder, int32_t  channelId) ;

/// @brief Method CreateLocalVoiceFramed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Photon::Voice::LocalVoiceFramed_1<T>* CreateLocalVoiceFramed(::Photon::Voice::VoiceInfo  voiceInfo, int32_t  frameSize, int32_t  channelId, ::Photon::Voice::IEncoder*  encoder) ;

/// @brief Method Dispose, addr 0xa752124, size 0x3b0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method LocalVoicesInChannel, addr 0xa74c930, size 0xf8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>* LocalVoicesInChannel(int32_t  channelId) ;

/// @brief Method LogSpacingProfiles, addr 0xa74cadc, size 0x620, virtual false, abstract: false, final false
inline void LogSpacingProfiles() ;

/// @brief Method LogStats, addr 0xa74d0fc, size 0x4b4, virtual false, abstract: false, final false
inline void LogStats() ;

static inline ::Photon::Voice::VoiceClient* New_ctor(::Photon::Voice::IVoiceTransport*  transport, ::Photon::Voice::ILogger*  logger, ::GlobalNamespace::VoiceClient_CreateOptions  opt) ;

/// @brief Method RemoveLocalVoice, addr 0xa74a27c, size 0x2cc, virtual false, abstract: false, final false
inline void RemoveLocalVoice(::Photon::Voice::LocalVoice*  voice) ;

/// @brief Method Service, addr 0xa74dae0, size 0x144, virtual false, abstract: false, final false
inline void Service() ;

/// @brief Method SetRemoteVoiceDelayFrames, addr 0xa74d5b0, size 0x2c0, virtual false, abstract: false, final false
inline void SetRemoteVoiceDelayFrames(::Photon::Voice::Codec  codec, int32_t  delayFrames) ;

constexpr int32_t const& __cordl_internal_get__DebugLostPercent_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__DebugLostPercent_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__FramesLost_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__FramesLost_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__FramesReceived_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__FramesReceived_k__BackingField() ;

constexpr ::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate* const& __cordl_internal_get__OnRemoteVoiceInfoAction_k__BackingField() const;

constexpr ::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*& __cordl_internal_get__OnRemoteVoiceInfoAction_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__RoundTripTimeVariance_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__RoundTripTimeVariance_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__RoundTripTime_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__RoundTripTime_k__BackingField() ;

constexpr bool const& __cordl_internal_get__SuppressInfoDuplicateWarning_k__BackingField() const;

constexpr bool& __cordl_internal_get__SuppressInfoDuplicateWarning_k__BackingField() ;

constexpr uint8_t const& __cordl_internal_get_globalInterestGroup() const;

constexpr uint8_t& __cordl_internal_get_globalInterestGroup() ;

constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::LocalVoice*>* const& __cordl_internal_get_localVoices() const;

constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::LocalVoice*>*& __cordl_internal_get_localVoices() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Photon::Voice::LocalVoice*>*>* const& __cordl_internal_get_localVoicesPerChannel() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Photon::Voice::LocalVoice*>*>*& __cordl_internal_get_localVoicesPerChannel() ;

constexpr ::Photon::Voice::ILogger* const& __cordl_internal_get_logger() const;

constexpr ::Photon::Voice::ILogger*& __cordl_internal_get_logger() ;

constexpr int32_t const& __cordl_internal_get_prevRtt() const;

constexpr int32_t& __cordl_internal_get_prevRtt() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Photon::Voice::Codec,int32_t>* const& __cordl_internal_get_remoteVoiceDelayFrames() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Photon::Voice::Codec,int32_t>*& __cordl_internal_get_remoteVoiceDelayFrames() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>* const& __cordl_internal_get_remoteVoices() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>*& __cordl_internal_get_remoteVoices() ;

constexpr ::System::Random* const& __cordl_internal_get_rnd() const;

constexpr ::System::Random*& __cordl_internal_get_rnd() ;

constexpr ::Photon::Voice::IVoiceTransport* const& __cordl_internal_get_transport() const;

constexpr ::Photon::Voice::IVoiceTransport*& __cordl_internal_get_transport() ;

constexpr uint8_t const& __cordl_internal_get_voiceIDMax() const;

constexpr uint8_t& __cordl_internal_get_voiceIDMax() ;

constexpr uint8_t const& __cordl_internal_get_voiceIDMin() const;

constexpr uint8_t& __cordl_internal_get_voiceIDMin() ;

constexpr uint8_t const& __cordl_internal_get_voiceIdLast() const;

constexpr uint8_t& __cordl_internal_get_voiceIdLast() ;

constexpr void __cordl_internal_set__DebugLostPercent_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__FramesLost_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__FramesReceived_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__OnRemoteVoiceInfoAction_k__BackingField(::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*  value) ;

constexpr void __cordl_internal_set__RoundTripTimeVariance_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__RoundTripTime_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__SuppressInfoDuplicateWarning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_globalInterestGroup(uint8_t  value) ;

constexpr void __cordl_internal_set_localVoices(::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::LocalVoice*>*  value) ;

constexpr void __cordl_internal_set_localVoicesPerChannel(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Photon::Voice::LocalVoice*>*>*  value) ;

constexpr void __cordl_internal_set_logger(::Photon::Voice::ILogger*  value) ;

constexpr void __cordl_internal_set_prevRtt(int32_t  value) ;

constexpr void __cordl_internal_set_remoteVoiceDelayFrames(::System::Collections::Generic::Dictionary_2<::Photon::Voice::Codec,int32_t>*  value) ;

constexpr void __cordl_internal_set_remoteVoices(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>*  value) ;

constexpr void __cordl_internal_set_rnd(::System::Random*  value) ;

constexpr void __cordl_internal_set_transport(::Photon::Voice::IVoiceTransport*  value) ;

constexpr void __cordl_internal_set_voiceIDMax(uint8_t  value) ;

constexpr void __cordl_internal_set_voiceIDMin(uint8_t  value) ;

constexpr void __cordl_internal_set_voiceIdLast(uint8_t  value) ;

/// @brief Method .ctor, addr 0xa74d870, size 0x270, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::IVoiceTransport*  transport, ::Photon::Voice::ILogger*  logger, ::GlobalNamespace::VoiceClient_CreateOptions  opt) ;

/// @brief Method addVoice, addr 0xa74e01c, size 0x2b0, virtual false, abstract: false, final false
inline void addVoice(uint8_t  newId, int32_t  channelId, ::Photon::Voice::LocalVoice*  v) ;

/// @brief Method channelStr, addr 0xa7496a8, size 0x10c, virtual false, abstract: false, final false
inline ::StringW channelStr(int32_t  channelId) ;

/// @brief Method clearRemoteVoices, addr 0xa74fb38, size 0x3dc, virtual false, abstract: false, final false
inline void clearRemoteVoices() ;

/// @brief Method clearRemoteVoicesInChannel, addr 0xa74ff14, size 0x620, virtual false, abstract: false, final false
inline void clearRemoteVoicesInChannel(int32_t  channelId) ;

/// @brief Method clearRemoteVoicesInChannelForPlayer, addr 0xa750534, size 0x398, virtual false, abstract: false, final false
inline void clearRemoteVoicesInChannelForPlayer(int32_t  channelId, int32_t  playerId) ;

/// @brief Method createLocalVoice, addr 0xa74dc24, size 0x1e8, virtual false, abstract: false, final false
inline ::Photon::Voice::LocalVoice* createLocalVoice(int32_t  channelId, ::System::Func_3<uint8_t,int32_t,::Photon::Voice::LocalVoice*>*  voiceFactory) ;

/// @brief Method getNewVoiceId, addr 0xa74de0c, size 0x210, virtual false, abstract: false, final false
inline uint8_t getNewVoiceId() ;

/// [CompilerGenerated]
/// @brief Method get_DebugLostPercent, addr 0xa74c850, size 0x8, virtual false, abstract: false, final false
inline int32_t get_DebugLostPercent() ;

/// [CompilerGenerated]
/// @brief Method get_FramesLost, addr 0xa74c558, size 0x8, virtual false, abstract: false, final false
inline int32_t get_FramesLost() ;

/// [CompilerGenerated]
/// @brief Method get_FramesReceived, addr 0xa74c568, size 0x8, virtual false, abstract: false, final false
inline int32_t get_FramesReceived() ;

/// @brief Method get_FramesSent, addr 0xa74c578, size 0x14c, virtual false, abstract: false, final false
inline int32_t get_FramesSent() ;

/// @brief Method get_FramesSentBytes, addr 0xa74c6c4, size 0x14c, virtual false, abstract: false, final false
inline int32_t get_FramesSentBytes() ;

/// @brief Method get_GlobalInterestGroup, addr 0xa74f9e4, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_GlobalInterestGroup() ;

/// @brief Method get_LocalVoices, addr 0xa74c860, size 0xd0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>* get_LocalVoices() ;

/// [CompilerGenerated]
/// @brief Method get_OnRemoteVoiceInfoAction, addr 0xa74c840, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate* get_OnRemoteVoiceInfoAction() ;

/// [IteratorStateMachine(typeof(Photon.Voice.VoiceClient::<get_RemoteVoiceInfos>d__40))]
/// @brief Method get_RemoteVoiceInfos, addr 0xa74ca28, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>* get_RemoteVoiceInfos() ;

/// [CompilerGenerated]
/// @brief Method get_RoundTripTime, addr 0xa74c810, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RoundTripTime() ;

/// [CompilerGenerated]
/// @brief Method get_RoundTripTimeVariance, addr 0xa74c820, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RoundTripTimeVariance() ;

/// [CompilerGenerated]
/// @brief Method get_SuppressInfoDuplicateWarning, addr 0xa74c830, size 0x8, virtual false, abstract: false, final false
inline bool get_SuppressInfoDuplicateWarning() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method idInc, addr 0xa74f8c4, size 0x1c, virtual false, abstract: false, final false
inline uint8_t idInc(uint8_t  id) ;

/// @brief Method onFrame, addr 0xa751a24, size 0x700, virtual false, abstract: false, final false
inline void onFrame(int32_t  channelId, int32_t  playerId, uint8_t  voiceId, uint8_t  evNumber, ::by_ref<::Photon::Voice::FrameBuffer>  receivedBytes, bool  isLocalPlayer) ;

/// @brief Method onJoinChannel, addr 0xa7508cc, size 0x8, virtual false, abstract: false, final false
inline void onJoinChannel(int32_t  channel) ;

/// @brief Method onLeaveAllChannels, addr 0xa7508d8, size 0x4, virtual false, abstract: false, final false
inline void onLeaveAllChannels() ;

/// @brief Method onLeaveChannel, addr 0xa7508d4, size 0x4, virtual false, abstract: false, final false
inline void onLeaveChannel(int32_t  channel) ;

/// @brief Method onPlayerJoin, addr 0xa7508dc, size 0x4, virtual false, abstract: false, final false
inline void onPlayerJoin(int32_t  channelId, int32_t  playerId) ;

/// @brief Method onPlayerLeave, addr 0xa7508e0, size 0x4, virtual false, abstract: false, final false
inline void onPlayerLeave(int32_t  channelId, int32_t  playerId) ;

/// @brief Method onVoiceInfo, addr 0xa7508e4, size 0x870, virtual false, abstract: false, final false
inline void onVoiceInfo(int32_t  channelId, int32_t  playerId, uint8_t  voiceId, uint8_t  eventNumber, ::Photon::Voice::VoiceInfo  info) ;

/// @brief Method onVoiceRemove, addr 0xa751260, size 0x7c4, virtual false, abstract: false, final false
inline void onVoiceRemove(int32_t  channelId, int32_t  playerId, ::ArrayW<uint8_t>  voiceIds) ;

/// @brief Method playerStr, addr 0xa751154, size 0x10c, virtual false, abstract: false, final false
inline ::StringW playerStr(int32_t  playerId) ;

/// @brief Method sendChannelVoicesInfo, addr 0xa74f8e0, size 0x104, virtual false, abstract: false, final false
inline void sendChannelVoicesInfo(int32_t  channelId, int32_t  targetPlayerId) ;

/// @brief Method sendVoicesInfoAndConfigFrame, addr 0xa748c50, size 0x4d8, virtual false, abstract: false, final false
inline void sendVoicesInfoAndConfigFrame(::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*  voiceList, int32_t  channelId, int32_t  targetPlayerId) ;

/// [CompilerGenerated]
/// @brief Method set_DebugLostPercent, addr 0xa74c858, size 0x8, virtual false, abstract: false, final false
inline void set_DebugLostPercent(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_FramesLost, addr 0xa74c560, size 0x8, virtual false, abstract: false, final false
inline void set_FramesLost(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_FramesReceived, addr 0xa74c570, size 0x8, virtual false, abstract: false, final false
inline void set_FramesReceived(int32_t  value) ;

/// @brief Method set_GlobalInterestGroup, addr 0xa74f9ec, size 0x14c, virtual false, abstract: false, final false
inline void set_GlobalInterestGroup(uint8_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_OnRemoteVoiceInfoAction, addr 0xa74c848, size 0x8, virtual false, abstract: false, final false
inline void set_OnRemoteVoiceInfoAction(::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method set_RoundTripTime, addr 0xa74c818, size 0x8, virtual false, abstract: false, final false
inline void set_RoundTripTime(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RoundTripTimeVariance, addr 0xa74c828, size 0x8, virtual false, abstract: false, final false
inline void set_RoundTripTimeVariance(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SuppressInfoDuplicateWarning, addr 0xa74c838, size 0x8, virtual false, abstract: false, final false
inline void set_SuppressInfoDuplicateWarning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceClient(VoiceClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceClient(VoiceClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28464};

/// @brief Field transport, offset: 0x10, size: 0x8, def value: None
 ::Photon::Voice::IVoiceTransport*  ___transport;

/// @brief Field logger, offset: 0x18, size: 0x8, def value: None
 ::Photon::Voice::ILogger*  ___logger;

/// [CompilerGenerated]
/// @brief Field <FramesLost>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____FramesLost_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FramesReceived>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  ____FramesReceived_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RoundTripTime>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____RoundTripTime_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RoundTripTimeVariance>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____RoundTripTimeVariance_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SuppressInfoDuplicateWarning>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____SuppressInfoDuplicateWarning_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OnRemoteVoiceInfoAction>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*  ____OnRemoteVoiceInfoAction_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DebugLostPercent>k__BackingField, offset: 0x40, size: 0x4, def value: None
 int32_t  ____DebugLostPercent_k__BackingField;

/// @brief Field prevRtt, offset: 0x44, size: 0x4, def value: None
 int32_t  ___prevRtt;

/// @brief Field remoteVoiceDelayFrames, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Photon::Voice::Codec,int32_t>*  ___remoteVoiceDelayFrames;

/// @brief Field voiceIDMin, offset: 0x50, size: 0x1, def value: None
 uint8_t  ___voiceIDMin;

/// @brief Field voiceIDMax, offset: 0x51, size: 0x1, def value: None
 uint8_t  ___voiceIDMax;

/// @brief Field voiceIdLast, offset: 0x52, size: 0x1, def value: None
 uint8_t  ___voiceIdLast;

/// @brief Field globalInterestGroup, offset: 0x53, size: 0x1, def value: None
 uint8_t  ___globalInterestGroup;

/// @brief Field localVoices, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::LocalVoice*>*  ___localVoices;

/// @brief Field localVoicesPerChannel, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Photon::Voice::LocalVoice*>*>*  ___localVoicesPerChannel;

/// @brief Field remoteVoices, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>*  ___remoteVoices;

/// @brief Field rnd, offset: 0x70, size: 0x8, def value: None
 ::System::Random*  ___rnd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::VoiceClient, ___transport) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient, ___logger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient, ____FramesLost_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient, ____FramesReceived_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient, ____RoundTripTime_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient, ____RoundTripTimeVariance_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient, ____SuppressInfoDuplicateWarning_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient, ____OnRemoteVoiceInfoAction_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient, ____DebugLostPercent_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient, ___prevRtt) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient, ___remoteVoiceDelayFrames) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient, ___voiceIDMin) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient, ___voiceIDMax) == 0x51, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient, ___voiceIdLast) == 0x52, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient, ___globalInterestGroup) == 0x53, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient, ___localVoices) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient, ___localVoicesPerChannel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient, ___remoteVoices) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient, ___rnd) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::VoiceClient) == 0x78, "Size mismatch!");

} // namespace end def Photon::Voice
// [CompilerGenerated]
// Dependencies System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>, System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40
class CORDL_TYPE VoiceClient__get_RemoteVoiceInfos_d__40 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Photon_Voice_RemoteVoiceInfo__get_Current)) ::Photon::Voice::RemoteVoiceInfo*  System_Collections_Generic_IEnumerator_Photon_Voice_RemoteVoiceInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Photon::Voice::RemoteVoiceInfo*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Photon::Voice::VoiceClient*  __4__this;

/// @brief Field <>7__wrap1, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::Dictionary_2_Enumerator<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>  __7__wrap1;

/// @brief Field <>7__wrap3, offset 0x68, size 0x28 
 __declspec(property(get=__cordl_internal_get___7__wrap3, put=__cordl_internal_set___7__wrap3)) ::GlobalNamespace::Dictionary_2_Enumerator<uint8_t,::Photon::Voice::RemoteVoice*>  __7__wrap3;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <playerVoices>5__3, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__playerVoices_5__3, put=__cordl_internal_set__playerVoices_5__3)) ::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>  _playerVoices_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa752af8, size 0x350, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Photon.Voice.RemoteVoiceInfo>.GetEnumerator, addr 0xa752f88, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>* System_Collections_Generic_IEnumerable_Photon_Voice_RemoteVoiceInfo__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Photon.Voice.RemoteVoiceInfo>.get_Current, addr 0xa752f40, size 0x8, virtual true, abstract: false, final true
inline ::Photon::Voice::RemoteVoiceInfo* System_Collections_Generic_IEnumerator_Photon_Voice_RemoteVoiceInfo__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa75302c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa752f48, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa752f80, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa752a4c, size 0xac, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Photon::Voice::RemoteVoiceInfo* const& __cordl_internal_get___2__current() const;

constexpr ::Photon::Voice::RemoteVoiceInfo*& __cordl_internal_get___2__current() ;

constexpr ::Photon::Voice::VoiceClient* const& __cordl_internal_get___4__this() const;

constexpr ::Photon::Voice::VoiceClient*& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*> const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>& __cordl_internal_get___7__wrap1() ;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<uint8_t,::Photon::Voice::RemoteVoice*> const& __cordl_internal_get___7__wrap3() const;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<uint8_t,::Photon::Voice::RemoteVoice*>& __cordl_internal_get___7__wrap3() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*> const& __cordl_internal_get__playerVoices_5__3() const;

constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>& __cordl_internal_get__playerVoices_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Photon::Voice::RemoteVoiceInfo*  value) ;

constexpr void __cordl_internal_set___4__this(::Photon::Voice::VoiceClient*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::Dictionary_2_Enumerator<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>  value) ;

constexpr void __cordl_internal_set___7__wrap3(::GlobalNamespace::Dictionary_2_Enumerator<uint8_t,::Photon::Voice::RemoteVoice*>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__playerVoices_5__3(::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>  value) ;

/// @brief Method <>m__Finally1, addr 0xa752ef0, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2, addr 0xa752ea0, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally2() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa74caa8, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>* i___System__Collections__Generic__IEnumerable_1___Photon__Voice__RemoteVoiceInfo__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>* i___System__Collections__Generic__IEnumerator_1___Photon__Voice__RemoteVoiceInfo__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceClient__get_RemoteVoiceInfos_d__40() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient__get_RemoteVoiceInfos_d__40", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceClient__get_RemoteVoiceInfos_d__40(VoiceClient__get_RemoteVoiceInfos_d__40 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient__get_RemoteVoiceInfos_d__40", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceClient__get_RemoteVoiceInfos_d__40(VoiceClient__get_RemoteVoiceInfos_d__40 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28463};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::Photon::Voice::RemoteVoiceInfo*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Photon::Voice::VoiceClient*  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x28, def value: None
 ::GlobalNamespace::Dictionary_2_Enumerator<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>  _____7__wrap1;

/// @brief Field <playerVoices>5__3, offset: 0x58, size: 0x10, def value: None
 ::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>  ____playerVoices_5__3;

/// @brief Field <>7__wrap3, offset: 0x68, size: 0x28, def value: None
 ::GlobalNamespace::Dictionary_2_Enumerator<uint8_t,::Photon::Voice::RemoteVoice*>  _____7__wrap3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40, ____playerVoices_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40, _____7__wrap3) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40) == 0x90, "Size mismatch!");

} // namespace end def Photon::Voice
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.VoiceClient/<>c__DisplayClass52_3
class CORDL_TYPE VoiceClient___c__DisplayClass52_3 : public ::System::Object {
public:
// Declarations
/// @brief Field localVoice, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_localVoice, put=__cordl_internal_set_localVoice)) ::Photon::Voice::LocalVoiceAudio_1<int16_t>*  localVoice;

static inline ::Photon::Voice::VoiceClient___c__DisplayClass52_3* New_ctor() ;

/// @brief Method <CreateLocalVoiceAudioFromSource>b__3, addr 0xa7529f4, size 0x58, virtual false, abstract: false, final false
inline void _CreateLocalVoiceAudioFromSource_b__3(::ArrayW<int16_t>  buf) ;

constexpr ::Photon::Voice::LocalVoiceAudio_1<int16_t>* const& __cordl_internal_get_localVoice() const;

constexpr ::Photon::Voice::LocalVoiceAudio_1<int16_t>*& __cordl_internal_get_localVoice() ;

constexpr void __cordl_internal_set_localVoice(::Photon::Voice::LocalVoiceAudio_1<int16_t>*  value) ;

/// @brief Method .ctor, addr 0xa74f704, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceClient___c__DisplayClass52_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient___c__DisplayClass52_3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceClient___c__DisplayClass52_3(VoiceClient___c__DisplayClass52_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient___c__DisplayClass52_3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceClient___c__DisplayClass52_3(VoiceClient___c__DisplayClass52_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28462};

/// @brief Field localVoice, offset: 0x10, size: 0x8, def value: None
 ::Photon::Voice::LocalVoiceAudio_1<int16_t>*  ___localVoice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::VoiceClient___c__DisplayClass52_3, ___localVoice) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::VoiceClient___c__DisplayClass52_3) == 0x18, "Size mismatch!");

} // namespace end def Photon::Voice
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.VoiceClient/<>c__DisplayClass52_2
class CORDL_TYPE VoiceClient___c__DisplayClass52_2 : public ::System::Object {
public:
// Declarations
/// @brief Field localVoice, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_localVoice, put=__cordl_internal_set_localVoice)) ::Photon::Voice::LocalVoiceAudio_1<float_t>*  localVoice;

static inline ::Photon::Voice::VoiceClient___c__DisplayClass52_2* New_ctor() ;

/// @brief Method <CreateLocalVoiceAudioFromSource>b__2, addr 0xa752948, size 0xac, virtual false, abstract: false, final false
inline void _CreateLocalVoiceAudioFromSource_b__2(::ArrayW<int16_t>  buf) ;

constexpr ::Photon::Voice::LocalVoiceAudio_1<float_t>* const& __cordl_internal_get_localVoice() const;

constexpr ::Photon::Voice::LocalVoiceAudio_1<float_t>*& __cordl_internal_get_localVoice() ;

constexpr void __cordl_internal_set_localVoice(::Photon::Voice::LocalVoiceAudio_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xa74f6fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceClient___c__DisplayClass52_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient___c__DisplayClass52_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceClient___c__DisplayClass52_2(VoiceClient___c__DisplayClass52_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient___c__DisplayClass52_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceClient___c__DisplayClass52_2(VoiceClient___c__DisplayClass52_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28461};

/// @brief Field localVoice, offset: 0x10, size: 0x8, def value: None
 ::Photon::Voice::LocalVoiceAudio_1<float_t>*  ___localVoice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::VoiceClient___c__DisplayClass52_2, ___localVoice) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::VoiceClient___c__DisplayClass52_2) == 0x18, "Size mismatch!");

} // namespace end def Photon::Voice
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.VoiceClient/<>c__DisplayClass52_1
class CORDL_TYPE VoiceClient___c__DisplayClass52_1 : public ::System::Object {
public:
// Declarations
/// @brief Field localVoice, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_localVoice, put=__cordl_internal_set_localVoice)) ::Photon::Voice::LocalVoiceAudio_1<float_t>*  localVoice;

static inline ::Photon::Voice::VoiceClient___c__DisplayClass52_1* New_ctor() ;

/// @brief Method <CreateLocalVoiceAudioFromSource>b__1, addr 0xa7528f0, size 0x58, virtual false, abstract: false, final false
inline void _CreateLocalVoiceAudioFromSource_b__1(::ArrayW<float_t>  buf) ;

constexpr ::Photon::Voice::LocalVoiceAudio_1<float_t>* const& __cordl_internal_get_localVoice() const;

constexpr ::Photon::Voice::LocalVoiceAudio_1<float_t>*& __cordl_internal_get_localVoice() ;

constexpr void __cordl_internal_set_localVoice(::Photon::Voice::LocalVoiceAudio_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xa74f6f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceClient___c__DisplayClass52_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient___c__DisplayClass52_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceClient___c__DisplayClass52_1(VoiceClient___c__DisplayClass52_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient___c__DisplayClass52_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceClient___c__DisplayClass52_1(VoiceClient___c__DisplayClass52_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28460};

/// @brief Field localVoice, offset: 0x10, size: 0x8, def value: None
 ::Photon::Voice::LocalVoiceAudio_1<float_t>*  ___localVoice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::VoiceClient___c__DisplayClass52_1, ___localVoice) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::VoiceClient___c__DisplayClass52_1) == 0x18, "Size mismatch!");

} // namespace end def Photon::Voice
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.VoiceClient/<>c__DisplayClass52_0
class CORDL_TYPE VoiceClient___c__DisplayClass52_0 : public ::System::Object {
public:
// Declarations
/// @brief Field localVoice, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_localVoice, put=__cordl_internal_set_localVoice)) ::Photon::Voice::LocalVoiceAudio_1<int16_t>*  localVoice;

static inline ::Photon::Voice::VoiceClient___c__DisplayClass52_0* New_ctor() ;

/// @brief Method <CreateLocalVoiceAudioFromSource>b__0, addr 0xa752844, size 0xac, virtual false, abstract: false, final false
inline void _CreateLocalVoiceAudioFromSource_b__0(::ArrayW<float_t>  buf) ;

constexpr ::Photon::Voice::LocalVoiceAudio_1<int16_t>* const& __cordl_internal_get_localVoice() const;

constexpr ::Photon::Voice::LocalVoiceAudio_1<int16_t>*& __cordl_internal_get_localVoice() ;

constexpr void __cordl_internal_set_localVoice(::Photon::Voice::LocalVoiceAudio_1<int16_t>*  value) ;

/// @brief Method .ctor, addr 0xa74f6ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceClient___c__DisplayClass52_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient___c__DisplayClass52_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceClient___c__DisplayClass52_0(VoiceClient___c__DisplayClass52_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient___c__DisplayClass52_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceClient___c__DisplayClass52_0(VoiceClient___c__DisplayClass52_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28459};

/// @brief Field localVoice, offset: 0x10, size: 0x8, def value: None
 ::Photon::Voice::LocalVoiceAudio_1<int16_t>*  ___localVoice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::VoiceClient___c__DisplayClass52_0, ___localVoice) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::VoiceClient___c__DisplayClass52_0) == 0x18, "Size mismatch!");

} // namespace end def Photon::Voice
// [CompilerGenerated]
// Dependencies Photon.Voice.VoiceInfo, System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.VoiceClient/<>c__DisplayClass51_0`1<T>
class CORDL_TYPE VoiceClient___c__DisplayClass51_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Photon::Voice::VoiceClient*  __4__this;

/// @brief Field audioSourceDesc, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSourceDesc, put=__cordl_internal_set_audioSourceDesc)) ::Photon::Voice::IAudioDesc*  audioSourceDesc;

/// @brief Field encoder, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_encoder, put=__cordl_internal_set_encoder)) ::Photon::Voice::IEncoder*  encoder;

/// @brief Field voiceInfo, offset 0x20, size 0x30 
 __declspec(property(get=__cordl_internal_get_voiceInfo, put=__cordl_internal_set_voiceInfo)) ::Photon::Voice::VoiceInfo  voiceInfo;

static inline ::Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>* New_ctor() ;

/// @brief Method <CreateLocalVoiceAudio>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Photon::Voice::LocalVoice* _CreateLocalVoiceAudio_b__0(uint8_t  vId, int32_t  chId) ;

constexpr ::Photon::Voice::VoiceClient* const& __cordl_internal_get___4__this() const;

constexpr ::Photon::Voice::VoiceClient*& __cordl_internal_get___4__this() ;

constexpr ::Photon::Voice::IAudioDesc* const& __cordl_internal_get_audioSourceDesc() const;

constexpr ::Photon::Voice::IAudioDesc*& __cordl_internal_get_audioSourceDesc() ;

constexpr ::Photon::Voice::IEncoder* const& __cordl_internal_get_encoder() const;

constexpr ::Photon::Voice::IEncoder*& __cordl_internal_get_encoder() ;

constexpr ::Photon::Voice::VoiceInfo const& __cordl_internal_get_voiceInfo() const;

constexpr ::Photon::Voice::VoiceInfo& __cordl_internal_get_voiceInfo() ;

constexpr void __cordl_internal_set___4__this(::Photon::Voice::VoiceClient*  value) ;

constexpr void __cordl_internal_set_audioSourceDesc(::Photon::Voice::IAudioDesc*  value) ;

constexpr void __cordl_internal_set_encoder(::Photon::Voice::IEncoder*  value) ;

constexpr void __cordl_internal_set_voiceInfo(::Photon::Voice::VoiceInfo  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceClient___c__DisplayClass51_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient___c__DisplayClass51_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceClient___c__DisplayClass51_0_1(VoiceClient___c__DisplayClass51_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient___c__DisplayClass51_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceClient___c__DisplayClass51_0_1(VoiceClient___c__DisplayClass51_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28458};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Photon::Voice::VoiceClient*  _____4__this;

/// @brief Field encoder, offset: 0x18, size: 0x8, def value: None
 ::Photon::Voice::IEncoder*  ___encoder;

/// @brief Field voiceInfo, offset: 0x20, size: 0x30, def value: None
 ::Photon::Voice::VoiceInfo  ___voiceInfo;

/// @brief Field audioSourceDesc, offset: 0x50, size: 0x8, def value: None
 ::Photon::Voice::IAudioDesc*  ___audioSourceDesc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
// [CompilerGenerated]
// Dependencies Photon.Voice.VoiceInfo, System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.VoiceClient/<>c__DisplayClass50_0`1<T>
class CORDL_TYPE VoiceClient___c__DisplayClass50_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Photon::Voice::VoiceClient*  __4__this;

/// @brief Field encoder, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_encoder, put=__cordl_internal_set_encoder)) ::Photon::Voice::IEncoder*  encoder;

/// @brief Field frameSize, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameSize, put=__cordl_internal_set_frameSize)) int32_t  frameSize;

/// @brief Field voiceInfo, offset 0x20, size 0x30 
 __declspec(property(get=__cordl_internal_get_voiceInfo, put=__cordl_internal_set_voiceInfo)) ::Photon::Voice::VoiceInfo  voiceInfo;

static inline ::Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>* New_ctor() ;

/// @brief Method <CreateLocalVoiceFramed>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Photon::Voice::LocalVoice* _CreateLocalVoiceFramed_b__0(uint8_t  vId, int32_t  chId) ;

constexpr ::Photon::Voice::VoiceClient* const& __cordl_internal_get___4__this() const;

constexpr ::Photon::Voice::VoiceClient*& __cordl_internal_get___4__this() ;

constexpr ::Photon::Voice::IEncoder* const& __cordl_internal_get_encoder() const;

constexpr ::Photon::Voice::IEncoder*& __cordl_internal_get_encoder() ;

constexpr int32_t const& __cordl_internal_get_frameSize() const;

constexpr int32_t& __cordl_internal_get_frameSize() ;

constexpr ::Photon::Voice::VoiceInfo const& __cordl_internal_get_voiceInfo() const;

constexpr ::Photon::Voice::VoiceInfo& __cordl_internal_get_voiceInfo() ;

constexpr void __cordl_internal_set___4__this(::Photon::Voice::VoiceClient*  value) ;

constexpr void __cordl_internal_set_encoder(::Photon::Voice::IEncoder*  value) ;

constexpr void __cordl_internal_set_frameSize(int32_t  value) ;

constexpr void __cordl_internal_set_voiceInfo(::Photon::Voice::VoiceInfo  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceClient___c__DisplayClass50_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient___c__DisplayClass50_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceClient___c__DisplayClass50_0_1(VoiceClient___c__DisplayClass50_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient___c__DisplayClass50_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceClient___c__DisplayClass50_0_1(VoiceClient___c__DisplayClass50_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28457};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Photon::Voice::VoiceClient*  _____4__this;

/// @brief Field encoder, offset: 0x18, size: 0x8, def value: None
 ::Photon::Voice::IEncoder*  ___encoder;

/// @brief Field voiceInfo, offset: 0x20, size: 0x30, def value: None
 ::Photon::Voice::VoiceInfo  ___voiceInfo;

/// @brief Field frameSize, offset: 0x50, size: 0x4, def value: None
 int32_t  ___frameSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
// [CompilerGenerated]
// Dependencies Photon.Voice.VoiceInfo, System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.VoiceClient/<>c__DisplayClass49_0
class CORDL_TYPE VoiceClient___c__DisplayClass49_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Photon::Voice::VoiceClient*  __4__this;

/// @brief Field encoder, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_encoder, put=__cordl_internal_set_encoder)) ::Photon::Voice::IEncoder*  encoder;

/// @brief Field voiceInfo, offset 0x20, size 0x30 
 __declspec(property(get=__cordl_internal_get_voiceInfo, put=__cordl_internal_set_voiceInfo)) ::Photon::Voice::VoiceInfo  voiceInfo;

static inline ::Photon::Voice::VoiceClient___c__DisplayClass49_0* New_ctor() ;

/// @brief Method <CreateLocalVoice>b__0, addr 0xa7527b0, size 0x94, virtual false, abstract: false, final false
inline ::Photon::Voice::LocalVoice* _CreateLocalVoice_b__0(uint8_t  vId, int32_t  chId) ;

constexpr ::Photon::Voice::VoiceClient* const& __cordl_internal_get___4__this() const;

constexpr ::Photon::Voice::VoiceClient*& __cordl_internal_get___4__this() ;

constexpr ::Photon::Voice::IEncoder* const& __cordl_internal_get_encoder() const;

constexpr ::Photon::Voice::IEncoder*& __cordl_internal_get_encoder() ;

constexpr ::Photon::Voice::VoiceInfo const& __cordl_internal_get_voiceInfo() const;

constexpr ::Photon::Voice::VoiceInfo& __cordl_internal_get_voiceInfo() ;

constexpr void __cordl_internal_set___4__this(::Photon::Voice::VoiceClient*  value) ;

constexpr void __cordl_internal_set_encoder(::Photon::Voice::IEncoder*  value) ;

constexpr void __cordl_internal_set_voiceInfo(::Photon::Voice::VoiceInfo  value) ;

/// @brief Method .ctor, addr 0xa74e910, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceClient___c__DisplayClass49_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient___c__DisplayClass49_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceClient___c__DisplayClass49_0(VoiceClient___c__DisplayClass49_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient___c__DisplayClass49_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceClient___c__DisplayClass49_0(VoiceClient___c__DisplayClass49_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28456};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Photon::Voice::VoiceClient*  _____4__this;

/// @brief Field encoder, offset: 0x18, size: 0x8, def value: None
 ::Photon::Voice::IEncoder*  ___encoder;

/// @brief Field voiceInfo, offset: 0x20, size: 0x30, def value: None
 ::Photon::Voice::VoiceInfo  ___voiceInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::VoiceClient___c__DisplayClass49_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient___c__DisplayClass49_0, ___encoder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceClient___c__DisplayClass49_0, ___voiceInfo) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::VoiceClient___c__DisplayClass49_0) == 0x50, "Size mismatch!");

} // namespace end def Photon::Voice
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.VoiceClient/<>c
class CORDL_TYPE VoiceClient___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Photon::Voice::VoiceClient___c*  __9;

/// @brief Field <>9__61_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__61_0, put=setStaticF___9__61_0)) ::System::Func_2<::Photon::Voice::LocalVoice*,bool>*  __9__61_0;

static inline ::Photon::Voice::VoiceClient___c* New_ctor() ;

/// @brief Method .ctor, addr 0xa752794, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <sendVoicesInfoAndConfigFrame>b__61_0, addr 0xa75279c, size 0x14, virtual false, abstract: false, final false
inline bool _sendVoicesInfoAndConfigFrame_b__61_0(::Photon::Voice::LocalVoice*  x) ;

static inline ::Photon::Voice::VoiceClient___c* getStaticF___9() ;

static inline ::System::Func_2<::Photon::Voice::LocalVoice*,bool>* getStaticF___9__61_0() ;

static inline void setStaticF___9(::Photon::Voice::VoiceClient___c*  value) ;

static inline void setStaticF___9__61_0(::System::Func_2<::Photon::Voice::LocalVoice*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceClient___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceClient___c(VoiceClient___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceClient___c(VoiceClient___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28455};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::VoiceClient___c) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice
// Dependencies System.MulticastDelegate
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate
class CORDL_TYPE VoiceClient_RemoteVoiceInfoDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa7525b0, size 0x118, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  channelId, int32_t  playerId, uint8_t  voiceId, ::Photon::Voice::VoiceInfo  voiceInfo, ::by_ref<::Photon::Voice::RemoteVoiceOptions>  options, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa7526c8, size 0x18, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::Photon::Voice::RemoteVoiceOptions>  options, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa752574, size 0x3c, virtual true, abstract: false, final false
inline void Invoke(int32_t  channelId, int32_t  playerId, uint8_t  voiceId, ::Photon::Voice::VoiceInfo  voiceInfo, ::by_ref<::Photon::Voice::RemoteVoiceOptions>  options) ;

static inline ::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa7524d4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceClient_RemoteVoiceInfoDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient_RemoteVoiceInfoDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceClient_RemoteVoiceInfoDelegate(VoiceClient_RemoteVoiceInfoDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceClient_RemoteVoiceInfoDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceClient_RemoteVoiceInfoDelegate(VoiceClient_RemoteVoiceInfoDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28453};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate) == 0x80, "Size mismatch!");

} // namespace end def Photon::Voice
