#pragma once
// IWYU pragma private; include "GlobalNamespace/GRTool_GRToolType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRTool_GRToolType)
// Forward declare root types
namespace GlobalNamespace {
struct GRTool_GRToolType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRTool_GRToolType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRTool_GRToolType, "", "GRTool/GRToolType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRTool/GRToolType
struct CORDL_TYPE GRTool_GRToolType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRTool_GRToolType_Unwrapped
enum struct __GRTool_GRToolType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Club = static_cast<int32_t>(0x1),
__E_Collector = static_cast<int32_t>(0x2),
__E_Flash = static_cast<int32_t>(0x3),
__E_Lantern = static_cast<int32_t>(0x4),
__E_Revive = static_cast<int32_t>(0x5),
__E_ShieldGun = static_cast<int32_t>(0x6),
__E_DirectionalShield = static_cast<int32_t>(0x7),
__E_DockWrist = static_cast<int32_t>(0x8),
__E_EnergyEfficiency = static_cast<int32_t>(0x9),
__E_DropPod = static_cast<int32_t>(0xa),
__E_HockeyStick = static_cast<int32_t>(0xb),
__E_StatusWatch = static_cast<int32_t>(0xc),
__E_RattyBackpack = static_cast<int32_t>(0xd),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRTool_GRToolType_Unwrapped () const noexcept {
return static_cast<__GRTool_GRToolType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRTool_GRToolType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRTool_GRToolType(int32_t  value__) noexcept;

/// @brief Field Club value: I32(1)
static ::GlobalNamespace::GRTool_GRToolType const Club;

/// @brief Field Collector value: I32(2)
static ::GlobalNamespace::GRTool_GRToolType const Collector;

/// @brief Field DirectionalShield value: I32(7)
static ::GlobalNamespace::GRTool_GRToolType const DirectionalShield;

/// @brief Field DockWrist value: I32(8)
static ::GlobalNamespace::GRTool_GRToolType const DockWrist;

/// @brief Field DropPod value: I32(10)
static ::GlobalNamespace::GRTool_GRToolType const DropPod;

/// @brief Field EnergyEfficiency value: I32(9)
static ::GlobalNamespace::GRTool_GRToolType const EnergyEfficiency;

/// @brief Field Flash value: I32(3)
static ::GlobalNamespace::GRTool_GRToolType const Flash;

/// @brief Field HockeyStick value: I32(11)
static ::GlobalNamespace::GRTool_GRToolType const HockeyStick;

/// @brief Field Lantern value: I32(4)
static ::GlobalNamespace::GRTool_GRToolType const Lantern;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::GRTool_GRToolType const None;

/// @brief Field RattyBackpack value: I32(13)
static ::GlobalNamespace::GRTool_GRToolType const RattyBackpack;

/// @brief Field Revive value: I32(5)
static ::GlobalNamespace::GRTool_GRToolType const Revive;

/// @brief Field ShieldGun value: I32(6)
static ::GlobalNamespace::GRTool_GRToolType const ShieldGun;

/// @brief Field StatusWatch value: I32(12)
static ::GlobalNamespace::GRTool_GRToolType const StatusWatch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2053};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRTool_GRToolType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRTool_GRToolType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
