#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUSort_SystemResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GPUSort_SystemResources)
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace GlobalNamespace {
struct GPUSort_SystemResources;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GPUSort_SystemResources);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GPUSort_SystemResources, "UnityEngine.Rendering", "GPUSort/SystemResources");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUSort/SystemResources
struct CORDL_TYPE GPUSort_SystemResources {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GPUSort_SystemResources() ;

// Ctor Parameters [CppParam { name: "computeAsset", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: None, comment: None }]
constexpr GPUSort_SystemResources(::UnityW<::UnityEngine::ComputeShader>  computeAsset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17021};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field computeAsset, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  computeAsset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GPUSort_SystemResources, computeAsset) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GPUSort_SystemResources) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
