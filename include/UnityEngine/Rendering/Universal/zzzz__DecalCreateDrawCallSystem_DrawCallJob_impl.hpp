#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalCreateDrawCallSystem_DrawCallJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalSubDrawCall_impl.hpp"
#include "UnityEngine/zzzz__BoundingSphere_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCreateDrawCallSystem_DrawCallJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DecalCreateDrawCallSystem_DrawCallJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DecalCreateDrawCallSystem_DrawCallJob::*)()>(&::GlobalNamespace::DecalCreateDrawCallSystem_DrawCallJob::Execute)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0xb234600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecalCreateDrawCallSystem_DrawCallJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DecalCreateDrawCallSystem_DrawCallJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecalCreateDrawCallSystem_DrawCallJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::DecalCreateDrawCallSystem_DrawCallJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::DecalCreateDrawCallSystem_DrawCallJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "decalToWorlds", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normalToWorlds", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sizeOffsets", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "drawDistances", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "angleFades", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uvScaleBiases", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "layerMasks", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sceneLayerMasks", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fadeFactors", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "boundingSpheres", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "renderingLayerMasks", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cameraPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sceneCullingMask", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cullingMask", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "visibleDecalIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "visibleDecalCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxDrawDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "decalToWorldsDraw", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normalToDecalsDraw", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "renderingLayerMasksDraw", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "subCalls", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalSubDrawCall>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "subCallCount", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DecalCreateDrawCallSystem_DrawCallJob::DecalCreateDrawCallSystem_DrawCallJob(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  decalToWorlds, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  normalToWorlds, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  sizeOffsets, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>  drawDistances, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>  angleFades, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  uvScaleBiases, ::Unity::Collections::NativeArray_1<int32_t>  layerMasks, ::Unity::Collections::NativeArray_1<uint64_t>  sceneLayerMasks, ::Unity::Collections::NativeArray_1<float_t>  fadeFactors, ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere>  boundingSpheres, ::Unity::Collections::NativeArray_1<uint32_t>  renderingLayerMasks, ::UnityEngine::Vector3  cameraPosition, uint64_t  sceneCullingMask, int32_t  cullingMask, ::Unity::Collections::NativeArray_1<int32_t>  visibleDecalIndices, int32_t  visibleDecalCount, float_t  maxDrawDistance, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  decalToWorldsDraw, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  normalToDecalsDraw, ::Unity::Collections::NativeArray_1<float_t>  renderingLayerMasksDraw, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalSubDrawCall>  subCalls, ::Unity::Collections::NativeArray_1<int32_t>  subCallCount) noexcept  {
this->decalToWorlds = decalToWorlds;
this->normalToWorlds = normalToWorlds;
this->sizeOffsets = sizeOffsets;
this->drawDistances = drawDistances;
this->angleFades = angleFades;
this->uvScaleBiases = uvScaleBiases;
this->layerMasks = layerMasks;
this->sceneLayerMasks = sceneLayerMasks;
this->fadeFactors = fadeFactors;
this->boundingSpheres = boundingSpheres;
this->renderingLayerMasks = renderingLayerMasks;
this->cameraPosition = cameraPosition;
this->sceneCullingMask = sceneCullingMask;
this->cullingMask = cullingMask;
this->visibleDecalIndices = visibleDecalIndices;
this->visibleDecalCount = visibleDecalCount;
this->maxDrawDistance = maxDrawDistance;
this->decalToWorldsDraw = decalToWorldsDraw;
this->normalToDecalsDraw = normalToDecalsDraw;
this->renderingLayerMasksDraw = renderingLayerMasksDraw;
this->subCalls = subCalls;
this->subCallCount = subCallCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DecalCreateDrawCallSystem_DrawCallJob::DecalCreateDrawCallSystem_DrawCallJob()   {
}
