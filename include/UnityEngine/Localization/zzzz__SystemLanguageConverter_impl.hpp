#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SystemLanguageConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/zzzz__SystemLanguageConverter_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SystemLanguageConverter.GetSystemLanguageCultureCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::SystemLanguage)>(&::UnityEngine::Localization::SystemLanguageConverter::GetSystemLanguageCultureCode)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xb00d298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SystemLanguageConverter*>(),
                        {"GetSystemLanguageCultureCode", {}, {::i2c::type_of<::UnityEngine::SystemLanguage>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Localization::SystemLanguageConverter::GetSystemLanguageCultureCode(::UnityEngine::SystemLanguage  lang)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SystemLanguageConverter*>(),
                        {"GetSystemLanguageCultureCode", {}, {::i2c::type_of<::UnityEngine::SystemLanguage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, lang);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SystemLanguageConverter::SystemLanguageConverter()   {
}
