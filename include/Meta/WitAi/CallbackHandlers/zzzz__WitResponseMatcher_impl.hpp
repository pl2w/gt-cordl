#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/WitResponseMatcher.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__FormattedValueEvents_impl.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__ValuePathMatcher_impl.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__WitIntentMatcher_impl.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__WitResponseMatcher_def.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__MultiValueEvent_def.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__ValuePathMatcher_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/Utilities/zzzz__StringEvent_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseMatcher.OnValidateResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::CallbackHandlers::WitResponseMatcher::*)(::Meta::WitAi::Json::WitResponseNode*, bool)>(&::Meta::WitAi::CallbackHandlers::WitResponseMatcher::OnValidateResponse)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9e9d924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseMatcher.OnResponseInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::WitResponseMatcher::*)(::Meta::WitAi::Json::WitResponseNode*, ::StringW)>(&::Meta::WitAi::CallbackHandlers::WitResponseMatcher::OnResponseInvalid)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9e9da38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseMatcher.OnResponseSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::WitResponseMatcher::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::CallbackHandlers::WitResponseMatcher::OnResponseSuccess)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x9e9db20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseMatcher.ValueMatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::CallbackHandlers::WitResponseMatcher::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::CallbackHandlers::WitResponseMatcher::ValueMatches)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e9d9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(),
                        {"ValueMatches", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseMatcher.ValueMatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::CallbackHandlers::WitResponseMatcher::*)(::Meta::WitAi::Json::WitResponseNode*, ::Meta::WitAi::CallbackHandlers::ValuePathMatcher*)>(&::Meta::WitAi::CallbackHandlers::WitResponseMatcher::ValueMatches)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9e9e104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(),
                        {"ValueMatches", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseMatcher.CompareDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::CallbackHandlers::WitResponseMatcher::*)(::StringW, ::Meta::WitAi::CallbackHandlers::ValuePathMatcher*)>(&::Meta::WitAi::CallbackHandlers::WitResponseMatcher::CompareDouble)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9e9e484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(),
                        {"CompareDouble", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseMatcher.CompareFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::CallbackHandlers::WitResponseMatcher::*)(::StringW, ::Meta::WitAi::CallbackHandlers::ValuePathMatcher*)>(&::Meta::WitAi::CallbackHandlers::WitResponseMatcher::CompareFloat)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9e9e328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(),
                        {"CompareFloat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseMatcher.CompareInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::CallbackHandlers::WitResponseMatcher::*)(::StringW, ::Meta::WitAi::CallbackHandlers::ValuePathMatcher*)>(&::Meta::WitAi::CallbackHandlers::WitResponseMatcher::CompareInt)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9e9e240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(),
                        {"CompareInt", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitResponseMatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::WitResponseMatcher::*)()>(&::Meta::WitAi::CallbackHandlers::WitResponseMatcher::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e9e5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>& Meta::WitAi::CallbackHandlers::WitResponseMatcher::__cordl_internal_get_valueMatchers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueMatchers;
}
constexpr ::ArrayW<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*> const& Meta::WitAi::CallbackHandlers::WitResponseMatcher::__cordl_internal_get_valueMatchers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueMatchers;
}
constexpr void Meta::WitAi::CallbackHandlers::WitResponseMatcher::__cordl_internal_set_valueMatchers(::ArrayW<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___valueMatchers = value;
}
constexpr ::ArrayW<::Meta::WitAi::CallbackHandlers::FormattedValueEvents*>& Meta::WitAi::CallbackHandlers::WitResponseMatcher::__cordl_internal_get_formattedValueEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formattedValueEvents;
}
constexpr ::ArrayW<::Meta::WitAi::CallbackHandlers::FormattedValueEvents*> const& Meta::WitAi::CallbackHandlers::WitResponseMatcher::__cordl_internal_get_formattedValueEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formattedValueEvents;
}
constexpr void Meta::WitAi::CallbackHandlers::WitResponseMatcher::__cordl_internal_set_formattedValueEvents(::ArrayW<::Meta::WitAi::CallbackHandlers::FormattedValueEvents*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___formattedValueEvents = value;
}
constexpr ::Meta::WitAi::CallbackHandlers::MultiValueEvent*& Meta::WitAi::CallbackHandlers::WitResponseMatcher::__cordl_internal_get_onMultiValueEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMultiValueEvent;
}
constexpr ::Meta::WitAi::CallbackHandlers::MultiValueEvent* const& Meta::WitAi::CallbackHandlers::WitResponseMatcher::__cordl_internal_get_onMultiValueEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMultiValueEvent;
}
constexpr void Meta::WitAi::CallbackHandlers::WitResponseMatcher::__cordl_internal_set_onMultiValueEvent(::Meta::WitAi::CallbackHandlers::MultiValueEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onMultiValueEvent = value;
}
constexpr ::Meta::WitAi::Utilities::StringEvent*& Meta::WitAi::CallbackHandlers::WitResponseMatcher::__cordl_internal_get_onDidNotMatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDidNotMatch;
}
constexpr ::Meta::WitAi::Utilities::StringEvent* const& Meta::WitAi::CallbackHandlers::WitResponseMatcher::__cordl_internal_get_onDidNotMatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDidNotMatch;
}
constexpr void Meta::WitAi::CallbackHandlers::WitResponseMatcher::__cordl_internal_set_onDidNotMatch(::Meta::WitAi::Utilities::StringEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDidNotMatch = value;
}
constexpr ::Meta::WitAi::Utilities::StringEvent*& Meta::WitAi::CallbackHandlers::WitResponseMatcher::__cordl_internal_get_onOutOfDomain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onOutOfDomain;
}
constexpr ::Meta::WitAi::Utilities::StringEvent* const& Meta::WitAi::CallbackHandlers::WitResponseMatcher::__cordl_internal_get_onOutOfDomain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onOutOfDomain;
}
constexpr void Meta::WitAi::CallbackHandlers::WitResponseMatcher::__cordl_internal_set_onOutOfDomain(::Meta::WitAi::Utilities::StringEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onOutOfDomain = value;
}
inline void Meta::WitAi::CallbackHandlers::WitResponseMatcher::setStaticF_valueRegex(::System::Text::RegularExpressions::Regex*  value)  {
::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "valueRegex", ::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* Meta::WitAi::CallbackHandlers::WitResponseMatcher::getStaticF_valueRegex()  {
return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "valueRegex", ::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>();
}
inline ::StringW Meta::WitAi::CallbackHandlers::WitResponseMatcher::OnValidateResponse(::Meta::WitAi::Json::WitResponseNode*  response, bool  isEarlyResponse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, response, isEarlyResponse);
}
inline void Meta::WitAi::CallbackHandlers::WitResponseMatcher::OnResponseInvalid(::Meta::WitAi::Json::WitResponseNode*  response, ::StringW  error)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, error);
}
inline void Meta::WitAi::CallbackHandlers::WitResponseMatcher::OnResponseSuccess(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline bool Meta::WitAi::CallbackHandlers::WitResponseMatcher::ValueMatches(::Meta::WitAi::Json::WitResponseNode*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(),
                        {"ValueMatches", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline bool Meta::WitAi::CallbackHandlers::WitResponseMatcher::ValueMatches(::Meta::WitAi::Json::WitResponseNode*  response, ::Meta::WitAi::CallbackHandlers::ValuePathMatcher*  matcher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(),
                        {"ValueMatches", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response, matcher);
}
inline bool Meta::WitAi::CallbackHandlers::WitResponseMatcher::CompareDouble(::StringW  value, ::Meta::WitAi::CallbackHandlers::ValuePathMatcher*  matcher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(),
                        {"CompareDouble", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, matcher);
}
inline bool Meta::WitAi::CallbackHandlers::WitResponseMatcher::CompareFloat(::StringW  value, ::Meta::WitAi::CallbackHandlers::ValuePathMatcher*  matcher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(),
                        {"CompareFloat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, matcher);
}
inline bool Meta::WitAi::CallbackHandlers::WitResponseMatcher::CompareInt(::StringW  value, ::Meta::WitAi::CallbackHandlers::ValuePathMatcher*  matcher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(),
                        {"CompareInt", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, matcher);
}
inline void Meta::WitAi::CallbackHandlers::WitResponseMatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::CallbackHandlers::WitResponseMatcher* Meta::WitAi::CallbackHandlers::WitResponseMatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::CallbackHandlers::WitResponseMatcher*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::CallbackHandlers::WitResponseMatcher::WitResponseMatcher()   {
}
