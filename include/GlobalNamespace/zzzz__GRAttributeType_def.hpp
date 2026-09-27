#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAttributeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRAttributeType)
// Forward declare root types
namespace GlobalNamespace {
struct GRAttributeType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRAttributeType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAttributeType, "", "GRAttributeType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRAttributeType
struct CORDL_TYPE GRAttributeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRAttributeType_Unwrapped
enum struct __GRAttributeType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ArmorMax = static_cast<int32_t>(0x1),
__E_EnergyMax = static_cast<int32_t>(0x2),
__E_EnergyUseCost = static_cast<int32_t>(0x3),
__E_EnergyStart = static_cast<int32_t>(0x4),
__E_FlashDamage = static_cast<int32_t>(0x5),
__E_BatonDamage = static_cast<int32_t>(0x6),
__E_LightIntensity = static_cast<int32_t>(0x7),
__E_HarvestGain = static_cast<int32_t>(0x8),
__E_ShieldSize = static_cast<int32_t>(0x9),
__E_HPMax = static_cast<int32_t>(0xa),
__E_PatrolSpeed = static_cast<int32_t>(0xb),
__E_ChaseSpeed = static_cast<int32_t>(0xc),
__E_PoweredBatonDamage = static_cast<int32_t>(0xd),
__E_PlayerDamage = static_cast<int32_t>(0xe),
__E_PlayerShieldDamage = static_cast<int32_t>(0xf),
__E_BackupSpeed = static_cast<int32_t>(0x10),
__E_KnockbackMultiplier = static_cast<int32_t>(0x11),
__E_RechargeRate = static_cast<int32_t>(0x12),
__E_FlashStunDuration = static_cast<int32_t>(0x13),
__E_DirectionalShieldDamage = static_cast<int32_t>(0x14),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRAttributeType_Unwrapped () const noexcept {
return static_cast<__GRAttributeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRAttributeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRAttributeType(int32_t  value__) noexcept;

/// @brief Field ArmorMax value: I32(1)
static ::GlobalNamespace::GRAttributeType const ArmorMax;

/// @brief Field BackupSpeed value: I32(16)
static ::GlobalNamespace::GRAttributeType const BackupSpeed;

/// @brief Field BatonDamage value: I32(6)
static ::GlobalNamespace::GRAttributeType const BatonDamage;

/// @brief Field ChaseSpeed value: I32(12)
static ::GlobalNamespace::GRAttributeType const ChaseSpeed;

/// @brief Field DirectionalShieldDamage value: I32(20)
static ::GlobalNamespace::GRAttributeType const DirectionalShieldDamage;

/// @brief Field EnergyMax value: I32(2)
static ::GlobalNamespace::GRAttributeType const EnergyMax;

/// @brief Field EnergyStart value: I32(4)
static ::GlobalNamespace::GRAttributeType const EnergyStart;

/// @brief Field EnergyUseCost value: I32(3)
static ::GlobalNamespace::GRAttributeType const EnergyUseCost;

/// @brief Field FlashDamage value: I32(5)
static ::GlobalNamespace::GRAttributeType const FlashDamage;

/// @brief Field FlashStunDuration value: I32(19)
static ::GlobalNamespace::GRAttributeType const FlashStunDuration;

/// @brief Field HPMax value: I32(10)
static ::GlobalNamespace::GRAttributeType const HPMax;

/// @brief Field HarvestGain value: I32(8)
static ::GlobalNamespace::GRAttributeType const HarvestGain;

/// @brief Field KnockbackMultiplier value: I32(17)
static ::GlobalNamespace::GRAttributeType const KnockbackMultiplier;

/// @brief Field LightIntensity value: I32(7)
static ::GlobalNamespace::GRAttributeType const LightIntensity;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::GRAttributeType const None;

/// @brief Field PatrolSpeed value: I32(11)
static ::GlobalNamespace::GRAttributeType const PatrolSpeed;

/// @brief Field PlayerDamage value: I32(14)
static ::GlobalNamespace::GRAttributeType const PlayerDamage;

/// @brief Field PlayerShieldDamage value: I32(15)
static ::GlobalNamespace::GRAttributeType const PlayerShieldDamage;

/// @brief Field PoweredBatonDamage value: I32(13)
static ::GlobalNamespace::GRAttributeType const PoweredBatonDamage;

/// @brief Field RechargeRate value: I32(18)
static ::GlobalNamespace::GRAttributeType const RechargeRate;

/// @brief Field ShieldSize value: I32(9)
static ::GlobalNamespace::GRAttributeType const ShieldSize;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1880};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAttributeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAttributeType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
