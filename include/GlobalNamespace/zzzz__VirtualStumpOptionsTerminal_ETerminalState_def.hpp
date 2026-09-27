#pragma once
// IWYU pragma private; include "GlobalNamespace/VirtualStumpOptionsTerminal_ETerminalState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VirtualStumpOptionsTerminal_ETerminalState)
// Forward declare root types
namespace GlobalNamespace {
struct VirtualStumpOptionsTerminal_ETerminalState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState, "", "VirtualStumpOptionsTerminal/ETerminalState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: VirtualStumpOptionsTerminal/ETerminalState
struct CORDL_TYPE VirtualStumpOptionsTerminal_ETerminalState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VirtualStumpOptionsTerminal_ETerminalState_Unwrapped
enum struct __VirtualStumpOptionsTerminal_ETerminalState_Unwrapped : int32_t {
__E_MODIO_ACCOUNT = static_cast<int32_t>(0x0),
__E_ROOM_SIZE = static_cast<int32_t>(0x1),
__E_NUM_STATES = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VirtualStumpOptionsTerminal_ETerminalState_Unwrapped () const noexcept {
return static_cast<__VirtualStumpOptionsTerminal_ETerminalState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VirtualStumpOptionsTerminal_ETerminalState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VirtualStumpOptionsTerminal_ETerminalState(int32_t  value__) noexcept;

/// @brief Field MODIO_ACCOUNT value: I32(0)
static ::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState const MODIO_ACCOUNT;

/// @brief Field NUM_STATES value: I32(2)
static ::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState const NUM_STATES;

/// @brief Field ROOM_SIZE value: I32(1)
static ::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState const ROOM_SIZE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2766};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
