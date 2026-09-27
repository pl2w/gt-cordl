#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKNativeFuncs_MrukResult)
// Forward declare root types
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKNativeFuncs_MrukResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKNativeFuncs_MrukResult, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukResult
struct CORDL_TYPE MRUKNativeFuncs_MrukResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MRUKNativeFuncs_MrukResult_Unwrapped
enum struct __MRUKNativeFuncs_MrukResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_ErrorInvalidArgs = static_cast<int32_t>(0x1),
__E_ErrorUnknown = static_cast<int32_t>(0x2),
__E_ErrorInternal = static_cast<int32_t>(0x3),
__E_ErrorDiscoveryOngoing = static_cast<int32_t>(0x4),
__E_ErrorInvalidJson = static_cast<int32_t>(0x5),
__E_ErrorNoRoomsFound = static_cast<int32_t>(0x6),
__E_ErrorInsufficientResources = static_cast<int32_t>(0x7),
__E_ErrorStorageAtCapacity = static_cast<int32_t>(0x8),
__E_ErrorInsufficientView = static_cast<int32_t>(0x9),
__E_ErrorPermissionInsufficient = static_cast<int32_t>(0xa),
__E_ErrorRateLimited = static_cast<int32_t>(0xb),
__E_ErrorTooDark = static_cast<int32_t>(0xc),
__E_ErrorTooBright = static_cast<int32_t>(0xd),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MRUKNativeFuncs_MrukResult_Unwrapped () const noexcept {
return static_cast<__MRUKNativeFuncs_MrukResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MRUKNativeFuncs_MrukResult(int32_t  value__) noexcept;

/// @brief Field ErrorDiscoveryOngoing value: I32(4)
static ::GlobalNamespace::MRUKNativeFuncs_MrukResult const ErrorDiscoveryOngoing;

/// @brief Field ErrorInsufficientResources value: I32(7)
static ::GlobalNamespace::MRUKNativeFuncs_MrukResult const ErrorInsufficientResources;

/// @brief Field ErrorInsufficientView value: I32(9)
static ::GlobalNamespace::MRUKNativeFuncs_MrukResult const ErrorInsufficientView;

/// @brief Field ErrorInternal value: I32(3)
static ::GlobalNamespace::MRUKNativeFuncs_MrukResult const ErrorInternal;

/// @brief Field ErrorInvalidArgs value: I32(1)
static ::GlobalNamespace::MRUKNativeFuncs_MrukResult const ErrorInvalidArgs;

/// @brief Field ErrorInvalidJson value: I32(5)
static ::GlobalNamespace::MRUKNativeFuncs_MrukResult const ErrorInvalidJson;

/// @brief Field ErrorNoRoomsFound value: I32(6)
static ::GlobalNamespace::MRUKNativeFuncs_MrukResult const ErrorNoRoomsFound;

/// @brief Field ErrorPermissionInsufficient value: I32(10)
static ::GlobalNamespace::MRUKNativeFuncs_MrukResult const ErrorPermissionInsufficient;

/// @brief Field ErrorRateLimited value: I32(11)
static ::GlobalNamespace::MRUKNativeFuncs_MrukResult const ErrorRateLimited;

/// @brief Field ErrorStorageAtCapacity value: I32(8)
static ::GlobalNamespace::MRUKNativeFuncs_MrukResult const ErrorStorageAtCapacity;

/// @brief Field ErrorTooBright value: I32(13)
static ::GlobalNamespace::MRUKNativeFuncs_MrukResult const ErrorTooBright;

/// @brief Field ErrorTooDark value: I32(12)
static ::GlobalNamespace::MRUKNativeFuncs_MrukResult const ErrorTooDark;

/// @brief Field ErrorUnknown value: I32(2)
static ::GlobalNamespace::MRUKNativeFuncs_MrukResult const ErrorUnknown;

/// @brief Field Success value: I32(0)
static ::GlobalNamespace::MRUKNativeFuncs_MrukResult const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25783};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKNativeFuncs_MrukResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
