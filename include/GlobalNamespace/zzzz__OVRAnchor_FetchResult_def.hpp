#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_FetchResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor_FetchResult)
// Forward declare root types
namespace GlobalNamespace {
struct OVRAnchor_FetchResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRAnchor_FetchResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRAnchor_FetchResult, "", "OVRAnchor/FetchResult");
// [OVRResultStatus]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/FetchResult
struct CORDL_TYPE OVRAnchor_FetchResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRAnchor_FetchResult_Unwrapped
enum struct __OVRAnchor_FetchResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_Failure = static_cast<int32_t>(0xfffffc18),
__E_FailureDataIsInvalid = static_cast<int32_t>(0xfffffc10),
__E_FailureInvalidOption = static_cast<int32_t>(0xfffffc17),
__E_FailureInsufficientResources = static_cast<int32_t>(0xffffdcd8),
__E_FailureInsufficientView = static_cast<int32_t>(0xffffdcd6),
__E_FailurePermissionInsufficient = static_cast<int32_t>(0xffffdcd5),
__E_FailureRateLimited = static_cast<int32_t>(0xffffdcd4),
__E_FailureTooDark = static_cast<int32_t>(0xffffdcd3),
__E_FailureTooBright = static_cast<int32_t>(0xffffdcd2),
__E_FailureUnsupported = static_cast<int32_t>(0xfffffc14),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRAnchor_FetchResult_Unwrapped () const noexcept {
return static_cast<__OVRAnchor_FetchResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRAnchor_FetchResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRAnchor_FetchResult(int32_t  value__) noexcept;

/// @brief Field Failure value: I32(-1000)
static ::GlobalNamespace::OVRAnchor_FetchResult const Failure;

/// @brief Field FailureDataIsInvalid value: I32(-1008)
static ::GlobalNamespace::OVRAnchor_FetchResult const FailureDataIsInvalid;

/// @brief Field FailureInsufficientResources value: I32(-9000)
static ::GlobalNamespace::OVRAnchor_FetchResult const FailureInsufficientResources;

/// @brief Field FailureInsufficientView value: I32(-9002)
static ::GlobalNamespace::OVRAnchor_FetchResult const FailureInsufficientView;

/// @brief Field FailureInvalidOption value: I32(-1001)
static ::GlobalNamespace::OVRAnchor_FetchResult const FailureInvalidOption;

/// @brief Field FailurePermissionInsufficient value: I32(-9003)
static ::GlobalNamespace::OVRAnchor_FetchResult const FailurePermissionInsufficient;

/// @brief Field FailureRateLimited value: I32(-9004)
static ::GlobalNamespace::OVRAnchor_FetchResult const FailureRateLimited;

/// @brief Field FailureTooBright value: I32(-9006)
static ::GlobalNamespace::OVRAnchor_FetchResult const FailureTooBright;

/// @brief Field FailureTooDark value: I32(-9005)
static ::GlobalNamespace::OVRAnchor_FetchResult const FailureTooDark;

/// @brief Field FailureUnsupported value: I32(-1004)
static ::GlobalNamespace::OVRAnchor_FetchResult const FailureUnsupported;

/// @brief Field Success value: I32(0)
static ::GlobalNamespace::OVRAnchor_FetchResult const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11809};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_FetchResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRAnchor_FetchResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
