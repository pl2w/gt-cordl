#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshObstacleShape.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshObstacleShape)
// Forward declare root types
namespace UnityEngine::AI {
struct NavMeshObstacleShape;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::NavMeshObstacleShape);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshObstacleShape, "UnityEngine.AI", "NavMeshObstacleShape");
// [MovedFrom("UnityEngine")]
// Dependencies 
namespace UnityEngine::AI {
// Is value type: true
// CS Name: UnityEngine.AI.NavMeshObstacleShape
struct CORDL_TYPE NavMeshObstacleShape {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NavMeshObstacleShape_Unwrapped
enum struct __NavMeshObstacleShape_Unwrapped : int32_t {
__E_Capsule = static_cast<int32_t>(0x0),
__E_Box = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NavMeshObstacleShape_Unwrapped () const noexcept {
return static_cast<__NavMeshObstacleShape_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NavMeshObstacleShape() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NavMeshObstacleShape(int32_t  value__) noexcept;

/// @brief Field Box value: I32(1)
static ::UnityEngine::AI::NavMeshObstacleShape const Box;

/// @brief Field Capsule value: I32(0)
static ::UnityEngine::AI::NavMeshObstacleShape const Capsule;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32096};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::NavMeshObstacleShape, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::NavMeshObstacleShape) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::AI
