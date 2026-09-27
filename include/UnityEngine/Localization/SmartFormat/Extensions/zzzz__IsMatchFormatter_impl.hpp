#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/IsMatchFormatter.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__IsMatchFormatter_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormatterLiteralExtractor_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormattingInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb028530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter.get_DefaultNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::get_DefaultNames)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb03c5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter.TryEvaluateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::TryEvaluateFormat)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0xb03c664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter.WriteAllLiterals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::WriteAllLiterals)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0xb03cbe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter*>(),
                        {"WriteAllLiterals", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter.get_RegexOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexOptions (::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::get_RegexOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb03cfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter*>(),
                        {"get_RegexOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter.set_RegexOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::*)(::System::Text::RegularExpressions::RegexOptions)>(&::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::set_RegexOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb03cfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter*>(),
                        {"set_RegexOptions", {}, {::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Text::RegularExpressions::RegexOptions& UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::__cordl_internal_get__RegexOptions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RegexOptions_k__BackingField;
}
constexpr ::System::Text::RegularExpressions::RegexOptions const& UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::__cordl_internal_get__RegexOptions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RegexOptions_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::__cordl_internal_set__RegexOptions_k__BackingField(::System::Text::RegularExpressions::RegexOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RegexOptions_k__BackingField = value;
}
inline void UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::get_DefaultNames()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, formattingInfo);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::WriteAllLiterals(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter*>(),
                        {"WriteAllLiterals", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formattingInfo);
}
inline ::System::Text::RegularExpressions::RegexOptions UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::get_RegexOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter*>(),
                        {"get_RegexOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexOptions>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::set_RegexOptions(::System::Text::RegularExpressions::RegexOptions  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter*>(),
                        {"set_RegexOptions", {}, {::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter* UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::operator ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor* UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::i___UnityEngine__Localization__SmartFormat__Core__Extensions__IFormatterLiteralExtractor() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter::IsMatchFormatter()   {
}
