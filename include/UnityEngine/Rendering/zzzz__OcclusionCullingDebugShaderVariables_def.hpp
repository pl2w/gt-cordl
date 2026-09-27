#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionCullingDebugShaderVariables.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__OcclusionCullingDebugShaderVariables___OccluderMipBounds_e__FixedBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OcclusionCullingDebugShaderVariables)
namespace GlobalNamespace {
struct OcclusionCullingDebugShaderVariables___OccluderMipBounds_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct OcclusionCullingDebugShaderVariables;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables, "UnityEngine.Rendering", "OcclusionCullingDebugShaderVariables");
// [GenerateHLSL((UnityEngine.Rendering.PackingRules)0, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@04755ad51d99\\Runtime\\GPUDriven\\OcclusionCullingDebugShaderVariables.cs", needAccessors = false, generateCBuffer = true)]
// Dependencies UnityEngine.Rendering.OcclusionCullingDebugShaderVariables::<_OccluderMipBounds>e__FixedBuffer, UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OcclusionCullingDebugShaderVariables
struct CORDL_TYPE OcclusionCullingDebugShaderVariables {
public:
// Declarations
using __OccluderMipBounds_e__FixedBuffer = ::GlobalNamespace::OcclusionCullingDebugShaderVariables___OccluderMipBounds_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr OcclusionCullingDebugShaderVariables() ;

// Ctor Parameters [CppParam { name: "_DepthSizeInOccluderPixels", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OccluderMipBounds", ty: "::GlobalNamespace::OcclusionCullingDebugShaderVariables___OccluderMipBounds_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OccluderMipLayoutSizeX", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OccluderMipLayoutSizeY", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OcclusionCullingDebugPad0", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OcclusionCullingDebugPad1", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr OcclusionCullingDebugShaderVariables(::UnityEngine::Vector4  _DepthSizeInOccluderPixels, ::GlobalNamespace::OcclusionCullingDebugShaderVariables___OccluderMipBounds_e__FixedBuffer  _OccluderMipBounds, uint32_t  _OccluderMipLayoutSizeX, uint32_t  _OccluderMipLayoutSizeY, uint32_t  _OcclusionCullingDebugPad0, uint32_t  _OcclusionCullingDebugPad1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26718};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa0};

/// @brief Field _DepthSizeInOccluderPixels, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Vector4  _DepthSizeInOccluderPixels;

/// [FixedBuffer(typeof(System.UInt32), 32)]
/// [HLSLArray(8, typeof(UnityEngine.Rendering.ShaderGenUInt4))]
/// @brief Field _OccluderMipBounds, offset: 0x10, size: 0x80, def value: None
 ::GlobalNamespace::OcclusionCullingDebugShaderVariables___OccluderMipBounds_e__FixedBuffer  _OccluderMipBounds;

/// @brief Field _OccluderMipLayoutSizeX, offset: 0x90, size: 0x4, def value: None
 uint32_t  _OccluderMipLayoutSizeX;

/// @brief Field _OccluderMipLayoutSizeY, offset: 0x94, size: 0x4, def value: None
 uint32_t  _OccluderMipLayoutSizeY;

/// @brief Field _OcclusionCullingDebugPad0, offset: 0x98, size: 0x4, def value: None
 uint32_t  _OcclusionCullingDebugPad0;

/// @brief Field _OcclusionCullingDebugPad1, offset: 0x9c, size: 0x4, def value: None
 uint32_t  _OcclusionCullingDebugPad1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables, _DepthSizeInOccluderPixels) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables, _OccluderMipBounds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables, _OccluderMipLayoutSizeX) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables, _OccluderMipLayoutSizeY) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables, _OcclusionCullingDebugPad0) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables, _OcclusionCullingDebugPad1) == 0x9c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables) == 0xa0, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
