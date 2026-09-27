#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUInstanceData_ReadOnly.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_def.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_def.hpp"
#include "UnityEngine/Rendering/zzzz__EditorInstanceDataArrays_ReadOnly_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererMeshLodData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_def.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CPUInstanceData_ReadOnly)
namespace UnityEngine::Rendering {
struct CPUInstanceData;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
// Forward declare root types
namespace GlobalNamespace {
struct CPUInstanceData_ReadOnly;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CPUInstanceData_ReadOnly);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CPUInstanceData_ReadOnly, "UnityEngine.Rendering", "CPUInstanceData/ReadOnly");
// [IsReadOnly]
// Dependencies Unity.Collections.NativeArray`1::ReadOnly<T>, UnityEngine.Rendering.AABB, UnityEngine.Rendering.EditorInstanceDataArrays::ReadOnly, UnityEngine.Rendering.GPUDrivenRendererMeshLodData, UnityEngine.Rendering.InstanceHandle, UnityEngine.Rendering.ParallelBitArray, UnityEngine.Rendering.SharedInstanceHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.CPUInstanceData/ReadOnly
struct CORDL_TYPE CPUInstanceData_ReadOnly {
public:
// Declarations
 __declspec(property(get=get_handlesLength)) int32_t  handlesLength;

 __declspec(property(get=get_instancesLength)) int32_t  instancesLength;

/// @brief Method InstanceToIndex, addr 0xb1ffaf0, size 0x94, virtual false, abstract: false, final false
inline int32_t InstanceToIndex(::UnityEngine::Rendering::InstanceHandle  instance) ;

/// @brief Method .ctor, addr 0xb1ff728, size 0x34c, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData) ;

/// @brief Method get_handlesLength, addr 0xb1ffa74, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_handlesLength() ;

/// @brief Method get_instancesLength, addr 0xb1ffab0, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_instancesLength() ;

// Ctor Parameters []
// @brief default ctor
constexpr CPUInstanceData_ReadOnly() ;

// Ctor Parameters [CppParam { name: "instanceIndices", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instances", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "sharedInstances", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "localToWorldIsFlippedBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "worldAABBs", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tetrahedronCacheIndices", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "movedInCurrentFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "movedInPreviousFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "visibleInPreviousFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "editorData", ty: "::GlobalNamespace::EditorInstanceDataArrays_ReadOnly", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshLodData", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenRendererMeshLodData>", modifiers: "", def_value: None, comment: None }]
constexpr CPUInstanceData_ReadOnly(::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  instanceIndices, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle>  instances, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle>  sharedInstances, ::UnityEngine::Rendering::ParallelBitArray  localToWorldIsFlippedBits, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB>  worldAABBs, ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  tetrahedronCacheIndices, ::UnityEngine::Rendering::ParallelBitArray  movedInCurrentFrameBits, ::UnityEngine::Rendering::ParallelBitArray  movedInPreviousFrameBits, ::UnityEngine::Rendering::ParallelBitArray  visibleInPreviousFrameBits, ::GlobalNamespace::EditorInstanceDataArrays_ReadOnly  editorData, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenRendererMeshLodData>  meshLodData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26622};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xe8};

/// @brief Field instanceIndices, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  instanceIndices;

/// @brief Field instances, offset: 0x10, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle>  instances;

/// @brief Field sharedInstances, offset: 0x20, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle>  sharedInstances;

/// @brief Field localToWorldIsFlippedBits, offset: 0x30, size: 0x20, def value: None
 ::UnityEngine::Rendering::ParallelBitArray  localToWorldIsFlippedBits;

/// @brief Field worldAABBs, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB>  worldAABBs;

/// @brief Field tetrahedronCacheIndices, offset: 0x60, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  tetrahedronCacheIndices;

/// @brief Field movedInCurrentFrameBits, offset: 0x70, size: 0x20, def value: None
 ::UnityEngine::Rendering::ParallelBitArray  movedInCurrentFrameBits;

/// @brief Field movedInPreviousFrameBits, offset: 0x90, size: 0x20, def value: None
 ::UnityEngine::Rendering::ParallelBitArray  movedInPreviousFrameBits;

/// @brief Field visibleInPreviousFrameBits, offset: 0xb0, size: 0x20, def value: None
 ::UnityEngine::Rendering::ParallelBitArray  visibleInPreviousFrameBits;

/// @brief Field editorData, offset: 0xd0, size: 0x1, def value: None
 ::GlobalNamespace::EditorInstanceDataArrays_ReadOnly  editorData;

/// @brief Field meshLodData, offset: 0xd8, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenRendererMeshLodData>  meshLodData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CPUInstanceData_ReadOnly, instanceIndices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUInstanceData_ReadOnly, instances) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUInstanceData_ReadOnly, sharedInstances) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUInstanceData_ReadOnly, localToWorldIsFlippedBits) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUInstanceData_ReadOnly, worldAABBs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUInstanceData_ReadOnly, tetrahedronCacheIndices) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUInstanceData_ReadOnly, movedInCurrentFrameBits) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUInstanceData_ReadOnly, movedInPreviousFrameBits) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUInstanceData_ReadOnly, visibleInPreviousFrameBits) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUInstanceData_ReadOnly, editorData) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUInstanceData_ReadOnly, meshLodData) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CPUInstanceData_ReadOnly) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
