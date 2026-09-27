#pragma once
// IWYU pragma private; include "GorillaTagScripts/PlayerTimerManager_RPC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerTimerManager_RPC)
// Forward declare root types
namespace GlobalNamespace {
struct PlayerTimerManager_RPC;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerTimerManager_RPC);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerTimerManager_RPC, "GorillaTagScripts", "PlayerTimerManager/RPC");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.PlayerTimerManager/RPC
struct CORDL_TYPE PlayerTimerManager_RPC {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerTimerManager_RPC_Unwrapped
enum struct __PlayerTimerManager_RPC_Unwrapped : int32_t {
__E_InitTimersMaster = static_cast<int32_t>(0x0),
__E_ToggleTimerMaster = static_cast<int32_t>(0x1),
__E_Count = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerTimerManager_RPC_Unwrapped () const noexcept {
return static_cast<__PlayerTimerManager_RPC_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerTimerManager_RPC() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PlayerTimerManager_RPC(int32_t  value__) noexcept;

/// @brief Field Count value: I32(2)
static ::GlobalNamespace::PlayerTimerManager_RPC const Count;

/// @brief Field InitTimersMaster value: I32(0)
static ::GlobalNamespace::PlayerTimerManager_RPC const InitTimersMaster;

/// @brief Field ToggleTimerMaster value: I32(1)
static ::GlobalNamespace::PlayerTimerManager_RPC const ToggleTimerMaster;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4005};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerTimerManager_RPC, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerTimerManager_RPC) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
