#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceOcclusionEventDebugArray_Request.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventDebugArray_Info_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventDebugArray_Request_def.hpp"
// Ctor Parameters [CppParam { name: "info", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::GlobalNamespace::InstanceOcclusionEventDebugArray_Info>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "readback", ty: "::UnityEngine::Rendering::AsyncGPUReadbackRequest", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InstanceOcclusionEventDebugArray_Request::InstanceOcclusionEventDebugArray_Request(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::GlobalNamespace::InstanceOcclusionEventDebugArray_Info>  info, ::UnityEngine::Rendering::AsyncGPUReadbackRequest  readback) noexcept  {
this->info = info;
this->readback = readback;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstanceOcclusionEventDebugArray_Request::InstanceOcclusionEventDebugArray_Request()   {
}
