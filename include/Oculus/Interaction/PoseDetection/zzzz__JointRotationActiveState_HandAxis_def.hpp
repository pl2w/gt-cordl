#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointRotationActiveState_HandAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JointRotationActiveState_HandAxis)
// Forward declare root types
namespace GlobalNamespace {
struct JointRotationActiveState_HandAxis;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JointRotationActiveState_HandAxis);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JointRotationActiveState_HandAxis, "Oculus.Interaction.PoseDetection", "JointRotationActiveState/HandAxis");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.PoseDetection.JointRotationActiveState/HandAxis
struct CORDL_TYPE JointRotationActiveState_HandAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JointRotationActiveState_HandAxis_Unwrapped
enum struct __JointRotationActiveState_HandAxis_Unwrapped : int32_t {
__E_Pronation = static_cast<int32_t>(0x0),
__E_Supination = static_cast<int32_t>(0x1),
__E_RadialDeviation = static_cast<int32_t>(0x2),
__E_UlnarDeviation = static_cast<int32_t>(0x3),
__E_Extension = static_cast<int32_t>(0x4),
__E_Flexion = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JointRotationActiveState_HandAxis_Unwrapped () const noexcept {
return static_cast<__JointRotationActiveState_HandAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JointRotationActiveState_HandAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JointRotationActiveState_HandAxis(int32_t  value__) noexcept;

/// @brief Field Extension value: I32(4)
static ::GlobalNamespace::JointRotationActiveState_HandAxis const Extension;

/// @brief Field Flexion value: I32(5)
static ::GlobalNamespace::JointRotationActiveState_HandAxis const Flexion;

/// @brief Field Pronation value: I32(0)
static ::GlobalNamespace::JointRotationActiveState_HandAxis const Pronation;

/// @brief Field RadialDeviation value: I32(2)
static ::GlobalNamespace::JointRotationActiveState_HandAxis const RadialDeviation;

/// @brief Field Supination value: I32(1)
static ::GlobalNamespace::JointRotationActiveState_HandAxis const Supination;

/// @brief Field UlnarDeviation value: I32(3)
static ::GlobalNamespace::JointRotationActiveState_HandAxis const UlnarDeviation;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16127};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JointRotationActiveState_HandAxis, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JointRotationActiveState_HandAxis) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
