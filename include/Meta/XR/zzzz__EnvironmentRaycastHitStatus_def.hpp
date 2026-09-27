#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentRaycastHitStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentRaycastHitStatus)
// Forward declare root types
namespace Meta::XR {
struct EnvironmentRaycastHitStatus;
}
// Write type traits
MARK_VAL_T(::Meta::XR::EnvironmentRaycastHitStatus);
DEFINE_IL2CPP_CLASS(::Meta::XR::EnvironmentRaycastHitStatus, "Meta.XR", "EnvironmentRaycastHitStatus");
// Dependencies 
namespace Meta::XR {
// Is value type: true
// CS Name: Meta.XR.EnvironmentRaycastHitStatus
struct CORDL_TYPE EnvironmentRaycastHitStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EnvironmentRaycastHitStatus_Unwrapped
enum struct __EnvironmentRaycastHitStatus_Unwrapped : int32_t {
__E_Hit = static_cast<int32_t>(0x0),
__E_HitPointOccluded = static_cast<int32_t>(0x1),
__E_NotReady = static_cast<int32_t>(0x2),
__E_HitPointOutsideOfCameraFrustum = static_cast<int32_t>(0x3),
__E_RayOccluded = static_cast<int32_t>(0x4),
__E_NoHit = static_cast<int32_t>(0x5),
__E_NotSupported = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnvironmentRaycastHitStatus_Unwrapped () const noexcept {
return static_cast<__EnvironmentRaycastHitStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentRaycastHitStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EnvironmentRaycastHitStatus(int32_t  value__) noexcept;

/// @brief Field Hit value: I32(0)
static ::Meta::XR::EnvironmentRaycastHitStatus const Hit;

/// @brief Field HitPointOccluded value: I32(1)
static ::Meta::XR::EnvironmentRaycastHitStatus const HitPointOccluded;

/// @brief Field HitPointOutsideOfCameraFrustum value: I32(3)
static ::Meta::XR::EnvironmentRaycastHitStatus const HitPointOutsideOfCameraFrustum;

/// @brief Field NoHit value: I32(5)
static ::Meta::XR::EnvironmentRaycastHitStatus const NoHit;

/// @brief Field NotReady value: I32(2)
static ::Meta::XR::EnvironmentRaycastHitStatus const NotReady;

/// @brief Field NotSupported value: I32(6)
static ::Meta::XR::EnvironmentRaycastHitStatus const NotSupported;

/// @brief Field RayOccluded value: I32(4)
static ::Meta::XR::EnvironmentRaycastHitStatus const RayOccluded;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25759};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::EnvironmentRaycastHitStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::EnvironmentRaycastHitStatus) == 0x4, "Size mismatch!");

} // namespace end def Meta::XR
