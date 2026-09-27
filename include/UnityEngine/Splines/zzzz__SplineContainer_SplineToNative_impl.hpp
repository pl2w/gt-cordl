#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineContainer_SplineToNative.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_SplineToNative_def.hpp"
#include "UnityEngine/Splines/zzzz__ISpline_def.hpp"
// Ctor Parameters [CppParam { name: "spline", ty: "::UnityEngine::Splines::ISpline*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nativeSpline", ty: "::UnityEngine::Splines::NativeSpline", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SplineContainer_SplineToNative::SplineContainer_SplineToNative(::UnityEngine::Splines::ISpline*  spline, ::UnityEngine::Splines::NativeSpline  nativeSpline) noexcept  {
this->spline = spline;
this->nativeSpline = nativeSpline;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplineContainer_SplineToNative::SplineContainer_SplineToNative()   {
}
