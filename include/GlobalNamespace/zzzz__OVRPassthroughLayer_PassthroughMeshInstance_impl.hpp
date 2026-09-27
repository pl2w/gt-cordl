#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughLayer_PassthroughMeshInstance.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughLayer_PassthroughMeshInstance_def.hpp"
// Ctor Parameters [CppParam { name: "meshHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instanceHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "updateTransform", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance::OVRPassthroughLayer_PassthroughMeshInstance(uint64_t  meshHandle, uint64_t  instanceHandle, bool  updateTransform, ::UnityEngine::Matrix4x4  localToWorld) noexcept  {
this->meshHandle = meshHandle;
this->instanceHandle = instanceHandle;
this->updateTransform = updateTransform;
this->localToWorld = localToWorld;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance::OVRPassthroughLayer_PassthroughMeshInstance()   {
}
