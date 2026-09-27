#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/ForwardLights_InitParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ForwardLights_InitParams)
namespace UnityEngine::Rendering::Universal {
class LightCookieManager;
}
// Forward declare root types
namespace GlobalNamespace {
struct ForwardLights_InitParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ForwardLights_InitParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ForwardLights_InitParams, "UnityEngine.Rendering.Universal.Internal", "ForwardLights/InitParams");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Internal.ForwardLights/InitParams
struct CORDL_TYPE ForwardLights_InitParams {
public:
// Declarations
/// @brief Method Create, addr 0xb2d7d50, size 0x130, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ForwardLights_InitParams Create() ;

// Ctor Parameters []
// @brief default ctor
constexpr ForwardLights_InitParams() ;

// Ctor Parameters [CppParam { name: "lightCookieManager", ty: "::UnityEngine::Rendering::Universal::LightCookieManager*", modifiers: "", def_value: None, comment: None }, CppParam { name: "forwardPlus", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr ForwardLights_InitParams(::UnityEngine::Rendering::Universal::LightCookieManager*  lightCookieManager, bool  forwardPlus) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18725};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field lightCookieManager, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::LightCookieManager*  lightCookieManager;

/// @brief Field forwardPlus, offset: 0x8, size: 0x1, def value: None
 bool  forwardPlus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ForwardLights_InitParams, lightCookieManager) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForwardLights_InitParams, forwardPlus) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ForwardLights_InitParams) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
