#pragma once
// IWYU pragma private; include "VYaml/Internal/EmitStringAnalyzer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Internal/zzzz__EmitStringAnalyzer_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "VYaml/Internal/zzzz__EmitStringInfo_def.hpp"
//  Writing Method size for method: ::VYaml::Internal::EmitStringAnalyzer.Analyze
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Internal::EmitStringInfo (*)(::StringW)>(&::VYaml::Internal::EmitStringAnalyzer::Analyze)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb96661c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::EmitStringAnalyzer*>(),
                        {"Analyze", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Internal::EmitStringAnalyzer.BuildLiteralScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)(::System::ReadOnlySpan_1<char16_t>, int32_t)>(&::VYaml::Internal::EmitStringAnalyzer::BuildLiteralScalar)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xb966a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::EmitStringAnalyzer*>(),
                        {"BuildLiteralScalar", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Internal::EmitStringAnalyzer.BuildQuotedScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)(::System::ReadOnlySpan_1<char16_t>, bool)>(&::VYaml::Internal::EmitStringAnalyzer::BuildQuotedScalar)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0xb966c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::EmitStringAnalyzer*>(),
                        {"BuildQuotedScalar", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Internal::EmitStringAnalyzer.IsReservedWord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::VYaml::Internal::EmitStringAnalyzer::IsReservedWord)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xb966818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::EmitStringAnalyzer*>(),
                        {"IsReservedWord", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Internal::EmitStringAnalyzer.GetStringBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)()>(&::VYaml::Internal::EmitStringAnalyzer::GetStringBuilder)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb9671a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::EmitStringAnalyzer*>(),
                        {"GetStringBuilder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Internal::EmitStringAnalyzer.AppendWhiteSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t)>(&::VYaml::Internal::EmitStringAnalyzer::AppendWhiteSpace)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xb967268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::EmitStringAnalyzer*>(),
                        {"AppendWhiteSpace", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Internal::EmitStringAnalyzer::setStaticF_stringBuilderThreadStatic(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "stringBuilderThreadStatic", ::VYaml::Internal::EmitStringAnalyzer*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* VYaml::Internal::EmitStringAnalyzer::getStaticF_stringBuilderThreadStatic()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "stringBuilderThreadStatic", ::VYaml::Internal::EmitStringAnalyzer*>();
}
inline void VYaml::Internal::EmitStringAnalyzer::setStaticF_whiteSpaces(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "whiteSpaces", ::VYaml::Internal::EmitStringAnalyzer*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> VYaml::Internal::EmitStringAnalyzer::getStaticF_whiteSpaces()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "whiteSpaces", ::VYaml::Internal::EmitStringAnalyzer*>();
}
inline ::VYaml::Internal::EmitStringInfo VYaml::Internal::EmitStringAnalyzer::Analyze(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::EmitStringAnalyzer*>(),
                        {"Analyze", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Internal::EmitStringInfo>(nullptr, ___internal_method, value);
}
inline ::System::Text::StringBuilder* VYaml::Internal::EmitStringAnalyzer::BuildLiteralScalar(::System::ReadOnlySpan_1<char16_t>  originalValue, int32_t  indentCharCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::EmitStringAnalyzer*>(),
                        {"BuildLiteralScalar", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method, originalValue, indentCharCount);
}
inline ::System::Text::StringBuilder* VYaml::Internal::EmitStringAnalyzer::BuildQuotedScalar(::System::ReadOnlySpan_1<char16_t>  originalValue, bool  doubleQuote)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::EmitStringAnalyzer*>(),
                        {"BuildQuotedScalar", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method, originalValue, doubleQuote);
}
inline bool VYaml::Internal::EmitStringAnalyzer::IsReservedWord(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::EmitStringAnalyzer*>(),
                        {"IsReservedWord", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline ::System::Text::StringBuilder* VYaml::Internal::EmitStringAnalyzer::GetStringBuilder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::EmitStringAnalyzer*>(),
                        {"GetStringBuilder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method);
}
inline void VYaml::Internal::EmitStringAnalyzer::AppendWhiteSpace(::System::Text::StringBuilder*  stringBuilder, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::EmitStringAnalyzer*>(),
                        {"AppendWhiteSpace", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stringBuilder, length);
}
// Ctor Parameters []
constexpr ::VYaml::Internal::EmitStringAnalyzer::EmitStringAnalyzer()   {
}
