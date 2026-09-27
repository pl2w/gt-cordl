#pragma once
// IWYU pragma private; include "UnityEngine/Mesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Mesh)
namespace GlobalNamespace {
struct GraphicsBuffer_Target;
}
namespace GlobalNamespace {
struct Mesh_LodSelectionCurve;
}
namespace GlobalNamespace {
struct Mesh_MeshDataArray;
}
namespace GlobalNamespace {
struct Mesh_MeshData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Array;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct BlittableListWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct BlendShapeBufferLayout;
}
namespace UnityEngine::Rendering {
struct IndexFormat;
}
namespace UnityEngine::Rendering {
struct MeshUpdateFlags;
}
namespace UnityEngine::Rendering {
struct SubMeshDescriptor;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace UnityEngine::Rendering {
struct VertexAttributeFormat;
}
namespace UnityEngine::Rendering {
struct VertexAttribute;
}
namespace UnityEngine {
struct BlendShapeBufferRange;
}
namespace UnityEngine {
struct BlendShape;
}
namespace UnityEngine {
struct BoneWeight1;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct CombineInstance;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct MeshLodRange;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine {
struct SkinWeights;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class Mesh;
}
// Write type traits
MARK_REF_T(::UnityEngine::Mesh*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Mesh*, "UnityEngine", "Mesh");
// [RequiredByNativeCode]
// [ExcludeFromPreset]
// [NativeHeader("Runtime/Graphics/Mesh/MeshScriptBindings.h")]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Mesh
class CORDL_TYPE Mesh : public ::UnityEngine::Object {
public:
// Declarations
using LodSelectionCurve = ::GlobalNamespace::Mesh_LodSelectionCurve;

using MeshData = ::GlobalNamespace::Mesh_MeshData;

using MeshDataArray = ::GlobalNamespace::Mesh_MeshDataArray;

 __declspec(property(get=get_bindposeCount)) int32_t  bindposeCount;

/// @brief [NativeName("BindPosesFromScript")]
 __declspec(property(get=get_bindposes, put=set_bindposes)) ::ArrayW<::UnityEngine::Matrix4x4>  bindposes;

 __declspec(property(get=get_blendShapeCount)) int32_t  blendShapeCount;

 __declspec(property(get=get_boneWeights, put=set_boneWeights)) ::ArrayW<::UnityEngine::BoneWeight>  boneWeights;

 __declspec(property(get=get_bounds, put=set_bounds)) ::UnityEngine::Bounds  bounds;

 __declspec(property(get=get_canAccess)) bool  canAccess;

 __declspec(property(get=get_colors, put=set_colors)) ::ArrayW<::UnityEngine::Color>  colors;

 __declspec(property(get=get_colors32, put=set_colors32)) ::ArrayW<::UnityEngine::Color32>  colors32;

 __declspec(property(get=get_indexBufferTarget, put=set_indexBufferTarget)) ::GlobalNamespace::GraphicsBuffer_Target  indexBufferTarget;

 __declspec(property(get=get_indexFormat, put=set_indexFormat)) ::UnityEngine::Rendering::IndexFormat  indexFormat;

 __declspec(property(get=get_isLodSelectionActive)) bool  isLodSelectionActive;

 __declspec(property(get=get_isReadable)) bool  isReadable;

 __declspec(property(get=get_lodCount, put=set_lodCount)) int32_t  lodCount;

 __declspec(property(get=get_lodSelectionCurve, put=set_lodSelectionCurve)) ::GlobalNamespace::Mesh_LodSelectionCurve  lodSelectionCurve;

 __declspec(property(get=get_normals, put=set_normals)) ::ArrayW<::UnityEngine::Vector3>  normals;

 __declspec(property(get=get_skinWeightBufferLayout)) ::UnityEngine::SkinWeights  skinWeightBufferLayout;

 __declspec(property(get=get_subMeshCount, put=set_subMeshCount)) int32_t  subMeshCount;

 __declspec(property(get=get_tangents, put=set_tangents)) ::ArrayW<::UnityEngine::Vector4>  tangents;

 __declspec(property(get=get_triangles, put=set_triangles)) ::ArrayW<int32_t>  triangles;

 __declspec(property(get=get_uv, put=set_uv)) ::ArrayW<::UnityEngine::Vector2>  uv;

 __declspec(property(get=get_uv2, put=set_uv2)) ::ArrayW<::UnityEngine::Vector2>  uv2;

 __declspec(property(get=get_uv3, put=set_uv3)) ::ArrayW<::UnityEngine::Vector2>  uv3;

 __declspec(property(get=get_uv4, put=set_uv4)) ::ArrayW<::UnityEngine::Vector2>  uv4;

 __declspec(property(get=get_uv5, put=set_uv5)) ::ArrayW<::UnityEngine::Vector2>  uv5;

 __declspec(property(get=get_uv6, put=set_uv6)) ::ArrayW<::UnityEngine::Vector2>  uv6;

 __declspec(property(get=get_uv7, put=set_uv7)) ::ArrayW<::UnityEngine::Vector2>  uv7;

 __declspec(property(get=get_uv8, put=set_uv8)) ::ArrayW<::UnityEngine::Vector2>  uv8;

 __declspec(property(get=get_vertexAttributeCount)) int32_t  vertexAttributeCount;

 __declspec(property(get=get_vertexBufferCount)) int32_t  vertexBufferCount;

 __declspec(property(get=get_vertexBufferTarget, put=set_vertexBufferTarget)) ::GlobalNamespace::GraphicsBuffer_Target  vertexBufferTarget;

 __declspec(property(get=get_vertexCount)) int32_t  vertexCount;

 __declspec(property(get=get_vertices, put=set_vertices)) ::ArrayW<::UnityEngine::Vector3>  vertices;

/// @brief Method AcquireReadOnlyMeshData, addr 0xb5a9f4c, size 0x30, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Mesh_MeshDataArray AcquireReadOnlyMeshData(::UnityEngine::Mesh*  mesh) ;

/// @brief Method AcquireReadOnlyMeshData, addr 0xb5aa16c, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Mesh_MeshDataArray AcquireReadOnlyMeshData(::ArrayW<::UnityEngine::Mesh*>  meshes) ;

/// @brief Method AcquireReadOnlyMeshData, addr 0xb5aa4c0, size 0x100, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Mesh_MeshDataArray AcquireReadOnlyMeshData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  meshes) ;

/// @brief Method AddBlendShapeFrame, addr 0xb5a43dc, size 0xc4, virtual false, abstract: false, final false
inline void AddBlendShapeFrame(::StringW  shapeName, float_t  frameWeight, ::ArrayW<::UnityEngine::Vector3>  deltaVertices, ::ArrayW<::UnityEngine::Vector3>  deltaNormals, ::ArrayW<::UnityEngine::Vector3>  deltaTangents) ;

/// [FreeFunction(Name = "AddBlendShapeFrameFromScript", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method AddBlendShapeFrame, addr 0xb5a40bc, size 0x2a4, virtual false, abstract: false, final false
inline void AddBlendShapeFrame(::StringW  shapeName, float_t  frameWeight, ::System::ReadOnlySpan_1<::UnityEngine::Vector3>  deltaVertices, ::System::ReadOnlySpan_1<::UnityEngine::Vector3>  deltaNormals, ::System::ReadOnlySpan_1<::UnityEngine::Vector3>  deltaTangents) ;

/// @brief Method AddBlendShapeFrame_Injected, addr 0xb5a4360, size 0x7c, virtual false, abstract: false, final false
static inline void AddBlendShapeFrame_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  shapeName, float_t  frameWeight, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  deltaVertices, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  deltaNormals, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  deltaTangents) ;

/// @brief Method AllocateWritableMeshData, addr 0xb5aa70c, size 0x30, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Mesh_MeshDataArray AllocateWritableMeshData(::UnityEngine::Mesh*  mesh) ;

/// @brief Method AllocateWritableMeshData, addr 0xb5aa5c0, size 0x28, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Mesh_MeshDataArray AllocateWritableMeshData(int32_t  meshCount) ;

/// @brief Method AllocateWritableMeshData, addr 0xb5aa73c, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Mesh_MeshDataArray AllocateWritableMeshData(::ArrayW<::UnityEngine::Mesh*>  meshes) ;

/// @brief Method AllocateWritableMeshData, addr 0xb5aa7d8, size 0x100, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Mesh_MeshDataArray AllocateWritableMeshData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  meshes) ;

/// @brief Method ApplyAndDisposeWritableMeshData, addr 0xb5aa8d8, size 0x17c, virtual false, abstract: false, final false
static inline void ApplyAndDisposeWritableMeshData(::GlobalNamespace::Mesh_MeshDataArray  data, ::UnityEngine::Mesh*  mesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method ApplyAndDisposeWritableMeshData, addr 0xb5aab24, size 0x14c, virtual false, abstract: false, final false
static inline void ApplyAndDisposeWritableMeshData(::GlobalNamespace::Mesh_MeshDataArray  data, ::ArrayW<::UnityEngine::Mesh*>  meshes, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method ApplyAndDisposeWritableMeshData, addr 0xb5aae54, size 0x1c8, virtual false, abstract: false, final false
static inline void ApplyAndDisposeWritableMeshData(::GlobalNamespace::Mesh_MeshDataArray  data, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  meshes, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method CheckCanAccessSubmesh, addr 0xb5ab780, size 0x104, virtual false, abstract: false, final false
inline bool CheckCanAccessSubmesh(int32_t  submesh, bool  errorAboutTriangles) ;

/// @brief Method CheckCanAccessSubmeshIndices, addr 0xb5ab88c, size 0x8, virtual false, abstract: false, final false
inline bool CheckCanAccessSubmeshIndices(int32_t  submesh) ;

/// @brief Method CheckCanAccessSubmeshTriangles, addr 0xb5ab884, size 0x8, virtual false, abstract: false, final false
inline bool CheckCanAccessSubmeshTriangles(int32_t  submesh) ;

/// @brief Method CheckIndicesArrayRange, addr 0xb5ac904, size 0x19c, virtual false, abstract: false, final false
inline void CheckIndicesArrayRange(int32_t  valuesLength, int32_t  start, int32_t  length) ;

/// [ExcludeFromDocs]
/// @brief Method Clear, addr 0xb5af6b0, size 0x8, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Clear, addr 0xb5af6ac, size 0x4, virtual false, abstract: false, final false
inline void Clear(/* [DefaultValue("true")] */ bool  keepVertexLayout) ;

/// [FreeFunction(Name = "MeshScripting::ClearBlendShapes", HasExplicitThis = true)]
/// @brief Method ClearBlendShapes, addr 0xb5a38c0, size 0x78, virtual false, abstract: false, final false
inline void ClearBlendShapes() ;

/// @brief Method ClearBlendShapes_Injected, addr 0xb5a3938, size 0x3c, virtual false, abstract: false, final false
static inline void ClearBlendShapes_Injected(::System::IntPtr  _unity_self) ;

/// [NativeMethod("Clear")]
/// @brief Method ClearImpl, addr 0xb5a6d58, size 0x80, virtual false, abstract: false, final false
inline void ClearImpl(bool  keepVertexLayout) ;

/// @brief Method ClearImpl_Injected, addr 0xb5a6dd8, size 0x44, virtual false, abstract: false, final false
static inline void ClearImpl_Injected(::System::IntPtr  _unity_self, bool  keepVertexLayout) ;

/// [ExcludeFromDocs]
/// @brief Method CombineMeshes, addr 0xb5afdb0, size 0x10, virtual false, abstract: false, final false
inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance>  combine) ;

/// [ExcludeFromDocs]
/// @brief Method CombineMeshes, addr 0xb5afda4, size 0xc, virtual false, abstract: false, final false
inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance>  combine, bool  mergeSubMeshes) ;

/// [ExcludeFromDocs]
/// @brief Method CombineMeshes, addr 0xb5afd9c, size 0x8, virtual false, abstract: false, final false
inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance>  combine, bool  mergeSubMeshes, bool  useMatrices) ;

/// @brief Method CombineMeshes, addr 0xb5afd98, size 0x4, virtual false, abstract: false, final false
inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance>  combine, /* [DefaultValue("true")] */ bool  mergeSubMeshes, /* [DefaultValue("true")] */ bool  useMatrices, /* [DefaultValue("false")] */ bool  hasLightmapData) ;

/// [NativeMethod(Name = "MeshScripting::CombineMeshes", IsFreeFunction = true, ThrowsException = true, HasExplicitThis = true)]
/// @brief Method CombineMeshesImpl, addr 0xb5a75d4, size 0x124, virtual false, abstract: false, final false
inline void CombineMeshesImpl(::ArrayW<::UnityEngine::CombineInstance>  combine, bool  mergeSubMeshes, bool  useMatrices, bool  hasLightmapData) ;

/// @brief Method CombineMeshesImpl_Injected, addr 0xb5a76f8, size 0x6c, virtual false, abstract: false, final false
static inline void CombineMeshesImpl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  combine, bool  mergeSubMeshes, bool  useMatrices, bool  hasLightmapData) ;

/// @brief Method DefaultDimensionForChannel, addr 0xb5a79f4, size 0x9c, virtual false, abstract: false, final false
static inline int32_t DefaultDimensionForChannel(::UnityEngine::Rendering::VertexAttribute  channel) ;

/// [FreeFunction("MeshScripting::MeshFromInstanceId")]
/// @brief Method FromInstanceID, addr 0xb5a0280, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> FromInstanceID(::UnityEngine::EntityId  id) ;

/// @brief Method FromInstanceID_Injected, addr 0xb5a02f0, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr FromInstanceID_Injected(::by_ref<::UnityEngine::EntityId>  id) ;

/// @brief Method GetAllBoneWeights, addr 0xb5a4af8, size 0x6c, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> GetAllBoneWeights() ;

/// [FreeFunction(Name = "MeshScripting::GetAllBoneWeightsArray", HasExplicitThis = true)]
/// @brief Method GetAllBoneWeightsArray, addr 0xb5a4b64, size 0x78, virtual false, abstract: false, final false
inline ::System::IntPtr GetAllBoneWeightsArray() ;

/// [FreeFunction(Name = "MeshScripting::GetAllBoneWeightsArraySize", HasExplicitThis = true)]
/// @brief Method GetAllBoneWeightsArraySize, addr 0xb5a4bdc, size 0x78, virtual false, abstract: false, final false
inline int32_t GetAllBoneWeightsArraySize() ;

/// @brief Method GetAllBoneWeightsArraySize_Injected, addr 0xb5a4dc0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetAllBoneWeightsArraySize_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetAllBoneWeightsArray_Injected, addr 0xb5a4eb0, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetAllBoneWeightsArray_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetAllocArrayFromChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T> GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute  channel) ;

/// @brief Method GetAllocArrayFromChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T> GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim) ;

/// [FreeFunction(Name = "AllocExtractMeshComponentFromScript", HasExplicitThis = true)]
/// @brief Method GetAllocArrayFromChannelImpl, addr 0xb5a2cd4, size 0x98, virtual false, abstract: false, final false
inline ::System::Array* GetAllocArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim) ;

/// @brief Method GetAllocArrayFromChannelImpl_Injected, addr 0xb5a2d6c, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Array* GetAllocArrayFromChannelImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim) ;

/// [FreeFunction(Name = "ExtractMeshComponentFromScript", HasExplicitThis = true)]
/// @brief Method GetArrayFromChannelImpl, addr 0xb5a2dc8, size 0xa8, virtual false, abstract: false, final false
inline void GetArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Array*  values) ;

/// @brief Method GetArrayFromChannelImpl_Injected, addr 0xb5a2e70, size 0x6c, virtual false, abstract: false, final false
static inline void GetArrayFromChannelImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Array*  values) ;

/// @brief Method GetBaseVertex, addr 0xb5ac888, size 0x7c, virtual false, abstract: false, final false
inline uint32_t GetBaseVertex(int32_t  submesh) ;

/// [FreeFunction(Name = "MeshScripting::GetBaseVertex", HasExplicitThis = true)]
/// @brief Method GetBaseVertexImpl, addr 0xb5a1670, size 0x80, virtual false, abstract: false, final false
inline uint32_t GetBaseVertexImpl(int32_t  submesh) ;

/// @brief Method GetBaseVertexImpl_Injected, addr 0xb5a16f0, size 0x44, virtual false, abstract: false, final false
static inline uint32_t GetBaseVertexImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh) ;

/// @brief Method GetBindposes, addr 0xb5a52b4, size 0x6c, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> GetBindposes() ;

/// @brief Method GetBindposes, addr 0xb5af484, size 0x10c, virtual false, abstract: false, final false
inline void GetBindposes(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  bindposes) ;

/// [FreeFunction(Name = "MeshScripting::GetBindposesArray", HasExplicitThis = true)]
/// @brief Method GetBindposesArray, addr 0xb5a5320, size 0x78, virtual false, abstract: false, final false
inline ::System::IntPtr GetBindposesArray() ;

/// @brief Method GetBindposesArray_Injected, addr 0xb5a5560, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetBindposesArray_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "MeshScripting::ExtractBindPosesIntoArray", HasExplicitThis = true)]
/// @brief Method GetBindposesNonAllocImpl, addr 0xb5a572c, size 0x14c, virtual false, abstract: false, final false
inline void GetBindposesNonAllocImpl(::by_ref<::ArrayW<::UnityEngine::Matrix4x4>>  values) ;

/// @brief Method GetBindposesNonAllocImpl_Injected, addr 0xb5a5878, size 0x44, virtual false, abstract: false, final false
static inline void GetBindposesNonAllocImpl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  values) ;

/// @brief Method GetBlendShapeBuffer, addr 0xb5ab51c, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetBlendShapeBuffer() ;

/// @brief Method GetBlendShapeBuffer, addr 0xb5ab40c, size 0x110, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetBlendShapeBuffer(::UnityEngine::Rendering::BlendShapeBufferLayout  layout) ;

/// [FreeFunction(Name = "MeshScripting::GetBlendShapeBufferPtr", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetBlendShapeBufferImpl, addr 0xb5a3444, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetBlendShapeBufferImpl(int32_t  layout) ;

/// @brief Method GetBlendShapeBufferImpl_Injected, addr 0xb5a34d8, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetBlendShapeBufferImpl_Injected(::System::IntPtr  _unity_self, int32_t  layout) ;

/// @brief Method GetBlendShapeBufferRange, addr 0xb5ab61c, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::BlendShapeBufferRange GetBlendShapeBufferRange(int32_t  blendShapeIndex) ;

/// [FreeFunction(Name = "MeshScripting::GetBlendShapeFrameCount", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetBlendShapeFrameCount, addr 0xb5a3cec, size 0x80, virtual false, abstract: false, final false
inline int32_t GetBlendShapeFrameCount(int32_t  shapeIndex) ;

/// @brief Method GetBlendShapeFrameCount_Injected, addr 0xb5a3d6c, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetBlendShapeFrameCount_Injected(::System::IntPtr  _unity_self, int32_t  shapeIndex) ;

/// [FreeFunction(Name = "GetBlendShapeFrameVerticesFromScript", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetBlendShapeFrameVertices, addr 0xb5a3e94, size 0x1b4, virtual false, abstract: false, final false
inline void GetBlendShapeFrameVertices(int32_t  shapeIndex, int32_t  frameIndex, ::ArrayW<::UnityEngine::Vector3>  deltaVertices, ::ArrayW<::UnityEngine::Vector3>  deltaNormals, ::ArrayW<::UnityEngine::Vector3>  deltaTangents) ;

/// @brief Method GetBlendShapeFrameVertices_Injected, addr 0xb5a4048, size 0x74, virtual false, abstract: false, final false
static inline void GetBlendShapeFrameVertices_Injected(::System::IntPtr  _unity_self, int32_t  shapeIndex, int32_t  frameIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  deltaVertices, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  deltaNormals, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  deltaTangents) ;

/// [FreeFunction(Name = "MeshScripting::GetBlendShapeFrameWeight", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetBlendShapeFrameWeight, addr 0xb5a3db0, size 0x90, virtual false, abstract: false, final false
inline float_t GetBlendShapeFrameWeight(int32_t  shapeIndex, int32_t  frameIndex) ;

/// @brief Method GetBlendShapeFrameWeight_Injected, addr 0xb5a3e40, size 0x54, virtual false, abstract: false, final false
static inline float_t GetBlendShapeFrameWeight_Injected(::System::IntPtr  _unity_self, int32_t  shapeIndex, int32_t  frameIndex) ;

/// [FreeFunction(Name = "MeshScripting::GetBlendShapeIndex", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetBlendShapeIndex, addr 0xb5a3b00, size 0x1a8, virtual false, abstract: false, final false
inline int32_t GetBlendShapeIndex(::StringW  blendShapeName) ;

/// @brief Method GetBlendShapeIndex_Injected, addr 0xb5a3ca8, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetBlendShapeIndex_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  blendShapeName) ;

/// [FreeFunction(Name = "MeshScripting::GetBlendShapeName", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetBlendShapeName, addr 0xb5a3974, size 0x138, virtual false, abstract: false, final false
inline ::StringW GetBlendShapeName(int32_t  shapeIndex) ;

/// @brief Method GetBlendShapeName_Injected, addr 0xb5a3aac, size 0x54, virtual false, abstract: false, final false
static inline void GetBlendShapeName_Injected(::System::IntPtr  _unity_self, int32_t  shapeIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction(Name = "MeshScripting::GetBlendShapeOffset", HasExplicitThis = true)]
/// @brief Method GetBlendShapeOffsetInternal, addr 0xb5a44a0, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::BlendShape GetBlendShapeOffsetInternal(int32_t  index) ;

/// @brief Method GetBlendShapeOffsetInternal_Injected, addr 0xb5a4540, size 0x54, virtual false, abstract: false, final false
static inline void GetBlendShapeOffsetInternal_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::BlendShape>  ret) ;

/// @brief Method GetBoneWeightBuffer, addr 0xb5ab164, size 0x2a8, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetBoneWeightBuffer(::UnityEngine::SkinWeights  layout) ;

/// [FreeFunction(Name = "MeshScripting::GetBoneWeightBufferPtr", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetBoneWeightBufferImpl, addr 0xb5a336c, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetBoneWeightBufferImpl(int32_t  bonesPerVertex) ;

/// @brief Method GetBoneWeightBufferImpl_Injected, addr 0xb5a3400, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetBoneWeightBufferImpl_Injected(::System::IntPtr  _unity_self, int32_t  bonesPerVertex) ;

/// [NativeMethod("GetBoneWeightBufferDimension")]
/// @brief Method GetBoneWeightBufferLayoutInternal, addr 0xb5a4dfc, size 0x78, virtual false, abstract: false, final false
inline int32_t GetBoneWeightBufferLayoutInternal() ;

/// @brief Method GetBoneWeightBufferLayoutInternal_Injected, addr 0xb5a4e74, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetBoneWeightBufferLayoutInternal_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetBoneWeights, addr 0xb5af590, size 0x110, virtual false, abstract: false, final false
inline void GetBoneWeights(::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>*  boneWeights) ;

/// [FreeFunction(Name = "MeshScripting::GetBoneWeights", HasExplicitThis = true)]
/// @brief Method GetBoneWeightsImpl, addr 0xb5a4648, size 0x154, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::BoneWeight> GetBoneWeightsImpl() ;

/// @brief Method GetBoneWeightsImpl_Injected, addr 0xb5a479c, size 0x44, virtual false, abstract: false, final false
static inline void GetBoneWeightsImpl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// [FreeFunction(Name = "MeshScripting::ExtractBoneWeightsIntoArray", HasExplicitThis = true)]
/// @brief Method GetBoneWeightsNonAllocImpl, addr 0xb5a559c, size 0x14c, virtual false, abstract: false, final false
inline void GetBoneWeightsNonAllocImpl(::by_ref<::ArrayW<::UnityEngine::BoneWeight>>  values) ;

/// @brief Method GetBoneWeightsNonAllocImpl_Injected, addr 0xb5a56e8, size 0x44, virtual false, abstract: false, final false
static inline void GetBoneWeightsNonAllocImpl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  values) ;

/// @brief Method GetBonesPerVertex, addr 0xb5a4c54, size 0x7c, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<uint8_t> GetBonesPerVertex() ;

/// [FreeFunction(Name = "MeshScripting::GetBonesPerVertexArray", HasExplicitThis = true)]
/// @brief Method GetBonesPerVertexArray, addr 0xb5a4d48, size 0x78, virtual false, abstract: false, final false
inline ::System::IntPtr GetBonesPerVertexArray() ;

/// @brief Method GetBonesPerVertexArray_Injected, addr 0xb5a4eec, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetBonesPerVertexArray_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetColors, addr 0xb5a948c, size 0xc8, virtual false, abstract: false, final false
inline void GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  colors) ;

/// @brief Method GetColors, addr 0xb5a919c, size 0xc4, virtual false, abstract: false, final false
inline void GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  colors) ;

/// @brief Method GetIndexBuffer, addr 0xb5ab0c8, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetIndexBuffer() ;

/// [FreeFunction(Name = "MeshScripting::GetIndexBufferPtr", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetIndexBufferImpl, addr 0xb5a32a4, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetIndexBufferImpl() ;

/// @brief Method GetIndexBufferImpl_Injected, addr 0xb5a3330, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetIndexBufferImpl_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetIndexCount, addr 0xb5ac808, size 0x80, virtual false, abstract: false, final false
inline uint32_t GetIndexCount(int32_t  submesh) ;

/// @brief Method GetIndexCount, addr 0xb5ac3a0, size 0x130, virtual false, abstract: false, final false
inline uint32_t GetIndexCount(int32_t  submesh, int32_t  meshLod) ;

/// [FreeFunction(Name = "MeshScripting::GetIndexCount", HasExplicitThis = true)]
/// @brief Method GetIndexCountImpl, addr 0xb5a14a8, size 0x90, virtual false, abstract: false, final false
inline uint32_t GetIndexCountImpl(int32_t  submesh, int32_t  meshlod) ;

/// @brief Method GetIndexCountImpl_Injected, addr 0xb5a1538, size 0x54, virtual false, abstract: false, final false
static inline uint32_t GetIndexCountImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh, int32_t  meshlod) ;

/// @brief Method GetIndexStart, addr 0xb5ac658, size 0x80, virtual false, abstract: false, final false
inline uint32_t GetIndexStart(int32_t  submesh) ;

/// @brief Method GetIndexStart, addr 0xb5ac6d8, size 0x130, virtual false, abstract: false, final false
inline uint32_t GetIndexStart(int32_t  submesh, int32_t  meshLod) ;

/// [FreeFunction(Name = "MeshScripting::GetIndexStart", HasExplicitThis = true)]
/// @brief Method GetIndexStartImpl, addr 0xb5a13c4, size 0x90, virtual false, abstract: false, final false
inline uint32_t GetIndexStartImpl(int32_t  submesh, int32_t  meshlod) ;

/// @brief Method GetIndexStartImpl_Injected, addr 0xb5a1454, size 0x54, virtual false, abstract: false, final false
static inline uint32_t GetIndexStartImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh, int32_t  meshlod) ;

/// [ExcludeFromDocs]
/// @brief Method GetIndices, addr 0xb5ac008, size 0xc, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetIndices(int32_t  submesh) ;

/// @brief Method GetIndices, addr 0xb5ac154, size 0xc, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetIndices(int32_t  submesh, /* [DefaultValue("true")] */ bool  applyBaseVertex) ;

/// @brief Method GetIndices, addr 0xb5ac014, size 0x140, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetIndices(int32_t  submesh, int32_t  meshLod, bool  applyBaseVertex) ;

/// [ExcludeFromDocs]
/// @brief Method GetIndices, addr 0xb5ac160, size 0xc, virtual false, abstract: false, final false
inline void GetIndices(::System::Collections::Generic::List_1<int32_t>*  indices, int32_t  submesh) ;

/// @brief Method GetIndices, addr 0xb5ac394, size 0xc, virtual false, abstract: false, final false
inline void GetIndices(::System::Collections::Generic::List_1<int32_t>*  indices, int32_t  submesh, /* [DefaultValue("true")] */ bool  applyBaseVertex) ;

/// @brief Method GetIndices, addr 0xb5ac16c, size 0x228, virtual false, abstract: false, final false
inline void GetIndices(::System::Collections::Generic::List_1<int32_t>*  indices, int32_t  submesh, int32_t  meshLod, bool  applyBaseVertex) ;

/// @brief Method GetIndices, addr 0xb5ac4d0, size 0xc, virtual false, abstract: false, final false
inline void GetIndices(::System::Collections::Generic::List_1<uint16_t>*  indices, int32_t  submesh, bool  applyBaseVertex) ;

/// @brief Method GetIndices, addr 0xb5ac4dc, size 0x17c, virtual false, abstract: false, final false
inline void GetIndices(::System::Collections::Generic::List_1<uint16_t>*  indices, int32_t  submesh, int32_t  meshLod, bool  applyBaseVertex) ;

/// [FreeFunction(Name = "MeshScripting::GetIndices", HasExplicitThis = true)]
/// @brief Method GetIndicesImpl, addr 0xb5a1910, size 0x170, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetIndicesImpl(int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod) ;

/// @brief Method GetIndicesImpl_Injected, addr 0xb5a1a80, size 0x6c, virtual false, abstract: false, final false
static inline void GetIndicesImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// [FreeFunction(Name = "MeshScripting::ExtractIndicesToArray", HasExplicitThis = true)]
/// @brief Method GetIndicesNonAllocImpl, addr 0xb5a21a4, size 0x16c, virtual false, abstract: false, final false
inline void GetIndicesNonAllocImpl(::by_ref<::ArrayW<int32_t>>  values, int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod) ;

/// [FreeFunction(Name = "MeshScripting::ExtractIndicesToArray16", HasExplicitThis = true)]
/// @brief Method GetIndicesNonAllocImpl16, addr 0xb5a237c, size 0x16c, virtual false, abstract: false, final false
inline void GetIndicesNonAllocImpl16(::by_ref<::ArrayW<uint16_t>>  values, int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod) ;

/// @brief Method GetIndicesNonAllocImpl16_Injected, addr 0xb5a24e8, size 0x6c, virtual false, abstract: false, final false
static inline void GetIndicesNonAllocImpl16_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  values, int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod) ;

/// @brief Method GetIndicesNonAllocImpl_Injected, addr 0xb5a2310, size 0x6c, virtual false, abstract: false, final false
static inline void GetIndicesNonAllocImpl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  values, int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod) ;

/// @brief Method GetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetListForChannel(::System::Collections::Generic::List_1<T>*  buffer, int32_t  capacity, ::UnityEngine::Rendering::VertexAttribute  channel, int32_t  dim) ;

/// @brief Method GetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetListForChannel(::System::Collections::Generic::List_1<T>*  buffer, int32_t  capacity, ::UnityEngine::Rendering::VertexAttribute  channel, int32_t  dim, ::UnityEngine::Rendering::VertexAttributeFormat  channelType) ;

/// [FreeFunction("MeshScripting::GetLod", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetLod, addr 0xb5a6ab0, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::MeshLodRange GetLod(int32_t  subMeshIndex, int32_t  levelIndex) ;

/// [FreeFunction("MeshScripting::GetLodCount", HasExplicitThis = true)]
/// @brief Method GetLodCount, addr 0xb5a6930, size 0x78, virtual false, abstract: false, final false
inline int32_t GetLodCount() ;

/// @brief Method GetLodCount_Injected, addr 0xb5a69a8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetLodCount_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction("MeshScripting::GetLodSelectionCurve", HasExplicitThis = true)]
/// @brief Method GetLodSelectionCurve, addr 0xb5a69e4, size 0x88, virtual false, abstract: false, final false
inline ::GlobalNamespace::Mesh_LodSelectionCurve GetLodSelectionCurve() ;

/// @brief Method GetLodSelectionCurve_Injected, addr 0xb5a6a6c, size 0x44, virtual false, abstract: false, final false
static inline void GetLodSelectionCurve_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::Mesh_LodSelectionCurve>  ret) ;

/// @brief Method GetLod_Injected, addr 0xb5a6b50, size 0x5c, virtual false, abstract: false, final false
static inline void GetLod_Injected(::System::IntPtr  _unity_self, int32_t  subMeshIndex, int32_t  levelIndex, ::by_ref<::UnityEngine::MeshLodRange>  ret) ;

/// @brief Method GetLods, addr 0xb5af33c, size 0x28, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::MeshLodRange> GetLods(int32_t  submesh) ;

/// @brief Method GetLods, addr 0xb5af364, size 0x120, virtual false, abstract: false, final false
inline void GetLods(::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>*  levels, int32_t  submesh) ;

/// [FreeFunction("MeshScripting::GetLods", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetLodsAlloc, addr 0xb5a65d4, size 0x160, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::MeshLodRange> GetLodsAlloc(int32_t  subMeshIndex) ;

/// @brief Method GetLodsAlloc_Injected, addr 0xb5a6734, size 0x54, virtual false, abstract: false, final false
static inline void GetLodsAlloc_Injected(::System::IntPtr  _unity_self, int32_t  subMeshIndex, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// [FreeFunction(Name = "MeshScripting::GetLodsNonAlloc", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetLodsNonAlloc, addr 0xb5a6788, size 0x154, virtual false, abstract: false, final false
inline void GetLodsNonAlloc(::by_ref<::ArrayW<::UnityEngine::MeshLodRange>>  levels, int32_t  subMeshIndex) ;

/// @brief Method GetLodsNonAlloc_Injected, addr 0xb5a68dc, size 0x54, virtual false, abstract: false, final false
static inline void GetLodsNonAlloc_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  levels, int32_t  subMeshIndex) ;

/// [FreeFunction(Name = "MeshScripting::GetNativeIndexBufferPtr", HasExplicitThis = true)]
/// @brief Method GetNativeIndexBufferPtr, addr 0xb5a3118, size 0x78, virtual false, abstract: false, final false
inline ::System::IntPtr GetNativeIndexBufferPtr() ;

/// @brief Method GetNativeIndexBufferPtr_Injected, addr 0xb5a3190, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetNativeIndexBufferPtr_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "MeshScripting::GetNativeVertexBufferPtr", HasExplicitThis = true)]
/// [NativeThrows]
/// @brief Method GetNativeVertexBufferPtr, addr 0xb5a3054, size 0x80, virtual false, abstract: false, final false
inline ::System::IntPtr GetNativeVertexBufferPtr(int32_t  index) ;

/// @brief Method GetNativeVertexBufferPtr_Injected, addr 0xb5a30d4, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetNativeVertexBufferPtr_Injected(::System::IntPtr  _unity_self, int32_t  index) ;

/// @brief Method GetNormals, addr 0xb5a8bbc, size 0xc4, virtual false, abstract: false, final false
inline void GetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  normals) ;

/// [FreeFunction("MeshScripting::GetSubMesh", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetSubMesh, addr 0xb5a5ccc, size 0xb8, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::SubMeshDescriptor GetSubMesh(int32_t  index) ;

/// @brief Method GetSubMesh_Injected, addr 0xb5a5d84, size 0x54, virtual false, abstract: false, final false
static inline void GetSubMesh_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>  ret) ;

/// @brief Method GetTangents, addr 0xb5a8eac, size 0xc4, virtual false, abstract: false, final false
inline void GetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  tangents) ;

/// @brief Method GetTopology, addr 0xb5afcf4, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::MeshTopology GetTopology(int32_t  submesh) ;

/// [FreeFunction(Name = "MeshScripting::GetPrimitiveType", HasExplicitThis = true)]
/// @brief Method GetTopologyImpl, addr 0xb5a7294, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::MeshTopology GetTopologyImpl(int32_t  submesh) ;

/// @brief Method GetTopologyImpl_Injected, addr 0xb5a7314, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::MeshTopology GetTopologyImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh) ;

/// @brief Method GetTotalIndexCount, addr 0xb5a04a4, size 0x78, virtual false, abstract: false, final false
inline uint32_t GetTotalIndexCount() ;

/// @brief Method GetTotalIndexCount_Injected, addr 0xb5a051c, size 0x3c, virtual false, abstract: false, final false
static inline uint32_t GetTotalIndexCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetTriangles, addr 0xb5aba3c, size 0xc, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetTriangles(int32_t  submesh) ;

/// @brief Method GetTriangles, addr 0xb5aba48, size 0xc, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetTriangles(int32_t  submesh, /* [DefaultValue("true")] */ bool  applyBaseVertex) ;

/// @brief Method GetTriangles, addr 0xb5aba54, size 0x140, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetTriangles(int32_t  submesh, int32_t  meshLod, bool  applyBaseVertex) ;

/// @brief Method GetTriangles, addr 0xb5abb94, size 0xc, virtual false, abstract: false, final false
inline void GetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  submesh) ;

/// @brief Method GetTriangles, addr 0xb5abdc8, size 0xc, virtual false, abstract: false, final false
inline void GetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  submesh, /* [DefaultValue("true")] */ bool  applyBaseVertex) ;

/// @brief Method GetTriangles, addr 0xb5abba0, size 0x228, virtual false, abstract: false, final false
inline void GetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  submesh, int32_t  meshLod, bool  applyBaseVertex) ;

/// @brief Method GetTriangles, addr 0xb5abdd4, size 0xc, virtual false, abstract: false, final false
inline void GetTriangles(::System::Collections::Generic::List_1<uint16_t>*  triangles, int32_t  submesh, bool  applyBaseVertex) ;

/// @brief Method GetTriangles, addr 0xb5abde0, size 0x228, virtual false, abstract: false, final false
inline void GetTriangles(::System::Collections::Generic::List_1<uint16_t>*  triangles, int32_t  submesh, int32_t  meshLod, bool  applyBaseVertex) ;

/// [FreeFunction(Name = "MeshScripting::GetTrianglesCount", HasExplicitThis = true)]
/// @brief Method GetTrianglesCountImpl, addr 0xb5a158c, size 0x90, virtual false, abstract: false, final false
inline uint32_t GetTrianglesCountImpl(int32_t  submesh, int32_t  meshlod) ;

/// @brief Method GetTrianglesCountImpl_Injected, addr 0xb5a161c, size 0x54, virtual false, abstract: false, final false
static inline uint32_t GetTrianglesCountImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh, int32_t  meshlod) ;

/// [FreeFunction(Name = "MeshScripting::GetTriangles", HasExplicitThis = true)]
/// @brief Method GetTrianglesImpl, addr 0xb5a1734, size 0x170, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetTrianglesImpl(int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod) ;

/// @brief Method GetTrianglesImpl_Injected, addr 0xb5a18a4, size 0x6c, virtual false, abstract: false, final false
static inline void GetTrianglesImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// [FreeFunction(Name = "MeshScripting::ExtractTrianglesToArray", HasExplicitThis = true)]
/// @brief Method GetTrianglesNonAllocImpl, addr 0xb5a1df4, size 0x16c, virtual false, abstract: false, final false
inline void GetTrianglesNonAllocImpl(::by_ref<::ArrayW<int32_t>>  values, int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod) ;

/// [FreeFunction(Name = "MeshScripting::ExtractTrianglesToArray16", HasExplicitThis = true)]
/// @brief Method GetTrianglesNonAllocImpl16, addr 0xb5a1fcc, size 0x16c, virtual false, abstract: false, final false
inline void GetTrianglesNonAllocImpl16(::by_ref<::ArrayW<uint16_t>>  values, int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod) ;

/// @brief Method GetTrianglesNonAllocImpl16_Injected, addr 0xb5a2138, size 0x6c, virtual false, abstract: false, final false
static inline void GetTrianglesNonAllocImpl16_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  values, int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod) ;

/// @brief Method GetTrianglesNonAllocImpl_Injected, addr 0xb5a1f60, size 0x6c, virtual false, abstract: false, final false
static inline void GetTrianglesNonAllocImpl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  values, int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod) ;

/// @brief Method GetUVChannel, addr 0xb5a7980, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::VertexAttribute GetUVChannel(int32_t  uvIndex) ;

/// [NativeMethod("GetMeshMetric")]
/// @brief Method GetUVDistributionMetric, addr 0xb5a7510, size 0x80, virtual false, abstract: false, final false
inline float_t GetUVDistributionMetric(int32_t  uvSetIndex) ;

/// @brief Method GetUVDistributionMetric_Injected, addr 0xb5a7590, size 0x44, virtual false, abstract: false, final false
static inline float_t GetUVDistributionMetric_Injected(::System::IntPtr  _unity_self, int32_t  uvSetIndex) ;

/// @brief Method GetUVs, addr 0xb5a9d20, size 0x64, virtual false, abstract: false, final false
inline void GetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs) ;

/// @brief Method GetUVs, addr 0xb5a9d84, size 0x64, virtual false, abstract: false, final false
inline void GetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  uvs) ;

/// @brief Method GetUVs, addr 0xb5a9de8, size 0x64, virtual false, abstract: false, final false
inline void GetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uvs) ;

/// @brief Method GetUVsImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetUVsImpl(int32_t  uvIndex, ::System::Collections::Generic::List_1<T>*  uvs, int32_t  dim) ;

/// [FreeFunction(Name = "MeshScripting::GetVertexAttributeByIndex", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetVertexAttribute, addr 0xb5a12d8, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::VertexAttributeDescriptor GetVertexAttribute(int32_t  index) ;

/// [FreeFunction(Name = "MeshScripting::GetVertexAttributesCount", HasExplicitThis = true)]
/// @brief Method GetVertexAttributeCountImpl, addr 0xb5a1224, size 0x78, virtual false, abstract: false, final false
inline int32_t GetVertexAttributeCountImpl() ;

/// @brief Method GetVertexAttributeCountImpl_Injected, addr 0xb5a129c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetVertexAttributeCountImpl_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "MeshScripting::GetChannelDimension", HasExplicitThis = true)]
/// @brief Method GetVertexAttributeDimension, addr 0xb5a26dc, size 0x80, virtual false, abstract: false, final false
inline int32_t GetVertexAttributeDimension(::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method GetVertexAttributeDimension_Injected, addr 0xb5a275c, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetVertexAttributeDimension_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  attr) ;

/// [FreeFunction(Name = "MeshScripting::GetChannelFormat", HasExplicitThis = true)]
/// @brief Method GetVertexAttributeFormat, addr 0xb5a27a0, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::VertexAttributeFormat GetVertexAttributeFormat(::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method GetVertexAttributeFormat_Injected, addr 0xb5a2820, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::VertexAttributeFormat GetVertexAttributeFormat_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  attr) ;

/// [FreeFunction(Name = "MeshScripting::GetChannelOffset", HasExplicitThis = true)]
/// @brief Method GetVertexAttributeOffset, addr 0xb5a2928, size 0x80, virtual false, abstract: false, final false
inline int32_t GetVertexAttributeOffset(::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method GetVertexAttributeOffset_Injected, addr 0xb5a29a8, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetVertexAttributeOffset_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  attr) ;

/// [FreeFunction(Name = "MeshScripting::GetChannelStream", HasExplicitThis = true)]
/// @brief Method GetVertexAttributeStream, addr 0xb5a2864, size 0x80, virtual false, abstract: false, final false
inline int32_t GetVertexAttributeStream(::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method GetVertexAttributeStream_Injected, addr 0xb5a28e4, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetVertexAttributeStream_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method GetVertexAttribute_Injected, addr 0xb5a1370, size 0x54, virtual false, abstract: false, final false
static inline void GetVertexAttribute_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Rendering::VertexAttributeDescriptor>  ret) ;

/// @brief Method GetVertexAttributes, addr 0xb5a9e50, size 0x6c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> GetVertexAttributes() ;

/// @brief Method GetVertexAttributes, addr 0xb5a9ebc, size 0x4, virtual false, abstract: false, final false
inline int32_t GetVertexAttributes(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  attributes) ;

/// @brief Method GetVertexAttributes, addr 0xb5a9ec0, size 0x4, virtual false, abstract: false, final false
inline int32_t GetVertexAttributes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>*  attributes) ;

/// [FreeFunction(Name = "MeshScripting::GetVertexAttributesAlloc", HasExplicitThis = true)]
/// @brief Method GetVertexAttributesAlloc, addr 0xb5a0dc0, size 0x78, virtual false, abstract: false, final false
inline ::System::Array* GetVertexAttributesAlloc() ;

/// @brief Method GetVertexAttributesAlloc_Injected, addr 0xb5a0e38, size 0x3c, virtual false, abstract: false, final false
static inline ::System::Array* GetVertexAttributesAlloc_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "MeshScripting::GetVertexAttributesArray", HasExplicitThis = true)]
/// @brief Method GetVertexAttributesArray, addr 0xb5a0e74, size 0x124, virtual false, abstract: false, final false
inline int32_t GetVertexAttributesArray(/* [NotNull] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  attributes) ;

/// @brief Method GetVertexAttributesArray_Injected, addr 0xb5a0f98, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetVertexAttributesArray_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  attributes) ;

/// [FreeFunction(Name = "MeshScripting::GetVertexAttributesList", HasExplicitThis = true)]
/// @brief Method GetVertexAttributesList, addr 0xb5a0fdc, size 0x204, virtual false, abstract: false, final false
inline int32_t GetVertexAttributesList(/* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>*  attributes) ;

/// @brief Method GetVertexAttributesList_Injected, addr 0xb5a11e0, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetVertexAttributesList_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  attributes) ;

/// @brief Method GetVertexBuffer, addr 0xb5ab01c, size 0xac, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetVertexBuffer(int32_t  index) ;

/// [FreeFunction(Name = "MeshScripting::GetVertexBufferPtr", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetVertexBufferImpl, addr 0xb5a31cc, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetVertexBufferImpl(int32_t  index) ;

/// @brief Method GetVertexBufferImpl_Injected, addr 0xb5a3260, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetVertexBufferImpl_Injected(::System::IntPtr  _unity_self, int32_t  index) ;

/// [FreeFunction(Name = "MeshScripting::GetVertexBufferStride", HasExplicitThis = true)]
/// @brief Method GetVertexBufferStride, addr 0xb5a2f90, size 0x80, virtual false, abstract: false, final false
inline int32_t GetVertexBufferStride(int32_t  stream) ;

/// @brief Method GetVertexBufferStride_Injected, addr 0xb5a3010, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetVertexBufferStride_Injected(::System::IntPtr  _unity_self, int32_t  stream) ;

/// @brief Method GetVertices, addr 0xb5a88cc, size 0xc4, virtual false, abstract: false, final false
inline void GetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices) ;

/// [NativeMethod("HasBoneWeights")]
/// @brief Method HasBoneWeights, addr 0xb5a4594, size 0x78, virtual false, abstract: false, final false
inline bool HasBoneWeights() ;

/// @brief Method HasBoneWeights_Injected, addr 0xb5a460c, size 0x3c, virtual false, abstract: false, final false
static inline bool HasBoneWeights_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "MeshScripting::HasChannel", HasExplicitThis = true)]
/// @brief Method HasVertexAttribute, addr 0xb5a2618, size 0x80, virtual false, abstract: false, final false
inline bool HasVertexAttribute(::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method HasVertexAttribute_Injected, addr 0xb5a2698, size 0x44, virtual false, abstract: false, final false
static inline bool HasVertexAttribute_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  attr) ;

/// [FreeFunction(Name = "MeshScripting::SetBoneWeights", HasExplicitThis = true)]
/// @brief Method InternalSetBoneWeights, addr 0xb5a49e4, size 0xa8, virtual false, abstract: false, final false
inline void InternalSetBoneWeights(::System::IntPtr  bonesPerVertex, int32_t  bonesPerVertexSize, ::System::IntPtr  weights, int32_t  weightsSize) ;

/// @brief Method InternalSetBoneWeights_Injected, addr 0xb5a4a8c, size 0x6c, virtual false, abstract: false, final false
static inline void InternalSetBoneWeights_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  bonesPerVertex, int32_t  bonesPerVertexSize, ::System::IntPtr  weights, int32_t  weightsSize) ;

/// [FreeFunction(Name = "MeshScripting::InternalSetIndexBufferData", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method InternalSetIndexBufferData, addr 0xb5a063c, size 0xc0, virtual false, abstract: false, final false
inline void InternalSetIndexBufferData(::System::IntPtr  data, int32_t  dataStart, int32_t  meshBufferStart, int32_t  count, int32_t  elemSize, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [FreeFunction(Name = "MeshScripting::InternalSetIndexBufferDataFromArray", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method InternalSetIndexBufferDataFromArray, addr 0xb5a0780, size 0xc0, virtual false, abstract: false, final false
inline void InternalSetIndexBufferDataFromArray(::System::Array*  data, int32_t  dataStart, int32_t  meshBufferStart, int32_t  count, int32_t  elemSize, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method InternalSetIndexBufferDataFromArray_Injected, addr 0xb5a0840, size 0x84, virtual false, abstract: false, final false
static inline void InternalSetIndexBufferDataFromArray_Injected(::System::IntPtr  _unity_self, ::System::Array*  data, int32_t  dataStart, int32_t  meshBufferStart, int32_t  count, int32_t  elemSize, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method InternalSetIndexBufferData_Injected, addr 0xb5a06fc, size 0x84, virtual false, abstract: false, final false
static inline void InternalSetIndexBufferData_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  data, int32_t  dataStart, int32_t  meshBufferStart, int32_t  count, int32_t  elemSize, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [FreeFunction(Name = "MeshScripting::InternalSetVertexBufferData", HasExplicitThis = true)]
/// @brief Method InternalSetVertexBufferData, addr 0xb5a0b18, size 0xc8, virtual false, abstract: false, final false
inline void InternalSetVertexBufferData(int32_t  stream, ::System::IntPtr  data, int32_t  dataStart, int32_t  meshBufferStart, int32_t  count, int32_t  elemSize, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [FreeFunction(Name = "MeshScripting::InternalSetVertexBufferDataFromArray", HasExplicitThis = true)]
/// @brief Method InternalSetVertexBufferDataFromArray, addr 0xb5a0c6c, size 0xc8, virtual false, abstract: false, final false
inline void InternalSetVertexBufferDataFromArray(int32_t  stream, ::System::Array*  data, int32_t  dataStart, int32_t  meshBufferStart, int32_t  count, int32_t  elemSize, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method InternalSetVertexBufferDataFromArray_Injected, addr 0xb5a0d34, size 0x8c, virtual false, abstract: false, final false
static inline void InternalSetVertexBufferDataFromArray_Injected(::System::IntPtr  _unity_self, int32_t  stream, ::System::Array*  data, int32_t  dataStart, int32_t  meshBufferStart, int32_t  count, int32_t  elemSize, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method InternalSetVertexBufferData_Injected, addr 0xb5a0be0, size 0x8c, virtual false, abstract: false, final false
static inline void InternalSetVertexBufferData_Injected(::System::IntPtr  _unity_self, int32_t  stream, ::System::IntPtr  data, int32_t  dataStart, int32_t  meshBufferStart, int32_t  count, int32_t  elemSize, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [FreeFunction("MeshScripting::CreateMesh")]
/// @brief Method Internal_Create, addr 0xb5a01c4, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_Create(/* [Writable] */ ::UnityEngine::Mesh*  mono) ;

/// @brief Method MarkDynamic, addr 0xb5afa88, size 0x24, virtual false, abstract: false, final false
inline void MarkDynamic() ;

/// [NativeMethod("MarkDynamic")]
/// @brief Method MarkDynamicImpl, addr 0xb5a7068, size 0x78, virtual false, abstract: false, final false
inline void MarkDynamicImpl() ;

/// @brief Method MarkDynamicImpl_Injected, addr 0xb5a70e0, size 0x3c, virtual false, abstract: false, final false
static inline void MarkDynamicImpl_Injected(::System::IntPtr  _unity_self) ;

/// [NativeMethod("MarkModified")]
/// @brief Method MarkModified, addr 0xb5a711c, size 0x78, virtual false, abstract: false, final false
inline void MarkModified() ;

/// @brief Method MarkModified_Injected, addr 0xb5a7194, size 0x3c, virtual false, abstract: false, final false
static inline void MarkModified_Injected(::System::IntPtr  _unity_self) ;

/// @brief [RequiredByNativeCode]
static inline ::UnityEngine::Mesh* New_ctor() ;

/// @brief Method Optimize, addr 0xb5afae4, size 0xb0, virtual false, abstract: false, final false
inline void Optimize() ;

/// [NativeMethod("Optimize")]
/// @brief Method OptimizeImpl, addr 0xb5a7764, size 0x78, virtual false, abstract: false, final false
inline void OptimizeImpl() ;

/// @brief Method OptimizeImpl_Injected, addr 0xb5a77dc, size 0x3c, virtual false, abstract: false, final false
static inline void OptimizeImpl_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method OptimizeIndexBuffers, addr 0xb5afb94, size 0xb0, virtual false, abstract: false, final false
inline void OptimizeIndexBuffers() ;

/// [NativeMethod("OptimizeIndexBuffers")]
/// @brief Method OptimizeIndexBuffersImpl, addr 0xb5a7818, size 0x78, virtual false, abstract: false, final false
inline void OptimizeIndexBuffersImpl() ;

/// @brief Method OptimizeIndexBuffersImpl_Injected, addr 0xb5a7890, size 0x3c, virtual false, abstract: false, final false
static inline void OptimizeIndexBuffersImpl_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method OptimizeReorderVertexBuffer, addr 0xb5afc44, size 0xb0, virtual false, abstract: false, final false
inline void OptimizeReorderVertexBuffer() ;

/// [NativeMethod("OptimizeReorderVertexBuffer")]
/// @brief Method OptimizeReorderVertexBufferImpl, addr 0xb5a78cc, size 0x78, virtual false, abstract: false, final false
inline void OptimizeReorderVertexBufferImpl() ;

/// @brief Method OptimizeReorderVertexBufferImpl_Injected, addr 0xb5a7944, size 0x3c, virtual false, abstract: false, final false
static inline void OptimizeReorderVertexBufferImpl_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "MeshScripting::PrintErrorCantAccessChannel", HasExplicitThis = true)]
/// @brief Method PrintErrorCantAccessChannel, addr 0xb5a2554, size 0x80, virtual false, abstract: false, final false
inline void PrintErrorCantAccessChannel(::UnityEngine::Rendering::VertexAttribute  ch) ;

/// @brief Method PrintErrorCantAccessChannel_Injected, addr 0xb5a25d4, size 0x44, virtual false, abstract: false, final false
static inline void PrintErrorCantAccessChannel_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  ch) ;

/// @brief Method PrintErrorCantAccessIndices, addr 0xb5ab6e4, size 0x9c, virtual false, abstract: false, final false
inline void PrintErrorCantAccessIndices() ;

/// [ExcludeFromDocs]
/// @brief Method RecalculateBounds, addr 0xb5af6b8, size 0x8, virtual false, abstract: false, final false
inline void RecalculateBounds() ;

/// @brief Method RecalculateBounds, addr 0xb5af6c0, size 0xb8, virtual false, abstract: false, final false
inline void RecalculateBounds(/* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [NativeMethod("RecalculateBounds")]
/// @brief Method RecalculateBoundsImpl, addr 0xb5a6e1c, size 0x80, virtual false, abstract: false, final false
inline void RecalculateBoundsImpl(::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method RecalculateBoundsImpl_Injected, addr 0xb5a6e9c, size 0x44, virtual false, abstract: false, final false
static inline void RecalculateBoundsImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [ExcludeFromDocs]
/// @brief Method RecalculateNormals, addr 0xb5af778, size 0x8, virtual false, abstract: false, final false
inline void RecalculateNormals() ;

/// @brief Method RecalculateNormals, addr 0xb5af780, size 0xb8, virtual false, abstract: false, final false
inline void RecalculateNormals(/* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [NativeMethod("RecalculateNormals")]
/// @brief Method RecalculateNormalsImpl, addr 0xb5a6ee0, size 0x80, virtual false, abstract: false, final false
inline void RecalculateNormalsImpl(::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method RecalculateNormalsImpl_Injected, addr 0xb5a6f60, size 0x44, virtual false, abstract: false, final false
static inline void RecalculateNormalsImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [ExcludeFromDocs]
/// @brief Method RecalculateTangents, addr 0xb5af838, size 0x8, virtual false, abstract: false, final false
inline void RecalculateTangents() ;

/// @brief Method RecalculateTangents, addr 0xb5af840, size 0xb8, virtual false, abstract: false, final false
inline void RecalculateTangents(/* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [NativeMethod("RecalculateTangents")]
/// @brief Method RecalculateTangentsImpl, addr 0xb5a6fa4, size 0x80, virtual false, abstract: false, final false
inline void RecalculateTangentsImpl(::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method RecalculateTangentsImpl_Injected, addr 0xb5a7024, size 0x44, virtual false, abstract: false, final false
static inline void RecalculateTangentsImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method RecalculateUVDistributionMetric, addr 0xb5af8f8, size 0xcc, virtual false, abstract: false, final false
inline void RecalculateUVDistributionMetric(int32_t  uvSetIndex, float_t  uvAreaThreshold) ;

/// [NativeMethod("RecalculateMeshMetric")]
/// @brief Method RecalculateUVDistributionMetricImpl, addr 0xb5a7358, size 0x90, virtual false, abstract: false, final false
inline void RecalculateUVDistributionMetricImpl(int32_t  uvSetIndex, float_t  uvAreaThreshold) ;

/// @brief Method RecalculateUVDistributionMetricImpl_Injected, addr 0xb5a73e8, size 0x54, virtual false, abstract: false, final false
static inline void RecalculateUVDistributionMetricImpl_Injected(::System::IntPtr  _unity_self, int32_t  uvSetIndex, float_t  uvAreaThreshold) ;

/// @brief Method RecalculateUVDistributionMetrics, addr 0xb5af9c4, size 0xc4, virtual false, abstract: false, final false
inline void RecalculateUVDistributionMetrics(float_t  uvAreaThreshold) ;

/// [NativeMethod("RecalculateMeshMetrics")]
/// @brief Method RecalculateUVDistributionMetricsImpl, addr 0xb5a743c, size 0x88, virtual false, abstract: false, final false
inline void RecalculateUVDistributionMetricsImpl(float_t  uvAreaThreshold) ;

/// @brief Method RecalculateUVDistributionMetricsImpl_Injected, addr 0xb5a74c4, size 0x4c, virtual false, abstract: false, final false
static inline void RecalculateUVDistributionMetricsImpl_Injected(::System::IntPtr  _unity_self, float_t  uvAreaThreshold) ;

/// [FreeFunction("MeshScripting::SetAllSubMeshesAtOnceFromArray", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetAllSubMeshesAtOnceFromArray, addr 0xb5a5dd8, size 0x124, virtual false, abstract: false, final false
inline void SetAllSubMeshesAtOnceFromArray(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor>  desc, int32_t  start, int32_t  count, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetAllSubMeshesAtOnceFromArray_Injected, addr 0xb5a5efc, size 0x6c, virtual false, abstract: false, final false
static inline void SetAllSubMeshesAtOnceFromArray_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  desc, int32_t  start, int32_t  count, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [FreeFunction("MeshScripting::SetAllSubMeshesAtOnceFromNativeArray", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetAllSubMeshesAtOnceFromNativeArray, addr 0xb5a5f68, size 0xa8, virtual false, abstract: false, final false
inline void SetAllSubMeshesAtOnceFromNativeArray(::System::IntPtr  desc, int32_t  start, int32_t  count, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetAllSubMeshesAtOnceFromNativeArray_Injected, addr 0xb5a6010, size 0x6c, virtual false, abstract: false, final false
static inline void SetAllSubMeshesAtOnceFromNativeArray_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  desc, int32_t  start, int32_t  count, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetArrayForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::ArrayW<T>  values, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetArrayForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::ArrayW<T>  values, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [FreeFunction(Name = "SetMeshComponentFromArrayFromScript", HasExplicitThis = true)]
/// @brief Method SetArrayForChannelImpl, addr 0xb5a29ec, size 0xd8, virtual false, abstract: false, final false
inline void SetArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Array*  values, int32_t  arraySize, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetArrayForChannelImpl_Injected, addr 0xb5a2ac4, size 0x9c, virtual false, abstract: false, final false
static inline void SetArrayForChannelImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Array*  values, int32_t  arraySize, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetBindposes, addr 0xb5a5398, size 0xe4, virtual false, abstract: false, final false
inline void SetBindposes(::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  poses) ;

/// [NativeMethod("SetBindposes")]
/// @brief Method SetBindposesFromScript_NativeArray, addr 0xb5a547c, size 0x90, virtual false, abstract: false, final false
inline void SetBindposesFromScript_NativeArray(::System::IntPtr  posesPtr, int32_t  posesCount) ;

/// @brief Method SetBindposesFromScript_NativeArray_Injected, addr 0xb5a550c, size 0x54, virtual false, abstract: false, final false
static inline void SetBindposesFromScript_NativeArray_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  posesPtr, int32_t  posesCount) ;

/// @brief Method SetBoneWeights, addr 0xb5a4920, size 0xc4, virtual false, abstract: false, final false
inline void SetBoneWeights(::Unity::Collections::NativeArray_1<uint8_t>  bonesPerVertex, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  weights) ;

/// [FreeFunction(Name = "MeshScripting::SetBoneWeights", HasExplicitThis = true)]
/// @brief Method SetBoneWeightsImpl, addr 0xb5a47e0, size 0xfc, virtual false, abstract: false, final false
inline void SetBoneWeightsImpl(::ArrayW<::UnityEngine::BoneWeight>  weights) ;

/// @brief Method SetBoneWeightsImpl_Injected, addr 0xb5a48dc, size 0x44, virtual false, abstract: false, final false
static inline void SetBoneWeightsImpl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  weights) ;

/// @brief Method SetColors, addr 0xb5a965c, size 0x68, virtual false, abstract: false, final false
inline void SetColors(::ArrayW<::UnityEngine::Color32>  inColors) ;

/// [ExcludeFromDocs]
/// @brief Method SetColors, addr 0xb5a96c4, size 0x68, virtual false, abstract: false, final false
inline void SetColors(::ArrayW<::UnityEngine::Color32>  inColors, int32_t  start, int32_t  length) ;

/// @brief Method SetColors, addr 0xb5a972c, size 0x6c, virtual false, abstract: false, final false
inline void SetColors(::ArrayW<::UnityEngine::Color32>  inColors, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetColors, addr 0xb5a9350, size 0x68, virtual false, abstract: false, final false
inline void SetColors(::ArrayW<::UnityEngine::Color>  inColors) ;

/// [ExcludeFromDocs]
/// @brief Method SetColors, addr 0xb5a93b8, size 0x68, virtual false, abstract: false, final false
inline void SetColors(::ArrayW<::UnityEngine::Color>  inColors, int32_t  start, int32_t  length) ;

/// @brief Method SetColors, addr 0xb5a9420, size 0x6c, virtual false, abstract: false, final false
inline void SetColors(::ArrayW<::UnityEngine::Color>  inColors, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetColors, addr 0xb5a9554, size 0x6c, virtual false, abstract: false, final false
inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  inColors) ;

/// [ExcludeFromDocs]
/// @brief Method SetColors, addr 0xb5a95c0, size 0x8, virtual false, abstract: false, final false
inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  inColors, int32_t  start, int32_t  length) ;

/// @brief Method SetColors, addr 0xb5a95c8, size 0x94, virtual false, abstract: false, final false
inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  inColors, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetColors, addr 0xb5a9260, size 0x6c, virtual false, abstract: false, final false
inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  inColors) ;

/// [ExcludeFromDocs]
/// @brief Method SetColors, addr 0xb5a92cc, size 0x8, virtual false, abstract: false, final false
inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  inColors, int32_t  start, int32_t  length) ;

/// @brief Method SetColors, addr 0xb5a92d4, size 0x7c, virtual false, abstract: false, final false
inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  inColors, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetColors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetColors(::Unity::Collections::NativeArray_1<T>  inColors) ;

/// [ExcludeFromDocs]
/// @brief Method SetColors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetColors(::Unity::Collections::NativeArray_1<T>  inColors, int32_t  start, int32_t  length) ;

/// @brief Method SetColors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetColors(::Unity::Collections::NativeArray_1<T>  inColors, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetIndexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetIndexBufferData(::ArrayW<T>  data, int32_t  dataStart, int32_t  meshBufferStart, int32_t  count, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetIndexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetIndexBufferData(::System::Collections::Generic::List_1<T>*  data, int32_t  dataStart, int32_t  meshBufferStart, int32_t  count, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetIndexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetIndexBufferData(::Unity::Collections::NativeArray_1<T>  data, int32_t  dataStart, int32_t  meshBufferStart, int32_t  count, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [FreeFunction(Name = "MeshScripting::SetIndexBufferParams", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetIndexBufferParams, addr 0xb5a0558, size 0x90, virtual false, abstract: false, final false
inline void SetIndexBufferParams(int32_t  indexCount, ::UnityEngine::Rendering::IndexFormat  format) ;

/// @brief Method SetIndexBufferParams_Injected, addr 0xb5a05e8, size 0x54, virtual false, abstract: false, final false
static inline void SetIndexBufferParams_Injected(::System::IntPtr  _unity_self, int32_t  indexCount, ::UnityEngine::Rendering::IndexFormat  format) ;

/// @brief Method SetIndices, addr 0xb5ad52c, size 0x28, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<int32_t>  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0xb5ad5d0, size 0xb0, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<int32_t>  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// [ExcludeFromDocs]
/// @brief Method SetIndices, addr 0xb5ad3e0, size 0x68, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<int32_t>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh) ;

/// [ExcludeFromDocs]
/// @brief Method SetIndices, addr 0xb5ad4c0, size 0x6c, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<int32_t>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds) ;

/// @brief Method SetIndices, addr 0xb5ad448, size 0x78, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<int32_t>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, /* [DefaultValue("true")] */ bool  calculateBounds, /* [DefaultValue("0")] */ int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0xb5ad554, size 0x7c, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<int32_t>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0xb5ad6f8, size 0x28, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<uint16_t>  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0xb5ad79c, size 0xb0, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<uint16_t>  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0xb5ad680, size 0x78, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<uint16_t>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0xb5ad720, size 0x7c, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<uint16_t>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0xb5ad8f4, size 0x28, virtual false, abstract: false, final false
inline void SetIndices(::System::Collections::Generic::List_1<int32_t>*  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0xb5ad9c8, size 0x138, virtual false, abstract: false, final false
inline void SetIndices(::System::Collections::Generic::List_1<int32_t>*  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0xb5ad84c, size 0xa8, virtual false, abstract: false, final false
inline void SetIndices(::System::Collections::Generic::List_1<int32_t>*  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0xb5ad91c, size 0xac, virtual false, abstract: false, final false
inline void SetIndices(::System::Collections::Generic::List_1<int32_t>*  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0xb5adba8, size 0x28, virtual false, abstract: false, final false
inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>*  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0xb5adc7c, size 0x138, virtual false, abstract: false, final false
inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>*  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0xb5adb00, size 0xa8, virtual false, abstract: false, final false
inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>*  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0xb5adbd0, size 0xac, virtual false, abstract: false, final false
inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>*  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetIndices(::Unity::Collections::NativeArray_1<T>  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetIndices(::Unity::Collections::NativeArray_1<T>  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetIndices(::Unity::Collections::NativeArray_1<T>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetIndices(::Unity::Collections::NativeArray_1<T>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// [FreeFunction(Name = "SetMeshIndicesFromScript", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetIndicesImpl, addr 0xb5a1aec, size 0xe0, virtual false, abstract: false, final false
inline void SetIndicesImpl(int32_t  submesh, ::UnityEngine::MeshTopology  topology, ::UnityEngine::Rendering::IndexFormat  indicesFormat, ::System::Array*  indices, int32_t  arrayStart, int32_t  arraySize, bool  calculateBounds, int32_t  baseVertex, int32_t  meshlod) ;

/// @brief Method SetIndicesImpl_Injected, addr 0xb5a1bcc, size 0xa4, virtual false, abstract: false, final false
static inline void SetIndicesImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh, ::UnityEngine::MeshTopology  topology, ::UnityEngine::Rendering::IndexFormat  indicesFormat, ::System::Array*  indices, int32_t  arrayStart, int32_t  arraySize, bool  calculateBounds, int32_t  baseVertex, int32_t  meshlod) ;

/// [FreeFunction(Name = "SetMeshIndicesFromNativeArray", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetIndicesNativeArrayImpl, addr 0xb5a1c70, size 0xe0, virtual false, abstract: false, final false
inline void SetIndicesNativeArrayImpl(int32_t  submesh, ::UnityEngine::MeshTopology  topology, ::UnityEngine::Rendering::IndexFormat  indicesFormat, ::System::IntPtr  indices, int32_t  arrayStart, int32_t  arraySize, bool  calculateBounds, int32_t  baseVertex, int32_t  meshlod) ;

/// @brief Method SetIndicesNativeArrayImpl_Injected, addr 0xb5a1d50, size 0xa4, virtual false, abstract: false, final false
static inline void SetIndicesNativeArrayImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh, ::UnityEngine::MeshTopology  topology, ::UnityEngine::Rendering::IndexFormat  indicesFormat, ::System::IntPtr  indices, int32_t  arrayStart, int32_t  arraySize, bool  calculateBounds, int32_t  baseVertex, int32_t  meshlod) ;

/// @brief Method SetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetListForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Collections::Generic::List_1<T>*  values, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetListForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::System::Collections::Generic::List_1<T>*  values, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetLod, addr 0xb5ae424, size 0x60, virtual false, abstract: false, final false
inline void SetLod(int32_t  submesh, int32_t  level, ::UnityEngine::MeshLodRange  levelRange, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [FreeFunction("MeshScripting::SetLodCount", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetLodCount, addr 0xb5a607c, size 0x80, virtual false, abstract: false, final false
inline void SetLodCount(int32_t  numLevels) ;

/// @brief Method SetLodCount_Injected, addr 0xb5a60fc, size 0x44, virtual false, abstract: false, final false
static inline void SetLodCount_Injected(::System::IntPtr  _unity_self, int32_t  numLevels) ;

/// [FreeFunction("MeshScripting::SetLod", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetLodImpl, addr 0xb5a64bc, size 0xac, virtual false, abstract: false, final false
inline void SetLodImpl(int32_t  subMeshIndex, int32_t  level, ::UnityEngine::MeshLodRange  levelRange, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetLodImpl_Injected, addr 0xb5a6568, size 0x6c, virtual false, abstract: false, final false
static inline void SetLodImpl_Injected(::System::IntPtr  _unity_self, int32_t  subMeshIndex, int32_t  level, ::by_ref<::UnityEngine::MeshLodRange>  levelRange, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [FreeFunction("MeshScripting::SetLodSelectionCurve", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetLodSelectionCurve, addr 0xb5a6140, size 0x84, virtual false, abstract: false, final false
inline void SetLodSelectionCurve(::GlobalNamespace::Mesh_LodSelectionCurve  lodSelectionCurve) ;

/// @brief Method SetLodSelectionCurve_Injected, addr 0xb5a61c4, size 0x44, virtual false, abstract: false, final false
static inline void SetLodSelectionCurve_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::Mesh_LodSelectionCurve>  lodSelectionCurve) ;

/// @brief Method SetLods, addr 0xb5ae674, size 0x2f0, virtual false, abstract: false, final false
inline void SetLods(::ArrayW<::UnityEngine::MeshLodRange>  levels, int32_t  start, int32_t  count, int32_t  submesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetLods, addr 0xb5aecb8, size 0x184, virtual false, abstract: false, final false
inline void SetLods(::ArrayW<::UnityEngine::MeshLodRange>  levels, int32_t  submesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetLods, addr 0xb5ae964, size 0x354, virtual false, abstract: false, final false
inline void SetLods(::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>*  levels, int32_t  start, int32_t  count, int32_t  submesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetLods, addr 0xb5ae484, size 0x1f0, virtual false, abstract: false, final false
inline void SetLods(::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>*  levels, int32_t  submesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetLods, addr 0xb5af000, size 0x33c, virtual false, abstract: false, final false
inline void SetLods(::Unity::Collections::NativeArray_1<::UnityEngine::MeshLodRange>  levels, int32_t  start, int32_t  count, int32_t  submesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetLods, addr 0xb5aee3c, size 0x1c4, virtual false, abstract: false, final false
inline void SetLods(::Unity::Collections::NativeArray_1<::UnityEngine::MeshLodRange>  levels, int32_t  submesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [FreeFunction("MeshScripting::SetLods", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetLodsFromArray, addr 0xb5a6208, size 0x12c, virtual false, abstract: false, final false
inline void SetLodsFromArray(::ArrayW<::UnityEngine::MeshLodRange>  levelRanges, int32_t  start, int32_t  count, int32_t  submesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetLodsFromArray_Injected, addr 0xb5a6334, size 0x74, virtual false, abstract: false, final false
static inline void SetLodsFromArray_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  levelRanges, int32_t  start, int32_t  count, int32_t  submesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [FreeFunction("MeshScripting::SetLodsFromNativeArray", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetLodsFromNativeArray, addr 0xb5a63a8, size 0xa8, virtual false, abstract: false, final false
inline void SetLodsFromNativeArray(::System::IntPtr  lodLevels, int32_t  count, int32_t  submesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetLodsFromNativeArray_Injected, addr 0xb5a6450, size 0x6c, virtual false, abstract: false, final false
static inline void SetLodsFromNativeArray_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  lodLevels, int32_t  count, int32_t  submesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [FreeFunction(Name = "SetMeshComponentFromNativeArrayFromScript", HasExplicitThis = true)]
/// @brief Method SetNativeArrayForChannelImpl, addr 0xb5a2b60, size 0xd8, virtual false, abstract: false, final false
inline void SetNativeArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::IntPtr  values, int32_t  arraySize, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetNativeArrayForChannelImpl_Injected, addr 0xb5a2c38, size 0x9c, virtual false, abstract: false, final false
static inline void SetNativeArrayForChannelImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::IntPtr  values, int32_t  arraySize, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetNormals, addr 0xb5a8d70, size 0x68, virtual false, abstract: false, final false
inline void SetNormals(::ArrayW<::UnityEngine::Vector3>  inNormals) ;

/// [ExcludeFromDocs]
/// @brief Method SetNormals, addr 0xb5a8dd8, size 0x68, virtual false, abstract: false, final false
inline void SetNormals(::ArrayW<::UnityEngine::Vector3>  inNormals, int32_t  start, int32_t  length) ;

/// @brief Method SetNormals, addr 0xb5a8e40, size 0x6c, virtual false, abstract: false, final false
inline void SetNormals(::ArrayW<::UnityEngine::Vector3>  inNormals, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetNormals, addr 0xb5a8c80, size 0x6c, virtual false, abstract: false, final false
inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inNormals) ;

/// [ExcludeFromDocs]
/// @brief Method SetNormals, addr 0xb5a8cec, size 0x8, virtual false, abstract: false, final false
inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inNormals, int32_t  start, int32_t  length) ;

/// @brief Method SetNormals, addr 0xb5a8cf4, size 0x7c, virtual false, abstract: false, final false
inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inNormals, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetNormals(::Unity::Collections::NativeArray_1<T>  inNormals) ;

/// [ExcludeFromDocs]
/// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetNormals(::Unity::Collections::NativeArray_1<T>  inNormals, int32_t  start, int32_t  length) ;

/// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetNormals(::Unity::Collections::NativeArray_1<T>  inNormals, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSizedArrayForChannel, addr 0xb5a7a90, size 0x22c, virtual false, abstract: false, final false
inline void SetSizedArrayForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Array*  values, int32_t  valuesArrayLength, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSizedNativeArrayForChannel, addr 0xb5a7cbc, size 0x228, virtual false, abstract: false, final false
inline void SetSizedNativeArrayForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::IntPtr  values, int32_t  valuesArrayLength, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [FreeFunction("MeshScripting::SetSubMesh", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetSubMesh, addr 0xb5a5bd8, size 0x98, virtual false, abstract: false, final false
inline void SetSubMesh(int32_t  index, ::UnityEngine::Rendering::SubMeshDescriptor  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSubMesh_Injected, addr 0xb5a5c70, size 0x5c, virtual false, abstract: false, final false
static inline void SetSubMesh_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSubMeshes, addr 0xb5ae0ac, size 0x28, virtual false, abstract: false, final false
inline void SetSubMeshes(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor>  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSubMeshes, addr 0xb5addb4, size 0x2f8, virtual false, abstract: false, final false
inline void SetSubMeshes(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor>  desc, int32_t  start, int32_t  count, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSubMeshes, addr 0xb5ae184, size 0xb4, virtual false, abstract: false, final false
inline void SetSubMeshes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>*  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSubMeshes, addr 0xb5ae0d4, size 0xb0, virtual false, abstract: false, final false
inline void SetSubMeshes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>*  desc, int32_t  start, int32_t  count, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSubMeshes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetSubMeshes(::Unity::Collections::NativeArray_1<T>  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSubMeshes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetSubMeshes(::Unity::Collections::NativeArray_1<T>  desc, int32_t  start, int32_t  count, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetTangents, addr 0xb5a9060, size 0x68, virtual false, abstract: false, final false
inline void SetTangents(::ArrayW<::UnityEngine::Vector4>  inTangents) ;

/// [ExcludeFromDocs]
/// @brief Method SetTangents, addr 0xb5a90c8, size 0x68, virtual false, abstract: false, final false
inline void SetTangents(::ArrayW<::UnityEngine::Vector4>  inTangents, int32_t  start, int32_t  length) ;

/// @brief Method SetTangents, addr 0xb5a9130, size 0x6c, virtual false, abstract: false, final false
inline void SetTangents(::ArrayW<::UnityEngine::Vector4>  inTangents, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetTangents, addr 0xb5a8f70, size 0x6c, virtual false, abstract: false, final false
inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  inTangents) ;

/// [ExcludeFromDocs]
/// @brief Method SetTangents, addr 0xb5a8fdc, size 0x8, virtual false, abstract: false, final false
inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  inTangents, int32_t  start, int32_t  length) ;

/// @brief Method SetTangents, addr 0xb5a8fe4, size 0x7c, virtual false, abstract: false, final false
inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  inTangents, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetTangents(::Unity::Collections::NativeArray_1<T>  inTangents) ;

/// [ExcludeFromDocs]
/// @brief Method SetTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetTangents(::Unity::Collections::NativeArray_1<T>  inTangents, int32_t  start, int32_t  length) ;

/// @brief Method SetTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetTangents(::Unity::Collections::NativeArray_1<T>  inTangents, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [ExcludeFromDocs]
/// @brief Method SetTriangles, addr 0xb5acaa0, size 0x58, virtual false, abstract: false, final false
inline void SetTriangles(::ArrayW<int32_t>  triangles, int32_t  submesh) ;

/// [ExcludeFromDocs]
/// @brief Method SetTriangles, addr 0xb5acb60, size 0x64, virtual false, abstract: false, final false
inline void SetTriangles(::ArrayW<int32_t>  triangles, int32_t  submesh, bool  calculateBounds) ;

/// @brief Method SetTriangles, addr 0xb5acaf8, size 0x68, virtual false, abstract: false, final false
inline void SetTriangles(::ArrayW<int32_t>  triangles, int32_t  submesh, /* [DefaultValue("true")] */ bool  calculateBounds, /* [DefaultValue("0")] */ int32_t  baseVertex) ;

/// @brief Method SetTriangles, addr 0xb5acbe8, size 0x74, virtual false, abstract: false, final false
inline void SetTriangles(::ArrayW<int32_t>  triangles, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetTriangles, addr 0xb5acbc4, size 0x24, virtual false, abstract: false, final false
inline void SetTriangles(::ArrayW<int32_t>  triangles, int32_t  trianglesStart, int32_t  trianglesLength, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetTriangles, addr 0xb5acc5c, size 0xac, virtual false, abstract: false, final false
inline void SetTriangles(::ArrayW<int32_t>  triangles, int32_t  trianglesStart, int32_t  trianglesLength, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetTriangles, addr 0xb5acd08, size 0x68, virtual false, abstract: false, final false
inline void SetTriangles(::ArrayW<uint16_t>  triangles, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetTriangles, addr 0xb5acd94, size 0x74, virtual false, abstract: false, final false
inline void SetTriangles(::ArrayW<uint16_t>  triangles, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetTriangles, addr 0xb5acd70, size 0x24, virtual false, abstract: false, final false
inline void SetTriangles(::ArrayW<uint16_t>  triangles, int32_t  trianglesStart, int32_t  trianglesLength, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetTriangles, addr 0xb5ace08, size 0xac, virtual false, abstract: false, final false
inline void SetTriangles(::ArrayW<uint16_t>  triangles, int32_t  trianglesStart, int32_t  trianglesLength, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// [ExcludeFromDocs]
/// @brief Method SetTriangles, addr 0xb5aceb4, size 0xc, virtual false, abstract: false, final false
inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  submesh) ;

/// [ExcludeFromDocs]
/// @brief Method SetTriangles, addr 0xb5acf58, size 0x8, virtual false, abstract: false, final false
inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  submesh, bool  calculateBounds) ;

/// @brief Method SetTriangles, addr 0xb5acec0, size 0x98, virtual false, abstract: false, final false
inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  submesh, /* [DefaultValue("true")] */ bool  calculateBounds, /* [DefaultValue("0")] */ int32_t  baseVertex) ;

/// @brief Method SetTriangles, addr 0xb5acf84, size 0xa4, virtual false, abstract: false, final false
inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetTriangles, addr 0xb5acf60, size 0x24, virtual false, abstract: false, final false
inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  trianglesStart, int32_t  trianglesLength, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetTriangles, addr 0xb5ad028, size 0x12c, virtual false, abstract: false, final false
inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  trianglesStart, int32_t  trianglesLength, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetTriangles, addr 0xb5ad154, size 0x98, virtual false, abstract: false, final false
inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>*  triangles, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetTriangles, addr 0xb5ad210, size 0xa4, virtual false, abstract: false, final false
inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>*  triangles, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetTriangles, addr 0xb5ad1ec, size 0x24, virtual false, abstract: false, final false
inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>*  triangles, int32_t  trianglesStart, int32_t  trianglesLength, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetTriangles, addr 0xb5ad2b4, size 0x12c, virtual false, abstract: false, final false
inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>*  triangles, int32_t  trianglesStart, int32_t  trianglesLength, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetTrianglesImpl, addr 0xb5ab9b4, size 0x88, virtual false, abstract: false, final false
inline void SetTrianglesImpl(int32_t  submesh, ::UnityEngine::Rendering::IndexFormat  indicesFormat, ::System::Array*  triangles, int32_t  trianglesArrayLength, int32_t  start, int32_t  length, bool  calculateBounds, int32_t  baseVertex, int32_t  meshLod) ;

/// @brief Method SetUVs, addr 0xb5a9bb8, size 0x48, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector2>  uvs) ;

/// [ExcludeFromDocs]
/// @brief Method SetUVs, addr 0xb5a9c00, size 0x18, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector2>  uvs, int32_t  start, int32_t  length) ;

/// @brief Method SetUVs, addr 0xb5a9cd8, size 0x18, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector2>  uvs, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUVs, addr 0xb5a9c18, size 0x48, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector3>  uvs) ;

/// [ExcludeFromDocs]
/// @brief Method SetUVs, addr 0xb5a9c60, size 0x18, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector3>  uvs, int32_t  start, int32_t  length) ;

/// @brief Method SetUVs, addr 0xb5a9cf0, size 0x18, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector3>  uvs, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUVs, addr 0xb5a9c78, size 0x48, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector4>  uvs) ;

/// [ExcludeFromDocs]
/// @brief Method SetUVs, addr 0xb5a9cc0, size 0x18, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector4>  uvs, int32_t  start, int32_t  length) ;

/// @brief Method SetUVs, addr 0xb5a9d08, size 0x18, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector4>  uvs, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUVs, addr 0xb5a9798, size 0x74, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs) ;

/// [ExcludeFromDocs]
/// @brief Method SetUVs, addr 0xb5a980c, size 0x8, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs, int32_t  start, int32_t  length) ;

/// @brief Method SetUVs, addr 0xb5a990c, size 0x8c, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUVs, addr 0xb5a9814, size 0x74, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  uvs) ;

/// [ExcludeFromDocs]
/// @brief Method SetUVs, addr 0xb5a9888, size 0x8, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  uvs, int32_t  start, int32_t  length) ;

/// @brief Method SetUVs, addr 0xb5a9998, size 0x8c, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  uvs, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUVs, addr 0xb5a9890, size 0x74, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uvs) ;

/// [ExcludeFromDocs]
/// @brief Method SetUVs, addr 0xb5a9904, size 0x8, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uvs, int32_t  start, int32_t  length) ;

/// @brief Method SetUVs, addr 0xb5a9a24, size 0x8c, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uvs, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetUVs(int32_t  channel, ::Unity::Collections::NativeArray_1<T>  uvs) ;

/// [ExcludeFromDocs]
/// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetUVs(int32_t  channel, ::Unity::Collections::NativeArray_1<T>  uvs, int32_t  start, int32_t  length) ;

/// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetUVs(int32_t  channel, ::Unity::Collections::NativeArray_1<T>  uvs, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUvsImpl, addr 0xb5a9ab0, size 0x108, virtual false, abstract: false, final false
inline void SetUvsImpl(int32_t  uvIndex, int32_t  dim, ::System::Array*  uvs, int32_t  arrayStart, int32_t  arraySize, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUvsImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetUvsImpl(int32_t  uvIndex, int32_t  dim, ::System::Collections::Generic::List_1<T>*  uvs, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetVertexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetVertexBufferData(::ArrayW<T>  data, int32_t  dataStart, int32_t  meshBufferStart, int32_t  count, int32_t  stream, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetVertexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetVertexBufferData(::System::Collections::Generic::List_1<T>*  data, int32_t  dataStart, int32_t  meshBufferStart, int32_t  count, int32_t  stream, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetVertexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetVertexBufferData(::Unity::Collections::NativeArray_1<T>  data, int32_t  dataStart, int32_t  meshBufferStart, int32_t  count, int32_t  stream, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetVertexBufferParams, addr 0xb5a9ec4, size 0x4, virtual false, abstract: false, final false
inline void SetVertexBufferParams(int32_t  vertexCount, /* [ParamArray] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  attributes) ;

/// @brief Method SetVertexBufferParams, addr 0xb5a9ec8, size 0x84, virtual false, abstract: false, final false
inline void SetVertexBufferParams(int32_t  vertexCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  attributes) ;

/// [FreeFunction(Name = "MeshScripting::SetVertexBufferParamsFromArray", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetVertexBufferParamsFromArray, addr 0xb5a09b8, size 0x10c, virtual false, abstract: false, final false
inline void SetVertexBufferParamsFromArray(int32_t  vertexCount, /* [ParamArray] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  attributes) ;

/// @brief Method SetVertexBufferParamsFromArray_Injected, addr 0xb5a0ac4, size 0x54, virtual false, abstract: false, final false
static inline void SetVertexBufferParamsFromArray_Injected(::System::IntPtr  _unity_self, int32_t  vertexCount, /* [ParamArray] */ ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  attributes) ;

/// [FreeFunction(Name = "MeshScripting::SetVertexBufferParamsFromPtr", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetVertexBufferParamsFromPtr, addr 0xb5a08c4, size 0x98, virtual false, abstract: false, final false
inline void SetVertexBufferParamsFromPtr(int32_t  vertexCount, ::System::IntPtr  attributesPtr, int32_t  attributesCount) ;

/// @brief Method SetVertexBufferParamsFromPtr_Injected, addr 0xb5a095c, size 0x5c, virtual false, abstract: false, final false
static inline void SetVertexBufferParamsFromPtr_Injected(::System::IntPtr  _unity_self, int32_t  vertexCount, ::System::IntPtr  attributesPtr, int32_t  attributesCount) ;

/// @brief Method SetVertices, addr 0xb5a8a80, size 0x68, virtual false, abstract: false, final false
inline void SetVertices(::ArrayW<::UnityEngine::Vector3>  inVertices) ;

/// [ExcludeFromDocs]
/// @brief Method SetVertices, addr 0xb5a8ae8, size 0x68, virtual false, abstract: false, final false
inline void SetVertices(::ArrayW<::UnityEngine::Vector3>  inVertices, int32_t  start, int32_t  length) ;

/// @brief Method SetVertices, addr 0xb5a8b50, size 0x6c, virtual false, abstract: false, final false
inline void SetVertices(::ArrayW<::UnityEngine::Vector3>  inVertices, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetVertices, addr 0xb5a8990, size 0x6c, virtual false, abstract: false, final false
inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inVertices) ;

/// [ExcludeFromDocs]
/// @brief Method SetVertices, addr 0xb5a89fc, size 0x8, virtual false, abstract: false, final false
inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inVertices, int32_t  start, int32_t  length) ;

/// @brief Method SetVertices, addr 0xb5a8a04, size 0x7c, virtual false, abstract: false, final false
inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inVertices, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetVertices(::Unity::Collections::NativeArray_1<T>  inVertices) ;

/// [ExcludeFromDocs]
/// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetVertices(::Unity::Collections::NativeArray_1<T>  inVertices, int32_t  start, int32_t  length) ;

/// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetVertices(::Unity::Collections::NativeArray_1<T>  inVertices, int32_t  start, int32_t  length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method UploadMeshData, addr 0xb5afaac, size 0x38, virtual false, abstract: false, final false
inline void UploadMeshData(bool  markNoLongerReadable) ;

/// [NativeMethod("UploadMeshData")]
/// @brief Method UploadMeshDataImpl, addr 0xb5a71d0, size 0x80, virtual false, abstract: false, final false
inline void UploadMeshDataImpl(bool  markNoLongerReadable) ;

/// @brief Method UploadMeshDataImpl_Injected, addr 0xb5a7250, size 0x44, virtual false, abstract: false, final false
static inline void UploadMeshDataImpl_Injected(::System::IntPtr  _unity_self, bool  markNoLongerReadable) ;

/// @brief Method ValidateCanWriteToLods, addr 0xb5ae3c4, size 0x60, virtual false, abstract: false, final false
inline void ValidateCanWriteToLods() ;

/// @brief Method ValidateLodIndex, addr 0xb5ae238, size 0xc0, virtual false, abstract: false, final false
inline void ValidateLodIndex(int32_t  level) ;

/// @brief Method ValidateSubMeshIndex, addr 0xb5ae2f8, size 0xcc, virtual false, abstract: false, final false
inline void ValidateSubMeshIndex(int32_t  submesh) ;

/// [RequiredByNativeCode]
/// @brief Method .ctor, addr 0xb5a0200, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_bindposeCount, addr 0xb5a4f28, size 0x78, virtual false, abstract: false, final false
inline int32_t get_bindposeCount() ;

/// @brief Method get_bindposeCount_Injected, addr 0xb5a4fa0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_bindposeCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_bindposes, addr 0xb5a4fdc, size 0x154, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Matrix4x4> get_bindposes() ;

/// @brief Method get_bindposes_Injected, addr 0xb5a5130, size 0x44, virtual false, abstract: false, final false
static inline void get_bindposes_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// [NativeMethod(Name = "GetBlendShapeChannelCount")]
/// @brief Method get_blendShapeCount, addr 0xb5a380c, size 0x78, virtual false, abstract: false, final false
inline int32_t get_blendShapeCount() ;

/// @brief Method get_blendShapeCount_Injected, addr 0xb5a3884, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_blendShapeCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_boneWeights, addr 0xb5af6a0, size 0x4, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::BoneWeight> get_boneWeights() ;

/// @brief Method get_bounds, addr 0xb5a6bac, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_bounds() ;

/// @brief Method get_bounds_Injected, addr 0xb5a6c50, size 0x44, virtual false, abstract: false, final false
static inline void get_bounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  ret) ;

/// [NativeMethod("CanAccessFromScript")]
/// @brief Method get_canAccess, addr 0xb5a5970, size 0x78, virtual false, abstract: false, final false
inline bool get_canAccess() ;

/// @brief Method get_canAccess_Injected, addr 0xb5a59e8, size 0x3c, virtual false, abstract: false, final false
static inline bool get_canAccess_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_colors, addr 0xb5a8648, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> get_colors() ;

/// @brief Method get_colors32, addr 0xb5a86f4, size 0x54, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color32> get_colors32() ;

/// @brief Method get_indexBufferTarget, addr 0xb5a3694, size 0x78, virtual false, abstract: false, final false
inline ::GlobalNamespace::GraphicsBuffer_Target get_indexBufferTarget() ;

/// @brief Method get_indexBufferTarget_Injected, addr 0xb5a370c, size 0x3c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GraphicsBuffer_Target get_indexBufferTarget_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_indexFormat, addr 0xb5a032c, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::IndexFormat get_indexFormat() ;

/// @brief Method get_indexFormat_Injected, addr 0xb5a03a4, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::IndexFormat get_indexFormat_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isLodSelectionActive, addr 0xb5a88ac, size 0x18, virtual false, abstract: false, final false
inline bool get_isLodSelectionActive() ;

/// [NativeMethod("GetIsReadable")]
/// @brief Method get_isReadable, addr 0xb5a58bc, size 0x78, virtual false, abstract: false, final false
inline bool get_isReadable() ;

/// @brief Method get_isReadable_Injected, addr 0xb5a5934, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isReadable_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_lodCount, addr 0xb5a87b0, size 0x4, virtual false, abstract: false, final false
inline int32_t get_lodCount() ;

/// @brief Method get_lodSelectionCurve, addr 0xb5a88c4, size 0x4, virtual false, abstract: false, final false
inline ::GlobalNamespace::Mesh_LodSelectionCurve get_lodSelectionCurve() ;

/// @brief Method get_normals, addr 0xb5a7f90, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> get_normals() ;

/// @brief Method get_skinWeightBufferLayout, addr 0xb5af6a8, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::SkinWeights get_skinWeightBufferLayout() ;

/// [NativeMethod(Name = "GetSubMeshCount")]
/// @brief Method get_subMeshCount, addr 0xb5a5a60, size 0x78, virtual false, abstract: false, final false
inline int32_t get_subMeshCount() ;

/// @brief Method get_subMeshCount_Injected, addr 0xb5a5ad8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_subMeshCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_tangents, addr 0xb5a803c, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector4> get_tangents() ;

/// @brief Method get_triangles, addr 0xb5ab894, size 0x78, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> get_triangles() ;

/// @brief Method get_uv, addr 0xb5a80e8, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> get_uv() ;

/// @brief Method get_uv2, addr 0xb5a8194, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> get_uv2() ;

/// @brief Method get_uv3, addr 0xb5a8240, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> get_uv3() ;

/// @brief Method get_uv4, addr 0xb5a82ec, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> get_uv4() ;

/// @brief Method get_uv5, addr 0xb5a8398, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> get_uv5() ;

/// @brief Method get_uv6, addr 0xb5a8444, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> get_uv6() ;

/// @brief Method get_uv7, addr 0xb5a84f0, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> get_uv7() ;

/// @brief Method get_uv8, addr 0xb5a859c, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> get_uv8() ;

/// @brief Method get_vertexAttributeCount, addr 0xb5a9e4c, size 0x4, virtual false, abstract: false, final false
inline int32_t get_vertexAttributeCount() ;

/// [FreeFunction(Name = "MeshScripting::GetVertexBufferCount", HasExplicitThis = true)]
/// @brief Method get_vertexBufferCount, addr 0xb5a2edc, size 0x78, virtual false, abstract: false, final false
inline int32_t get_vertexBufferCount() ;

/// @brief Method get_vertexBufferCount_Injected, addr 0xb5a2f54, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_vertexBufferCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_vertexBufferTarget, addr 0xb5a351c, size 0x78, virtual false, abstract: false, final false
inline ::GlobalNamespace::GraphicsBuffer_Target get_vertexBufferTarget() ;

/// @brief Method get_vertexBufferTarget_Injected, addr 0xb5a3594, size 0x3c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GraphicsBuffer_Target get_vertexBufferTarget_Injected(::System::IntPtr  _unity_self) ;

/// [NativeMethod("GetVertexCount")]
/// @brief Method get_vertexCount, addr 0xb5a4cd0, size 0x78, virtual false, abstract: false, final false
inline int32_t get_vertexCount() ;

/// @brief Method get_vertexCount_Injected, addr 0xb5a5a24, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_vertexCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_vertices, addr 0xb5a7ee4, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> get_vertices() ;

/// @brief Method set_bindposes, addr 0xb5a5174, size 0xfc, virtual false, abstract: false, final false
inline void set_bindposes(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method set_bindposes_Injected, addr 0xb5a5270, size 0x44, virtual false, abstract: false, final false
static inline void set_bindposes_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

/// @brief Method set_boneWeights, addr 0xb5af6a4, size 0x4, virtual false, abstract: false, final false
inline void set_boneWeights(::ArrayW<::UnityEngine::BoneWeight>  value) ;

/// @brief Method set_bounds, addr 0xb5a6c94, size 0x80, virtual false, abstract: false, final false
inline void set_bounds(::UnityEngine::Bounds  value) ;

/// @brief Method set_bounds_Injected, addr 0xb5a6d14, size 0x44, virtual false, abstract: false, final false
static inline void set_bounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  value) ;

/// @brief Method set_colors, addr 0xb5a8694, size 0x60, virtual false, abstract: false, final false
inline void set_colors(::ArrayW<::UnityEngine::Color>  value) ;

/// @brief Method set_colors32, addr 0xb5a8748, size 0x68, virtual false, abstract: false, final false
inline void set_colors32(::ArrayW<::UnityEngine::Color32>  value) ;

/// @brief Method set_indexBufferTarget, addr 0xb5a3748, size 0x80, virtual false, abstract: false, final false
inline void set_indexBufferTarget(::GlobalNamespace::GraphicsBuffer_Target  value) ;

/// @brief Method set_indexBufferTarget_Injected, addr 0xb5a37c8, size 0x44, virtual false, abstract: false, final false
static inline void set_indexBufferTarget_Injected(::System::IntPtr  _unity_self, ::GlobalNamespace::GraphicsBuffer_Target  value) ;

/// @brief Method set_indexFormat, addr 0xb5a03e0, size 0x80, virtual false, abstract: false, final false
inline void set_indexFormat(::UnityEngine::Rendering::IndexFormat  value) ;

/// @brief Method set_indexFormat_Injected, addr 0xb5a0460, size 0x44, virtual false, abstract: false, final false
static inline void set_indexFormat_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::IndexFormat  value) ;

/// @brief Method set_lodCount, addr 0xb5a87b4, size 0xf8, virtual false, abstract: false, final false
inline void set_lodCount(int32_t  value) ;

/// @brief Method set_lodSelectionCurve, addr 0xb5a88c8, size 0x4, virtual false, abstract: false, final false
inline void set_lodSelectionCurve(::GlobalNamespace::Mesh_LodSelectionCurve  value) ;

/// @brief Method set_normals, addr 0xb5a7fdc, size 0x60, virtual false, abstract: false, final false
inline void set_normals(::ArrayW<::UnityEngine::Vector3>  value) ;

/// [FreeFunction(Name = "MeshScripting::SetSubMeshCount", HasExplicitThis = true)]
/// @brief Method set_subMeshCount, addr 0xb5a5b14, size 0x80, virtual false, abstract: false, final false
inline void set_subMeshCount(int32_t  value) ;

/// @brief Method set_subMeshCount_Injected, addr 0xb5a5b94, size 0x44, virtual false, abstract: false, final false
static inline void set_subMeshCount_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_tangents, addr 0xb5a8088, size 0x60, virtual false, abstract: false, final false
inline void set_tangents(::ArrayW<::UnityEngine::Vector4>  value) ;

/// @brief Method set_triangles, addr 0xb5ab90c, size 0xa8, virtual false, abstract: false, final false
inline void set_triangles(::ArrayW<int32_t>  value) ;

/// @brief Method set_uv, addr 0xb5a8134, size 0x60, virtual false, abstract: false, final false
inline void set_uv(::ArrayW<::UnityEngine::Vector2>  value) ;

/// @brief Method set_uv2, addr 0xb5a81e0, size 0x60, virtual false, abstract: false, final false
inline void set_uv2(::ArrayW<::UnityEngine::Vector2>  value) ;

/// @brief Method set_uv3, addr 0xb5a828c, size 0x60, virtual false, abstract: false, final false
inline void set_uv3(::ArrayW<::UnityEngine::Vector2>  value) ;

/// @brief Method set_uv4, addr 0xb5a8338, size 0x60, virtual false, abstract: false, final false
inline void set_uv4(::ArrayW<::UnityEngine::Vector2>  value) ;

/// @brief Method set_uv5, addr 0xb5a83e4, size 0x60, virtual false, abstract: false, final false
inline void set_uv5(::ArrayW<::UnityEngine::Vector2>  value) ;

/// @brief Method set_uv6, addr 0xb5a8490, size 0x60, virtual false, abstract: false, final false
inline void set_uv6(::ArrayW<::UnityEngine::Vector2>  value) ;

/// @brief Method set_uv7, addr 0xb5a853c, size 0x60, virtual false, abstract: false, final false
inline void set_uv7(::ArrayW<::UnityEngine::Vector2>  value) ;

/// @brief Method set_uv8, addr 0xb5a85e8, size 0x60, virtual false, abstract: false, final false
inline void set_uv8(::ArrayW<::UnityEngine::Vector2>  value) ;

/// @brief Method set_vertexBufferTarget, addr 0xb5a35d0, size 0x80, virtual false, abstract: false, final false
inline void set_vertexBufferTarget(::GlobalNamespace::GraphicsBuffer_Target  value) ;

/// @brief Method set_vertexBufferTarget_Injected, addr 0xb5a3650, size 0x44, virtual false, abstract: false, final false
static inline void set_vertexBufferTarget_Injected(::System::IntPtr  _unity_self, ::GlobalNamespace::GraphicsBuffer_Target  value) ;

/// @brief Method set_vertices, addr 0xb5a7f30, size 0x60, virtual false, abstract: false, final false
inline void set_vertices(::ArrayW<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Mesh(Mesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mesh(Mesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14942};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Mesh) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
