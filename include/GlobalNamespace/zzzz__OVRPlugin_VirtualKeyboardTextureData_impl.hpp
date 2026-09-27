#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_VirtualKeyboardTextureData.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_VirtualKeyboardTextureData_def.hpp"
// Ctor Parameters [CppParam { name: "TextureWidth", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TextureHeight", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BufferCapacityInput", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BufferCountOutput", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Buffer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureData::OVRPlugin_VirtualKeyboardTextureData(uint32_t  TextureWidth, uint32_t  TextureHeight, uint32_t  BufferCapacityInput, uint32_t  BufferCountOutput, ::System::IntPtr  Buffer) noexcept  {
this->TextureWidth = TextureWidth;
this->TextureHeight = TextureHeight;
this->BufferCapacityInput = BufferCapacityInput;
this->BufferCountOutput = BufferCountOutput;
this->Buffer = Buffer;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureData::OVRPlugin_VirtualKeyboardTextureData()   {
}
