#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/Shaders/ShaderConfigData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_def.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropFloat_def.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropInt_def.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropMatrix_def.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropTexture_def.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropVector_def.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_RenderersForShaderWithSameProperties_def.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_ShaderConfig_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GorillaTag::Rendering::Shaders::ShaderConfigData.convertInts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropInt> (*)(::ArrayW<::StringW>, ::ArrayW<int32_t>)>(&::GorillaTag::Rendering::Shaders::ShaderConfigData::convertInts)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5d5e528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::Shaders::ShaderConfigData*>(),
                        {"convertInts", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::Shaders::ShaderConfigData.convertFloats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropFloat> (*)(::ArrayW<::StringW>, ::ArrayW<float_t>)>(&::GorillaTag::Rendering::Shaders::ShaderConfigData::convertFloats)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5d5e640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::Shaders::ShaderConfigData*>(),
                        {"convertFloats", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::Shaders::ShaderConfigData.convertMatrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropMatrix> (*)(::ArrayW<::StringW>, ::ArrayW<::UnityEngine::Matrix4x4>)>(&::GorillaTag::Rendering::Shaders::ShaderConfigData::convertMatrices)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5d5e758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::Shaders::ShaderConfigData*>(),
                        {"convertMatrices", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::Shaders::ShaderConfigData.convertVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropVector> (*)(::ArrayW<::StringW>, ::ArrayW<::UnityEngine::Vector4>)>(&::GorillaTag::Rendering::Shaders::ShaderConfigData::convertVectors)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5d5e8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::Shaders::ShaderConfigData*>(),
                        {"convertVectors", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::Shaders::ShaderConfigData.convertTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropTexture> (*)(::ArrayW<::StringW>, ::ArrayW<::UnityEngine::Texture*>)>(&::GorillaTag::Rendering::Shaders::ShaderConfigData::convertTextures)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5d5e9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::Shaders::ShaderConfigData*>(),
                        {"convertTextures", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Texture*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::Shaders::ShaderConfigData.GetShaderPropertiesStringFromMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Material*, bool)>(&::GorillaTag::Rendering::Shaders::ShaderConfigData::GetShaderPropertiesStringFromMaterial)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x5d5eae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::Shaders::ShaderConfigData*>(),
                        {"GetShaderPropertiesStringFromMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::Shaders::ShaderConfigData.GetConfigDataFromMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ShaderConfigData_ShaderConfig (*)(::UnityEngine::Material*, bool)>(&::GorillaTag::Rendering::Shaders::ShaderConfigData::GetConfigDataFromMaterial)> {
  constexpr static std::size_t size = 0xc8c;
  constexpr static std::size_t addrs = 0x5d5f048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::Shaders::ShaderConfigData*>(),
                        {"GetConfigDataFromMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::Shaders::ShaderConfigData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::Shaders::ShaderConfigData::*)()>(&::GorillaTag::Rendering::Shaders::ShaderConfigData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d5fddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::Shaders::ShaderConfigData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropInt> GorillaTag::Rendering::Shaders::ShaderConfigData::convertInts(::ArrayW<::StringW>  names, ::ArrayW<int32_t>  vals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::Shaders::ShaderConfigData*>(),
                        {"convertInts", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropInt>>(nullptr, ___internal_method, names, vals);
}
inline ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropFloat> GorillaTag::Rendering::Shaders::ShaderConfigData::convertFloats(::ArrayW<::StringW>  names, ::ArrayW<float_t>  vals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::Shaders::ShaderConfigData*>(),
                        {"convertFloats", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropFloat>>(nullptr, ___internal_method, names, vals);
}
inline ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropMatrix> GorillaTag::Rendering::Shaders::ShaderConfigData::convertMatrices(::ArrayW<::StringW>  names, ::ArrayW<::UnityEngine::Matrix4x4>  vals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::Shaders::ShaderConfigData*>(),
                        {"convertMatrices", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropMatrix>>(nullptr, ___internal_method, names, vals);
}
inline ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropVector> GorillaTag::Rendering::Shaders::ShaderConfigData::convertVectors(::ArrayW<::StringW>  names, ::ArrayW<::UnityEngine::Vector4>  vals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::Shaders::ShaderConfigData*>(),
                        {"convertVectors", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropVector>>(nullptr, ___internal_method, names, vals);
}
inline ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropTexture> GorillaTag::Rendering::Shaders::ShaderConfigData::convertTextures(::ArrayW<::StringW>  names, ::ArrayW<::UnityEngine::Texture*>  vals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::Shaders::ShaderConfigData*>(),
                        {"convertTextures", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Texture*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropTexture>>(nullptr, ___internal_method, names, vals);
}
inline ::StringW GorillaTag::Rendering::Shaders::ShaderConfigData::GetShaderPropertiesStringFromMaterial(::UnityEngine::Material*  mat, bool  excludeMainTexData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::Shaders::ShaderConfigData*>(),
                        {"GetShaderPropertiesStringFromMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, mat, excludeMainTexData);
}
inline ::GlobalNamespace::ShaderConfigData_ShaderConfig GorillaTag::Rendering::Shaders::ShaderConfigData::GetConfigDataFromMaterial(::UnityEngine::Material*  mat, bool  includeMainTexData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::Shaders::ShaderConfigData*>(),
                        {"GetConfigDataFromMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ShaderConfigData_ShaderConfig>(nullptr, ___internal_method, mat, includeMainTexData);
}
inline void GorillaTag::Rendering::Shaders::ShaderConfigData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::Shaders::ShaderConfigData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Rendering::Shaders::ShaderConfigData* GorillaTag::Rendering::Shaders::ShaderConfigData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Rendering::Shaders::ShaderConfigData*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Rendering::Shaders::ShaderConfigData::ShaderConfigData()   {
}
