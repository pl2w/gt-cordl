#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUPrefixSum_RenderGraphResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUPrefixSum_RenderGraphResources)
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
// Forward declare root types
namespace GlobalNamespace {
struct GPUPrefixSum_RenderGraphResources;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GPUPrefixSum_RenderGraphResources);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GPUPrefixSum_RenderGraphResources, "UnityEngine.Rendering", "GPUPrefixSum/RenderGraphResources");
// Dependencies UnityEngine.Rendering.RenderGraphModule.BufferHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUPrefixSum/RenderGraphResources
struct CORDL_TYPE GPUPrefixSum_RenderGraphResources {
public:
// Declarations
 __declspec(property(get=get_output)) ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  output;

/// @brief Method Create, addr 0xb1947c8, size 0x5c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GPUPrefixSum_RenderGraphResources Create(int32_t  newMaxElementCount, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder  builder, bool  outputIsTemp) ;

/// @brief Method Initialize, addr 0xb194824, size 0x340, virtual false, abstract: false, final false
inline void Initialize(int32_t  newMaxElementCount, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder  builder, bool  outputIsTemp) ;

/// @brief Method get_output, addr 0xb1947b8, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle get_output() ;

// Ctor Parameters []
// @brief default ctor
constexpr GPUPrefixSum_RenderGraphResources() ;

// Ctor Parameters [CppParam { name: "alignedElementCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxBufferCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxLevelCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "prefixBuffer0", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "prefixBuffer1", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "totalLevelCountBuffer", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "levelOffsetBuffer", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "indirectDispatchArgsBuffer", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None, comment: None }]
constexpr GPUPrefixSum_RenderGraphResources(int32_t  alignedElementCount, int32_t  maxBufferCount, int32_t  maxLevelCount, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  prefixBuffer0, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  prefixBuffer1, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  totalLevelCountBuffer, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  levelOffsetBuffer, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  indirectDispatchArgsBuffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17010};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field alignedElementCount, offset: 0x0, size: 0x4, def value: None
 int32_t  alignedElementCount;

/// @brief Field maxBufferCount, offset: 0x4, size: 0x4, def value: None
 int32_t  maxBufferCount;

/// @brief Field maxLevelCount, offset: 0x8, size: 0x4, def value: None
 int32_t  maxLevelCount;

/// @brief Field prefixBuffer0, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  prefixBuffer0;

/// @brief Field prefixBuffer1, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  prefixBuffer1;

/// @brief Field totalLevelCountBuffer, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  totalLevelCountBuffer;

/// @brief Field levelOffsetBuffer, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  levelOffsetBuffer;

/// @brief Field indirectDispatchArgsBuffer, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  indirectDispatchArgsBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_RenderGraphResources, alignedElementCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_RenderGraphResources, maxBufferCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_RenderGraphResources, maxLevelCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_RenderGraphResources, prefixBuffer0) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_RenderGraphResources, prefixBuffer1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_RenderGraphResources, totalLevelCountBuffer) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_RenderGraphResources, levelOffsetBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_RenderGraphResources, indirectDispatchArgsBuffer) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GPUPrefixSum_RenderGraphResources) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
