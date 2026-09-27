#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetDashYoyo_EState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetDashYoyo_EState)
// Forward declare root types
namespace GlobalNamespace {
struct SIGadgetDashYoyo_EState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIGadgetDashYoyo_EState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetDashYoyo_EState, "", "SIGadgetDashYoyo/EState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIGadgetDashYoyo/EState
struct CORDL_TYPE SIGadgetDashYoyo_EState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SIGadgetDashYoyo_EState_Unwrapped
enum struct __SIGadgetDashYoyo_EState_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_OnCooldown = static_cast<int32_t>(0x1),
__E_PreparedToThrow = static_cast<int32_t>(0x2),
__E_Thrown = static_cast<int32_t>(0x3),
__E_PreparedToDash = static_cast<int32_t>(0x4),
__E_DashUsed = static_cast<int32_t>(0x5),
__E_Count = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SIGadgetDashYoyo_EState_Unwrapped () const noexcept {
return static_cast<__SIGadgetDashYoyo_EState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetDashYoyo_EState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SIGadgetDashYoyo_EState(int32_t  value__) noexcept;

/// @brief Field Count value: I32(6)
static ::GlobalNamespace::SIGadgetDashYoyo_EState const Count;

/// @brief Field DashUsed value: I32(5)
static ::GlobalNamespace::SIGadgetDashYoyo_EState const DashUsed;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::SIGadgetDashYoyo_EState const Idle;

/// @brief Field OnCooldown value: I32(1)
static ::GlobalNamespace::SIGadgetDashYoyo_EState const OnCooldown;

/// @brief Field PreparedToDash value: I32(4)
static ::GlobalNamespace::SIGadgetDashYoyo_EState const PreparedToDash;

/// @brief Field PreparedToThrow value: I32(2)
static ::GlobalNamespace::SIGadgetDashYoyo_EState const PreparedToThrow;

/// @brief Field Thrown value: I32(3)
static ::GlobalNamespace::SIGadgetDashYoyo_EState const Thrown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{234};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo_EState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetDashYoyo_EState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
