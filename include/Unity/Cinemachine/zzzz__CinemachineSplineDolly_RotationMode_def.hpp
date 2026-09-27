#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineDolly_RotationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineSplineDolly_RotationMode)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineSplineDolly_RotationMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineSplineDolly_RotationMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineSplineDolly_RotationMode, "Unity.Cinemachine", "CinemachineSplineDolly/RotationMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineSplineDolly/RotationMode
struct CORDL_TYPE CinemachineSplineDolly_RotationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineSplineDolly_RotationMode_Unwrapped
enum struct __CinemachineSplineDolly_RotationMode_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Spline = static_cast<int32_t>(0x1),
__E_SplineNoRoll = static_cast<int32_t>(0x2),
__E_FollowTarget = static_cast<int32_t>(0x3),
__E_FollowTargetNoRoll = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineSplineDolly_RotationMode_Unwrapped () const noexcept {
return static_cast<__CinemachineSplineDolly_RotationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineSplineDolly_RotationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineSplineDolly_RotationMode(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::CinemachineSplineDolly_RotationMode const Default;

/// @brief Field FollowTarget value: I32(3)
static ::GlobalNamespace::CinemachineSplineDolly_RotationMode const FollowTarget;

/// @brief Field FollowTargetNoRoll value: I32(4)
static ::GlobalNamespace::CinemachineSplineDolly_RotationMode const FollowTargetNoRoll;

/// @brief Field Spline value: I32(1)
static ::GlobalNamespace::CinemachineSplineDolly_RotationMode const Spline;

/// @brief Field SplineNoRoll value: I32(2)
static ::GlobalNamespace::CinemachineSplineDolly_RotationMode const SplineNoRoll;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22242};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineSplineDolly_RotationMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineSplineDolly_RotationMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
