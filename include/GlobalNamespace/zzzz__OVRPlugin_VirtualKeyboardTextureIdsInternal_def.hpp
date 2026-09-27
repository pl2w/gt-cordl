#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_VirtualKeyboardTextureIdsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_VirtualKeyboardTextureIdsInternal)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardTextureIdsInternal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureIdsInternal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureIdsInternal, "", "OVRPlugin/VirtualKeyboardTextureIdsInternal");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/VirtualKeyboardTextureIdsInternal
struct CORDL_TYPE OVRPlugin_VirtualKeyboardTextureIdsInternal {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_VirtualKeyboardTextureIdsInternal() ;

// Ctor Parameters [CppParam { name: "TextureIdCapacityInput", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TextureIdCountOutput", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TextureIdsBuffer", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_VirtualKeyboardTextureIdsInternal(uint32_t  TextureIdCapacityInput, uint32_t  TextureIdCountOutput, ::System::IntPtr  TextureIdsBuffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12195};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field TextureIdCapacityInput, offset: 0x0, size: 0x4, def value: None
 uint32_t  TextureIdCapacityInput;

/// @brief Field TextureIdCountOutput, offset: 0x4, size: 0x4, def value: None
 uint32_t  TextureIdCountOutput;

/// @brief Field TextureIdsBuffer, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  TextureIdsBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureIdsInternal, TextureIdCapacityInput) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureIdsInternal, TextureIdCountOutput) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureIdsInternal, TextureIdsBuffer) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureIdsInternal) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
