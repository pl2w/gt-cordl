#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_VirtualKeyboardTextureIds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_VirtualKeyboardTextureIds)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardTextureIds;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureIds);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureIds, "", "OVRPlugin/VirtualKeyboardTextureIds");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/VirtualKeyboardTextureIds
struct CORDL_TYPE OVRPlugin_VirtualKeyboardTextureIds {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_VirtualKeyboardTextureIds() ;

// Ctor Parameters [CppParam { name: "TextureIds", ty: "::ArrayW<uint64_t>", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_VirtualKeyboardTextureIds(::ArrayW<uint64_t>  TextureIds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12194};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field TextureIds, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint64_t>  TextureIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureIds, TextureIds) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureIds) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
