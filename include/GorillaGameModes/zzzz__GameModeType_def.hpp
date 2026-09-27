#pragma once
// IWYU pragma private; include "GorillaGameModes/GameModeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameModeType)
// Forward declare root types
namespace GorillaGameModes {
struct GameModeType;
}
// Write type traits
MARK_VAL_T(::GorillaGameModes::GameModeType);
DEFINE_IL2CPP_CLASS(::GorillaGameModes::GameModeType, "GorillaGameModes", "GameModeType");
// Dependencies 
namespace GorillaGameModes {
// Is value type: true
// CS Name: GorillaGameModes.GameModeType
struct CORDL_TYPE GameModeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GameModeType_Unwrapped
enum struct __GameModeType_Unwrapped : int32_t {
__E_Casual = static_cast<int32_t>(0x0),
__E_Infection = static_cast<int32_t>(0x1),
__E_HuntDown = static_cast<int32_t>(0x2),
__E_Paintbrawl = static_cast<int32_t>(0x3),
__E_Ambush = static_cast<int32_t>(0x4),
__E_FreezeTag = static_cast<int32_t>(0x5),
__E_Ghost = static_cast<int32_t>(0x6),
__E_Custom = static_cast<int32_t>(0x7),
__E_Guardian = static_cast<int32_t>(0x8),
__E_PropHunt = static_cast<int32_t>(0x9),
__E_InfectionCompetitive = static_cast<int32_t>(0xa),
__E_SuperInfect = static_cast<int32_t>(0xb),
__E_SuperCasual = static_cast<int32_t>(0xc),
__E_Count = static_cast<int32_t>(0xd),
__E_None = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GameModeType_Unwrapped () const noexcept {
return static_cast<__GameModeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GameModeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GameModeType(int32_t  value__) noexcept;

/// @brief Field Ambush value: I32(4)
static ::GorillaGameModes::GameModeType const Ambush;

/// @brief Field Casual value: I32(0)
static ::GorillaGameModes::GameModeType const Casual;

/// @brief Field Count value: I32(13)
static ::GorillaGameModes::GameModeType const Count;

/// @brief Field Custom value: I32(7)
static ::GorillaGameModes::GameModeType const Custom;

/// @brief Field FreezeTag value: I32(5)
static ::GorillaGameModes::GameModeType const FreezeTag;

/// @brief Field Ghost value: I32(6)
static ::GorillaGameModes::GameModeType const Ghost;

/// @brief Field Guardian value: I32(8)
static ::GorillaGameModes::GameModeType const Guardian;

/// @brief Field HuntDown value: I32(2)
static ::GorillaGameModes::GameModeType const HuntDown;

/// @brief Field Infection value: I32(1)
static ::GorillaGameModes::GameModeType const Infection;

/// @brief Field InfectionCompetitive value: I32(10)
static ::GorillaGameModes::GameModeType const InfectionCompetitive;

/// @brief Field None value: I32(-1)
static ::GorillaGameModes::GameModeType const None;

/// @brief Field Paintbrawl value: I32(3)
static ::GorillaGameModes::GameModeType const Paintbrawl;

/// @brief Field PropHunt value: I32(9)
static ::GorillaGameModes::GameModeType const PropHunt;

/// @brief Field SuperCasual value: I32(12)
static ::GorillaGameModes::GameModeType const SuperCasual;

/// @brief Field SuperInfect value: I32(11)
static ::GorillaGameModes::GameModeType const SuperInfect;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3885};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaGameModes::GameModeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GorillaGameModes::GameModeType) == 0x4, "Size mismatch!");

} // namespace end def GorillaGameModes
