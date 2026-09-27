#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/CapsuleDef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Technie/PhysicsCreator/zzzz__CapsuleAxis_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CapsuleDef)
// Forward declare root types
namespace Technie::PhysicsCreator {
struct CapsuleDef;
}
// Write type traits
MARK_VAL_T(::Technie::PhysicsCreator::CapsuleDef);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::CapsuleDef, "Technie.PhysicsCreator", "CapsuleDef");
// Dependencies Technie.PhysicsCreator.CapsuleAxis, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Technie::PhysicsCreator {
// Is value type: true
// CS Name: Technie.PhysicsCreator.CapsuleDef
struct CORDL_TYPE CapsuleDef {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CapsuleDef() ;

// Ctor Parameters [CppParam { name: "capsuleCenter", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "capsuleDirection", ty: "::Technie::PhysicsCreator::CapsuleAxis", modifiers: "", def_value: None, comment: None }, CppParam { name: "capsuleRadius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "capsuleHeight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "capsulePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "capsuleRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr CapsuleDef(::UnityEngine::Vector3  capsuleCenter, ::Technie::PhysicsCreator::CapsuleAxis  capsuleDirection, float_t  capsuleRadius, float_t  capsuleHeight, ::UnityEngine::Vector3  capsulePosition, ::UnityEngine::Quaternion  capsuleRotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30514};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x34};

/// @brief Field capsuleCenter, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  capsuleCenter;

/// @brief Field capsuleDirection, offset: 0xc, size: 0x4, def value: None
 ::Technie::PhysicsCreator::CapsuleAxis  capsuleDirection;

/// @brief Field capsuleRadius, offset: 0x10, size: 0x4, def value: None
 float_t  capsuleRadius;

/// @brief Field capsuleHeight, offset: 0x14, size: 0x4, def value: None
 float_t  capsuleHeight;

/// @brief Field capsulePosition, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  capsulePosition;

/// @brief Field capsuleRotation, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Quaternion  capsuleRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::CapsuleDef, capsuleCenter) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::CapsuleDef, capsuleDirection) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::CapsuleDef, capsuleRadius) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::CapsuleDef, capsuleHeight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::CapsuleDef, capsulePosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::CapsuleDef, capsuleRotation) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::CapsuleDef) == 0x34, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
