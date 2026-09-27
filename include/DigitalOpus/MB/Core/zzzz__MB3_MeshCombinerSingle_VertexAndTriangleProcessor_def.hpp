#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle_VertexAndTriangleProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshVertexChannelFlags_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MeshCombinerSingle_VertexAndTriangleProcessor)
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
class MB3_MeshCombinerSingle_MeshChannelsCache;
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
namespace UnityEngine {
struct Color;
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
struct MB3_MeshCombinerSingle_VertexAndTriangleProcessor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/VertexAndTriangleProcessor");
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, DigitalOpus.MB.Core.MB3_MeshCombinerSingle::SerializableIntArray, DigitalOpus.MB.Core.MB_MeshVertexChannelFlags, UnityEngine.Color, UnityEngine.Vector2, UnityEngine.Vector3, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/VertexAndTriangleProcessor
struct CORDL_TYPE MB3_MeshCombinerSingle_VertexAndTriangleProcessor {
public:
// Declarations
 __declspec(property(get=get_channels, put=set_channels)) ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channels;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor"
constexpr operator  ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AdjustVertsToWriteAccordingToPivotPositionIfNecessary, addr 0x9da6e44, size 0x2f0, virtual false, abstract: false, final false
inline void AdjustVertsToWriteAccordingToPivotPositionIfNecessary(::DigitalOpus::MB::Core::MB_MeshPivotLocation  pivotLocationType, ::DigitalOpus::MB::Core::MB_RenderType  renderType, bool  clearBuffersAfterBake, ::UnityEngine::Vector3  pivotLocation_wld, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  verts2Write) ;

/// @brief Method AssignBuffersToMesh, addr 0x9da654c, size 0x8f8, virtual true, abstract: false, final true
inline void AssignBuffersToMesh(::UnityEngine::Mesh*  mesh, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsToWriteToMesh, bool  doWriteTrisToMesh, ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*  assignToMeshCustomizer, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>  submeshTrisToUse, ::by_ref<int32_t>  numNonZeroLengthSubmeshes) ;

/// @brief Method AssignTriangleDataForSubmeshes, addr 0x9da7134, size 0xd0, virtual true, abstract: false, final true
inline void AssignTriangleDataForSubmeshes(::UnityEngine::Mesh*  mesh, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>  submeshTrisToUse, ::by_ref<int32_t>  numNonZeroLengthSubmeshes) ;

/// @brief Method AssignTriangleDataForSubmeshes_ShowHide, addr 0x9da7650, size 0x4, virtual true, abstract: false, final true
inline void AssignTriangleDataForSubmeshes_ShowHide(::UnityEngine::Mesh*  mesh, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>  submeshTrisToUse, ::by_ref<int32_t>  numNonZeroLengthSubmeshes) ;

/// @brief Method CopyArraysFromPreviousBakeBuffersToNewBuffers, addr 0x9da4a50, size 0x6f0, virtual true, abstract: false, final true
inline void CopyArraysFromPreviousBakeBuffersToNewBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>  iOldBuffers, int32_t  destStartVertIdx, int32_t  triangleIdxAdjustment, ::ArrayW<int32_t>  targSubmeshTidx, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method CopyFromDGOMeshToBuffers, addr 0x9da5140, size 0x730, virtual true, abstract: false, final true
inline void CopyFromDGOMeshToBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  destStartVertsIdx, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsToUpdate, bool  updateTris, bool  updateBWdata, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*  boneProcessor, ::ArrayW<int32_t>  targSubmeshTidx, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*  uvAdjuster, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  meshChannelCacheParam) ;

/// @brief Method CopyUV2unchangedToSeparateRects, addr 0x9da7654, size 0x650, virtual true, abstract: false, final true
inline void CopyUV2unchangedToSeparateRects(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, float_t  uv2UnwrappingParamsPackMargin) ;

/// @brief Method Dispose, addr 0x9da3f04, size 0x108, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetSubmeshCount, addr 0x9da47b8, size 0x18, virtual true, abstract: false, final true
inline int32_t GetSubmeshCount() ;

/// @brief Method GetSubmeshTrisWithShowHideApplied, addr 0x9da7204, size 0x3cc, virtual false, abstract: false, final false
inline ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*> GetSubmeshTrisWithShowHideApplied(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh) ;

/// @brief Method GetTriangleSizes, addr 0x9da7ca4, size 0xc0, virtual true, abstract: false, final true
inline ::ArrayW<int32_t> GetTriangleSizes() ;

/// @brief Method GetVertexCount, addr 0x9da47a0, size 0x18, virtual true, abstract: false, final true
inline int32_t GetVertexCount() ;

/// @brief Method Init, addr 0x9da401c, size 0x454, virtual true, abstract: false, final true
inline void Init(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, int32_t  vertexCount, ::ArrayW<int32_t>  newSubmeshTrisSize, int32_t  uvChannelWithExtraParameter, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  meshChannelsCache, bool  loadDataFromCombinedMesh, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel) ;

/// @brief Method InitFromMeshCombiner, addr 0x9da4470, size 0x2fc, virtual true, abstract: false, final true
inline void InitFromMeshCombiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, int32_t  uvChannelWithExtraParameter) ;

/// @brief Method InitShowHide, addr 0x9da476c, size 0x34, virtual true, abstract: false, final true
inline void InitShowHide(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner) ;

/// @brief Method IsDisposed, addr 0x9da4014, size 0x8, virtual true, abstract: false, final true
inline bool IsDisposed() ;

/// @brief Method IsInitialized, addr 0x9da400c, size 0x8, virtual true, abstract: false, final true
inline bool IsInitialized() ;

/// @brief Method TransferOwnershipOfSerializableBuffersToCombiner, addr 0x9da47d0, size 0x280, virtual true, abstract: false, final true
inline void TransferOwnershipOfSerializableBuffersToCombiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  c, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsToTransfer, ::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake  serializableBufferData) ;

/// @brief Method _CopyAndAdjustUV2FromMesh, addr 0x9da60b4, size 0x498, virtual false, abstract: false, final false
inline void _CopyAndAdjustUV2FromMesh(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*  meshChannelsCache, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  vertsIdx, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method _LocalToWorld, addr 0x9da5870, size 0x2fc, virtual false, abstract: false, final false
inline void _LocalToWorld(::UnityEngine::Transform*  t, bool  doNorm, bool  doTan, int32_t  destStartVertsIdx, ::ArrayW<::UnityEngine::Vector3>  dgoMeshVerts, ::ArrayW<::UnityEngine::Vector3>  dgoMeshNorms, ::ArrayW<::UnityEngine::Vector4>  dgoMeshTans, ::ArrayW<::UnityEngine::Vector3>  verticies, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  tangents) ;

/// @brief Method _LocalToWorldMatrix_TRS, addr 0x9da7f68, size 0x3f8, virtual false, abstract: false, final false
static inline void _LocalToWorldMatrix_TRS(::by_ref<::UnityEngine::Matrix4x4>  wld_X_local, bool  doNorm, bool  doTan, int32_t  destStartVertsIdx, ::ArrayW<::UnityEngine::Vector3>  dgoMeshVerts, ::ArrayW<::UnityEngine::Vector3>  dgoMeshNorms, ::ArrayW<::UnityEngine::Vector4>  dgoMeshTans, ::ArrayW<::UnityEngine::Vector3>  verticies, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  tangents) ;

/// @brief Method _LocalToWorld_TR, addr 0x9da7d64, size 0x204, virtual false, abstract: false, final false
static inline void _LocalToWorld_TR(::UnityEngine::Quaternion  wld_Rot_local, ::UnityEngine::Vector3  position_wld, bool  doNorm, bool  doTan, int32_t  destStartVertsIdx, ::ArrayW<::UnityEngine::Vector3>  dgoMeshVerts_local, ::ArrayW<::UnityEngine::Vector3>  dgoMeshNorms_local, ::ArrayW<::UnityEngine::Vector4>  dgoMeshTans_local, ::ArrayW<::UnityEngine::Vector3>  verticies, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  tangents) ;

/// @brief Method _LocalToWorld_TRS, addr 0x9da8360, size 0x4c0, virtual false, abstract: false, final false
static inline void _LocalToWorld_TRS(::UnityEngine::Quaternion  wld_Rot_local, ::UnityEngine::Vector3  position_wld, ::UnityEngine::Vector3  scale, bool  doNorm, bool  doTan, int32_t  destStartVertsIdx, ::ArrayW<::UnityEngine::Vector3>  dgoMeshVerts_local, ::ArrayW<::UnityEngine::Vector3>  dgoMeshNorms_local, ::ArrayW<::UnityEngine::Vector4>  dgoMeshTans_local, ::ArrayW<::UnityEngine::Vector3>  verticies, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  tangents) ;

/// @brief Method _NumNonZeroLengthSubmeshTris, addr 0x9da75d0, size 0x80, virtual false, abstract: false, final false
static inline int32_t _NumNonZeroLengthSubmeshTris(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  subTris, ::by_ref<int32_t>  numIndexes) ;

/// @brief Method _copyAndAdjustUVsFromMesh, addr 0x9da5b6c, size 0x548, virtual false, abstract: false, final false
inline void _copyAndAdjustUVsFromMesh(::GlobalNamespace::MB2_TextureBakeResults*  tbr, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::UnityEngine::Mesh*  mesh, int32_t  uvChannel, int32_t  vertsIdx, ::ArrayW<::UnityEngine::Vector2>  uvsOut, ::ArrayW<float_t>  uvsSliceIdx, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*  meshChannelsCache, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_channels, addr 0x9da3ef4, size 0x8, virtual true, abstract: false, final true
inline ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags get_channels() ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor"
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor* i___DigitalOpus__MB__Core__MB3_MeshCombinerSingle_IVertexAndTriangleProcessor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// [CompilerGenerated]
/// @brief Method set_channels, addr 0x9da3efc, size 0x8, virtual false, abstract: false, final false
inline void set_channels(::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_VertexAndTriangleProcessor() ;

// Ctor Parameters [CppParam { name: "_disposed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_isInitialized", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "LOG_LEVEL", ty: "::DigitalOpus::MB::Core::MB2_LogLevel", modifiers: "", def_value: None, comment: None }, CppParam { name: "_channels_k__BackingField", ty: "::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "verticies", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "normals", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tangents", ty: "::ArrayW<::UnityEngine::Vector4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "colors", ty: "::ArrayW<::UnityEngine::Color>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv0s", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uvsSliceIdx", ty: "::ArrayW<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv2s", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv3s", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv4s", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv5s", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv6s", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv7s", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv8s", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "submeshTris", ty: "::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>", modifiers: "", def_value: None, comment: None }]
constexpr MB3_MeshCombinerSingle_VertexAndTriangleProcessor(bool  _disposed, bool  _isInitialized, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  _channels_k__BackingField, ::ArrayW<::UnityEngine::Vector3>  verticies, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  tangents, ::ArrayW<::UnityEngine::Color>  colors, ::ArrayW<::UnityEngine::Vector2>  uv0s, ::ArrayW<float_t>  uvsSliceIdx, ::ArrayW<::UnityEngine::Vector2>  uv2s, ::ArrayW<::UnityEngine::Vector2>  uv3s, ::ArrayW<::UnityEngine::Vector2>  uv4s, ::ArrayW<::UnityEngine::Vector2>  uv5s, ::ArrayW<::UnityEngine::Vector2>  uv6s, ::ArrayW<::UnityEngine::Vector2>  uv7s, ::ArrayW<::UnityEngine::Vector2>  uv8s, ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  submeshTris) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22644};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field _disposed, offset: 0x0, size: 0x1, def value: None
 bool  _disposed;

/// @brief Field _isInitialized, offset: 0x1, size: 0x1, def value: None
 bool  _isInitialized;

/// @brief Field LOG_LEVEL, offset: 0x4, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

/// [CompilerGenerated]
/// @brief Field <channels>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  _channels_k__BackingField;

/// @brief Field verticies, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  verticies;

/// @brief Field normals, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  normals;

/// @brief Field tangents, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  tangents;

/// @brief Field colors, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  colors;

/// @brief Field uv0s, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  uv0s;

/// @brief Field uvsSliceIdx, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  uvsSliceIdx;

/// @brief Field uv2s, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  uv2s;

/// @brief Field uv3s, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  uv3s;

/// @brief Field uv4s, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  uv4s;

/// @brief Field uv5s, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  uv5s;

/// @brief Field uv6s, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  uv6s;

/// @brief Field uv7s, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  uv7s;

/// @brief Field uv8s, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  uv8s;

/// @brief Field submeshTris, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  submeshTris;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, _disposed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, _isInitialized) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, LOG_LEVEL) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, _channels_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, verticies) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, normals) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, tangents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, colors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, uv0s) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, uvsSliceIdx) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, uv2s) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, uv3s) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, uv4s) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, uv5s) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, uv6s) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, uv7s) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, uv8s) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor, submeshTris) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
