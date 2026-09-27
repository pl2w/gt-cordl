#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/TempMeshAllocatorImpl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TempMeshAllocatorImpl_ThreadData_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TempMeshAllocatorImpl)
namespace GlobalNamespace {
struct TempMeshAllocatorImpl_ThreadData;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine::UIElements::UIR {
template<typename T>
class TempAllocator_1;
}
namespace UnityEngine::UIElements {
struct TempMeshAllocator;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class TempMeshAllocatorImpl;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*, "UnityEngine.UIElements.UIR", "TempMeshAllocatorImpl");
// Dependencies System.Object, System.Runtime.InteropServices.GCHandle, UnityEngine.UIElements.UIR.TempMeshAllocatorImpl::ThreadData
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.TempMeshAllocatorImpl
class CORDL_TYPE TempMeshAllocatorImpl : public ::System::Object {
public:
// Declarations
using ThreadData = ::GlobalNamespace::TempMeshAllocatorImpl_ThreadData;

/// @brief Field <disposed>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed_k__BackingField, put=__cordl_internal_set__disposed_k__BackingField)) bool  _disposed_k__BackingField;

 __declspec(property(get=get_disposed, put=set_disposed)) bool  disposed;

/// @brief Field m_GCHandle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GCHandle, put=__cordl_internal_set_m_GCHandle)) ::System::Runtime::InteropServices::GCHandle  m_GCHandle;

/// @brief Field m_IndexPool, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IndexPool, put=__cordl_internal_set_m_IndexPool)) ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>*  m_IndexPool;

/// @brief Field m_ThreadData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ThreadData, put=__cordl_internal_set_m_ThreadData)) ::ArrayW<::GlobalNamespace::TempMeshAllocatorImpl_ThreadData>  m_ThreadData;

/// @brief Field m_VertexPool, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VertexPool, put=__cordl_internal_set_m_VertexPool)) ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>*  m_VertexPool;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeSlice_1<T> Allocate(int32_t  count, int32_t  alignment) ;

/// @brief Method AllocateTempMesh, addr 0xb7f1df4, size 0x254, virtual false, abstract: false, final false
inline void AllocateTempMesh(int32_t  vertexCount, int32_t  indexCount, ::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>  vertices, ::by_ref<::Unity::Collections::NativeSlice_1<uint16_t>>  indices) ;

/// @brief Method Clear, addr 0xb7ed1ec, size 0x1fc, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CreateNativeHandle, addr 0xb7f1de8, size 0xc, virtual false, abstract: false, final false
inline void CreateNativeHandle(::by_ref<::UnityEngine::UIElements::TempMeshAllocator>  allocator) ;

/// @brief Method Dispose, addr 0xb7ebf70, size 0x64, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xb7f2060, size 0xa4, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* New_ctor() ;

constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

constexpr bool& __cordl_internal_get__disposed_k__BackingField() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_m_GCHandle() const;

constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_m_GCHandle() ;

constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* const& __cordl_internal_get_m_IndexPool() const;

constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>*& __cordl_internal_get_m_IndexPool() ;

constexpr ::ArrayW<::GlobalNamespace::TempMeshAllocatorImpl_ThreadData> const& __cordl_internal_get_m_ThreadData() const;

constexpr ::ArrayW<::GlobalNamespace::TempMeshAllocatorImpl_ThreadData>& __cordl_internal_get_m_ThreadData() ;

constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* const& __cordl_internal_get_m_VertexPool() const;

constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>*& __cordl_internal_get_m_VertexPool() ;

constexpr void __cordl_internal_set__disposed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_GCHandle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr void __cordl_internal_set_m_IndexPool(::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>*  value) ;

constexpr void __cordl_internal_set_m_ThreadData(::ArrayW<::GlobalNamespace::TempMeshAllocatorImpl_ThreadData>  value) ;

constexpr void __cordl_internal_set_m_VertexPool(::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>*  value) ;

/// @brief Method .ctor, addr 0xb7eab20, size 0x1dc, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_disposed, addr 0xb7f2050, size 0x8, virtual false, abstract: false, final false
inline bool get_disposed() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_disposed, addr 0xb7f2058, size 0x8, virtual false, abstract: false, final false
inline void set_disposed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TempMeshAllocatorImpl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TempMeshAllocatorImpl", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TempMeshAllocatorImpl(TempMeshAllocatorImpl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TempMeshAllocatorImpl", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TempMeshAllocatorImpl(TempMeshAllocatorImpl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8584};

/// @brief Field m_GCHandle, offset: 0x10, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  ___m_GCHandle;

/// @brief Field m_ThreadData, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::TempMeshAllocatorImpl_ThreadData>  ___m_ThreadData;

/// @brief Field m_VertexPool, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>*  ___m_VertexPool;

/// @brief Field m_IndexPool, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>*  ___m_IndexPool;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <disposed>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____disposed_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl, ___m_GCHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl, ___m_ThreadData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl, ___m_VertexPool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl, ___m_IndexPool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl, ____disposed_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
