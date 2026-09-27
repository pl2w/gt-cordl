#pragma once
// IWYU pragma private; include "GlobalNamespace/ESuperInfectionGameState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESuperInfectionGameState)
// Forward declare root types
namespace GlobalNamespace {
struct ESuperInfectionGameState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ESuperInfectionGameState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ESuperInfectionGameState, "", "ESuperInfectionGameState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ESuperInfectionGameState
struct CORDL_TYPE ESuperInfectionGameState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int16_t;

/// @brief Nested struct __ESuperInfectionGameState_Unwrapped
enum struct __ESuperInfectionGameState_Unwrapped : int16_t {
__E_Uninitialized = static_cast<int16_t>(0x0),
__E_Stopped = static_cast<int16_t>(0x1),
__E_Starting = static_cast<int16_t>(0x2),
__E_WaitingForMorePlayers = static_cast<int16_t>(0x3),
__E_Playing = static_cast<int16_t>(0x4),
__E_RoundRestarting = static_cast<int16_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESuperInfectionGameState_Unwrapped () const noexcept {
return static_cast<__ESuperInfectionGameState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int16_t () const noexcept {
return static_cast<int16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESuperInfectionGameState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None, comment: None }]
constexpr ESuperInfectionGameState(int16_t  value__) noexcept;

/// @brief Field Playing value: I16(4)
static ::GlobalNamespace::ESuperInfectionGameState const Playing;

/// @brief Field RoundRestarting value: I16(5)
static ::GlobalNamespace::ESuperInfectionGameState const RoundRestarting;

/// @brief Field Starting value: I16(2)
static ::GlobalNamespace::ESuperInfectionGameState const Starting;

/// @brief Field Stopped value: I16(1)
static ::GlobalNamespace::ESuperInfectionGameState const Stopped;

/// @brief Field Uninitialized value: I16(0)
static ::GlobalNamespace::ESuperInfectionGameState const Uninitialized;

/// @brief Field WaitingForMorePlayers value: I16(3)
static ::GlobalNamespace::ESuperInfectionGameState const WaitingForMorePlayers;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{250};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x0, size: 0x2, def value: None
 int16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ESuperInfectionGameState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ESuperInfectionGameState) == 0x2, "Size mismatch!");

} // namespace end def GlobalNamespace
