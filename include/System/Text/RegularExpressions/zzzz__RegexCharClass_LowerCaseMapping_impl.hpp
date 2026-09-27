#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexCharClass_LowerCaseMapping.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexCharClass_LowerCaseMapping_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RegexCharClass_LowerCaseMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegexCharClass_LowerCaseMapping::*)(char16_t, char16_t, int32_t, int32_t)>(&::GlobalNamespace::RegexCharClass_LowerCaseMapping::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xad18d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegexCharClass_LowerCaseMapping>(),
                        {".ctor", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RegexCharClass_LowerCaseMapping::_ctor(char16_t  chMin, char16_t  chMax, int32_t  lcOp, int32_t  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegexCharClass_LowerCaseMapping>(),
                        {".ctor", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chMin, chMax, lcOp, data);
}
// Ctor Parameters [CppParam { name: "ChMin", ty: "char16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ChMax", ty: "char16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LcOp", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Data", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RegexCharClass_LowerCaseMapping::RegexCharClass_LowerCaseMapping(char16_t  ChMin, char16_t  ChMax, int32_t  LcOp, int32_t  Data) noexcept  {
this->ChMin = ChMin;
this->ChMax = ChMax;
this->LcOp = LcOp;
this->Data = Data;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RegexCharClass_LowerCaseMapping::RegexCharClass_LowerCaseMapping()   {
}
