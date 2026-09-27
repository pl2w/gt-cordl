#pragma once
// IWYU pragma private; include "Fusion/UTF32Tools_ConversionResult.hpp"
#include "Fusion/zzzz__UTF32Tools_ConversionResult_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UTF32Tools_ConversionResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UTF32Tools_ConversionResult::*)(int32_t, int32_t)>(&::GlobalNamespace::UTF32Tools_ConversionResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f40788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UTF32Tools_ConversionResult>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UTF32Tools_ConversionResult::_ctor(int32_t  words, int32_t  characters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UTF32Tools_ConversionResult>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, words, characters);
}
// Ctor Parameters [CppParam { name: "CharacterCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CodePointCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UTF32Tools_ConversionResult::UTF32Tools_ConversionResult(int32_t  CharacterCount, int32_t  CodePointCount) noexcept  {
this->CharacterCount = CharacterCount;
this->CodePointCount = CodePointCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UTF32Tools_ConversionResult::UTF32Tools_ConversionResult()   {
}
