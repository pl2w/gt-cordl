#pragma once
// IWYU pragma private; include "UnityEngine/GraphicsBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsBuffer)
namespace GlobalNamespace {
struct GraphicsBuffer_IndirectDrawIndexedArgs;
}
namespace GlobalNamespace {
struct GraphicsBuffer_Target;
}
namespace GlobalNamespace {
struct GraphicsBuffer_UsageFlags;
}
namespace System {
class Array;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct GraphicsBufferHandle;
}
namespace UnityEngine {
class GraphicsBuffer_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class GraphicsBuffer_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::GraphicsBuffer*);
MARK_REF_T(::UnityEngine::GraphicsBuffer_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GraphicsBuffer*, "UnityEngine", "GraphicsBuffer");
DEFINE_IL2CPP_CLASS(::UnityEngine::GraphicsBuffer_BindingsMarshaller*, "UnityEngine", "GraphicsBuffer/BindingsMarshaller");
// [NativeHeader("Runtime/Shaders/GraphicsBuffer.h")]
// [NativeHeader("Runtime/Export/Graphics/GraphicsBuffer.bindings.h")]
// [UsedByNativeCode]
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GraphicsBuffer
class CORDL_TYPE GraphicsBuffer : public ::System::Object {
public:
// Declarations
using IndirectDrawIndexedArgs = ::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs;

using Target = ::GlobalNamespace::GraphicsBuffer_Target;

using UsageFlags = ::GlobalNamespace::GraphicsBuffer_UsageFlags;

using BindingsMarshaller = ::UnityEngine::GraphicsBuffer_BindingsMarshaller;

 __declspec(property(get=get_bufferHandle)) ::UnityEngine::GraphicsBufferHandle  bufferHandle;

 __declspec(property(get=get_count)) int32_t  count;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

 __declspec(property(put=set_name)) ::StringW  name;

 __declspec(property(get=get_stride)) int32_t  stride;

 __declspec(property(get=get_usageFlags)) ::GlobalNamespace::GraphicsBuffer_UsageFlags  usageFlags;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method BeginBufferWrite, addr 0xb59c5a8, size 0x68, virtual false, abstract: false, final false
inline void* BeginBufferWrite(int32_t  offset, int32_t  size) ;

/// @brief Method BeginBufferWrite_Injected, addr 0xb59c610, size 0x54, virtual false, abstract: false, final false
static inline void* BeginBufferWrite_Injected(::System::IntPtr  _unity_self, int32_t  offset, int32_t  size) ;

/// [FreeFunction("GraphicsBuffer_Bindings::DestroyBuffer")]
/// @brief Method DestroyBuffer, addr 0xb59b570, size 0x48, virtual false, abstract: false, final false
static inline void DestroyBuffer(::UnityEngine::GraphicsBuffer*  buf) ;

/// @brief Method DestroyBuffer_Injected, addr 0xb59b62c, size 0x3c, virtual false, abstract: false, final false
static inline void DestroyBuffer_Injected(::System::IntPtr  buf) ;

/// @brief Method Dispose, addr 0xb59b50c, size 0x64, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xb59b44c, size 0xc0, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EndBufferWrite, addr 0xb59c664, size 0x58, virtual false, abstract: false, final false
inline void EndBufferWrite(int32_t  bytesWritten) ;

/// @brief Method EndBufferWrite_Injected, addr 0xb59c6bc, size 0x44, virtual false, abstract: false, final false
static inline void EndBufferWrite_Injected(::System::IntPtr  _unity_self, int32_t  bytesWritten) ;

/// @brief Method Finalize, addr 0xb59b3c4, size 0x88, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetData, addr 0xb59c2a4, size 0x17c, virtual false, abstract: false, final false
inline void GetData(::System::Array*  data) ;

/// [FreeFunction(Name = "GraphicsBuffer_Bindings::InternalGetNativeBufferPtr", HasExplicitThis = true)]
/// @brief Method GetNativeBufferPtr, addr 0xb59c51c, size 0x50, virtual false, abstract: false, final false
inline ::System::IntPtr GetNativeBufferPtr() ;

/// @brief Method GetNativeBufferPtr_Injected, addr 0xb59c56c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetNativeBufferPtr_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "GraphicsBuffer_Bindings::GetUsageFlags", HasExplicitThis = true)]
/// @brief Method GetUsageFlags, addr 0xb59bc10, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::GraphicsBuffer_UsageFlags GetUsageFlags() ;

/// @brief Method GetUsageFlags_Injected, addr 0xb59bc60, size 0x3c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GraphicsBuffer_UsageFlags GetUsageFlags_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction("GraphicsBuffer_Bindings::InitBuffer")]
/// @brief Method InitBuffer, addr 0xb59b5d0, size 0x5c, virtual false, abstract: false, final false
static inline ::System::IntPtr InitBuffer(::GlobalNamespace::GraphicsBuffer_Target  target, ::GlobalNamespace::GraphicsBuffer_UsageFlags  usageFlags, int32_t  count, int32_t  stride) ;

/// [FreeFunction(Name = "GraphicsBuffer_Bindings::InternalGetData", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method InternalGetData, addr 0xb59c420, size 0x88, virtual false, abstract: false, final false
inline void InternalGetData(::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  computeBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalGetData_Injected, addr 0xb59c4a8, size 0x74, virtual false, abstract: false, final false
static inline void InternalGetData_Injected(::System::IntPtr  _unity_self, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  computeBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalInitialization, addr 0xb59b6dc, size 0x2f8, virtual false, abstract: false, final false
inline void InternalInitialization(::GlobalNamespace::GraphicsBuffer_Target  target, ::GlobalNamespace::GraphicsBuffer_UsageFlags  usageFlags, int32_t  count, int32_t  stride) ;

/// [FreeFunction(Name = "GraphicsBuffer_Bindings::InternalSetData", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method InternalSetData, addr 0xb59be74, size 0x88, virtual false, abstract: false, final false
inline void InternalSetData(::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetData_Injected, addr 0xb59c230, size 0x74, virtual false, abstract: false, final false
static inline void InternalSetData_Injected(::System::IntPtr  _unity_self, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// [FreeFunction(Name = "GraphicsBuffer_Bindings::InternalSetNativeData", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method InternalSetNativeData, addr 0xb59c134, size 0x88, virtual false, abstract: false, final false
inline void InternalSetNativeData(::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetNativeData_Injected, addr 0xb59c1bc, size 0x74, virtual false, abstract: false, final false
static inline void InternalSetNativeData_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method IsValid, addr 0xb59baa8, size 0x50, virtual false, abstract: false, final false
inline bool IsValid() ;

/// [FreeFunction("GraphicsBuffer_Bindings::IsValidBuffer")]
/// @brief Method IsValidBuffer, addr 0xb59ba24, size 0x48, virtual false, abstract: false, final false
static inline bool IsValidBuffer(::UnityEngine::GraphicsBuffer*  buf) ;

/// @brief Method IsValidBuffer_Injected, addr 0xb59ba6c, size 0x3c, virtual false, abstract: false, final false
static inline bool IsValidBuffer_Injected(::System::IntPtr  buf) ;

/// @brief Method IsVertexIndexOrCopyOnly, addr 0xb59b5c4, size 0xc, virtual false, abstract: false, final false
static inline bool IsVertexIndexOrCopyOnly(::GlobalNamespace::GraphicsBuffer_Target  target) ;

/// @brief Method LockBufferForWrite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> LockBufferForWrite(int32_t  bufferStartIndex, int32_t  count) ;

static inline ::UnityEngine::GraphicsBuffer* New_ctor(::System::IntPtr  ptr) ;

static inline ::UnityEngine::GraphicsBuffer* New_ctor(::GlobalNamespace::GraphicsBuffer_Target  target, int32_t  count, int32_t  stride) ;

static inline ::UnityEngine::GraphicsBuffer* New_ctor(::GlobalNamespace::GraphicsBuffer_Target  target, ::GlobalNamespace::GraphicsBuffer_UsageFlags  usageFlags, int32_t  count, int32_t  stride) ;

/// @brief Method Release, addr 0xb59ba20, size 0x4, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method RequiresCompute, addr 0xb59b5b8, size 0xc, virtual false, abstract: false, final false
static inline bool RequiresCompute(::GlobalNamespace::GraphicsBuffer_Target  target) ;

/// @brief Method SetData, addr 0xb59bd44, size 0x130, virtual false, abstract: false, final false
inline void SetData(::System::Array*  data) ;

/// @brief Method SetData, addr 0xb59befc, size 0x238, virtual false, abstract: false, final false
inline void SetData(::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetData(::Unity::Collections::NativeArray_1<T>  data) ;

/// @brief Method SetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetData(::Unity::Collections::NativeArray_1<T>  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// [FreeFunction(Name = "GraphicsBuffer_Bindings::SetName", HasExplicitThis = true)]
/// @brief Method SetName, addr 0xb59c704, size 0x190, virtual false, abstract: false, final false
inline void SetName(::StringW  name) ;

/// @brief Method SetName_Injected, addr 0xb59c894, size 0x814, virtual false, abstract: false, final false
static inline void SetName_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method UnlockBufferAfterWrite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnlockBufferAfterWrite(int32_t  countWritten) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0xb59b668, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  ptr) ;

/// @brief Method .ctor, addr 0xb59b690, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GraphicsBuffer_Target  target, int32_t  count, int32_t  stride) ;

/// @brief Method .ctor, addr 0xb59b9d4, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GraphicsBuffer_Target  target, ::GlobalNamespace::GraphicsBuffer_UsageFlags  usageFlags, int32_t  count, int32_t  stride) ;

/// @brief Method get_bufferHandle, addr 0xb59bca0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBufferHandle get_bufferHandle() ;

/// @brief Method get_bufferHandle_Injected, addr 0xb59bd00, size 0x44, virtual false, abstract: false, final false
static inline void get_bufferHandle_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::GraphicsBufferHandle>  ret) ;

/// @brief Method get_count, addr 0xb59baf8, size 0x50, virtual false, abstract: false, final false
inline int32_t get_count() ;

/// @brief Method get_count_Injected, addr 0xb59bb48, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_count_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_stride, addr 0xb59bb84, size 0x50, virtual false, abstract: false, final false
inline int32_t get_stride() ;

/// @brief Method get_stride_Injected, addr 0xb59bbd4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_stride_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_usageFlags, addr 0xb59bc9c, size 0x4, virtual false, abstract: false, final false
inline ::GlobalNamespace::GraphicsBuffer_UsageFlags get_usageFlags() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_name, addr 0xb59c700, size 0x4, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBuffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsBuffer(GraphicsBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBuffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsBuffer(GraphicsBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14890};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GraphicsBuffer, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::GraphicsBuffer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GraphicsBuffer/BindingsMarshaller
class CORDL_TYPE GraphicsBuffer_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToManaged, addr 0xb59d0e0, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::GraphicsBuffer* ConvertToManaged(::System::IntPtr  ptr) ;

/// @brief Method ConvertToNative, addr 0xb59d13c, size 0x14, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::GraphicsBuffer*  graphicsBuffer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBuffer_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBuffer_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsBuffer_BindingsMarshaller(GraphicsBuffer_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBuffer_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsBuffer_BindingsMarshaller(GraphicsBuffer_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14889};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GraphicsBuffer_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
