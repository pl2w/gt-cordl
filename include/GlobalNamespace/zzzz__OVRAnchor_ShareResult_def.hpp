#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_ShareResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor_ShareResult)
// Forward declare root types
namespace GlobalNamespace {
struct OVRAnchor_ShareResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRAnchor_ShareResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRAnchor_ShareResult, "", "OVRAnchor/ShareResult");
// [OVRResultStatus]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/ShareResult
struct CORDL_TYPE OVRAnchor_ShareResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRAnchor_ShareResult_Unwrapped
enum struct __OVRAnchor_ShareResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_Failure = static_cast<int32_t>(0xfffffc18),
__E_FailureOperationFailed = static_cast<int32_t>(0xfffffc12),
__E_FailureInvalidParameter = static_cast<int32_t>(0xfffffc17),
__E_FailureHandleInvalid = static_cast<int32_t>(0xfffffc0b),
__E_FailureDataIsInvalid = static_cast<int32_t>(0xfffffc10),
__E_FailureNetworkTimeout = static_cast<int32_t>(0xfffff82d),
__E_FailureNetworkRequestFailed = static_cast<int32_t>(0xfffff82c),
__E_FailureMappingInsufficient = static_cast<int32_t>(0xfffff82f),
__E_FailureLocalizationFailed = static_cast<int32_t>(0xfffff82e),
__E_FailureSharableComponentNotEnabled = static_cast<int32_t>(0xfffff82a),
__E_FailureCloudStorageDisabled = static_cast<int32_t>(0xfffff830),
__E_FailurePermissionInsufficient = static_cast<int32_t>(0xffffdcd5),
__E_FailureUnsupported = static_cast<int32_t>(0xfffffc14),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRAnchor_ShareResult_Unwrapped () const noexcept {
return static_cast<__OVRAnchor_ShareResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRAnchor_ShareResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRAnchor_ShareResult(int32_t  value__) noexcept;

/// @brief Field Failure value: I32(-1000)
static ::GlobalNamespace::OVRAnchor_ShareResult const Failure;

/// @brief Field FailureCloudStorageDisabled value: I32(-2000)
static ::GlobalNamespace::OVRAnchor_ShareResult const FailureCloudStorageDisabled;

/// @brief Field FailureDataIsInvalid value: I32(-1008)
static ::GlobalNamespace::OVRAnchor_ShareResult const FailureDataIsInvalid;

/// @brief Field FailureHandleInvalid value: I32(-1013)
static ::GlobalNamespace::OVRAnchor_ShareResult const FailureHandleInvalid;

/// @brief Field FailureInvalidParameter value: I32(-1001)
static ::GlobalNamespace::OVRAnchor_ShareResult const FailureInvalidParameter;

/// @brief Field FailureLocalizationFailed value: I32(-2002)
static ::GlobalNamespace::OVRAnchor_ShareResult const FailureLocalizationFailed;

/// @brief Field FailureMappingInsufficient value: I32(-2001)
static ::GlobalNamespace::OVRAnchor_ShareResult const FailureMappingInsufficient;

/// @brief Field FailureNetworkRequestFailed value: I32(-2004)
static ::GlobalNamespace::OVRAnchor_ShareResult const FailureNetworkRequestFailed;

/// @brief Field FailureNetworkTimeout value: I32(-2003)
static ::GlobalNamespace::OVRAnchor_ShareResult const FailureNetworkTimeout;

/// @brief Field FailureOperationFailed value: I32(-1006)
static ::GlobalNamespace::OVRAnchor_ShareResult const FailureOperationFailed;

/// @brief Field FailurePermissionInsufficient value: I32(-9003)
static ::GlobalNamespace::OVRAnchor_ShareResult const FailurePermissionInsufficient;

/// @brief Field FailureSharableComponentNotEnabled value: I32(-2006)
static ::GlobalNamespace::OVRAnchor_ShareResult const FailureSharableComponentNotEnabled;

/// @brief Field FailureUnsupported value: I32(-1004)
static ::GlobalNamespace::OVRAnchor_ShareResult const FailureUnsupported;

/// @brief Field Success value: I32(0)
static ::GlobalNamespace::OVRAnchor_ShareResult const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11810};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_ShareResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRAnchor_ShareResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
