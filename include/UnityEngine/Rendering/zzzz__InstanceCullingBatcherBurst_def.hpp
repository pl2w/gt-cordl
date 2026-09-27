#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCullingBatcherBurst.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceCullingBatcherBurst)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
namespace Unity::Collections {
template<typename TKey,typename TValue>
struct NativeParallelHashMap_2;
}
namespace UnityEngine::Rendering {
struct BatchMaterialID;
}
namespace UnityEngine::Rendering {
struct BatchMeshID;
}
namespace UnityEngine::Rendering {
struct DrawBatch;
}
namespace UnityEngine::Rendering {
struct DrawInstance;
}
namespace UnityEngine::Rendering {
struct DrawKey;
}
namespace UnityEngine::Rendering {
struct DrawRange;
}
namespace UnityEngine::Rendering {
struct GPUDrivenPackedMaterialData;
}
namespace UnityEngine::Rendering {
struct GPUDrivenRendererGroupData;
}
namespace UnityEngine::Rendering {
class InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine::Rendering {
struct RangeKey;
}
namespace UnityEngine::Rendering {
struct SubMeshDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class InstanceCullingBatcherBurst;
}
namespace UnityEngine::Rendering {
class InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::InstanceCullingBatcherBurst*);
MARK_REF_T(::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCullingBatcherBurst*, "UnityEngine.Rendering", "InstanceCullingBatcherBurst");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall*, "UnityEngine.Rendering", "InstanceCullingBatcherBurst/CreateDrawBatches_0000018C$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate*, "UnityEngine.Rendering", "InstanceCullingBatcherBurst/CreateDrawBatches_0000018C$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall*, "UnityEngine.Rendering", "InstanceCullingBatcherBurst/RemoveDrawInstanceIndices_00000188$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate*, "UnityEngine.Rendering", "InstanceCullingBatcherBurst/RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate");
// [BurstCompile]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCullingBatcherBurst
class CORDL_TYPE InstanceCullingBatcherBurst : public ::System::Object {
public:
// Declarations
using CreateDrawBatches_0000018C$BurstDirectCall = ::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall;

using CreateDrawBatches_0000018C$PostfixBurstDelegate = ::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate;

using RemoveDrawInstanceIndices_00000188$BurstDirectCall = ::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall;

using RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate = ::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate;

/// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
/// [MonoPInvokeCallback(typeof(UnityEngine.Rendering.UnityEngine.Rendering.InstanceCullingBatcherBurst::CreateDrawBatches_0000018C$PostfixBurstDelegate))]
/// @brief Method CreateDrawBatches, addr 0xb1f9d10, size 0x14, virtual false, abstract: false, final false
static inline void CreateDrawBatches(bool  implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>  rendererData, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::BatchMeshID>>  batchMeshHash, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::BatchMaterialID>>  batchMaterialHash, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialDataHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>  drawInstances) ;

/// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
/// @brief Method CreateDrawBatches$BurstManaged, addr 0xb1fb074, size 0xd8, virtual false, abstract: false, final false
static inline void CreateDrawBatches$BurstManaged(bool  implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>  rendererData, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::BatchMeshID>>  batchMeshHash, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::BatchMaterialID>>  batchMaterialHash, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialDataHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>  drawInstances) ;

/// @brief Method EditDrawBatch, addr 0xb1fa3f0, size 0x1a0, virtual false, abstract: false, final false
static inline ::by_ref<::UnityEngine::Rendering::DrawBatch> EditDrawBatch(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::DrawKey>  key, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>  subMeshDescriptor, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>  batchHash, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>  drawBatches) ;

/// @brief Method EditDrawRange, addr 0xb1fa29c, size 0x154, virtual false, abstract: false, final false
static inline ::by_ref<::UnityEngine::Rendering::DrawRange> EditDrawRange(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RangeKey>  key, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>  rangeHash, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>  drawRanges) ;

/// @brief Method ProcessRenderer, addr 0xb1fa590, size 0x768, virtual false, abstract: false, final false
static inline void ProcessRenderer(int32_t  i, bool  implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>  rendererData, ::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::BatchMeshID>  batchMeshHash, ::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>  packedMaterialDataHash, ::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::BatchMaterialID>  batchMaterialHash, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>  drawInstances, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>  rangeHash, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>  drawRanges, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>  batchHash, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>  drawBatches) ;

/// @brief Method RemoveDrawBatch, addr 0xb1f9f98, size 0x21c, virtual false, abstract: false, final false
static inline void RemoveDrawBatch(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::DrawKey>  key, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches) ;

/// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
/// [MonoPInvokeCallback(typeof(UnityEngine.Rendering.UnityEngine.Rendering.InstanceCullingBatcherBurst::RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate))]
/// @brief Method RemoveDrawInstanceIndices, addr 0xb1f779c, size 0x4, virtual false, abstract: false, final false
static inline void RemoveDrawInstanceIndices(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  drawInstanceIndices, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>  drawInstances, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches) ;

/// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
/// @brief Method RemoveDrawInstanceIndices$BurstManaged, addr 0xb1faea8, size 0x1cc, virtual false, abstract: false, final false
static inline void RemoveDrawInstanceIndices$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  drawInstanceIndices, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>  drawInstances, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches) ;

/// @brief Method RemoveDrawRange, addr 0xb1f9e10, size 0x188, virtual false, abstract: false, final false
static inline void RemoveDrawRange(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RangeKey>  key, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceCullingBatcherBurst() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceCullingBatcherBurst(InstanceCullingBatcherBurst && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceCullingBatcherBurst(InstanceCullingBatcherBurst const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26604};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceCullingBatcherBurst) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCullingBatcherBurst/CreateDrawBatches_0000018C$BurstDirectCall
class CORDL_TYPE InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb1fb4d4, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb1fb3e4, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb1facf8, size 0x1b0, virtual false, abstract: false, final false
static inline void Invoke(bool  implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>  rendererData, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::BatchMeshID>>  batchMeshHash, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::BatchMaterialID>>  batchMaterialHash, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialDataHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>  drawInstances) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall(InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall(InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26603};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCullingBatcherBurst/CreateDrawBatches_0000018C$PostfixBurstDelegate
class CORDL_TYPE InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb1fb3bc, size 0x28, virtual true, abstract: false, final false
inline void Invoke(bool  implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>  rendererData, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::BatchMeshID>>  batchMeshHash, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::BatchMaterialID>>  batchMaterialHash, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialDataHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>  drawInstances) ;

static inline ::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb1fb31c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate(InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate(InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26602};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCullingBatcherBurst/RemoveDrawInstanceIndices_00000188$BurstDirectCall
class CORDL_TYPE InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb1fb304, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb1fb214, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb1fa1b4, size 0xe8, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  drawInstanceIndices, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>  drawInstances, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall(InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall(InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26601};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCullingBatcherBurst/RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate
class CORDL_TYPE InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb1fb200, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  drawInstanceIndices, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>  drawInstances, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches) ;

static inline ::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb1fb14c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate(InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate(InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26600};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
