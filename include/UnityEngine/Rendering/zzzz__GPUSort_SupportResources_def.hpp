#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUSort_SupportResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GPUSort_SupportResources)
namespace GlobalNamespace {
struct GPUSort_RenderGraphResources;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct GPUSort_SupportResources;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GPUSort_SupportResources);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GPUSort_SupportResources, "UnityEngine.Rendering", "GPUSort/SupportResources");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUSort/SupportResources
struct CORDL_TYPE GPUSort_SupportResources {
public:
// Declarations
/// @brief Method Dispose, addr 0xb195c68, size 0x54, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Load, addr 0xb195bbc, size 0xac, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GPUSort_SupportResources Load(::GlobalNamespace::GPUSort_RenderGraphResources  renderGraphResources) ;

// Ctor Parameters []
// @brief default ctor
constexpr GPUSort_SupportResources() ;

// Ctor Parameters [CppParam { name: "sortBufferKeys", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "sortBufferValues", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }]
constexpr GPUSort_SupportResources(::UnityEngine::GraphicsBuffer*  sortBufferKeys, ::UnityEngine::GraphicsBuffer*  sortBufferValues) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17020};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field sortBufferKeys, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  sortBufferKeys;

/// @brief Field sortBufferValues, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  sortBufferValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GPUSort_SupportResources, sortBufferKeys) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUSort_SupportResources, sortBufferValues) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GPUSort_SupportResources) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
