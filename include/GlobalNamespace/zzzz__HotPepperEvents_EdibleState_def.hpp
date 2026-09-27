#pragma once
// IWYU pragma private; include "GlobalNamespace/HotPepperEvents_EdibleState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HotPepperEvents_EdibleState)
// Forward declare root types
namespace GlobalNamespace {
struct HotPepperEvents_EdibleState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HotPepperEvents_EdibleState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HotPepperEvents_EdibleState, "", "HotPepperEvents/EdibleState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: HotPepperEvents/EdibleState
struct CORDL_TYPE HotPepperEvents_EdibleState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HotPepperEvents_EdibleState_Unwrapped
enum struct __HotPepperEvents_EdibleState_Unwrapped : int32_t {
__E_A = static_cast<int32_t>(0x1),
__E_B = static_cast<int32_t>(0x2),
__E_C = static_cast<int32_t>(0x4),
__E_D = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HotPepperEvents_EdibleState_Unwrapped () const noexcept {
return static_cast<__HotPepperEvents_EdibleState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HotPepperEvents_EdibleState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HotPepperEvents_EdibleState(int32_t  value__) noexcept;

/// @brief Field A value: I32(1)
static ::GlobalNamespace::HotPepperEvents_EdibleState const A;

/// @brief Field B value: I32(2)
static ::GlobalNamespace::HotPepperEvents_EdibleState const B;

/// @brief Field C value: I32(4)
static ::GlobalNamespace::HotPepperEvents_EdibleState const C;

/// @brief Field D value: I32(8)
static ::GlobalNamespace::HotPepperEvents_EdibleState const D;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1430};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HotPepperEvents_EdibleState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HotPepperEvents_EdibleState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
