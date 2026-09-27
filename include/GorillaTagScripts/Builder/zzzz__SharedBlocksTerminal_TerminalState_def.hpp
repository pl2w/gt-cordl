#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksTerminal_TerminalState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedBlocksTerminal_TerminalState)
// Forward declare root types
namespace GlobalNamespace {
struct SharedBlocksTerminal_TerminalState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SharedBlocksTerminal_TerminalState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SharedBlocksTerminal_TerminalState, "GorillaTagScripts.Builder", "SharedBlocksTerminal/TerminalState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Builder.SharedBlocksTerminal/TerminalState
struct CORDL_TYPE SharedBlocksTerminal_TerminalState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SharedBlocksTerminal_TerminalState_Unwrapped
enum struct __SharedBlocksTerminal_TerminalState_Unwrapped : int32_t {
__E_NoStatus = static_cast<int32_t>(0x0),
__E_Searching = static_cast<int32_t>(0x1),
__E_NotFound = static_cast<int32_t>(0x2),
__E_Found = static_cast<int32_t>(0x3),
__E_Loading = static_cast<int32_t>(0x4),
__E_LoadSuccess = static_cast<int32_t>(0x5),
__E_LoadFail = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SharedBlocksTerminal_TerminalState_Unwrapped () const noexcept {
return static_cast<__SharedBlocksTerminal_TerminalState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksTerminal_TerminalState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SharedBlocksTerminal_TerminalState(int32_t  value__) noexcept;

/// @brief Field Found value: I32(3)
static ::GlobalNamespace::SharedBlocksTerminal_TerminalState const Found;

/// @brief Field LoadFail value: I32(6)
static ::GlobalNamespace::SharedBlocksTerminal_TerminalState const LoadFail;

/// @brief Field LoadSuccess value: I32(5)
static ::GlobalNamespace::SharedBlocksTerminal_TerminalState const LoadSuccess;

/// @brief Field Loading value: I32(4)
static ::GlobalNamespace::SharedBlocksTerminal_TerminalState const Loading;

/// @brief Field NoStatus value: I32(0)
static ::GlobalNamespace::SharedBlocksTerminal_TerminalState const NoStatus;

/// @brief Field NotFound value: I32(2)
static ::GlobalNamespace::SharedBlocksTerminal_TerminalState const NotFound;

/// @brief Field Searching value: I32(1)
static ::GlobalNamespace::SharedBlocksTerminal_TerminalState const Searching;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4217};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SharedBlocksTerminal_TerminalState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SharedBlocksTerminal_TerminalState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
