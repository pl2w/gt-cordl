#pragma once
// IWYU pragma private; include "Voxels/TextureEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(TextureEntry)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Voxels {
struct TextureEntry;
}
// Write type traits
MARK_VAL_T(::Voxels::TextureEntry);
DEFINE_IL2CPP_CLASS(::Voxels::TextureEntry, "Voxels", "TextureEntry");
// Dependencies 
namespace Voxels {
// Is value type: true
// CS Name: Voxels.TextureEntry
struct CORDL_TYPE TextureEntry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TextureEntry() ;

// Ctor Parameters [CppParam { name: "Diffuse", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Normal", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }]
constexpr TextureEntry(::UnityW<::UnityEngine::Texture2D>  Diffuse, ::UnityW<::UnityEngine::Texture2D>  Normal) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5044};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Diffuse, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  Diffuse;

/// @brief Field Normal, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  Normal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Voxels::TextureEntry, Diffuse) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Voxels::TextureEntry, Normal) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Voxels::TextureEntry) == 0x10, "Size mismatch!");

} // namespace end def Voxels
