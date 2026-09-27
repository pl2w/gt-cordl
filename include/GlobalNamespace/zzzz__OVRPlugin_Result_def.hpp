#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Result.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Result)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Result;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Result);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Result, "", "OVRPlugin/Result");
// [OVRResultStatus]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Result
struct CORDL_TYPE OVRPlugin_Result {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_Result_Unwrapped
enum struct __OVRPlugin_Result_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_Success_EventUnavailable = static_cast<int32_t>(0x1),
__E_Success_Pending = static_cast<int32_t>(0x2),
__E_Success_ColocationSessionAlreadyAdvertising = static_cast<int32_t>(0xbb9),
__E_Success_ColocationSessionAlreadyDiscovering = static_cast<int32_t>(0xbba),
__E_Failure = static_cast<int32_t>(0xfffffc18),
__E_Failure_InvalidParameter = static_cast<int32_t>(0xfffffc17),
__E_Failure_NotInitialized = static_cast<int32_t>(0xfffffc16),
__E_Failure_InvalidOperation = static_cast<int32_t>(0xfffffc15),
__E_Failure_Unsupported = static_cast<int32_t>(0xfffffc14),
__E_Failure_NotYetImplemented = static_cast<int32_t>(0xfffffc13),
__E_Failure_OperationFailed = static_cast<int32_t>(0xfffffc12),
__E_Failure_InsufficientSize = static_cast<int32_t>(0xfffffc11),
__E_Failure_DataIsInvalid = static_cast<int32_t>(0xfffffc10),
__E_Failure_DeprecatedOperation = static_cast<int32_t>(0xfffffc0f),
__E_Failure_ErrorLimitReached = static_cast<int32_t>(0xfffffc0e),
__E_Failure_ErrorInitializationFailed = static_cast<int32_t>(0xfffffc0d),
__E_Failure_RuntimeUnavailable = static_cast<int32_t>(0xfffffc0c),
__E_Failure_HandleInvalid = static_cast<int32_t>(0xfffffc0b),
__E_Failure_SpaceCloudStorageDisabled = static_cast<int32_t>(0xfffff830),
__E_Failure_SpaceMappingInsufficient = static_cast<int32_t>(0xfffff82f),
__E_Failure_SpaceLocalizationFailed = static_cast<int32_t>(0xfffff82e),
__E_Failure_SpaceNetworkTimeout = static_cast<int32_t>(0xfffff82d),
__E_Failure_SpaceNetworkRequestFailed = static_cast<int32_t>(0xfffff82c),
__E_Failure_SpaceComponentNotSupported = static_cast<int32_t>(0xfffff82b),
__E_Failure_SpaceComponentNotEnabled = static_cast<int32_t>(0xfffff82a),
__E_Failure_SpaceComponentStatusPending = static_cast<int32_t>(0xfffff829),
__E_Failure_SpaceComponentStatusAlreadySet = static_cast<int32_t>(0xfffff828),
__E_Failure_SpaceGroupNotFound = static_cast<int32_t>(0xfffff827),
__E_Failure_ColocationSessionNetworkFailed = static_cast<int32_t>(0xfffff446),
__E_Failure_ColocationSessionNoDiscoveryMethodAvailable = static_cast<int32_t>(0xfffff445),
__E_Failure_SpaceInsufficientResources = static_cast<int32_t>(0xffffdcd8),
__E_Failure_SpaceStorageAtCapacity = static_cast<int32_t>(0xffffdcd7),
__E_Failure_SpaceInsufficientView = static_cast<int32_t>(0xffffdcd6),
__E_Failure_SpacePermissionInsufficient = static_cast<int32_t>(0xffffdcd5),
__E_Failure_SpaceRateLimited = static_cast<int32_t>(0xffffdcd4),
__E_Failure_SpaceTooDark = static_cast<int32_t>(0xffffdcd3),
__E_Failure_SpaceTooBright = static_cast<int32_t>(0xffffdcd2),
__E_Warning_BoundaryVisibilitySuppressionNotAllowed = static_cast<int32_t>(0x2346),
__E_Failure_FuturePending = static_cast<int32_t>(0xffffd8f0),
__E_Failure_FutureInvalid = static_cast<int32_t>(0xffffd8ef),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_Result_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_Result_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Result() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Result(int32_t  value__) noexcept;

/// @brief Field Failure value: I32(-1000)
static ::GlobalNamespace::OVRPlugin_Result const Failure;

/// @brief Field Failure_ColocationSessionNetworkFailed value: I32(-3002)
static ::GlobalNamespace::OVRPlugin_Result const Failure_ColocationSessionNetworkFailed;

/// @brief Field Failure_ColocationSessionNoDiscoveryMethodAvailable value: I32(-3003)
static ::GlobalNamespace::OVRPlugin_Result const Failure_ColocationSessionNoDiscoveryMethodAvailable;

/// @brief Field Failure_DataIsInvalid value: I32(-1008)
static ::GlobalNamespace::OVRPlugin_Result const Failure_DataIsInvalid;

/// @brief Field Failure_DeprecatedOperation value: I32(-1009)
static ::GlobalNamespace::OVRPlugin_Result const Failure_DeprecatedOperation;

/// @brief Field Failure_ErrorInitializationFailed value: I32(-1011)
static ::GlobalNamespace::OVRPlugin_Result const Failure_ErrorInitializationFailed;

/// @brief Field Failure_ErrorLimitReached value: I32(-1010)
static ::GlobalNamespace::OVRPlugin_Result const Failure_ErrorLimitReached;

/// @brief Field Failure_FutureInvalid value: I32(-10001)
static ::GlobalNamespace::OVRPlugin_Result const Failure_FutureInvalid;

/// @brief Field Failure_FuturePending value: I32(-10000)
static ::GlobalNamespace::OVRPlugin_Result const Failure_FuturePending;

/// @brief Field Failure_HandleInvalid value: I32(-1013)
static ::GlobalNamespace::OVRPlugin_Result const Failure_HandleInvalid;

/// @brief Field Failure_InsufficientSize value: I32(-1007)
static ::GlobalNamespace::OVRPlugin_Result const Failure_InsufficientSize;

/// @brief Field Failure_InvalidOperation value: I32(-1003)
static ::GlobalNamespace::OVRPlugin_Result const Failure_InvalidOperation;

/// @brief Field Failure_InvalidParameter value: I32(-1001)
static ::GlobalNamespace::OVRPlugin_Result const Failure_InvalidParameter;

/// @brief Field Failure_NotInitialized value: I32(-1002)
static ::GlobalNamespace::OVRPlugin_Result const Failure_NotInitialized;

/// @brief Field Failure_NotYetImplemented value: I32(-1005)
static ::GlobalNamespace::OVRPlugin_Result const Failure_NotYetImplemented;

/// @brief Field Failure_OperationFailed value: I32(-1006)
static ::GlobalNamespace::OVRPlugin_Result const Failure_OperationFailed;

/// @brief Field Failure_RuntimeUnavailable value: I32(-1012)
static ::GlobalNamespace::OVRPlugin_Result const Failure_RuntimeUnavailable;

/// @brief Field Failure_SpaceCloudStorageDisabled value: I32(-2000)
static ::GlobalNamespace::OVRPlugin_Result const Failure_SpaceCloudStorageDisabled;

/// @brief Field Failure_SpaceComponentNotEnabled value: I32(-2006)
static ::GlobalNamespace::OVRPlugin_Result const Failure_SpaceComponentNotEnabled;

/// @brief Field Failure_SpaceComponentNotSupported value: I32(-2005)
static ::GlobalNamespace::OVRPlugin_Result const Failure_SpaceComponentNotSupported;

/// @brief Field Failure_SpaceComponentStatusAlreadySet value: I32(-2008)
static ::GlobalNamespace::OVRPlugin_Result const Failure_SpaceComponentStatusAlreadySet;

/// @brief Field Failure_SpaceComponentStatusPending value: I32(-2007)
static ::GlobalNamespace::OVRPlugin_Result const Failure_SpaceComponentStatusPending;

/// @brief Field Failure_SpaceGroupNotFound value: I32(-2009)
static ::GlobalNamespace::OVRPlugin_Result const Failure_SpaceGroupNotFound;

/// @brief Field Failure_SpaceInsufficientResources value: I32(-9000)
static ::GlobalNamespace::OVRPlugin_Result const Failure_SpaceInsufficientResources;

/// @brief Field Failure_SpaceInsufficientView value: I32(-9002)
static ::GlobalNamespace::OVRPlugin_Result const Failure_SpaceInsufficientView;

/// @brief Field Failure_SpaceLocalizationFailed value: I32(-2002)
static ::GlobalNamespace::OVRPlugin_Result const Failure_SpaceLocalizationFailed;

/// @brief Field Failure_SpaceMappingInsufficient value: I32(-2001)
static ::GlobalNamespace::OVRPlugin_Result const Failure_SpaceMappingInsufficient;

/// @brief Field Failure_SpaceNetworkRequestFailed value: I32(-2004)
static ::GlobalNamespace::OVRPlugin_Result const Failure_SpaceNetworkRequestFailed;

/// @brief Field Failure_SpaceNetworkTimeout value: I32(-2003)
static ::GlobalNamespace::OVRPlugin_Result const Failure_SpaceNetworkTimeout;

/// @brief Field Failure_SpacePermissionInsufficient value: I32(-9003)
static ::GlobalNamespace::OVRPlugin_Result const Failure_SpacePermissionInsufficient;

/// @brief Field Failure_SpaceRateLimited value: I32(-9004)
static ::GlobalNamespace::OVRPlugin_Result const Failure_SpaceRateLimited;

/// @brief Field Failure_SpaceStorageAtCapacity value: I32(-9001)
static ::GlobalNamespace::OVRPlugin_Result const Failure_SpaceStorageAtCapacity;

/// @brief Field Failure_SpaceTooBright value: I32(-9006)
static ::GlobalNamespace::OVRPlugin_Result const Failure_SpaceTooBright;

/// @brief Field Failure_SpaceTooDark value: I32(-9005)
static ::GlobalNamespace::OVRPlugin_Result const Failure_SpaceTooDark;

/// @brief Field Failure_Unsupported value: I32(-1004)
static ::GlobalNamespace::OVRPlugin_Result const Failure_Unsupported;

/// @brief Field Success value: I32(0)
static ::GlobalNamespace::OVRPlugin_Result const Success;

/// @brief Field Success_ColocationSessionAlreadyAdvertising value: I32(3001)
static ::GlobalNamespace::OVRPlugin_Result const Success_ColocationSessionAlreadyAdvertising;

/// @brief Field Success_ColocationSessionAlreadyDiscovering value: I32(3002)
static ::GlobalNamespace::OVRPlugin_Result const Success_ColocationSessionAlreadyDiscovering;

/// @brief Field Success_EventUnavailable value: I32(1)
static ::GlobalNamespace::OVRPlugin_Result const Success_EventUnavailable;

/// @brief Field Success_Pending value: I32(2)
static ::GlobalNamespace::OVRPlugin_Result const Success_Pending;

/// @brief Field Warning_BoundaryVisibilitySuppressionNotAllowed value: I32(9030)
static ::GlobalNamespace::OVRPlugin_Result const Warning_BoundaryVisibilitySuppressionNotAllowed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12047};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Result, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Result) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
