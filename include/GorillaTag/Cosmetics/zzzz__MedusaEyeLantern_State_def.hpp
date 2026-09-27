#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/MedusaEyeLantern_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MedusaEyeLantern_State)
// Forward declare root types
namespace GlobalNamespace {
struct MedusaEyeLantern_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MedusaEyeLantern_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MedusaEyeLantern_State, "GorillaTag.Cosmetics", "MedusaEyeLantern/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.MedusaEyeLantern/State
struct CORDL_TYPE MedusaEyeLantern_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MedusaEyeLantern_State_Unwrapped
enum struct __MedusaEyeLantern_State_Unwrapped : int32_t {
__E_SLOSHING = static_cast<int32_t>(0x0),
__E_DORMANT = static_cast<int32_t>(0x1),
__E_TRACKING = static_cast<int32_t>(0x2),
__E_WARMUP = static_cast<int32_t>(0x3),
__E_PRIMING = static_cast<int32_t>(0x4),
__E_PETRIFICATION = static_cast<int32_t>(0x5),
__E_COOLDOWN = static_cast<int32_t>(0x6),
__E_RESET = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MedusaEyeLantern_State_Unwrapped () const noexcept {
return static_cast<__MedusaEyeLantern_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MedusaEyeLantern_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MedusaEyeLantern_State(int32_t  value__) noexcept;

/// @brief Field COOLDOWN value: I32(6)
static ::GlobalNamespace::MedusaEyeLantern_State const COOLDOWN;

/// @brief Field DORMANT value: I32(1)
static ::GlobalNamespace::MedusaEyeLantern_State const DORMANT;

/// @brief Field PETRIFICATION value: I32(5)
static ::GlobalNamespace::MedusaEyeLantern_State const PETRIFICATION;

/// @brief Field PRIMING value: I32(4)
static ::GlobalNamespace::MedusaEyeLantern_State const PRIMING;

/// @brief Field RESET value: I32(7)
static ::GlobalNamespace::MedusaEyeLantern_State const RESET;

/// @brief Field SLOSHING value: I32(0)
static ::GlobalNamespace::MedusaEyeLantern_State const SLOSHING;

/// @brief Field TRACKING value: I32(2)
static ::GlobalNamespace::MedusaEyeLantern_State const TRACKING;

/// @brief Field WARMUP value: I32(3)
static ::GlobalNamespace::MedusaEyeLantern_State const WARMUP;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4854};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MedusaEyeLantern_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MedusaEyeLantern_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
