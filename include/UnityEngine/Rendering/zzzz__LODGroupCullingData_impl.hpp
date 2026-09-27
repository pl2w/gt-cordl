#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODGroupCullingData.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData__percentageFlags_e__FixedBuffer_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData__sqrDistances_e__FixedBuffer_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData__transitionDistances_e__FixedBuffer_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData__percentageFlags_e__FixedBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData__sqrDistances_e__FixedBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData__transitionDistances_e__FixedBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "worldSpaceReferencePoint", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lodCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sqrDistances", ty: "::GlobalNamespace::LODGroupCullingData__sqrDistances_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "transitionDistances", ty: "::GlobalNamespace::LODGroupCullingData__transitionDistances_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "worldSpaceSize", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "percentageFlags", ty: "::GlobalNamespace::LODGroupCullingData__percentageFlags_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "forceLODMask", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::LODGroupCullingData::LODGroupCullingData(::Unity::Mathematics::float3  worldSpaceReferencePoint, int32_t  lodCount, ::GlobalNamespace::LODGroupCullingData__sqrDistances_e__FixedBuffer  sqrDistances, ::GlobalNamespace::LODGroupCullingData__transitionDistances_e__FixedBuffer  transitionDistances, float_t  worldSpaceSize, ::GlobalNamespace::LODGroupCullingData__percentageFlags_e__FixedBuffer  percentageFlags, uint8_t  forceLODMask) noexcept  {
this->worldSpaceReferencePoint = worldSpaceReferencePoint;
this->lodCount = lodCount;
this->sqrDistances = sqrDistances;
this->transitionDistances = transitionDistances;
this->worldSpaceSize = worldSpaceSize;
this->percentageFlags = percentageFlags;
this->forceLODMask = forceLODMask;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODGroupCullingData::LODGroupCullingData()   {
}
