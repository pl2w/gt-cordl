#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukEnvironmentRaycastStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKNativeFuncs_MrukEnvironmentRaycastStatus)
// Forward declare root types
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukEnvironmentRaycastStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukEnvironmentRaycastStatus");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukEnvironmentRaycastStatus
struct CORDL_TYPE MRUKNativeFuncs_MrukEnvironmentRaycastStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MRUKNativeFuncs_MrukEnvironmentRaycastStatus_Unwrapped
enum struct __MRUKNativeFuncs_MrukEnvironmentRaycastStatus_Unwrapped : int32_t {
__E_Hit = static_cast<int32_t>(0x1),
__E_NoHit = static_cast<int32_t>(0x2),
__E_HitPointOccluded = static_cast<int32_t>(0x3),
__E_HitPointOutsideFov = static_cast<int32_t>(0x4),
__E_RayOccluded = static_cast<int32_t>(0x5),
__E_InvalidOrientation = static_cast<int32_t>(0x6),
__E_Max = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MRUKNativeFuncs_MrukEnvironmentRaycastStatus_Unwrapped () const noexcept {
return static_cast<__MRUKNativeFuncs_MrukEnvironmentRaycastStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukEnvironmentRaycastStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MRUKNativeFuncs_MrukEnvironmentRaycastStatus(int32_t  value__) noexcept;

/// @brief Field Hit value: I32(1)
static ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus const Hit;

/// @brief Field HitPointOccluded value: I32(3)
static ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus const HitPointOccluded;

/// @brief Field HitPointOutsideFov value: I32(4)
static ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus const HitPointOutsideFov;

/// @brief Field InvalidOrientation value: I32(6)
static ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus const InvalidOrientation;

/// @brief Field Max value: I32(2147483647)
static ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus const Max;

/// @brief Field NoHit value: I32(2)
static ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus const NoHit;

/// @brief Field RayOccluded value: I32(5)
static ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus const RayOccluded;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25786};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
