#pragma once
// IWYU pragma private; include "Photon/Voice/WebRTCAudioProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__WebRTCAudioLib_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WebRTCAudioProcessor)
namespace GlobalNamespace {
struct WebRTCAudioLib_Param;
}
namespace Photon::Voice {
template<typename T>
class FactoryPrimitiveArrayPool_1;
}
namespace Photon::Voice {
template<typename T>
class Framer_1;
}
namespace Photon::Voice {
class ILogger;
}
namespace Photon::Voice {
template<typename T>
class IProcessor_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Threading {
class AutoResetEvent;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
class WebRTCAudioProcessor;
}
// Write type traits
MARK_REF_T(::Photon::Voice::WebRTCAudioProcessor*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::WebRTCAudioProcessor*, "Photon.Voice", "WebRTCAudioProcessor");
// Dependencies Photon.Voice.WebRTCAudioLib, System.IntPtr
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.WebRTCAudioProcessor
class CORDL_TYPE WebRTCAudioProcessor : public ::Photon::Voice::WebRTCAudioLib {
public:
// Declarations
 __declspec(property(put=set_AEC)) bool  AEC;

 __declspec(property(put=set_AECHighPass)) bool  AECHighPass;

 __declspec(property(put=set_AECMobile)) bool  AECMobile;

 __declspec(property(put=set_AECStreamDelayMs)) int32_t  AECStreamDelayMs;

 __declspec(property(put=set_AGC)) bool  AGC;

 __declspec(property(put=set_AGC2)) bool  AGC2;

 __declspec(property(put=set_AGCCompressionGain)) int32_t  AGCCompressionGain;

 __declspec(property(put=set_AGCTargetLevel)) int32_t  AGCTargetLevel;

 __declspec(property(get=get_Bypass, put=set_Bypass)) bool  Bypass;

 __declspec(property(put=set_HighPass)) bool  HighPass;

 __declspec(property(put=set_NoiseSuppression)) bool  NoiseSuppression;

/// @brief Field SupportedSamplingRates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SupportedSamplingRates, put=setStaticF_SupportedSamplingRates)) ::ArrayW<int32_t>  SupportedSamplingRates;

 __declspec(property(put=set_VAD)) bool  VAD;

/// @brief Field aec, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_aec, put=__cordl_internal_set_aec)) bool  aec;

/// @brief Field aecHighPass, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_aecHighPass, put=__cordl_internal_set_aecHighPass)) bool  aecHighPass;

/// @brief Field aecInited, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_aecInited, put=__cordl_internal_set_aecInited)) bool  aecInited;

/// @brief Field aecm, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get_aecm, put=__cordl_internal_set_aecm)) bool  aecm;

/// @brief Field agc, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_agc, put=__cordl_internal_set_agc)) bool  agc;

/// @brief Field agc2, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_agc2, put=__cordl_internal_set_agc2)) bool  agc2;

/// @brief Field agcCompressionGain, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_agcCompressionGain, put=__cordl_internal_set_agcCompressionGain)) int32_t  agcCompressionGain;

/// @brief Field agcTargetLevel, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_agcTargetLevel, put=__cordl_internal_set_agcTargetLevel)) int32_t  agcTargetLevel;

/// @brief Field bypass, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_bypass, put=__cordl_internal_set_bypass)) bool  bypass;

/// @brief Field channels, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) int32_t  channels;

/// @brief Field disposed, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_disposed, put=__cordl_internal_set_disposed)) bool  disposed;

/// @brief Field highPass, offset 0x17, size 0x1 
 __declspec(property(get=__cordl_internal_get_highPass, put=__cordl_internal_set_highPass)) bool  highPass;

/// @brief Field inFrameSize, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_inFrameSize, put=__cordl_internal_set_inFrameSize)) int32_t  inFrameSize;

/// @brief Field lastProcessErr, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastProcessErr, put=__cordl_internal_set_lastProcessErr)) int32_t  lastProcessErr;

/// @brief Field lastProcessReverseErr, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastProcessReverseErr, put=__cordl_internal_set_lastProcessReverseErr)) int32_t  lastProcessReverseErr;

/// @brief Field logger, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::Photon::Voice::ILogger*  logger;

/// @brief Field ns, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_ns, put=__cordl_internal_set_ns)) bool  ns;

/// @brief Field proc, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_proc, put=__cordl_internal_set_proc)) ::System::IntPtr  proc;

/// @brief Field processFrameSize, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_processFrameSize, put=__cordl_internal_set_processFrameSize)) int32_t  processFrameSize;

/// @brief Field reverseBufferFactory, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_reverseBufferFactory, put=__cordl_internal_set_reverseBufferFactory)) ::Photon::Voice::FactoryPrimitiveArrayPool_1<int16_t>*  reverseBufferFactory;

/// @brief Field reverseChannels, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_reverseChannels, put=__cordl_internal_set_reverseChannels)) int32_t  reverseChannels;

/// @brief Field reverseFramer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_reverseFramer, put=__cordl_internal_set_reverseFramer)) ::Photon::Voice::Framer_1<float_t>*  reverseFramer;

/// @brief Field reverseSamplingRate, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_reverseSamplingRate, put=__cordl_internal_set_reverseSamplingRate)) int32_t  reverseSamplingRate;

/// @brief Field reverseStreamDelayMs, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_reverseStreamDelayMs, put=__cordl_internal_set_reverseStreamDelayMs)) int32_t  reverseStreamDelayMs;

/// @brief Field reverseStreamQueue, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_reverseStreamQueue, put=__cordl_internal_set_reverseStreamQueue)) ::System::Collections::Generic::Queue_1<::ArrayW<int16_t>>*  reverseStreamQueue;

/// @brief Field reverseStreamQueueReady, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_reverseStreamQueueReady, put=__cordl_internal_set_reverseStreamQueueReady)) ::System::Threading::AutoResetEvent*  reverseStreamQueueReady;

/// @brief Field reverseStreamThreadRunning, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get_reverseStreamThreadRunning, put=__cordl_internal_set_reverseStreamThreadRunning)) bool  reverseStreamThreadRunning;

/// @brief Field samplingRate, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_samplingRate, put=__cordl_internal_set_samplingRate)) int32_t  samplingRate;

/// @brief Field vad, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_vad, put=__cordl_internal_set_vad)) bool  vad;

/// @brief Convert operator to "::Photon::Voice::IProcessor_1<int16_t>"
constexpr operator  ::Photon::Voice::IProcessor_1<int16_t>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa756b78, size 0x328, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method InitReverseStream, addr 0xa754700, size 0x5ec, virtual false, abstract: false, final false
inline void InitReverseStream() ;

static inline ::Photon::Voice::WebRTCAudioProcessor* New_ctor(::Photon::Voice::ILogger*  logger, int32_t  frameSize, int32_t  samplingRate, int32_t  channels, int32_t  reverseSamplingRate, int32_t  reverseChannels) ;

/// @brief Method OnAudioOutFrameFloat, addr 0xa755e90, size 0x5e0, virtual false, abstract: false, final false
inline void OnAudioOutFrameFloat(::ArrayW<float_t>  data) ;

/// @brief Method Process, addr 0xa755ac0, size 0x318, virtual true, abstract: false, final true
inline ::ArrayW<int16_t> Process(::ArrayW<int16_t>  buf) ;

/// @brief Method ReverseStreamThread, addr 0xa756470, size 0x5d8, virtual false, abstract: false, final false
inline void ReverseStreamThread() ;

constexpr bool const& __cordl_internal_get_aec() const;

constexpr bool& __cordl_internal_get_aec() ;

constexpr bool const& __cordl_internal_get_aecHighPass() const;

constexpr bool& __cordl_internal_get_aecHighPass() ;

constexpr bool const& __cordl_internal_get_aecInited() const;

constexpr bool& __cordl_internal_get_aecInited() ;

constexpr bool const& __cordl_internal_get_aecm() const;

constexpr bool& __cordl_internal_get_aecm() ;

constexpr bool const& __cordl_internal_get_agc() const;

constexpr bool& __cordl_internal_get_agc() ;

constexpr bool const& __cordl_internal_get_agc2() const;

constexpr bool& __cordl_internal_get_agc2() ;

constexpr int32_t const& __cordl_internal_get_agcCompressionGain() const;

constexpr int32_t& __cordl_internal_get_agcCompressionGain() ;

constexpr int32_t const& __cordl_internal_get_agcTargetLevel() const;

constexpr int32_t& __cordl_internal_get_agcTargetLevel() ;

constexpr bool const& __cordl_internal_get_bypass() const;

constexpr bool& __cordl_internal_get_bypass() ;

constexpr int32_t const& __cordl_internal_get_channels() const;

constexpr int32_t& __cordl_internal_get_channels() ;

constexpr bool const& __cordl_internal_get_disposed() const;

constexpr bool& __cordl_internal_get_disposed() ;

constexpr bool const& __cordl_internal_get_highPass() const;

constexpr bool& __cordl_internal_get_highPass() ;

constexpr int32_t const& __cordl_internal_get_inFrameSize() const;

constexpr int32_t& __cordl_internal_get_inFrameSize() ;

constexpr int32_t const& __cordl_internal_get_lastProcessErr() const;

constexpr int32_t& __cordl_internal_get_lastProcessErr() ;

constexpr int32_t const& __cordl_internal_get_lastProcessReverseErr() const;

constexpr int32_t& __cordl_internal_get_lastProcessReverseErr() ;

constexpr ::Photon::Voice::ILogger* const& __cordl_internal_get_logger() const;

constexpr ::Photon::Voice::ILogger*& __cordl_internal_get_logger() ;

constexpr bool const& __cordl_internal_get_ns() const;

constexpr bool& __cordl_internal_get_ns() ;

constexpr ::System::IntPtr const& __cordl_internal_get_proc() const;

constexpr ::System::IntPtr& __cordl_internal_get_proc() ;

constexpr int32_t const& __cordl_internal_get_processFrameSize() const;

constexpr int32_t& __cordl_internal_get_processFrameSize() ;

constexpr ::Photon::Voice::FactoryPrimitiveArrayPool_1<int16_t>* const& __cordl_internal_get_reverseBufferFactory() const;

constexpr ::Photon::Voice::FactoryPrimitiveArrayPool_1<int16_t>*& __cordl_internal_get_reverseBufferFactory() ;

constexpr int32_t const& __cordl_internal_get_reverseChannels() const;

constexpr int32_t& __cordl_internal_get_reverseChannels() ;

constexpr ::Photon::Voice::Framer_1<float_t>* const& __cordl_internal_get_reverseFramer() const;

constexpr ::Photon::Voice::Framer_1<float_t>*& __cordl_internal_get_reverseFramer() ;

constexpr int32_t const& __cordl_internal_get_reverseSamplingRate() const;

constexpr int32_t& __cordl_internal_get_reverseSamplingRate() ;

constexpr int32_t const& __cordl_internal_get_reverseStreamDelayMs() const;

constexpr int32_t& __cordl_internal_get_reverseStreamDelayMs() ;

constexpr ::System::Collections::Generic::Queue_1<::ArrayW<int16_t>>* const& __cordl_internal_get_reverseStreamQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::ArrayW<int16_t>>*& __cordl_internal_get_reverseStreamQueue() ;

constexpr ::System::Threading::AutoResetEvent* const& __cordl_internal_get_reverseStreamQueueReady() const;

constexpr ::System::Threading::AutoResetEvent*& __cordl_internal_get_reverseStreamQueueReady() ;

constexpr bool const& __cordl_internal_get_reverseStreamThreadRunning() const;

constexpr bool& __cordl_internal_get_reverseStreamThreadRunning() ;

constexpr int32_t const& __cordl_internal_get_samplingRate() const;

constexpr int32_t& __cordl_internal_get_samplingRate() ;

constexpr bool const& __cordl_internal_get_vad() const;

constexpr bool& __cordl_internal_get_vad() ;

constexpr void __cordl_internal_set_aec(bool  value) ;

constexpr void __cordl_internal_set_aecHighPass(bool  value) ;

constexpr void __cordl_internal_set_aecInited(bool  value) ;

constexpr void __cordl_internal_set_aecm(bool  value) ;

constexpr void __cordl_internal_set_agc(bool  value) ;

constexpr void __cordl_internal_set_agc2(bool  value) ;

constexpr void __cordl_internal_set_agcCompressionGain(int32_t  value) ;

constexpr void __cordl_internal_set_agcTargetLevel(int32_t  value) ;

constexpr void __cordl_internal_set_bypass(bool  value) ;

constexpr void __cordl_internal_set_channels(int32_t  value) ;

constexpr void __cordl_internal_set_disposed(bool  value) ;

constexpr void __cordl_internal_set_highPass(bool  value) ;

constexpr void __cordl_internal_set_inFrameSize(int32_t  value) ;

constexpr void __cordl_internal_set_lastProcessErr(int32_t  value) ;

constexpr void __cordl_internal_set_lastProcessReverseErr(int32_t  value) ;

constexpr void __cordl_internal_set_logger(::Photon::Voice::ILogger*  value) ;

constexpr void __cordl_internal_set_ns(bool  value) ;

constexpr void __cordl_internal_set_proc(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_processFrameSize(int32_t  value) ;

constexpr void __cordl_internal_set_reverseBufferFactory(::Photon::Voice::FactoryPrimitiveArrayPool_1<int16_t>*  value) ;

constexpr void __cordl_internal_set_reverseChannels(int32_t  value) ;

constexpr void __cordl_internal_set_reverseFramer(::Photon::Voice::Framer_1<float_t>*  value) ;

constexpr void __cordl_internal_set_reverseSamplingRate(int32_t  value) ;

constexpr void __cordl_internal_set_reverseStreamDelayMs(int32_t  value) ;

constexpr void __cordl_internal_set_reverseStreamQueue(::System::Collections::Generic::Queue_1<::ArrayW<int16_t>>*  value) ;

constexpr void __cordl_internal_set_reverseStreamQueueReady(::System::Threading::AutoResetEvent*  value) ;

constexpr void __cordl_internal_set_reverseStreamThreadRunning(bool  value) ;

constexpr void __cordl_internal_set_samplingRate(int32_t  value) ;

constexpr void __cordl_internal_set_vad(bool  value) ;

/// @brief Method .ctor, addr 0xa75530c, size 0x684, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::ILogger*  logger, int32_t  frameSize, int32_t  samplingRate, int32_t  channels, int32_t  reverseSamplingRate, int32_t  reverseChannels) ;

static inline ::ArrayW<int32_t> getStaticF_SupportedSamplingRates() ;

/// @brief Method get_Bypass, addr 0xa755304, size 0x8, virtual false, abstract: false, final false
inline bool get_Bypass() ;

/// @brief Convert to "::Photon::Voice::IProcessor_1<int16_t>"
constexpr ::Photon::Voice::IProcessor_1<int16_t>* i___Photon__Voice__IProcessor_1_int16_t_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method setParam, addr 0xa7544c4, size 0x1dc, virtual false, abstract: false, final false
inline int32_t setParam(::GlobalNamespace::WebRTCAudioLib_Param  param, int32_t  v) ;

static inline void setStaticF_SupportedSamplingRates(::ArrayW<int32_t>  value) ;

/// @brief Method set_AEC, addr 0xa7546a0, size 0x60, virtual false, abstract: false, final false
inline void set_AEC(bool  value) ;

/// @brief Method set_AECHighPass, addr 0xa754cec, size 0x2c, virtual false, abstract: false, final false
inline void set_AECHighPass(bool  value) ;

/// @brief Method set_AECMobile, addr 0xa754d18, size 0x60, virtual false, abstract: false, final false
inline void set_AECMobile(bool  value) ;

/// @brief Method set_AECStreamDelayMs, addr 0xa75449c, size 0x28, virtual false, abstract: false, final false
inline void set_AECStreamDelayMs(int32_t  value) ;

/// @brief Method set_AGC, addr 0xa754dd0, size 0x2c, virtual false, abstract: false, final false
inline void set_AGC(bool  value) ;

/// @brief Method set_AGC2, addr 0xa75511c, size 0x2c, virtual false, abstract: false, final false
inline void set_AGC2(bool  value) ;

/// @brief Method set_AGCCompressionGain, addr 0xa754dfc, size 0x190, virtual false, abstract: false, final false
inline void set_AGCCompressionGain(int32_t  value) ;

/// @brief Method set_AGCTargetLevel, addr 0xa754f8c, size 0x190, virtual false, abstract: false, final false
inline void set_AGCTargetLevel(int32_t  value) ;

/// @brief Method set_Bypass, addr 0xa755174, size 0x190, virtual false, abstract: false, final false
inline void set_Bypass(bool  value) ;

/// @brief Method set_HighPass, addr 0xa754d78, size 0x2c, virtual false, abstract: false, final false
inline void set_HighPass(bool  value) ;

/// @brief Method set_NoiseSuppression, addr 0xa754da4, size 0x2c, virtual false, abstract: false, final false
inline void set_NoiseSuppression(bool  value) ;

/// @brief Method set_VAD, addr 0xa755148, size 0x2c, virtual false, abstract: false, final false
inline void set_VAD(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRTCAudioProcessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRTCAudioProcessor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRTCAudioProcessor(WebRTCAudioProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRTCAudioProcessor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRTCAudioProcessor(WebRTCAudioProcessor const& ) = delete;

/// @brief Field REVERSE_BUFFER_POOL_CAPACITY offset 0xffffffff size 0x4
static constexpr int32_t  REVERSE_BUFFER_POOL_CAPACITY{static_cast<int32_t>(0x32)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28497};

/// @brief Field supportedFrameLenMs offset 0xffffffff size 0x4
static constexpr int32_t  supportedFrameLenMs{static_cast<int32_t>(0xa)};

/// @brief Field reverseStreamDelayMs, offset: 0x10, size: 0x4, def value: None
 int32_t  ___reverseStreamDelayMs;

/// @brief Field aec, offset: 0x14, size: 0x1, def value: None
 bool  ___aec;

/// @brief Field aecHighPass, offset: 0x15, size: 0x1, def value: None
 bool  ___aecHighPass;

/// @brief Field aecm, offset: 0x16, size: 0x1, def value: None
 bool  ___aecm;

/// @brief Field highPass, offset: 0x17, size: 0x1, def value: None
 bool  ___highPass;

/// @brief Field ns, offset: 0x18, size: 0x1, def value: None
 bool  ___ns;

/// @brief Field agc, offset: 0x19, size: 0x1, def value: None
 bool  ___agc;

/// @brief Field agcCompressionGain, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___agcCompressionGain;

/// @brief Field agcTargetLevel, offset: 0x20, size: 0x4, def value: None
 int32_t  ___agcTargetLevel;

/// @brief Field agc2, offset: 0x24, size: 0x1, def value: None
 bool  ___agc2;

/// @brief Field vad, offset: 0x25, size: 0x1, def value: None
 bool  ___vad;

/// @brief Field reverseStreamThreadRunning, offset: 0x26, size: 0x1, def value: None
 bool  ___reverseStreamThreadRunning;

/// @brief Field reverseStreamQueue, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::ArrayW<int16_t>>*  ___reverseStreamQueue;

/// @brief Field reverseStreamQueueReady, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::AutoResetEvent*  ___reverseStreamQueueReady;

/// @brief Field reverseBufferFactory, offset: 0x38, size: 0x8, def value: None
 ::Photon::Voice::FactoryPrimitiveArrayPool_1<int16_t>*  ___reverseBufferFactory;

/// @brief Field bypass, offset: 0x40, size: 0x1, def value: None
 bool  ___bypass;

/// @brief Field inFrameSize, offset: 0x44, size: 0x4, def value: None
 int32_t  ___inFrameSize;

/// @brief Field processFrameSize, offset: 0x48, size: 0x4, def value: None
 int32_t  ___processFrameSize;

/// @brief Field samplingRate, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___samplingRate;

/// @brief Field channels, offset: 0x50, size: 0x4, def value: None
 int32_t  ___channels;

/// @brief Field proc, offset: 0x58, size: 0x8, def value: None
 ::System::IntPtr  ___proc;

/// @brief Field disposed, offset: 0x60, size: 0x1, def value: None
 bool  ___disposed;

/// @brief Field reverseFramer, offset: 0x68, size: 0x8, def value: None
 ::Photon::Voice::Framer_1<float_t>*  ___reverseFramer;

/// @brief Field reverseSamplingRate, offset: 0x70, size: 0x4, def value: None
 int32_t  ___reverseSamplingRate;

/// @brief Field reverseChannels, offset: 0x74, size: 0x4, def value: None
 int32_t  ___reverseChannels;

/// @brief Field logger, offset: 0x78, size: 0x8, def value: None
 ::Photon::Voice::ILogger*  ___logger;

/// @brief Field aecInited, offset: 0x80, size: 0x1, def value: None
 bool  ___aecInited;

/// @brief Field lastProcessErr, offset: 0x84, size: 0x4, def value: None
 int32_t  ___lastProcessErr;

/// @brief Field lastProcessReverseErr, offset: 0x88, size: 0x4, def value: None
 int32_t  ___lastProcessReverseErr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___reverseStreamDelayMs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___aec) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___aecHighPass) == 0x15, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___aecm) == 0x16, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___highPass) == 0x17, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___ns) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___agc) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___agcCompressionGain) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___agcTargetLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___agc2) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___vad) == 0x25, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___reverseStreamThreadRunning) == 0x26, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___reverseStreamQueue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___reverseStreamQueueReady) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___reverseBufferFactory) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___bypass) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___inFrameSize) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___processFrameSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___samplingRate) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___channels) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___proc) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___disposed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___reverseFramer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___reverseSamplingRate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___reverseChannels) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___logger) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___aecInited) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___lastProcessErr) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::WebRTCAudioProcessor, ___lastProcessReverseErr) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::WebRTCAudioProcessor) == 0x90, "Size mismatch!");

} // namespace end def Photon::Voice
