#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointVelocityActiveState_WorldAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JointVelocityActiveState_WorldAxis)
// Forward declare root types
namespace GlobalNamespace {
struct JointVelocityActiveState_WorldAxis;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JointVelocityActiveState_WorldAxis);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JointVelocityActiveState_WorldAxis, "Oculus.Interaction.PoseDetection", "JointVelocityActiveState/WorldAxis");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.PoseDetection.JointVelocityActiveState/WorldAxis
struct CORDL_TYPE JointVelocityActiveState_WorldAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JointVelocityActiveState_WorldAxis_Unwrapped
enum struct __JointVelocityActiveState_WorldAxis_Unwrapped : int32_t {
__E_PositiveX = static_cast<int32_t>(0x0),
__E_NegativeX = static_cast<int32_t>(0x1),
__E_PositiveY = static_cast<int32_t>(0x2),
__E_NegativeY = static_cast<int32_t>(0x3),
__E_PositiveZ = static_cast<int32_t>(0x4),
__E_NegativeZ = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JointVelocityActiveState_WorldAxis_Unwrapped () const noexcept {
return static_cast<__JointVelocityActiveState_WorldAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JointVelocityActiveState_WorldAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JointVelocityActiveState_WorldAxis(int32_t  value__) noexcept;

/// @brief Field NegativeX value: I32(1)
static ::GlobalNamespace::JointVelocityActiveState_WorldAxis const NegativeX;

/// @brief Field NegativeY value: I32(3)
static ::GlobalNamespace::JointVelocityActiveState_WorldAxis const NegativeY;

/// @brief Field NegativeZ value: I32(5)
static ::GlobalNamespace::JointVelocityActiveState_WorldAxis const NegativeZ;

/// @brief Field PositiveX value: I32(0)
static ::GlobalNamespace::JointVelocityActiveState_WorldAxis const PositiveX;

/// @brief Field PositiveY value: I32(2)
static ::GlobalNamespace::JointVelocityActiveState_WorldAxis const PositiveY;

/// @brief Field PositiveZ value: I32(4)
static ::GlobalNamespace::JointVelocityActiveState_WorldAxis const PositiveZ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16134};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JointVelocityActiveState_WorldAxis, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JointVelocityActiveState_WorldAxis) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
