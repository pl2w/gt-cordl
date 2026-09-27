#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUSharedInstanceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenMeshLodInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__SmallIntegerArray_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CPUSharedInstanceData)
namespace GlobalNamespace {
struct CPUSharedInstanceData_ReadOnly;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
struct AABB;
}
namespace UnityEngine::Rendering {
struct CPUInstanceData;
}
namespace UnityEngine::Rendering {
struct GPUDrivenMeshLodInfo;
}
namespace UnityEngine::Rendering {
struct InstanceFlags;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine::Rendering {
struct SharedInstanceHandle;
}
namespace UnityEngine::Rendering {
struct SmallIntegerArray;
}
namespace UnityEngine::Rendering {
struct TransformUpdateFlags;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct CPUSharedInstanceData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CPUSharedInstanceData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CPUSharedInstanceData, "UnityEngine.Rendering", "CPUSharedInstanceData");
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.AABB, UnityEngine.Rendering.CPUSharedInstanceFlags, UnityEngine.Rendering.GPUDrivenMeshLodInfo, UnityEngine.Rendering.SharedInstanceHandle, UnityEngine.Rendering.SmallIntegerArray
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CPUSharedInstanceData
struct CORDL_TYPE CPUSharedInstanceData {
public:
// Declarations
using ReadOnly = ::GlobalNamespace::CPUSharedInstanceData_ReadOnly;

 __declspec(property(get=get_instancesCapacity, put=set_instancesCapacity)) int32_t  instancesCapacity;

 __declspec(property(get=get_instancesLength, put=set_instancesLength)) int32_t  instancesLength;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AddNoGrow, addr 0xb20174c, size 0x2c, virtual false, abstract: false, final false
inline void AddNoGrow(::UnityEngine::Rendering::SharedInstanceHandle  instance) ;

/// @brief Method AddUnsafe, addr 0xb201448, size 0x1e0, virtual false, abstract: false, final false
inline void AddUnsafe(::UnityEngine::Rendering::SharedInstanceHandle  instance) ;

/// @brief Method AsReadOnly, addr 0xb201c1c, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::CPUSharedInstanceData_ReadOnly AsReadOnly() ;

/// @brief Method Dispose, addr 0xb200e30, size 0x338, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EnsureFreeInstances, addr 0xb201724, size 0x28, virtual false, abstract: false, final false
inline void EnsureFreeInstances(int32_t  instancesCount) ;

/// @brief Method GetFreeInstancesCount, addr 0xb201714, size 0x10, virtual false, abstract: false, final false
inline int32_t GetFreeInstancesCount() ;

/// @brief Method Get_MeshID, addr 0xb201a50, size 0x20, virtual false, abstract: false, final false
inline int32_t Get_MeshID(::UnityEngine::Rendering::SharedInstanceHandle  instance) ;

/// @brief Method Get_RefCount, addr 0xb201a70, size 0x20, virtual false, abstract: false, final false
inline int32_t Get_RefCount(::UnityEngine::Rendering::SharedInstanceHandle  instance) ;

/// @brief Method Get_RendererGroupID, addr 0xb201a30, size 0x20, virtual false, abstract: false, final false
inline int32_t Get_RendererGroupID(::UnityEngine::Rendering::SharedInstanceHandle  instance) ;

/// @brief Method Grow, addr 0xb2011c0, size 0x288, virtual false, abstract: false, final false
inline void Grow(int32_t  newCapacity) ;

/// @brief Method Initialize, addr 0xb200ac8, size 0x368, virtual false, abstract: false, final false
inline void Initialize(int32_t  initCapacity) ;

/// @brief Method InstanceToIndex, addr 0xb2016c0, size 0x54, virtual false, abstract: false, final false
inline int32_t InstanceToIndex(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::UnityEngine::Rendering::InstanceHandle  instance) ;

/// @brief Method Remove, addr 0xb2017f4, size 0x23c, virtual false, abstract: false, final false
inline void Remove(::UnityEngine::Rendering::SharedInstanceHandle  instance) ;

/// @brief Method Set, addr 0xb201abc, size 0x160, virtual false, abstract: false, final false
inline void Set(::UnityEngine::Rendering::SharedInstanceHandle  instance, int32_t  rendererGroupID, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::SmallIntegerArray>  materialIDs, int32_t  meshID, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::AABB>  localAABB, ::UnityEngine::Rendering::TransformUpdateFlags  transformUpdateFlags, ::UnityEngine::Rendering::InstanceFlags  instanceFlags, uint32_t  lodGroupAndMask, ::UnityEngine::Rendering::GPUDrivenMeshLodInfo  meshLodInfo, int32_t  gameObjectLayer, int32_t  refCount) ;

/// @brief Method SetDefault, addr 0xb201778, size 0x7c, virtual false, abstract: false, final false
inline void SetDefault(::UnityEngine::Rendering::SharedInstanceHandle  instance) ;

/// @brief Method Set_RefCount, addr 0xb201a90, size 0x2c, virtual false, abstract: false, final false
inline void Set_RefCount(::UnityEngine::Rendering::SharedInstanceHandle  instance, int32_t  refCount) ;

/// @brief Method SharedInstanceToIndex, addr 0xb201628, size 0x98, virtual false, abstract: false, final false
inline int32_t SharedInstanceToIndex(::UnityEngine::Rendering::SharedInstanceHandle  instance) ;

/// @brief Method get_instancesCapacity, addr 0xb200ab0, size 0xc, virtual false, abstract: false, final false
inline int32_t get_instancesCapacity() ;

/// @brief Method get_instancesLength, addr 0xb200a98, size 0xc, virtual false, abstract: false, final false
inline int32_t get_instancesLength() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method set_instancesCapacity, addr 0xb200abc, size 0xc, virtual false, abstract: false, final false
inline void set_instancesCapacity(int32_t  value) ;

/// @brief Method set_instancesLength, addr 0xb200aa4, size 0xc, virtual false, abstract: false, final false
inline void set_instancesLength(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CPUSharedInstanceData() ;

// Ctor Parameters [CppParam { name: "m_StructData", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InstanceIndices", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "rendererGroupIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "materialIDArrays", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SmallIntegerArray>", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "localAABBs", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB>", modifiers: "", def_value: None, comment: None }, CppParam { name: "flags", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CPUSharedInstanceFlags>", modifiers: "", def_value: None, comment: None }, CppParam { name: "lodGroupAndMasks", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshLodInfos", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenMeshLodInfo>", modifiers: "", def_value: None, comment: None }, CppParam { name: "gameObjectLayers", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "refCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr CPUSharedInstanceData(::Unity::Collections::NativeArray_1<int32_t>  m_StructData, ::Unity::Collections::NativeList_1<int32_t>  m_InstanceIndices, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<int32_t>  rendererGroupIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SmallIntegerArray>  materialIDArrays, ::Unity::Collections::NativeArray_1<int32_t>  meshIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB>  localAABBs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CPUSharedInstanceFlags>  flags, ::Unity::Collections::NativeArray_1<uint32_t>  lodGroupAndMasks, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenMeshLodInfo>  meshLodInfos, ::Unity::Collections::NativeArray_1<int32_t>  gameObjectLayers, ::Unity::Collections::NativeArray_1<int32_t>  refCounts) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26627};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb8};

/// @brief Field m_StructData, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_StructData;

/// @brief Field m_InstanceIndices, offset: 0x10, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  m_InstanceIndices;

/// @brief Field instances, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle>  instances;

/// @brief Field rendererGroupIDs, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  rendererGroupIDs;

/// @brief Field materialIDArrays, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SmallIntegerArray>  materialIDArrays;

/// @brief Field meshIDs, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  meshIDs;

/// @brief Field localAABBs, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB>  localAABBs;

/// @brief Field flags, offset: 0x68, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CPUSharedInstanceFlags>  flags;

/// @brief Field lodGroupAndMasks, offset: 0x78, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint32_t>  lodGroupAndMasks;

/// @brief Field meshLodInfos, offset: 0x88, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenMeshLodInfo>  meshLodInfos;

/// @brief Field gameObjectLayers, offset: 0x98, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  gameObjectLayers;

/// @brief Field refCounts, offset: 0xa8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  refCounts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, m_StructData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, m_InstanceIndices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, instances) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, rendererGroupIDs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, materialIDArrays) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, meshIDs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, localAABBs) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, flags) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, lodGroupAndMasks) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, meshLodInfos) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, gameObjectLayers) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, refCounts) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::CPUSharedInstanceData) == 0xb8, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
