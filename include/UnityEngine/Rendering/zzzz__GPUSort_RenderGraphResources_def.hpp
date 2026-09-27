#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUSort_RenderGraphResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUSort_RenderGraphResources)
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
// Forward declare root types
namespace GlobalNamespace {
struct GPUSort_RenderGraphResources;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GPUSort_RenderGraphResources);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GPUSort_RenderGraphResources, "UnityEngine.Rendering", "GPUSort/RenderGraphResources");
// Dependencies UnityEngine.Rendering.RenderGraphModule.BufferHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUSort/RenderGraphResources
struct CORDL_TYPE GPUSort_RenderGraphResources {
public:
// Declarations
/// @brief Method Create, addr 0xb195aa8, size 0x114, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GPUSort_RenderGraphResources Create(int32_t  count, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder  builder) ;

// Ctor Parameters []
// @brief default ctor
constexpr GPUSort_RenderGraphResources() ;

// Ctor Parameters [CppParam { name: "sortBufferKeys", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "sortBufferValues", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None, comment: None }]
constexpr GPUSort_RenderGraphResources(::UnityEngine::Rendering::RenderGraphModule::BufferHandle  sortBufferKeys, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  sortBufferValues) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17019};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field sortBufferKeys, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  sortBufferKeys;

/// @brief Field sortBufferValues, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  sortBufferValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GPUSort_RenderGraphResources, sortBufferKeys) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUSort_RenderGraphResources, sortBufferValues) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GPUSort_RenderGraphResources) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
