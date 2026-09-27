#pragma once
// IWYU pragma private; include "Drawing/DrawingData_BuilderData_Meta.hpp"
#include "Drawing/zzzz__DrawingData_Hasher_impl.hpp"
#include "Drawing/zzzz__RedrawScope_impl.hpp"
#include "UnityEngine/zzzz__Camera_impl.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_Meta_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
// Ctor Parameters [CppParam { name: "hasher", ty: "::GlobalNamespace::DrawingData_Hasher", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "redrawScope1", ty: "::Drawing::RedrawScope", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "redrawScope2", ty: "::Drawing::RedrawScope", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isGizmos", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sceneModeVersion", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "drawOrderIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cameraTargets", ty: "::ArrayW<::UnityW<::UnityEngine::Camera>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderData_DrawingData_Meta::BuilderData_DrawingData_Meta(::GlobalNamespace::DrawingData_Hasher  hasher, ::Drawing::RedrawScope  redrawScope1, ::Drawing::RedrawScope  redrawScope2, int32_t  version, bool  isGizmos, int32_t  sceneModeVersion, int32_t  drawOrderIndex, ::ArrayW<::UnityW<::UnityEngine::Camera>>  cameraTargets) noexcept  {
this->hasher = hasher;
this->redrawScope1 = redrawScope1;
this->redrawScope2 = redrawScope2;
this->version = version;
this->isGizmos = isGizmos;
this->sceneModeVersion = sceneModeVersion;
this->drawOrderIndex = drawOrderIndex;
this->cameraTargets = cameraTargets;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderData_DrawingData_Meta::BuilderData_DrawingData_Meta()   {
}
