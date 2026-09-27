#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystemBurst.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDataSystemBurst)
namespace GlobalNamespace {
template<typename T>
struct NativeArray_1_ReadOnly;
}
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
template<typename TKey,typename TValue>
struct NativeParallelMultiHashMap_2;
}
namespace UnityEngine::Rendering {
struct CPUInstanceData;
}
namespace UnityEngine::Rendering {
struct CPUPerCameraInstanceData;
}
namespace UnityEngine::Rendering {
struct CPUSharedInstanceData;
}
namespace UnityEngine::Rendering {
struct GPUDrivenPackedRendererData;
}
namespace UnityEngine::Rendering {
struct InstanceAllocators;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst*, "UnityEngine.Rendering", "InstanceDataSystemBurst");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall*, "UnityEngine.Rendering", "InstanceDataSystemBurst/FreeInstances_000002A2$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall*, "UnityEngine.Rendering", "InstanceDataSystemBurst/FreeRendererGroupInstances_000002A1$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate*, "UnityEngine.Rendering", "InstanceDataSystemBurst/FreeRendererGroupInstances_000002A1$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall*, "UnityEngine.Rendering", "InstanceDataSystemBurst/ReallocateInstances_000002A0$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate*, "UnityEngine.Rendering", "InstanceDataSystemBurst/ReallocateInstances_000002A0$PostfixBurstDelegate");
// [BurstCompile]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst
class CORDL_TYPE InstanceDataSystemBurst : public ::System::Object {
public:
// Declarations
using FreeInstances_000002A2$BurstDirectCall = ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall;

using FreeRendererGroupInstances_000002A1$BurstDirectCall = ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall;

using FreeRendererGroupInstances_000002A1$PostfixBurstDelegate = ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate;

using ReallocateInstances_000002A0$BurstDirectCall = ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall;

using ReallocateInstances_000002A0$PostfixBurstDelegate = ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate;

/// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
/// [MonoPInvokeCallback(typeof(UnityEngine.Rendering.UnityEngine.Rendering.InstanceDataSystemBurst::FreeRendererGroupInstances_000002A1$PostfixBurstDelegate))]
/// @brief Method FreeRendererGroupInstances, addr 0xb207654, size 0x4, virtual false, abstract: false, final false
static inline void FreeRendererGroupInstances(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>  rendererGroupsID, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

/// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
/// @brief Method FreeRendererGroupInstances$BurstManaged, addr 0xb207ca4, size 0x2e8, virtual false, abstract: false, final false
static inline void FreeRendererGroupInstances$BurstManaged(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>  rendererGroupsID, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

/// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
/// [MonoPInvokeCallback(typeof(UnityEngine.Rendering.UnityEngine.Rendering.InstanceDataSystemBurst::ReallocateInstances_000002A0$PostfixBurstDelegate))]
/// @brief Method ReallocateInstances, addr 0xb207640, size 0x14, virtual false, abstract: false, final false
static inline void ReallocateInstances(bool  implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  rendererGroupIDs, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>  packedRendererData, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceOffsets, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceCounts, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

/// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
/// @brief Method ReallocateInstances$BurstManaged, addr 0xb207860, size 0x39c, virtual false, abstract: false, final false
static inline void ReallocateInstances$BurstManaged(bool  implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  rendererGroupIDs, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>  packedRendererData, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceOffsets, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceCounts, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystemBurst() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceDataSystemBurst(InstanceDataSystemBurst && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceDataSystemBurst(InstanceDataSystemBurst const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26657};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst/FreeInstances_000002A2$BurstDirectCall
class CORDL_TYPE InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall(InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall(InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26656};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst/FreeRendererGroupInstances_000002A1$BurstDirectCall
class CORDL_TYPE InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb208314, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb208224, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb207778, size 0xe8, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>  rendererGroupsID, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall(InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall(InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26655};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst/FreeRendererGroupInstances_000002A1$PostfixBurstDelegate
class CORDL_TYPE InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb208210, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>  rendererGroupsID, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

static inline ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb20815c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate(InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate(InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26654};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst/ReallocateInstances_000002A0$BurstDirectCall
class CORDL_TYPE InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb208144, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb208054, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb207658, size 0x120, virtual false, abstract: false, final false
static inline void Invoke(bool  implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  rendererGroupIDs, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>  packedRendererData, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceOffsets, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceCounts, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall(InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall(InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26653};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst/ReallocateInstances_000002A0$PostfixBurstDelegate
class CORDL_TYPE InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb20802c, size 0x28, virtual true, abstract: false, final false
inline void Invoke(bool  implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  rendererGroupIDs, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>  packedRendererData, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceOffsets, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceCounts, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

static inline ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb207f8c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate(InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate(InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26652};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
