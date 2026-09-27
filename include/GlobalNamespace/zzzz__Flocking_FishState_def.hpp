#pragma once
// IWYU pragma private; include "GlobalNamespace/Flocking_FishState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Flocking_FishState)
// Forward declare root types
namespace GlobalNamespace {
struct Flocking_FishState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Flocking_FishState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Flocking_FishState, "", "Flocking/FishState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Flocking/FishState
struct CORDL_TYPE Flocking_FishState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Flocking_FishState_Unwrapped
enum struct __Flocking_FishState_Unwrapped : int32_t {
__E_flock = static_cast<int32_t>(0x0),
__E_patrol = static_cast<int32_t>(0x1),
__E_followFood = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Flocking_FishState_Unwrapped () const noexcept {
return static_cast<__Flocking_FishState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Flocking_FishState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Flocking_FishState(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1695};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field flock value: I32(0)
static ::GlobalNamespace::Flocking_FishState const flock;

/// @brief Field followFood value: I32(2)
static ::GlobalNamespace::Flocking_FishState const followFood;

/// @brief Field patrol value: I32(1)
static ::GlobalNamespace::Flocking_FishState const patrol;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Flocking_FishState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Flocking_FishState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
