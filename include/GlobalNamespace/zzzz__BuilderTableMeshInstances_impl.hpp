#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderTableMeshInstances.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderTableMeshInstances_def.hpp"
// Ctor Parameters [CppParam { name: "transforms", ty: "::UnityEngine::Jobs::TransformAccessArray", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "texIndex", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tint", ty: "::Unity::Collections::NativeList_1<float_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderTableMeshInstances::BuilderTableMeshInstances(::UnityEngine::Jobs::TransformAccessArray  transforms, ::Unity::Collections::NativeList_1<int32_t>  texIndex, ::Unity::Collections::NativeList_1<float_t>  tint) noexcept  {
this->transforms = transforms;
this->texIndex = texIndex;
this->tint = tint;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderTableMeshInstances::BuilderTableMeshInstances()   {
}
