#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/OpenXRInteractionFeature_ActionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRInteractionFeature_ActionType)
// Forward declare root types
namespace GlobalNamespace {
struct OpenXRInteractionFeature_ActionType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OpenXRInteractionFeature_ActionType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OpenXRInteractionFeature_ActionType, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature/ActionType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionType
struct CORDL_TYPE OpenXRInteractionFeature_ActionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpenXRInteractionFeature_ActionType_Unwrapped
enum struct __OpenXRInteractionFeature_ActionType_Unwrapped : int32_t {
__E_Binary = static_cast<int32_t>(0x0),
__E_Axis1D = static_cast<int32_t>(0x1),
__E_Axis2D = static_cast<int32_t>(0x2),
__E_Pose = static_cast<int32_t>(0x3),
__E_Vibrate = static_cast<int32_t>(0x4),
__E_Count = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpenXRInteractionFeature_ActionType_Unwrapped () const noexcept {
return static_cast<__OpenXRInteractionFeature_ActionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpenXRInteractionFeature_ActionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OpenXRInteractionFeature_ActionType(int32_t  value__) noexcept;

/// @brief Field Axis1D value: I32(1)
static ::GlobalNamespace::OpenXRInteractionFeature_ActionType const Axis1D;

/// @brief Field Axis2D value: I32(2)
static ::GlobalNamespace::OpenXRInteractionFeature_ActionType const Axis2D;

/// @brief Field Binary value: I32(0)
static ::GlobalNamespace::OpenXRInteractionFeature_ActionType const Binary;

/// @brief Field Count value: I32(5)
static ::GlobalNamespace::OpenXRInteractionFeature_ActionType const Count;

/// @brief Field Pose value: I32(3)
static ::GlobalNamespace::OpenXRInteractionFeature_ActionType const Pose;

/// @brief Field Vibrate value: I32(4)
static ::GlobalNamespace::OpenXRInteractionFeature_ActionType const Vibrate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27330};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OpenXRInteractionFeature_ActionType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OpenXRInteractionFeature_ActionType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
