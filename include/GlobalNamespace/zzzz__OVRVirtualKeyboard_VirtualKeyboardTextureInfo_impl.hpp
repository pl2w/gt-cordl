#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVirtualKeyboard_VirtualKeyboardTextureInfo.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboard_VirtualKeyboardTextureInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "buffer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bufferLength", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasTexture", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materials", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo::OVRVirtualKeyboard_VirtualKeyboardTextureInfo(::System::IntPtr  buffer, uint32_t  bufferLength, ::UnityW<::UnityEngine::Texture2D>  texture, bool  hasTexture, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  materials) noexcept  {
this->buffer = buffer;
this->bufferLength = bufferLength;
this->texture = texture;
this->hasTexture = hasTexture;
this->materials = materials;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo::OVRVirtualKeyboard_VirtualKeyboardTextureInfo()   {
}
