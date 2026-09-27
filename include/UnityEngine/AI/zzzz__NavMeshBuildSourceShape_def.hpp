#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshBuildSourceShape.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshBuildSourceShape)
// Forward declare root types
namespace UnityEngine::AI {
struct NavMeshBuildSourceShape;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::NavMeshBuildSourceShape);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshBuildSourceShape, "UnityEngine.AI", "NavMeshBuildSourceShape");
// Dependencies 
namespace UnityEngine::AI {
// Is value type: true
// CS Name: UnityEngine.AI.NavMeshBuildSourceShape
struct CORDL_TYPE NavMeshBuildSourceShape {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NavMeshBuildSourceShape_Unwrapped
enum struct __NavMeshBuildSourceShape_Unwrapped : int32_t {
__E_Mesh = static_cast<int32_t>(0x0),
__E_Terrain = static_cast<int32_t>(0x1),
__E_Box = static_cast<int32_t>(0x2),
__E_Sphere = static_cast<int32_t>(0x3),
__E_Capsule = static_cast<int32_t>(0x4),
__E_ModifierBox = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NavMeshBuildSourceShape_Unwrapped () const noexcept {
return static_cast<__NavMeshBuildSourceShape_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NavMeshBuildSourceShape() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NavMeshBuildSourceShape(int32_t  value__) noexcept;

/// @brief Field Box value: I32(2)
static ::UnityEngine::AI::NavMeshBuildSourceShape const Box;

/// @brief Field Capsule value: I32(4)
static ::UnityEngine::AI::NavMeshBuildSourceShape const Capsule;

/// @brief Field Mesh value: I32(0)
static ::UnityEngine::AI::NavMeshBuildSourceShape const Mesh;

/// @brief Field ModifierBox value: I32(5)
static ::UnityEngine::AI::NavMeshBuildSourceShape const ModifierBox;

/// @brief Field Sphere value: I32(3)
static ::UnityEngine::AI::NavMeshBuildSourceShape const Sphere;

/// @brief Field Terrain value: I32(1)
static ::UnityEngine::AI::NavMeshBuildSourceShape const Terrain;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32112};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSourceShape, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::NavMeshBuildSourceShape) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::AI
