#pragma once
// IWYU pragma private; include "UnityEngine/Splines/CurveUtility_FrenetFrame.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Splines/zzzz__CurveUtility_FrenetFrame_def.hpp"
// Ctor Parameters [CppParam { name: "origin", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tangent", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normal", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "binormal", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CurveUtility_FrenetFrame::CurveUtility_FrenetFrame(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  tangent, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float3  binormal) noexcept  {
this->origin = origin;
this->tangent = tangent;
this->normal = normal;
this->binormal = binormal;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CurveUtility_FrenetFrame::CurveUtility_FrenetFrame()   {
}
