#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerColoredCosmetic_ColoringRule.hpp"
#include "GlobalNamespace/zzzz__PlayerColoredCosmetic_ColoringRule_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerColoredCosmetic_ColoringRule.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerColoredCosmetic_ColoringRule::*)(bool)>(&::GlobalNamespace::PlayerColoredCosmetic_ColoringRule::Init)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x578e818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerColoredCosmetic_ColoringRule>(),
                        {"Init", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerColoredCosmetic_ColoringRule.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerColoredCosmetic_ColoringRule::*)(::UnityEngine::Color, bool)>(&::GlobalNamespace::PlayerColoredCosmetic_ColoringRule::Apply)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x578f2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerColoredCosmetic_ColoringRule>(),
                        {"Apply", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerColoredCosmetic_ColoringRule::Init(bool  dontCreateMaterialInstance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerColoredCosmetic_ColoringRule>(),
                        {"Init", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dontCreateMaterialInstance);
}
inline void GlobalNamespace::PlayerColoredCosmetic_ColoringRule::Apply(::UnityEngine::Color  color, bool  dontCreateMaterialInstance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerColoredCosmetic_ColoringRule>(),
                        {"Apply", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, color, dontCreateMaterialInstance);
}
// Ctor Parameters [CppParam { name: "shaderColorProperty", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hashId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshRenderer", ty: "::UnityW<::UnityEngine::Renderer>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materialIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instancedMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "defaultMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PlayerColoredCosmetic_ColoringRule::PlayerColoredCosmetic_ColoringRule(::StringW  shaderColorProperty, int32_t  hashId, ::UnityW<::UnityEngine::Renderer>  meshRenderer, int32_t  materialIndex, ::UnityW<::UnityEngine::Material>  instancedMaterial, ::UnityW<::UnityEngine::Material>  defaultMaterial) noexcept  {
this->shaderColorProperty = shaderColorProperty;
this->hashId = hashId;
this->meshRenderer = meshRenderer;
this->materialIndex = materialIndex;
this->instancedMaterial = instancedMaterial;
this->defaultMaterial = defaultMaterial;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerColoredCosmetic_ColoringRule::PlayerColoredCosmetic_ColoringRule()   {
}
