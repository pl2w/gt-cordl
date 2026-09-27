#pragma once
// IWYU pragma private; include "Photon/Voice/LocalVoiceFramed_1.hpp"
#include "Photon/Voice/zzzz__LocalVoiceFramedBase_impl.hpp"
#include "Photon/Voice/zzzz__LocalVoiceFramed_1_def.hpp"
#include "Photon/Voice/zzzz__FactoryPrimitiveArrayPool_1_def.hpp"
#include "Photon/Voice/zzzz__Framer_1_def.hpp"
#include "Photon/Voice/zzzz__IEncoder_def.hpp"
#include "Photon/Voice/zzzz__IProcessor_1_def.hpp"
#include "Photon/Voice/zzzz__VoiceClient_def.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Threading/zzzz__AutoResetEvent_def.hpp"
template<typename T>
constexpr ::Photon::Voice::Framer_1<T>*& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_framer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___framer;
}
template<typename T>
constexpr ::Photon::Voice::Framer_1<T>* const& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_framer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___framer;
}
template<typename T>
constexpr void Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_set_framer(::Photon::Voice::Framer_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___framer = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_preProcessorsCnt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preProcessorsCnt;
}
template<typename T>
constexpr int32_t const& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_preProcessorsCnt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preProcessorsCnt;
}
template<typename T>
constexpr void Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_set_preProcessorsCnt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preProcessorsCnt = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Photon::Voice::IProcessor_1<T>*>*& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_processors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processors;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Photon::Voice::IProcessor_1<T>*>* const& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_processors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processors;
}
template<typename T>
constexpr void Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_set_processors(::System::Collections::Generic::List_1<::Photon::Voice::IProcessor_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___processors = value;
}
template<typename T>
constexpr bool& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_dataEncodeThreadStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataEncodeThreadStarted;
}
template<typename T>
constexpr bool const& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_dataEncodeThreadStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataEncodeThreadStarted;
}
template<typename T>
constexpr void Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_set_dataEncodeThreadStarted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dataEncodeThreadStarted = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<::ArrayW<T>>*& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_pushDataQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pushDataQueue;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<::ArrayW<T>>* const& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_pushDataQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pushDataQueue;
}
template<typename T>
constexpr void Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_set_pushDataQueue(::System::Collections::Generic::Queue_1<::ArrayW<T>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pushDataQueue = value;
}
template<typename T>
constexpr ::System::Threading::AutoResetEvent*& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_pushDataQueueReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pushDataQueueReady;
}
template<typename T>
constexpr ::System::Threading::AutoResetEvent* const& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_pushDataQueueReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pushDataQueueReady;
}
template<typename T>
constexpr void Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_set_pushDataQueueReady(::System::Threading::AutoResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pushDataQueueReady = value;
}
template<typename T>
constexpr ::Photon::Voice::FactoryPrimitiveArrayPool_1<T>*& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_bufferFactory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferFactory;
}
template<typename T>
constexpr ::Photon::Voice::FactoryPrimitiveArrayPool_1<T>* const& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_bufferFactory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferFactory;
}
template<typename T>
constexpr void Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_set_bufferFactory(::Photon::Voice::FactoryPrimitiveArrayPool_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferFactory = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_framesSkippedNextLog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___framesSkippedNextLog;
}
template<typename T>
constexpr int32_t const& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_framesSkippedNextLog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___framesSkippedNextLog;
}
template<typename T>
constexpr void Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_set_framesSkippedNextLog(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___framesSkippedNextLog = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_framesSkipped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___framesSkipped;
}
template<typename T>
constexpr int32_t const& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_framesSkipped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___framesSkipped;
}
template<typename T>
constexpr void Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_set_framesSkipped(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___framesSkipped = value;
}
template<typename T>
constexpr bool& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_exitThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitThread;
}
template<typename T>
constexpr bool const& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_exitThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitThread;
}
template<typename T>
constexpr void Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_set_exitThread(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exitThread = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_processNullFramesCnt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processNullFramesCnt;
}
template<typename T>
constexpr int32_t const& Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_get_processNullFramesCnt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processNullFramesCnt;
}
template<typename T>
constexpr void Photon::Voice::LocalVoiceFramed_1<T>::__cordl_internal_set_processNullFramesCnt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___processNullFramesCnt = value;
}
template<typename T>
inline ::ArrayW<T> Photon::Voice::LocalVoiceFramed_1<T>::processFrame(::ArrayW<T>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceFramed_1<T>*>(),
                        {"processFrame", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, buf);
}
template<typename T>
inline void Photon::Voice::LocalVoiceFramed_1<T>::AddPostProcessor(/* [ParamArray] */ ::ArrayW<::Photon::Voice::IProcessor_1<T>*>  processors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceFramed_1<T>*>(),
                        {"AddPostProcessor", {}, {::i2c::type_of<::ArrayW<::Photon::Voice::IProcessor_1<T>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, processors);
}
template<typename T>
inline void Photon::Voice::LocalVoiceFramed_1<T>::AddPreProcessor(/* [ParamArray] */ ::ArrayW<::Photon::Voice::IProcessor_1<T>*>  processors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceFramed_1<T>*>(),
                        {"AddPreProcessor", {}, {::i2c::type_of<::ArrayW<::Photon::Voice::IProcessor_1<T>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, processors);
}
template<typename T>
inline void Photon::Voice::LocalVoiceFramed_1<T>::ClearProcessors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceFramed_1<T>*>(),
                        {"ClearProcessors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::LocalVoiceFramed_1<T>::_ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, int32_t  channelId, int32_t  frameSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceFramed_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceClient*>(), ::i2c::type_of<::Photon::Voice::IEncoder*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voiceClient, encoder, id, voiceInfo, channelId, frameSize);
}
template<typename T>
inline ::Photon::Voice::FactoryPrimitiveArrayPool_1<T>* Photon::Voice::LocalVoiceFramed_1<T>::get_BufferFactory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceFramed_1<T>*>(),
                        {"get_BufferFactory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::FactoryPrimitiveArrayPool_1<T>*>(this, ___internal_method);
}
template<typename T>
inline bool Photon::Voice::LocalVoiceFramed_1<T>::get_PushDataAsyncReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceFramed_1<T>*>(),
                        {"get_PushDataAsyncReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::LocalVoiceFramed_1<T>::PushDataAsync(::ArrayW<T>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceFramed_1<T>*>(),
                        {"PushDataAsync", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
template<typename T>
inline void Photon::Voice::LocalVoiceFramed_1<T>::PushDataAsyncThread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceFramed_1<T>*>(),
                        {"PushDataAsyncThread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::LocalVoiceFramed_1<T>::PushData(::ArrayW<T>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceFramed_1<T>*>(),
                        {"PushData", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
template<typename T>
inline void Photon::Voice::LocalVoiceFramed_1<T>::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::LocalVoiceFramed_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Photon::Voice::LocalVoiceFramed_1<T>* Photon::Voice::LocalVoiceFramed_1<T>::New_ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, int32_t  channelId, int32_t  frameSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::LocalVoiceFramed_1<T>*>(voiceClient, encoder, id, voiceInfo, channelId, frameSize));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::LocalVoiceFramed_1<T>::LocalVoiceFramed_1()   {
}
