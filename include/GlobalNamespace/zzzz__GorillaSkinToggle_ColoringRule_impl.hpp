#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSkinToggle_ColoringRule.hpp"
#include "GlobalNamespace/zzzz__GorillaSkinMaterials_impl.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaSkinToggle_ColoringRule_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSkin_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaSkinToggle_ColoringRule.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSkinToggle_ColoringRule::*)()>(&::GlobalNamespace::GorillaSkinToggle_ColoringRule::Init)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5652404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle_ColoringRule>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkinToggle_ColoringRule.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSkinToggle_ColoringRule::*)(::GlobalNamespace::GorillaSkin*, ::UnityEngine::Color)>(&::GlobalNamespace::GorillaSkinToggle_ColoringRule::Apply)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5652550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle_ColoringRule>(),
                        {"Apply", {}, {::i2c::type_of<::GlobalNamespace::GorillaSkin*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaSkinToggle_ColoringRule::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle_ColoringRule>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::GorillaSkinToggle_ColoringRule::Apply(::GlobalNamespace::GorillaSkin*  skin, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle_ColoringRule>(),
                        {"Apply", {}, {::i2c::type_of<::GlobalNamespace::GorillaSkin*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, skin, color);
}
// Ctor Parameters [CppParam { name: "colorMaterials", ty: "::GlobalNamespace::GorillaSkinMaterials", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shaderColorProperty", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shaderHashId", ty: "::GlobalNamespace::ShaderHashId", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaSkinToggle_ColoringRule::GorillaSkinToggle_ColoringRule(::GlobalNamespace::GorillaSkinMaterials  colorMaterials, ::StringW  shaderColorProperty, ::GlobalNamespace::ShaderHashId  shaderHashId) noexcept  {
this->colorMaterials = colorMaterials;
this->shaderColorProperty = shaderColorProperty;
this->shaderHashId = shaderHashId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaSkinToggle_ColoringRule::GorillaSkinToggle_ColoringRule()   {
}
