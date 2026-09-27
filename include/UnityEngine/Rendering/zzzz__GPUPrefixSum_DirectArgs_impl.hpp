#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUPrefixSum_DirectArgs.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_SupportResources_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_DirectArgs_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "exclusive", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inputCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "input", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "supportResources", ty: "::GlobalNamespace::GPUPrefixSum_SupportResources", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GPUPrefixSum_DirectArgs::GPUPrefixSum_DirectArgs(bool  exclusive, int32_t  inputCount, ::UnityEngine::GraphicsBuffer*  input, ::GlobalNamespace::GPUPrefixSum_SupportResources  supportResources) noexcept  {
this->exclusive = exclusive;
this->inputCount = inputCount;
this->input = input;
this->supportResources = supportResources;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GPUPrefixSum_DirectArgs::GPUPrefixSum_DirectArgs()   {
}
