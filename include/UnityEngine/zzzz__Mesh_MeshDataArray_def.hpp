#pragma once
// IWYU pragma private; include "UnityEngine/Mesh_MeshDataArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Mesh_MeshDataArray)
namespace GlobalNamespace {
struct Mesh_MeshData;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
struct MeshUpdateFlags;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
struct Mesh_MeshDataArray;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Mesh_MeshDataArray);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Mesh_MeshDataArray, "UnityEngine", "Mesh/MeshDataArray");
// [NativeContainerSupportsMinMaxWriteRestriction]
// [DefaultMember("Item")]
// [StaticAccessor("MeshDataArrayBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// [NativeContainer]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Mesh/MeshDataArray
struct CORDL_TYPE Mesh_MeshDataArray {
public:
// Declarations
 __declspec(property(get=get_Item)) ::GlobalNamespace::Mesh_MeshData  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AcquireMeshDataCopy, addr 0xb5b1308, size 0xb0, virtual false, abstract: false, final false
static inline void AcquireMeshDataCopy(/* [NotNull] */ ::UnityEngine::Mesh*  mesh, ::System::IntPtr*  datas) ;

/// @brief Method AcquireMeshDataCopy_Injected, addr 0xb5b13b8, size 0x44, virtual false, abstract: false, final false
static inline void AcquireMeshDataCopy_Injected(::System::IntPtr  mesh, ::System::IntPtr*  datas) ;

/// @brief Method AcquireMeshDatasCopy, addr 0xb5b13fc, size 0x90, virtual false, abstract: false, final false
static inline void AcquireMeshDatasCopy(/* [NotNull] */ ::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count) ;

/// @brief Method AcquireMeshDatasCopy_Injected, addr 0xb5b148c, size 0x54, virtual false, abstract: false, final false
static inline void AcquireMeshDatasCopy_Injected(::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count) ;

/// @brief Method AcquireReadOnlyMeshData, addr 0xb5b1130, size 0xb0, virtual false, abstract: false, final false
static inline void AcquireReadOnlyMeshData(/* [NotNull] */ ::UnityEngine::Mesh*  mesh, ::System::IntPtr*  datas) ;

/// @brief Method AcquireReadOnlyMeshData_Injected, addr 0xb5b11e0, size 0x44, virtual false, abstract: false, final false
static inline void AcquireReadOnlyMeshData_Injected(::System::IntPtr  mesh, ::System::IntPtr*  datas) ;

/// @brief Method AcquireReadOnlyMeshDatas, addr 0xb5b1224, size 0x90, virtual false, abstract: false, final false
static inline void AcquireReadOnlyMeshDatas(/* [NotNull] */ ::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count) ;

/// @brief Method AcquireReadOnlyMeshDatas_Injected, addr 0xb5b12b4, size 0x54, virtual false, abstract: false, final false
static inline void AcquireReadOnlyMeshDatas_Injected(::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count) ;

/// @brief Method ApplyToMeshAndDispose, addr 0xb5aaa54, size 0xd0, virtual false, abstract: false, final false
inline void ApplyToMeshAndDispose(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [NativeThrows]
/// @brief Method ApplyToMeshImpl, addr 0xb5b165c, size 0xc0, virtual false, abstract: false, final false
static inline void ApplyToMeshImpl(/* [NotNull] */ ::UnityEngine::Mesh*  mesh, ::System::IntPtr  data, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method ApplyToMeshImpl_Injected, addr 0xb5b171c, size 0x54, virtual false, abstract: false, final false
static inline void ApplyToMeshImpl_Injected(::System::IntPtr  mesh, ::System::IntPtr  data, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method ApplyToMeshesAndDispose, addr 0xb5aac70, size 0x1e4, virtual false, abstract: false, final false
inline void ApplyToMeshesAndDispose(::ArrayW<::UnityEngine::Mesh*>  meshes, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [NativeThrows]
/// @brief Method ApplyToMeshesImpl, addr 0xb5b1568, size 0x98, virtual false, abstract: false, final false
static inline void ApplyToMeshesImpl(/* [NotNull] */ ::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method ApplyToMeshesImpl_Injected, addr 0xb5b1600, size 0x5c, virtual false, abstract: false, final false
static inline void ApplyToMeshesImpl_Injected(::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method CreateNewMeshDatas, addr 0xb5b1524, size 0x44, virtual false, abstract: false, final false
static inline void CreateNewMeshDatas(::System::IntPtr*  datas, int32_t  count) ;

/// @brief Method Dispose, addr 0xb5b1784, size 0x88, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method ReleaseMeshDatas, addr 0xb5b14e0, size 0x44, virtual false, abstract: false, final false
static inline void ReleaseMeshDatas(::System::IntPtr*  datas, int32_t  count) ;

/// @brief Method .ctor, addr 0xb5a9f7c, size 0x1f0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Mesh*  mesh, bool  checkReadWrite, bool  createAsCopy) ;

/// @brief Method .ctor, addr 0xb5aa208, size 0x2b8, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::UnityEngine::Mesh*>  meshes, int32_t  meshesCount, bool  checkReadWrite, bool  createAsCopy) ;

/// @brief Method .ctor, addr 0xb5aa5e8, size 0x124, virtual false, abstract: false, final false
inline void _ctor(int32_t  meshesCount) ;

/// @brief Method get_Item, addr 0xb5b1778, size 0xc, virtual false, abstract: false, final false
inline ::GlobalNamespace::Mesh_MeshData get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0xb5b1770, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr Mesh_MeshDataArray() ;

// Ctor Parameters [CppParam { name: "m_Ptrs", ty: "::System::IntPtr*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Mesh_MeshDataArray(::System::IntPtr*  m_Ptrs, int32_t  m_Length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14941};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_Ptrs, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr*  m_Ptrs;

/// @brief Field m_Length, offset: 0x8, size: 0x4, def value: None
 int32_t  m_Length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Mesh_MeshDataArray, m_Ptrs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mesh_MeshDataArray, m_Length) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Mesh_MeshDataArray) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
