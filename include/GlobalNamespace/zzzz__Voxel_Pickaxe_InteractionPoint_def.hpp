#pragma once
// IWYU pragma private; include "GlobalNamespace/Voxel_Pickaxe_InteractionPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Voxel_Pickaxe_InteractionPoint)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct Voxel_Pickaxe_InteractionPoint;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Voxel_Pickaxe_InteractionPoint);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Voxel_Pickaxe_InteractionPoint, "", "Voxel_Pickaxe/InteractionPoint");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxel_Pickaxe/InteractionPoint
struct CORDL_TYPE Voxel_Pickaxe_InteractionPoint {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Voxel_Pickaxe_InteractionPoint() ;

// Ctor Parameters [CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "previousPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr Voxel_Pickaxe_InteractionPoint(::UnityW<::UnityEngine::Transform>  transform, ::UnityEngine::Vector3  previousPosition, ::UnityEngine::Vector3  position) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{504};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field transform, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Field previousPosition, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  previousPosition;

/// @brief Field position, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Voxel_Pickaxe_InteractionPoint, transform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Voxel_Pickaxe_InteractionPoint, previousPosition) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Voxel_Pickaxe_InteractionPoint, position) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Voxel_Pickaxe_InteractionPoint) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
