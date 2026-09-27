#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/EdMeshCombinerPrefab_CombinerCriteria.hpp"
#include "GlobalNamespace/zzzz__UnityLayer_impl.hpp"
#include "GorillaTag/Rendering/zzzz__EdMeshCombinerPrefab_CombinerCriteria_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria::*)()>(&::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria::GetHashCode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5d58eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria>(),
                    {::i2c::class_of<::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria>(), 2}
                ));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "mat", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "staticFlags", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lightmapIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasMeshCollider", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshCollPhysicsMat", ty: "::UnityW<::UnityEngine::PhysicsMaterial>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "surfOverrideIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "surfExtraVelMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "surfExtraVelMaxMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "surfSendOnTapEvent", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "objectLayer", ty: "::GlobalNamespace::UnityLayer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria::EdMeshCombinerPrefab_CombinerCriteria(::UnityW<::UnityEngine::Material>  mat, int32_t  staticFlags, int32_t  lightmapIndex, bool  hasMeshCollider, ::UnityW<::UnityEngine::PhysicsMaterial>  meshCollPhysicsMat, int32_t  surfOverrideIndex, float_t  surfExtraVelMultiplier, float_t  surfExtraVelMaxMultiplier, bool  surfSendOnTapEvent, ::GlobalNamespace::UnityLayer  objectLayer) noexcept  {
this->mat = mat;
this->staticFlags = staticFlags;
this->lightmapIndex = lightmapIndex;
this->hasMeshCollider = hasMeshCollider;
this->meshCollPhysicsMat = meshCollPhysicsMat;
this->surfOverrideIndex = surfOverrideIndex;
this->surfExtraVelMultiplier = surfExtraVelMultiplier;
this->surfExtraVelMaxMultiplier = surfExtraVelMaxMultiplier;
this->surfSendOnTapEvent = surfSendOnTapEvent;
this->objectLayer = objectLayer;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria::EdMeshCombinerPrefab_CombinerCriteria()   {
}
