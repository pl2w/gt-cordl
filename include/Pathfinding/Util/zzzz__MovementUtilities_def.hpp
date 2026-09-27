#pragma once
// IWYU pragma private; include "Pathfinding/Util/MovementUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MovementUtilities)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Pathfinding::Util {
class MovementUtilities;
}
// Write type traits
MARK_REF_T(::Pathfinding::Util::MovementUtilities*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::MovementUtilities*, "Pathfinding.Util", "MovementUtilities");
// Dependencies System.Object
namespace Pathfinding::Util {
// Is value type: false
// CS Name: Pathfinding.Util.MovementUtilities
class CORDL_TYPE MovementUtilities : public ::System::Object {
public:
// Declarations
/// @brief Method CalculateAccelerationToReachPoint, addr 0x5ed6390, size 0x504, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 CalculateAccelerationToReachPoint(::UnityEngine::Vector2  deltaPosition, ::UnityEngine::Vector2  targetVelocity, ::UnityEngine::Vector2  currentVelocity, float_t  forwardsAcceleration, float_t  rotationSpeed, float_t  maxSpeed, ::UnityEngine::Vector2  forwardsVector) ;

/// @brief Method ClampVelocity, addr 0x5ed61c4, size 0x1cc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ClampVelocity(::UnityEngine::Vector2  velocity, float_t  maxSpeed, float_t  slowdownFactor, bool  slowWhenNotFacingTarget, ::UnityEngine::Vector2  forward) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MovementUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MovementUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MovementUtilities(MovementUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MovementUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MovementUtilities(MovementUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21463};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Util::MovementUtilities) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Util
