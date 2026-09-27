#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexCharClass_SingleRange.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexCharClass_SingleRange_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RegexCharClass_SingleRange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegexCharClass_SingleRange::*)(char16_t, char16_t)>(&::GlobalNamespace::RegexCharClass_SingleRange::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xad11c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegexCharClass_SingleRange>(),
                        {".ctor", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RegexCharClass_SingleRange::_ctor(char16_t  first, char16_t  last)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegexCharClass_SingleRange>(),
                        {".ctor", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, first, last);
}
// Ctor Parameters [CppParam { name: "First", ty: "char16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Last", ty: "char16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RegexCharClass_SingleRange::RegexCharClass_SingleRange(char16_t  First, char16_t  Last) noexcept  {
this->First = First;
this->Last = Last;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RegexCharClass_SingleRange::RegexCharClass_SingleRange()   {
}
