#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/ChooseFormatter.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__ChooseFormatter_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormatterLiteralExtractor_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormattingInfo_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Format_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter.get_SplitChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::get_SplitChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb038b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*>(),
                        {"get_SplitChar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter.set_SplitChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::*)(char16_t)>(&::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::set_SplitChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb038b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*>(),
                        {"set_SplitChar", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb028474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter.get_DefaultNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::get_DefaultNames)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb038b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter.TryEvaluateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::TryEvaluateFormat)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xb038c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter.DetermineChosenFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* (*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*, ::System::Collections::Generic::IList_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*, ::ArrayW<::StringW>)>(&::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::DetermineChosenFormat)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0xb038f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*>(),
                        {"DetermineChosenFormat", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter.WriteAllLiterals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::WriteAllLiterals)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0xb039390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*>(),
                        {"WriteAllLiterals", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr char16_t& UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::__cordl_internal_get_m_SplitChar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SplitChar;
}
constexpr char16_t const& UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::__cordl_internal_get_m_SplitChar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SplitChar;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::__cordl_internal_set_m_SplitChar(char16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SplitChar = value;
}
inline char16_t UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::get_SplitChar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*>(),
                        {"get_SplitChar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::set_SplitChar(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*>(),
                        {"set_SplitChar", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::get_DefaultNames()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, formattingInfo);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::DetermineChosenFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo, ::System::Collections::Generic::IList_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*  choiceFormats, ::ArrayW<::StringW>  chooseOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*>(),
                        {"DetermineChosenFormat", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(nullptr, ___internal_method, formattingInfo, choiceFormats, chooseOptions);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::WriteAllLiterals(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*>(),
                        {"WriteAllLiterals", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formattingInfo);
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter* UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::operator ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor* UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::i___UnityEngine__Localization__SmartFormat__Core__Extensions__IFormatterLiteralExtractor() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter::ChooseFormatter()   {
}
