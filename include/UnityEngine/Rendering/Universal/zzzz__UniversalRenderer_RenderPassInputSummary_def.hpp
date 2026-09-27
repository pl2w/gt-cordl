#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderer_RenderPassInputSummary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UniversalRenderer_RenderPassInputSummary)
// Forward declare root types
namespace GlobalNamespace {
struct UniversalRenderer_RenderPassInputSummary;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniversalRenderer_RenderPassInputSummary);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniversalRenderer_RenderPassInputSummary, "UnityEngine.Rendering.Universal", "UniversalRenderer/RenderPassInputSummary");
// Dependencies UnityEngine.Rendering.Universal.RenderPassEvent
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/RenderPassInputSummary
struct CORDL_TYPE UniversalRenderer_RenderPassInputSummary {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UniversalRenderer_RenderPassInputSummary() ;

// Ctor Parameters [CppParam { name: "requiresDepthTexture", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "requiresDepthPrepass", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "requiresNormalsTexture", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "requiresColorTexture", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "requiresMotionVectors", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "requiresDepthNormalAtEvent", ty: "::UnityEngine::Rendering::Universal::RenderPassEvent", modifiers: "", def_value: None, comment: None }, CppParam { name: "requiresDepthTextureEarliestEvent", ty: "::UnityEngine::Rendering::Universal::RenderPassEvent", modifiers: "", def_value: None, comment: None }]
constexpr UniversalRenderer_RenderPassInputSummary(bool  requiresDepthTexture, bool  requiresDepthPrepass, bool  requiresNormalsTexture, bool  requiresColorTexture, bool  requiresMotionVectors, ::UnityEngine::Rendering::Universal::RenderPassEvent  requiresDepthNormalAtEvent, ::UnityEngine::Rendering::Universal::RenderPassEvent  requiresDepthTextureEarliestEvent) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18660};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field requiresDepthTexture, offset: 0x0, size: 0x1, def value: None
 bool  requiresDepthTexture;

/// @brief Field requiresDepthPrepass, offset: 0x1, size: 0x1, def value: None
 bool  requiresDepthPrepass;

/// @brief Field requiresNormalsTexture, offset: 0x2, size: 0x1, def value: None
 bool  requiresNormalsTexture;

/// @brief Field requiresColorTexture, offset: 0x3, size: 0x1, def value: None
 bool  requiresColorTexture;

/// @brief Field requiresMotionVectors, offset: 0x4, size: 0x1, def value: None
 bool  requiresMotionVectors;

/// @brief Field requiresDepthNormalAtEvent, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::Rendering::Universal::RenderPassEvent  requiresDepthNormalAtEvent;

/// @brief Field requiresDepthTextureEarliestEvent, offset: 0xc, size: 0x4, def value: None
 ::UnityEngine::Rendering::Universal::RenderPassEvent  requiresDepthTextureEarliestEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniversalRenderer_RenderPassInputSummary, requiresDepthTexture) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniversalRenderer_RenderPassInputSummary, requiresDepthPrepass) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniversalRenderer_RenderPassInputSummary, requiresNormalsTexture) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniversalRenderer_RenderPassInputSummary, requiresColorTexture) == 0x3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniversalRenderer_RenderPassInputSummary, requiresMotionVectors) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniversalRenderer_RenderPassInputSummary, requiresDepthNormalAtEvent) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniversalRenderer_RenderPassInputSummary, requiresDepthTextureEarliestEvent) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniversalRenderer_RenderPassInputSummary) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
