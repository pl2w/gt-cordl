#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair::*)(::StringW, ::UnityEngine::Color)>(&::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9dd3520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair::_ctor(::StringW  nm, ::UnityEngine::Color  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nm, col);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair(::StringW  name, ::UnityEngine::Color  color) noexcept  {
this->name = name;
this->color = color;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair()   {
}
