#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUPrefixSum_IndirectDirectArgs.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_SupportResources_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_IndirectDirectArgs_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "exclusive", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inputCountBufferByteOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inputCountBuffer", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "input", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "supportResources", ty: "::GlobalNamespace::GPUPrefixSum_SupportResources", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GPUPrefixSum_IndirectDirectArgs::GPUPrefixSum_IndirectDirectArgs(bool  exclusive, int32_t  inputCountBufferByteOffset, ::UnityEngine::ComputeBuffer*  inputCountBuffer, ::UnityEngine::GraphicsBuffer*  input, ::GlobalNamespace::GPUPrefixSum_SupportResources  supportResources) noexcept  {
this->exclusive = exclusive;
this->inputCountBufferByteOffset = inputCountBufferByteOffset;
this->inputCountBuffer = inputCountBuffer;
this->input = input;
this->supportResources = supportResources;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GPUPrefixSum_IndirectDirectArgs::GPUPrefixSum_IndirectDirectArgs()   {
}
