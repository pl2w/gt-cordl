#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshVertexChannelFlags_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Mesh_MeshDataArray_def.hpp"
#include "UnityEngine/zzzz__Mesh_MeshData_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray)
namespace DigitalOpus::MB::Core {
class IAssignToMeshCustomizer;
}
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_IVertexAndTriangleProcessor;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MB_DynamicGameObject;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_SerializableIntArray;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_UVAdjuster_Atlas;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle;
}
namespace DigitalOpus::MB::Core {
class MB_IMeshBakerSettings;
}
namespace DigitalOpus::MB::Core {
class MB_IMeshCombinerSingle_BoneProcessor;
}
namespace DigitalOpus::MB::Core {
struct MB_MeshPivotLocation;
}
namespace DigitalOpus::MB::Core {
struct MB_MeshVertexChannelFlags;
}
namespace DigitalOpus::MB::Core {
struct MB_RenderType;
}
namespace GlobalNamespace {
class MB2_TextureBakeResults;
}
namespace GlobalNamespace {
struct MB3_MeshCombinerSingle_BufferDataFromPreviousBake;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
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
namespace GlobalNamespace {
struct MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/VertexAndTriangleProcessorNativeArray");
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, DigitalOpus.MB.Core.MB3_MeshCombinerSingle::SerializableIntArray, DigitalOpus.MB.Core.MB_MeshVertexChannelFlags, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeSlice`1<T>, UnityEngine.Color, UnityEngine.Mesh::MeshData, UnityEngine.Mesh::MeshDataArray, UnityEngine.Rendering.VertexAttributeDescriptor, UnityEngine.Vector2, UnityEngine.Vector3, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/VertexAndTriangleProcessorNativeArray
struct CORDL_TYPE MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray {
public:
// Declarations
 __declspec(property(get=get_channels, put=set_channels)) ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channels;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor"
constexpr operator  ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AdjustVertsToWriteAccordingToPivotPositionIfNecessary, addr 0x9db55e8, size 0x304, virtual false, abstract: false, final false
inline void AdjustVertsToWriteAccordingToPivotPositionIfNecessary(::DigitalOpus::MB::Core::MB_MeshPivotLocation  pivotLocationType, ::DigitalOpus::MB::Core::MB_RenderType  renderType, bool  clearBuffersAfterBake, ::UnityEngine::Vector3  pivotLocation_wld, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData) ;

/// @brief Method ApplyDataBufferToMesh, addr 0x9db2a04, size 0xac, virtual false, abstract: false, final false
inline void ApplyDataBufferToMesh(::UnityEngine::Mesh*  m) ;

/// @brief Method AssignBuffersToMesh, addr 0x9db4da0, size 0x848, virtual true, abstract: false, final true
inline void AssignBuffersToMesh(::UnityEngine::Mesh*  mesh, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsToWriteToMesh, bool  doWriteTrisToMesh, ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*  assignToMeshCustomizer, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>  submeshTrisToUse, ::by_ref<int32_t>  numNonZeroLengthSubmeshes) ;

/// @brief Method AssignTriangleDataForSubmeshes, addr 0x9db58ec, size 0x2a0, virtual true, abstract: false, final true
inline void AssignTriangleDataForSubmeshes(::UnityEngine::Mesh*  mmesh, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>  submeshTrisToUse, ::by_ref<int32_t>  numNonZeroLengthSubmeshes) ;

/// @brief Method AssignTriangleDataForSubmeshes_ShowHide, addr 0x9db5fd8, size 0x3b4, virtual true, abstract: false, final true
inline void AssignTriangleDataForSubmeshes_ShowHide(::UnityEngine::Mesh*  mesh, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>  submeshTrisToUse, ::by_ref<int32_t>  numNonZeroLengthSubmeshes) ;

/// @brief Method CopyArraysFromPreviousBakeBuffersToNewBuffers, addr 0x9db2b6c, size 0x9c8, virtual true, abstract: false, final true
inline void CopyArraysFromPreviousBakeBuffersToNewBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>  iOldBuffers, int32_t  destStartVertIdx, int32_t  triangleIdxAdjustment, ::ArrayW<int32_t>  targSubmeshTidx, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method CopyFromDGOMeshToBuffers, addr 0x9db3534, size 0x9d4, virtual true, abstract: false, final true
inline void CopyFromDGOMeshToBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  destStartVertsIdx, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsToUpdate, bool  updateTris, bool  updateBWdata, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*  boneProcessor, ::ArrayW<int32_t>  targSubmeshTidx, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*  uvAdjuster, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  meshChannelCacheParam) ;

/// @brief Method CopyUV2unchangedToSeparateRects, addr 0x9db638c, size 0x718, virtual true, abstract: false, final true
inline void CopyUV2unchangedToSeparateRects(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, float_t  uv2UnwrappingParamsPackMargin) ;

/// @brief Method Dispose, addr 0x9db1f44, size 0xa0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetSubmeshCount, addr 0x9db2af8, size 0x18, virtual true, abstract: false, final true
inline int32_t GetSubmeshCount() ;

/// @brief Method GetSubmeshTrisWithShowHideApplied, addr 0x9db5b8c, size 0x3cc, virtual false, abstract: false, final false
inline ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*> GetSubmeshTrisWithShowHideApplied(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh) ;

/// @brief Method GetTriangleSizes, addr 0x9db6aa4, size 0xc0, virtual true, abstract: false, final true
inline ::ArrayW<int32_t> GetTriangleSizes() ;

/// @brief Method GetVertexCount, addr 0x9db2ab0, size 0x48, virtual true, abstract: false, final true
inline int32_t GetVertexCount() ;

/// @brief Method Init, addr 0x9db1ff4, size 0x51c, virtual true, abstract: false, final true
inline void Init(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, int32_t  vertexCount, ::ArrayW<int32_t>  newSubmeshTrisSize, int32_t  uvChannelWithExtraParameter, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  meshChannelsCache, bool  loadDataFromCombinedMesh, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel) ;

/// @brief Method InitFromMeshCombiner, addr 0x9db2510, size 0x4bc, virtual true, abstract: false, final true
inline void InitFromMeshCombiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, int32_t  uvChannelWithExtraParameter) ;

/// @brief Method InitShowHide, addr 0x9db29cc, size 0x38, virtual true, abstract: false, final true
inline void InitShowHide(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner) ;

/// @brief Method IsDisposed, addr 0x9db1fec, size 0x8, virtual true, abstract: false, final true
inline bool IsDisposed() ;

/// @brief Method IsInitialized, addr 0x9db1fe4, size 0x8, virtual true, abstract: false, final true
inline bool IsInitialized() ;

/// @brief Method TransferOwnershipOfSerializableBuffersToCombiner, addr 0x9db2b10, size 0x5c, virtual true, abstract: false, final true
inline void TransferOwnershipOfSerializableBuffersToCombiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  c, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsToTransfer, ::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake  serializableBufferData) ;

/// @brief Method _CopyAndAdjustUV2FromMesh, addr 0x9db48d0, size 0x4d0, virtual false, abstract: false, final false
inline void _CopyAndAdjustUV2FromMesh(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*  meshChannelsCache, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  vertsIdx, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method _LocalToWorld, addr 0x9db3f08, size 0x474, virtual false, abstract: false, final false
inline void _LocalToWorld(::UnityEngine::Transform*  t, bool  doNorm, bool  doTan, int32_t  destStartVertsIdx, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  dgoMeshVerts, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  dgoMeshNorms, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  dgoMeshTans, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  verticies, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  normals, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  tangents) ;

/// @brief Method _LocalToWorldMatrix_TRS, addr 0x9db6dc8, size 0x3f0, virtual false, abstract: false, final false
static inline void _LocalToWorldMatrix_TRS(::by_ref<::UnityEngine::Matrix4x4>  wld_X_local, bool  doNorm, bool  doTan, int32_t  destStartVertsIdx, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  dgoMeshVerts, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  dgoMeshNorms, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  dgoMeshTans, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  verticies, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  normals, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  tangents) ;

/// @brief Method _LocalToWorld_TR, addr 0x9db6b64, size 0x264, virtual false, abstract: false, final false
static inline void _LocalToWorld_TR(::UnityEngine::Quaternion  wld_Rot_local, ::UnityEngine::Vector3  position_wld, bool  doNorm, bool  doTan, int32_t  destStartVertsIdx, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  dgoMeshVerts_local, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  dgoMeshNorms_local, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  dgoMeshTans_local, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  verticies, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  normals, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  tangents) ;

/// @brief Method _LocalToWorld_TRS, addr 0x9db71b8, size 0x4d4, virtual false, abstract: false, final false
static inline void _LocalToWorld_TRS(::UnityEngine::Quaternion  wld_Rot_local, ::UnityEngine::Vector3  position_wld, ::UnityEngine::Vector3  scale, bool  doNorm, bool  doTan, int32_t  destStartVertsIdx, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  dgoMeshVerts_local, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  dgoMeshNorms_local, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  dgoMeshTans_local, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  verticies, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  normals, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  tangents) ;

/// @brief Method _NumNonZeroLengthSubmeshTris, addr 0x9db5f58, size 0x80, virtual false, abstract: false, final false
static inline int32_t _NumNonZeroLengthSubmeshTris(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  subTris, ::by_ref<int32_t>  numIndexes) ;

/// @brief Method _copyAndAdjustUVsFromMesh, addr 0x9db437c, size 0x554, virtual false, abstract: false, final false
inline void _copyAndAdjustUVsFromMesh(::GlobalNamespace::MB2_TextureBakeResults*  tbr, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::UnityEngine::Mesh*  mesh, int32_t  uvChannel, int32_t  vertsIdx, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uvsOut, ::Unity::Collections::NativeSlice_1<float_t>  uvsSliceIdx, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*  meshChannelsCache, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_channels, addr 0x9db1f34, size 0x8, virtual true, abstract: false, final true
inline ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags get_channels() ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor"
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor* i___DigitalOpus__MB__Core__MB3_MeshCombinerSingle_IVertexAndTriangleProcessor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// [CompilerGenerated]
/// @brief Method set_channels, addr 0x9db1f3c, size 0x8, virtual false, abstract: false, final false
inline void set_channels(::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray() ;

// Ctor Parameters [CppParam { name: "_disposed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_isInitialized", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "LOG_LEVEL", ty: "::DigitalOpus::MB::Core::MB2_LogLevel", modifiers: "", def_value: None, comment: None }, CppParam { name: "_channels_k__BackingField", ty: "::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "vertexAttributes", ty: "::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "dataArrayAllocated", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "dataArray", ty: "::GlobalNamespace::Mesh_MeshDataArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "::GlobalNamespace::Mesh_MeshData", modifiers: "", def_value: None, comment: None }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "verticiesModified", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "verticies", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "normals", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tangents", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "colors", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Color>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv0s", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv2s", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv3s", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv4s", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv5s", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv6s", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv7s", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv8s", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uvsSliceIdx", ty: "::Unity::Collections::NativeSlice_1<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uvsWithExtraIndex", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "submeshTris", ty: "::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "triangleBuffer", ty: "::Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "bufferStride_0", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bufferStride_1", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bufferStride_2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rawSliceSizerType_0", ty: "::System::Type*", modifiers: "", def_value: None, comment: None }, CppParam { name: "rawSliceSizerType_1", ty: "::System::Type*", modifiers: "", def_value: None, comment: None }, CppParam { name: "rawSliceVertexStream_0", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "rawSliceVertexStream_1", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }]
constexpr MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray(bool  _disposed, bool  _isInitialized, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  _channels_k__BackingField, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  vertexAttributes, bool  dataArrayAllocated, ::GlobalNamespace::Mesh_MeshDataArray  dataArray, ::GlobalNamespace::Mesh_MeshData  data, int32_t  vertexCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  verticiesModified, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  verticies, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  normals, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  tangents, ::Unity::Collections::NativeSlice_1<::UnityEngine::Color>  colors, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv0s, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv2s, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv3s, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv4s, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv5s, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv6s, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv7s, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv8s, ::Unity::Collections::NativeSlice_1<float_t>  uvsSliceIdx, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  uvsWithExtraIndex, ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  submeshTris, ::Unity::Collections::NativeArray_1<uint16_t>  triangleBuffer, int32_t  bufferStride_0, int32_t  bufferStride_1, int32_t  bufferStride_2, ::System::Type*  rawSliceSizerType_0, ::System::Type*  rawSliceSizerType_1, ::System::Object*  rawSliceVertexStream_0, ::System::Object*  rawSliceVertexStream_1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22724};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x178};

/// @brief Field _disposed, offset: 0x0, size: 0x1, def value: None
 bool  _disposed;

/// @brief Field _isInitialized, offset: 0x1, size: 0x1, def value: None
 bool  _isInitialized;

/// @brief Field LOG_LEVEL, offset: 0x4, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

/// [CompilerGenerated]
/// @brief Field <channels>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  _channels_k__BackingField;

/// @brief Field vertexAttributes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  vertexAttributes;

/// @brief Field dataArrayAllocated, offset: 0x18, size: 0x1, def value: None
 bool  dataArrayAllocated;

/// @brief Field dataArray, offset: 0x20, size: 0x10, def value: None
 ::GlobalNamespace::Mesh_MeshDataArray  dataArray;

/// @brief Field data, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::Mesh_MeshData  data;

/// @brief Field vertexCount, offset: 0x38, size: 0x4, def value: None
 int32_t  vertexCount;

/// @brief Field verticiesModified, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  verticiesModified;

/// @brief Field verticies, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  verticies;

/// @brief Field normals, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  normals;

/// @brief Field tangents, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  tangents;

/// @brief Field colors, offset: 0x80, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<::UnityEngine::Color>  colors;

/// @brief Field uv0s, offset: 0x90, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv0s;

/// @brief Field uv2s, offset: 0xa0, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv2s;

/// @brief Field uv3s, offset: 0xb0, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv3s;

/// @brief Field uv4s, offset: 0xc0, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv4s;

/// @brief Field uv5s, offset: 0xd0, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv5s;

/// @brief Field uv6s, offset: 0xe0, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv6s;

/// @brief Field uv7s, offset: 0xf0, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv7s;

/// @brief Field uv8s, offset: 0x100, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv8s;

/// @brief Field uvsSliceIdx, offset: 0x110, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<float_t>  uvsSliceIdx;

/// @brief Field uvsWithExtraIndex, offset: 0x120, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  uvsWithExtraIndex;

/// @brief Field submeshTris, offset: 0x130, size: 0x8, def value: None
 ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  submeshTris;

/// @brief Field triangleBuffer, offset: 0x138, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint16_t>  triangleBuffer;

/// @brief Field bufferStride_0, offset: 0x148, size: 0x4, def value: None
 int32_t  bufferStride_0;

/// @brief Field bufferStride_1, offset: 0x14c, size: 0x4, def value: None
 int32_t  bufferStride_1;

/// @brief Field bufferStride_2, offset: 0x150, size: 0x4, def value: None
 int32_t  bufferStride_2;

/// @brief Field rawSliceSizerType_0, offset: 0x158, size: 0x8, def value: None
 ::System::Type*  rawSliceSizerType_0;

/// @brief Field rawSliceSizerType_1, offset: 0x160, size: 0x8, def value: None
 ::System::Type*  rawSliceSizerType_1;

/// @brief Field rawSliceVertexStream_0, offset: 0x168, size: 0x8, def value: None
 ::System::Object*  rawSliceVertexStream_0;

/// @brief Field rawSliceVertexStream_1, offset: 0x170, size: 0x8, def value: None
 ::System::Object*  rawSliceVertexStream_1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, _disposed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, _isInitialized) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, LOG_LEVEL) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, _channels_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, vertexAttributes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, dataArrayAllocated) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, dataArray) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, vertexCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, verticiesModified) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, verticies) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, normals) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, tangents) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, colors) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, uv0s) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, uv2s) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, uv3s) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, uv4s) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, uv5s) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, uv6s) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, uv7s) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, uv8s) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, uvsSliceIdx) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, uvsWithExtraIndex) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, submeshTris) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, triangleBuffer) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, bufferStride_0) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, bufferStride_1) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, bufferStride_2) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, rawSliceSizerType_0) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, rawSliceSizerType_1) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, rawSliceVertexStream_0) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray, rawSliceVertexStream_1) == 0x170, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray) == 0x178, "Size mismatch!");

} // namespace end def GlobalNamespace
