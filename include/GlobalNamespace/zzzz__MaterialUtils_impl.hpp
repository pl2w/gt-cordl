#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialUtils_def.hpp"
#include "GlobalNamespace/zzzz__MeshAndMaterials_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialUtils.GetTrimmedMaterialName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Material*)>(&::GlobalNamespace::MaterialUtils::GetTrimmedMaterialName)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58b804c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialUtils*>(),
                        {"GetTrimmedMaterialName", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialUtils.SwapMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MeshAndMaterials*, bool)>(&::GlobalNamespace::MaterialUtils::SwapMaterial)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x58b80d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialUtils*>(),
                        {"SwapMaterial", {}, {::i2c::type_of<::GlobalNamespace::MeshAndMaterials*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::MaterialUtils::GetTrimmedMaterialName(::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialUtils*>(),
                        {"GetTrimmedMaterialName", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, material);
}
inline void GlobalNamespace::MaterialUtils::SwapMaterial(::GlobalNamespace::MeshAndMaterials*  meshAndMaterial, bool  isOnToOff)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialUtils*>(),
                        {"SwapMaterial", {}, {::i2c::type_of<::GlobalNamespace::MeshAndMaterials*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshAndMaterial, isOnToOff);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialUtils::MaterialUtils()   {
}
