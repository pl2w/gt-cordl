#pragma once
// IWYU pragma private; include "Oculus/Interaction/TubePoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TubePoint)
// Forward declare root types
namespace Oculus::Interaction {
struct TubePoint;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::TubePoint);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TubePoint, "Oculus.Interaction", "TubePoint");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: true
// CS Name: Oculus.Interaction.TubePoint
struct CORDL_TYPE TubePoint {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TubePoint() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "relativeLength", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr TubePoint(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  relativeLength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15700};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

/// @brief Field relativeLength, offset: 0x1c, size: 0x4, def value: None
 float_t  relativeLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TubePoint, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubePoint, rotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TubePoint, relativeLength) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TubePoint) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction
