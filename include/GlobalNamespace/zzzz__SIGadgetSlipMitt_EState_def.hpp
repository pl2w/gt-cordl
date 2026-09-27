#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetSlipMitt_EState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetSlipMitt_EState)
// Forward declare root types
namespace GlobalNamespace {
struct SIGadgetSlipMitt_EState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIGadgetSlipMitt_EState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetSlipMitt_EState, "", "SIGadgetSlipMitt/EState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIGadgetSlipMitt/EState
struct CORDL_TYPE SIGadgetSlipMitt_EState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SIGadgetSlipMitt_EState_Unwrapped
enum struct __SIGadgetSlipMitt_EState_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Slip = static_cast<int32_t>(0x1),
__E_DashUsed = static_cast<int32_t>(0x2),
__E_Count = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SIGadgetSlipMitt_EState_Unwrapped () const noexcept {
return static_cast<__SIGadgetSlipMitt_EState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetSlipMitt_EState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SIGadgetSlipMitt_EState(int32_t  value__) noexcept;

/// @brief Field Count value: I32(3)
static ::GlobalNamespace::SIGadgetSlipMitt_EState const Count;

/// @brief Field DashUsed value: I32(2)
static ::GlobalNamespace::SIGadgetSlipMitt_EState const DashUsed;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::SIGadgetSlipMitt_EState const Idle;

/// @brief Field Slip value: I32(1)
static ::GlobalNamespace::SIGadgetSlipMitt_EState const Slip;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{244};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt_EState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetSlipMitt_EState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
