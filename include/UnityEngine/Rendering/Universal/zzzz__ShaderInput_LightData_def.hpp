#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShaderInput_LightData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderInput_LightData)
// Forward declare root types
namespace GlobalNamespace {
struct ShaderInput_LightData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ShaderInput_LightData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShaderInput_LightData, "UnityEngine.Rendering.Universal", "ShaderInput/LightData");
// [GenerateHLSL((UnityEngine.Rendering.PackingRules)0, false, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.universal@bc6f352be672\\ShaderLibrary\\ShaderTypes.cs")]
// Dependencies UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ShaderInput/LightData
struct CORDL_TYPE ShaderInput_LightData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ShaderInput_LightData() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "attenuation", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "spotDirection", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "occlusionProbeChannels", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "layerMask", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr ShaderInput_LightData(::UnityEngine::Vector4  position, ::UnityEngine::Vector4  color, ::UnityEngine::Vector4  attenuation, ::UnityEngine::Vector4  spotDirection, ::UnityEngine::Vector4  occlusionProbeChannels, uint32_t  layerMask) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33041};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x54};

/// @brief Field position, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Vector4  position;

/// @brief Field color, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Vector4  color;

/// @brief Field attenuation, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Vector4  attenuation;

/// @brief Field spotDirection, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Vector4  spotDirection;

/// @brief Field occlusionProbeChannels, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Vector4  occlusionProbeChannels;

/// @brief Field layerMask, offset: 0x50, size: 0x4, def value: None
 uint32_t  layerMask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShaderInput_LightData, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderInput_LightData, color) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderInput_LightData, attenuation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderInput_LightData, spotDirection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderInput_LightData, occlusionProbeChannels) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderInput_LightData, layerMask) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ShaderInput_LightData) == 0x54, "Size mismatch!");

} // namespace end def GlobalNamespace
