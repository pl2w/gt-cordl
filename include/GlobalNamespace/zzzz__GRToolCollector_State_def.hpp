#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolCollector_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolCollector_State)
// Forward declare root types
namespace GlobalNamespace {
struct GRToolCollector_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRToolCollector_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolCollector_State, "", "GRToolCollector/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRToolCollector/State
struct CORDL_TYPE GRToolCollector_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRToolCollector_State_Unwrapped
enum struct __GRToolCollector_State_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Vacuuming = static_cast<int32_t>(0x1),
__E_Collect = static_cast<int32_t>(0x2),
__E_Cooldown = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRToolCollector_State_Unwrapped () const noexcept {
return static_cast<__GRToolCollector_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRToolCollector_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRToolCollector_State(int32_t  value__) noexcept;

/// @brief Field Collect value: I32(2)
static ::GlobalNamespace::GRToolCollector_State const Collect;

/// @brief Field Cooldown value: I32(3)
static ::GlobalNamespace::GRToolCollector_State const Cooldown;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::GRToolCollector_State const Idle;

/// @brief Field Vacuuming value: I32(1)
static ::GlobalNamespace::GRToolCollector_State const Vacuuming;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2061};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolCollector_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolCollector_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
