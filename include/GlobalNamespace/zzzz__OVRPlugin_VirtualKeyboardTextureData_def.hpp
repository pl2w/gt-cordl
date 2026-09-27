#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_VirtualKeyboardTextureData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_VirtualKeyboardTextureData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardTextureData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureData, "", "OVRPlugin/VirtualKeyboardTextureData");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/VirtualKeyboardTextureData
struct CORDL_TYPE OVRPlugin_VirtualKeyboardTextureData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_VirtualKeyboardTextureData() ;

// Ctor Parameters [CppParam { name: "TextureWidth", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TextureHeight", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BufferCapacityInput", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BufferCountOutput", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Buffer", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_VirtualKeyboardTextureData(uint32_t  TextureWidth, uint32_t  TextureHeight, uint32_t  BufferCapacityInput, uint32_t  BufferCountOutput, ::System::IntPtr  Buffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12196};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field TextureWidth, offset: 0x0, size: 0x4, def value: None
 uint32_t  TextureWidth;

/// @brief Field TextureHeight, offset: 0x4, size: 0x4, def value: None
 uint32_t  TextureHeight;

/// @brief Field BufferCapacityInput, offset: 0x8, size: 0x4, def value: None
 uint32_t  BufferCapacityInput;

/// @brief Field BufferCountOutput, offset: 0xc, size: 0x4, def value: None
 uint32_t  BufferCountOutput;

/// @brief Field Buffer, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  Buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureData, TextureWidth) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureData, TextureHeight) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureData, BufferCapacityInput) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureData, BufferCountOutput) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureData, Buffer) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
