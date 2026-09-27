#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_LayerSubmit.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_RectiPair_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_LayerSubmit_def.hpp"
// Ctor Parameters [CppParam { name: "LayerId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TextureStage", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ViewportRect", ty: "::GlobalNamespace::OVRPlugin_RectiPair", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Pose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LayerSubmitFlags", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_LayerSubmit::OVRPlugin_LayerSubmit(int32_t  LayerId, int32_t  TextureStage, ::GlobalNamespace::OVRPlugin_RectiPair  ViewportRect, ::GlobalNamespace::OVRPlugin_Posef  Pose, int32_t  LayerSubmitFlags) noexcept  {
this->LayerId = LayerId;
this->TextureStage = TextureStage;
this->ViewportRect = ViewportRect;
this->Pose = Pose;
this->LayerSubmitFlags = LayerSubmitFlags;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_LayerSubmit::OVRPlugin_LayerSubmit()   {
}
