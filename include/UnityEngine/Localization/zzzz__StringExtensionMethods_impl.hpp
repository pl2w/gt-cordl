#pragma once
// IWYU pragma private; include "UnityEngine/Localization/StringExtensionMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/zzzz__StringExtensionMethods_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::StringExtensionMethods.ReplaceWhiteSpaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::UnityEngine::Localization::StringExtensionMethods::ReplaceWhiteSpaces)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb011fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::StringExtensionMethods*>(),
                        {"ReplaceWhiteSpaces", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::StringExtensionMethods::setStaticF_s_WhitespaceRegex(::System::Text::RegularExpressions::Regex*  value)  {
::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "s_WhitespaceRegex", ::UnityEngine::Localization::StringExtensionMethods*>(std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* UnityEngine::Localization::StringExtensionMethods::getStaticF_s_WhitespaceRegex()  {
return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "s_WhitespaceRegex", ::UnityEngine::Localization::StringExtensionMethods*>();
}
inline ::StringW UnityEngine::Localization::StringExtensionMethods::ReplaceWhiteSpaces(::StringW  str, ::StringW  replacement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::StringExtensionMethods*>(),
                        {"ReplaceWhiteSpaces", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str, replacement);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::StringExtensionMethods::StringExtensionMethods()   {
}
