#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextSettings_FontReferenceMap.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_FontReferenceMap_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextSettings_FontReferenceMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextSettings_FontReferenceMap::*)(::UnityEngine::Font*, ::UnityEngine::TextCore::Text::FontAsset*)>(&::GlobalNamespace::TextSettings_FontReferenceMap::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb6e7418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextSettings_FontReferenceMap>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TextSettings_FontReferenceMap::_ctor(::UnityEngine::Font*  font, ::UnityEngine::TextCore::Text::FontAsset*  fontAsset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextSettings_FontReferenceMap>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, font, fontAsset);
}
// Ctor Parameters [CppParam { name: "font", ty: "::UnityW<::UnityEngine::Font>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fontAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TextSettings_FontReferenceMap::TextSettings_FontReferenceMap(::UnityW<::UnityEngine::Font>  font, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>  fontAsset) noexcept  {
this->font = font;
this->fontAsset = fontAsset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextSettings_FontReferenceMap::TextSettings_FontReferenceMap()   {
}
