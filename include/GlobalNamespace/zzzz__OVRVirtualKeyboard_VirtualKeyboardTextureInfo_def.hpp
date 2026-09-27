#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVirtualKeyboard_VirtualKeyboardTextureInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRVirtualKeyboard_VirtualKeyboardTextureInfo)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRVirtualKeyboard_VirtualKeyboardTextureInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo, "", "OVRVirtualKeyboard/VirtualKeyboardTextureInfo");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRVirtualKeyboard/VirtualKeyboardTextureInfo
struct CORDL_TYPE OVRVirtualKeyboard_VirtualKeyboardTextureInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRVirtualKeyboard_VirtualKeyboardTextureInfo() ;

// Ctor Parameters [CppParam { name: "buffer", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "bufferLength", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasTexture", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "materials", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*", modifiers: "", def_value: None, comment: None }]
constexpr OVRVirtualKeyboard_VirtualKeyboardTextureInfo(::System::IntPtr  buffer, uint32_t  bufferLength, ::UnityW<::UnityEngine::Texture2D>  texture, bool  hasTexture, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  materials) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12537};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field buffer, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  buffer;

/// @brief Field bufferLength, offset: 0x8, size: 0x4, def value: None
 uint32_t  bufferLength;

/// @brief Field texture, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  texture;

/// @brief Field hasTexture, offset: 0x18, size: 0x1, def value: None
 bool  hasTexture;

/// @brief Field materials, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  materials;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo, buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo, bufferLength) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo, texture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo, hasTexture) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo, materials) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
