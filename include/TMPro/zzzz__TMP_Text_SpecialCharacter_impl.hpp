#pragma once
// IWYU pragma private; include "TMPro/TMP_Text_SpecialCharacter.hpp"
#include "TMPro/zzzz__TMP_Text_SpecialCharacter_def.hpp"
#include "TMPro/zzzz__TMP_Character_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TMP_Text_SpecialCharacter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TMP_Text_SpecialCharacter::*)(::TMPro::TMP_Character*, int32_t)>(&::GlobalNamespace::TMP_Text_SpecialCharacter::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb3a79dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMP_Text_SpecialCharacter>(),
                        {".ctor", {}, {::i2c::type_of<::TMPro::TMP_Character*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TMP_Text_SpecialCharacter::_ctor(::TMPro::TMP_Character*  character, int32_t  materialIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMP_Text_SpecialCharacter>(),
                        {".ctor", {}, {::i2c::type_of<::TMPro::TMP_Character*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, character, materialIndex);
}
// Ctor Parameters [CppParam { name: "character", ty: "::TMPro::TMP_Character*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fontAsset", ty: "::UnityW<::TMPro::TMP_FontAsset>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materialIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TMP_Text_SpecialCharacter::TMP_Text_SpecialCharacter(::TMPro::TMP_Character*  character, ::UnityW<::TMPro::TMP_FontAsset>  fontAsset, ::UnityW<::UnityEngine::Material>  material, int32_t  materialIndex) noexcept  {
this->character = character;
this->fontAsset = fontAsset;
this->material = material;
this->materialIndex = materialIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TMP_Text_SpecialCharacter::TMP_Text_SpecialCharacter()   {
}
