#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextGenerator_SpecialCharacter.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerator_SpecialCharacter_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Character_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextGenerator_SpecialCharacter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextGenerator_SpecialCharacter::*)(::UnityEngine::TextCore::Text::Character*, int32_t)>(&::GlobalNamespace::TextGenerator_SpecialCharacter::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb6ea3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextGenerator_SpecialCharacter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::TextCore::Text::Character*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TextGenerator_SpecialCharacter::_ctor(::UnityEngine::TextCore::Text::Character*  character, int32_t  materialIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextGenerator_SpecialCharacter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::TextCore::Text::Character*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, character, materialIndex);
}
// Ctor Parameters [CppParam { name: "character", ty: "::UnityEngine::TextCore::Text::Character*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fontAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materialIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TextGenerator_SpecialCharacter::TextGenerator_SpecialCharacter(::UnityEngine::TextCore::Text::Character*  character, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>  fontAsset, ::UnityW<::UnityEngine::Material>  material, int32_t  materialIndex) noexcept  {
this->character = character;
this->fontAsset = fontAsset;
this->material = material;
this->materialIndex = materialIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextGenerator_SpecialCharacter::TextGenerator_SpecialCharacter()   {
}
