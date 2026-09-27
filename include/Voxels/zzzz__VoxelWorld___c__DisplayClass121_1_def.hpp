#pragma once
// IWYU pragma private; include "Voxels/VoxelWorld___c__DisplayClass121_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelWorld___c__DisplayClass121_1)
// Forward declare root types
namespace GlobalNamespace {
struct VoxelWorld___c__DisplayClass121_1;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VoxelWorld___c__DisplayClass121_1);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoxelWorld___c__DisplayClass121_1, "Voxels", "VoxelWorld/<>c__DisplayClass121_1");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxels.VoxelWorld/<>c__DisplayClass121_1
struct CORDL_TYPE VoxelWorld___c__DisplayClass121_1 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VoxelWorld___c__DisplayClass121_1() ;

// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VoxelWorld___c__DisplayClass121_1(int32_t  index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5060};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field index, offset: 0x0, size: 0x4, def value: None
 int32_t  index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoxelWorld___c__DisplayClass121_1, index) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoxelWorld___c__DisplayClass121_1) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
