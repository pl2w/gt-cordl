#pragma once
// IWYU pragma private; include "UnityEngine/TerrainData_BoundaryValueType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainData_BoundaryValueType)
// Forward declare root types
namespace GlobalNamespace {
struct TerrainData_BoundaryValueType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TerrainData_BoundaryValueType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TerrainData_BoundaryValueType, "UnityEngine", "TerrainData/BoundaryValueType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.TerrainData/BoundaryValueType
struct CORDL_TYPE TerrainData_BoundaryValueType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TerrainData_BoundaryValueType_Unwrapped
enum struct __TerrainData_BoundaryValueType_Unwrapped : int32_t {
__E_MaxHeightmapRes = static_cast<int32_t>(0x0),
__E_MinDetailResPerPatch = static_cast<int32_t>(0x1),
__E_MaxDetailResPerPatch = static_cast<int32_t>(0x2),
__E_MaxDetailPatchCount = static_cast<int32_t>(0x3),
__E_MaxCoveragePerRes = static_cast<int32_t>(0x4),
__E_MinAlphamapRes = static_cast<int32_t>(0x5),
__E_MaxAlphamapRes = static_cast<int32_t>(0x6),
__E_MinBaseMapRes = static_cast<int32_t>(0x7),
__E_MaxBaseMapRes = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TerrainData_BoundaryValueType_Unwrapped () const noexcept {
return static_cast<__TerrainData_BoundaryValueType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TerrainData_BoundaryValueType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TerrainData_BoundaryValueType(int32_t  value__) noexcept;

/// @brief Field MaxAlphamapRes value: I32(6)
static ::GlobalNamespace::TerrainData_BoundaryValueType const MaxAlphamapRes;

/// @brief Field MaxBaseMapRes value: I32(8)
static ::GlobalNamespace::TerrainData_BoundaryValueType const MaxBaseMapRes;

/// @brief Field MaxCoveragePerRes value: I32(4)
static ::GlobalNamespace::TerrainData_BoundaryValueType const MaxCoveragePerRes;

/// @brief Field MaxDetailPatchCount value: I32(3)
static ::GlobalNamespace::TerrainData_BoundaryValueType const MaxDetailPatchCount;

/// @brief Field MaxDetailResPerPatch value: I32(2)
static ::GlobalNamespace::TerrainData_BoundaryValueType const MaxDetailResPerPatch;

/// @brief Field MaxHeightmapRes value: I32(0)
static ::GlobalNamespace::TerrainData_BoundaryValueType const MaxHeightmapRes;

/// @brief Field MinAlphamapRes value: I32(5)
static ::GlobalNamespace::TerrainData_BoundaryValueType const MinAlphamapRes;

/// @brief Field MinBaseMapRes value: I32(7)
static ::GlobalNamespace::TerrainData_BoundaryValueType const MinBaseMapRes;

/// @brief Field MinDetailResPerPatch value: I32(1)
static ::GlobalNamespace::TerrainData_BoundaryValueType const MinDetailResPerPatch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32471};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TerrainData_BoundaryValueType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TerrainData_BoundaryValueType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
