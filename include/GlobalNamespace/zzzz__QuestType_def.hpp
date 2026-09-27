#pragma once
// IWYU pragma private; include "GlobalNamespace/QuestType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QuestType)
// Forward declare root types
namespace GlobalNamespace {
struct QuestType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::QuestType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuestType, "", "QuestType");
// [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: QuestType
struct CORDL_TYPE QuestType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __QuestType_Unwrapped
enum struct __QuestType_Unwrapped : int32_t {
__E_none = static_cast<int32_t>(0x0),
__E_gameModeObjective = static_cast<int32_t>(0x1),
__E_gameModeRound = static_cast<int32_t>(0x2),
__E_grabObject = static_cast<int32_t>(0x3),
__E_dropObject = static_cast<int32_t>(0x4),
__E_eatObject = static_cast<int32_t>(0x5),
__E_tapObject = static_cast<int32_t>(0x6),
__E_launchedProjectile = static_cast<int32_t>(0x7),
__E_moveDistance = static_cast<int32_t>(0x8),
__E_swimDistance = static_cast<int32_t>(0x9),
__E_triggerHandEffect = static_cast<int32_t>(0xa),
__E_enterLocation = static_cast<int32_t>(0xb),
__E_misc = static_cast<int32_t>(0xc),
__E_critter = static_cast<int32_t>(0xd),
__E_fetchObject = static_cast<int32_t>(0xe),
__E_playerInteraction = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __QuestType_Unwrapped () const noexcept {
return static_cast<__QuestType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr QuestType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr QuestType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{615};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field critter value: I32(13)
static ::GlobalNamespace::QuestType const critter;

/// @brief Field dropObject value: I32(4)
static ::GlobalNamespace::QuestType const dropObject;

/// @brief Field eatObject value: I32(5)
static ::GlobalNamespace::QuestType const eatObject;

/// @brief Field enterLocation value: I32(11)
static ::GlobalNamespace::QuestType const enterLocation;

/// @brief Field fetchObject value: I32(14)
static ::GlobalNamespace::QuestType const fetchObject;

/// @brief Field gameModeObjective value: I32(1)
static ::GlobalNamespace::QuestType const gameModeObjective;

/// @brief Field gameModeRound value: I32(2)
static ::GlobalNamespace::QuestType const gameModeRound;

/// @brief Field grabObject value: I32(3)
static ::GlobalNamespace::QuestType const grabObject;

/// @brief Field launchedProjectile value: I32(7)
static ::GlobalNamespace::QuestType const launchedProjectile;

/// @brief Field misc value: I32(12)
static ::GlobalNamespace::QuestType const misc;

/// @brief Field moveDistance value: I32(8)
static ::GlobalNamespace::QuestType const moveDistance;

/// @brief Field none value: I32(0)
static ::GlobalNamespace::QuestType const none;

/// @brief Field playerInteraction value: I32(15)
static ::GlobalNamespace::QuestType const playerInteraction;

/// @brief Field swimDistance value: I32(9)
static ::GlobalNamespace::QuestType const swimDistance;

/// @brief Field tapObject value: I32(6)
static ::GlobalNamespace::QuestType const tapObject;

/// @brief Field triggerHandEffect value: I32(10)
static ::GlobalNamespace::QuestType const triggerHandEffect;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuestType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::QuestType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
