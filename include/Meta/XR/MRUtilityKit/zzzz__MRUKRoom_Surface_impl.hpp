#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKRoom_Surface.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom_Surface_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
// Ctor Parameters [CppParam { name: "Anchor", ty: "::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UsableArea", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsPlane", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Bounds", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUKRoom_Surface::MRUKRoom_Surface(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  Anchor, float_t  UsableArea, bool  IsPlane, ::UnityEngine::Rect  Bounds, ::UnityEngine::Matrix4x4  Transform) noexcept  {
this->Anchor = Anchor;
this->UsableArea = UsableArea;
this->IsPlane = IsPlane;
this->Bounds = Bounds;
this->Transform = Transform;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUKRoom_Surface::MRUKRoom_Surface()   {
}
