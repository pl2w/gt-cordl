#pragma once
// IWYU pragma private; include "Meta/Voice/NLPRequest_5.hpp"
#include "Meta/Voice/zzzz__TranscriptionRequest_4_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/zzzz__NLPRequest_5_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/Voice/Logging/zzzz__VLoggerVerbosity_def.hpp"
#include "Meta/Voice/zzzz__INLPRequestResponseDecoder_1_def.hpp"
#include "Meta/Voice/zzzz__NLPRequestInputType_def.hpp"
#include "Meta/Voice/zzzz__NLPRequest_5_def.hpp"
#include "Meta/Voice/zzzz__NLPRequest`5_<>c__DisplayClass29_0___EnqueueDecode_b__0_d_def.hpp"
#include "Meta/Voice/zzzz__VoiceRequestState_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr bool& Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr bool const& Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr bool& Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get__finalized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finalized;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr bool const& Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get__finalized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finalized;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set__finalized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____finalized = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::StringW& Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get__rawResponseLast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rawResponseLast;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::StringW const& Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get__rawResponseLast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rawResponseLast;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set__rawResponseLast(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rawResponseLast = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr int32_t& Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get__rawQueued()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rawQueued;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr int32_t const& Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get__rawQueued() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rawQueued;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set__rawQueued(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rawQueued = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr int32_t& Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get__rawDecoded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rawDecoded;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr int32_t const& Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get__rawDecoded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rawDecoded;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set__rawDecoded(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rawDecoded = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr bool& Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get__rawResponseFinal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rawResponseFinal;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr bool const& Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get__rawResponseFinal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rawResponseFinal;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set__rawResponseFinal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rawResponseFinal = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::System::Threading::Tasks::Task*& Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get__lastDecode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDecode;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::System::Threading::Tasks::Task* const& Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get__lastDecode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDecode;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set__lastDecode(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastDecode = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr TResponseData& Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get__lastResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastResponse;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr TResponseData const& Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get__lastResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastResponse;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set__lastResponse(TResponseData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastResponse = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::get_Logger()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline ::Meta::Voice::NLPRequestInputType Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::get_InputType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(),
                        {"get_InputType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::NLPRequestInputType>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline TResponseData Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::get_ResponseData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(),
                        {"get_ResponseData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TResponseData>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::_ctor(::Meta::Voice::NLPRequestInputType  inputType, TOptions  options, TEvents  newEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::NLPRequestInputType>(), ::i2c::type_of<TOptions>(), ::i2c::type_of<TEvents>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputType, options, newEvents);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::SetState(::Meta::Voice::VoiceRequestState  newState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::Log(::StringW  log, ::Meta::Voice::Logging::VLoggerVerbosity  logLevel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, log, logLevel);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline ::StringW Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::GetActivateAudioError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline ::StringW Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::GetSendError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline ::Meta::Voice::INLPRequestResponseDecoder_1<TResponseData>* Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::get_ResponseDecoder()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::INLPRequestResponseDecoder_1<TResponseData>*>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline bool Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::get_DecodeRawResponses()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline bool Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::get_IsDecoding()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::HandleRawResponse(::StringW  rawResponse, bool  final)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawResponse, final);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::OnRawResponse(::StringW  rawResponse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawResponse);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::EnqueueDecode(::StringW  rawResponse, bool  final)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(),
                        {"EnqueueDecode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawResponse, final);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::DecodeRawResponse(::StringW  rawResponse, bool  final)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(),
                        {"DecodeRawResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawResponse, final);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::ApplyResponseData(TResponseData  responseData, bool  final)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseData, final);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::OnPartialResponse(TResponseData  responseData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseData);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::OnFullResponse(TResponseData  responseData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseData);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::CompleteEarly()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::MakeLastResponseFinal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>* Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::New_ctor(::Meta::Voice::NLPRequestInputType  inputType, TOptions  options, TEvents  newEvents)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(inputType, options, newEvents));
}
// Ctor Parameters []
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::NLPRequest_5()   {
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*& Meta::Voice::NLPRequest_5___c__DisplayClass33_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>* const& Meta::Voice::NLPRequest_5___c__DisplayClass33_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5___c__DisplayClass33_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set___4__this(::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr TResponseData& Meta::Voice::NLPRequest_5___c__DisplayClass33_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get_responseData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseData;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr TResponseData const& Meta::Voice::NLPRequest_5___c__DisplayClass33_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get_responseData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseData;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5___c__DisplayClass33_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set_responseData(TResponseData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseData = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5___c__DisplayClass33_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequest_5___c__DisplayClass33_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5___c__DisplayClass33_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::_OnFullResponse_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequest_5___c__DisplayClass33_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(),
                        {"<OnFullResponse>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline ::Meta::Voice::NLPRequest_5___c__DisplayClass33_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>* Meta::Voice::NLPRequest_5___c__DisplayClass33_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::NLPRequest_5___c__DisplayClass33_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>());
}
// Ctor Parameters []
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::Meta::Voice::NLPRequest_5___c__DisplayClass33_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::NLPRequest_5___c__DisplayClass33_0()   {
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*& Meta::Voice::NLPRequest_5___c__DisplayClass32_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>* const& Meta::Voice::NLPRequest_5___c__DisplayClass32_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5___c__DisplayClass32_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set___4__this(::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr TResponseData& Meta::Voice::NLPRequest_5___c__DisplayClass32_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get_responseData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseData;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr TResponseData const& Meta::Voice::NLPRequest_5___c__DisplayClass32_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get_responseData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseData;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5___c__DisplayClass32_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set_responseData(TResponseData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseData = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5___c__DisplayClass32_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequest_5___c__DisplayClass32_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5___c__DisplayClass32_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::_OnPartialResponse_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequest_5___c__DisplayClass32_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(),
                        {"<OnPartialResponse>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline ::Meta::Voice::NLPRequest_5___c__DisplayClass32_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>* Meta::Voice::NLPRequest_5___c__DisplayClass32_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::NLPRequest_5___c__DisplayClass32_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>());
}
// Ctor Parameters []
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::Meta::Voice::NLPRequest_5___c__DisplayClass32_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::NLPRequest_5___c__DisplayClass32_0()   {
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::System::Threading::Tasks::Task*& Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get_blockingTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockingTask;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::System::Threading::Tasks::Task* const& Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get_blockingTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockingTask;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set_blockingTask(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockingTask = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*& Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>* const& Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set___4__this(::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::StringW& Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get_rawResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawResponse;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::StringW const& Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get_rawResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawResponse;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set_rawResponse(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rawResponse = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr bool& Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get_final()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___final;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr bool const& Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get_final() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___final;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set_final(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___final = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline ::System::Threading::Tasks::Task* Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::_EnqueueDecode_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(),
                        {"<EnqueueDecode>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline ::Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>* Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>());
}
// Ctor Parameters []
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::NLPRequest_5___c__DisplayClass29_0()   {
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*& Meta::Voice::NLPRequest_5___c__DisplayClass26_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>* const& Meta::Voice::NLPRequest_5___c__DisplayClass26_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5___c__DisplayClass26_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set___4__this(::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::StringW& Meta::Voice::NLPRequest_5___c__DisplayClass26_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get_rawResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawResponse;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::StringW const& Meta::Voice::NLPRequest_5___c__DisplayClass26_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_get_rawResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawResponse;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr void Meta::Voice::NLPRequest_5___c__DisplayClass26_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::__cordl_internal_set_rawResponse(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rawResponse = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5___c__DisplayClass26_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequest_5___c__DisplayClass26_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline void Meta::Voice::NLPRequest_5___c__DisplayClass26_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::_OnRawResponse_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequest_5___c__DisplayClass26_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>(),
                        {"<OnRawResponse>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
inline ::Meta::Voice::NLPRequest_5___c__DisplayClass26_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>* Meta::Voice::NLPRequest_5___c__DisplayClass26_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::NLPRequest_5___c__DisplayClass26_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*>());
}
// Ctor Parameters []
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
constexpr ::Meta::Voice::NLPRequest_5___c__DisplayClass26_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>::NLPRequest_5___c__DisplayClass26_0()   {
}
