#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/Shaders/ShaderConfigData_ShaderConfig.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropFloat_impl.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropInt_impl.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropMatrix_impl.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropTexture_impl.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropVector_impl.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_ShaderConfig_def.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropFloat_def.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropInt_def.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropMatrix_def.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropTexture_def.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropVector_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShaderConfigData_ShaderConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShaderConfigData_ShaderConfig::*)(::StringW, ::UnityEngine::Material*, ::ArrayW<::StringW>, ::ArrayW<int32_t>, ::ArrayW<::StringW>, ::ArrayW<float_t>, ::ArrayW<::StringW>, ::ArrayW<::UnityEngine::Matrix4x4>, ::ArrayW<::StringW>, ::ArrayW<::UnityEngine::Vector4>, ::ArrayW<::StringW>, ::ArrayW<::UnityEngine::Texture*>)>(&::GlobalNamespace::ShaderConfigData_ShaderConfig::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d5fcd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShaderConfigData_ShaderConfig>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Texture*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ShaderConfigData_ShaderConfig::_ctor(::StringW  shadName, ::UnityEngine::Material*  fMat, ::ArrayW<::StringW>  intNames, ::ArrayW<int32_t>  intVals, ::ArrayW<::StringW>  floatNames, ::ArrayW<float_t>  floatVals, ::ArrayW<::StringW>  matrixNames, ::ArrayW<::UnityEngine::Matrix4x4>  matrixVals, ::ArrayW<::StringW>  vectorNames, ::ArrayW<::UnityEngine::Vector4>  vectorVals, ::ArrayW<::StringW>  textureNames, ::ArrayW<::UnityEngine::Texture*>  textureVals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShaderConfigData_ShaderConfig>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Texture*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, shadName, fMat, intNames, intVals, floatNames, floatVals, matrixNames, matrixVals, vectorNames, vectorVals, textureNames, textureVals);
}
// Ctor Parameters [CppParam { name: "shaderName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "firstMat", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ints", ty: "::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropInt>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "floats", ty: "::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropFloat>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "matrices", ty: "::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropMatrix>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vectors", ty: "::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropVector>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textures", ty: "::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropTexture>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ShaderConfigData_ShaderConfig::ShaderConfigData_ShaderConfig(::StringW  shaderName, ::UnityW<::UnityEngine::Material>  firstMat, ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropInt>  ints, ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropFloat>  floats, ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropMatrix>  matrices, ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropVector>  vectors, ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropTexture>  textures) noexcept  {
this->shaderName = shaderName;
this->firstMat = firstMat;
this->ints = ints;
this->floats = floats;
this->matrices = matrices;
this->vectors = vectors;
this->textures = textures;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShaderConfigData_ShaderConfig::ShaderConfigData_ShaderConfig()   {
}
