#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/STP_Config.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__STP_PerViewConfig_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(STP_Config)
namespace GlobalNamespace {
struct STP_PerViewConfig;
}
namespace UnityEngine::Rendering {
class STP_HistoryContext;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct STP_Config;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::STP_Config);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::STP_Config, "UnityEngine.Rendering", "STP/Config");
// Dependencies UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.STP::PerViewConfig, UnityEngine.Vector2Int
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.STP/Config
struct CORDL_TYPE STP_Config {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr STP_Config() ;

// Ctor Parameters [CppParam { name: "noiseTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }, CppParam { name: "inputColor", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "inputDepth", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "inputMotion", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "inputStencil", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "debugView", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "destination", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "historyContext", ty: "::UnityEngine::Rendering::STP_HistoryContext*", modifiers: "", def_value: None, comment: None }, CppParam { name: "enableHwDrs", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "enableTexArray", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "enableMotionScaling", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "nearPlane", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "farPlane", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "frameIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasValidHistory", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "stencilMask", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "debugViewIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "deltaTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastDeltaTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentImageSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "priorImageSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "outputImageSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "numActiveViews", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "perViewConfigs", ty: "::ArrayW<::GlobalNamespace::STP_PerViewConfig>", modifiers: "", def_value: None, comment: None }]
constexpr STP_Config(::UnityW<::UnityEngine::Texture2D>  noiseTexture, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  inputColor, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  inputDepth, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  inputMotion, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  inputStencil, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  debugView, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  destination, ::UnityEngine::Rendering::STP_HistoryContext*  historyContext, bool  enableHwDrs, bool  enableTexArray, bool  enableMotionScaling, float_t  nearPlane, float_t  farPlane, int32_t  frameIndex, bool  hasValidHistory, int32_t  stencilMask, int32_t  debugViewIndex, float_t  deltaTime, float_t  lastDeltaTime, ::UnityEngine::Vector2Int  currentImageSize, ::UnityEngine::Vector2Int  priorImageSize, ::UnityEngine::Vector2Int  outputImageSize, int32_t  numActiveViews, ::ArrayW<::GlobalNamespace::STP_PerViewConfig>  perViewConfigs) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16941};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb8};

/// @brief Field noiseTexture, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  noiseTexture;

/// @brief Field inputColor, offset: 0x8, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  inputColor;

/// @brief Field inputDepth, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  inputDepth;

/// @brief Field inputMotion, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  inputMotion;

/// @brief Field inputStencil, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  inputStencil;

/// @brief Field debugView, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  debugView;

/// @brief Field destination, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  destination;

/// @brief Field historyContext, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Rendering::STP_HistoryContext*  historyContext;

/// @brief Field enableHwDrs, offset: 0x70, size: 0x1, def value: None
 bool  enableHwDrs;

/// @brief Field enableTexArray, offset: 0x71, size: 0x1, def value: None
 bool  enableTexArray;

/// @brief Field enableMotionScaling, offset: 0x72, size: 0x1, def value: None
 bool  enableMotionScaling;

/// @brief Field nearPlane, offset: 0x74, size: 0x4, def value: None
 float_t  nearPlane;

/// @brief Field farPlane, offset: 0x78, size: 0x4, def value: None
 float_t  farPlane;

/// @brief Field frameIndex, offset: 0x7c, size: 0x4, def value: None
 int32_t  frameIndex;

/// @brief Field hasValidHistory, offset: 0x80, size: 0x1, def value: None
 bool  hasValidHistory;

/// @brief Field stencilMask, offset: 0x84, size: 0x4, def value: None
 int32_t  stencilMask;

/// @brief Field debugViewIndex, offset: 0x88, size: 0x4, def value: None
 int32_t  debugViewIndex;

/// @brief Field deltaTime, offset: 0x8c, size: 0x4, def value: None
 float_t  deltaTime;

/// @brief Field lastDeltaTime, offset: 0x90, size: 0x4, def value: None
 float_t  lastDeltaTime;

/// @brief Field currentImageSize, offset: 0x94, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  currentImageSize;

/// @brief Field priorImageSize, offset: 0x9c, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  priorImageSize;

/// @brief Field outputImageSize, offset: 0xa4, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  outputImageSize;

/// @brief Field numActiveViews, offset: 0xac, size: 0x4, def value: None
 int32_t  numActiveViews;

/// @brief Field perViewConfigs, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::STP_PerViewConfig>  perViewConfigs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::STP_Config, noiseTexture) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, inputColor) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, inputDepth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, inputMotion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, inputStencil) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, debugView) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, destination) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, historyContext) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, enableHwDrs) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, enableTexArray) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, enableMotionScaling) == 0x72, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, nearPlane) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, farPlane) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, frameIndex) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, hasValidHistory) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, stencilMask) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, debugViewIndex) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, deltaTime) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, lastDeltaTime) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, currentImageSize) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, priorImageSize) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, outputImageSize) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, numActiveViews) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_Config, perViewConfigs) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::STP_Config) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
