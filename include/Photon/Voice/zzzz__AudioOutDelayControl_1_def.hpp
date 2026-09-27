#pragma once
// IWYU pragma private; include "Photon/Voice/AudioOutDelayControl_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__AudioOutDelayControl_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioOutDelayControl_1)
namespace Photon::Voice {
class AudioOutDelayControl_PlayDelayConfig;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_TempoUp_1;
}
namespace Photon::Voice {
template<typename T>
class IAudioOut_1;
}
namespace Photon::Voice {
class ILogger;
}
namespace Photon::Voice {
template<typename T>
class PrimitiveArrayPool_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
// Forward declare root types
namespace Photon::Voice {
template<typename T>
class AudioOutDelayControl_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Photon::Voice::AudioOutDelayControl_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::AudioOutDelayControl_1, "Photon.Voice", "AudioOutDelayControl`1");
// Dependencies Photon.Voice.AudioOutDelayControl
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.AudioOutDelayControl`1<T>
class CORDL_TYPE AudioOutDelayControl_1 : public ::Photon::Voice::AudioOutDelayControl {
public:
// Declarations
 __declspec(property(get=get_IsFlushed)) bool  IsFlushed;

 __declspec(property(get=get_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_Lag)) int32_t  Lag;

 __declspec(property(get=get_OutPos)) int32_t  OutPos;

/// @brief Field bufferSamples, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bufferSamples, put=__cordl_internal_set_bufferSamples)) int32_t  bufferSamples;

/// @brief Field catchingUp, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_catchingUp, put=__cordl_internal_set_catchingUp)) bool  catchingUp;

/// @brief Field channels, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) int32_t  channels;

/// @brief Field clipWriteSamplePos, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_clipWriteSamplePos, put=__cordl_internal_set_clipWriteSamplePos)) int32_t  clipWriteSamplePos;

/// @brief Field debugInfo, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugInfo, put=__cordl_internal_set_debugInfo)) bool  debugInfo;

/// @brief Field flushed, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_flushed, put=__cordl_internal_set_flushed)) bool  flushed;

/// @brief Field framePool, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_framePool, put=__cordl_internal_set_framePool)) ::Photon::Voice::PrimitiveArrayPool_1<T>*  framePool;

/// @brief Field frameQueue, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_frameQueue, put=__cordl_internal_set_frameQueue)) ::System::Collections::Generic::Queue_1<::ArrayW<T>>*  frameQueue;

/// @brief Field frameSamples, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameSamples, put=__cordl_internal_set_frameSamples)) int32_t  frameSamples;

/// @brief Field frameSize, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameSize, put=__cordl_internal_set_frameSize)) int32_t  frameSize;

/// @brief Field frequency, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_frequency, put=__cordl_internal_set_frequency)) int32_t  frequency;

/// @brief Field lastPushTime, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastPushTime, put=__cordl_internal_set_lastPushTime)) int32_t  lastPushTime;

/// @brief Field logPrefix, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_logPrefix, put=__cordl_internal_set_logPrefix)) ::StringW  logPrefix;

/// @brief Field logger, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::Photon::Voice::ILogger*  logger;

/// @brief Field maxDelaySamples, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDelaySamples, put=__cordl_internal_set_maxDelaySamples)) int32_t  maxDelaySamples;

/// @brief Field playDelayConfig, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playDelayConfig, put=__cordl_internal_set_playDelayConfig)) ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  playDelayConfig;

/// @brief Field playLoopCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_playLoopCount, put=__cordl_internal_set_playLoopCount)) int32_t  playLoopCount;

/// @brief Field playSamplePosPrev, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_playSamplePosPrev, put=__cordl_internal_set_playSamplePosPrev)) int32_t  playSamplePosPrev;

/// @brief Field processInService, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_processInService, put=__cordl_internal_set_processInService)) bool  processInService;

/// @brief Field resampledFrame, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_resampledFrame, put=__cordl_internal_set_resampledFrame)) ::ArrayW<T>  resampledFrame;

/// @brief Field sizeofT, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_sizeofT, put=__cordl_internal_set_sizeofT)) int32_t  sizeofT;

/// @brief Field sourceTimeSamplesPrev, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sourceTimeSamplesPrev, put=__cordl_internal_set_sourceTimeSamplesPrev)) int32_t  sourceTimeSamplesPrev;

/// @brief Field started, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_started, put=__cordl_internal_set_started)) bool  started;

/// @brief Field targetDelaySamples, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetDelaySamples, put=__cordl_internal_set_targetDelaySamples)) int32_t  targetDelaySamples;

/// @brief Field tempoChangeHQ, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_tempoChangeHQ, put=__cordl_internal_set_tempoChangeHQ)) bool  tempoChangeHQ;

/// @brief Field tempoUp, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempoUp, put=__cordl_internal_set_tempoUp)) ::Photon::Voice::AudioUtil_TempoUp_1<T>*  tempoUp;

/// @brief Field upperTargetDelaySamples, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_upperTargetDelaySamples, put=__cordl_internal_set_upperTargetDelaySamples)) int32_t  upperTargetDelaySamples;

/// @brief Field zeroFrame, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_zeroFrame, put=__cordl_internal_set_zeroFrame)) ::ArrayW<T>  zeroFrame;

/// @brief Convert operator to "::Photon::Voice::IAudioOut_1<T>"
constexpr operator  ::Photon::Voice::IAudioOut_1<T>*() noexcept;

/// @brief Method Flush, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Flush() ;

static inline ::Photon::Voice::AudioOutDelayControl_1<T>* New_ctor(bool  processInService, ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  playDelayConfig, ::Photon::Voice::ILogger*  logger, ::StringW  logPrefix, bool  debugInfo) ;

/// @brief Method OutCreate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OutCreate(int32_t  frequency, int32_t  channels, int32_t  bufferSamples) ;

/// @brief Method OutStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OutStart() ;

/// @brief Method OutWrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OutWrite(::ArrayW<T>  data, int32_t  offsetSamples) ;

/// @brief Method Push, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Push(::ArrayW<T>  frame) ;

/// @brief Method Service, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Service() ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Start(int32_t  frequency, int32_t  channels, int32_t  frameSamples) ;

/// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Stop() ;

/// @brief Method ToggleAudioSource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ToggleAudioSource(bool  toggle) ;

constexpr int32_t const& __cordl_internal_get_bufferSamples() const;

constexpr int32_t& __cordl_internal_get_bufferSamples() ;

constexpr bool const& __cordl_internal_get_catchingUp() const;

constexpr bool& __cordl_internal_get_catchingUp() ;

constexpr int32_t const& __cordl_internal_get_channels() const;

constexpr int32_t& __cordl_internal_get_channels() ;

constexpr int32_t const& __cordl_internal_get_clipWriteSamplePos() const;

constexpr int32_t& __cordl_internal_get_clipWriteSamplePos() ;

constexpr bool const& __cordl_internal_get_debugInfo() const;

constexpr bool& __cordl_internal_get_debugInfo() ;

constexpr bool const& __cordl_internal_get_flushed() const;

constexpr bool& __cordl_internal_get_flushed() ;

constexpr ::Photon::Voice::PrimitiveArrayPool_1<T>* const& __cordl_internal_get_framePool() const;

constexpr ::Photon::Voice::PrimitiveArrayPool_1<T>*& __cordl_internal_get_framePool() ;

constexpr ::System::Collections::Generic::Queue_1<::ArrayW<T>>* const& __cordl_internal_get_frameQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::ArrayW<T>>*& __cordl_internal_get_frameQueue() ;

constexpr int32_t const& __cordl_internal_get_frameSamples() const;

constexpr int32_t& __cordl_internal_get_frameSamples() ;

constexpr int32_t const& __cordl_internal_get_frameSize() const;

constexpr int32_t& __cordl_internal_get_frameSize() ;

constexpr int32_t const& __cordl_internal_get_frequency() const;

constexpr int32_t& __cordl_internal_get_frequency() ;

constexpr int32_t const& __cordl_internal_get_lastPushTime() const;

constexpr int32_t& __cordl_internal_get_lastPushTime() ;

constexpr ::StringW const& __cordl_internal_get_logPrefix() const;

constexpr ::StringW& __cordl_internal_get_logPrefix() ;

constexpr ::Photon::Voice::ILogger* const& __cordl_internal_get_logger() const;

constexpr ::Photon::Voice::ILogger*& __cordl_internal_get_logger() ;

constexpr int32_t const& __cordl_internal_get_maxDelaySamples() const;

constexpr int32_t& __cordl_internal_get_maxDelaySamples() ;

constexpr ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig* const& __cordl_internal_get_playDelayConfig() const;

constexpr ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*& __cordl_internal_get_playDelayConfig() ;

constexpr int32_t const& __cordl_internal_get_playLoopCount() const;

constexpr int32_t& __cordl_internal_get_playLoopCount() ;

constexpr int32_t const& __cordl_internal_get_playSamplePosPrev() const;

constexpr int32_t& __cordl_internal_get_playSamplePosPrev() ;

constexpr bool const& __cordl_internal_get_processInService() const;

constexpr bool& __cordl_internal_get_processInService() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_resampledFrame() const;

constexpr ::ArrayW<T>& __cordl_internal_get_resampledFrame() ;

constexpr int32_t const& __cordl_internal_get_sizeofT() const;

constexpr int32_t& __cordl_internal_get_sizeofT() ;

constexpr int32_t const& __cordl_internal_get_sourceTimeSamplesPrev() const;

constexpr int32_t& __cordl_internal_get_sourceTimeSamplesPrev() ;

constexpr bool const& __cordl_internal_get_started() const;

constexpr bool& __cordl_internal_get_started() ;

constexpr int32_t const& __cordl_internal_get_targetDelaySamples() const;

constexpr int32_t& __cordl_internal_get_targetDelaySamples() ;

constexpr bool const& __cordl_internal_get_tempoChangeHQ() const;

constexpr bool& __cordl_internal_get_tempoChangeHQ() ;

constexpr ::Photon::Voice::AudioUtil_TempoUp_1<T>* const& __cordl_internal_get_tempoUp() const;

constexpr ::Photon::Voice::AudioUtil_TempoUp_1<T>*& __cordl_internal_get_tempoUp() ;

constexpr int32_t const& __cordl_internal_get_upperTargetDelaySamples() const;

constexpr int32_t& __cordl_internal_get_upperTargetDelaySamples() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_zeroFrame() const;

constexpr ::ArrayW<T>& __cordl_internal_get_zeroFrame() ;

constexpr void __cordl_internal_set_bufferSamples(int32_t  value) ;

constexpr void __cordl_internal_set_catchingUp(bool  value) ;

constexpr void __cordl_internal_set_channels(int32_t  value) ;

constexpr void __cordl_internal_set_clipWriteSamplePos(int32_t  value) ;

constexpr void __cordl_internal_set_debugInfo(bool  value) ;

constexpr void __cordl_internal_set_flushed(bool  value) ;

constexpr void __cordl_internal_set_framePool(::Photon::Voice::PrimitiveArrayPool_1<T>*  value) ;

constexpr void __cordl_internal_set_frameQueue(::System::Collections::Generic::Queue_1<::ArrayW<T>>*  value) ;

constexpr void __cordl_internal_set_frameSamples(int32_t  value) ;

constexpr void __cordl_internal_set_frameSize(int32_t  value) ;

constexpr void __cordl_internal_set_frequency(int32_t  value) ;

constexpr void __cordl_internal_set_lastPushTime(int32_t  value) ;

constexpr void __cordl_internal_set_logPrefix(::StringW  value) ;

constexpr void __cordl_internal_set_logger(::Photon::Voice::ILogger*  value) ;

constexpr void __cordl_internal_set_maxDelaySamples(int32_t  value) ;

constexpr void __cordl_internal_set_playDelayConfig(::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  value) ;

constexpr void __cordl_internal_set_playLoopCount(int32_t  value) ;

constexpr void __cordl_internal_set_playSamplePosPrev(int32_t  value) ;

constexpr void __cordl_internal_set_processInService(bool  value) ;

constexpr void __cordl_internal_set_resampledFrame(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_sizeofT(int32_t  value) ;

constexpr void __cordl_internal_set_sourceTimeSamplesPrev(int32_t  value) ;

constexpr void __cordl_internal_set_started(bool  value) ;

constexpr void __cordl_internal_set_targetDelaySamples(int32_t  value) ;

constexpr void __cordl_internal_set_tempoChangeHQ(bool  value) ;

constexpr void __cordl_internal_set_tempoUp(::Photon::Voice::AudioUtil_TempoUp_1<T>*  value) ;

constexpr void __cordl_internal_set_upperTargetDelaySamples(int32_t  value) ;

constexpr void __cordl_internal_set_zeroFrame(::ArrayW<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(bool  processInService, ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  playDelayConfig, ::Photon::Voice::ILogger*  logger, ::StringW  logPrefix, bool  debugInfo) ;

/// @brief Method get_IsFlushed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsFlushed() ;

/// @brief Method get_IsPlaying, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsPlaying() ;

/// @brief Method get_Lag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Lag() ;

/// @brief Method get_OutPos, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_OutPos() ;

/// @brief Convert to "::Photon::Voice::IAudioOut_1<T>"
constexpr ::Photon::Voice::IAudioOut_1<T>* i___Photon__Voice__IAudioOut_1_T_() noexcept;

/// @brief Method processFrame, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool processFrame(::ArrayW<T>  frame, int32_t  playSamplePos) ;

/// @brief Method writeResampled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t writeResampled(::ArrayW<T>  f, int32_t  resampledLenSamples) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioOutDelayControl_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioOutDelayControl_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioOutDelayControl_1(AudioOutDelayControl_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioOutDelayControl_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioOutDelayControl_1(AudioOutDelayControl_1 const& ) = delete;

/// @brief Field FRAME_POOL_CAPACITY offset 0xffffffff size 0x4
static constexpr int32_t  FRAME_POOL_CAPACITY{static_cast<int32_t>(0x32)};

/// @brief Field NO_PUSH_TIMEOUT_MS offset 0xffffffff size 0x4
static constexpr int32_t  NO_PUSH_TIMEOUT_MS{static_cast<int32_t>(0x64)};

/// @brief Field TEMPO_UP_SKIP_GROUP offset 0xffffffff size 0x4
static constexpr int32_t  TEMPO_UP_SKIP_GROUP{static_cast<int32_t>(0x6)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28399};

/// @brief Field sizeofT, offset: 0x10, size: 0x4, def value: None
 int32_t  ___sizeofT;

/// @brief Field frameSamples, offset: 0x14, size: 0x4, def value: None
 int32_t  ___frameSamples;

/// @brief Field frameSize, offset: 0x18, size: 0x4, def value: None
 int32_t  ___frameSize;

/// @brief Field bufferSamples, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___bufferSamples;

/// @brief Field frequency, offset: 0x20, size: 0x4, def value: None
 int32_t  ___frequency;

/// @brief Field clipWriteSamplePos, offset: 0x24, size: 0x4, def value: None
 int32_t  ___clipWriteSamplePos;

/// @brief Field playSamplePosPrev, offset: 0x28, size: 0x4, def value: None
 int32_t  ___playSamplePosPrev;

/// @brief Field sourceTimeSamplesPrev, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___sourceTimeSamplesPrev;

/// @brief Field playLoopCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___playLoopCount;

/// @brief Field playDelayConfig, offset: 0x38, size: 0x8, def value: None
 ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  ___playDelayConfig;

/// @brief Field channels, offset: 0x40, size: 0x4, def value: None
 int32_t  ___channels;

/// @brief Field started, offset: 0x44, size: 0x1, def value: None
 bool  ___started;

/// @brief Field flushed, offset: 0x45, size: 0x1, def value: None
 bool  ___flushed;

/// @brief Field targetDelaySamples, offset: 0x48, size: 0x4, def value: None
 int32_t  ___targetDelaySamples;

/// @brief Field upperTargetDelaySamples, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___upperTargetDelaySamples;

/// @brief Field maxDelaySamples, offset: 0x50, size: 0x4, def value: None
 int32_t  ___maxDelaySamples;

/// @brief Field lastPushTime, offset: 0x54, size: 0x4, def value: None
 int32_t  ___lastPushTime;

/// @brief Field logger, offset: 0x58, size: 0x8, def value: None
 ::Photon::Voice::ILogger*  ___logger;

/// @brief Field logPrefix, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___logPrefix;

/// @brief Field debugInfo, offset: 0x68, size: 0x1, def value: None
 bool  ___debugInfo;

/// @brief Field processInService, offset: 0x69, size: 0x1, def value: None
 bool  ___processInService;

/// @brief Field zeroFrame, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<T>  ___zeroFrame;

/// @brief Field resampledFrame, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<T>  ___resampledFrame;

/// @brief Field tempoUp, offset: 0x80, size: 0x8, def value: None
 ::Photon::Voice::AudioUtil_TempoUp_1<T>*  ___tempoUp;

/// @brief Field tempoChangeHQ, offset: 0x88, size: 0x1, def value: None
 bool  ___tempoChangeHQ;

/// @brief Field frameQueue, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::ArrayW<T>>*  ___frameQueue;

/// @brief Field framePool, offset: 0x98, size: 0x8, def value: None
 ::Photon::Voice::PrimitiveArrayPool_1<T>*  ___framePool;

/// @brief Field catchingUp, offset: 0xa0, size: 0x1, def value: None
 bool  ___catchingUp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
