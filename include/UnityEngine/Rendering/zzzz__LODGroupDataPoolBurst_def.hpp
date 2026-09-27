#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODGroupDataPoolBurst.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LODGroupDataPoolBurst)
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
struct GPUInstanceIndex;
}
namespace UnityEngine::Rendering {
struct LODGroupCullingData;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_FreeLODGroupData_000002F1$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_FreeLODGroupData_000002F1$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
struct LODGroupData;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_FreeLODGroupData_000002F1$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_FreeLODGroupData_000002F1$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::LODGroupDataPoolBurst*);
MARK_REF_T(::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F1$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F1$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODGroupDataPoolBurst*, "UnityEngine.Rendering", "LODGroupDataPoolBurst");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$BurstDirectCall*, "UnityEngine.Rendering", "LODGroupDataPoolBurst/AllocateOrGetLODGroupDataInstances_000002F2$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate*, "UnityEngine.Rendering", "LODGroupDataPoolBurst/AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F1$BurstDirectCall*, "UnityEngine.Rendering", "LODGroupDataPoolBurst/FreeLODGroupData_000002F1$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F1$PostfixBurstDelegate*, "UnityEngine.Rendering", "LODGroupDataPoolBurst/FreeLODGroupData_000002F1$PostfixBurstDelegate");
// [BurstCompile]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODGroupDataPoolBurst
class CORDL_TYPE LODGroupDataPoolBurst : public ::System::Object {
public:
// Declarations
using AllocateOrGetLODGroupDataInstances_000002F2$BurstDirectCall = ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$BurstDirectCall;

using AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate = ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate;

using FreeLODGroupData_000002F1$BurstDirectCall = ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F1$BurstDirectCall;

using FreeLODGroupData_000002F1$PostfixBurstDelegate = ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F1$PostfixBurstDelegate;

/// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
/// [MonoPInvokeCallback(typeof(UnityEngine.Rendering.UnityEngine.Rendering.LODGroupDataPoolBurst::AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate))]
/// @brief Method AllocateOrGetLODGroupDataInstances, addr 0xb20c190, size 0x4, virtual false, abstract: false, final false
static inline int32_t AllocateOrGetLODGroupDataInstances(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  lodGroupsID, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>  lodGroupsData, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>  lodGroupCullingData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupDataHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>  freeLODGroupDataHandles, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupInstances) ;

/// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
/// @brief Method AllocateOrGetLODGroupDataInstances$BurstManaged, addr 0xb20c5a4, size 0x2a0, virtual false, abstract: false, final false
static inline int32_t AllocateOrGetLODGroupDataInstances$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  lodGroupsID, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>  lodGroupsData, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>  lodGroupCullingData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupDataHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>  freeLODGroupDataHandles, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupInstances) ;

/// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
/// [MonoPInvokeCallback(typeof(UnityEngine.Rendering.UnityEngine.Rendering.LODGroupDataPoolBurst::FreeLODGroupData_000002F1$PostfixBurstDelegate))]
/// @brief Method FreeLODGroupData, addr 0xb20c194, size 0x4, virtual false, abstract: false, final false
static inline int32_t FreeLODGroupData(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  destroyedLODGroupsID, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>  lodGroupsData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupDataHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>  freeLODGroupDataHandles) ;

/// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
/// @brief Method FreeLODGroupData$BurstManaged, addr 0xb20c344, size 0x260, virtual false, abstract: false, final false
static inline int32_t FreeLODGroupData$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  destroyedLODGroupsID, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>  lodGroupsData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupDataHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>  freeLODGroupDataHandles) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LODGroupDataPoolBurst() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LODGroupDataPoolBurst(LODGroupDataPoolBurst && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LODGroupDataPoolBurst(LODGroupDataPoolBurst const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26693};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::LODGroupDataPoolBurst) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODGroupDataPoolBurst/AllocateOrGetLODGroupDataInstances_000002F2$BurstDirectCall
class CORDL_TYPE LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb20cbcc, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb20cadc, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb20c25c, size 0xe8, virtual false, abstract: false, final false
static inline int32_t Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  lodGroupsID, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>  lodGroupsData, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>  lodGroupCullingData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupDataHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>  freeLODGroupDataHandles, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupInstances) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$BurstDirectCall(LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$BurstDirectCall(LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26692};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODGroupDataPoolBurst/AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate
class CORDL_TYPE LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb20cac8, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  lodGroupsID, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>  lodGroupsData, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>  lodGroupCullingData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupDataHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>  freeLODGroupDataHandles, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupInstances) ;

static inline ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb20ca14, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate(LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate(LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26691};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODGroupDataPoolBurst/FreeLODGroupData_000002F1$BurstDirectCall
class CORDL_TYPE LODGroupDataPoolBurst_FreeLODGroupData_000002F1$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb20c9fc, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb20c90c, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb20c198, size 0xc4, virtual false, abstract: false, final false
static inline int32_t Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  destroyedLODGroupsID, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>  lodGroupsData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupDataHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>  freeLODGroupDataHandles) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LODGroupDataPoolBurst_FreeLODGroupData_000002F1$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_FreeLODGroupData_000002F1$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LODGroupDataPoolBurst_FreeLODGroupData_000002F1$BurstDirectCall(LODGroupDataPoolBurst_FreeLODGroupData_000002F1$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_FreeLODGroupData_000002F1$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LODGroupDataPoolBurst_FreeLODGroupData_000002F1$BurstDirectCall(LODGroupDataPoolBurst_FreeLODGroupData_000002F1$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26690};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F1$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODGroupDataPoolBurst/FreeLODGroupData_000002F1$PostfixBurstDelegate
class CORDL_TYPE LODGroupDataPoolBurst_FreeLODGroupData_000002F1$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb20c8f8, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  destroyedLODGroupsID, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>  lodGroupsData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupDataHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>  freeLODGroupDataHandles) ;

static inline ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F1$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb20c844, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LODGroupDataPoolBurst_FreeLODGroupData_000002F1$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_FreeLODGroupData_000002F1$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LODGroupDataPoolBurst_FreeLODGroupData_000002F1$PostfixBurstDelegate(LODGroupDataPoolBurst_FreeLODGroupData_000002F1$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_FreeLODGroupData_000002F1$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LODGroupDataPoolBurst_FreeLODGroupData_000002F1$PostfixBurstDelegate(LODGroupDataPoolBurst_FreeLODGroupData_000002F1$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26689};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F1$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
