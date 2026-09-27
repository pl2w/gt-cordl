#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/WitUtteranceMatcher.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__WitResponseHandler_impl.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__WitUtteranceMatcher_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/Utilities/zzzz__StringEvent_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher.OnValidateResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::*)(::Meta::WitAi::Json::WitResponseNode*, bool)>(&::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::OnValidateResponse)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e9e884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher.OnResponseInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::*)(::Meta::WitAi::Json::WitResponseNode*, ::StringW)>(&::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::OnResponseInvalid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e9eaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher.OnResponseSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::OnResponseSuccess)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9e9eaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher.IsMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::*)(::StringW)>(&::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::IsMatch)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9e9e934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher*>(),
                        {"IsMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::*)()>(&::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e9eb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::__cordl_internal_get_searchText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchText;
}
constexpr ::StringW const& Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::__cordl_internal_get_searchText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchText;
}
constexpr void Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::__cordl_internal_set_searchText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchText = value;
}
constexpr bool& Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::__cordl_internal_get_exactMatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exactMatch;
}
constexpr bool const& Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::__cordl_internal_get_exactMatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exactMatch;
}
constexpr void Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::__cordl_internal_set_exactMatch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exactMatch = value;
}
constexpr bool& Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::__cordl_internal_get_useRegex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRegex;
}
constexpr bool const& Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::__cordl_internal_get_useRegex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRegex;
}
constexpr void Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::__cordl_internal_set_useRegex(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useRegex = value;
}
constexpr ::Meta::WitAi::Utilities::StringEvent*& Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::__cordl_internal_get_onUtteranceMatched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onUtteranceMatched;
}
constexpr ::Meta::WitAi::Utilities::StringEvent* const& Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::__cordl_internal_get_onUtteranceMatched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onUtteranceMatched;
}
constexpr void Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::__cordl_internal_set_onUtteranceMatched(::Meta::WitAi::Utilities::StringEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onUtteranceMatched = value;
}
constexpr ::System::Text::RegularExpressions::Regex*& Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::__cordl_internal_get_regex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regex;
}
constexpr ::System::Text::RegularExpressions::Regex* const& Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::__cordl_internal_get_regex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regex;
}
constexpr void Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::__cordl_internal_set_regex(::System::Text::RegularExpressions::Regex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___regex = value;
}
inline ::StringW Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::OnValidateResponse(::Meta::WitAi::Json::WitResponseNode*  response, bool  isEarlyResponse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, response, isEarlyResponse);
}
inline void Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::OnResponseInvalid(::Meta::WitAi::Json::WitResponseNode*  response, ::StringW  error)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, error);
}
inline void Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::OnResponseSuccess(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline bool Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::IsMatch(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher*>(),
                        {"IsMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, text);
}
inline void Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher* Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher::WitUtteranceMatcher()   {
}
