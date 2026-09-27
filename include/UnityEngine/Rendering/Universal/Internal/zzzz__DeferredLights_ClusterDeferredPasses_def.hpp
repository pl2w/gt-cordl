#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/DeferredLights_ClusterDeferredPasses.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeferredLights_ClusterDeferredPasses)
// Forward declare root types
namespace GlobalNamespace {
struct DeferredLights_ClusterDeferredPasses;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DeferredLights_ClusterDeferredPasses);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeferredLights_ClusterDeferredPasses, "UnityEngine.Rendering.Universal.Internal", "DeferredLights/ClusterDeferredPasses");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Internal.DeferredLights/ClusterDeferredPasses
struct CORDL_TYPE DeferredLights_ClusterDeferredPasses {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DeferredLights_ClusterDeferredPasses_Unwrapped
enum struct __DeferredLights_ClusterDeferredPasses_Unwrapped : int32_t {
__E_ClusteredLightsLit = static_cast<int32_t>(0x0),
__E_ClusteredLightsSimpleLit = static_cast<int32_t>(0x1),
__E_Fog = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DeferredLights_ClusterDeferredPasses_Unwrapped () const noexcept {
return static_cast<__DeferredLights_ClusterDeferredPasses_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DeferredLights_ClusterDeferredPasses() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DeferredLights_ClusterDeferredPasses(int32_t  value__) noexcept;

/// @brief Field ClusteredLightsLit value: I32(0)
static ::GlobalNamespace::DeferredLights_ClusterDeferredPasses const ClusteredLightsLit;

/// @brief Field ClusteredLightsSimpleLit value: I32(1)
static ::GlobalNamespace::DeferredLights_ClusterDeferredPasses const ClusteredLightsSimpleLit;

/// @brief Field Fog value: I32(2)
static ::GlobalNamespace::DeferredLights_ClusterDeferredPasses const Fog;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18715};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeferredLights_ClusterDeferredPasses, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeferredLights_ClusterDeferredPasses) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
