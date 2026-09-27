#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/WitResponseHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__WitResponseHandler_def.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__ConfidenceRange_def.hpp"
#include "Meta/WitAi/Data/zzzz__VoiceSession_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "Meta/WitAi/zzzz__VoiceService_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseHandler.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::WitResponseHandler::*)()>(&::Meta::WitAi::CallbackHandlers::WitResponseHandler::OnValidate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9e9d780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseHandler.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::WitResponseHandler::*)()>(&::Meta::WitAi::CallbackHandlers::WitResponseHandler::OnEnable)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x9e9d1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseHandler.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::WitResponseHandler::*)()>(&::Meta::WitAi::CallbackHandlers::WitResponseHandler::OnDisable)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x9e9d59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseHandler.OnRequestSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::WitResponseHandler::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::CallbackHandlers::WitResponseHandler::OnRequestSend)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9d828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseHandler.HandleValidateEarlyResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::WitResponseHandler::*)(::Meta::WitAi::Data::VoiceSession*)>(&::Meta::WitAi::CallbackHandlers::WitResponseHandler::HandleValidateEarlyResponse)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e9d830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseHandler.HandleFinalResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::WitResponseHandler::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::CallbackHandlers::WitResponseHandler::HandleFinalResponse)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e9d8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseHandler.OnValidateResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::CallbackHandlers::WitResponseHandler::*)(::Meta::WitAi::Json::WitResponseNode*, bool)>(&::Meta::WitAi::CallbackHandlers::WitResponseHandler::OnValidateResponse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseHandler.OnResponseInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::WitResponseHandler::*)(::Meta::WitAi::Json::WitResponseNode*, ::StringW)>(&::Meta::WitAi::CallbackHandlers::WitResponseHandler::OnResponseInvalid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseHandler.OnResponseSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::WitResponseHandler::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::CallbackHandlers::WitResponseHandler::OnResponseSuccess)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseHandler.RefreshConfidenceRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, ::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>, bool)>(&::Meta::WitAi::CallbackHandlers::WitResponseHandler::RefreshConfidenceRange)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9e9cbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(),
                        {"RefreshConfidenceRange", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::WitResponseHandler::*)()>(&::Meta::WitAi::CallbackHandlers::WitResponseHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9cab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::VoiceService>& Meta::WitAi::CallbackHandlers::WitResponseHandler::__cordl_internal_get_Voice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Voice;
}
constexpr ::UnityW<::Meta::WitAi::VoiceService> const& Meta::WitAi::CallbackHandlers::WitResponseHandler::__cordl_internal_get_Voice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Voice;
}
constexpr void Meta::WitAi::CallbackHandlers::WitResponseHandler::__cordl_internal_set_Voice(::UnityW<::Meta::WitAi::VoiceService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Voice = value;
}
constexpr bool& Meta::WitAi::CallbackHandlers::WitResponseHandler::__cordl_internal_get_ValidateEarly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValidateEarly;
}
constexpr bool const& Meta::WitAi::CallbackHandlers::WitResponseHandler::__cordl_internal_get_ValidateEarly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValidateEarly;
}
constexpr void Meta::WitAi::CallbackHandlers::WitResponseHandler::__cordl_internal_set_ValidateEarly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ValidateEarly = value;
}
constexpr bool& Meta::WitAi::CallbackHandlers::WitResponseHandler::__cordl_internal_get__validated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____validated;
}
constexpr bool const& Meta::WitAi::CallbackHandlers::WitResponseHandler::__cordl_internal_get__validated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____validated;
}
constexpr void Meta::WitAi::CallbackHandlers::WitResponseHandler::__cordl_internal_set__validated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____validated = value;
}
inline void Meta::WitAi::CallbackHandlers::WitResponseHandler::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::CallbackHandlers::WitResponseHandler::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::CallbackHandlers::WitResponseHandler::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::CallbackHandlers::WitResponseHandler::OnRequestSend(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::WitAi::CallbackHandlers::WitResponseHandler::HandleValidateEarlyResponse(::Meta::WitAi::Data::VoiceSession*  session)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, session);
}
inline void Meta::WitAi::CallbackHandlers::WitResponseHandler::HandleFinalResponse(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline ::StringW Meta::WitAi::CallbackHandlers::WitResponseHandler::OnValidateResponse(::Meta::WitAi::Json::WitResponseNode*  response, bool  isEarlyResponse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, response, isEarlyResponse);
}
inline void Meta::WitAi::CallbackHandlers::WitResponseHandler::OnResponseInvalid(::Meta::WitAi::Json::WitResponseNode*  response, ::StringW  error)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, error);
}
inline void Meta::WitAi::CallbackHandlers::WitResponseHandler::OnResponseSuccess(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline bool Meta::WitAi::CallbackHandlers::WitResponseHandler::RefreshConfidenceRange(float_t  confidence, ::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>  confidenceRanges, bool  allowConfidenceOverlap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(),
                        {"RefreshConfidenceRange", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, confidence, confidenceRanges, allowConfidenceOverlap);
}
inline void Meta::WitAi::CallbackHandlers::WitResponseHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::CallbackHandlers::WitResponseHandler* Meta::WitAi::CallbackHandlers::WitResponseHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::CallbackHandlers::WitResponseHandler*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::CallbackHandlers::WitResponseHandler::WitResponseHandler()   {
}
