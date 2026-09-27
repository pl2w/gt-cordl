#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/SimpleIntentHandler.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__ConfidenceRange_impl.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__WitIntentMatcher_impl.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__SimpleIntentHandler_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::SimpleIntentHandler.get_OnIntentTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::CallbackHandlers::SimpleIntentHandler::*)()>(&::Meta::WitAi::CallbackHandlers::SimpleIntentHandler::get_OnIntentTriggered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9cabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleIntentHandler*>(),
                        {"get_OnIntentTriggered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::SimpleIntentHandler.OnResponseSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::SimpleIntentHandler::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::CallbackHandlers::SimpleIntentHandler::OnResponseSuccess)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e9cac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleIntentHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleIntentHandler*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::SimpleIntentHandler.OnResponseInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::SimpleIntentHandler::*)(::Meta::WitAi::Json::WitResponseNode*, ::StringW)>(&::Meta::WitAi::CallbackHandlers::SimpleIntentHandler::OnResponseInvalid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e9cbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleIntentHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleIntentHandler*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::SimpleIntentHandler.UpdateRanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::SimpleIntentHandler::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::CallbackHandlers::SimpleIntentHandler::UpdateRanges)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9e9cafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleIntentHandler*>(),
                        {"UpdateRanges", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::SimpleIntentHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::SimpleIntentHandler::*)()>(&::Meta::WitAi::CallbackHandlers::SimpleIntentHandler::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e9cca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleIntentHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::CallbackHandlers::SimpleIntentHandler::__cordl_internal_get_onIntentTriggered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onIntentTriggered;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::CallbackHandlers::SimpleIntentHandler::__cordl_internal_get_onIntentTriggered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onIntentTriggered;
}
constexpr void Meta::WitAi::CallbackHandlers::SimpleIntentHandler::__cordl_internal_set_onIntentTriggered(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onIntentTriggered = value;
}
constexpr bool& Meta::WitAi::CallbackHandlers::SimpleIntentHandler::__cordl_internal_get_allowConfidenceOverlap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowConfidenceOverlap;
}
constexpr bool const& Meta::WitAi::CallbackHandlers::SimpleIntentHandler::__cordl_internal_get_allowConfidenceOverlap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowConfidenceOverlap;
}
constexpr void Meta::WitAi::CallbackHandlers::SimpleIntentHandler::__cordl_internal_set_allowConfidenceOverlap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowConfidenceOverlap = value;
}
constexpr ::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>& Meta::WitAi::CallbackHandlers::SimpleIntentHandler::__cordl_internal_get_confidenceRanges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confidenceRanges;
}
constexpr ::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*> const& Meta::WitAi::CallbackHandlers::SimpleIntentHandler::__cordl_internal_get_confidenceRanges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confidenceRanges;
}
constexpr void Meta::WitAi::CallbackHandlers::SimpleIntentHandler::__cordl_internal_set_confidenceRanges(::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___confidenceRanges = value;
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::CallbackHandlers::SimpleIntentHandler::get_OnIntentTriggered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleIntentHandler*>(),
                        {"get_OnIntentTriggered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline void Meta::WitAi::CallbackHandlers::SimpleIntentHandler::OnResponseSuccess(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleIntentHandler*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void Meta::WitAi::CallbackHandlers::SimpleIntentHandler::OnResponseInvalid(::Meta::WitAi::Json::WitResponseNode*  response, ::StringW  error)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleIntentHandler*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, error);
}
inline void Meta::WitAi::CallbackHandlers::SimpleIntentHandler::UpdateRanges(::Meta::WitAi::Json::WitResponseNode*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleIntentHandler*>(),
                        {"UpdateRanges", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void Meta::WitAi::CallbackHandlers::SimpleIntentHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::SimpleIntentHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::CallbackHandlers::SimpleIntentHandler* Meta::WitAi::CallbackHandlers::SimpleIntentHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::CallbackHandlers::SimpleIntentHandler*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::CallbackHandlers::SimpleIntentHandler::SimpleIntentHandler()   {
}
