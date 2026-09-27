#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUSort_Args.hpp"
#include "UnityEngine/Rendering/zzzz__GPUSort_SupportResources_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUSort_Args_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "count", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxDepth", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inputKeys", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inputValues", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "resources", ty: "::GlobalNamespace::GPUSort_SupportResources", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "workGroupCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GPUSort_Args::GPUSort_Args(uint32_t  count, uint32_t  maxDepth, ::UnityEngine::GraphicsBuffer*  inputKeys, ::UnityEngine::GraphicsBuffer*  inputValues, ::GlobalNamespace::GPUSort_SupportResources  resources, int32_t  workGroupCount) noexcept  {
this->count = count;
this->maxDepth = maxDepth;
this->inputKeys = inputKeys;
this->inputValues = inputValues;
this->resources = resources;
this->workGroupCount = workGroupCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GPUSort_Args::GPUSort_Args()   {
}
