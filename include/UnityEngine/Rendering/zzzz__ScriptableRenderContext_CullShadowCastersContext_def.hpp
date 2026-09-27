#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ScriptableRenderContext_CullShadowCastersContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRenderContext_CullShadowCastersContext)
namespace UnityEngine::Rendering {
struct LightShadowCasterCullingInfo;
}
namespace UnityEngine::Rendering {
struct ShadowSplitData;
}
// Forward declare root types
namespace GlobalNamespace {
struct ScriptableRenderContext_CullShadowCastersContext;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScriptableRenderContext_CullShadowCastersContext);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScriptableRenderContext_CullShadowCastersContext, "UnityEngine.Rendering", "ScriptableRenderContext/CullShadowCastersContext");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ScriptableRenderContext/CullShadowCastersContext
struct CORDL_TYPE ScriptableRenderContext_CullShadowCastersContext {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableRenderContext_CullShadowCastersContext() ;

// Ctor Parameters [CppParam { name: "cullResults", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "splitBuffer", ty: "::UnityEngine::Rendering::ShadowSplitData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "splitBufferLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "perLightInfos", ty: "::UnityEngine::Rendering::LightShadowCasterCullingInfo*", modifiers: "", def_value: None, comment: None }, CppParam { name: "perLightInfoCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScriptableRenderContext_CullShadowCastersContext(::System::IntPtr  cullResults, ::UnityEngine::Rendering::ShadowSplitData*  splitBuffer, int32_t  splitBufferLength, ::UnityEngine::Rendering::LightShadowCasterCullingInfo*  perLightInfos, int32_t  perLightInfoCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15564};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field cullResults, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  cullResults;

/// @brief Field splitBuffer, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Rendering::ShadowSplitData*  splitBuffer;

/// @brief Field splitBufferLength, offset: 0x10, size: 0x4, def value: None
 int32_t  splitBufferLength;

/// @brief Field perLightInfos, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::LightShadowCasterCullingInfo*  perLightInfos;

/// @brief Field perLightInfoCount, offset: 0x20, size: 0x4, def value: None
 int32_t  perLightInfoCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScriptableRenderContext_CullShadowCastersContext, cullResults) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScriptableRenderContext_CullShadowCastersContext, splitBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScriptableRenderContext_CullShadowCastersContext, splitBufferLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScriptableRenderContext_CullShadowCastersContext, perLightInfos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScriptableRenderContext_CullShadowCastersContext, perLightInfoCount) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScriptableRenderContext_CullShadowCastersContext) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
