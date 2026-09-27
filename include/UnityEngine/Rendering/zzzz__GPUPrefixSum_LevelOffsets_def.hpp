#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUPrefixSum_LevelOffsets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUPrefixSum_LevelOffsets)
// Forward declare root types
namespace GlobalNamespace {
struct GPUPrefixSum_LevelOffsets;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GPUPrefixSum_LevelOffsets);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GPUPrefixSum_LevelOffsets, "UnityEngine.Rendering", "GPUPrefixSum/LevelOffsets");
// [GenerateHLSL((UnityEngine.Rendering.PackingRules)0, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@04755ad51d99\\Runtime\\Utilities\\GPUPrefixSum\\GPUPrefixSum.Data.cs")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUPrefixSum/LevelOffsets
struct CORDL_TYPE GPUPrefixSum_LevelOffsets {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GPUPrefixSum_LevelOffsets() ;

// Ctor Parameters [CppParam { name: "count", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "offset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "parentOffset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr GPUPrefixSum_LevelOffsets(uint32_t  count, uint32_t  offset, uint32_t  parentOffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17009};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field count, offset: 0x0, size: 0x4, def value: None
 uint32_t  count;

/// @brief Field offset, offset: 0x4, size: 0x4, def value: None
 uint32_t  offset;

/// @brief Field parentOffset, offset: 0x8, size: 0x4, def value: None
 uint32_t  parentOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_LevelOffsets, count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_LevelOffsets, offset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_LevelOffsets, parentOffset) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GPUPrefixSum_LevelOffsets) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
