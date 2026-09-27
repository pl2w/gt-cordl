#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUPrefixSum_SystemResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUPrefixSum_SystemResources)
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace GlobalNamespace {
struct GPUPrefixSum_SystemResources;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GPUPrefixSum_SystemResources);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GPUPrefixSum_SystemResources, "UnityEngine.Rendering", "GPUPrefixSum/SystemResources");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUPrefixSum/SystemResources
struct CORDL_TYPE GPUPrefixSum_SystemResources {
public:
// Declarations
/// @brief Method LoadKernels, addr 0xb193dd4, size 0x1b8, virtual false, abstract: false, final false
inline void LoadKernels() ;

// Ctor Parameters []
// @brief default ctor
constexpr GPUPrefixSum_SystemResources() ;

// Ctor Parameters [CppParam { name: "computeAsset", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: None, comment: None }, CppParam { name: "kernelCalculateLevelDispatchArgsFromConst", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "kernelCalculateLevelDispatchArgsFromBuffer", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "kernelPrefixSumOnGroup", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "kernelPrefixSumOnGroupExclusive", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "kernelPrefixSumNextInput", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "kernelPrefixSumResolveParent", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "kernelPrefixSumResolveParentExclusive", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GPUPrefixSum_SystemResources(::UnityW<::UnityEngine::ComputeShader>  computeAsset, int32_t  kernelCalculateLevelDispatchArgsFromConst, int32_t  kernelCalculateLevelDispatchArgsFromBuffer, int32_t  kernelPrefixSumOnGroup, int32_t  kernelPrefixSumOnGroupExclusive, int32_t  kernelPrefixSumNextInput, int32_t  kernelPrefixSumResolveParent, int32_t  kernelPrefixSumResolveParentExclusive) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17014};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field computeAsset, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  computeAsset;

/// @brief Field kernelCalculateLevelDispatchArgsFromConst, offset: 0x8, size: 0x4, def value: None
 int32_t  kernelCalculateLevelDispatchArgsFromConst;

/// @brief Field kernelCalculateLevelDispatchArgsFromBuffer, offset: 0xc, size: 0x4, def value: None
 int32_t  kernelCalculateLevelDispatchArgsFromBuffer;

/// @brief Field kernelPrefixSumOnGroup, offset: 0x10, size: 0x4, def value: None
 int32_t  kernelPrefixSumOnGroup;

/// @brief Field kernelPrefixSumOnGroupExclusive, offset: 0x14, size: 0x4, def value: None
 int32_t  kernelPrefixSumOnGroupExclusive;

/// @brief Field kernelPrefixSumNextInput, offset: 0x18, size: 0x4, def value: None
 int32_t  kernelPrefixSumNextInput;

/// @brief Field kernelPrefixSumResolveParent, offset: 0x1c, size: 0x4, def value: None
 int32_t  kernelPrefixSumResolveParent;

/// @brief Field kernelPrefixSumResolveParentExclusive, offset: 0x20, size: 0x4, def value: None
 int32_t  kernelPrefixSumResolveParentExclusive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_SystemResources, computeAsset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_SystemResources, kernelCalculateLevelDispatchArgsFromConst) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_SystemResources, kernelCalculateLevelDispatchArgsFromBuffer) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_SystemResources, kernelPrefixSumOnGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_SystemResources, kernelPrefixSumOnGroupExclusive) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_SystemResources, kernelPrefixSumNextInput) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_SystemResources, kernelPrefixSumResolveParent) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_SystemResources, kernelPrefixSumResolveParentExclusive) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GPUPrefixSum_SystemResources) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
