#pragma once
// IWYU pragma private; include "TMPro/TMP_Text_CharacterSubstitution.hpp"
#include "TMPro/zzzz__TMP_Text_CharacterSubstitution_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TMP_Text_CharacterSubstitution._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TMP_Text_CharacterSubstitution::*)(int32_t, uint32_t)>(&::GlobalNamespace::TMP_Text_CharacterSubstitution::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3a79d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMP_Text_CharacterSubstitution>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TMP_Text_CharacterSubstitution::_ctor(int32_t  index, uint32_t  unicode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMP_Text_CharacterSubstitution>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, unicode);
}
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TMP_Text_CharacterSubstitution::TMP_Text_CharacterSubstitution(int32_t  index, uint32_t  unicode) noexcept  {
this->index = index;
this->unicode = unicode;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TMP_Text_CharacterSubstitution::TMP_Text_CharacterSubstitution()   {
}
