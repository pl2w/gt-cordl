#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_ConfigureTrackerResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor_ConfigureTrackerResult)
// Forward declare root types
namespace GlobalNamespace {
struct OVRAnchor_ConfigureTrackerResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRAnchor_ConfigureTrackerResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRAnchor_ConfigureTrackerResult, "", "OVRAnchor/ConfigureTrackerResult");
// [OVRResultStatus]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/ConfigureTrackerResult
struct CORDL_TYPE OVRAnchor_ConfigureTrackerResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRAnchor_ConfigureTrackerResult_Unwrapped
enum struct __OVRAnchor_ConfigureTrackerResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_Failure = static_cast<int32_t>(0xfffffc18),
__E_Invalid = static_cast<int32_t>(0xfffffc10),
__E_NotSupported = static_cast<int32_t>(0xfffffc14),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRAnchor_ConfigureTrackerResult_Unwrapped () const noexcept {
return static_cast<__OVRAnchor_ConfigureTrackerResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRAnchor_ConfigureTrackerResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRAnchor_ConfigureTrackerResult(int32_t  value__) noexcept;

/// @brief Field Failure value: I32(-1000)
static ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult const Failure;

/// @brief Field Invalid value: I32(-1008)
static ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult const Invalid;

/// @brief Field NotSupported value: I32(-1004)
static ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult const NotSupported;

/// @brief Field Success value: I32(0)
static ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11822};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_ConfigureTrackerResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRAnchor_ConfigureTrackerResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
