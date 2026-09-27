#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaComputer_ComputerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaComputer_ComputerState)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaComputer_ComputerState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaComputer_ComputerState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaComputer_ComputerState, "GorillaNetworking", "GorillaComputer/ComputerState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.GorillaComputer/ComputerState
struct CORDL_TYPE GorillaComputer_ComputerState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaComputer_ComputerState_Unwrapped
enum struct __GorillaComputer_ComputerState_Unwrapped : int32_t {
__E_Startup = static_cast<int32_t>(0x0),
__E_Color = static_cast<int32_t>(0x1),
__E_Name = static_cast<int32_t>(0x2),
__E_Turn = static_cast<int32_t>(0x3),
__E_Mic = static_cast<int32_t>(0x4),
__E_Room = static_cast<int32_t>(0x5),
__E_Queue = static_cast<int32_t>(0x6),
__E_Group = static_cast<int32_t>(0x7),
__E_Voice = static_cast<int32_t>(0x8),
__E_AutoMute = static_cast<int32_t>(0x9),
__E_Credits = static_cast<int32_t>(0xa),
__E_Visuals = static_cast<int32_t>(0xb),
__E_Time = static_cast<int32_t>(0xc),
__E_NameWarning = static_cast<int32_t>(0xd),
__E_Loading = static_cast<int32_t>(0xe),
__E_Support = static_cast<int32_t>(0xf),
__E_Troop = static_cast<int32_t>(0x10),
__E_KID = static_cast<int32_t>(0x11),
__E_Redemption = static_cast<int32_t>(0x12),
__E_Language = static_cast<int32_t>(0x13),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaComputer_ComputerState_Unwrapped () const noexcept {
return static_cast<__GorillaComputer_ComputerState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaComputer_ComputerState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaComputer_ComputerState(int32_t  value__) noexcept;

/// @brief Field AutoMute value: I32(9)
static ::GlobalNamespace::GorillaComputer_ComputerState const AutoMute;

/// @brief Field Color value: I32(1)
static ::GlobalNamespace::GorillaComputer_ComputerState const Color;

/// @brief Field Credits value: I32(10)
static ::GlobalNamespace::GorillaComputer_ComputerState const Credits;

/// @brief Field Group value: I32(7)
static ::GlobalNamespace::GorillaComputer_ComputerState const Group;

/// @brief Field KID value: I32(17)
static ::GlobalNamespace::GorillaComputer_ComputerState const KID;

/// @brief Field Language value: I32(19)
static ::GlobalNamespace::GorillaComputer_ComputerState const Language;

/// @brief Field Loading value: I32(14)
static ::GlobalNamespace::GorillaComputer_ComputerState const Loading;

/// @brief Field Mic value: I32(4)
static ::GlobalNamespace::GorillaComputer_ComputerState const Mic;

/// @brief Field Name value: I32(2)
static ::GlobalNamespace::GorillaComputer_ComputerState const Name;

/// @brief Field NameWarning value: I32(13)
static ::GlobalNamespace::GorillaComputer_ComputerState const NameWarning;

/// @brief Field Queue value: I32(6)
static ::GlobalNamespace::GorillaComputer_ComputerState const Queue;

/// @brief Field Redemption value: I32(18)
static ::GlobalNamespace::GorillaComputer_ComputerState const Redemption;

/// @brief Field Room value: I32(5)
static ::GlobalNamespace::GorillaComputer_ComputerState const Room;

/// @brief Field Startup value: I32(0)
static ::GlobalNamespace::GorillaComputer_ComputerState const Startup;

/// @brief Field Support value: I32(15)
static ::GlobalNamespace::GorillaComputer_ComputerState const Support;

/// @brief Field Time value: I32(12)
static ::GlobalNamespace::GorillaComputer_ComputerState const Time;

/// @brief Field Troop value: I32(16)
static ::GlobalNamespace::GorillaComputer_ComputerState const Troop;

/// @brief Field Turn value: I32(3)
static ::GlobalNamespace::GorillaComputer_ComputerState const Turn;

/// @brief Field Visuals value: I32(11)
static ::GlobalNamespace::GorillaComputer_ComputerState const Visuals;

/// @brief Field Voice value: I32(8)
static ::GlobalNamespace::GorillaComputer_ComputerState const Voice;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4321};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaComputer_ComputerState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaComputer_ComputerState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
