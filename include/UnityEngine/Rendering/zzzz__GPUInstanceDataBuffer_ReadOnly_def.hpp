#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBuffer_ReadOnly.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUInstanceDataBuffer_ReadOnly)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
class GPUInstanceDataBuffer;
}
namespace UnityEngine::Rendering {
struct GPUInstanceIndex;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
// Forward declare root types
namespace GlobalNamespace {
struct GPUInstanceDataBuffer_ReadOnly;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly, "UnityEngine.Rendering", "GPUInstanceDataBuffer/ReadOnly");
// [IsReadOnly]
// Dependencies Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUInstanceDataBuffer/ReadOnly
struct CORDL_TYPE GPUInstanceDataBuffer_ReadOnly {
public:
// Declarations
/// @brief Method CPUInstanceArrayToGPUInstanceArray, addr 0xb1fba64, size 0xa8, virtual false, abstract: false, final false
inline void CPUInstanceArrayToGPUInstanceArray(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>  gpuInstanceIndices) ;

/// @brief Method CPUInstanceToGPUInstance, addr 0xb1fba5c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::GPUInstanceIndex CPUInstanceToGPUInstance(::UnityEngine::Rendering::InstanceHandle  instance) ;

/// @brief Method .ctor, addr 0xb1fba3c, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::GPUInstanceDataBuffer*  buffer) ;

// Ctor Parameters []
// @brief default ctor
constexpr GPUInstanceDataBuffer_ReadOnly() ;

// Ctor Parameters [CppParam { name: "instancesNumPrefixSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr GPUInstanceDataBuffer_ReadOnly(::Unity::Collections::NativeArray_1<int32_t>  instancesNumPrefixSum) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26606};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field instancesNumPrefixSum, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  instancesNumPrefixSum;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly, instancesNumPrefixSum) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
