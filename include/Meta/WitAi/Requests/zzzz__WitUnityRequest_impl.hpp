#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitUnityRequest.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__WitUnityRequest_def.hpp"
#include "Meta/Voice/zzzz__NLPRequestInputType_def.hpp"
#include "Meta/Voice/zzzz__VoiceRequestState_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/Data/Configuration/zzzz__WitConfiguration_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvents_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitMessageVRequest_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitUnityRequest_<>c__DisplayClass19_0___HandleSend_b__0_d_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitUnityRequest__SendMessageAsync_d__20_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitUnityRequest_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitVRequest_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.get_Configuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> (::Meta::WitAi::Requests::WitUnityRequest::*)()>(&::Meta::WitAi::Requests::WitUnityRequest::get_Configuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e93b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"get_Configuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.set_Configuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitUnityRequest::*)(::Meta::WitAi::Data::Configuration::WitConfiguration*)>(&::Meta::WitAi::Requests::WitUnityRequest::set_Configuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e93b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"set_Configuration", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.get_Endpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::WitUnityRequest::*)()>(&::Meta::WitAi::Requests::WitUnityRequest::get_Endpoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e93b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"get_Endpoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.set_Endpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitUnityRequest::*)(::StringW)>(&::Meta::WitAi::Requests::WitUnityRequest::set_Endpoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e93b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"set_Endpoint", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.get_ShouldPost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::WitUnityRequest::*)()>(&::Meta::WitAi::Requests::WitUnityRequest::get_ShouldPost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e93b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"get_ShouldPost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.set_ShouldPost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitUnityRequest::*)(bool)>(&::Meta::WitAi::Requests::WitUnityRequest::set_ShouldPost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e93b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"set_ShouldPost", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.get_DecodeRawResponses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::WitUnityRequest::*)()>(&::Meta::WitAi::Requests::WitUnityRequest::get_DecodeRawResponses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e93b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitUnityRequest::*)(::Meta::WitAi::Data::Configuration::WitConfiguration*, ::Meta::Voice::NLPRequestInputType, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::Requests::WitUnityRequest::_ctor)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x9e93b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::Meta::Voice::NLPRequestInputType>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitUnityRequest::*)(::Meta::Voice::VoiceRequestState)>(&::Meta::WitAi::Requests::WitUnityRequest::SetState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9e93e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.GetSendError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::WitUnityRequest::*)()>(&::Meta::WitAi::Requests::WitUnityRequest::GetSendError)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9e93e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.HandleSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitUnityRequest::*)()>(&::Meta::WitAi::Requests::WitUnityRequest::HandleSend)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x9e93f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.SendMessageAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::Requests::WitUnityRequest::*)(::Meta::WitAi::Requests::WitMessageVRequest*)>(&::Meta::WitAi::Requests::WitUnityRequest::SendMessageAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9e9412c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"SendMessageAsync", {}, {::i2c::type_of<::Meta::WitAi::Requests::WitMessageVRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.HandlePartialResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitUnityRequest::*)(::StringW)>(&::Meta::WitAi::Requests::WitUnityRequest::HandlePartialResponse)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e94224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"HandlePartialResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.HandleFinalResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitUnityRequest::*)(::StringW, ::StringW)>(&::Meta::WitAi::Requests::WitUnityRequest::HandleFinalResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9436c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"HandleFinalResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.HandleResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitUnityRequest::*)(::StringW, ::StringW, bool)>(&::Meta::WitAi::Requests::WitUnityRequest::HandleResponse)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9e94230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"HandleResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.HandleCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitUnityRequest::*)()>(&::Meta::WitAi::Requests::WitUnityRequest::HandleCancel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e94374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.OnComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitUnityRequest::*)()>(&::Meta::WitAi::Requests::WitUnityRequest::OnComplete)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e94390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.GetActivateAudioError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::WitUnityRequest::*)()>(&::Meta::WitAi::Requests::WitUnityRequest::GetActivateAudioError)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9e94408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.HandleAudioActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitUnityRequest::*)()>(&::Meta::WitAi::Requests::WitUnityRequest::HandleAudioActivation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e94448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest.HandleAudioDeactivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitUnityRequest::*)()>(&::Meta::WitAi::Requests::WitUnityRequest::HandleAudioDeactivation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e9445c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(), 40}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>& Meta::WitAi::Requests::WitUnityRequest::__cordl_internal_get__Configuration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Configuration_k__BackingField;
}
constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> const& Meta::WitAi::Requests::WitUnityRequest::__cordl_internal_get__Configuration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Configuration_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitUnityRequest::__cordl_internal_set__Configuration_k__BackingField(::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Configuration_k__BackingField = value;
}
constexpr ::Meta::WitAi::Requests::WitVRequest*& Meta::WitAi::Requests::WitUnityRequest::__cordl_internal_get__request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request;
}
constexpr ::Meta::WitAi::Requests::WitVRequest* const& Meta::WitAi::Requests::WitUnityRequest::__cordl_internal_get__request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request;
}
constexpr void Meta::WitAi::Requests::WitUnityRequest::__cordl_internal_set__request(::Meta::WitAi::Requests::WitVRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request = value;
}
constexpr ::StringW& Meta::WitAi::Requests::WitUnityRequest::__cordl_internal_get__Endpoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Endpoint_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::Requests::WitUnityRequest::__cordl_internal_get__Endpoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Endpoint_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitUnityRequest::__cordl_internal_set__Endpoint_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Endpoint_k__BackingField = value;
}
constexpr bool& Meta::WitAi::Requests::WitUnityRequest::__cordl_internal_get__ShouldPost_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShouldPost_k__BackingField;
}
constexpr bool const& Meta::WitAi::Requests::WitUnityRequest::__cordl_internal_get__ShouldPost_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShouldPost_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitUnityRequest::__cordl_internal_set__ShouldPost_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShouldPost_k__BackingField = value;
}
constexpr bool& Meta::WitAi::Requests::WitUnityRequest::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& Meta::WitAi::Requests::WitUnityRequest::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void Meta::WitAi::Requests::WitUnityRequest::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
inline ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> Meta::WitAi::Requests::WitUnityRequest::get_Configuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"get_Configuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitUnityRequest::set_Configuration(::Meta::WitAi::Data::Configuration::WitConfiguration*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"set_Configuration", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::WitAi::Requests::WitUnityRequest::get_Endpoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"get_Endpoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitUnityRequest::set_Endpoint(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"set_Endpoint", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Requests::WitUnityRequest::get_ShouldPost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"get_ShouldPost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitUnityRequest::set_ShouldPost(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"set_ShouldPost", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Requests::WitUnityRequest::get_DecodeRawResponses()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitUnityRequest::_ctor(::Meta::WitAi::Data::Configuration::WitConfiguration*  newConfiguration, ::Meta::Voice::NLPRequestInputType  newDataType, ::Meta::WitAi::Configuration::WitRequestOptions*  newOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  newEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::Meta::Voice::NLPRequestInputType>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newConfiguration, newDataType, newOptions, newEvents);
}
inline void Meta::WitAi::Requests::WitUnityRequest::SetState(::Meta::Voice::VoiceRequestState  newState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline ::StringW Meta::WitAi::Requests::WitUnityRequest::GetSendError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitUnityRequest::HandleSend()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::Requests::WitUnityRequest::SendMessageAsync(::Meta::WitAi::Requests::WitMessageVRequest*  messageRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"SendMessageAsync", {}, {::i2c::type_of<::Meta::WitAi::Requests::WitMessageVRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, messageRequest);
}
inline void Meta::WitAi::Requests::WitUnityRequest::HandlePartialResponse(::StringW  rawResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"HandlePartialResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawResponse);
}
inline void Meta::WitAi::Requests::WitUnityRequest::HandleFinalResponse(::StringW  rawResponse, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"HandleFinalResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawResponse, error);
}
inline void Meta::WitAi::Requests::WitUnityRequest::HandleResponse(::StringW  rawResponse, ::StringW  error, bool  final)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(),
                        {"HandleResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawResponse, error, final);
}
inline void Meta::WitAi::Requests::WitUnityRequest::HandleCancel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitUnityRequest::OnComplete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::Requests::WitUnityRequest::GetActivateAudioError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitUnityRequest::HandleAudioActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitUnityRequest::HandleAudioDeactivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::WitUnityRequest* Meta::WitAi::Requests::WitUnityRequest::New_ctor(::Meta::WitAi::Data::Configuration::WitConfiguration*  newConfiguration, ::Meta::Voice::NLPRequestInputType  newDataType, ::Meta::WitAi::Configuration::WitRequestOptions*  newOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  newEvents)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::WitUnityRequest*>(newConfiguration, newDataType, newOptions, newEvents));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::WitUnityRequest::WitUnityRequest()   {
}
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0::*)()>(&::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e94124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0._HandleSend_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0::*)()>(&::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0::_HandleSend_b__0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e94470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0*>(),
                        {"<HandleSend>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Requests::WitUnityRequest*& Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::WitAi::Requests::WitUnityRequest* const& Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0::__cordl_internal_set___4__this(::Meta::WitAi::Requests::WitUnityRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::Requests::WitMessageVRequest*& Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0::__cordl_internal_get_messageRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___messageRequest;
}
constexpr ::Meta::WitAi::Requests::WitMessageVRequest* const& Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0::__cordl_internal_get_messageRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___messageRequest;
}
constexpr void Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0::__cordl_internal_set_messageRequest(::Meta::WitAi::Requests::WitMessageVRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___messageRequest = value;
}
inline void Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0::_HandleSend_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0*>(),
                        {"<HandleSend>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0* Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0::WitUnityRequest___c__DisplayClass19_0()   {
}
