#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformFeature)
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
struct TransformFeature;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::PoseDetection::TransformFeature);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformFeature, "Oculus.Interaction.PoseDetection", "TransformFeature");
// Dependencies 
namespace Oculus::Interaction::PoseDetection {
// Is value type: true
// CS Name: Oculus.Interaction.PoseDetection.TransformFeature
struct CORDL_TYPE TransformFeature {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TransformFeature_Unwrapped
enum struct __TransformFeature_Unwrapped : int32_t {
__E_WristUp = static_cast<int32_t>(0x0),
__E_WristDown = static_cast<int32_t>(0x1),
__E_PalmDown = static_cast<int32_t>(0x2),
__E_PalmUp = static_cast<int32_t>(0x3),
__E_PalmTowardsFace = static_cast<int32_t>(0x4),
__E_PalmAwayFromFace = static_cast<int32_t>(0x5),
__E_FingersUp = static_cast<int32_t>(0x6),
__E_FingersDown = static_cast<int32_t>(0x7),
__E_PinchClear = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TransformFeature_Unwrapped () const noexcept {
return static_cast<__TransformFeature_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TransformFeature() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TransformFeature(int32_t  value__) noexcept;

/// @brief Field FingersDown value: I32(7)
static ::Oculus::Interaction::PoseDetection::TransformFeature const FingersDown;

/// @brief Field FingersUp value: I32(6)
static ::Oculus::Interaction::PoseDetection::TransformFeature const FingersUp;

/// @brief Field PalmAwayFromFace value: I32(5)
static ::Oculus::Interaction::PoseDetection::TransformFeature const PalmAwayFromFace;

/// @brief Field PalmDown value: I32(2)
static ::Oculus::Interaction::PoseDetection::TransformFeature const PalmDown;

/// @brief Field PalmTowardsFace value: I32(4)
static ::Oculus::Interaction::PoseDetection::TransformFeature const PalmTowardsFace;

/// @brief Field PalmUp value: I32(3)
static ::Oculus::Interaction::PoseDetection::TransformFeature const PalmUp;

/// @brief Field PinchClear value: I32(8)
static ::Oculus::Interaction::PoseDetection::TransformFeature const PinchClear;

/// @brief Field WristDown value: I32(1)
static ::Oculus::Interaction::PoseDetection::TransformFeature const WristDown;

/// @brief Field WristUp value: I32(0)
static ::Oculus::Interaction::PoseDetection::TransformFeature const WristUp;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16171};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeature, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformFeature) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
