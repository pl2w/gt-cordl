#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/ConditionalFormatter.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__ConditionalFormatter_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormatterLiteralExtractor_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormattingInfo_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Format_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb028330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter.get_DefaultNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::get_DefaultNames)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb039694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter.TryEvaluateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::TryEvaluateFormat)> {
  constexpr static std::size_t size = 0xa6c;
  constexpr static std::size_t addrs = 0xb039784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter.TryEvaluateCondition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*, ::System::Decimal, ::by_ref<bool>, ::by_ref<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>)>(&::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::TryEvaluateCondition)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0xb03a204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter*>(),
                        {"TryEvaluateCondition", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter.WriteAllLiterals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::WriteAllLiterals)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0xb03a7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter*>(),
                        {"WriteAllLiterals", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::setStaticF__complexConditionPattern(::System::Text::RegularExpressions::Regex*  value)  {
::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "_complexConditionPattern", ::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter*>(std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::getStaticF__complexConditionPattern()  {
return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "_complexConditionPattern", ::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter*>();
}
inline void UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::get_DefaultNames()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, formattingInfo);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::TryEvaluateCondition(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  parameter, ::System::Decimal  value, ::by_ref<bool>  conditionResult, ::by_ref<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>  outputItem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter*>(),
                        {"TryEvaluateCondition", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, parameter, value, conditionResult, outputItem);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::WriteAllLiterals(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter*>(),
                        {"WriteAllLiterals", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formattingInfo);
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter* UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::operator ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor* UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::i___UnityEngine__Localization__SmartFormat__Core__Extensions__IFormatterLiteralExtractor() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter::ConditionalFormatter()   {
}
