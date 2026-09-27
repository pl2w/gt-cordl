#pragma once
// IWYU pragma private; include "GlobalNamespace/NetSystemState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetSystemState)
// Forward declare root types
namespace GlobalNamespace {
struct NetSystemState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetSystemState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetSystemState, "", "NetSystemState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetSystemState
struct CORDL_TYPE NetSystemState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetSystemState_Unwrapped
enum struct __NetSystemState_Unwrapped : int32_t {
__E_Initialization = static_cast<int32_t>(0x0),
__E_PingRecon = static_cast<int32_t>(0x1),
__E_Idle = static_cast<int32_t>(0x2),
__E_Connecting = static_cast<int32_t>(0x3),
__E_InGame = static_cast<int32_t>(0x4),
__E_Disconnecting = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetSystemState_Unwrapped () const noexcept {
return static_cast<__NetSystemState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetSystemState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetSystemState(int32_t  value__) noexcept;

/// @brief Field Connecting value: I32(3)
static ::GlobalNamespace::NetSystemState const Connecting;

/// @brief Field Disconnecting value: I32(5)
static ::GlobalNamespace::NetSystemState const Disconnecting;

/// @brief Field Idle value: I32(2)
static ::GlobalNamespace::NetSystemState const Idle;

/// @brief Field InGame value: I32(4)
static ::GlobalNamespace::NetSystemState const InGame;

/// @brief Field Initialization value: I32(0)
static ::GlobalNamespace::NetSystemState const Initialization;

/// @brief Field PingRecon value: I32(1)
static ::GlobalNamespace::NetSystemState const PingRecon;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1120};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetSystemState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetSystemState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
