#pragma once
// IWYU pragma private; include "Meta/XR/DepthRaycastResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DepthRaycastResult)
// Forward declare root types
namespace Meta::XR {
struct DepthRaycastResult;
}
// Write type traits
MARK_VAL_T(::Meta::XR::DepthRaycastResult);
DEFINE_IL2CPP_CLASS(::Meta::XR::DepthRaycastResult, "Meta.XR", "DepthRaycastResult");
// Dependencies 
namespace Meta::XR {
// Is value type: true
// CS Name: Meta.XR.DepthRaycastResult
struct CORDL_TYPE DepthRaycastResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DepthRaycastResult_Unwrapped
enum struct __DepthRaycastResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_HitPointOccluded = static_cast<int32_t>(0x1),
__E_NotReady = static_cast<int32_t>(0x2),
__E_RayOutsideOfDepthCameraFrustum = static_cast<int32_t>(0x3),
__E_RayOccluded = static_cast<int32_t>(0x4),
__E_NoHit = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DepthRaycastResult_Unwrapped () const noexcept {
return static_cast<__DepthRaycastResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DepthRaycastResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DepthRaycastResult(int32_t  value__) noexcept;

/// @brief Field HitPointOccluded value: I32(1)
static ::Meta::XR::DepthRaycastResult const HitPointOccluded;

/// @brief Field NoHit value: I32(5)
static ::Meta::XR::DepthRaycastResult const NoHit;

/// @brief Field NotReady value: I32(2)
static ::Meta::XR::DepthRaycastResult const NotReady;

/// @brief Field RayOccluded value: I32(4)
static ::Meta::XR::DepthRaycastResult const RayOccluded;

/// @brief Field RayOutsideOfDepthCameraFrustum value: I32(3)
static ::Meta::XR::DepthRaycastResult const RayOutsideOfDepthCameraFrustum;

/// @brief Field Success value: I32(0)
static ::Meta::XR::DepthRaycastResult const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25754};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::DepthRaycastResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::DepthRaycastResult) == 0x4, "Size mismatch!");

} // namespace end def Meta::XR
