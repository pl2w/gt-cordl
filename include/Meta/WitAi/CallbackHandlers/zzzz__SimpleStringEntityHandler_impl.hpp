#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/SimpleStringEntityHandler.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__WitIntentMatcher_impl.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__SimpleStringEntityHandler_def.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__StringEntityMatchEvent_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler.get_OnIntentEntityTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent* (::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::*)()>(&::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::get_OnIntentEntityTriggered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9cd2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler*>(),
                        {"get_OnIntentEntityTriggered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler.OnValidateResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::*)(::Meta::WitAi::Json::WitResponseNode*, bool)>(&::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::OnValidateResponse)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e9cd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler.OnResponseInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::*)(::Meta::WitAi::Json::WitResponseNode*, ::StringW)>(&::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::OnResponseInvalid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e9cfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler.OnResponseSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::OnResponseSuccess)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9e9cfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::*)()>(&::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e9d06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::StringW const& Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::__cordl_internal_set_entity(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::StringW& Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::__cordl_internal_get_format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___format;
}
constexpr ::StringW const& Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::__cordl_internal_get_format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___format;
}
constexpr void Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::__cordl_internal_set_format(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___format = value;
}
constexpr ::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent*& Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::__cordl_internal_get_onIntentEntityTriggered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onIntentEntityTriggered;
}
constexpr ::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent* const& Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::__cordl_internal_get_onIntentEntityTriggered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onIntentEntityTriggered;
}
constexpr void Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::__cordl_internal_set_onIntentEntityTriggered(::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onIntentEntityTriggered = value;
}
inline ::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent* Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::get_OnIntentEntityTriggered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler*>(),
                        {"get_OnIntentEntityTriggered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent*>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::OnValidateResponse(::Meta::WitAi::Json::WitResponseNode*  response, bool  isEarlyResponse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, response, isEarlyResponse);
}
inline void Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::OnResponseInvalid(::Meta::WitAi::Json::WitResponseNode*  response, ::StringW  error)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, error);
}
inline void Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::OnResponseSuccess(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler* Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler::SimpleStringEntityHandler()   {
}
