#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolShieldGun_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolShieldGun_State)
// Forward declare root types
namespace GlobalNamespace {
struct GRToolShieldGun_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRToolShieldGun_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolShieldGun_State, "", "GRToolShieldGun/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRToolShieldGun/State
struct CORDL_TYPE GRToolShieldGun_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRToolShieldGun_State_Unwrapped
enum struct __GRToolShieldGun_State_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Charging = static_cast<int32_t>(0x1),
__E_Firing = static_cast<int32_t>(0x2),
__E_Cooldown = static_cast<int32_t>(0x3),
__E_Count = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRToolShieldGun_State_Unwrapped () const noexcept {
return static_cast<__GRToolShieldGun_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRToolShieldGun_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRToolShieldGun_State(int32_t  value__) noexcept;

/// @brief Field Charging value: I32(1)
static ::GlobalNamespace::GRToolShieldGun_State const Charging;

/// @brief Field Cooldown value: I32(3)
static ::GlobalNamespace::GRToolShieldGun_State const Cooldown;

/// @brief Field Count value: I32(4)
static ::GlobalNamespace::GRToolShieldGun_State const Count;

/// @brief Field Firing value: I32(2)
static ::GlobalNamespace::GRToolShieldGun_State const Firing;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::GRToolShieldGun_State const Idle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2083};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolShieldGun_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolShieldGun_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
