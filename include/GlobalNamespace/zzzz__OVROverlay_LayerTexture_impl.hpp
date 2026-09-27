#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlay_LayerTexture.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__Texture_impl.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_LayerTexture_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "appTexture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "appTexturePtr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "swapChain", ty: "::ArrayW<::UnityW<::UnityEngine::Texture>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "swapChainPtr", ty: "::ArrayW<::System::IntPtr>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVROverlay_LayerTexture::OVROverlay_LayerTexture(::UnityW<::UnityEngine::Texture>  appTexture, ::System::IntPtr  appTexturePtr, ::ArrayW<::UnityW<::UnityEngine::Texture>>  swapChain, ::ArrayW<::System::IntPtr>  swapChainPtr) noexcept  {
this->appTexture = appTexture;
this->appTexturePtr = appTexturePtr;
this->swapChain = swapChain;
this->swapChainPtr = swapChainPtr;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlay_LayerTexture::OVROverlay_LayerTexture()   {
}
