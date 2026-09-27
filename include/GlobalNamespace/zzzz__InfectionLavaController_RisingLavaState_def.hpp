#pragma once
// IWYU pragma private; include "GlobalNamespace/InfectionLavaController_RisingLavaState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InfectionLavaController_RisingLavaState)
// Forward declare root types
namespace GlobalNamespace {
struct InfectionLavaController_RisingLavaState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InfectionLavaController_RisingLavaState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InfectionLavaController_RisingLavaState, "", "InfectionLavaController/RisingLavaState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: InfectionLavaController/RisingLavaState
struct CORDL_TYPE InfectionLavaController_RisingLavaState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InfectionLavaController_RisingLavaState_Unwrapped
enum struct __InfectionLavaController_RisingLavaState_Unwrapped : int32_t {
__E_Drained = static_cast<int32_t>(0x0),
__E_Erupting = static_cast<int32_t>(0x1),
__E_Rising = static_cast<int32_t>(0x2),
__E_Full = static_cast<int32_t>(0x3),
__E_Draining = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InfectionLavaController_RisingLavaState_Unwrapped () const noexcept {
return static_cast<__InfectionLavaController_RisingLavaState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InfectionLavaController_RisingLavaState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InfectionLavaController_RisingLavaState(int32_t  value__) noexcept;

/// @brief Field Drained value: I32(0)
static ::GlobalNamespace::InfectionLavaController_RisingLavaState const Drained;

/// @brief Field Draining value: I32(4)
static ::GlobalNamespace::InfectionLavaController_RisingLavaState const Draining;

/// @brief Field Erupting value: I32(1)
static ::GlobalNamespace::InfectionLavaController_RisingLavaState const Erupting;

/// @brief Field Full value: I32(3)
static ::GlobalNamespace::InfectionLavaController_RisingLavaState const Full;

/// @brief Field Rising value: I32(2)
static ::GlobalNamespace::InfectionLavaController_RisingLavaState const Rising;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2529};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InfectionLavaController_RisingLavaState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InfectionLavaController_RisingLavaState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
