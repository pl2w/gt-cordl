#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IMGUIContainer_GUIGlobals.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IMGUIContainer_GUIGlobals_def.hpp"
// Ctor Parameters [CppParam { name: "matrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "contentColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "backgroundColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "changed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "displayIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pixelsPerPoint", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::IMGUIContainer_GUIGlobals::IMGUIContainer_GUIGlobals(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Color  color, ::UnityEngine::Color  contentColor, ::UnityEngine::Color  backgroundColor, bool  enabled, bool  changed, int32_t  displayIndex, float_t  pixelsPerPoint) noexcept  {
this->matrix = matrix;
this->color = color;
this->contentColor = contentColor;
this->backgroundColor = backgroundColor;
this->enabled = enabled;
this->changed = changed;
this->displayIndex = displayIndex;
this->pixelsPerPoint = pixelsPerPoint;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IMGUIContainer_GUIGlobals::IMGUIContainer_GUIGlobals()   {
}
