#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/RotatedCapsule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(RotatedCapsule)
// Forward declare root types
namespace Technie::PhysicsCreator {
struct RotatedCapsule;
}
// Write type traits
MARK_VAL_T(::Technie::PhysicsCreator::RotatedCapsule);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::RotatedCapsule, "Technie.PhysicsCreator", "RotatedCapsule");
// Dependencies UnityEngine.Vector3
namespace Technie::PhysicsCreator {
// Is value type: true
// CS Name: Technie.PhysicsCreator.RotatedCapsule
struct CORDL_TYPE RotatedCapsule {
public:
// Declarations
/// @brief Method CalcVolume, addr 0xadc77b8, size 0x3c, virtual false, abstract: false, final false
inline float_t CalcVolume() ;

/// @brief Method DrawWireframe, addr 0xadc77f4, size 0x33c, virtual false, abstract: false, final false
inline void DrawWireframe() ;

// Ctor Parameters []
// @brief default ctor
constexpr RotatedCapsule() ;

// Ctor Parameters [CppParam { name: "center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "dir", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr RotatedCapsule(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  dir, float_t  radius, float_t  height) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30493};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field center, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  center;

/// @brief Field dir, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  dir;

/// @brief Field radius, offset: 0x18, size: 0x4, def value: None
 float_t  radius;

/// @brief Field height, offset: 0x1c, size: 0x4, def value: None
 float_t  height;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::RotatedCapsule, center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::RotatedCapsule, dir) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::RotatedCapsule, radius) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::RotatedCapsule, height) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::RotatedCapsule) == 0x20, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
