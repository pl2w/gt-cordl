#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/DeferredLights_StencilDeferredPasses.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeferredLights_StencilDeferredPasses)
// Forward declare root types
namespace GlobalNamespace {
struct DeferredLights_StencilDeferredPasses;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DeferredLights_StencilDeferredPasses);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeferredLights_StencilDeferredPasses, "UnityEngine.Rendering.Universal.Internal", "DeferredLights/StencilDeferredPasses");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Internal.DeferredLights/StencilDeferredPasses
struct CORDL_TYPE DeferredLights_StencilDeferredPasses {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DeferredLights_StencilDeferredPasses_Unwrapped
enum struct __DeferredLights_StencilDeferredPasses_Unwrapped : int32_t {
__E_StencilVolume = static_cast<int32_t>(0x0),
__E_PunctualLit = static_cast<int32_t>(0x1),
__E_PunctualSimpleLit = static_cast<int32_t>(0x2),
__E_DirectionalLit = static_cast<int32_t>(0x3),
__E_DirectionalSimpleLit = static_cast<int32_t>(0x4),
__E_Fog = static_cast<int32_t>(0x5),
__E_SSAOOnly = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DeferredLights_StencilDeferredPasses_Unwrapped () const noexcept {
return static_cast<__DeferredLights_StencilDeferredPasses_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DeferredLights_StencilDeferredPasses() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DeferredLights_StencilDeferredPasses(int32_t  value__) noexcept;

/// @brief Field DirectionalLit value: I32(3)
static ::GlobalNamespace::DeferredLights_StencilDeferredPasses const DirectionalLit;

/// @brief Field DirectionalSimpleLit value: I32(4)
static ::GlobalNamespace::DeferredLights_StencilDeferredPasses const DirectionalSimpleLit;

/// @brief Field Fog value: I32(5)
static ::GlobalNamespace::DeferredLights_StencilDeferredPasses const Fog;

/// @brief Field PunctualLit value: I32(1)
static ::GlobalNamespace::DeferredLights_StencilDeferredPasses const PunctualLit;

/// @brief Field PunctualSimpleLit value: I32(2)
static ::GlobalNamespace::DeferredLights_StencilDeferredPasses const PunctualSimpleLit;

/// @brief Field SSAOOnly value: I32(6)
static ::GlobalNamespace::DeferredLights_StencilDeferredPasses const SSAOOnly;

/// @brief Field StencilVolume value: I32(0)
static ::GlobalNamespace::DeferredLights_StencilDeferredPasses const StencilVolume;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18714};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeferredLights_StencilDeferredPasses, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeferredLights_StencilDeferredPasses) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
