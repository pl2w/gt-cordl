#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressionManager_DrillUpgradeLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProgressionManager_DrillUpgradeLevel)
// Forward declare root types
namespace GlobalNamespace {
struct ProgressionManager_DrillUpgradeLevel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel, "", "ProgressionManager/DrillUpgradeLevel");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ProgressionManager/DrillUpgradeLevel
struct CORDL_TYPE ProgressionManager_DrillUpgradeLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProgressionManager_DrillUpgradeLevel_Unwrapped
enum struct __ProgressionManager_DrillUpgradeLevel_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Base = static_cast<int32_t>(0x1),
__E_Upgrade1 = static_cast<int32_t>(0x2),
__E_Upgrade2 = static_cast<int32_t>(0x3),
__E_Upgrade3 = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProgressionManager_DrillUpgradeLevel_Unwrapped () const noexcept {
return static_cast<__ProgressionManager_DrillUpgradeLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_DrillUpgradeLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProgressionManager_DrillUpgradeLevel(int32_t  value__) noexcept;

/// @brief Field Base value: I32(1)
static ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel const Base;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel const None;

/// @brief Field Upgrade1 value: I32(2)
static ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel const Upgrade1;

/// @brief Field Upgrade2 value: I32(3)
static ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel const Upgrade2;

/// @brief Field Upgrade3 value: I32(4)
static ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel const Upgrade3;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2404};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
