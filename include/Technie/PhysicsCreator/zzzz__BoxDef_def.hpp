#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/BoxDef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BoxDef)
// Forward declare root types
namespace Technie::PhysicsCreator {
struct BoxDef;
}
// Write type traits
MARK_VAL_T(::Technie::PhysicsCreator::BoxDef);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::BoxDef, "Technie.PhysicsCreator", "BoxDef");
// Dependencies UnityEngine.Bounds, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Technie::PhysicsCreator {
// Is value type: true
// CS Name: Technie.PhysicsCreator.BoxDef
struct CORDL_TYPE BoxDef {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BoxDef() ;

// Ctor Parameters [CppParam { name: "collisionBox", ty: "::UnityEngine::Bounds", modifiers: "", def_value: None, comment: None }, CppParam { name: "boxPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "boxRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr BoxDef(::UnityEngine::Bounds  collisionBox, ::UnityEngine::Vector3  boxPosition, ::UnityEngine::Quaternion  boxRotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30513};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x34};

/// @brief Field collisionBox, offset: 0x0, size: 0x18, def value: None
 ::UnityEngine::Bounds  collisionBox;

/// @brief Field boxPosition, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  boxPosition;

/// @brief Field boxRotation, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Quaternion  boxRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::BoxDef, collisionBox) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::BoxDef, boxPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::BoxDef, boxRotation) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::BoxDef) == 0x34, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
