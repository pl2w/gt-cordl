#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/TrackedPoseDriver_TrackingType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackedPoseDriver_TrackingType)
// Forward declare root types
namespace GlobalNamespace {
struct TrackedPoseDriver_TrackingType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TrackedPoseDriver_TrackingType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrackedPoseDriver_TrackingType, "UnityEngine.InputSystem.XR", "TrackedPoseDriver/TrackingType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XR.TrackedPoseDriver/TrackingType
struct CORDL_TYPE TrackedPoseDriver_TrackingType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TrackedPoseDriver_TrackingType_Unwrapped
enum struct __TrackedPoseDriver_TrackingType_Unwrapped : int32_t {
__E_RotationAndPosition = static_cast<int32_t>(0x0),
__E_RotationOnly = static_cast<int32_t>(0x1),
__E_PositionOnly = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TrackedPoseDriver_TrackingType_Unwrapped () const noexcept {
return static_cast<__TrackedPoseDriver_TrackingType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TrackedPoseDriver_TrackingType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TrackedPoseDriver_TrackingType(int32_t  value__) noexcept;

/// @brief Field PositionOnly value: I32(2)
static ::GlobalNamespace::TrackedPoseDriver_TrackingType const PositionOnly;

/// @brief Field RotationAndPosition value: I32(0)
static ::GlobalNamespace::TrackedPoseDriver_TrackingType const RotationAndPosition;

/// @brief Field RotationOnly value: I32(1)
static ::GlobalNamespace::TrackedPoseDriver_TrackingType const RotationOnly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13543};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrackedPoseDriver_TrackingType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TrackedPoseDriver_TrackingType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
