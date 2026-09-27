#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager_LoadSceneModelResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneManager_LoadSceneModelResult)
// Forward declare root types
namespace GlobalNamespace {
struct OVRSceneManager_LoadSceneModelResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSceneManager_LoadSceneModelResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneManager_LoadSceneModelResult, "", "OVRSceneManager/LoadSceneModelResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/LoadSceneModelResult
struct CORDL_TYPE OVRSceneManager_LoadSceneModelResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRSceneManager_LoadSceneModelResult_Unwrapped
enum struct __OVRSceneManager_LoadSceneModelResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_NoSceneModelToLoad = static_cast<int32_t>(0x1),
__E_FailureScenePermissionNotGranted = static_cast<int32_t>(0xffffffff),
__E_FailureUnexpectedError = static_cast<int32_t>(0xfffffffe),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRSceneManager_LoadSceneModelResult_Unwrapped () const noexcept {
return static_cast<__OVRSceneManager_LoadSceneModelResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager_LoadSceneModelResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRSceneManager_LoadSceneModelResult(int32_t  value__) noexcept;

/// @brief Field FailureScenePermissionNotGranted value: I32(-1)
static ::GlobalNamespace::OVRSceneManager_LoadSceneModelResult const FailureScenePermissionNotGranted;

/// @brief Field FailureUnexpectedError value: I32(-2)
static ::GlobalNamespace::OVRSceneManager_LoadSceneModelResult const FailureUnexpectedError;

/// @brief Field NoSceneModelToLoad value: I32(1)
static ::GlobalNamespace::OVRSceneManager_LoadSceneModelResult const NoSceneModelToLoad;

/// @brief Field Success value: I32(0)
static ::GlobalNamespace::OVRSceneManager_LoadSceneModelResult const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12415};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager_LoadSceneModelResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneManager_LoadSceneModelResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
