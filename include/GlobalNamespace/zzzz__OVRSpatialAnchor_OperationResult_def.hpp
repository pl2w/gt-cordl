#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor_OperationResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpatialAnchor_OperationResult)
// Forward declare root types
namespace GlobalNamespace {
struct OVRSpatialAnchor_OperationResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_OperationResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSpatialAnchor_OperationResult, "", "OVRSpatialAnchor/OperationResult");
// [OVRResultStatus]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/OperationResult
struct CORDL_TYPE OVRSpatialAnchor_OperationResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRSpatialAnchor_OperationResult_Unwrapped
enum struct __OVRSpatialAnchor_OperationResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_Failure = static_cast<int32_t>(0xfffffc18),
__E_Failure_DataIsInvalid = static_cast<int32_t>(0xfffffc10),
__E_Failure_InvalidParameter = static_cast<int32_t>(0xfffffc17),
__E_Failure_SpaceCloudStorageDisabled = static_cast<int32_t>(0xfffff830),
__E_Failure_SpaceMappingInsufficient = static_cast<int32_t>(0xfffff82f),
__E_Failure_SpaceLocalizationFailed = static_cast<int32_t>(0xfffff82e),
__E_Failure_SpaceNetworkTimeout = static_cast<int32_t>(0xfffff82d),
__E_Failure_SpaceNetworkRequestFailed = static_cast<int32_t>(0xfffff82c),
__E_Failure_GroupNotFound = static_cast<int32_t>(0xfffff827),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRSpatialAnchor_OperationResult_Unwrapped () const noexcept {
return static_cast<__OVRSpatialAnchor_OperationResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRSpatialAnchor_OperationResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRSpatialAnchor_OperationResult(int32_t  value__) noexcept;

/// @brief Field Failure value: I32(-1000)
static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Failure;

/// @brief Field Failure_DataIsInvalid value: I32(-1008)
static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Failure_DataIsInvalid;

/// @brief Field Failure_GroupNotFound value: I32(-2009)
static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Failure_GroupNotFound;

/// @brief Field Failure_InvalidParameter value: I32(-1001)
static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Failure_InvalidParameter;

/// @brief Field Failure_SpaceCloudStorageDisabled value: I32(-2000)
static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Failure_SpaceCloudStorageDisabled;

/// @brief Field Failure_SpaceLocalizationFailed value: I32(-2002)
static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Failure_SpaceLocalizationFailed;

/// @brief Field Failure_SpaceMappingInsufficient value: I32(-2001)
static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Failure_SpaceMappingInsufficient;

/// @brief Field Failure_SpaceNetworkRequestFailed value: I32(-2004)
static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Failure_SpaceNetworkRequestFailed;

/// @brief Field Failure_SpaceNetworkTimeout value: I32(-2003)
static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Failure_SpaceNetworkTimeout;

/// @brief Field Success value: I32(0)
static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12464};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_OperationResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSpatialAnchor_OperationResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
