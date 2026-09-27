#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerGameEvents_EventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerGameEvents_EventType)
// Forward declare root types
namespace GlobalNamespace {
struct PlayerGameEvents_EventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerGameEvents_EventType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerGameEvents_EventType, "", "PlayerGameEvents/EventType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerGameEvents/EventType
struct CORDL_TYPE PlayerGameEvents_EventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerGameEvents_EventType_Unwrapped
enum struct __PlayerGameEvents_EventType_Unwrapped : int32_t {
__E_NONE = static_cast<int32_t>(0x0),
__E_GameModeObjective = static_cast<int32_t>(0x1),
__E_GameModeCompleteRound = static_cast<int32_t>(0x2),
__E_GrabbedObject = static_cast<int32_t>(0x3),
__E_DroppedObject = static_cast<int32_t>(0x4),
__E_EatObject = static_cast<int32_t>(0x5),
__E_TapObject = static_cast<int32_t>(0x6),
__E_LaunchedProjectile = static_cast<int32_t>(0x7),
__E_PlayerMoved = static_cast<int32_t>(0x8),
__E_PlayerSwam = static_cast<int32_t>(0x9),
__E_TriggerHandEfffect = static_cast<int32_t>(0xa),
__E_EnterLocation = static_cast<int32_t>(0xb),
__E_MiscEvent = static_cast<int32_t>(0xc),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerGameEvents_EventType_Unwrapped () const noexcept {
return static_cast<__PlayerGameEvents_EventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerGameEvents_EventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PlayerGameEvents_EventType(int32_t  value__) noexcept;

/// @brief Field DroppedObject value: I32(4)
static ::GlobalNamespace::PlayerGameEvents_EventType const DroppedObject;

/// @brief Field EatObject value: I32(5)
static ::GlobalNamespace::PlayerGameEvents_EventType const EatObject;

/// @brief Field EnterLocation value: I32(11)
static ::GlobalNamespace::PlayerGameEvents_EventType const EnterLocation;

/// @brief Field GameModeCompleteRound value: I32(2)
static ::GlobalNamespace::PlayerGameEvents_EventType const GameModeCompleteRound;

/// @brief Field GameModeObjective value: I32(1)
static ::GlobalNamespace::PlayerGameEvents_EventType const GameModeObjective;

/// @brief Field GrabbedObject value: I32(3)
static ::GlobalNamespace::PlayerGameEvents_EventType const GrabbedObject;

/// @brief Field LaunchedProjectile value: I32(7)
static ::GlobalNamespace::PlayerGameEvents_EventType const LaunchedProjectile;

/// @brief Field MiscEvent value: I32(12)
static ::GlobalNamespace::PlayerGameEvents_EventType const MiscEvent;

/// @brief Field NONE value: I32(0)
static ::GlobalNamespace::PlayerGameEvents_EventType const NONE;

/// @brief Field PlayerMoved value: I32(8)
static ::GlobalNamespace::PlayerGameEvents_EventType const PlayerMoved;

/// @brief Field PlayerSwam value: I32(9)
static ::GlobalNamespace::PlayerGameEvents_EventType const PlayerSwam;

/// @brief Field TapObject value: I32(6)
static ::GlobalNamespace::PlayerGameEvents_EventType const TapObject;

/// @brief Field TriggerHandEfffect value: I32(10)
static ::GlobalNamespace::PlayerGameEvents_EventType const TriggerHandEfffect;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{595};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerGameEvents_EventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerGameEvents_EventType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
