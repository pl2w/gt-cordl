#pragma once
// IWYU pragma private; include "Photon/Voice/AudioSyncBuffer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSyncBuffer_1)
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
class AudioSyncBuffer_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Photon::Voice::AudioSyncBuffer_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::AudioSyncBuffer_1, "Photon.Voice", "AudioSyncBuffer`1");
// Dependencies System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.AudioSyncBuffer`1<T>
class CORDL_TYPE AudioSyncBuffer_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_Lag)) int32_t  Lag;

/// @brief Field channels, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) int32_t  channels;

/// @brief Field curPlayingFrameSamplePos, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_curPlayingFrameSamplePos, put=__cordl_internal_set_curPlayingFrameSamplePos)) int32_t  curPlayingFrameSamplePos;

/// @brief Field debugInfo, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugInfo, put=__cordl_internal_set_debugInfo)) bool  debugInfo;

/// @brief Field elementSize, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_elementSize, put=__cordl_internal_set_elementSize)) int32_t  elementSize;

/// @brief Field emptyFrame, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_emptyFrame, put=__cordl_internal_set_emptyFrame)) ::ArrayW<T>  emptyFrame;

/// @brief Field framePool, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_framePool, put=__cordl_internal_set_framePool)) ::Photon::Voice::PrimitiveArrayPool_1<T>*  framePool;

/// @brief Field frameQueue, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_frameQueue, put=__cordl_internal_set_frameQueue)) ::System::Collections::Generic::Queue_1<::ArrayW<T>>*  frameQueue;

/// @brief Field frameSamples, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameSamples, put=__cordl_internal_set_frameSamples)) int32_t  frameSamples;

/// @brief Field frameSize, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameSize, put=__cordl_internal_set_frameSize)) int32_t  frameSize;

/// @brief Field logPrefix, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_logPrefix, put=__cordl_internal_set_logPrefix)) ::StringW  logPrefix;

/// @brief Field logger, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::Photon::Voice::ILogger*  logger;

/// @brief Field maxDevPlayDelaySamples, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDevPlayDelaySamples, put=__cordl_internal_set_maxDevPlayDelaySamples)) int32_t  maxDevPlayDelaySamples;

/// @brief Field playDelayMs, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_playDelayMs, put=__cordl_internal_set_playDelayMs)) int32_t  playDelayMs;

/// @brief Field sampleRate, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_sampleRate, put=__cordl_internal_set_sampleRate)) int32_t  sampleRate;

/// @brief Field started, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_started, put=__cordl_internal_set_started)) bool  started;

/// @brief Field targetPlayDelaySamples, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetPlayDelaySamples, put=__cordl_internal_set_targetPlayDelaySamples)) int32_t  targetPlayDelaySamples;

/// @brief Convert operator to "::Photon::Voice::IAudioOut_1<T>"
constexpr operator  ::Photon::Voice::IAudioOut_1<T>*() noexcept;

/// @brief Method Flush, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Flush() ;

static inline ::Photon::Voice::AudioSyncBuffer_1<T>* New_ctor(int32_t  playDelayMs, ::Photon::Voice::ILogger*  logger, ::StringW  logPrefix, bool  debugInfo) ;

/// @brief Method Push, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Push(::ArrayW<T>  frame) ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Read(::ArrayW<T>  outBuf, int32_t  outChannels, int32_t  outSampleRate) ;

/// @brief Method Service, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Service() ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Start(int32_t  sampleRate, int32_t  channels, int32_t  frameSamples) ;

/// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Stop() ;

/// @brief Method ToggleAudioSource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ToggleAudioSource(bool  toggle) ;

constexpr int32_t const& __cordl_internal_get_channels() const;

constexpr int32_t& __cordl_internal_get_channels() ;

constexpr int32_t const& __cordl_internal_get_curPlayingFrameSamplePos() const;

constexpr int32_t& __cordl_internal_get_curPlayingFrameSamplePos() ;

constexpr bool const& __cordl_internal_get_debugInfo() const;

constexpr bool& __cordl_internal_get_debugInfo() ;

constexpr int32_t const& __cordl_internal_get_elementSize() const;

constexpr int32_t& __cordl_internal_get_elementSize() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_emptyFrame() const;

constexpr ::ArrayW<T>& __cordl_internal_get_emptyFrame() ;

constexpr ::Photon::Voice::PrimitiveArrayPool_1<T>* const& __cordl_internal_get_framePool() const;

constexpr ::Photon::Voice::PrimitiveArrayPool_1<T>*& __cordl_internal_get_framePool() ;

constexpr ::System::Collections::Generic::Queue_1<::ArrayW<T>>* const& __cordl_internal_get_frameQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::ArrayW<T>>*& __cordl_internal_get_frameQueue() ;

constexpr int32_t const& __cordl_internal_get_frameSamples() const;

constexpr int32_t& __cordl_internal_get_frameSamples() ;

constexpr int32_t const& __cordl_internal_get_frameSize() const;

constexpr int32_t& __cordl_internal_get_frameSize() ;

constexpr ::StringW const& __cordl_internal_get_logPrefix() const;

constexpr ::StringW& __cordl_internal_get_logPrefix() ;

constexpr ::Photon::Voice::ILogger* const& __cordl_internal_get_logger() const;

constexpr ::Photon::Voice::ILogger*& __cordl_internal_get_logger() ;

constexpr int32_t const& __cordl_internal_get_maxDevPlayDelaySamples() const;

constexpr int32_t& __cordl_internal_get_maxDevPlayDelaySamples() ;

constexpr int32_t const& __cordl_internal_get_playDelayMs() const;

constexpr int32_t& __cordl_internal_get_playDelayMs() ;

constexpr int32_t const& __cordl_internal_get_sampleRate() const;

constexpr int32_t& __cordl_internal_get_sampleRate() ;

constexpr bool const& __cordl_internal_get_started() const;

constexpr bool& __cordl_internal_get_started() ;

constexpr int32_t const& __cordl_internal_get_targetPlayDelaySamples() const;

constexpr int32_t& __cordl_internal_get_targetPlayDelaySamples() ;

constexpr void __cordl_internal_set_channels(int32_t  value) ;

constexpr void __cordl_internal_set_curPlayingFrameSamplePos(int32_t  value) ;

constexpr void __cordl_internal_set_debugInfo(bool  value) ;

constexpr void __cordl_internal_set_elementSize(int32_t  value) ;

constexpr void __cordl_internal_set_emptyFrame(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_framePool(::Photon::Voice::PrimitiveArrayPool_1<T>*  value) ;

constexpr void __cordl_internal_set_frameQueue(::System::Collections::Generic::Queue_1<::ArrayW<T>>*  value) ;

constexpr void __cordl_internal_set_frameSamples(int32_t  value) ;

constexpr void __cordl_internal_set_frameSize(int32_t  value) ;

constexpr void __cordl_internal_set_logPrefix(::StringW  value) ;

constexpr void __cordl_internal_set_logger(::Photon::Voice::ILogger*  value) ;

constexpr void __cordl_internal_set_maxDevPlayDelaySamples(int32_t  value) ;

constexpr void __cordl_internal_set_playDelayMs(int32_t  value) ;

constexpr void __cordl_internal_set_sampleRate(int32_t  value) ;

constexpr void __cordl_internal_set_started(bool  value) ;

constexpr void __cordl_internal_set_targetPlayDelaySamples(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  playDelayMs, ::Photon::Voice::ILogger*  logger, ::StringW  logPrefix, bool  debugInfo) ;

/// @brief Method dequeueFrameQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void dequeueFrameQueue() ;

/// @brief Method get_IsPlaying, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsPlaying() ;

/// @brief Method get_Lag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Lag() ;

/// @brief Convert to "::Photon::Voice::IAudioOut_1<T>"
constexpr ::Photon::Voice::IAudioOut_1<T>* i___Photon__Voice__IAudioOut_1_T_() noexcept;

/// @brief Method syncFrameQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void syncFrameQueue() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSyncBuffer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSyncBuffer_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSyncBuffer_1(AudioSyncBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSyncBuffer_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSyncBuffer_1(AudioSyncBuffer_1 const& ) = delete;

/// @brief Field FRAME_POOL_CAPACITY offset 0xffffffff size 0x4
static constexpr int32_t  FRAME_POOL_CAPACITY{static_cast<int32_t>(0x32)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28400};

/// @brief Field curPlayingFrameSamplePos, offset: 0x10, size: 0x4, def value: None
 int32_t  ___curPlayingFrameSamplePos;

/// @brief Field sampleRate, offset: 0x14, size: 0x4, def value: None
 int32_t  ___sampleRate;

/// @brief Field channels, offset: 0x18, size: 0x4, def value: None
 int32_t  ___channels;

/// @brief Field frameSamples, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___frameSamples;

/// @brief Field frameSize, offset: 0x20, size: 0x4, def value: None
 int32_t  ___frameSize;

/// @brief Field started, offset: 0x24, size: 0x1, def value: None
 bool  ___started;

/// @brief Field maxDevPlayDelaySamples, offset: 0x28, size: 0x4, def value: None
 int32_t  ___maxDevPlayDelaySamples;

/// @brief Field targetPlayDelaySamples, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___targetPlayDelaySamples;

/// @brief Field playDelayMs, offset: 0x30, size: 0x4, def value: None
 int32_t  ___playDelayMs;

/// @brief Field logger, offset: 0x38, size: 0x8, def value: None
 ::Photon::Voice::ILogger*  ___logger;

/// @brief Field logPrefix, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___logPrefix;

/// @brief Field debugInfo, offset: 0x48, size: 0x1, def value: None
 bool  ___debugInfo;

/// @brief Field elementSize, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___elementSize;

/// @brief Field emptyFrame, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<T>  ___emptyFrame;

/// @brief Field frameQueue, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::ArrayW<T>>*  ___frameQueue;

/// @brief Field framePool, offset: 0x60, size: 0x8, def value: None
 ::Photon::Voice::PrimitiveArrayPool_1<T>*  ___framePool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
