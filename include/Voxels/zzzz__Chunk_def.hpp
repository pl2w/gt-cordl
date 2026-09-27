#pragma once
// IWYU pragma private; include "Voxels/Chunk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Voxels/zzzz__MeshVertexData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Chunk)
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct int3;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace Voxels {
class ChunkComponent;
}
namespace Voxels {
struct ChunkDTO;
}
namespace Voxels {
struct ChunkState;
}
namespace Voxels {
class VoxelWorld;
}
// Forward declare root types
namespace Voxels {
class Chunk;
}
// Write type traits
MARK_REF_T(::Voxels::Chunk*);
DEFINE_IL2CPP_CLASS(::Voxels::Chunk*, "Voxels", "Chunk");
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, Unity.Mathematics.int3, Voxels.MeshVertexData
namespace Voxels {
// Is value type: false
// CS Name: Voxels.Chunk
class CORDL_TYPE Chunk : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Component, put=set_Component)) ::UnityW<::Voxels::ChunkComponent>  Component;

/// @brief Field Density, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_Density, put=__cordl_internal_set_Density)) ::Unity::Collections::NativeArray_1<uint8_t>  Density;

/// @brief Field Dimensions, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_Dimensions, put=__cordl_internal_set_Dimensions)) ::Unity::Mathematics::int3  Dimensions;

 __declspec(property(get=get_GameObject, put=set_GameObject)) ::UnityW<::UnityEngine::GameObject>  GameObject;

/// @brief Field GenericMeshData, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_GenericMeshData, put=__cordl_internal_set_GenericMeshData)) ::System::Object*  GenericMeshData;

/// @brief Field Id, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::Unity::Mathematics::int3  Id;

/// @brief Field IsCollisionBaked, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsCollisionBaked, put=__cordl_internal_set_IsCollisionBaked)) bool  IsCollisionBaked;

/// @brief Field IsDataChanged, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsDataChanged, put=__cordl_internal_set_IsDataChanged)) bool  IsDataChanged;

/// @brief Field IsDataGenerated, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsDataGenerated, put=__cordl_internal_set_IsDataGenerated)) bool  IsDataGenerated;

/// @brief Field IsDirty, offset 0x8e, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsDirty, put=__cordl_internal_set_IsDirty)) bool  IsDirty;

/// @brief Field IsMeshAssigned, offset 0x8d, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsMeshAssigned, put=__cordl_internal_set_IsMeshAssigned)) bool  IsMeshAssigned;

/// @brief Field IsMeshCreated, offset 0x8b, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsMeshCreated, put=__cordl_internal_set_IsMeshCreated)) bool  IsMeshCreated;

/// @brief Field IsMeshGenerated, offset 0x8a, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsMeshGenerated, put=__cordl_internal_set_IsMeshGenerated)) bool  IsMeshGenerated;

/// @brief Field Material, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_Material, put=__cordl_internal_set_Material)) ::Unity::Collections::NativeArray_1<uint8_t>  Material;

/// @brief Field Mesh, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_Mesh, put=__cordl_internal_set_Mesh)) ::UnityW<::UnityEngine::Mesh>  Mesh;

 __declspec(property(get=get_MeshCollider, put=set_MeshCollider)) ::UnityW<::UnityEngine::MeshCollider>  MeshCollider;

 __declspec(property(get=get_MeshFilter, put=set_MeshFilter)) ::UnityW<::UnityEngine::MeshFilter>  MeshFilter;

 __declspec(property(get=get_MeshRenderer, put=set_MeshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  MeshRenderer;

/// @brief Field Size, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_Size, put=__cordl_internal_set_Size)) ::Unity::Mathematics::int3  Size;

 __declspec(property(get=get_State)) ::Voxels::ChunkState  State;

/// @brief Field TriangleData, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_TriangleData, put=__cordl_internal_set_TriangleData)) ::Unity::Collections::NativeArray_1<uint16_t>  TriangleData;

/// @brief Field VertexCount, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_VertexCount, put=__cordl_internal_set_VertexCount)) int32_t  VertexCount;

/// @brief Field VertexData, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_VertexData, put=__cordl_internal_set_VertexData)) ::Unity::Collections::NativeArray_1<::Voxels::MeshVertexData>  VertexData;

/// @brief Field VoxelCount, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_VoxelCount, put=__cordl_internal_set_VoxelCount)) int32_t  VoxelCount;

/// @brief Field World, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_World, put=__cordl_internal_set_World)) ::UnityW<::Voxels::VoxelWorld>  World;

/// @brief Field <Component>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Component_k__BackingField, put=__cordl_internal_set__Component_k__BackingField)) ::UnityW<::Voxels::ChunkComponent>  _Component_k__BackingField;

/// @brief Field <DefaultSize>k__BackingField, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF__DefaultSize_k__BackingField, put=setStaticF__DefaultSize_k__BackingField)) ::Unity::Mathematics::int3  _DefaultSize_k__BackingField;

/// @brief Field <GameObject>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__GameObject_k__BackingField, put=__cordl_internal_set__GameObject_k__BackingField)) ::UnityW<::UnityEngine::GameObject>  _GameObject_k__BackingField;

/// @brief Field <MeshCollider>k__BackingField, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__MeshCollider_k__BackingField, put=__cordl_internal_set__MeshCollider_k__BackingField)) ::UnityW<::UnityEngine::MeshCollider>  _MeshCollider_k__BackingField;

/// @brief Field <MeshFilter>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__MeshFilter_k__BackingField, put=__cordl_internal_set__MeshFilter_k__BackingField)) ::UnityW<::UnityEngine::MeshFilter>  _MeshFilter_k__BackingField;

/// @brief Field <MeshRenderer>k__BackingField, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__MeshRenderer_k__BackingField, put=__cordl_internal_set__MeshRenderer_k__BackingField)) ::UnityW<::UnityEngine::MeshRenderer>  _MeshRenderer_k__BackingField;

/// @brief Field <Pad>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Pad_k__BackingField, put=setStaticF__Pad_k__BackingField)) int32_t  _Pad_k__BackingField;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AllocateTriangleData, addr 0x5dabd28, size 0xe8, virtual false, abstract: false, final false
inline void AllocateTriangleData(int32_t  length) ;

/// @brief Method AllocateVertexData, addr 0x5dabc40, size 0xe8, virtual false, abstract: false, final false
inline void AllocateVertexData(int32_t  length) ;

/// @brief Method Clear, addr 0x5dab7f4, size 0x34, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Dispose, addr 0x5dab568, size 0x110, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method DisposeAllExceptComponent, addr 0x5dab76c, size 0x88, virtual false, abstract: false, final false
inline void DisposeAllExceptComponent() ;

/// @brief Method DisposeMeshData, addr 0x5dab828, size 0x1ac, virtual false, abstract: false, final false
inline void DisposeMeshData() ;

/// @brief Method GetChunkName, addr 0x5dabb8c, size 0xb4, virtual false, abstract: false, final false
static inline ::StringW GetChunkName(::Unity::Mathematics::int3  id) ;

/// @brief Method GetLocalPosition, addr 0x5dabe10, size 0x30, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 GetLocalPosition(::Unity::Mathematics::int3  voxelPosition) ;

static inline ::Voxels::Chunk* New_ctor(::Voxels::ChunkDTO  dto) ;

static inline ::Voxels::Chunk* New_ctor(::Unity::Mathematics::int3  id, ::Unity::Mathematics::int3  size, int32_t  padding) ;

/// @brief Method SetComponent, addr 0x5dab9d4, size 0x1b8, virtual false, abstract: false, final false
inline void SetComponent(::Voxels::ChunkComponent*  chunkComponent) ;

/// @brief Method SetFrom, addr 0x5dab474, size 0xf4, virtual false, abstract: false, final false
inline void SetFrom(::Voxels::ChunkDTO  dto) ;

/// @brief Method ToString, addr 0x5dabe40, size 0x3b4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UpdateFrom, addr 0x5dab678, size 0xf4, virtual false, abstract: false, final false
inline void UpdateFrom(::Voxels::ChunkDTO  dto) ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_Density() const;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_Density() ;

constexpr ::Unity::Mathematics::int3 const& __cordl_internal_get_Dimensions() const;

constexpr ::Unity::Mathematics::int3& __cordl_internal_get_Dimensions() ;

constexpr ::System::Object* const& __cordl_internal_get_GenericMeshData() const;

constexpr ::System::Object*& __cordl_internal_get_GenericMeshData() ;

constexpr ::Unity::Mathematics::int3 const& __cordl_internal_get_Id() const;

constexpr ::Unity::Mathematics::int3& __cordl_internal_get_Id() ;

constexpr bool const& __cordl_internal_get_IsCollisionBaked() const;

constexpr bool& __cordl_internal_get_IsCollisionBaked() ;

constexpr bool const& __cordl_internal_get_IsDataChanged() const;

constexpr bool& __cordl_internal_get_IsDataChanged() ;

constexpr bool const& __cordl_internal_get_IsDataGenerated() const;

constexpr bool& __cordl_internal_get_IsDataGenerated() ;

constexpr bool const& __cordl_internal_get_IsDirty() const;

constexpr bool& __cordl_internal_get_IsDirty() ;

constexpr bool const& __cordl_internal_get_IsMeshAssigned() const;

constexpr bool& __cordl_internal_get_IsMeshAssigned() ;

constexpr bool const& __cordl_internal_get_IsMeshCreated() const;

constexpr bool& __cordl_internal_get_IsMeshCreated() ;

constexpr bool const& __cordl_internal_get_IsMeshGenerated() const;

constexpr bool& __cordl_internal_get_IsMeshGenerated() ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_Material() const;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_Material() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_Mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_Mesh() ;

constexpr ::Unity::Mathematics::int3 const& __cordl_internal_get_Size() const;

constexpr ::Unity::Mathematics::int3& __cordl_internal_get_Size() ;

constexpr ::Unity::Collections::NativeArray_1<uint16_t> const& __cordl_internal_get_TriangleData() const;

constexpr ::Unity::Collections::NativeArray_1<uint16_t>& __cordl_internal_get_TriangleData() ;

constexpr int32_t const& __cordl_internal_get_VertexCount() const;

constexpr int32_t& __cordl_internal_get_VertexCount() ;

constexpr ::Unity::Collections::NativeArray_1<::Voxels::MeshVertexData> const& __cordl_internal_get_VertexData() const;

constexpr ::Unity::Collections::NativeArray_1<::Voxels::MeshVertexData>& __cordl_internal_get_VertexData() ;

constexpr int32_t const& __cordl_internal_get_VoxelCount() const;

constexpr int32_t& __cordl_internal_get_VoxelCount() ;

constexpr ::UnityW<::Voxels::VoxelWorld> const& __cordl_internal_get_World() const;

constexpr ::UnityW<::Voxels::VoxelWorld>& __cordl_internal_get_World() ;

constexpr ::UnityW<::Voxels::ChunkComponent> const& __cordl_internal_get__Component_k__BackingField() const;

constexpr ::UnityW<::Voxels::ChunkComponent>& __cordl_internal_get__Component_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__GameObject_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__GameObject_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get__MeshCollider_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get__MeshCollider_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__MeshFilter_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__MeshFilter_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__MeshRenderer_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__MeshRenderer_k__BackingField() ;

constexpr void __cordl_internal_set_Density(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr void __cordl_internal_set_Dimensions(::Unity::Mathematics::int3  value) ;

constexpr void __cordl_internal_set_GenericMeshData(::System::Object*  value) ;

constexpr void __cordl_internal_set_Id(::Unity::Mathematics::int3  value) ;

constexpr void __cordl_internal_set_IsCollisionBaked(bool  value) ;

constexpr void __cordl_internal_set_IsDataChanged(bool  value) ;

constexpr void __cordl_internal_set_IsDataGenerated(bool  value) ;

constexpr void __cordl_internal_set_IsDirty(bool  value) ;

constexpr void __cordl_internal_set_IsMeshAssigned(bool  value) ;

constexpr void __cordl_internal_set_IsMeshCreated(bool  value) ;

constexpr void __cordl_internal_set_IsMeshGenerated(bool  value) ;

constexpr void __cordl_internal_set_Material(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr void __cordl_internal_set_Mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_Size(::Unity::Mathematics::int3  value) ;

constexpr void __cordl_internal_set_TriangleData(::Unity::Collections::NativeArray_1<uint16_t>  value) ;

constexpr void __cordl_internal_set_VertexCount(int32_t  value) ;

constexpr void __cordl_internal_set_VertexData(::Unity::Collections::NativeArray_1<::Voxels::MeshVertexData>  value) ;

constexpr void __cordl_internal_set_VoxelCount(int32_t  value) ;

constexpr void __cordl_internal_set_World(::UnityW<::Voxels::VoxelWorld>  value) ;

constexpr void __cordl_internal_set__Component_k__BackingField(::UnityW<::Voxels::ChunkComponent>  value) ;

constexpr void __cordl_internal_set__GameObject_k__BackingField(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__MeshCollider_k__BackingField(::UnityW<::UnityEngine::MeshCollider>  value) ;

constexpr void __cordl_internal_set__MeshFilter_k__BackingField(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set__MeshRenderer_k__BackingField(::UnityW<::UnityEngine::MeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x5dab270, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::Voxels::ChunkDTO  dto) ;

/// @brief Method .ctor, addr 0x5dab360, size 0x114, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3  id, ::Unity::Mathematics::int3  size, int32_t  padding) ;

static inline ::Unity::Mathematics::int3 getStaticF__DefaultSize_k__BackingField() ;

static inline int32_t getStaticF__Pad_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Component, addr 0x5dab050, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Voxels::ChunkComponent> get_Component() ;

/// [CompilerGenerated]
/// @brief Method get_DefaultSize, addr 0x5dab0a0, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 get_DefaultSize() ;

/// [CompilerGenerated]
/// @brief Method get_GameObject, addr 0x5dab060, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_GameObject() ;

/// [CompilerGenerated]
/// @brief Method get_MeshCollider, addr 0x5dab090, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::MeshCollider> get_MeshCollider() ;

/// [CompilerGenerated]
/// @brief Method get_MeshFilter, addr 0x5dab070, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::MeshFilter> get_MeshFilter() ;

/// [CompilerGenerated]
/// @brief Method get_MeshRenderer, addr 0x5dab080, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::MeshRenderer> get_MeshRenderer() ;

/// [CompilerGenerated]
/// @brief Method get_Pad, addr 0x5dab168, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_Pad() ;

/// @brief Method get_State, addr 0x5dab21c, size 0x54, virtual false, abstract: false, final false
inline ::Voxels::ChunkState get_State() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF__DefaultSize_k__BackingField(::Unity::Mathematics::int3  value) ;

static inline void setStaticF__Pad_k__BackingField(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Component, addr 0x5dab058, size 0x8, virtual false, abstract: false, final false
inline void set_Component(::Voxels::ChunkComponent*  value) ;

/// [CompilerGenerated]
/// @brief Method set_DefaultSize, addr 0x5dab0fc, size 0x6c, virtual false, abstract: false, final false
static inline void set_DefaultSize(::Unity::Mathematics::int3  value) ;

/// [CompilerGenerated]
/// @brief Method set_GameObject, addr 0x5dab068, size 0x8, virtual false, abstract: false, final false
inline void set_GameObject(::UnityEngine::GameObject*  value) ;

/// [CompilerGenerated]
/// @brief Method set_MeshCollider, addr 0x5dab098, size 0x8, virtual false, abstract: false, final false
inline void set_MeshCollider(::UnityEngine::MeshCollider*  value) ;

/// [CompilerGenerated]
/// @brief Method set_MeshFilter, addr 0x5dab078, size 0x8, virtual false, abstract: false, final false
inline void set_MeshFilter(::UnityEngine::MeshFilter*  value) ;

/// [CompilerGenerated]
/// @brief Method set_MeshRenderer, addr 0x5dab088, size 0x8, virtual false, abstract: false, final false
inline void set_MeshRenderer(::UnityEngine::MeshRenderer*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Pad, addr 0x5dab1c0, size 0x5c, virtual false, abstract: false, final false
static inline void set_Pad(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Chunk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Chunk", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Chunk(Chunk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Chunk", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Chunk(Chunk const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5002};

/// @brief Field World, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Voxels::VoxelWorld>  ___World;

/// @brief Field Id, offset: 0x18, size: 0xc, def value: None
 ::Unity::Mathematics::int3  ___Id;

/// @brief Field Size, offset: 0x24, size: 0xc, def value: None
 ::Unity::Mathematics::int3  ___Size;

/// @brief Field Dimensions, offset: 0x30, size: 0xc, def value: None
 ::Unity::Mathematics::int3  ___Dimensions;

/// @brief Field VoxelCount, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___VoxelCount;

/// @brief Field Density, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  ___Density;

/// @brief Field Material, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  ___Material;

/// @brief Field VertexData, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Voxels::MeshVertexData>  ___VertexData;

/// @brief Field TriangleData, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint16_t>  ___TriangleData;

/// @brief Field GenericMeshData, offset: 0x80, size: 0x8, def value: None
 ::System::Object*  ___GenericMeshData;

/// @brief Field IsDataGenerated, offset: 0x88, size: 0x1, def value: None
 bool  ___IsDataGenerated;

/// @brief Field IsDataChanged, offset: 0x89, size: 0x1, def value: None
 bool  ___IsDataChanged;

/// @brief Field IsMeshGenerated, offset: 0x8a, size: 0x1, def value: None
 bool  ___IsMeshGenerated;

/// @brief Field IsMeshCreated, offset: 0x8b, size: 0x1, def value: None
 bool  ___IsMeshCreated;

/// @brief Field IsCollisionBaked, offset: 0x8c, size: 0x1, def value: None
 bool  ___IsCollisionBaked;

/// @brief Field IsMeshAssigned, offset: 0x8d, size: 0x1, def value: None
 bool  ___IsMeshAssigned;

/// @brief Field IsDirty, offset: 0x8e, size: 0x1, def value: None
 bool  ___IsDirty;

/// @brief Field VertexCount, offset: 0x90, size: 0x4, def value: None
 int32_t  ___VertexCount;

/// @brief Field Mesh, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___Mesh;

/// [CompilerGenerated]
/// @brief Field <Component>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::Voxels::ChunkComponent>  ____Component_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GameObject>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____GameObject_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MeshFilter>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ____MeshFilter_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MeshRenderer>k__BackingField, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____MeshRenderer_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MeshCollider>k__BackingField, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshCollider>  ____MeshCollider_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::Chunk, ___World) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ___Id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ___Size) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ___Dimensions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ___VoxelCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ___Density) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ___Material) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ___VertexData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ___TriangleData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ___GenericMeshData) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ___IsDataGenerated) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ___IsDataChanged) == 0x89, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ___IsMeshGenerated) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ___IsMeshCreated) == 0x8b, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ___IsCollisionBaked) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ___IsMeshAssigned) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ___IsDirty) == 0x8e, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ___VertexCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ___Mesh) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ____Component_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ____GameObject_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ____MeshFilter_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ____MeshRenderer_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Voxels::Chunk, ____MeshCollider_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::Voxels::Chunk) == 0xc8, "Size mismatch!");

} // namespace end def Voxels
