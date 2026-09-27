#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSconce_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRSconce_State)
// Forward declare root types
namespace GlobalNamespace {
struct GRSconce_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRSconce_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRSconce_State, "", "GRSconce/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRSconce/State
struct CORDL_TYPE GRSconce_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRSconce_State_Unwrapped
enum struct __GRSconce_State_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_On = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRSconce_State_Unwrapped () const noexcept {
return static_cast<__GRSconce_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRSconce_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRSconce_State(int32_t  value__) noexcept;

/// @brief Field Off value: I32(0)
static ::GlobalNamespace::GRSconce_State const Off;

/// @brief Field On value: I32(1)
static ::GlobalNamespace::GRSconce_State const On;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2023};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRSconce_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRSconce_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
