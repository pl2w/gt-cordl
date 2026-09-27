#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyBossMoon_Behavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GREnemyBossMoon_Behavior)
// Forward declare root types
namespace GlobalNamespace {
struct GREnemyBossMoon_Behavior;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GREnemyBossMoon_Behavior);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyBossMoon_Behavior, "", "GREnemyBossMoon/Behavior");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GREnemyBossMoon/Behavior
struct CORDL_TYPE GREnemyBossMoon_Behavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GREnemyBossMoon_Behavior_Unwrapped
enum struct __GREnemyBossMoon_Behavior_Unwrapped : int32_t {
__E_HiddenIdle = static_cast<int32_t>(0x0),
__E_Idle = static_cast<int32_t>(0x1),
__E_Reveal = static_cast<int32_t>(0x2),
__E_Exposed = static_cast<int32_t>(0x3),
__E_ExposedIdle = static_cast<int32_t>(0x4),
__E_Stagger = static_cast<int32_t>(0x5),
__E_Dying = static_cast<int32_t>(0x6),
__E_AttackTentacle00 = static_cast<int32_t>(0x7),
__E_AttackTentacle01 = static_cast<int32_t>(0x8),
__E_AttackTentacle02 = static_cast<int32_t>(0x9),
__E_AttackTentacle03 = static_cast<int32_t>(0xa),
__E_AttackTentacle04 = static_cast<int32_t>(0xb),
__E_AttackTentacle05 = static_cast<int32_t>(0xc),
__E_AttackQuickTentacle00 = static_cast<int32_t>(0xd),
__E_AttackQuickTentacle01 = static_cast<int32_t>(0xe),
__E_AttackQuickTentacle02 = static_cast<int32_t>(0xf),
__E_AttackQuickTentacle03 = static_cast<int32_t>(0x10),
__E_AttackTongue = static_cast<int32_t>(0x11),
__E_SummonStart = static_cast<int32_t>(0x12),
__E_SummonEnd = static_cast<int32_t>(0x13),
__E_Summon01 = static_cast<int32_t>(0x14),
__E_Summon02 = static_cast<int32_t>(0x15),
__E_Summon03 = static_cast<int32_t>(0x16),
__E_Summon04 = static_cast<int32_t>(0x17),
__E_RetreatStart = static_cast<int32_t>(0x18),
__E_RetreatEnd = static_cast<int32_t>(0x19),
__E_RetreatIdle = static_cast<int32_t>(0x1a),
__E_DyingIdle = static_cast<int32_t>(0x1b),
__E_Runaway = static_cast<int32_t>(0x1c),
__E_AttackTongueSwipe = static_cast<int32_t>(0x1d),
__E_NextPhase = static_cast<int32_t>(0x1e),
__E_None = static_cast<int32_t>(0x1f),
__E_Count = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GREnemyBossMoon_Behavior_Unwrapped () const noexcept {
return static_cast<__GREnemyBossMoon_Behavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GREnemyBossMoon_Behavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GREnemyBossMoon_Behavior(int32_t  value__) noexcept;

/// @brief Field AttackQuickTentacle00 value: I32(13)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const AttackQuickTentacle00;

/// @brief Field AttackQuickTentacle01 value: I32(14)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const AttackQuickTentacle01;

/// @brief Field AttackQuickTentacle02 value: I32(15)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const AttackQuickTentacle02;

/// @brief Field AttackQuickTentacle03 value: I32(16)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const AttackQuickTentacle03;

/// @brief Field AttackTentacle00 value: I32(7)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const AttackTentacle00;

/// @brief Field AttackTentacle01 value: I32(8)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const AttackTentacle01;

/// @brief Field AttackTentacle02 value: I32(9)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const AttackTentacle02;

/// @brief Field AttackTentacle03 value: I32(10)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const AttackTentacle03;

/// @brief Field AttackTentacle04 value: I32(11)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const AttackTentacle04;

/// @brief Field AttackTentacle05 value: I32(12)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const AttackTentacle05;

/// @brief Field AttackTongue value: I32(17)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const AttackTongue;

/// @brief Field AttackTongueSwipe value: I32(29)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const AttackTongueSwipe;

/// @brief Field Count value: I32(32)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const Count;

/// @brief Field Dying value: I32(6)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const Dying;

/// @brief Field DyingIdle value: I32(27)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const DyingIdle;

/// @brief Field Exposed value: I32(3)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const Exposed;

/// @brief Field ExposedIdle value: I32(4)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const ExposedIdle;

/// @brief Field HiddenIdle value: I32(0)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const HiddenIdle;

/// @brief Field Idle value: I32(1)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const Idle;

/// @brief Field NextPhase value: I32(30)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const NextPhase;

/// @brief Field None value: I32(31)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const None;

/// @brief Field RetreatEnd value: I32(25)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const RetreatEnd;

/// @brief Field RetreatIdle value: I32(26)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const RetreatIdle;

/// @brief Field RetreatStart value: I32(24)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const RetreatStart;

/// @brief Field Reveal value: I32(2)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const Reveal;

/// @brief Field Runaway value: I32(28)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const Runaway;

/// @brief Field Stagger value: I32(5)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const Stagger;

/// @brief Field Summon01 value: I32(20)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const Summon01;

/// @brief Field Summon02 value: I32(21)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const Summon02;

/// @brief Field Summon03 value: I32(22)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const Summon03;

/// @brief Field Summon04 value: I32(23)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const Summon04;

/// @brief Field SummonEnd value: I32(19)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const SummonEnd;

/// @brief Field SummonStart value: I32(18)
static ::GlobalNamespace::GREnemyBossMoon_Behavior const SummonStart;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1936};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon_Behavior, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyBossMoon_Behavior) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
