#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/UIRenderDevice_AllocToFree.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_AllocToFree_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Page_def.hpp"
// Ctor Parameters [CppParam { name: "alloc", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "page", ty: "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vertices", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UIRenderDevice_AllocToFree::UIRenderDevice_AllocToFree(::UnityEngine::UIElements::UIR::Alloc  alloc, ::UnityEngine::UIElements::UIR::Page*  page, bool  vertices) noexcept  {
this->alloc = alloc;
this->page = page;
this->vertices = vertices;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UIRenderDevice_AllocToFree::UIRenderDevice_AllocToFree()   {
}
