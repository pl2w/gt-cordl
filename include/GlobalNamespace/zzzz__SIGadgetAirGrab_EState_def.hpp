#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetAirGrab_EState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetAirGrab_EState)
// Forward declare root types
namespace GlobalNamespace {
struct SIGadgetAirGrab_EState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIGadgetAirGrab_EState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetAirGrab_EState, "", "SIGadgetAirGrab/EState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIGadgetAirGrab/EState
struct CORDL_TYPE SIGadgetAirGrab_EState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SIGadgetAirGrab_EState_Unwrapped
enum struct __SIGadgetAirGrab_EState_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_StartAirGrabbing = static_cast<int32_t>(0x1),
__E_PreparedToDash = static_cast<int32_t>(0x2),
__E_DashUsed = static_cast<int32_t>(0x3),
__E_Count = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SIGadgetAirGrab_EState_Unwrapped () const noexcept {
return static_cast<__SIGadgetAirGrab_EState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetAirGrab_EState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SIGadgetAirGrab_EState(int32_t  value__) noexcept;

/// @brief Field Count value: I32(4)
static ::GlobalNamespace::SIGadgetAirGrab_EState const Count;

/// @brief Field DashUsed value: I32(3)
static ::GlobalNamespace::SIGadgetAirGrab_EState const DashUsed;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::SIGadgetAirGrab_EState const Idle;

/// @brief Field PreparedToDash value: I32(2)
static ::GlobalNamespace::SIGadgetAirGrab_EState const PreparedToDash;

/// @brief Field StartAirGrabbing value: I32(1)
static ::GlobalNamespace::SIGadgetAirGrab_EState const StartAirGrabbing;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{241};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab_EState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetAirGrab_EState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
