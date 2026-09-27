#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_Utility_MeshAnalysisResult.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_Utility_MeshAnalysisResult_def.hpp"
// Ctor Parameters [CppParam { name: "uvRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasOutOfBoundsUVs", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasOverlappingSubmeshVerts", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasUVs", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "submeshArea", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MB_Utility_MeshAnalysisResult::MB_Utility_MeshAnalysisResult(::UnityEngine::Rect  uvRect, bool  hasOutOfBoundsUVs, bool  hasOverlappingSubmeshVerts, bool  hasUVs, float_t  submeshArea) noexcept  {
this->uvRect = uvRect;
this->hasOutOfBoundsUVs = hasOutOfBoundsUVs;
this->hasOverlappingSubmeshVerts = hasOverlappingSubmeshVerts;
this->hasUVs = hasUVs;
this->submeshArea = submeshArea;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_Utility_MeshAnalysisResult::MB_Utility_MeshAnalysisResult()   {
}
