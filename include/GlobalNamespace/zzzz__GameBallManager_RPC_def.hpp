#pragma once
// IWYU pragma private; include "GlobalNamespace/GameBallManager_RPC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameBallManager_RPC)
// Forward declare root types
namespace GlobalNamespace {
struct GameBallManager_RPC;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameBallManager_RPC);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameBallManager_RPC, "", "GameBallManager/RPC");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameBallManager/RPC
struct CORDL_TYPE GameBallManager_RPC {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GameBallManager_RPC_Unwrapped
enum struct __GameBallManager_RPC_Unwrapped : int32_t {
__E_RequestGrabBall = static_cast<int32_t>(0x0),
__E_GrabBall = static_cast<int32_t>(0x1),
__E_RequestThrowBall = static_cast<int32_t>(0x2),
__E_ThrowBall = static_cast<int32_t>(0x3),
__E_RequestLaunchBall = static_cast<int32_t>(0x4),
__E_LaunchBall = static_cast<int32_t>(0x5),
__E_TeleportBall = static_cast<int32_t>(0x6),
__E_RequestSetBallPosition = static_cast<int32_t>(0x7),
__E_Count = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GameBallManager_RPC_Unwrapped () const noexcept {
return static_cast<__GameBallManager_RPC_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GameBallManager_RPC() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GameBallManager_RPC(int32_t  value__) noexcept;

/// @brief Field Count value: I32(8)
static ::GlobalNamespace::GameBallManager_RPC const Count;

/// @brief Field GrabBall value: I32(1)
static ::GlobalNamespace::GameBallManager_RPC const GrabBall;

/// @brief Field LaunchBall value: I32(5)
static ::GlobalNamespace::GameBallManager_RPC const LaunchBall;

/// @brief Field RequestGrabBall value: I32(0)
static ::GlobalNamespace::GameBallManager_RPC const RequestGrabBall;

/// @brief Field RequestLaunchBall value: I32(4)
static ::GlobalNamespace::GameBallManager_RPC const RequestLaunchBall;

/// @brief Field RequestSetBallPosition value: I32(7)
static ::GlobalNamespace::GameBallManager_RPC const RequestSetBallPosition;

/// @brief Field RequestThrowBall value: I32(2)
static ::GlobalNamespace::GameBallManager_RPC const RequestThrowBall;

/// @brief Field TeleportBall value: I32(6)
static ::GlobalNamespace::GameBallManager_RPC const TeleportBall;

/// @brief Field ThrowBall value: I32(3)
static ::GlobalNamespace::GameBallManager_RPC const ThrowBall;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1536};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameBallManager_RPC, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameBallManager_RPC) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
