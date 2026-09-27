#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderRenderer_SetupInstanceDataForMesh.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_IndirectDrawIndexedArgs_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderRenderer_SetupInstanceDataForMesh_def.hpp"
#include "UnityEngine/Jobs/zzzz__IJobParallelForTransform_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccess_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(&::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh::Execute)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x57d5b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh::Execute(int32_t  index, ::UnityEngine::Jobs::TransformAccess  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, transform);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr  GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh::operator ::UnityEngine::Jobs::IJobParallelForTransform*()  {
return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh::i___UnityEngine__Jobs__IJobParallelForTransform()  {
return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "texIndex", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tint", ty: "::Unity::Collections::NativeList_1<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "commandData", ty: "::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cameraPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instanceTexIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "objectToWorld", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instanceTint", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lodLevel", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lodDirty", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh::BuilderRenderer_SetupInstanceDataForMesh(::Unity::Collections::NativeList_1<int32_t>  texIndex, ::Unity::Collections::NativeList_1<float_t>  tint, ::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs  commandData, ::UnityEngine::Vector3  cameraPos, ::Unity::Collections::NativeArray_1<int32_t>  instanceTexIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  objectToWorld, ::Unity::Collections::NativeArray_1<float_t>  instanceTint, ::Unity::Collections::NativeArray_1<int32_t>  lodLevel, ::Unity::Collections::NativeArray_1<int32_t>  lodDirty) noexcept  {
this->texIndex = texIndex;
this->tint = tint;
this->commandData = commandData;
this->cameraPos = cameraPos;
this->instanceTexIndex = instanceTexIndex;
this->objectToWorld = objectToWorld;
this->instanceTint = instanceTint;
this->lodLevel = lodLevel;
this->lodDirty = lodDirty;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh::BuilderRenderer_SetupInstanceDataForMesh()   {
}
