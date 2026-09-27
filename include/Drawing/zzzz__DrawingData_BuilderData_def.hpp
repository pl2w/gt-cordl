#pragma once
// IWYU pragma private; include "Drawing/DrawingData_BuilderData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__AllowedDelay_def.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_BitPackedMeta_def.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_Meta_def.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_State_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawingData_BuilderData)
namespace Drawing {
struct AllowedDelay;
}
namespace Drawing {
class BuilderData_DrawingData_AnyBuffersWrittenToDelegate;
}
namespace Drawing {
class BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall;
}
namespace Drawing {
class BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate;
}
namespace Drawing {
class BuilderData_DrawingData_ResetAllBuffersToDelegate;
}
namespace Drawing {
class BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall;
}
namespace Drawing {
class BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate;
}
namespace Drawing {
class DrawingData;
}
namespace Drawing {
struct RedrawScope;
}
namespace GlobalNamespace {
struct BuilderData_DrawingData_BitPackedMeta;
}
namespace GlobalNamespace {
struct BuilderData_DrawingData_Meta;
}
namespace GlobalNamespace {
struct BuilderData_DrawingData_State;
}
namespace GlobalNamespace {
struct DrawingData_Hasher;
}
namespace GlobalNamespace {
struct DrawingData_SubmittedMesh;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeAppendBuffer;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace GlobalNamespace {
struct DrawingData_BuilderData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DrawingData_BuilderData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DrawingData_BuilderData, "Drawing", "DrawingData/BuilderData");
// [BurstCompile]
// Dependencies Drawing.AllowedDelay, Drawing.DrawingData::BuilderData::BitPackedMeta, Drawing.DrawingData::BuilderData::Meta, Drawing.DrawingData::BuilderData::State, System.Runtime.InteropServices.GCHandle, Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer, Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.DrawingData/BuilderData
struct CORDL_TYPE DrawingData_BuilderData {
public:
// Declarations
using AnyBuffersWrittenToDelegate = ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate;

using AnyBuffersWrittenTo_000002FB$BurstDirectCall = ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall;

using AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate = ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate;

using ResetAllBuffersToDelegate = ::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate;

using ResetAllBuffers_000002FC$BurstDirectCall = ::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall;

using ResetAllBuffers_000002FC$PostfixBurstDelegate = ::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate;

using BitPackedMeta = ::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta;

using Meta = ::GlobalNamespace::BuilderData_DrawingData_Meta;

using State = ::GlobalNamespace::BuilderData_DrawingData_State;

/// @brief Field AnyBuffersWrittenToInvoke, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnyBuffersWrittenToInvoke, put=setStaticF_AnyBuffersWrittenToInvoke)) ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*  AnyBuffersWrittenToInvoke;

/// @brief Field ResetAllBuffersToInvoke, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ResetAllBuffersToInvoke, put=setStaticF_ResetAllBuffersToInvoke)) ::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*  ResetAllBuffersToInvoke;

/// @brief Field UniqueIDCounter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UniqueIDCounter, put=setStaticF_UniqueIDCounter)) int32_t  UniqueIDCounter;

 __declspec(property(get=get_bufferPtr)) ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  bufferPtr;

 __declspec(property(get=get_state, put=set_state)) ::GlobalNamespace::BuilderData_DrawingData_State  state;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(Drawing.DrawingData::BuilderData::AnyBuffersWrittenToDelegate))]
/// @brief Method AnyBuffersWrittenTo, addr 0x55d00ac, size 0x4, virtual false, abstract: false, final false
static inline bool AnyBuffersWrittenTo(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(Drawing.DrawingData::BuilderData::AnyBuffersWrittenToDelegate))]
/// @brief Method AnyBuffersWrittenTo$BurstManaged, addr 0x55d1830, size 0x4c, virtual false, abstract: false, final false
static inline bool AnyBuffersWrittenTo$BurstManaged(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers) ;

/// @brief Method CheckJobDependency, addr 0x55d1150, size 0xd4, virtual false, abstract: false, final false
inline void CheckJobDependency(::Drawing::DrawingData*  gizmos, bool  allowBlocking) ;

/// @brief Method ClearData, addr 0x55d1224, size 0xf4, virtual false, abstract: false, final false
inline void ClearData() ;

/// @brief Method Dispose, addr 0x55d1318, size 0x1dc, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Init, addr 0x55d0224, size 0x284, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::DrawingData_Hasher  hasher, ::Drawing::RedrawScope  frameRedrawScope, ::Drawing::RedrawScope  customRedrawScope, bool  isGizmos, int32_t  drawOrderIndex, int32_t  sceneModeVersion) ;

/// @brief Method Release, addr 0x55d0c0c, size 0xa4, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method Reserve, addr 0x55d00c4, size 0xf0, virtual false, abstract: false, final false
inline void Reserve(int32_t  dataIndex, bool  isBuiltInCommandBuilder) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(Drawing.DrawingData::BuilderData::AnyBuffersWrittenToDelegate))]
/// @brief Method ResetAllBuffers, addr 0x55d00b0, size 0x4, virtual false, abstract: false, final false
static inline void ResetAllBuffers(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(Drawing.DrawingData::BuilderData::AnyBuffersWrittenToDelegate))]
/// @brief Method ResetAllBuffers$BurstManaged, addr 0x55d187c, size 0x3c, virtual false, abstract: false, final false
static inline void ResetAllBuffers$BurstManaged(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers) ;

/// @brief Method Submit, addr 0x55d0748, size 0x4c4, virtual false, abstract: false, final false
inline void Submit(::Drawing::DrawingData*  gizmos) ;

/// @brief Method SubmitWithDependency, addr 0x55d06c4, size 0x84, virtual false, abstract: false, final false
inline void SubmitWithDependency(::System::Runtime::InteropServices::GCHandle  gcHandle, ::Unity::Jobs::JobHandle  dependency, ::Drawing::AllowedDelay  allowedDelay) ;

static inline ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate* getStaticF_AnyBuffersWrittenToInvoke() ;

static inline ::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate* getStaticF_ResetAllBuffersToInvoke() ;

static inline int32_t getStaticF_UniqueIDCounter() ;

/// @brief Method get_bufferPtr, addr 0x55d04a8, size 0x48, virtual false, abstract: false, final false
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer* get_bufferPtr() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_state, addr 0x55d00b4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::BuilderData_DrawingData_State get_state() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_AnyBuffersWrittenToInvoke(::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*  value) ;

static inline void setStaticF_ResetAllBuffersToInvoke(::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*  value) ;

static inline void setStaticF_UniqueIDCounter(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_state, addr 0x55d00bc, size 0x8, virtual false, abstract: false, final false
inline void set_state(::GlobalNamespace::BuilderData_DrawingData_State  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DrawingData_BuilderData() ;

// Ctor Parameters [CppParam { name: "packedMeta", ty: "::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshes", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_SubmittedMesh>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "commandBuffers", ty: "::Unity::Collections::NativeArray_1<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_state_k__BackingField", ty: "::GlobalNamespace::BuilderData_DrawingData_State", modifiers: "", def_value: None, comment: None }, CppParam { name: "preventDispose", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "splitterJob", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "disposeDependency", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "disposeDependencyDelay", ty: "::Drawing::AllowedDelay", modifiers: "", def_value: None, comment: None }, CppParam { name: "disposeGCHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "meta", ty: "::GlobalNamespace::BuilderData_DrawingData_Meta", modifiers: "", def_value: None, comment: None }]
constexpr DrawingData_BuilderData(::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta  packedMeta, ::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_SubmittedMesh>*  meshes, ::Unity::Collections::NativeArray_1<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>  commandBuffers, ::GlobalNamespace::BuilderData_DrawingData_State  _state_k__BackingField, bool  preventDispose, ::Unity::Jobs::JobHandle  splitterJob, ::Unity::Jobs::JobHandle  disposeDependency, ::Drawing::AllowedDelay  disposeDependencyDelay, ::System::Runtime::InteropServices::GCHandle  disposeGCHandle, ::GlobalNamespace::BuilderData_DrawingData_Meta  meta) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27742};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x98};

/// @brief Field packedMeta, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta  packedMeta;

/// @brief Field meshes, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_SubmittedMesh>*  meshes;

/// @brief Field commandBuffers, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>  commandBuffers;

/// [CompilerGenerated]
/// @brief Field <state>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::BuilderData_DrawingData_State  _state_k__BackingField;

/// @brief Field preventDispose, offset: 0x24, size: 0x1, def value: None
 bool  preventDispose;

/// @brief Field splitterJob, offset: 0x28, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  splitterJob;

/// @brief Field disposeDependency, offset: 0x38, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  disposeDependency;

/// @brief Field disposeDependencyDelay, offset: 0x48, size: 0x4, def value: None
 ::Drawing::AllowedDelay  disposeDependencyDelay;

/// @brief Field disposeGCHandle, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  disposeGCHandle;

/// @brief Field meta, offset: 0x58, size: 0x40, def value: None
 ::GlobalNamespace::BuilderData_DrawingData_Meta  meta;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DrawingData_BuilderData, packedMeta) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_BuilderData, meshes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_BuilderData, commandBuffers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_BuilderData, _state_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_BuilderData, preventDispose) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_BuilderData, splitterJob) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_BuilderData, disposeDependency) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_BuilderData, disposeDependencyDelay) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_BuilderData, disposeGCHandle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_BuilderData, meta) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DrawingData_BuilderData) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
