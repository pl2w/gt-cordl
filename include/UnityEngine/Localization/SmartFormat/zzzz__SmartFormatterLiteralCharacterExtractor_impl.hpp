#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/SmartFormatterLiteralCharacterExtractor.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__SmartFormatter_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__SmartFormatterLiteralCharacterExtractor_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Formatting/zzzz__FormattingInfo_def.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__SmartFormatter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor::*)(::UnityEngine::Localization::SmartFormat::SmartFormatter*)>(&::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb02c068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor.ExtractLiteralsCharacters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<char16_t>* (::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor::*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor::ExtractLiteralsCharacters)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb02c144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor*>(),
                        {"ExtractLiteralsCharacters", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor::*)(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor::Format)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0xb02c1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>*& UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor::__cordl_internal_get_m_Characters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Characters;
}
constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>* const& UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor::__cordl_internal_get_m_Characters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Characters;
}
constexpr void UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor::__cordl_internal_set_m_Characters(::System::Collections::Generic::IEnumerable_1<char16_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Characters = value;
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor::_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline ::System::Collections::Generic::IEnumerable_1<char16_t>* UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor::ExtractLiteralsCharacters(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor*>(),
                        {"ExtractLiteralsCharacters", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<char16_t>*>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor::Format(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  formattingInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formattingInfo);
}
inline ::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor* UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor::New_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor*>(parent));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor::SmartFormatterLiteralCharacterExtractor()   {
}
