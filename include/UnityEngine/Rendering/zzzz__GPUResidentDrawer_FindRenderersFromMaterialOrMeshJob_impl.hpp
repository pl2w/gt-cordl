#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob.hpp"
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_impl.hpp"
#include "Unity/Collections/zzzz__NativeHashSet`1_ReadOnly_impl.hpp"
#include "Unity/Collections/zzzz__NativeList`1_ParallelWriter_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SmallIntegerArray_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForBatch_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob::*)(int32_t, int32_t)>(&::GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob::Execute)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0xb1edf6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob::Execute(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr  GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob::operator ::Unity::Jobs::IJobParallelForBatch*()  {
return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob::i___Unity__Jobs__IJobParallelForBatch()  {
return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "materialIDs", ty: "::GlobalNamespace::NativeHashSet_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materialIDArrays", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshIDs", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshIDArray", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rendererGroupIDs", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sortedExcludeRendererIDs", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "selectedRenderGroupsForMaterials", ty: "::GlobalNamespace::NativeList_1_ParallelWriter<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "selectedRenderGroupsForMeshes", ty: "::GlobalNamespace::NativeList_1_ParallelWriter<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob(::GlobalNamespace::NativeHashSet_1_ReadOnly<int32_t>  materialIDs, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>  materialIDArrays, ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  meshIDs, ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  meshIDArray, ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  rendererGroupIDs, ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  sortedExcludeRendererIDs, ::GlobalNamespace::NativeList_1_ParallelWriter<int32_t>  selectedRenderGroupsForMaterials, ::GlobalNamespace::NativeList_1_ParallelWriter<int32_t>  selectedRenderGroupsForMeshes) noexcept  {
this->materialIDs = materialIDs;
this->materialIDArrays = materialIDArrays;
this->meshIDs = meshIDs;
this->meshIDArray = meshIDArray;
this->rendererGroupIDs = rendererGroupIDs;
this->sortedExcludeRendererIDs = sortedExcludeRendererIDs;
this->selectedRenderGroupsForMaterials = selectedRenderGroupsForMaterials;
this->selectedRenderGroupsForMeshes = selectedRenderGroupsForMeshes;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob()   {
}
