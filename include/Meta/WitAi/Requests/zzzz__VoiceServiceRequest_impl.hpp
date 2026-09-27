#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VoiceServiceRequest.hpp"
#include "Meta/Voice/zzzz__NLPRequest_5_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "Meta/Voice/zzzz__INLPRequestResponseDecoder_1_def.hpp"
#include "Meta/Voice/zzzz__NLPRequestInputType_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceErrorSimulationType_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvent_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvents_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestResults_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest__SimulateResponse_d__10_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitResponseDecoder_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequest::*)(::Meta::Voice::NLPRequestInputType, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::Requests::VoiceServiceRequest::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e90a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::NLPRequestInputType>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequest.get_IsLocalRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::VoiceServiceRequest::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequest::get_IsLocalRequest)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e90ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(),
                        {"get_IsLocalRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequest.get_StatusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Requests::VoiceServiceRequest::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequest::get_StatusCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e90b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(),
                        {"get_StatusCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequest.get_ResponseDecoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::INLPRequestResponseDecoder_1<::Meta::WitAi::Json::WitResponseNode*>* (::Meta::WitAi::Requests::VoiceServiceRequest::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequest::get_ResponseDecoder)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e90b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequest.ShouldIgnoreError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::VoiceServiceRequest::*)(int32_t, ::StringW)>(&::Meta::WitAi::Requests::VoiceServiceRequest::ShouldIgnoreError)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e90bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequest.OnSimulateResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::VoiceServiceRequest::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequest::OnSimulateResponse)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9e90c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequest.SimulateResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequest::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequest::SimulateResponse)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9e90cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(),
                        {"SimulateResponse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequest.SimulateError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequest::*)(::Meta::WitAi::Requests::VoiceErrorSimulationType)>(&::Meta::WitAi::Requests::VoiceServiceRequest::SimulateError)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e90d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequest.ApplyResponseData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequest::*)(::Meta::WitAi::Json::WitResponseNode*, bool)>(&::Meta::WitAi::Requests::VoiceServiceRequest::ApplyResponseData)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9e90db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequest.SetEventListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequest::*)(::Meta::WitAi::Requests::VoiceServiceRequestEvents*, bool)>(&::Meta::WitAi::Requests::VoiceServiceRequest::SetEventListeners)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9e90f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequest.RaiseEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequest::*)(::Meta::WitAi::Requests::VoiceServiceRequestEvent*)>(&::Meta::WitAi::Requests::VoiceServiceRequest::RaiseEvent)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9e915a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Requests::VoiceServiceRequest::setStaticF__responseDecoder(::Meta::WitAi::Requests::WitResponseDecoder*  value)  {
::cordl_internals::setStaticField<::Meta::WitAi::Requests::WitResponseDecoder*, "_responseDecoder", ::Meta::WitAi::Requests::VoiceServiceRequest*>(std::forward<::Meta::WitAi::Requests::WitResponseDecoder*>(value));
}
inline ::Meta::WitAi::Requests::WitResponseDecoder* Meta::WitAi::Requests::VoiceServiceRequest::getStaticF__responseDecoder()  {
return ::cordl_internals::getStaticField<::Meta::WitAi::Requests::WitResponseDecoder*, "_responseDecoder", ::Meta::WitAi::Requests::VoiceServiceRequest*>();
}
inline void Meta::WitAi::Requests::VoiceServiceRequest::_ctor(::Meta::Voice::NLPRequestInputType  newInputType, ::Meta::WitAi::Configuration::WitRequestOptions*  newOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  newEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::NLPRequestInputType>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newInputType, newOptions, newEvents);
}
inline bool Meta::WitAi::Requests::VoiceServiceRequest::get_IsLocalRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(),
                        {"get_IsLocalRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Meta::WitAi::Requests::VoiceServiceRequest::get_StatusCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(),
                        {"get_StatusCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Meta::Voice::INLPRequestResponseDecoder_1<::Meta::WitAi::Json::WitResponseNode*>* Meta::WitAi::Requests::VoiceServiceRequest::get_ResponseDecoder()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::INLPRequestResponseDecoder_1<::Meta::WitAi::Json::WitResponseNode*>*>(this, ___internal_method);
}
inline bool Meta::WitAi::Requests::VoiceServiceRequest::ShouldIgnoreError(int32_t  errorStatusCode, ::StringW  errorMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, errorStatusCode, errorMessage);
}
inline bool Meta::WitAi::Requests::VoiceServiceRequest::OnSimulateResponse()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VoiceServiceRequest::SimulateResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(),
                        {"SimulateResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VoiceServiceRequest::SimulateError(::Meta::WitAi::Requests::VoiceErrorSimulationType  errorType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorType);
}
inline void Meta::WitAi::Requests::VoiceServiceRequest::ApplyResponseData(::Meta::WitAi::Json::WitResponseNode*  responseData, bool  isFinal)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseData, isFinal);
}
inline void Meta::WitAi::Requests::VoiceServiceRequest::SetEventListeners(::Meta::WitAi::Requests::VoiceServiceRequestEvents*  newEvents, bool  add)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newEvents, add);
}
inline void Meta::WitAi::Requests::VoiceServiceRequest::RaiseEvent(::Meta::WitAi::Requests::VoiceServiceRequestEvent*  eventCallback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventCallback);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Meta::WitAi::Requests::VoiceServiceRequest::New_ctor(::Meta::Voice::NLPRequestInputType  newInputType, ::Meta::WitAi::Configuration::WitRequestOptions*  newOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  newEvents)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VoiceServiceRequest*>(newInputType, newOptions, newEvents));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::VoiceServiceRequest::VoiceServiceRequest()   {
}
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e916a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0._RaiseEvent_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0::_RaiseEvent_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9e9172c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0*>(),
                        {"<RaiseEvent>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Requests::VoiceServiceRequestEvent*& Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0::__cordl_internal_get_eventCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventCallback;
}
constexpr ::Meta::WitAi::Requests::VoiceServiceRequestEvent* const& Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0::__cordl_internal_get_eventCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventCallback;
}
constexpr void Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0::__cordl_internal_set_eventCallback(::Meta::WitAi::Requests::VoiceServiceRequestEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventCallback = value;
}
constexpr ::Meta::WitAi::Requests::VoiceServiceRequest*& Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::WitAi::Requests::VoiceServiceRequest* const& Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0::__cordl_internal_set___4__this(::Meta::WitAi::Requests::VoiceServiceRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0::_RaiseEvent_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0*>(),
                        {"<RaiseEvent>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0* Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0::VoiceServiceRequest___c__DisplayClass14_0()   {
}
