#pragma once
// IWYU pragma private; include "Photon/Voice/AudioSyncBuffer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__AudioSyncBuffer_1_def.hpp"
#include "Photon/Voice/zzzz__IAudioOut_1_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "Photon/Voice/zzzz__PrimitiveArrayPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
template<typename T>
constexpr int32_t& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_curPlayingFrameSamplePos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curPlayingFrameSamplePos;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_curPlayingFrameSamplePos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curPlayingFrameSamplePos;
}
template<typename T>
constexpr void Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_set_curPlayingFrameSamplePos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curPlayingFrameSamplePos = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_sampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleRate;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_sampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleRate;
}
template<typename T>
constexpr void Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_set_sampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sampleRate = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
template<typename T>
constexpr void Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_set_channels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channels = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_frameSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameSamples;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_frameSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameSamples;
}
template<typename T>
constexpr void Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_set_frameSamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameSamples = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_frameSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameSize;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_frameSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameSize;
}
template<typename T>
constexpr void Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_set_frameSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameSize = value;
}
template<typename T>
constexpr bool& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___started;
}
template<typename T>
constexpr bool const& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___started;
}
template<typename T>
constexpr void Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_set_started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___started = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_maxDevPlayDelaySamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDevPlayDelaySamples;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_maxDevPlayDelaySamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDevPlayDelaySamples;
}
template<typename T>
constexpr void Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_set_maxDevPlayDelaySamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDevPlayDelaySamples = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_targetPlayDelaySamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayDelaySamples;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_targetPlayDelaySamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayDelaySamples;
}
template<typename T>
constexpr void Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_set_targetPlayDelaySamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPlayDelaySamples = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_playDelayMs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playDelayMs;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_playDelayMs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playDelayMs;
}
template<typename T>
constexpr void Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_set_playDelayMs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playDelayMs = value;
}
template<typename T>
constexpr ::Photon::Voice::ILogger*& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
template<typename T>
constexpr ::Photon::Voice::ILogger* const& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
template<typename T>
constexpr void Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_set_logger(::Photon::Voice::ILogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logger = value;
}
template<typename T>
constexpr ::StringW& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_logPrefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logPrefix;
}
template<typename T>
constexpr ::StringW const& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_logPrefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logPrefix;
}
template<typename T>
constexpr void Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_set_logPrefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logPrefix = value;
}
template<typename T>
constexpr bool& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_debugInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugInfo;
}
template<typename T>
constexpr bool const& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_debugInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugInfo;
}
template<typename T>
constexpr void Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_set_debugInfo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugInfo = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_elementSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementSize;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_elementSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementSize;
}
template<typename T>
constexpr void Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_set_elementSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementSize = value;
}
template<typename T>
constexpr ::ArrayW<T>& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_emptyFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyFrame;
}
template<typename T>
constexpr ::ArrayW<T> const& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_emptyFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyFrame;
}
template<typename T>
constexpr void Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_set_emptyFrame(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyFrame = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<::ArrayW<T>>*& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_frameQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameQueue;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<::ArrayW<T>>* const& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_frameQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameQueue;
}
template<typename T>
constexpr void Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_set_frameQueue(::System::Collections::Generic::Queue_1<::ArrayW<T>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameQueue = value;
}
template<typename T>
constexpr ::Photon::Voice::PrimitiveArrayPool_1<T>*& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_framePool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___framePool;
}
template<typename T>
constexpr ::Photon::Voice::PrimitiveArrayPool_1<T>* const& Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_get_framePool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___framePool;
}
template<typename T>
constexpr void Photon::Voice::AudioSyncBuffer_1<T>::__cordl_internal_set_framePool(::Photon::Voice::PrimitiveArrayPool_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___framePool = value;
}
template<typename T>
inline void Photon::Voice::AudioSyncBuffer_1<T>::_ctor(int32_t  playDelayMs, ::Photon::Voice::ILogger*  logger, ::StringW  logPrefix, bool  debugInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioSyncBuffer_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playDelayMs, logger, logPrefix, debugInfo);
}
template<typename T>
inline int32_t Photon::Voice::AudioSyncBuffer_1<T>::get_Lag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioSyncBuffer_1<T>*>(),
                        {"get_Lag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline bool Photon::Voice::AudioSyncBuffer_1<T>::get_IsPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioSyncBuffer_1<T>*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioSyncBuffer_1<T>::Start(int32_t  sampleRate, int32_t  channels, int32_t  frameSamples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioSyncBuffer_1<T>*>(),
                        {"Start", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleRate, channels, frameSamples);
}
template<typename T>
inline void Photon::Voice::AudioSyncBuffer_1<T>::Service()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioSyncBuffer_1<T>*>(),
                        {"Service", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioSyncBuffer_1<T>::Read(::ArrayW<T>  outBuf, int32_t  outChannels, int32_t  outSampleRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioSyncBuffer_1<T>*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outBuf, outChannels, outSampleRate);
}
template<typename T>
inline void Photon::Voice::AudioSyncBuffer_1<T>::Push(::ArrayW<T>  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioSyncBuffer_1<T>*>(),
                        {"Push", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
template<typename T>
inline void Photon::Voice::AudioSyncBuffer_1<T>::Flush()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioSyncBuffer_1<T>*>(),
                        {"Flush", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioSyncBuffer_1<T>::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioSyncBuffer_1<T>*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioSyncBuffer_1<T>::dequeueFrameQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioSyncBuffer_1<T>*>(),
                        {"dequeueFrameQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioSyncBuffer_1<T>::syncFrameQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioSyncBuffer_1<T>*>(),
                        {"syncFrameQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioSyncBuffer_1<T>::ToggleAudioSource(bool  toggle)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioSyncBuffer_1<T>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggle);
}
template<typename T>
inline ::Photon::Voice::AudioSyncBuffer_1<T>* Photon::Voice::AudioSyncBuffer_1<T>::New_ctor(int32_t  playDelayMs, ::Photon::Voice::ILogger*  logger, ::StringW  logPrefix, bool  debugInfo)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioSyncBuffer_1<T>*>(playDelayMs, logger, logPrefix, debugInfo));
}
/// @brief Convert operator to "::Photon::Voice::IAudioOut_1<T>"
template<typename T>
constexpr  Photon::Voice::AudioSyncBuffer_1<T>::operator ::Photon::Voice::IAudioOut_1<T>*() noexcept {
return static_cast<::Photon::Voice::IAudioOut_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioOut_1<T>"
template<typename T>
constexpr ::Photon::Voice::IAudioOut_1<T>* Photon::Voice::AudioSyncBuffer_1<T>::i___Photon__Voice__IAudioOut_1_T_() noexcept {
return static_cast<::Photon::Voice::IAudioOut_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::AudioSyncBuffer_1<T>::AudioSyncBuffer_1()   {
}
