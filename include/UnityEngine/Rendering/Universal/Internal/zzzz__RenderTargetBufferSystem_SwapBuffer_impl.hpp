#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/RenderTargetBufferSystem_SwapBuffer.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__RenderTargetBufferSystem_SwapBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
// Ctor Parameters [CppParam { name: "rtMSAA", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rtResolve", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "msaa", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RenderTargetBufferSystem_SwapBuffer::RenderTargetBufferSystem_SwapBuffer(::UnityEngine::Rendering::RTHandle*  rtMSAA, ::UnityEngine::Rendering::RTHandle*  rtResolve, ::StringW  name, int32_t  msaa) noexcept  {
this->rtMSAA = rtMSAA;
this->rtResolve = rtResolve;
this->name = name;
this->msaa = msaa;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RenderTargetBufferSystem_SwapBuffer::RenderTargetBufferSystem_SwapBuffer()   {
}
