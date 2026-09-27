#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDisplaySubsystem_XRRenderParameter.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_XRRenderParameter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
// Ctor Parameters [CppParam { name: "view", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "projection", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "viewport", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "occlusionMesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "visibleMesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textureArraySlice", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "previousView", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isPreviousViewValid", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter::XRDisplaySubsystem_XRRenderParameter(::UnityEngine::Matrix4x4  view, ::UnityEngine::Matrix4x4  projection, ::UnityEngine::Rect  viewport, ::UnityW<::UnityEngine::Mesh>  occlusionMesh, ::UnityW<::UnityEngine::Mesh>  visibleMesh, int32_t  textureArraySlice, ::UnityEngine::Matrix4x4  previousView, bool  isPreviousViewValid) noexcept  {
this->view = view;
this->projection = projection;
this->viewport = viewport;
this->occlusionMesh = occlusionMesh;
this->visibleMesh = visibleMesh;
this->textureArraySlice = textureArraySlice;
this->previousView = previousView;
this->isPreviousViewValid = isPreviousViewValid;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter::XRDisplaySubsystem_XRRenderParameter()   {
}
