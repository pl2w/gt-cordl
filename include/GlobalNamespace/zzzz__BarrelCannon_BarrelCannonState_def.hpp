#pragma once
// IWYU pragma private; include "GlobalNamespace/BarrelCannon_BarrelCannonState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BarrelCannon_BarrelCannonState)
// Forward declare root types
namespace GlobalNamespace {
struct BarrelCannon_BarrelCannonState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BarrelCannon_BarrelCannonState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BarrelCannon_BarrelCannonState, "", "BarrelCannon/BarrelCannonState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BarrelCannon/BarrelCannonState
struct CORDL_TYPE BarrelCannon_BarrelCannonState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BarrelCannon_BarrelCannonState_Unwrapped
enum struct __BarrelCannon_BarrelCannonState_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Loaded = static_cast<int32_t>(0x1),
__E_MovingToFirePosition = static_cast<int32_t>(0x2),
__E_Firing = static_cast<int32_t>(0x3),
__E_PostFireCooldown = static_cast<int32_t>(0x4),
__E_ReturningToIdlePosition = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BarrelCannon_BarrelCannonState_Unwrapped () const noexcept {
return static_cast<__BarrelCannon_BarrelCannonState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BarrelCannon_BarrelCannonState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BarrelCannon_BarrelCannonState(int32_t  value__) noexcept;

/// @brief Field Firing value: I32(3)
static ::GlobalNamespace::BarrelCannon_BarrelCannonState const Firing;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::BarrelCannon_BarrelCannonState const Idle;

/// @brief Field Loaded value: I32(1)
static ::GlobalNamespace::BarrelCannon_BarrelCannonState const Loaded;

/// @brief Field MovingToFirePosition value: I32(2)
static ::GlobalNamespace::BarrelCannon_BarrelCannonState const MovingToFirePosition;

/// @brief Field PostFireCooldown value: I32(4)
static ::GlobalNamespace::BarrelCannon_BarrelCannonState const PostFireCooldown;

/// @brief Field ReturningToIdlePosition value: I32(5)
static ::GlobalNamespace::BarrelCannon_BarrelCannonState const ReturningToIdlePosition;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{416};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BarrelCannon_BarrelCannonState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BarrelCannon_BarrelCannonState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
