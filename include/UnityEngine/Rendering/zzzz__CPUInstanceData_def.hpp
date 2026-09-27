#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUInstanceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_def.hpp"
#include "UnityEngine/Rendering/zzzz__EditorInstanceDataArrays_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererMeshLodData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_def.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CPUInstanceData)
namespace GlobalNamespace {
struct CPUInstanceData_ReadOnly;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
struct AABB;
}
namespace UnityEngine::Rendering {
struct GPUDrivenRendererMeshLodData;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine::Rendering {
struct SharedInstanceHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct CPUInstanceData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CPUInstanceData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CPUInstanceData, "UnityEngine.Rendering", "CPUInstanceData");
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.AABB, UnityEngine.Rendering.EditorInstanceDataArrays, UnityEngine.Rendering.GPUDrivenRendererMeshLodData, UnityEngine.Rendering.InstanceHandle, UnityEngine.Rendering.ParallelBitArray, UnityEngine.Rendering.SharedInstanceHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CPUInstanceData
struct CORDL_TYPE CPUInstanceData {
public:
// Declarations
using ReadOnly = ::GlobalNamespace::CPUInstanceData_ReadOnly;

 __declspec(property(get=get_instancesCapacity, put=set_instancesCapacity)) int32_t  instancesCapacity;

 __declspec(property(get=get_instancesLength, put=set_instancesLength)) int32_t  instancesLength;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AddNoGrow, addr 0xb1ff2dc, size 0x2c, virtual false, abstract: false, final false
inline void AddNoGrow(::UnityEngine::Rendering::InstanceHandle  instance) ;

/// @brief Method AddUnsafe, addr 0xb1ff020, size 0x1e0, virtual false, abstract: false, final false
inline void AddUnsafe(::UnityEngine::Rendering::InstanceHandle  instance) ;

/// @brief Method AsReadOnly, addr 0xb1ff6f4, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::CPUInstanceData_ReadOnly AsReadOnly() ;

/// @brief Method Dispose, addr 0xb1fec98, size 0x13c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EnsureFreeInstances, addr 0xb1ff2b4, size 0x28, virtual false, abstract: false, final false
inline void EnsureFreeInstances(int32_t  instancesCount) ;

/// @brief Method GetFreeInstancesCount, addr 0xb1ff2a4, size 0x10, virtual false, abstract: false, final false
inline int32_t GetFreeInstancesCount() ;

/// @brief Method Get_SharedInstance, addr 0xb1ff6a8, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::SharedInstanceHandle Get_SharedInstance(::UnityEngine::Rendering::InstanceHandle  instance) ;

/// @brief Method Grow, addr 0xb1fedd8, size 0x244, virtual false, abstract: false, final false
inline void Grow(int32_t  newCapacity) ;

/// @brief Method IndexToInstance, addr 0xb1ff298, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::InstanceHandle IndexToInstance(int32_t  index) ;

/// @brief Method Initialize, addr 0xb1fe908, size 0x38c, virtual false, abstract: false, final false
inline void Initialize(int32_t  initCapacity) ;

/// @brief Method InstanceToIndex, addr 0xb1ff200, size 0x98, virtual false, abstract: false, final false
inline int32_t InstanceToIndex(::UnityEngine::Rendering::InstanceHandle  instance) ;

/// @brief Method Remove, addr 0xb1ff3bc, size 0x1f4, virtual false, abstract: false, final false
inline void Remove(::UnityEngine::Rendering::InstanceHandle  instance) ;

/// @brief Method Set, addr 0xb1ff5b4, size 0xf0, virtual false, abstract: false, final false
inline void Set(::UnityEngine::Rendering::InstanceHandle  instance, ::UnityEngine::Rendering::SharedInstanceHandle  sharedInstance, bool  localToWorldIsFlipped, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::AABB>  worldAABB, int32_t  tetrahedronCacheIndex, bool  movedInCurrentFrame, bool  movedInPreviousFrame, bool  visibleInPreviousFrame, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererMeshLodData>  meshLod) ;

/// @brief Method SetDefault, addr 0xb1ff308, size 0xb4, virtual false, abstract: false, final false
inline void SetDefault(::UnityEngine::Rendering::InstanceHandle  instance) ;

/// @brief Method Set_TetrahedronCacheIndex, addr 0xb1ff6c8, size 0x2c, virtual false, abstract: false, final false
inline void Set_TetrahedronCacheIndex(::UnityEngine::Rendering::InstanceHandle  instance, int32_t  tetrahedronCacheIndex) ;

/// @brief Method get_instancesCapacity, addr 0xb1fe8f0, size 0xc, virtual false, abstract: false, final false
inline int32_t get_instancesCapacity() ;

/// @brief Method get_instancesLength, addr 0xb1fe8d8, size 0xc, virtual false, abstract: false, final false
inline int32_t get_instancesLength() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method set_instancesCapacity, addr 0xb1fe8fc, size 0xc, virtual false, abstract: false, final false
inline void set_instancesCapacity(int32_t  value) ;

/// @brief Method set_instancesLength, addr 0xb1fe8e4, size 0xc, virtual false, abstract: false, final false
inline void set_instancesLength(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CPUInstanceData() ;

// Ctor Parameters [CppParam { name: "m_StructData", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InstanceIndices", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "sharedInstances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "localToWorldIsFlippedBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "worldAABBs", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tetrahedronCacheIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "movedInCurrentFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "movedInPreviousFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "visibleInPreviousFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "editorData", ty: "::UnityEngine::Rendering::EditorInstanceDataArrays", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshLodData", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenRendererMeshLodData>", modifiers: "", def_value: None, comment: None }]
constexpr CPUInstanceData(::Unity::Collections::NativeArray_1<int32_t>  m_StructData, ::Unity::Collections::NativeList_1<int32_t>  m_InstanceIndices, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle>  sharedInstances, ::UnityEngine::Rendering::ParallelBitArray  localToWorldIsFlippedBits, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB>  worldAABBs, ::Unity::Collections::NativeArray_1<int32_t>  tetrahedronCacheIndices, ::UnityEngine::Rendering::ParallelBitArray  movedInCurrentFrameBits, ::UnityEngine::Rendering::ParallelBitArray  movedInPreviousFrameBits, ::UnityEngine::Rendering::ParallelBitArray  visibleInPreviousFrameBits, ::UnityEngine::Rendering::EditorInstanceDataArrays  editorData, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenRendererMeshLodData>  meshLodData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26623};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xf0};

/// @brief Field m_StructData, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_StructData;

/// @brief Field m_InstanceIndices, offset: 0x10, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  m_InstanceIndices;

/// @brief Field instances, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances;

/// @brief Field sharedInstances, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle>  sharedInstances;

/// @brief Field localToWorldIsFlippedBits, offset: 0x38, size: 0x20, def value: None
 ::UnityEngine::Rendering::ParallelBitArray  localToWorldIsFlippedBits;

/// @brief Field worldAABBs, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB>  worldAABBs;

/// @brief Field tetrahedronCacheIndices, offset: 0x68, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  tetrahedronCacheIndices;

/// @brief Field movedInCurrentFrameBits, offset: 0x78, size: 0x20, def value: None
 ::UnityEngine::Rendering::ParallelBitArray  movedInCurrentFrameBits;

/// @brief Field movedInPreviousFrameBits, offset: 0x98, size: 0x20, def value: None
 ::UnityEngine::Rendering::ParallelBitArray  movedInPreviousFrameBits;

/// @brief Field visibleInPreviousFrameBits, offset: 0xb8, size: 0x20, def value: None
 ::UnityEngine::Rendering::ParallelBitArray  visibleInPreviousFrameBits;

/// @brief Field editorData, offset: 0xd8, size: 0x1, def value: None
 ::UnityEngine::Rendering::EditorInstanceDataArrays  editorData;

/// @brief Field meshLodData, offset: 0xe0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenRendererMeshLodData>  meshLodData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, m_StructData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, m_InstanceIndices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, instances) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, sharedInstances) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, localToWorldIsFlippedBits) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, worldAABBs) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, tetrahedronCacheIndices) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, movedInCurrentFrameBits) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, movedInPreviousFrameBits) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, visibleInPreviousFrameBits) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, editorData) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, meshLodData) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::CPUInstanceData) == 0xf0, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
