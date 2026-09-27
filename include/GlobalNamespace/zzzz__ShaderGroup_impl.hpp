#pragma once
// IWYU pragma private; include "GlobalNamespace/ShaderGroup.hpp"
#include "GlobalNamespace/zzzz__ShaderGroup_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShaderGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShaderGroup::*)(::UnityEngine::Material*, ::UnityEngine::Shader*, ::UnityEngine::Shader*, ::UnityEngine::Shader*)>(&::GlobalNamespace::ShaderGroup::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b3fd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShaderGroup>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ShaderGroup::_ctor(::UnityEngine::Material*  material, ::UnityEngine::Shader*  original, ::UnityEngine::Shader*  gameplay, ::UnityEngine::Shader*  baking)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShaderGroup>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, material, original, gameplay, baking);
}
// Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "originalShader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gameplayShader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bakingShader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ShaderGroup::ShaderGroup(::UnityW<::UnityEngine::Material>  material, ::UnityW<::UnityEngine::Shader>  originalShader, ::UnityW<::UnityEngine::Shader>  gameplayShader, ::UnityW<::UnityEngine::Shader>  bakingShader) noexcept  {
this->material = material;
this->originalShader = originalShader;
this->gameplayShader = gameplayShader;
this->bakingShader = bakingShader;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShaderGroup::ShaderGroup()   {
}
