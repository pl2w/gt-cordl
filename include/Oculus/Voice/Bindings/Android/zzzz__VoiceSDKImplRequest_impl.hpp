#pragma once
// IWYU pragma private; include "Oculus/Voice/Bindings/Android/VoiceSDKImplRequest.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_impl.hpp"
#include "Oculus/Voice/Bindings/Android/zzzz__VoiceSDKImplRequest_def.hpp"
#include "Meta/Voice/zzzz__NLPRequestInputType_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvents_def.hpp"
#include "Oculus/Voice/Bindings/Android/zzzz__VoiceSDKBinding_def.hpp"
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest.get_Service
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Voice::Bindings::Android::VoiceSDKBinding* (::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::get_Service)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94d230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"get_Service", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest.set_Service
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)(::Oculus::Voice::Bindings::Android::VoiceSDKBinding*)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::set_Service)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94d238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"set_Service", {}, {::i2c::type_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest.get_Immediately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::get_Immediately)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94d240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"get_Immediately", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest.set_Immediately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)(bool)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::set_Immediately)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94d248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"set_Immediately", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest.get_DecodeRawResponses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::get_DecodeRawResponses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94d250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                    {::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)(::Oculus::Voice::Bindings::Android::VoiceSDKBinding*, ::Meta::Voice::NLPRequestInputType, bool, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb94d184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(), ::i2c::type_of<::Meta::Voice::NLPRequestInputType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest.HandleAudioActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleAudioActivation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb94d258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                    {::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest.HandleAudioDeactivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleAudioDeactivation)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb94d2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                    {::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest.HandleSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleSend)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb94d338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                    {::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest.HandleCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleCancel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb94d3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                    {::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest.HandlePartialResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)(::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandlePartialResponse)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb94d408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"HandlePartialResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest.HandlePartialTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)(::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandlePartialTranscription)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb94d41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"HandlePartialTranscription", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest.HandleFullTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)(::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleFullTranscription)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb94d430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"HandleFullTranscription", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest.HandleTransmissionBegan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleTransmissionBegan)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb94d444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"HandleTransmissionBegan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest.HandleCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleCanceled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb94d4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"HandleCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest.HandleError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)(::StringW, ::StringW, ::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleError)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb94d4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"HandleError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest.HandleResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)(::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleResponse)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb94d53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"HandleResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Voice::Bindings::Android::VoiceSDKBinding*& Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::__cordl_internal_get__Service_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Service_k__BackingField;
}
constexpr ::Oculus::Voice::Bindings::Android::VoiceSDKBinding* const& Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::__cordl_internal_get__Service_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Service_k__BackingField;
}
constexpr void Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::__cordl_internal_set__Service_k__BackingField(::Oculus::Voice::Bindings::Android::VoiceSDKBinding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Service_k__BackingField = value;
}
constexpr bool& Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::__cordl_internal_get__Immediately_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Immediately_k__BackingField;
}
constexpr bool const& Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::__cordl_internal_get__Immediately_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Immediately_k__BackingField;
}
constexpr void Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::__cordl_internal_set__Immediately_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Immediately_k__BackingField = value;
}
inline ::Oculus::Voice::Bindings::Android::VoiceSDKBinding* Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::get_Service()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"get_Service", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::set_Service(::Oculus::Voice::Bindings::Android::VoiceSDKBinding*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"set_Service", {}, {::i2c::type_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::get_Immediately()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"get_Immediately", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::set_Immediately(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"set_Immediately", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::get_DecodeRawResponses()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::_ctor(::Oculus::Voice::Bindings::Android::VoiceSDKBinding*  newService, ::Meta::Voice::NLPRequestInputType  newInputType, bool  newImmediately, ::Meta::WitAi::Configuration::WitRequestOptions*  newOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  newEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(), ::i2c::type_of<::Meta::Voice::NLPRequestInputType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newService, newInputType, newImmediately, newOptions, newEvents);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleAudioActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleAudioDeactivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleSend()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleCancel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandlePartialResponse(::StringW  responseJson)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"HandlePartialResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseJson);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandlePartialTranscription(::StringW  transcription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"HandlePartialTranscription", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transcription);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleFullTranscription(::StringW  transcription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"HandleFullTranscription", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transcription);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleTransmissionBegan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"HandleTransmissionBegan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"HandleCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleError(::StringW  error, ::StringW  message, ::StringW  errorBody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"HandleError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, message, errorBody);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleResponse(::StringW  responseJson)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(),
                        {"HandleResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseJson);
}
inline ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest* Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::New_ctor(::Oculus::Voice::Bindings::Android::VoiceSDKBinding*  newService, ::Meta::Voice::NLPRequestInputType  newInputType, bool  newImmediately, ::Meta::WitAi::Configuration::WitRequestOptions*  newOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  newEvents)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*>(newService, newInputType, newImmediately, newOptions, newEvents));
}
// Ctor Parameters []
constexpr ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::VoiceSDKImplRequest()   {
}
