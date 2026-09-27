#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/DeferredLights_InitParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(DeferredLights_InitParams)
namespace UnityEngine::Rendering::Universal {
class LightCookieManager;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
struct DeferredLights_InitParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DeferredLights_InitParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeferredLights_InitParams, "UnityEngine.Rendering.Universal.Internal", "DeferredLights/InitParams");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Internal.DeferredLights/InitParams
struct CORDL_TYPE DeferredLights_InitParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DeferredLights_InitParams() ;

// Ctor Parameters [CppParam { name: "stencilDeferredMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "clusterDeferredMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "lightCookieManager", ty: "::UnityEngine::Rendering::Universal::LightCookieManager*", modifiers: "", def_value: None, comment: None }, CppParam { name: "deferredPlus", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr DeferredLights_InitParams(::UnityW<::UnityEngine::Material>  stencilDeferredMaterial, ::UnityW<::UnityEngine::Material>  clusterDeferredMaterial, ::UnityEngine::Rendering::Universal::LightCookieManager*  lightCookieManager, bool  deferredPlus) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18716};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field stencilDeferredMaterial, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  stencilDeferredMaterial;

/// @brief Field clusterDeferredMaterial, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  clusterDeferredMaterial;

/// @brief Field lightCookieManager, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::LightCookieManager*  lightCookieManager;

/// @brief Field deferredPlus, offset: 0x18, size: 0x1, def value: None
 bool  deferredPlus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeferredLights_InitParams, stencilDeferredMaterial) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeferredLights_InitParams, clusterDeferredMaterial) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeferredLights_InitParams, lightCookieManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeferredLights_InitParams, deferredPlus) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeferredLights_InitParams) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
