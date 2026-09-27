#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointRotationActiveState_WorldAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JointRotationActiveState_WorldAxis)
// Forward declare root types
namespace GlobalNamespace {
struct JointRotationActiveState_WorldAxis;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JointRotationActiveState_WorldAxis);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JointRotationActiveState_WorldAxis, "Oculus.Interaction.PoseDetection", "JointRotationActiveState/WorldAxis");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.PoseDetection.JointRotationActiveState/WorldAxis
struct CORDL_TYPE JointRotationActiveState_WorldAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JointRotationActiveState_WorldAxis_Unwrapped
enum struct __JointRotationActiveState_WorldAxis_Unwrapped : int32_t {
__E_PositiveX = static_cast<int32_t>(0x0),
__E_NegativeX = static_cast<int32_t>(0x1),
__E_PositiveY = static_cast<int32_t>(0x2),
__E_NegativeY = static_cast<int32_t>(0x3),
__E_PositiveZ = static_cast<int32_t>(0x4),
__E_NegativeZ = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JointRotationActiveState_WorldAxis_Unwrapped () const noexcept {
return static_cast<__JointRotationActiveState_WorldAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JointRotationActiveState_WorldAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JointRotationActiveState_WorldAxis(int32_t  value__) noexcept;

/// @brief Field NegativeX value: I32(1)
static ::GlobalNamespace::JointRotationActiveState_WorldAxis const NegativeX;

/// @brief Field NegativeY value: I32(3)
static ::GlobalNamespace::JointRotationActiveState_WorldAxis const NegativeY;

/// @brief Field NegativeZ value: I32(5)
static ::GlobalNamespace::JointRotationActiveState_WorldAxis const NegativeZ;

/// @brief Field PositiveX value: I32(0)
static ::GlobalNamespace::JointRotationActiveState_WorldAxis const PositiveX;

/// @brief Field PositiveY value: I32(2)
static ::GlobalNamespace::JointRotationActiveState_WorldAxis const PositiveY;

/// @brief Field PositiveZ value: I32(4)
static ::GlobalNamespace::JointRotationActiveState_WorldAxis const PositiveZ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16126};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JointRotationActiveState_WorldAxis, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JointRotationActiveState_WorldAxis) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
