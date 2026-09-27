#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRLoaderBase_LoaderState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRLoaderBase_LoaderState)
// Forward declare root types
namespace GlobalNamespace {
struct OpenXRLoaderBase_LoaderState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OpenXRLoaderBase_LoaderState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OpenXRLoaderBase_LoaderState, "UnityEngine.XR.OpenXR", "OpenXRLoaderBase/LoaderState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRLoaderBase/LoaderState
struct CORDL_TYPE OpenXRLoaderBase_LoaderState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpenXRLoaderBase_LoaderState_Unwrapped
enum struct __OpenXRLoaderBase_LoaderState_Unwrapped : int32_t {
__E_Uninitialized = static_cast<int32_t>(0x0),
__E_InitializeAttempted = static_cast<int32_t>(0x1),
__E_Initialized = static_cast<int32_t>(0x2),
__E_StartAttempted = static_cast<int32_t>(0x3),
__E_Started = static_cast<int32_t>(0x4),
__E_StopAttempted = static_cast<int32_t>(0x5),
__E_Stopped = static_cast<int32_t>(0x6),
__E_DeinitializeAttempted = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpenXRLoaderBase_LoaderState_Unwrapped () const noexcept {
return static_cast<__OpenXRLoaderBase_LoaderState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpenXRLoaderBase_LoaderState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OpenXRLoaderBase_LoaderState(int32_t  value__) noexcept;

/// @brief Field DeinitializeAttempted value: I32(7)
static ::GlobalNamespace::OpenXRLoaderBase_LoaderState const DeinitializeAttempted;

/// @brief Field InitializeAttempted value: I32(1)
static ::GlobalNamespace::OpenXRLoaderBase_LoaderState const InitializeAttempted;

/// @brief Field Initialized value: I32(2)
static ::GlobalNamespace::OpenXRLoaderBase_LoaderState const Initialized;

/// @brief Field StartAttempted value: I32(3)
static ::GlobalNamespace::OpenXRLoaderBase_LoaderState const StartAttempted;

/// @brief Field Started value: I32(4)
static ::GlobalNamespace::OpenXRLoaderBase_LoaderState const Started;

/// @brief Field StopAttempted value: I32(5)
static ::GlobalNamespace::OpenXRLoaderBase_LoaderState const StopAttempted;

/// @brief Field Stopped value: I32(6)
static ::GlobalNamespace::OpenXRLoaderBase_LoaderState const Stopped;

/// @brief Field Uninitialized value: I32(0)
static ::GlobalNamespace::OpenXRLoaderBase_LoaderState const Uninitialized;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27278};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OpenXRLoaderBase_LoaderState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OpenXRLoaderBase_LoaderState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
