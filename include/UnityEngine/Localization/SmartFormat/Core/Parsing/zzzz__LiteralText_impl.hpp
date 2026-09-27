#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Parsing/LiteralText.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__FormatItem_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__LiteralText_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb045d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText.ConvertCharacterLiteralsToUnicode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText::ConvertCharacterLiteralsToUnicode)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xb045da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>(),
                        {"ConvertCharacterLiteralsToUnicode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb02e0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText::ConvertCharacterLiteralsToUnicode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>(),
                        {"ConvertCharacterLiteralsToUnicode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText* UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText::LiteralText()   {
}
