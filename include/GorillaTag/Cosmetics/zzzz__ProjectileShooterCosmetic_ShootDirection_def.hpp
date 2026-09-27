#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ProjectileShooterCosmetic_ShootDirection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProjectileShooterCosmetic_ShootDirection)
// Forward declare root types
namespace GlobalNamespace {
struct ProjectileShooterCosmetic_ShootDirection;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProjectileShooterCosmetic_ShootDirection);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProjectileShooterCosmetic_ShootDirection, "GorillaTag.Cosmetics", "ProjectileShooterCosmetic/ShootDirection");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.ProjectileShooterCosmetic/ShootDirection
struct CORDL_TYPE ProjectileShooterCosmetic_ShootDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProjectileShooterCosmetic_ShootDirection_Unwrapped
enum struct __ProjectileShooterCosmetic_ShootDirection_Unwrapped : int32_t {
__E_LaunchTransformRotation = static_cast<int32_t>(0x0),
__E_LineFromRigToLaunchTransform = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProjectileShooterCosmetic_ShootDirection_Unwrapped () const noexcept {
return static_cast<__ProjectileShooterCosmetic_ShootDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProjectileShooterCosmetic_ShootDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProjectileShooterCosmetic_ShootDirection(int32_t  value__) noexcept;

/// @brief Field LaunchTransformRotation value: I32(0)
static ::GlobalNamespace::ProjectileShooterCosmetic_ShootDirection const LaunchTransformRotation;

/// @brief Field LineFromRigToLaunchTransform value: I32(1)
static ::GlobalNamespace::ProjectileShooterCosmetic_ShootDirection const LineFromRigToLaunchTransform;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4964};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProjectileShooterCosmetic_ShootDirection, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProjectileShooterCosmetic_ShootDirection) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
