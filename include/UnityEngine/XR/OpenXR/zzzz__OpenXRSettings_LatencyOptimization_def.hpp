#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRSettings_LatencyOptimization.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRSettings_LatencyOptimization)
// Forward declare root types
namespace GlobalNamespace {
struct OpenXRSettings_LatencyOptimization;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OpenXRSettings_LatencyOptimization);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OpenXRSettings_LatencyOptimization, "UnityEngine.XR.OpenXR", "OpenXRSettings/LatencyOptimization");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/LatencyOptimization
struct CORDL_TYPE OpenXRSettings_LatencyOptimization {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpenXRSettings_LatencyOptimization_Unwrapped
enum struct __OpenXRSettings_LatencyOptimization_Unwrapped : int32_t {
__E_PrioritizeRendering = static_cast<int32_t>(0x0),
__E_PrioritizeInputPolling = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpenXRSettings_LatencyOptimization_Unwrapped () const noexcept {
return static_cast<__OpenXRSettings_LatencyOptimization_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpenXRSettings_LatencyOptimization() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OpenXRSettings_LatencyOptimization(int32_t  value__) noexcept;

/// @brief Field PrioritizeInputPolling value: I32(1)
static ::GlobalNamespace::OpenXRSettings_LatencyOptimization const PrioritizeInputPolling;

/// @brief Field PrioritizeRendering value: I32(0)
static ::GlobalNamespace::OpenXRSettings_LatencyOptimization const PrioritizeRendering;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27263};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OpenXRSettings_LatencyOptimization, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OpenXRSettings_LatencyOptimization) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
