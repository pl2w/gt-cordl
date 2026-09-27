#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshGenerator_TessellationJobParameters.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerator_BorderParams_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_NativeRectParams_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UnsafeMeshGenerationNode_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerator_TessellationJobParameters_def.hpp"
// Ctor Parameters [CppParam { name: "isBorderJob", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rectParams", ty: "::GlobalNamespace::MeshBuilderNative_NativeRectParams", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "borderParams", ty: "::GlobalNamespace::MeshGenerator_BorderParams", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "node", ty: "::UnityEngine::UIElements::UnsafeMeshGenerationNode", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MeshGenerator_TessellationJobParameters::MeshGenerator_TessellationJobParameters(bool  isBorderJob, ::GlobalNamespace::MeshBuilderNative_NativeRectParams  rectParams, ::GlobalNamespace::MeshGenerator_BorderParams  borderParams, ::UnityEngine::UIElements::UnsafeMeshGenerationNode  node) noexcept  {
this->isBorderJob = isBorderJob;
this->rectParams = rectParams;
this->borderParams = borderParams;
this->node = node;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshGenerator_TessellationJobParameters::MeshGenerator_TessellationJobParameters()   {
}
