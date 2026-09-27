#pragma once
// IWYU pragma private; include "Cysharp/Text/FormatParser_ParseResult.hpp"
#include "System/zzzz__ReadOnlySpan_1_impl.hpp"
#include "Cysharp/Text/zzzz__FormatParser_ParseResult_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FormatParser_ParseResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FormatParser_ParseResult::*)(int32_t, ::System::ReadOnlySpan_1<char16_t>, int32_t, int32_t)>(&::GlobalNamespace::FormatParser_ParseResult::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9aaa78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FormatParser_ParseResult>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FormatParser_ParseResult::_ctor(int32_t  index, ::System::ReadOnlySpan_1<char16_t>  formatString, int32_t  lastIndex, int32_t  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FormatParser_ParseResult>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, formatString, lastIndex, alignment);
}
// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FormatString", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LastIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Alignment", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FormatParser_ParseResult::FormatParser_ParseResult(int32_t  Index, ::System::ReadOnlySpan_1<char16_t>  FormatString, int32_t  LastIndex, int32_t  Alignment) noexcept  {
this->Index = Index;
this->FormatString = FormatString;
this->LastIndex = LastIndex;
this->Alignment = Alignment;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FormatParser_ParseResult::FormatParser_ParseResult()   {
}
