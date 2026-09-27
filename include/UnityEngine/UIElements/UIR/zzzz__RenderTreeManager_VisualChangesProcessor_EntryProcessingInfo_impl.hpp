#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeManager_VisualChangesProcessor_VisualsProcessingType_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Entry_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderData_def.hpp"
// Ctor Parameters [CppParam { name: "renderData", ty: "::UnityEngine::UIElements::UIR::RenderData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "type", ty: "::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rootEntry", ty: "::UnityEngine::UIElements::UIR::Entry*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo(::UnityEngine::UIElements::UIR::RenderData*  renderData, ::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType  type, ::UnityEngine::UIElements::UIR::Entry*  rootEntry) noexcept  {
this->renderData = renderData;
this->type = type;
this->rootEntry = rootEntry;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo()   {
}
