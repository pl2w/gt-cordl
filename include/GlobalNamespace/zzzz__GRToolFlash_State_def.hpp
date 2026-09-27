#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolFlash_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolFlash_State)
// Forward declare root types
namespace GlobalNamespace {
struct GRToolFlash_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRToolFlash_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolFlash_State, "", "GRToolFlash/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRToolFlash/State
struct CORDL_TYPE GRToolFlash_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRToolFlash_State_Unwrapped
enum struct __GRToolFlash_State_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Charging = static_cast<int32_t>(0x1),
__E_Flash = static_cast<int32_t>(0x2),
__E_Cooldown = static_cast<int32_t>(0x3),
__E_Count = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRToolFlash_State_Unwrapped () const noexcept {
return static_cast<__GRToolFlash_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRToolFlash_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRToolFlash_State(int32_t  value__) noexcept;

/// @brief Field Charging value: I32(1)
static ::GlobalNamespace::GRToolFlash_State const Charging;

/// @brief Field Cooldown value: I32(3)
static ::GlobalNamespace::GRToolFlash_State const Cooldown;

/// @brief Field Count value: I32(4)
static ::GlobalNamespace::GRToolFlash_State const Count;

/// @brief Field Flash value: I32(2)
static ::GlobalNamespace::GRToolFlash_State const Flash;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::GRToolFlash_State const Idle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2066};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolFlash_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolFlash_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
