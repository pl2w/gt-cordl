#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressionManager_WristDockUpgradeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProgressionManager_WristDockUpgradeType)
// Forward declare root types
namespace GlobalNamespace {
struct ProgressionManager_WristDockUpgradeType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProgressionManager_WristDockUpgradeType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_WristDockUpgradeType, "", "ProgressionManager/WristDockUpgradeType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ProgressionManager/WristDockUpgradeType
struct CORDL_TYPE ProgressionManager_WristDockUpgradeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProgressionManager_WristDockUpgradeType_Unwrapped
enum struct __ProgressionManager_WristDockUpgradeType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Upgrade1 = static_cast<int32_t>(0x1),
__E_Upgrade2 = static_cast<int32_t>(0x2),
__E_Upgrade3 = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProgressionManager_WristDockUpgradeType_Unwrapped () const noexcept {
return static_cast<__ProgressionManager_WristDockUpgradeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_WristDockUpgradeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProgressionManager_WristDockUpgradeType(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::ProgressionManager_WristDockUpgradeType const None;

/// @brief Field Upgrade1 value: I32(1)
static ::GlobalNamespace::ProgressionManager_WristDockUpgradeType const Upgrade1;

/// @brief Field Upgrade2 value: I32(2)
static ::GlobalNamespace::ProgressionManager_WristDockUpgradeType const Upgrade2;

/// @brief Field Upgrade3 value: I32(3)
static ::GlobalNamespace::ProgressionManager_WristDockUpgradeType const Upgrade3;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2403};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_WristDockUpgradeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_WristDockUpgradeType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
