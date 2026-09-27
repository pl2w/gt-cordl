#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_InsightPassthroughStyle.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Colorf_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_InsightPassthroughColorMapType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_InsightPassthroughStyleFlags_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_InsightPassthroughStyle_def.hpp"
// Ctor Parameters [CppParam { name: "Flags", ty: "::GlobalNamespace::OVRPlugin_InsightPassthroughStyleFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TextureOpacityFactor", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "EdgeColor", ty: "::GlobalNamespace::OVRPlugin_Colorf", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TextureColorMapType", ty: "::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TextureColorMapDataSize", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TextureColorMapData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_InsightPassthroughStyle::OVRPlugin_InsightPassthroughStyle(::GlobalNamespace::OVRPlugin_InsightPassthroughStyleFlags  Flags, float_t  TextureOpacityFactor, ::GlobalNamespace::OVRPlugin_Colorf  EdgeColor, ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType  TextureColorMapType, uint32_t  TextureColorMapDataSize, ::System::IntPtr  TextureColorMapData) noexcept  {
this->Flags = Flags;
this->TextureOpacityFactor = TextureOpacityFactor;
this->EdgeColor = EdgeColor;
this->TextureColorMapType = TextureColorMapType;
this->TextureColorMapDataSize = TextureColorMapDataSize;
this->TextureColorMapData = TextureColorMapData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_InsightPassthroughStyle::OVRPlugin_InsightPassthroughStyle()   {
}
