#pragma once
// IWYU pragma private; include "Photon/Voice/AudioOutDelayControl_1.hpp"
#include "Photon/Voice/zzzz__AudioOutDelayControl_impl.hpp"
#include "Photon/Voice/zzzz__AudioOutDelayControl_1_def.hpp"
#include "Photon/Voice/zzzz__AudioOutDelayControl_def.hpp"
#include "Photon/Voice/zzzz__AudioUtil_def.hpp"
#include "Photon/Voice/zzzz__IAudioOut_1_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "Photon/Voice/zzzz__PrimitiveArrayPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
template<typename T>
constexpr int32_t& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_sizeofT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeofT;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_sizeofT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeofT;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_sizeofT(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizeofT = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_frameSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameSamples;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_frameSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameSamples;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_frameSamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameSamples = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_frameSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameSize;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_frameSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameSize;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_frameSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameSize = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_bufferSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferSamples;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_bufferSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferSamples;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_bufferSamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferSamples = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frequency;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frequency;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_frequency(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frequency = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_clipWriteSamplePos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipWriteSamplePos;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_clipWriteSamplePos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipWriteSamplePos;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_clipWriteSamplePos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipWriteSamplePos = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_playSamplePosPrev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playSamplePosPrev;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_playSamplePosPrev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playSamplePosPrev;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_playSamplePosPrev(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playSamplePosPrev = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_sourceTimeSamplesPrev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceTimeSamplesPrev;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_sourceTimeSamplesPrev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceTimeSamplesPrev;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_sourceTimeSamplesPrev(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceTimeSamplesPrev = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_playLoopCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playLoopCount;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_playLoopCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playLoopCount;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_playLoopCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playLoopCount = value;
}
template<typename T>
constexpr ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_playDelayConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playDelayConfig;
}
template<typename T>
constexpr ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig* const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_playDelayConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playDelayConfig;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_playDelayConfig(::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playDelayConfig = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_channels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channels = value;
}
template<typename T>
constexpr bool& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___started;
}
template<typename T>
constexpr bool const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___started;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___started = value;
}
template<typename T>
constexpr bool& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_flushed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flushed;
}
template<typename T>
constexpr bool const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_flushed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flushed;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_flushed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flushed = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_targetDelaySamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetDelaySamples;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_targetDelaySamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetDelaySamples;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_targetDelaySamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetDelaySamples = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_upperTargetDelaySamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upperTargetDelaySamples;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_upperTargetDelaySamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upperTargetDelaySamples;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_upperTargetDelaySamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upperTargetDelaySamples = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_maxDelaySamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDelaySamples;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_maxDelaySamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDelaySamples;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_maxDelaySamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDelaySamples = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_lastPushTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPushTime;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_lastPushTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPushTime;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_lastPushTime(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPushTime = value;
}
template<typename T>
constexpr ::Photon::Voice::ILogger*& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
template<typename T>
constexpr ::Photon::Voice::ILogger* const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_logger(::Photon::Voice::ILogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logger = value;
}
template<typename T>
constexpr ::StringW& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_logPrefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logPrefix;
}
template<typename T>
constexpr ::StringW const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_logPrefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logPrefix;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_logPrefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logPrefix = value;
}
template<typename T>
constexpr bool& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_debugInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugInfo;
}
template<typename T>
constexpr bool const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_debugInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugInfo;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_debugInfo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugInfo = value;
}
template<typename T>
constexpr bool& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_processInService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processInService;
}
template<typename T>
constexpr bool const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_processInService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processInService;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_processInService(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___processInService = value;
}
template<typename T>
constexpr ::ArrayW<T>& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_zeroFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zeroFrame;
}
template<typename T>
constexpr ::ArrayW<T> const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_zeroFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zeroFrame;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_zeroFrame(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zeroFrame = value;
}
template<typename T>
constexpr ::ArrayW<T>& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_resampledFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resampledFrame;
}
template<typename T>
constexpr ::ArrayW<T> const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_resampledFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resampledFrame;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_resampledFrame(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resampledFrame = value;
}
template<typename T>
constexpr ::Photon::Voice::AudioUtil_TempoUp_1<T>*& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_tempoUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempoUp;
}
template<typename T>
constexpr ::Photon::Voice::AudioUtil_TempoUp_1<T>* const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_tempoUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempoUp;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_tempoUp(::Photon::Voice::AudioUtil_TempoUp_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempoUp = value;
}
template<typename T>
constexpr bool& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_tempoChangeHQ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempoChangeHQ;
}
template<typename T>
constexpr bool const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_tempoChangeHQ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempoChangeHQ;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_tempoChangeHQ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempoChangeHQ = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<::ArrayW<T>>*& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_frameQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameQueue;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<::ArrayW<T>>* const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_frameQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameQueue;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_frameQueue(::System::Collections::Generic::Queue_1<::ArrayW<T>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameQueue = value;
}
template<typename T>
constexpr ::Photon::Voice::PrimitiveArrayPool_1<T>*& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_framePool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___framePool;
}
template<typename T>
constexpr ::Photon::Voice::PrimitiveArrayPool_1<T>* const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_framePool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___framePool;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_framePool(::Photon::Voice::PrimitiveArrayPool_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___framePool = value;
}
template<typename T>
constexpr bool& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_catchingUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchingUp;
}
template<typename T>
constexpr bool const& Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_get_catchingUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchingUp;
}
template<typename T>
constexpr void Photon::Voice::AudioOutDelayControl_1<T>::__cordl_internal_set_catchingUp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchingUp = value;
}
template<typename T>
inline int32_t Photon::Voice::AudioOutDelayControl_1<T>::get_OutPos()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioOutDelayControl_1<T>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioOutDelayControl_1<T>::OutCreate(int32_t  frequency, int32_t  channels, int32_t  bufferSamples)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioOutDelayControl_1<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frequency, channels, bufferSamples);
}
template<typename T>
inline void Photon::Voice::AudioOutDelayControl_1<T>::OutStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioOutDelayControl_1<T>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioOutDelayControl_1<T>::OutWrite(::ArrayW<T>  data, int32_t  offsetSamples)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioOutDelayControl_1<T>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offsetSamples);
}
template<typename T>
inline void Photon::Voice::AudioOutDelayControl_1<T>::_ctor(bool  processInService, ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  playDelayConfig, ::Photon::Voice::ILogger*  logger, ::StringW  logPrefix, bool  debugInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(), ::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, processInService, playDelayConfig, logger, logPrefix, debugInfo);
}
template<typename T>
inline int32_t Photon::Voice::AudioOutDelayControl_1<T>::get_Lag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_1<T>*>(),
                        {"get_Lag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline bool Photon::Voice::AudioOutDelayControl_1<T>::get_IsFlushed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_1<T>*>(),
                        {"get_IsFlushed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline bool Photon::Voice::AudioOutDelayControl_1<T>::get_IsPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_1<T>*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioOutDelayControl_1<T>::Start(int32_t  frequency, int32_t  channels, int32_t  frameSamples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_1<T>*>(),
                        {"Start", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frequency, channels, frameSamples);
}
template<typename T>
inline bool Photon::Voice::AudioOutDelayControl_1<T>::processFrame(::ArrayW<T>  frame, int32_t  playSamplePos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_1<T>*>(),
                        {"processFrame", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, frame, playSamplePos);
}
template<typename T>
inline void Photon::Voice::AudioOutDelayControl_1<T>::Service()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_1<T>*>(),
                        {"Service", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline int32_t Photon::Voice::AudioOutDelayControl_1<T>::writeResampled(::ArrayW<T>  f, int32_t  resampledLenSamples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_1<T>*>(),
                        {"writeResampled", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, f, resampledLenSamples);
}
template<typename T>
inline void Photon::Voice::AudioOutDelayControl_1<T>::Push(::ArrayW<T>  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_1<T>*>(),
                        {"Push", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
template<typename T>
inline void Photon::Voice::AudioOutDelayControl_1<T>::Flush()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_1<T>*>(),
                        {"Flush", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioOutDelayControl_1<T>::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioOutDelayControl_1<T>*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioOutDelayControl_1<T>::ToggleAudioSource(bool  toggle)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioOutDelayControl_1<T>*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggle);
}
template<typename T>
inline ::Photon::Voice::AudioOutDelayControl_1<T>* Photon::Voice::AudioOutDelayControl_1<T>::New_ctor(bool  processInService, ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  playDelayConfig, ::Photon::Voice::ILogger*  logger, ::StringW  logPrefix, bool  debugInfo)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioOutDelayControl_1<T>*>(processInService, playDelayConfig, logger, logPrefix, debugInfo));
}
/// @brief Convert operator to "::Photon::Voice::IAudioOut_1<T>"
template<typename T>
constexpr  Photon::Voice::AudioOutDelayControl_1<T>::operator ::Photon::Voice::IAudioOut_1<T>*() noexcept {
return static_cast<::Photon::Voice::IAudioOut_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioOut_1<T>"
template<typename T>
constexpr ::Photon::Voice::IAudioOut_1<T>* Photon::Voice::AudioOutDelayControl_1<T>::i___Photon__Voice__IAudioOut_1_T_() noexcept {
return static_cast<::Photon::Voice::IAudioOut_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::AudioOutDelayControl_1<T>::AudioOutDelayControl_1()   {
}
