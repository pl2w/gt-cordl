#pragma once
// IWYU pragma private; include "GlobalNamespace/HowManyMonke_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HowManyMonke_State)
// Forward declare root types
namespace GlobalNamespace {
struct HowManyMonke_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HowManyMonke_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HowManyMonke_State, "", "HowManyMonke/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: HowManyMonke/State
struct CORDL_TYPE HowManyMonke_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HowManyMonke_State_Unwrapped
enum struct __HowManyMonke_State_Unwrapped : int32_t {
__E_READY = static_cast<int32_t>(0x0),
__E_TD_LOOKUP = static_cast<int32_t>(0x1),
__E_HMM_LOOKUP = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HowManyMonke_State_Unwrapped () const noexcept {
return static_cast<__HowManyMonke_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HowManyMonke_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HowManyMonke_State(int32_t  value__) noexcept;

/// @brief Field HMM_LOOKUP value: I32(2)
static ::GlobalNamespace::HowManyMonke_State const HMM_LOOKUP;

/// @brief Field READY value: I32(0)
static ::GlobalNamespace::HowManyMonke_State const READY;

/// @brief Field TD_LOOKUP value: I32(1)
static ::GlobalNamespace::HowManyMonke_State const TD_LOOKUP;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{995};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HowManyMonke_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HowManyMonke_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
