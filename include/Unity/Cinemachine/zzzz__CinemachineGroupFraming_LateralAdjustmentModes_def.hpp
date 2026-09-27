#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineGroupFraming_LateralAdjustmentModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineGroupFraming_LateralAdjustmentModes)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineGroupFraming_LateralAdjustmentModes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineGroupFraming_LateralAdjustmentModes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineGroupFraming_LateralAdjustmentModes, "Unity.Cinemachine", "CinemachineGroupFraming/LateralAdjustmentModes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineGroupFraming/LateralAdjustmentModes
struct CORDL_TYPE CinemachineGroupFraming_LateralAdjustmentModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineGroupFraming_LateralAdjustmentModes_Unwrapped
enum struct __CinemachineGroupFraming_LateralAdjustmentModes_Unwrapped : int32_t {
__E_ChangePosition = static_cast<int32_t>(0x0),
__E_ChangeRotation = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineGroupFraming_LateralAdjustmentModes_Unwrapped () const noexcept {
return static_cast<__CinemachineGroupFraming_LateralAdjustmentModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineGroupFraming_LateralAdjustmentModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineGroupFraming_LateralAdjustmentModes(int32_t  value__) noexcept;

/// @brief Field ChangePosition value: I32(0)
static ::GlobalNamespace::CinemachineGroupFraming_LateralAdjustmentModes const ChangePosition;

/// @brief Field ChangeRotation value: I32(1)
static ::GlobalNamespace::CinemachineGroupFraming_LateralAdjustmentModes const ChangeRotation;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22189};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineGroupFraming_LateralAdjustmentModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineGroupFraming_LateralAdjustmentModes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
