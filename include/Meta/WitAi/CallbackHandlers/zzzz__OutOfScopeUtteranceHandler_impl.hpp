#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/OutOfScopeUtteranceHandler.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__WitResponseHandler_impl.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__OutOfScopeUtteranceHandler_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/Utilities/zzzz__StringEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler.OnValidateResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::*)(::Meta::WitAi::Json::WitResponseNode*, bool)>(&::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::OnValidateResponse)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9e9c8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler.OnResponseInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::*)(::Meta::WitAi::Json::WitResponseNode*, ::StringW)>(&::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::OnResponseInvalid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e9c9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler.OnResponseSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::OnResponseSuccess)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e9c9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::*)()>(&::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e9ca48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::__cordl_internal_get_confidenceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confidenceThreshold;
}
constexpr float_t const& Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::__cordl_internal_get_confidenceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confidenceThreshold;
}
constexpr void Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::__cordl_internal_set_confidenceThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___confidenceThreshold = value;
}
constexpr ::Meta::WitAi::Utilities::StringEvent*& Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::__cordl_internal_get_onOutOfDomain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onOutOfDomain;
}
constexpr ::Meta::WitAi::Utilities::StringEvent* const& Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::__cordl_internal_get_onOutOfDomain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onOutOfDomain;
}
constexpr void Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::__cordl_internal_set_onOutOfDomain(::Meta::WitAi::Utilities::StringEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onOutOfDomain = value;
}
inline ::StringW Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::OnValidateResponse(::Meta::WitAi::Json::WitResponseNode*  response, bool  isEarlyResponse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, response, isEarlyResponse);
}
inline void Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::OnResponseInvalid(::Meta::WitAi::Json::WitResponseNode*  response, ::StringW  error)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, error);
}
inline void Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::OnResponseSuccess(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler* Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler::OutOfScopeUtteranceHandler()   {
}
