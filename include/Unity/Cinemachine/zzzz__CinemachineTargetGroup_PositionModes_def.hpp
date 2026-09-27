#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTargetGroup_PositionModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineTargetGroup_PositionModes)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineTargetGroup_PositionModes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineTargetGroup_PositionModes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineTargetGroup_PositionModes, "Unity.Cinemachine", "CinemachineTargetGroup/PositionModes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineTargetGroup/PositionModes
struct CORDL_TYPE CinemachineTargetGroup_PositionModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineTargetGroup_PositionModes_Unwrapped
enum struct __CinemachineTargetGroup_PositionModes_Unwrapped : int32_t {
__E_GroupCenter = static_cast<int32_t>(0x0),
__E_GroupAverage = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineTargetGroup_PositionModes_Unwrapped () const noexcept {
return static_cast<__CinemachineTargetGroup_PositionModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineTargetGroup_PositionModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineTargetGroup_PositionModes(int32_t  value__) noexcept;

/// @brief Field GroupAverage value: I32(1)
static ::GlobalNamespace::CinemachineTargetGroup_PositionModes const GroupAverage;

/// @brief Field GroupCenter value: I32(0)
static ::GlobalNamespace::CinemachineTargetGroup_PositionModes const GroupCenter;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22216};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineTargetGroup_PositionModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineTargetGroup_PositionModes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
