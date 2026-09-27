#pragma once
// IWYU pragma private; include "Meta/Voice/NLPRequestEvents_2.hpp"
#include "Meta/Voice/zzzz__TranscriptionRequestEvents_1_impl.hpp"
#include "Meta/Voice/zzzz__NLPRequestEvents_2_def.hpp"
#include "Meta/Voice/zzzz__NLPRequestResponseEvent_1_def.hpp"
#include "Meta/Voice/zzzz__NLPRequestResponseValidatorEvent_1_def.hpp"
#include "Meta/Voice/zzzz__TranscriptionRequestEvent_def.hpp"
template<typename TUnityEvent,typename TResponseData>
constexpr ::Meta::Voice::TranscriptionRequestEvent*& Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::__cordl_internal_get__onRawResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onRawResponse;
}
template<typename TUnityEvent,typename TResponseData>
constexpr ::Meta::Voice::TranscriptionRequestEvent* const& Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::__cordl_internal_get__onRawResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onRawResponse;
}
template<typename TUnityEvent,typename TResponseData>
constexpr void Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::__cordl_internal_set__onRawResponse(::Meta::Voice::TranscriptionRequestEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onRawResponse = value;
}
template<typename TUnityEvent,typename TResponseData>
constexpr ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>*& Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::__cordl_internal_get__onPartialResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPartialResponse;
}
template<typename TUnityEvent,typename TResponseData>
constexpr ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>* const& Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::__cordl_internal_get__onPartialResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPartialResponse;
}
template<typename TUnityEvent,typename TResponseData>
constexpr void Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::__cordl_internal_set__onPartialResponse(::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onPartialResponse = value;
}
template<typename TUnityEvent,typename TResponseData>
constexpr ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>*& Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::__cordl_internal_get__onFullResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onFullResponse;
}
template<typename TUnityEvent,typename TResponseData>
constexpr ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>* const& Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::__cordl_internal_get__onFullResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onFullResponse;
}
template<typename TUnityEvent,typename TResponseData>
constexpr void Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::__cordl_internal_set__onFullResponse(::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onFullResponse = value;
}
template<typename TUnityEvent,typename TResponseData>
constexpr ::Meta::Voice::NLPRequestResponseValidatorEvent_1<TResponseData>*& Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::__cordl_internal_get__onValidateResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onValidateResponse;
}
template<typename TUnityEvent,typename TResponseData>
constexpr ::Meta::Voice::NLPRequestResponseValidatorEvent_1<TResponseData>* const& Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::__cordl_internal_get__onValidateResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onValidateResponse;
}
template<typename TUnityEvent,typename TResponseData>
constexpr void Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::__cordl_internal_set__onValidateResponse(::Meta::Voice::NLPRequestResponseValidatorEvent_1<TResponseData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onValidateResponse = value;
}
template<typename TUnityEvent,typename TResponseData>
inline ::Meta::Voice::TranscriptionRequestEvent* Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::get_OnRawResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>*>(),
                        {"get_OnRawResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::TranscriptionRequestEvent*>(this, ___internal_method);
}
template<typename TUnityEvent,typename TResponseData>
inline ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>* Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::get_OnPartialResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>*>(),
                        {"get_OnPartialResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>*>(this, ___internal_method);
}
template<typename TUnityEvent,typename TResponseData>
inline ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>* Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::get_OnFullResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>*>(),
                        {"get_OnFullResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>*>(this, ___internal_method);
}
template<typename TUnityEvent,typename TResponseData>
inline ::Meta::Voice::NLPRequestResponseValidatorEvent_1<TResponseData>* Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::get_OnValidateResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>*>(),
                        {"get_OnValidateResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::NLPRequestResponseValidatorEvent_1<TResponseData>*>(this, ___internal_method);
}
template<typename TUnityEvent,typename TResponseData>
inline void Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TResponseData>
inline ::Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>* Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>*>());
}
// Ctor Parameters []
template<typename TUnityEvent,typename TResponseData>
constexpr ::Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>::NLPRequestEvents_2()   {
}
