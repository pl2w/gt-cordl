#pragma once
// IWYU pragma private; include "Unity/Collections/UTF8ArrayUnsafeUtility_Comparison.hpp"
#include "Unity/Collections/zzzz__UTF8ArrayUnsafeUtility_Comparison_def.hpp"
#include "Unity/Collections/zzzz__ConversionError_def.hpp"
#include "Unity/Collections/zzzz__Unicode_Rune_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UTF8ArrayUnsafeUtility_Comparison._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UTF8ArrayUnsafeUtility_Comparison::*)(::GlobalNamespace::Unicode_Rune, ::Unity::Collections::ConversionError, ::GlobalNamespace::Unicode_Rune, ::Unity::Collections::ConversionError)>(&::GlobalNamespace::UTF8ArrayUnsafeUtility_Comparison::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaf077d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UTF8ArrayUnsafeUtility_Comparison>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Unicode_Rune>(), ::i2c::type_of<::Unity::Collections::ConversionError>(), ::i2c::type_of<::GlobalNamespace::Unicode_Rune>(), ::i2c::type_of<::Unity::Collections::ConversionError>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UTF8ArrayUnsafeUtility_Comparison::_ctor(::GlobalNamespace::Unicode_Rune  runeA, ::Unity::Collections::ConversionError  errorA, ::GlobalNamespace::Unicode_Rune  runeB, ::Unity::Collections::ConversionError  errorB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UTF8ArrayUnsafeUtility_Comparison>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Unicode_Rune>(), ::i2c::type_of<::Unity::Collections::ConversionError>(), ::i2c::type_of<::GlobalNamespace::Unicode_Rune>(), ::i2c::type_of<::Unity::Collections::ConversionError>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, runeA, errorA, runeB, errorB);
}
// Ctor Parameters [CppParam { name: "terminates", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "result", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UTF8ArrayUnsafeUtility_Comparison::UTF8ArrayUnsafeUtility_Comparison(bool  terminates, int32_t  result) noexcept  {
this->terminates = terminates;
this->result = result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UTF8ArrayUnsafeUtility_Comparison::UTF8ArrayUnsafeUtility_Comparison()   {
}
