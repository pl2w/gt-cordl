#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ProjectileShooterCosmetic_ShootActivator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProjectileShooterCosmetic_ShootActivator)
// Forward declare root types
namespace GlobalNamespace {
struct ProjectileShooterCosmetic_ShootActivator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProjectileShooterCosmetic_ShootActivator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProjectileShooterCosmetic_ShootActivator, "GorillaTag.Cosmetics", "ProjectileShooterCosmetic/ShootActivator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.ProjectileShooterCosmetic/ShootActivator
struct CORDL_TYPE ProjectileShooterCosmetic_ShootActivator {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProjectileShooterCosmetic_ShootActivator_Unwrapped
enum struct __ProjectileShooterCosmetic_ShootActivator_Unwrapped : int32_t {
__E_ButtonReleased = static_cast<int32_t>(0x0),
__E_ButtonPressed = static_cast<int32_t>(0x1),
__E_ButtonStayed = static_cast<int32_t>(0x2),
__E_VelocityEstimatorThreshold = static_cast<int32_t>(0x3),
__E_ButtonReleasedFullCharge = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProjectileShooterCosmetic_ShootActivator_Unwrapped () const noexcept {
return static_cast<__ProjectileShooterCosmetic_ShootActivator_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProjectileShooterCosmetic_ShootActivator() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProjectileShooterCosmetic_ShootActivator(int32_t  value__) noexcept;

/// @brief Field ButtonPressed value: I32(1)
static ::GlobalNamespace::ProjectileShooterCosmetic_ShootActivator const ButtonPressed;

/// @brief Field ButtonReleased value: I32(0)
static ::GlobalNamespace::ProjectileShooterCosmetic_ShootActivator const ButtonReleased;

/// @brief Field ButtonReleasedFullCharge value: I32(4)
static ::GlobalNamespace::ProjectileShooterCosmetic_ShootActivator const ButtonReleasedFullCharge;

/// @brief Field ButtonStayed value: I32(2)
static ::GlobalNamespace::ProjectileShooterCosmetic_ShootActivator const ButtonStayed;

/// @brief Field VelocityEstimatorThreshold value: I32(3)
static ::GlobalNamespace::ProjectileShooterCosmetic_ShootActivator const VelocityEstimatorThreshold;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4963};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProjectileShooterCosmetic_ShootActivator, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProjectileShooterCosmetic_ShootActivator) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
