#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetBlasterState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetBlasterState)
// Forward declare root types
namespace GlobalNamespace {
struct SIGadgetBlasterState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIGadgetBlasterState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetBlasterState, "", "SIGadgetBlasterState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIGadgetBlasterState
struct CORDL_TYPE SIGadgetBlasterState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SIGadgetBlasterState_Unwrapped
enum struct __SIGadgetBlasterState_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Charging = static_cast<int32_t>(0x1),
__E_Cooldown = static_cast<int32_t>(0x2),
__E_Pumping = static_cast<int32_t>(0x3),
__E_Count = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SIGadgetBlasterState_Unwrapped () const noexcept {
return static_cast<__SIGadgetBlasterState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetBlasterState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SIGadgetBlasterState(int32_t  value__) noexcept;

/// @brief Field Charging value: I32(1)
static ::GlobalNamespace::SIGadgetBlasterState const Charging;

/// @brief Field Cooldown value: I32(2)
static ::GlobalNamespace::SIGadgetBlasterState const Cooldown;

/// @brief Field Count value: I32(4)
static ::GlobalNamespace::SIGadgetBlasterState const Count;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::SIGadgetBlasterState const Idle;

/// @brief Field Pumping value: I32(3)
static ::GlobalNamespace::SIGadgetBlasterState const Pumping;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{223};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetBlasterState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetBlasterState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
