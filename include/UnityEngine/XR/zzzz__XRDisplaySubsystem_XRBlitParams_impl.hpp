#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDisplaySubsystem_XRBlitParams.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__ColorGamut_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_XRBlitParams_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
// Ctor Parameters [CppParam { name: "srcTex", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "srcTexArraySlice", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "srcRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "destRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "foveatedRenderingInfo", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "srcHdrEncoded", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "srcHdrColorGamut", ty: "::UnityEngine::ColorGamut", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "srcHdrMaxLuminance", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRDisplaySubsystem_XRBlitParams::XRDisplaySubsystem_XRBlitParams(::UnityW<::UnityEngine::RenderTexture>  srcTex, int32_t  srcTexArraySlice, ::UnityEngine::Rect  srcRect, ::UnityEngine::Rect  destRect, ::System::IntPtr  foveatedRenderingInfo, bool  srcHdrEncoded, ::UnityEngine::ColorGamut  srcHdrColorGamut, int32_t  srcHdrMaxLuminance) noexcept  {
this->srcTex = srcTex;
this->srcTexArraySlice = srcTexArraySlice;
this->srcRect = srcRect;
this->destRect = destRect;
this->foveatedRenderingInfo = foveatedRenderingInfo;
this->srcHdrEncoded = srcHdrEncoded;
this->srcHdrColorGamut = srcHdrColorGamut;
this->srcHdrMaxLuminance = srcHdrMaxLuminance;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRDisplaySubsystem_XRBlitParams::XRDisplaySubsystem_XRBlitParams()   {
}
