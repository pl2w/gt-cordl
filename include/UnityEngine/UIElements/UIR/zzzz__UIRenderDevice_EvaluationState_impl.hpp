#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/UIRenderDevice_EvaluationState.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__State_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_EvaluationState_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandList_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Page_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "activeCommandList", ty: "::UnityEngine::UIElements::UIR::CommandList*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "constantProps", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "batchProps", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "defaultMat", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "curState", ty: "::UnityEngine::UIElements::UIR::State", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "curPage", ty: "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mustApplyMaterial", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mustApplyBatchProps", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mustApplyStencil", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isSerializing", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "commandListOwner", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UIRenderDevice_EvaluationState::UIRenderDevice_EvaluationState(::UnityEngine::UIElements::UIR::CommandList*  activeCommandList, ::UnityEngine::MaterialPropertyBlock*  constantProps, ::UnityEngine::MaterialPropertyBlock*  batchProps, ::UnityW<::UnityEngine::Material>  defaultMat, ::UnityEngine::UIElements::UIR::State  curState, ::UnityEngine::UIElements::UIR::Page*  curPage, bool  mustApplyMaterial, bool  mustApplyBatchProps, bool  mustApplyStencil, bool  isSerializing, ::UnityEngine::UIElements::VisualElement*  commandListOwner) noexcept  {
this->activeCommandList = activeCommandList;
this->constantProps = constantProps;
this->batchProps = batchProps;
this->defaultMat = defaultMat;
this->curState = curState;
this->curPage = curPage;
this->mustApplyMaterial = mustApplyMaterial;
this->mustApplyBatchProps = mustApplyBatchProps;
this->mustApplyStencil = mustApplyStencil;
this->isSerializing = isSerializing;
this->commandListOwner = commandListOwner;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UIRenderDevice_EvaluationState::UIRenderDevice_EvaluationState()   {
}
