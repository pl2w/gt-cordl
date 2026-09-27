#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/PluralLocalizationFormatter.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__PluralLocalizationFormatter_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormatterLiteralExtractor_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormattingInfo_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__PluralRules_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter.get_DefaultTwoLetterISOLanguageName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::get_DefaultTwoLetterISOLanguageName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0408e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*>(),
                        {"get_DefaultTwoLetterISOLanguageName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter.set_DefaultTwoLetterISOLanguageName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::set_DefaultTwoLetterISOLanguageName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb0408f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*>(),
                        {"set_DefaultTwoLetterISOLanguageName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb0282b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter.get_DefaultNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::get_DefaultNames)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb040970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter.TryEvaluateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::TryEvaluateFormat)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0xb040a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter.GetPluralRule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* (::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::GetPluralRule)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0xb040e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter.WriteAllLiterals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::WriteAllLiterals)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xb04134c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*>(),
                        {"WriteAllLiterals", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::__cordl_internal_get_m_DefaultTwoLetterISOLanguageName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultTwoLetterISOLanguageName;
}
constexpr ::StringW const& UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::__cordl_internal_get_m_DefaultTwoLetterISOLanguageName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultTwoLetterISOLanguageName;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::__cordl_internal_set_m_DefaultTwoLetterISOLanguageName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DefaultTwoLetterISOLanguageName = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*& UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::__cordl_internal_get_m_DefaultPluralRule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultPluralRule;
}
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* const& UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::__cordl_internal_get_m_DefaultPluralRule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultPluralRule;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::__cordl_internal_set_m_DefaultPluralRule(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DefaultPluralRule = value;
}
inline ::StringW UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::get_DefaultTwoLetterISOLanguageName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*>(),
                        {"get_DefaultTwoLetterISOLanguageName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::set_DefaultTwoLetterISOLanguageName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*>(),
                        {"set_DefaultTwoLetterISOLanguageName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::get_DefaultNames()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, formattingInfo);
}
inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::GetPluralRule(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*>(this, ___internal_method, formattingInfo);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::WriteAllLiterals(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*>(),
                        {"WriteAllLiterals", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formattingInfo);
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter* UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::operator ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor* UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::i___UnityEngine__Localization__SmartFormat__Core__Extensions__IFormatterLiteralExtractor() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter::PluralLocalizationFormatter()   {
}
