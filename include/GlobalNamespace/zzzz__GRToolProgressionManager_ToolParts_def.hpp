#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolProgressionManager_ToolParts.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolProgressionManager_ToolParts)
// Forward declare root types
namespace GlobalNamespace {
struct GRToolProgressionManager_ToolParts;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRToolProgressionManager_ToolParts);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolProgressionManager_ToolParts, "", "GRToolProgressionManager/ToolParts");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRToolProgressionManager/ToolParts
struct CORDL_TYPE GRToolProgressionManager_ToolParts {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRToolProgressionManager_ToolParts_Unwrapped
enum struct __GRToolProgressionManager_ToolParts_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Baton = static_cast<int32_t>(0x1),
__E_BatonDamage1 = static_cast<int32_t>(0x2),
__E_BatonDamage2 = static_cast<int32_t>(0x3),
__E_BatonDamage3 = static_cast<int32_t>(0x4),
__E_Flash = static_cast<int32_t>(0x5),
__E_FlashDamage1 = static_cast<int32_t>(0x6),
__E_FlashDamage2 = static_cast<int32_t>(0x7),
__E_FlashDamage3 = static_cast<int32_t>(0x8),
__E_Collector = static_cast<int32_t>(0x9),
__E_CollectorBonus1 = static_cast<int32_t>(0xa),
__E_CollectorBonus2 = static_cast<int32_t>(0xb),
__E_CollectorBonus3 = static_cast<int32_t>(0xc),
__E_Lantern = static_cast<int32_t>(0xd),
__E_LanternIntensity1 = static_cast<int32_t>(0xe),
__E_LanternIntensity2 = static_cast<int32_t>(0xf),
__E_LanternIntensity3 = static_cast<int32_t>(0x10),
__E_ShieldGun = static_cast<int32_t>(0x11),
__E_ShieldGunStrength1 = static_cast<int32_t>(0x12),
__E_ShieldGunStrength2 = static_cast<int32_t>(0x13),
__E_ShieldGunStrength3 = static_cast<int32_t>(0x14),
__E_DirectionalShield = static_cast<int32_t>(0x15),
__E_DirectionalShieldSize1 = static_cast<int32_t>(0x16),
__E_DirectionalShieldSize2 = static_cast<int32_t>(0x17),
__E_DirectionalShieldSize3 = static_cast<int32_t>(0x18),
__E_EnergyEff = static_cast<int32_t>(0x19),
__E_EnergyEff1 = static_cast<int32_t>(0x1a),
__E_EnergyEff2 = static_cast<int32_t>(0x1b),
__E_EnergyEff3 = static_cast<int32_t>(0x1c),
__E_DockWrist = static_cast<int32_t>(0x1d),
__E_Revive = static_cast<int32_t>(0x1e),
__E_DropPodBasic = static_cast<int32_t>(0x1f),
__E_DropPodChassis1 = static_cast<int32_t>(0x20),
__E_DropPodChassis2 = static_cast<int32_t>(0x21),
__E_DropPodChassis3 = static_cast<int32_t>(0x22),
__E_StatusWatch = static_cast<int32_t>(0x23),
__E_RattyBackpack = static_cast<int32_t>(0x24),
__E_HockeyStick = static_cast<int32_t>(0x25),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRToolProgressionManager_ToolParts_Unwrapped () const noexcept {
return static_cast<__GRToolProgressionManager_ToolParts_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRToolProgressionManager_ToolParts() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRToolProgressionManager_ToolParts(int32_t  value__) noexcept;

/// @brief Field Baton value: I32(1)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const Baton;

/// @brief Field BatonDamage1 value: I32(2)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const BatonDamage1;

/// @brief Field BatonDamage2 value: I32(3)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const BatonDamage2;

/// @brief Field BatonDamage3 value: I32(4)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const BatonDamage3;

/// @brief Field Collector value: I32(9)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const Collector;

/// @brief Field CollectorBonus1 value: I32(10)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const CollectorBonus1;

/// @brief Field CollectorBonus2 value: I32(11)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const CollectorBonus2;

/// @brief Field CollectorBonus3 value: I32(12)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const CollectorBonus3;

/// @brief Field DirectionalShield value: I32(21)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const DirectionalShield;

/// @brief Field DirectionalShieldSize1 value: I32(22)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const DirectionalShieldSize1;

/// @brief Field DirectionalShieldSize2 value: I32(23)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const DirectionalShieldSize2;

/// @brief Field DirectionalShieldSize3 value: I32(24)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const DirectionalShieldSize3;

/// @brief Field DockWrist value: I32(29)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const DockWrist;

/// @brief Field DropPodBasic value: I32(31)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const DropPodBasic;

/// @brief Field DropPodChassis1 value: I32(32)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const DropPodChassis1;

/// @brief Field DropPodChassis2 value: I32(33)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const DropPodChassis2;

/// @brief Field DropPodChassis3 value: I32(34)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const DropPodChassis3;

/// @brief Field EnergyEff value: I32(25)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const EnergyEff;

/// @brief Field EnergyEff1 value: I32(26)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const EnergyEff1;

/// @brief Field EnergyEff2 value: I32(27)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const EnergyEff2;

/// @brief Field EnergyEff3 value: I32(28)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const EnergyEff3;

/// @brief Field Flash value: I32(5)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const Flash;

/// @brief Field FlashDamage1 value: I32(6)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const FlashDamage1;

/// @brief Field FlashDamage2 value: I32(7)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const FlashDamage2;

/// @brief Field FlashDamage3 value: I32(8)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const FlashDamage3;

/// @brief Field HockeyStick value: I32(37)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const HockeyStick;

/// @brief Field Lantern value: I32(13)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const Lantern;

/// @brief Field LanternIntensity1 value: I32(14)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const LanternIntensity1;

/// @brief Field LanternIntensity2 value: I32(15)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const LanternIntensity2;

/// @brief Field LanternIntensity3 value: I32(16)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const LanternIntensity3;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const None;

/// @brief Field RattyBackpack value: I32(36)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const RattyBackpack;

/// @brief Field Revive value: I32(30)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const Revive;

/// @brief Field ShieldGun value: I32(17)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const ShieldGun;

/// @brief Field ShieldGunStrength1 value: I32(18)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const ShieldGunStrength1;

/// @brief Field ShieldGunStrength2 value: I32(19)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const ShieldGunStrength2;

/// @brief Field ShieldGunStrength3 value: I32(20)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const ShieldGunStrength3;

/// @brief Field StatusWatch value: I32(35)
static ::GlobalNamespace::GRToolProgressionManager_ToolParts const StatusWatch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2072};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolProgressionManager_ToolParts, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolProgressionManager_ToolParts) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
