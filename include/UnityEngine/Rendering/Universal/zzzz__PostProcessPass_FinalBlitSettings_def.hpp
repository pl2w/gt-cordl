#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessPass_FinalBlitSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_Operation_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PostProcessPass_FinalBlitSettings)
// Forward declare root types
namespace GlobalNamespace {
struct PostProcessPass_FinalBlitSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PostProcessPass_FinalBlitSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PostProcessPass_FinalBlitSettings, "UnityEngine.Rendering.Universal", "PostProcessPass/FinalBlitSettings");
// Dependencies UnityEngine.Rendering.HDROutputUtils::Operation
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/FinalBlitSettings
struct CORDL_TYPE PostProcessPass_FinalBlitSettings {
public:
// Declarations
/// @brief Method Create, addr 0xb279f0c, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PostProcessPass_FinalBlitSettings Create() ;

// Ctor Parameters []
// @brief default ctor
constexpr PostProcessPass_FinalBlitSettings() ;

// Ctor Parameters [CppParam { name: "isFxaaEnabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isFsrEnabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isTaaSharpeningEnabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "requireHDROutput", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "resolveToDebugScreen", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isAlphaOutputEnabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hdrOperations", ty: "::GlobalNamespace::HDROutputUtils_Operation", modifiers: "", def_value: None, comment: None }]
constexpr PostProcessPass_FinalBlitSettings(bool  isFxaaEnabled, bool  isFsrEnabled, bool  isTaaSharpeningEnabled, bool  requireHDROutput, bool  resolveToDebugScreen, bool  isAlphaOutputEnabled, ::GlobalNamespace::HDROutputUtils_Operation  hdrOperations) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18508};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field isFxaaEnabled, offset: 0x0, size: 0x1, def value: None
 bool  isFxaaEnabled;

/// @brief Field isFsrEnabled, offset: 0x1, size: 0x1, def value: None
 bool  isFsrEnabled;

/// @brief Field isTaaSharpeningEnabled, offset: 0x2, size: 0x1, def value: None
 bool  isTaaSharpeningEnabled;

/// @brief Field requireHDROutput, offset: 0x3, size: 0x1, def value: None
 bool  requireHDROutput;

/// @brief Field resolveToDebugScreen, offset: 0x4, size: 0x1, def value: None
 bool  resolveToDebugScreen;

/// @brief Field isAlphaOutputEnabled, offset: 0x5, size: 0x1, def value: None
 bool  isAlphaOutputEnabled;

/// @brief Field hdrOperations, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::HDROutputUtils_Operation  hdrOperations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PostProcessPass_FinalBlitSettings, isFxaaEnabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessPass_FinalBlitSettings, isFsrEnabled) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessPass_FinalBlitSettings, isTaaSharpeningEnabled) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessPass_FinalBlitSettings, requireHDROutput) == 0x3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessPass_FinalBlitSettings, resolveToDebugScreen) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessPass_FinalBlitSettings, isAlphaOutputEnabled) == 0x5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessPass_FinalBlitSettings, hdrOperations) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PostProcessPass_FinalBlitSettings) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
