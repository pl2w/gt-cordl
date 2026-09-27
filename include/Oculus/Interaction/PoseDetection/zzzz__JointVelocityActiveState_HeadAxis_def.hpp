#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointVelocityActiveState_HeadAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JointVelocityActiveState_HeadAxis)
// Forward declare root types
namespace GlobalNamespace {
struct JointVelocityActiveState_HeadAxis;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JointVelocityActiveState_HeadAxis);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JointVelocityActiveState_HeadAxis, "Oculus.Interaction.PoseDetection", "JointVelocityActiveState/HeadAxis");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.PoseDetection.JointVelocityActiveState/HeadAxis
struct CORDL_TYPE JointVelocityActiveState_HeadAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JointVelocityActiveState_HeadAxis_Unwrapped
enum struct __JointVelocityActiveState_HeadAxis_Unwrapped : int32_t {
__E_HeadForward = static_cast<int32_t>(0x0),
__E_HeadBackward = static_cast<int32_t>(0x1),
__E_HeadUp = static_cast<int32_t>(0x2),
__E_HeadDown = static_cast<int32_t>(0x3),
__E_HeadLeft = static_cast<int32_t>(0x4),
__E_HeadRight = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JointVelocityActiveState_HeadAxis_Unwrapped () const noexcept {
return static_cast<__JointVelocityActiveState_HeadAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JointVelocityActiveState_HeadAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JointVelocityActiveState_HeadAxis(int32_t  value__) noexcept;

/// @brief Field HeadBackward value: I32(1)
static ::GlobalNamespace::JointVelocityActiveState_HeadAxis const HeadBackward;

/// @brief Field HeadDown value: I32(3)
static ::GlobalNamespace::JointVelocityActiveState_HeadAxis const HeadDown;

/// @brief Field HeadForward value: I32(0)
static ::GlobalNamespace::JointVelocityActiveState_HeadAxis const HeadForward;

/// @brief Field HeadLeft value: I32(4)
static ::GlobalNamespace::JointVelocityActiveState_HeadAxis const HeadLeft;

/// @brief Field HeadRight value: I32(5)
static ::GlobalNamespace::JointVelocityActiveState_HeadAxis const HeadRight;

/// @brief Field HeadUp value: I32(2)
static ::GlobalNamespace::JointVelocityActiveState_HeadAxis const HeadUp;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16135};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JointVelocityActiveState_HeadAxis, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JointVelocityActiveState_HeadAxis) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
