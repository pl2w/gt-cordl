#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_MeshBakerGrouper_ClusterType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MeshBakerGrouper_ClusterType)
// Forward declare root types
namespace GlobalNamespace {
struct MB3_MeshBakerGrouper_ClusterType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType, "", "MB3_MeshBakerGrouper/ClusterType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MB3_MeshBakerGrouper/ClusterType
struct CORDL_TYPE MB3_MeshBakerGrouper_ClusterType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MB3_MeshBakerGrouper_ClusterType_Unwrapped
enum struct __MB3_MeshBakerGrouper_ClusterType_Unwrapped : int32_t {
__E_none = static_cast<int32_t>(0x0),
__E_grid = static_cast<int32_t>(0x1),
__E_pie = static_cast<int32_t>(0x2),
__E_agglomerative = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MB3_MeshBakerGrouper_ClusterType_Unwrapped () const noexcept {
return static_cast<__MB3_MeshBakerGrouper_ClusterType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshBakerGrouper_ClusterType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MB3_MeshBakerGrouper_ClusterType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22572};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field agglomerative value: I32(3)
static ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType const agglomerative;

/// @brief Field grid value: I32(1)
static ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType const grid;

/// @brief Field none value: I32(0)
static ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType const none;

/// @brief Field pie value: I32(2)
static ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType const pie;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
