#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams)
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceAmbientOcclusionSettings;
}
// Forward declare root types
namespace GlobalNamespace {
struct ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionPass/SSAOMaterialParams");
// Dependencies UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionPass/SSAOMaterialParams
struct CORDL_TYPE ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams {
public:
// Declarations
/// @brief Method Equals, addr 0xb2821a4, size 0xf0, virtual false, abstract: false, final false
inline bool Equals(::by_ref<::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>  other) ;

/// @brief Method .ctor, addr 0xb2820c4, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>  settings, bool  isOrthographic) ;

// Ctor Parameters []
// @brief default ctor
constexpr ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams() ;

// Ctor Parameters [CppParam { name: "orthographicCamera", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "aoBlueNoise", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "aoInterleavedGradient", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "sampleCountHigh", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "sampleCountMedium", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "sampleCountLow", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "sourceDepthNormals", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "sourceDepthHigh", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "sourceDepthMedium", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "sourceDepthLow", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "ssaoParams", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }]
constexpr ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams(bool  orthographicCamera, bool  aoBlueNoise, bool  aoInterleavedGradient, bool  sampleCountHigh, bool  sampleCountMedium, bool  sampleCountLow, bool  sourceDepthNormals, bool  sourceDepthHigh, bool  sourceDepthMedium, bool  sourceDepthLow, ::UnityEngine::Vector4  ssaoParams) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18522};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field orthographicCamera, offset: 0x0, size: 0x1, def value: None
 bool  orthographicCamera;

/// @brief Field aoBlueNoise, offset: 0x1, size: 0x1, def value: None
 bool  aoBlueNoise;

/// @brief Field aoInterleavedGradient, offset: 0x2, size: 0x1, def value: None
 bool  aoInterleavedGradient;

/// @brief Field sampleCountHigh, offset: 0x3, size: 0x1, def value: None
 bool  sampleCountHigh;

/// @brief Field sampleCountMedium, offset: 0x4, size: 0x1, def value: None
 bool  sampleCountMedium;

/// @brief Field sampleCountLow, offset: 0x5, size: 0x1, def value: None
 bool  sampleCountLow;

/// @brief Field sourceDepthNormals, offset: 0x6, size: 0x1, def value: None
 bool  sourceDepthNormals;

/// @brief Field sourceDepthHigh, offset: 0x7, size: 0x1, def value: None
 bool  sourceDepthHigh;

/// @brief Field sourceDepthMedium, offset: 0x8, size: 0x1, def value: None
 bool  sourceDepthMedium;

/// @brief Field sourceDepthLow, offset: 0x9, size: 0x1, def value: None
 bool  sourceDepthLow;

/// @brief Field ssaoParams, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Vector4  ssaoParams;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, orthographicCamera) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, aoBlueNoise) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, aoInterleavedGradient) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, sampleCountHigh) == 0x3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, sampleCountMedium) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, sampleCountLow) == 0x5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, sourceDepthNormals) == 0x6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, sourceDepthHigh) == 0x7, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, sourceDepthMedium) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, sourceDepthLow) == 0x9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, ssaoParams) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
