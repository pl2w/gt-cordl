#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUSharedInstanceData_ReadOnly.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_def.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenMeshLodInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__SmallIntegerArray_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CPUSharedInstanceData_ReadOnly)
namespace GlobalNamespace {
struct CPUInstanceData_ReadOnly;
}
namespace UnityEngine::Rendering {
struct CPUSharedInstanceData;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine::Rendering {
struct SharedInstanceHandle;
}
// Forward declare root types
namespace GlobalNamespace {
struct CPUSharedInstanceData_ReadOnly;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CPUSharedInstanceData_ReadOnly);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CPUSharedInstanceData_ReadOnly, "UnityEngine.Rendering", "CPUSharedInstanceData/ReadOnly");
// [IsReadOnly]
// Dependencies Unity.Collections.NativeArray`1::ReadOnly<T>, UnityEngine.Rendering.AABB, UnityEngine.Rendering.CPUSharedInstanceFlags, UnityEngine.Rendering.GPUDrivenMeshLodInfo, UnityEngine.Rendering.SharedInstanceHandle, UnityEngine.Rendering.SmallIntegerArray
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.CPUSharedInstanceData/ReadOnly
struct CORDL_TYPE CPUSharedInstanceData_ReadOnly {
public:
// Declarations
/// @brief Method InstanceToIndex, addr 0xb2020e4, size 0x88, virtual false, abstract: false, final false
inline int32_t InstanceToIndex(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::CPUInstanceData_ReadOnly>  instanceData, ::UnityEngine::Rendering::InstanceHandle  instance) ;

/// @brief Method SharedInstanceToIndex, addr 0xb202050, size 0x94, virtual false, abstract: false, final false
inline int32_t SharedInstanceToIndex(::UnityEngine::Rendering::SharedInstanceHandle  instance) ;

/// @brief Method .ctor, addr 0xb201c50, size 0x400, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  instanceData) ;

// Ctor Parameters []
// @brief default ctor
constexpr CPUSharedInstanceData_ReadOnly() ;

// Ctor Parameters [CppParam { name: "instanceIndices", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instances", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "rendererGroupIDs", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "materialIDArrays", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshIDs", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "localAABBs", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB>", modifiers: "", def_value: None, comment: None }, CppParam { name: "flags", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::CPUSharedInstanceFlags>", modifiers: "", def_value: None, comment: None }, CppParam { name: "lodGroupAndMasks", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<uint32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshLodInfos", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenMeshLodInfo>", modifiers: "", def_value: None, comment: None }, CppParam { name: "gameObjectLayers", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "refCounts", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr CPUSharedInstanceData_ReadOnly(::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  instanceIndices, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle>  instances, ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  rendererGroupIDs, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>  materialIDArrays, ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  meshIDs, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB>  localAABBs, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::CPUSharedInstanceFlags>  flags, ::GlobalNamespace::NativeArray_1_ReadOnly<uint32_t>  lodGroupAndMasks, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenMeshLodInfo>  meshLodInfos, ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  gameObjectLayers, ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  refCounts) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26626};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb0};

/// @brief Field instanceIndices, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  instanceIndices;

/// @brief Field instances, offset: 0x10, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle>  instances;

/// @brief Field rendererGroupIDs, offset: 0x20, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  rendererGroupIDs;

/// @brief Field materialIDArrays, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>  materialIDArrays;

/// @brief Field meshIDs, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  meshIDs;

/// @brief Field localAABBs, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB>  localAABBs;

/// @brief Field flags, offset: 0x60, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::CPUSharedInstanceFlags>  flags;

/// @brief Field lodGroupAndMasks, offset: 0x70, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<uint32_t>  lodGroupAndMasks;

/// @brief Field meshLodInfos, offset: 0x80, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenMeshLodInfo>  meshLodInfos;

/// @brief Field gameObjectLayers, offset: 0x90, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  gameObjectLayers;

/// @brief Field refCounts, offset: 0xa0, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  refCounts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CPUSharedInstanceData_ReadOnly, instanceIndices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUSharedInstanceData_ReadOnly, instances) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUSharedInstanceData_ReadOnly, rendererGroupIDs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUSharedInstanceData_ReadOnly, materialIDArrays) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUSharedInstanceData_ReadOnly, meshIDs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUSharedInstanceData_ReadOnly, localAABBs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUSharedInstanceData_ReadOnly, flags) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUSharedInstanceData_ReadOnly, lodGroupAndMasks) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUSharedInstanceData_ReadOnly, meshLodInfos) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUSharedInstanceData_ReadOnly, gameObjectLayers) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUSharedInstanceData_ReadOnly, refCounts) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CPUSharedInstanceData_ReadOnly) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
