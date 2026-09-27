#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK_LoadDeviceResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUK_LoadDeviceResult)
// Forward declare root types
namespace GlobalNamespace {
struct MRUK_LoadDeviceResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUK_LoadDeviceResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUK_LoadDeviceResult, "Meta.XR.MRUtilityKit", "MRUK/LoadDeviceResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUK/LoadDeviceResult
struct CORDL_TYPE MRUK_LoadDeviceResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MRUK_LoadDeviceResult_Unwrapped
enum struct __MRUK_LoadDeviceResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_NoScenePermission = static_cast<int32_t>(0x1),
__E_NoRoomsFound = static_cast<int32_t>(0x2),
__E_DiscoveryOngoing = static_cast<int32_t>(0x3),
__E_Failure = static_cast<int32_t>(0xfffffc18),
__E_StorageAtCapacity = static_cast<int32_t>(0xffffdcd7),
__E_NotInitialized = static_cast<int32_t>(0xfffffc16),
__E_FailureDataIsInvalid = static_cast<int32_t>(0xfffffc10),
__E_FailureInsufficientResources = static_cast<int32_t>(0xffffdcd8),
__E_FailureInsufficientView = static_cast<int32_t>(0xffffdcd6),
__E_FailurePermissionInsufficient = static_cast<int32_t>(0xffffdcd5),
__E_FailureRateLimited = static_cast<int32_t>(0xffffdcd4),
__E_FailureTooDark = static_cast<int32_t>(0xffffdcd3),
__E_FailureTooBright = static_cast<int32_t>(0xffffdcd2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MRUK_LoadDeviceResult_Unwrapped () const noexcept {
return static_cast<__MRUK_LoadDeviceResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MRUK_LoadDeviceResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MRUK_LoadDeviceResult(int32_t  value__) noexcept;

/// @brief Field DiscoveryOngoing value: I32(3)
static ::GlobalNamespace::MRUK_LoadDeviceResult const DiscoveryOngoing;

/// @brief Field Failure value: I32(-1000)
static ::GlobalNamespace::MRUK_LoadDeviceResult const Failure;

/// @brief Field FailureDataIsInvalid value: I32(-1008)
static ::GlobalNamespace::MRUK_LoadDeviceResult const FailureDataIsInvalid;

/// @brief Field FailureInsufficientResources value: I32(-9000)
static ::GlobalNamespace::MRUK_LoadDeviceResult const FailureInsufficientResources;

/// @brief Field FailureInsufficientView value: I32(-9002)
static ::GlobalNamespace::MRUK_LoadDeviceResult const FailureInsufficientView;

/// @brief Field FailurePermissionInsufficient value: I32(-9003)
static ::GlobalNamespace::MRUK_LoadDeviceResult const FailurePermissionInsufficient;

/// @brief Field FailureRateLimited value: I32(-9004)
static ::GlobalNamespace::MRUK_LoadDeviceResult const FailureRateLimited;

/// @brief Field FailureTooBright value: I32(-9006)
static ::GlobalNamespace::MRUK_LoadDeviceResult const FailureTooBright;

/// @brief Field FailureTooDark value: I32(-9005)
static ::GlobalNamespace::MRUK_LoadDeviceResult const FailureTooDark;

/// @brief Field NoRoomsFound value: I32(2)
static ::GlobalNamespace::MRUK_LoadDeviceResult const NoRoomsFound;

/// @brief Field NoScenePermission value: I32(1)
static ::GlobalNamespace::MRUK_LoadDeviceResult const NoScenePermission;

/// @brief Field NotInitialized value: I32(-1002)
static ::GlobalNamespace::MRUK_LoadDeviceResult const NotInitialized;

/// @brief Field StorageAtCapacity value: I32(-9001)
static ::GlobalNamespace::MRUK_LoadDeviceResult const StorageAtCapacity;

/// @brief Field Success value: I32(0)
static ::GlobalNamespace::MRUK_LoadDeviceResult const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25861};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUK_LoadDeviceResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUK_LoadDeviceResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
