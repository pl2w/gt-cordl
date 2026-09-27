#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/CustomPluralRuleProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__CustomPluralRuleProvider_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__PluralRules_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider::*)(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*)>(&::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb0415f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider.GetFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider::*)(::System::Type*)>(&::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider::GetFormat)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb041624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider*>(),
                        {"GetFormat", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider.GetPluralRule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* (::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider::GetPluralRule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0416b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider*>(),
                        {"GetPluralRule", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*& UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider::__cordl_internal_get__pluralRule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pluralRule;
}
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* const& UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider::__cordl_internal_get__pluralRule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pluralRule;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider::__cordl_internal_set__pluralRule(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pluralRule = value;
}
inline void UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider::_ctor(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  pluralRule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pluralRule);
}
inline ::System::Object* UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider::GetFormat(::System::Type*  formatType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider*>(),
                        {"GetFormat", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, formatType);
}
inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider::GetPluralRule()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider*>(),
                        {"GetPluralRule", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider* UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider::New_ctor(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  pluralRule)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider*>(pluralRule));
}
/// @brief Convert operator to "::System::IFormatProvider"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider::operator ::System::IFormatProvider*() noexcept {
return static_cast<::System::IFormatProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IFormatProvider"
constexpr ::System::IFormatProvider* UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider::i___System__IFormatProvider() noexcept {
return static_cast<::System::IFormatProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider::CustomPluralRuleProvider()   {
}
