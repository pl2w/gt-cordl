#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUpgrade_ToolUpgradeLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolUpgrade_ToolUpgradeLevel)
// Forward declare root types
namespace GlobalNamespace {
struct GRToolUpgrade_ToolUpgradeLevel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRToolUpgrade_ToolUpgradeLevel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolUpgrade_ToolUpgradeLevel, "", "GRToolUpgrade/ToolUpgradeLevel");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRToolUpgrade/ToolUpgradeLevel
struct CORDL_TYPE GRToolUpgrade_ToolUpgradeLevel {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GRToolUpgrade_ToolUpgradeLevel() ;

// Ctor Parameters [CppParam { name: "Cost", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "upgradeAmount", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GRToolUpgrade_ToolUpgradeLevel(int32_t  Cost, float_t  upgradeAmount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2086};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [SerializeField]
/// @brief Field Cost, offset: 0x0, size: 0x4, def value: None
 int32_t  Cost;

/// [SerializeField]
/// @brief Field upgradeAmount, offset: 0x4, size: 0x4, def value: None
 float_t  upgradeAmount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolUpgrade_ToolUpgradeLevel, Cost) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgrade_ToolUpgradeLevel, upgradeAmount) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolUpgrade_ToolUpgradeLevel) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
