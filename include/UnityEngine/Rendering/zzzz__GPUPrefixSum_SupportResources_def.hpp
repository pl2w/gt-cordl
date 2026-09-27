#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUPrefixSum_SupportResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUPrefixSum_SupportResources)
namespace GlobalNamespace {
struct GPUPrefixSum_RenderGraphResources;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct GPUPrefixSum_SupportResources;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GPUPrefixSum_SupportResources);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GPUPrefixSum_SupportResources, "UnityEngine.Rendering", "GPUPrefixSum/SupportResources");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUPrefixSum/SupportResources
struct CORDL_TYPE GPUPrefixSum_SupportResources {
public:
// Declarations
 __declspec(property(get=get_output)) ::UnityEngine::GraphicsBuffer*  output;

/// @brief Method Create, addr 0xb194b6c, size 0x68, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GPUPrefixSum_SupportResources Create(int32_t  maxElementCount) ;

/// @brief Method Dispose, addr 0xb194fcc, size 0x78, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Load, addr 0xb194e58, size 0x5c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GPUPrefixSum_SupportResources Load(::GlobalNamespace::GPUPrefixSum_RenderGraphResources  shaderGraphResources) ;

/// @brief Method LoadFromShaderGraph, addr 0xb194eb4, size 0x118, virtual false, abstract: false, final false
inline void LoadFromShaderGraph(::GlobalNamespace::GPUPrefixSum_RenderGraphResources  shaderGraphResources) ;

/// @brief Method Resize, addr 0xb194bd4, size 0x284, virtual false, abstract: false, final false
inline void Resize(int32_t  newMaxElementCount) ;

/// [CompilerGenerated]
/// @brief Method <Dispose>g__TryFreeBuffer|15_0, addr 0xb195044, size 0x10, virtual false, abstract: false, final false
static inline void _Dispose_g__TryFreeBuffer_15_0(::UnityEngine::GraphicsBuffer*  resource) ;

/// @brief Method get_output, addr 0xb194b64, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* get_output() ;

// Ctor Parameters []
// @brief default ctor
constexpr GPUPrefixSum_SupportResources() ;

// Ctor Parameters [CppParam { name: "ownsResources", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "alignedElementCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxBufferCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxLevelCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "prefixBuffer0", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "prefixBuffer1", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "totalLevelCountBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "levelOffsetBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "indirectDispatchArgsBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }]
constexpr GPUPrefixSum_SupportResources(bool  ownsResources, int32_t  alignedElementCount, int32_t  maxBufferCount, int32_t  maxLevelCount, ::UnityEngine::GraphicsBuffer*  prefixBuffer0, ::UnityEngine::GraphicsBuffer*  prefixBuffer1, ::UnityEngine::GraphicsBuffer*  totalLevelCountBuffer, ::UnityEngine::GraphicsBuffer*  levelOffsetBuffer, ::UnityEngine::GraphicsBuffer*  indirectDispatchArgsBuffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17011};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field ownsResources, offset: 0x0, size: 0x1, def value: None
 bool  ownsResources;

/// @brief Field alignedElementCount, offset: 0x4, size: 0x4, def value: None
 int32_t  alignedElementCount;

/// @brief Field maxBufferCount, offset: 0x8, size: 0x4, def value: None
 int32_t  maxBufferCount;

/// @brief Field maxLevelCount, offset: 0xc, size: 0x4, def value: None
 int32_t  maxLevelCount;

/// @brief Field prefixBuffer0, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  prefixBuffer0;

/// @brief Field prefixBuffer1, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  prefixBuffer1;

/// @brief Field totalLevelCountBuffer, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  totalLevelCountBuffer;

/// @brief Field levelOffsetBuffer, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  levelOffsetBuffer;

/// @brief Field indirectDispatchArgsBuffer, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  indirectDispatchArgsBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_SupportResources, ownsResources) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_SupportResources, alignedElementCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_SupportResources, maxBufferCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_SupportResources, maxLevelCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_SupportResources, prefixBuffer0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_SupportResources, prefixBuffer1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_SupportResources, totalLevelCountBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_SupportResources, levelOffsetBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_SupportResources, indirectDispatchArgsBuffer) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GPUPrefixSum_SupportResources) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
