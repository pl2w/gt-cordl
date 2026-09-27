#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_VirtualKeyboardTextureIdsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_VirtualKeyboardTextureIdsInternal_def.hpp"
// Ctor Parameters [CppParam { name: "TextureIdCapacityInput", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TextureIdCountOutput", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TextureIdsBuffer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureIdsInternal::OVRPlugin_VirtualKeyboardTextureIdsInternal(uint32_t  TextureIdCapacityInput, uint32_t  TextureIdCountOutput, ::System::IntPtr  TextureIdsBuffer) noexcept  {
this->TextureIdCapacityInput = TextureIdCapacityInput;
this->TextureIdCountOutput = TextureIdCountOutput;
this->TextureIdsBuffer = TextureIdsBuffer;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureIdsInternal::OVRPlugin_VirtualKeyboardTextureIdsInternal()   {
}
