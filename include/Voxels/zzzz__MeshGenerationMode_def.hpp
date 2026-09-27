#pragma once
// IWYU pragma private; include "Voxels/MeshGenerationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshGenerationMode)
// Forward declare root types
namespace Voxels {
struct MeshGenerationMode;
}
// Write type traits
MARK_VAL_T(::Voxels::MeshGenerationMode);
DEFINE_IL2CPP_CLASS(::Voxels::MeshGenerationMode, "Voxels", "MeshGenerationMode");
// Dependencies 
namespace Voxels {
// Is value type: true
// CS Name: Voxels.MeshGenerationMode
struct CORDL_TYPE MeshGenerationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MeshGenerationMode_Unwrapped
enum struct __MeshGenerationMode_Unwrapped : int32_t {
__E_MarchingCubes = static_cast<int32_t>(0x0),
__E_SurfaceNets = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MeshGenerationMode_Unwrapped () const noexcept {
return static_cast<__MeshGenerationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MeshGenerationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MeshGenerationMode(int32_t  value__) noexcept;

/// @brief Field MarchingCubes value: I32(0)
static ::Voxels::MeshGenerationMode const MarchingCubes;

/// @brief Field SurfaceNets value: I32(1)
static ::Voxels::MeshGenerationMode const SurfaceNets;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5052};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Voxels::MeshGenerationMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Voxels::MeshGenerationMode) == 0x4, "Size mismatch!");

} // namespace end def Voxels
