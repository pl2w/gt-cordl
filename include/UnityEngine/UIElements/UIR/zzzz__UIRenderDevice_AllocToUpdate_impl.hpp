#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/UIRenderDevice_AllocToUpdate.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_AllocToUpdate_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Page_def.hpp"
// Ctor Parameters [CppParam { name: "id", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "allocTime", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshHandle", ty: "::UnityEngine::UIElements::UIR::MeshHandle*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "permAllocVerts", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "permAllocIndices", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "permPage", ty: "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "copyBackIndices", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UIRenderDevice_AllocToUpdate::UIRenderDevice_AllocToUpdate(uint32_t  id, uint32_t  allocTime, ::UnityEngine::UIElements::UIR::MeshHandle*  meshHandle, ::UnityEngine::UIElements::UIR::Alloc  permAllocVerts, ::UnityEngine::UIElements::UIR::Alloc  permAllocIndices, ::UnityEngine::UIElements::UIR::Page*  permPage, bool  copyBackIndices) noexcept  {
this->id = id;
this->allocTime = allocTime;
this->meshHandle = meshHandle;
this->permAllocVerts = permAllocVerts;
this->permAllocIndices = permAllocIndices;
this->permPage = permPage;
this->copyBackIndices = copyBackIndices;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UIRenderDevice_AllocToUpdate::UIRenderDevice_AllocToUpdate()   {
}
