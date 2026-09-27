#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_LightmapOptions_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_BoneAndBindpose_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_BoneWeightDataForMesh_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_BufferDataFromPreviousBake_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_MeshCreationConditions_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshVertexChannelFlags_def.hpp"
#include "GlobalNamespace/zzzz__MB_MaterialAndUVRect_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__BoneWeight1_def.hpp"
#include "UnityEngine/zzzz__BoneWeight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MeshCombinerSingle)
namespace DigitalOpus::MB::Core {
class IAssignToMeshCustomizer;
}
namespace DigitalOpus::MB::Core {
class MB2_EditorMethodsInterface;
}
namespace DigitalOpus::MB::Core {
struct MB2_LightmapOptions;
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
class MB3_MeshCombinerSingle_MBBlendShapeFrame;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MBBlendShape;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MB_DynamicGameObject;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MeshChannelsCache;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MeshChannelsNativeArray;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MeshChannels;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_SerializableIntArray;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_UVAdjuster_Atlas;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle___c__DisplayClass74_0;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombiner_GenerateUV2Delegate;
}
namespace DigitalOpus::MB::Core {
class MB_IMeshBakerSettings;
}
namespace DigitalOpus::MB::Core {
class MB_IMeshCombinerSingle_BoneProcessor;
}
namespace DigitalOpus::MB::Core {
struct MB_MeshVertexChannelFlags;
}
namespace DigitalOpus::MB::Core {
struct MB_RenderType;
}
namespace DigitalOpus::MB::Core {
struct MB_TextureTilingTreatment;
}
namespace DigitalOpus::MB::Core {
class SerializableSourceBlendShape2Combined;
}
namespace GlobalNamespace {
class MB2_TextureBakeResults;
}
namespace GlobalNamespace {
struct MB3_MeshCombinerSingle_BoneAndBindpose;
}
namespace GlobalNamespace {
struct MB3_MeshCombinerSingle_BoneWeightDataForMesh;
}
namespace GlobalNamespace {
struct MB3_MeshCombinerSingle_BufferDataFromPreviousBake;
}
namespace GlobalNamespace {
struct MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper;
}
namespace GlobalNamespace {
struct MB3_MeshCombinerSingle_MeshCreationConditions;
}
namespace GlobalNamespace {
struct MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray;
}
namespace GlobalNamespace {
struct MB3_MeshCombinerSingle_VertexAndTriangleProcessor;
}
namespace GlobalNamespace {
struct MB_Utility_MeshAnalysisResult;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Specialized {
class OrderedDictionary;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
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
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
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
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_IVertexAndTriangleProcessor;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MBBlendShape;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MBBlendShapeFrame;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MB_DynamicGameObject;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MeshChannels;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MeshChannelsCache;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MeshChannelsNativeArray;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_SerializableIntArray;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_UVAdjuster_Atlas;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle___c__DisplayClass74_0;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/IMeshChannelsCacheTaggingInterface");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/IVertexAndTriangleProcessor");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MBBlendShape");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MBBlendShapeFrame");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MB_DynamicGameObject");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MB_MeshCombinerSingle_BlendShapeProcessor");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MB_MeshCombinerSingle_BoneProcessor");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MB_MeshCombinerSingle_BoneProcessorNewAPI");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MB_MeshCombinerSingle_SubCombiner");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MeshChannels");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MeshChannelsCache");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MeshChannelsCache_NativeArray");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MeshChannelsNativeArray");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/SerializableIntArray");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/UVAdjuster_Atlas");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/<>c__DisplayClass74_0");
// Dependencies DigitalOpus.MB.Core.MB3_MeshCombiner, DigitalOpus.MB.Core.MB3_MeshCombinerSingle::BufferDataFromPreviousBake, DigitalOpus.MB.Core.MB3_MeshCombinerSingle::MBBlendShape, DigitalOpus.MB.Core.MB3_MeshCombinerSingle::MeshCreationConditions, DigitalOpus.MB.Core.MB3_MeshCombinerSingle::SerializableIntArray, DigitalOpus.MB.Core.MB_MeshVertexChannelFlags, UnityEngine.Color, UnityEngine.GameObject, UnityEngine.Matrix4x4, UnityEngine.Transform, UnityEngine.Vector2, UnityEngine.Vector3, UnityEngine.Vector4
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle
class CORDL_TYPE MB3_MeshCombinerSingle : public ::DigitalOpus::MB::Core::MB3_MeshCombiner {
public:
// Declarations
using IMeshChannelsCacheTaggingInterface = ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface;

using IVertexAndTriangleProcessor = ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor;

using MBBlendShape = ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape;

using MBBlendShapeFrame = ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame;

using MB_DynamicGameObject = ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject;

using MB_MeshCombinerSingle_BlendShapeProcessor = ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor;

using MB_MeshCombinerSingle_BoneProcessor = ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor;

using MB_MeshCombinerSingle_BoneProcessorNewAPI = ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI;

using MB_MeshCombinerSingle_SubCombiner = ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner;

using MeshChannels = ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels;

using MeshChannelsCache = ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache;

using MeshChannelsCache_NativeArray = ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray;

using MeshChannelsNativeArray = ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray;

using SerializableIntArray = ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray;

using UVAdjuster_Atlas = ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas;

using __c__DisplayClass74_0 = ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0;

using BoneAndBindpose = ::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose;

using BoneWeightDataForMesh = ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh;

using BufferDataFromPreviousBake = ::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake;

using MB_MeshCombinerSingle_MeshNativeArrayHelper = ::GlobalNamespace::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper;

using MeshCreationConditions = ::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions;

using VertexAndTriangleProcessor = ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor;

using VertexAndTriangleProcessorNativeArray = ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray;

/// @brief Field _blendShapeProcessor, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__blendShapeProcessor, put=__cordl_internal_set__blendShapeProcessor)) ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*  _blendShapeProcessor;

/// @brief Field _boneProcessor, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__boneProcessor, put=__cordl_internal_set__boneProcessor)) ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*  _boneProcessor;

/// @brief Field _instance2combined_map, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__instance2combined_map, put=__cordl_internal_set__instance2combined_map)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  _instance2combined_map;

/// @brief Field _mesh, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh>  _mesh;

/// @brief Field _meshBirth, offset 0x1bc, size 0x4 
 __declspec(property(get=__cordl_internal_get__meshBirth, put=__cordl_internal_set__meshBirth)) ::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions  _meshBirth;

/// @brief Field _meshChannelsCache, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshChannelsCache, put=__cordl_internal_set__meshChannelsCache)) ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  _meshChannelsCache;

/// @brief Field _vertexAndTriProcessor, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get__vertexAndTriProcessor, put=__cordl_internal_set__vertexAndTriProcessor)) ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*  _vertexAndTriProcessor;

/// @brief Field bindPoses, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_bindPoses, put=__cordl_internal_set_bindPoses)) ::ArrayW<::UnityEngine::Matrix4x4>  bindPoses;

/// @brief Field blendShapes, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_blendShapes, put=__cordl_internal_set_blendShapes)) ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>  blendShapes;

/// @brief Field bones, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_bones, put=__cordl_internal_set_bones)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  bones;

/// @brief Field bufferDataFromPrevious, offset 0x1a8, size 0x14 
 __declspec(property(get=__cordl_internal_get_bufferDataFromPrevious, put=__cordl_internal_set_bufferDataFromPrevious)) ::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake  bufferDataFromPrevious;

/// @brief Field channelsLastBake, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_channelsLastBake, put=__cordl_internal_set_channelsLastBake)) ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsLastBake;

/// @brief Field colors, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_colors, put=__cordl_internal_set_colors)) ::ArrayW<::UnityEngine::Color>  colors;

/// @brief Field db_addDeleteGameObjects, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_db_addDeleteGameObjects, put=__cordl_internal_set_db_addDeleteGameObjects)) ::System::Diagnostics::Stopwatch*  db_addDeleteGameObjects;

/// @brief Field db_addDeleteGameObjects_CollectMeshData, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_db_addDeleteGameObjects_CollectMeshData, put=__cordl_internal_set_db_addDeleteGameObjects_CollectMeshData)) ::System::Diagnostics::Stopwatch*  db_addDeleteGameObjects_CollectMeshData;

/// @brief Field db_addDeleteGameObjects_CollectMeshData_a, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_db_addDeleteGameObjects_CollectMeshData_a, put=__cordl_internal_set_db_addDeleteGameObjects_CollectMeshData_a)) ::System::Diagnostics::Stopwatch*  db_addDeleteGameObjects_CollectMeshData_a;

/// @brief Field db_addDeleteGameObjects_CollectMeshData_b, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_db_addDeleteGameObjects_CollectMeshData_b, put=__cordl_internal_set_db_addDeleteGameObjects_CollectMeshData_b)) ::System::Diagnostics::Stopwatch*  db_addDeleteGameObjects_CollectMeshData_b;

/// @brief Field db_addDeleteGameObjects_CollectMeshData_c, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_db_addDeleteGameObjects_CollectMeshData_c, put=__cordl_internal_set_db_addDeleteGameObjects_CollectMeshData_c)) ::System::Diagnostics::Stopwatch*  db_addDeleteGameObjects_CollectMeshData_c;

/// @brief Field db_addDeleteGameObjects_CopyArraysFromPreviousBakeBuffersToNewBuffers, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_db_addDeleteGameObjects_CopyArraysFromPreviousBakeBuffersToNewBuffers, put=__cordl_internal_set_db_addDeleteGameObjects_CopyArraysFromPreviousBakeBuffersToNewBuffers)) ::System::Diagnostics::Stopwatch*  db_addDeleteGameObjects_CopyArraysFromPreviousBakeBuffersToNewBuffers;

/// @brief Field db_addDeleteGameObjects_CopyFromDGOMeshToBuffers, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_db_addDeleteGameObjects_CopyFromDGOMeshToBuffers, put=__cordl_internal_set_db_addDeleteGameObjects_CopyFromDGOMeshToBuffers)) ::System::Diagnostics::Stopwatch*  db_addDeleteGameObjects_CopyFromDGOMeshToBuffers;

/// @brief Field db_addDeleteGameObjects_Init, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_db_addDeleteGameObjects_Init, put=__cordl_internal_set_db_addDeleteGameObjects_Init)) ::System::Diagnostics::Stopwatch*  db_addDeleteGameObjects_Init;

/// @brief Field db_addDeleteGameObjects_InitFromMeshCombiner, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_db_addDeleteGameObjects_InitFromMeshCombiner, put=__cordl_internal_set_db_addDeleteGameObjects_InitFromMeshCombiner)) ::System::Diagnostics::Stopwatch*  db_addDeleteGameObjects_InitFromMeshCombiner;

/// @brief Field db_apply, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_db_apply, put=__cordl_internal_set_db_apply)) ::System::Diagnostics::Stopwatch*  db_apply;

/// @brief Field db_applyShowHide, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_db_applyShowHide, put=__cordl_internal_set_db_applyShowHide)) ::System::Diagnostics::Stopwatch*  db_applyShowHide;

/// @brief Field db_showHideGameObjects, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_db_showHideGameObjects, put=__cordl_internal_set_db_showHideGameObjects)) ::System::Diagnostics::Stopwatch*  db_showHideGameObjects;

/// @brief Field db_updateGameObjects, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_db_updateGameObjects, put=__cordl_internal_set_db_updateGameObjects)) ::System::Diagnostics::Stopwatch*  db_updateGameObjects;

/// @brief Field empty, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_empty, put=__cordl_internal_set_empty)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  empty;

/// @brief Field emptyIDs, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_emptyIDs, put=__cordl_internal_set_emptyIDs)) ::ArrayW<int32_t>  emptyIDs;

/// @brief Field lightmapIndex, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightmapIndex, put=__cordl_internal_set_lightmapIndex)) int32_t  lightmapIndex;

/// @brief Field mbDynamicObjectsInCombinedMesh, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_mbDynamicObjectsInCombinedMesh, put=__cordl_internal_set_mbDynamicObjectsInCombinedMesh)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh;

/// @brief Field normals, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_normals, put=__cordl_internal_set_normals)) ::ArrayW<::UnityEngine::Vector3>  normals;

/// @brief Field objectsInCombinedMesh, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsInCombinedMesh, put=__cordl_internal_set_objectsInCombinedMesh)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objectsInCombinedMesh;

 __declspec(property(put=set_renderType)) ::DigitalOpus::MB::Core::MB_RenderType  renderType;

 __declspec(property(put=set_resultSceneObject)) ::UnityW<::UnityEngine::GameObject>  resultSceneObject;

/// @brief Field submeshTris, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_submeshTris, put=__cordl_internal_set_submeshTris)) ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  submeshTris;

/// @brief Field tangents, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_tangents, put=__cordl_internal_set_tangents)) ::ArrayW<::UnityEngine::Vector4>  tangents;

 __declspec(property(put=set_textureBakeResults)) ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  textureBakeResults;

/// @brief Field uv2s, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv2s, put=__cordl_internal_set_uv2s)) ::ArrayW<::UnityEngine::Vector2>  uv2s;

/// @brief Field uv3s, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv3s, put=__cordl_internal_set_uv3s)) ::ArrayW<::UnityEngine::Vector2>  uv3s;

/// @brief Field uv4s, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv4s, put=__cordl_internal_set_uv4s)) ::ArrayW<::UnityEngine::Vector2>  uv4s;

/// @brief Field uv5s, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv5s, put=__cordl_internal_set_uv5s)) ::ArrayW<::UnityEngine::Vector2>  uv5s;

/// @brief Field uv6s, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv6s, put=__cordl_internal_set_uv6s)) ::ArrayW<::UnityEngine::Vector2>  uv6s;

/// @brief Field uv7s, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv7s, put=__cordl_internal_set_uv7s)) ::ArrayW<::UnityEngine::Vector2>  uv7s;

/// @brief Field uv8s, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv8s, put=__cordl_internal_set_uv8s)) ::ArrayW<::UnityEngine::Vector2>  uv8s;

/// @brief Field uvs, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_uvs, put=__cordl_internal_set_uvs)) ::ArrayW<::UnityEngine::Vector2>  uvs;

/// @brief Field uvsSliceIdx, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_uvsSliceIdx, put=__cordl_internal_set_uvsSliceIdx)) ::ArrayW<float_t>  uvsSliceIdx;

/// @brief Field verts, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_verts, put=__cordl_internal_set_verts)) ::ArrayW<::UnityEngine::Vector3>  verts;

/// @brief Method AddDeleteGameObjects, addr 0x9d8e054, size 0x218, virtual true, abstract: false, final false
inline bool AddDeleteGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<::UnityEngine::GameObject*>  deleteGOs, bool  disableRendererInSource) ;

/// @brief Method AddDeleteGameObjectsByID, addr 0x9d8e26c, size 0x66c, virtual true, abstract: false, final false
inline bool AddDeleteGameObjectsByID(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<int32_t>  deleteGOinstanceIDs, bool  disableRendererInSource) ;

/// @brief Method Apply, addr 0x9d8c8fc, size 0xe8, virtual true, abstract: false, final false
inline bool Apply(bool  triangles, bool  vertices, bool  normals, bool  tangents, bool  uvs, bool  uv2, bool  uv3, bool  uv4, bool  colors, bool  bones, bool  blendShapesFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod) ;

/// @brief Method Apply, addr 0x9d8c9e4, size 0x11c, virtual true, abstract: false, final false
inline bool Apply(bool  triangles, bool  vertices, bool  normals, bool  tangents, bool  uvs, bool  uv2, bool  uv3, bool  uv4, bool  uv5, bool  uv6, bool  uv7, bool  uv8, bool  colors, bool  bones, bool  blendShapesFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod) ;

/// @brief Method Apply, addr 0x9d8c844, size 0x5c, virtual true, abstract: false, final false
inline bool Apply(::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod) ;

/// @brief Method ApplyShowHide, addr 0x9d8c8a0, size 0x5c, virtual true, abstract: false, final false
inline void ApplyShowHide() ;

/// @brief Method BuildSceneHierarchPreBake, addr 0x9d8f4b8, size 0x9bc, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Renderer> BuildSceneHierarchPreBake(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  mom, ::UnityEngine::GameObject*  root, ::UnityEngine::Mesh*  m, bool  createNewChild, ::ArrayW<::UnityEngine::GameObject*>  objsToBeAdded) ;

/// @brief Method BuildSceneMeshObject, addr 0x9d8e8d8, size 0x120, virtual false, abstract: false, final false
inline void BuildSceneMeshObject(::ArrayW<::UnityEngine::GameObject*>  gos, bool  createNewChild) ;

/// @brief Method BuildSourceMatsToSubmeshIdxMap, addr 0x9d8a2f8, size 0x234, virtual false, abstract: false, final false
inline ::System::Collections::Specialized::OrderedDictionary* BuildSourceMatsToSubmeshIdxMap(int32_t  numResultMats) ;

/// @brief Method CheckIntegrity, addr 0x9d90470, size 0x214, virtual true, abstract: false, final false
inline void CheckIntegrity() ;

/// @brief Method ClearBuffers, addr 0x9d8ea50, size 0x5c8, virtual true, abstract: false, final false
inline void ClearBuffers() ;

/// @brief Method ClearMesh, addr 0x9d8f018, size 0xa4, virtual true, abstract: false, final false
inline void ClearMesh() ;

/// @brief Method ClearMesh, addr 0x9d8f0bc, size 0x10, virtual true, abstract: false, final false
inline void ClearMesh(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods) ;

/// @brief Method CombinedMeshContains, addr 0x9d8e9f8, size 0x58, virtual true, abstract: false, final false
inline bool CombinedMeshContains(::UnityEngine::GameObject*  go) ;

/// @brief Method Create_BoneProcessor, addr 0x9d8a600, size 0x8c, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor* Create_BoneProcessor(bool  doNativeArrays) ;

/// @brief Method Create_MeshChannelsCache, addr 0x9d8a52c, size 0xa4, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface* Create_MeshChannelsCache(bool  doNativeArrays, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL, ::DigitalOpus::MB::Core::MB2_LightmapOptions  lightmapOption) ;

/// @brief Method Create_VertexAndTriangleProcessor, addr 0x9d88d4c, size 0x98, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor* Create_VertexAndTriangleProcessor(bool  doNativeArrays) ;

/// @brief Method DestroyMesh, addr 0x9d8f1b0, size 0x130, virtual true, abstract: false, final false
inline void DestroyMesh() ;

/// @brief Method DestroyMeshEditor, addr 0x9d8f2e0, size 0x1d8, virtual true, abstract: false, final false
inline void DestroyMeshEditor(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods) ;

/// @brief Method Dispose, addr 0x9d86b88, size 0x25c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetBones, addr 0x9d87818, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> GetBones() ;

/// @brief Method GetLightmapIndex, addr 0x9d87820, size 0x13c, virtual true, abstract: false, final false
inline int32_t GetLightmapIndex() ;

/// @brief Method GetMaterialsOnTargetRenderer, addr 0x9d90684, size 0xec, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* GetMaterialsOnTargetRenderer() ;

/// @brief Method GetMesh, addr 0x9d87670, size 0x84, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> GetMesh() ;

/// @brief Method GetNumObjectsInCombined, addr 0x9d87588, size 0x48, virtual true, abstract: false, final false
inline int32_t GetNumObjectsInCombined() ;

/// @brief Method GetObjectsInCombined, addr 0x9d875d0, size 0xa0, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GetObjectsInCombined() ;

/// @brief Method GetVertexCount, addr 0x9d86f0c, size 0x18, virtual false, abstract: false, final false
inline int32_t GetVertexCount() ;

/// @brief Method InstanceID2DGO, addr 0x9d87398, size 0x1f0, virtual false, abstract: false, final false
inline bool InstanceID2DGO(int32_t  instanceID, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>  dgoGameObject) ;

/// @brief Method IsMirrored, addr 0x9d8c580, size 0x2b4, virtual false, abstract: false, final false
inline bool IsMirrored(::UnityEngine::Matrix4x4  tm) ;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* New_ctor() ;

/// @brief Method PrintProfileInfo, addr 0x9d867a8, size 0x3e0, virtual false, abstract: false, final false
inline void PrintProfileInfo() ;

/// @brief Method SetMesh, addr 0x9d87788, size 0x90, virtual false, abstract: false, final false
inline ::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions SetMesh(::UnityEngine::Mesh*  m) ;

/// @brief Method ShowHideGameObjects, addr 0x9d8df38, size 0x11c, virtual false, abstract: false, final false
inline bool ShowHideGameObjects(::ArrayW<::UnityEngine::GameObject*>  toShow, ::ArrayW<::UnityEngine::GameObject*>  toHide) ;

/// @brief Method StartProfile, addr 0x9d86748, size 0x60, virtual false, abstract: false, final false
inline void StartProfile() ;

/// @brief Method UpdateGameObjects, addr 0x9d8cb00, size 0xf4, virtual true, abstract: false, final false
inline bool UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateColors, bool  updateSkinningInfo) ;

/// @brief Method UpdateGameObjects, addr 0x9d8d668, size 0x118, virtual true, abstract: false, final false
inline bool UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateUV5, bool  updateUV6, bool  updateUV7, bool  updateUV8, bool  updateColors, bool  updateSkinningInfo) ;

/// @brief Method UpdateSkinnedMeshApproximateBounds, addr 0x9d90b3c, size 0x10, virtual true, abstract: false, final false
inline void UpdateSkinnedMeshApproximateBounds() ;

/// @brief Method UpdateSkinnedMeshApproximateBoundsFromBones, addr 0x9d90b4c, size 0x2ec, virtual true, abstract: false, final false
inline void UpdateSkinnedMeshApproximateBoundsFromBones() ;

/// @brief Method UpdateSkinnedMeshApproximateBoundsFromBounds, addr 0x9d90e38, size 0x2fc, virtual true, abstract: false, final false
inline void UpdateSkinnedMeshApproximateBoundsFromBounds() ;

/// @brief Method ValidateTargRendererAndMeshAndResultSceneObj, addr 0x9d89e78, size 0x480, virtual false, abstract: false, final false
inline bool ValidateTargRendererAndMeshAndResultSceneObj() ;

/// @brief Method _AddToCombined, addr 0x9d88de4, size 0x1094, virtual false, abstract: false, final false
inline bool _AddToCombined(::ArrayW<::UnityEngine::GameObject*>  goToAdd, ::ArrayW<int32_t>  goToDelete, bool  disableRendererInSource) ;

/// @brief Method _ConfigureSceneHierarch, addr 0x9d8fe74, size 0x438, virtual false, abstract: false, final false
static inline void _ConfigureSceneHierarch(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  mom, ::UnityEngine::GameObject*  root, ::UnityEngine::MeshRenderer*  mr, ::UnityEngine::MeshFilter*  mf, ::UnityEngine::SkinnedMeshRenderer*  smr, ::UnityEngine::Mesh*  m, ::ArrayW<::UnityEngine::GameObject*>  objsToBeAdded) ;

/// @brief Method _DisposeRuntimeCreated, addr 0x9d8f0cc, size 0xe4, virtual true, abstract: false, final false
inline void _DisposeRuntimeCreated() ;

/// @brief Method _Initialize, addr 0x9d8795c, size 0x338, virtual false, abstract: false, final false
inline bool _Initialize(int32_t  numResultMats) ;

/// @brief Method _NewMesh, addr 0x9d876f4, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> _NewMesh() ;

/// @brief Method _SetLightmapIndexIfPreserveLightmapping, addr 0x9d902ac, size 0x1c4, virtual false, abstract: false, final false
inline void _SetLightmapIndexIfPreserveLightmapping(::UnityEngine::Renderer*  tr) ;

/// @brief Method _ShowHide, addr 0x9d887ac, size 0x4e4, virtual false, abstract: false, final false
inline bool _ShowHide(::ArrayW<::UnityEngine::GameObject*>  goToShow, ::ArrayW<::UnityEngine::GameObject*>  goToHide) ;

/// @brief Method _UpdateGameObjects, addr 0x9d8cbf4, size 0xa74, virtual false, abstract: false, final false
inline bool _UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateUV5, bool  updateUV6, bool  updateUV7, bool  updateUV8, bool  updateColors, bool  updateSkinningInfo) ;

/// @brief Method _UpdateMaterialsOnTargetRenderer, addr 0x9d91134, size 0x214, virtual false, abstract: false, final false
static inline void _UpdateMaterialsOnTargetRenderer(::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Renderer*  targetRenderer, ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  subTris, int32_t  numNonZeroLengthSubmeshTris) ;

/// @brief Method _UseNativeArrayAPIorNot, addr 0x9d88c90, size 0xbc, virtual false, abstract: false, final false
inline bool _UseNativeArrayAPIorNot() ;

/// @brief Method __AddToCombined, addr 0x9d8a68c, size 0x1bec, virtual false, abstract: false, final false
inline bool __AddToCombined(::ArrayW<::UnityEngine::GameObject*>  _goToAdd, ::ArrayW<int32_t>  _goToDelete, bool  disableRendererInSource, int32_t  numResultMats, ::System::Collections::Specialized::OrderedDictionary*  sourceMats2submeshIdx_map, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>  oldMeshData, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, ::System::Diagnostics::Stopwatch*  sw) ;

/// @brief Method __UpdateGameObjects, addr 0x9d8d780, size 0x7b8, virtual false, abstract: false, final false
inline bool __UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateUV5, bool  updateUV6, bool  updateUV7, bool  updateUV8, bool  updateColors, bool  updateSkinningInfo, ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*  meshAnalysisResultsCache, ::System::Collections::Specialized::OrderedDictionary*  sourceMats2submeshIdx_map, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*  uVAdjuster) ;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor* const& __cordl_internal_get__blendShapeProcessor() const;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*& __cordl_internal_get__blendShapeProcessor() ;

constexpr ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor* const& __cordl_internal_get__boneProcessor() const;

constexpr ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*& __cordl_internal_get__boneProcessor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>* const& __cordl_internal_get__instance2combined_map() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*& __cordl_internal_get__instance2combined_map() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh() ;

constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions const& __cordl_internal_get__meshBirth() const;

constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions& __cordl_internal_get__meshBirth() ;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface* const& __cordl_internal_get__meshChannelsCache() const;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*& __cordl_internal_get__meshChannelsCache() ;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor* const& __cordl_internal_get__vertexAndTriProcessor() const;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*& __cordl_internal_get__vertexAndTriProcessor() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get_bindPoses() const;

constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get_bindPoses() ;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> const& __cordl_internal_get_blendShapes() const;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>& __cordl_internal_get_blendShapes() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_bones() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_bones() ;

constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake const& __cordl_internal_get_bufferDataFromPrevious() const;

constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake& __cordl_internal_get_bufferDataFromPrevious() ;

constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags const& __cordl_internal_get_channelsLastBake() const;

constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags& __cordl_internal_get_channelsLastBake() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_colors() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_colors() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_db_addDeleteGameObjects() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_db_addDeleteGameObjects() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_db_addDeleteGameObjects_CollectMeshData() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_db_addDeleteGameObjects_CollectMeshData() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_db_addDeleteGameObjects_CollectMeshData_a() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_db_addDeleteGameObjects_CollectMeshData_a() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_db_addDeleteGameObjects_CollectMeshData_b() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_db_addDeleteGameObjects_CollectMeshData_b() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_db_addDeleteGameObjects_CollectMeshData_c() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_db_addDeleteGameObjects_CollectMeshData_c() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_db_addDeleteGameObjects_CopyArraysFromPreviousBakeBuffersToNewBuffers() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_db_addDeleteGameObjects_CopyArraysFromPreviousBakeBuffersToNewBuffers() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_db_addDeleteGameObjects_CopyFromDGOMeshToBuffers() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_db_addDeleteGameObjects_CopyFromDGOMeshToBuffers() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_db_addDeleteGameObjects_Init() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_db_addDeleteGameObjects_Init() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_db_addDeleteGameObjects_InitFromMeshCombiner() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_db_addDeleteGameObjects_InitFromMeshCombiner() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_db_apply() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_db_apply() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_db_applyShowHide() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_db_applyShowHide() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_db_showHideGameObjects() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_db_showHideGameObjects() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_db_updateGameObjects() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_db_updateGameObjects() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_empty() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_empty() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_emptyIDs() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_emptyIDs() ;

constexpr int32_t const& __cordl_internal_get_lightmapIndex() const;

constexpr int32_t& __cordl_internal_get_lightmapIndex() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>* const& __cordl_internal_get_mbDynamicObjectsInCombinedMesh() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*& __cordl_internal_get_mbDynamicObjectsInCombinedMesh() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_normals() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_normals() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_objectsInCombinedMesh() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_objectsInCombinedMesh() ;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*> const& __cordl_internal_get_submeshTris() const;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>& __cordl_internal_get_submeshTris() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_tangents() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_tangents() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv2s() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv2s() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv3s() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv3s() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv4s() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv4s() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv5s() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv5s() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv6s() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv6s() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv7s() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv7s() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv8s() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv8s() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uvs() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uvs() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_uvsSliceIdx() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_uvsSliceIdx() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_verts() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_verts() ;

constexpr void __cordl_internal_set__blendShapeProcessor(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*  value) ;

constexpr void __cordl_internal_set__boneProcessor(::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*  value) ;

constexpr void __cordl_internal_set__instance2combined_map(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  value) ;

constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__meshBirth(::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions  value) ;

constexpr void __cordl_internal_set__meshChannelsCache(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  value) ;

constexpr void __cordl_internal_set__vertexAndTriProcessor(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*  value) ;

constexpr void __cordl_internal_set_bindPoses(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set_blendShapes(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>  value) ;

constexpr void __cordl_internal_set_bones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_bufferDataFromPrevious(::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake  value) ;

constexpr void __cordl_internal_set_channelsLastBake(::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  value) ;

constexpr void __cordl_internal_set_colors(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set_db_addDeleteGameObjects(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_db_addDeleteGameObjects_CollectMeshData(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_db_addDeleteGameObjects_CollectMeshData_a(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_db_addDeleteGameObjects_CollectMeshData_b(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_db_addDeleteGameObjects_CollectMeshData_c(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_db_addDeleteGameObjects_CopyArraysFromPreviousBakeBuffersToNewBuffers(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_db_addDeleteGameObjects_CopyFromDGOMeshToBuffers(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_db_addDeleteGameObjects_Init(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_db_addDeleteGameObjects_InitFromMeshCombiner(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_db_apply(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_db_applyShowHide(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_db_showHideGameObjects(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_db_updateGameObjects(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_empty(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_emptyIDs(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_lightmapIndex(int32_t  value) ;

constexpr void __cordl_internal_set_mbDynamicObjectsInCombinedMesh(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  value) ;

constexpr void __cordl_internal_set_normals(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_objectsInCombinedMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_submeshTris(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  value) ;

constexpr void __cordl_internal_set_tangents(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set_uv2s(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv3s(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv4s(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv5s(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv6s(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv7s(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv8s(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uvs(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uvsSliceIdx(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_verts(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method _collectMaterialTriangles, addr 0x9d87c94, size 0x61c, virtual false, abstract: false, final false
inline bool _collectMaterialTriangles(::UnityEngine::Mesh*  m, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::ArrayW<::UnityEngine::Material*>  sharedMaterials, ::System::Collections::Specialized::OrderedDictionary*  sourceMats2submeshIdx_map) ;

/// @brief Method _collectOutOfBoundsUVRects2, addr 0x9d88314, size 0x370, virtual false, abstract: false, final false
inline bool _collectOutOfBoundsUVRects2(::UnityEngine::Mesh*  m, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::ArrayW<::UnityEngine::Material*>  sharedMaterials, ::System::Collections::Specialized::OrderedDictionary*  sourceMats2submeshIdx_map, ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*  meshAnalysisResults) ;

/// @brief Method .ctor, addr 0x9d91348, size 0x618, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _getBones, addr 0x9d8c834, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> _getBones(::UnityEngine::Renderer*  r, bool  isSkinnedMeshWithBones) ;

/// @brief Method _validateTextureBakeResults, addr 0x9d88684, size 0x128, virtual false, abstract: false, final false
inline bool _validateTextureBakeResults() ;

/// @brief Method instance2Combined_MapAdd, addr 0x9d87178, size 0x68, virtual false, abstract: false, final false
inline void instance2Combined_MapAdd(::UnityEngine::GameObject*  gameObjectID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo) ;

/// @brief Method instance2Combined_MapClear, addr 0x9d872f0, size 0x50, virtual false, abstract: false, final false
inline void instance2Combined_MapClear() ;

/// @brief Method instance2Combined_MapContainsKey, addr 0x9d87340, size 0x58, virtual false, abstract: false, final false
inline bool instance2Combined_MapContainsKey(::UnityEngine::GameObject*  gameObjectID) ;

/// @brief Method instance2Combined_MapCount, addr 0x9d872a0, size 0x50, virtual false, abstract: false, final false
inline int32_t instance2Combined_MapCount() ;

/// @brief Method instance2Combined_MapGet, addr 0x9d87120, size 0x58, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* instance2Combined_MapGet(::UnityEngine::GameObject*  gameObjectID) ;

/// @brief Method instance2Combined_MapRemove, addr 0x9d871e0, size 0x58, virtual false, abstract: false, final false
inline void instance2Combined_MapRemove(::UnityEngine::GameObject*  gameObjectID) ;

/// @brief Method instance2Combined_MapTryGetValue, addr 0x9d87238, size 0x68, virtual false, abstract: false, final false
inline bool instance2Combined_MapTryGetValue(::UnityEngine::GameObject*  gameObjectID, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>  dgo) ;

/// @brief Method set_renderType, addr 0x9d86f24, size 0xb4, virtual true, abstract: false, final false
inline void set_renderType(::DigitalOpus::MB::Core::MB_RenderType  value) ;

/// @brief Method set_resultSceneObject, addr 0x9d86fd8, size 0x148, virtual true, abstract: false, final false
inline void set_resultSceneObject(::UnityEngine::GameObject*  value) ;

/// @brief Method set_textureBakeResults, addr 0x9d86dec, size 0x120, virtual true, abstract: false, final false
inline void set_textureBakeResults(::GlobalNamespace::MB2_TextureBakeResults*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombinerSingle(MB3_MeshCombinerSingle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSingle(MB3_MeshCombinerSingle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22726};

/// @brief Field db_showHideGameObjects, offset: 0x90, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___db_showHideGameObjects;

/// @brief Field db_addDeleteGameObjects, offset: 0x98, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___db_addDeleteGameObjects;

/// @brief Field db_addDeleteGameObjects_CollectMeshData, offset: 0xa0, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___db_addDeleteGameObjects_CollectMeshData;

/// @brief Field db_addDeleteGameObjects_CollectMeshData_a, offset: 0xa8, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___db_addDeleteGameObjects_CollectMeshData_a;

/// @brief Field db_addDeleteGameObjects_CollectMeshData_b, offset: 0xb0, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___db_addDeleteGameObjects_CollectMeshData_b;

/// @brief Field db_addDeleteGameObjects_CollectMeshData_c, offset: 0xb8, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___db_addDeleteGameObjects_CollectMeshData_c;

/// @brief Field db_addDeleteGameObjects_InitFromMeshCombiner, offset: 0xc0, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___db_addDeleteGameObjects_InitFromMeshCombiner;

/// @brief Field db_addDeleteGameObjects_Init, offset: 0xc8, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___db_addDeleteGameObjects_Init;

/// @brief Field db_addDeleteGameObjects_CopyArraysFromPreviousBakeBuffersToNewBuffers, offset: 0xd0, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___db_addDeleteGameObjects_CopyArraysFromPreviousBakeBuffersToNewBuffers;

/// @brief Field db_addDeleteGameObjects_CopyFromDGOMeshToBuffers, offset: 0xd8, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___db_addDeleteGameObjects_CopyFromDGOMeshToBuffers;

/// @brief Field db_apply, offset: 0xe0, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___db_apply;

/// @brief Field db_applyShowHide, offset: 0xe8, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___db_applyShowHide;

/// @brief Field db_updateGameObjects, offset: 0xf0, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___db_updateGameObjects;

/// [SerializeField]
/// @brief Field objectsInCombinedMesh, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___objectsInCombinedMesh;

/// [SerializeField]
/// @brief Field lightmapIndex, offset: 0x100, size: 0x4, def value: None
 int32_t  ___lightmapIndex;

/// [SerializeField]
/// @brief Field mbDynamicObjectsInCombinedMesh, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  ___mbDynamicObjectsInCombinedMesh;

/// @brief Field _instance2combined_map, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  ____instance2combined_map;

/// [SerializeField]
/// @brief Field channelsLastBake, offset: 0x118, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  ___channelsLastBake;

/// [SerializeField]
/// @brief Field verts, offset: 0x120, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___verts;

/// [SerializeField]
/// @brief Field normals, offset: 0x128, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___normals;

/// [SerializeField]
/// @brief Field tangents, offset: 0x130, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ___tangents;

/// [SerializeField]
/// @brief Field uvs, offset: 0x138, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uvs;

/// [SerializeField]
/// @brief Field uvsSliceIdx, offset: 0x140, size: 0x8, def value: None
 ::ArrayW<float_t>  ___uvsSliceIdx;

/// [SerializeField]
/// @brief Field uv2s, offset: 0x148, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv2s;

/// [SerializeField]
/// @brief Field uv3s, offset: 0x150, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv3s;

/// [SerializeField]
/// @brief Field uv4s, offset: 0x158, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv4s;

/// [SerializeField]
/// @brief Field uv5s, offset: 0x160, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv5s;

/// [SerializeField]
/// @brief Field uv6s, offset: 0x168, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv6s;

/// [SerializeField]
/// @brief Field uv7s, offset: 0x170, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv7s;

/// [SerializeField]
/// @brief Field uv8s, offset: 0x178, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv8s;

/// [SerializeField]
/// @brief Field colors, offset: 0x180, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ___colors;

/// [SerializeField]
/// @brief Field submeshTris, offset: 0x188, size: 0x8, def value: None
 ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  ___submeshTris;

/// [SerializeField]
/// @brief Field bindPoses, offset: 0x190, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Matrix4x4>  ___bindPoses;

/// [SerializeField]
/// @brief Field bones, offset: 0x198, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___bones;

/// [SerializeField]
/// @brief Field blendShapes, offset: 0x1a0, size: 0x8, def value: None
 ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>  ___blendShapes;

/// [SerializeField]
/// @brief Field bufferDataFromPrevious, offset: 0x1a8, size: 0x14, def value: None
 ::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake  ___bufferDataFromPrevious;

/// [SerializeField]
/// @brief Field _meshBirth, offset: 0x1bc, size: 0x4, def value: None
 ::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions  ____meshBirth;

/// [SerializeField]
/// @brief Field _mesh, offset: 0x1c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____mesh;

/// @brief Field _vertexAndTriProcessor, offset: 0x1c8, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*  ____vertexAndTriProcessor;

/// @brief Field _boneProcessor, offset: 0x1d0, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*  ____boneProcessor;

/// @brief Field _blendShapeProcessor, offset: 0x1d8, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*  ____blendShapeProcessor;

/// @brief Field _meshChannelsCache, offset: 0x1e0, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  ____meshChannelsCache;

/// @brief Field empty, offset: 0x1e8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___empty;

/// @brief Field emptyIDs, offset: 0x1f0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___emptyIDs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___db_showHideGameObjects) == 0x90, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___db_addDeleteGameObjects) == 0x98, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___db_addDeleteGameObjects_CollectMeshData) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___db_addDeleteGameObjects_CollectMeshData_a) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___db_addDeleteGameObjects_CollectMeshData_b) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___db_addDeleteGameObjects_CollectMeshData_c) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___db_addDeleteGameObjects_InitFromMeshCombiner) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___db_addDeleteGameObjects_Init) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___db_addDeleteGameObjects_CopyArraysFromPreviousBakeBuffersToNewBuffers) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___db_addDeleteGameObjects_CopyFromDGOMeshToBuffers) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___db_apply) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___db_applyShowHide) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___db_updateGameObjects) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___objectsInCombinedMesh) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___lightmapIndex) == 0x100, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___mbDynamicObjectsInCombinedMesh) == 0x108, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ____instance2combined_map) == 0x110, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___channelsLastBake) == 0x118, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___verts) == 0x120, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___normals) == 0x128, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___tangents) == 0x130, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___uvs) == 0x138, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___uvsSliceIdx) == 0x140, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___uv2s) == 0x148, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___uv3s) == 0x150, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___uv4s) == 0x158, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___uv5s) == 0x160, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___uv6s) == 0x168, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___uv7s) == 0x170, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___uv8s) == 0x178, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___colors) == 0x180, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___submeshTris) == 0x188, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___bindPoses) == 0x190, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___bones) == 0x198, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___blendShapes) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___bufferDataFromPrevious) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ____meshBirth) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ____mesh) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ____vertexAndTriProcessor) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ____boneProcessor) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ____blendShapeProcessor) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ____meshChannelsCache) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___empty) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle, ___emptyIDs) == 0x1f0, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle) == 0x1f8, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.GameObject
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/<>c__DisplayClass74_0
class CORDL_TYPE MB3_MeshCombinerSingle___c__DisplayClass74_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Predicate_1<int32_t>*  __9__0;

/// @brief Field _goToAdd, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__goToAdd, put=__cordl_internal_set__goToAdd)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _goToAdd;

/// @brief Field i, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_i, put=__cordl_internal_set_i)) int32_t  i;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0* New_ctor() ;

/// @brief Method <__AddToCombined>b__0, addr 0x9db7694, size 0x4c, virtual false, abstract: false, final false
inline bool ___AddToCombined_b__0(int32_t  o) ;

constexpr ::System::Predicate_1<int32_t>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Predicate_1<int32_t>*& __cordl_internal_get___9__0() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__goToAdd() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__goToAdd() ;

constexpr int32_t const& __cordl_internal_get_i() const;

constexpr int32_t& __cordl_internal_get_i() ;

constexpr void __cordl_internal_set___9__0(::System::Predicate_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__goToAdd(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_i(int32_t  value) ;

/// @brief Method .ctor, addr 0x9db768c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle___c__DisplayClass74_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle___c__DisplayClass74_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombinerSingle___c__DisplayClass74_0(MB3_MeshCombinerSingle___c__DisplayClass74_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle___c__DisplayClass74_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSingle___c__DisplayClass74_0(MB3_MeshCombinerSingle___c__DisplayClass74_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22725};

/// @brief Field _goToAdd, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____goToAdd;

/// @brief Field i, offset: 0x18, size: 0x4, def value: None
 int32_t  ___i;

/// @brief Field <>9__0, offset: 0x20, size: 0x8, def value: None
 ::System::Predicate_1<int32_t>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0, ____goToAdd) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0, ___i) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0, _____9__0) == 0x20, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0) == 0x28, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies DigitalOpus.MB.Core.MB3_MeshCombinerSingle::BoneWeightDataForMesh, DigitalOpus.MB.Core.MB3_MeshCombinerSingle::MBBlendShape, System.Object, Unity.Collections.NativeArray`1<T>, UnityEngine.Color, UnityEngine.Vector2, UnityEngine.Vector3, UnityEngine.Vector4
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MeshChannelsNativeArray
class CORDL_TYPE MB3_MeshCombinerSingle_MeshChannelsNativeArray : public ::System::Object {
public:
// Declarations
/// @brief Field _disposed, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field bindPoses, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_bindPoses, put=__cordl_internal_set_bindPoses)) ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  bindPoses;

/// @brief Field blendShapes, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_blendShapes, put=__cordl_internal_set_blendShapes)) ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>  blendShapes;

/// @brief Field boneWeightData, offset 0x100, size 0x38 
 __declspec(property(get=__cordl_internal_get_boneWeightData, put=__cordl_internal_set_boneWeightData)) ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh  boneWeightData;

/// @brief Field colors_NativeArray, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_colors_NativeArray, put=__cordl_internal_set_colors_NativeArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  colors_NativeArray;

/// @brief Field normals_NativeArray, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_normals_NativeArray, put=__cordl_internal_set_normals_NativeArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  normals_NativeArray;

/// @brief Field tangents_NativeArray, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_tangents_NativeArray, put=__cordl_internal_set_tangents_NativeArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  tangents_NativeArray;

/// @brief Field uv0modified_NativeArray, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_uv0modified_NativeArray, put=__cordl_internal_set_uv0modified_NativeArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  uv0modified_NativeArray;

/// @brief Field uv0raw_NativeArray, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_uv0raw_NativeArray, put=__cordl_internal_set_uv0raw_NativeArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  uv0raw_NativeArray;

/// @brief Field uv2modified_NativeArray, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_uv2modified_NativeArray, put=__cordl_internal_set_uv2modified_NativeArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  uv2modified_NativeArray;

/// @brief Field uv2raw_NativeArray, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_uv2raw_NativeArray, put=__cordl_internal_set_uv2raw_NativeArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  uv2raw_NativeArray;

/// @brief Field uv3_NativeArray, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get_uv3_NativeArray, put=__cordl_internal_set_uv3_NativeArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  uv3_NativeArray;

/// @brief Field uv4_NativeArray, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get_uv4_NativeArray, put=__cordl_internal_set_uv4_NativeArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  uv4_NativeArray;

/// @brief Field uv5_NativeArray, offset 0xb8, size 0x10 
 __declspec(property(get=__cordl_internal_get_uv5_NativeArray, put=__cordl_internal_set_uv5_NativeArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  uv5_NativeArray;

/// @brief Field uv6_NativeArray, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get_uv6_NativeArray, put=__cordl_internal_set_uv6_NativeArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  uv6_NativeArray;

/// @brief Field uv7_NativeArray, offset 0xd8, size 0x10 
 __declspec(property(get=__cordl_internal_get_uv7_NativeArray, put=__cordl_internal_set_uv7_NativeArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  uv7_NativeArray;

/// @brief Field uv8_NativeArray, offset 0xe8, size 0x10 
 __declspec(property(get=__cordl_internal_get_uv8_NativeArray, put=__cordl_internal_set_uv8_NativeArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  uv8_NativeArray;

/// @brief Field vertcies_NativeArray, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_vertcies_NativeArray, put=__cordl_internal_set_vertcies_NativeArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  vertcies_NativeArray;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x9da8a48, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x9dab6bc, size 0x238, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method IsDisposed, addr 0x9dab6b4, size 0x8, virtual false, abstract: false, final false
inline bool IsDisposed() ;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray* New_ctor() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* const& __cordl_internal_get_bindPoses() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*& __cordl_internal_get_bindPoses() ;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> const& __cordl_internal_get_blendShapes() const;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>& __cordl_internal_get_blendShapes() ;

constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh const& __cordl_internal_get_boneWeightData() const;

constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh& __cordl_internal_get_boneWeightData() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Color> const& __cordl_internal_get_colors_NativeArray() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Color>& __cordl_internal_get_colors_NativeArray() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __cordl_internal_get_normals_NativeArray() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __cordl_internal_get_normals_NativeArray() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> const& __cordl_internal_get_tangents_NativeArray() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>& __cordl_internal_get_tangents_NativeArray() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __cordl_internal_get_uv0modified_NativeArray() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __cordl_internal_get_uv0modified_NativeArray() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __cordl_internal_get_uv0raw_NativeArray() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __cordl_internal_get_uv0raw_NativeArray() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __cordl_internal_get_uv2modified_NativeArray() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __cordl_internal_get_uv2modified_NativeArray() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __cordl_internal_get_uv2raw_NativeArray() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __cordl_internal_get_uv2raw_NativeArray() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __cordl_internal_get_uv3_NativeArray() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __cordl_internal_get_uv3_NativeArray() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __cordl_internal_get_uv4_NativeArray() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __cordl_internal_get_uv4_NativeArray() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __cordl_internal_get_uv5_NativeArray() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __cordl_internal_get_uv5_NativeArray() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __cordl_internal_get_uv6_NativeArray() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __cordl_internal_get_uv6_NativeArray() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __cordl_internal_get_uv7_NativeArray() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __cordl_internal_get_uv7_NativeArray() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __cordl_internal_get_uv8_NativeArray() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __cordl_internal_get_uv8_NativeArray() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __cordl_internal_get_vertcies_NativeArray() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __cordl_internal_get_vertcies_NativeArray() ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set_bindPoses(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  value) ;

constexpr void __cordl_internal_set_blendShapes(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>  value) ;

constexpr void __cordl_internal_set_boneWeightData(::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh  value) ;

constexpr void __cordl_internal_set_colors_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set_normals_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_tangents_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set_uv0modified_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv0raw_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv2modified_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv2raw_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv3_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv4_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv5_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv6_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv7_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv8_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_vertcies_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0x9da9ad4, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_MeshChannelsNativeArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MeshChannelsNativeArray", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombinerSingle_MeshChannelsNativeArray(MB3_MeshCombinerSingle_MeshChannelsNativeArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MeshChannelsNativeArray", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSingle_MeshChannelsNativeArray(MB3_MeshCombinerSingle_MeshChannelsNativeArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22646};

/// @brief Field _disposed, offset: 0x10, size: 0x1, def value: None
 bool  ____disposed;

/// @brief Field vertcies_NativeArray, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  ___vertcies_NativeArray;

/// @brief Field normals_NativeArray, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  ___normals_NativeArray;

/// @brief Field tangents_NativeArray, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  ___tangents_NativeArray;

/// @brief Field colors_NativeArray, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  ___colors_NativeArray;

/// @brief Field uv0raw_NativeArray, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  ___uv0raw_NativeArray;

/// @brief Field uv0modified_NativeArray, offset: 0x68, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  ___uv0modified_NativeArray;

/// @brief Field uv2raw_NativeArray, offset: 0x78, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  ___uv2raw_NativeArray;

/// @brief Field uv2modified_NativeArray, offset: 0x88, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  ___uv2modified_NativeArray;

/// @brief Field uv3_NativeArray, offset: 0x98, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  ___uv3_NativeArray;

/// @brief Field uv4_NativeArray, offset: 0xa8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  ___uv4_NativeArray;

/// @brief Field uv5_NativeArray, offset: 0xb8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  ___uv5_NativeArray;

/// @brief Field uv6_NativeArray, offset: 0xc8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  ___uv6_NativeArray;

/// @brief Field uv7_NativeArray, offset: 0xd8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  ___uv7_NativeArray;

/// @brief Field uv8_NativeArray, offset: 0xe8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  ___uv8_NativeArray;

/// @brief Field bindPoses, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  ___bindPoses;

/// @brief Field boneWeightData, offset: 0x100, size: 0x38, def value: None
 ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh  ___boneWeightData;

/// @brief Field blendShapes, offset: 0x138, size: 0x8, def value: None
 ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>  ___blendShapes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray, ____disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray, ___vertcies_NativeArray) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray, ___normals_NativeArray) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray, ___tangents_NativeArray) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray, ___colors_NativeArray) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray, ___uv0raw_NativeArray) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray, ___uv0modified_NativeArray) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray, ___uv2raw_NativeArray) == 0x78, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray, ___uv2modified_NativeArray) == 0x88, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray, ___uv3_NativeArray) == 0x98, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray, ___uv4_NativeArray) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray, ___uv5_NativeArray) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray, ___uv6_NativeArray) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray, ___uv7_NativeArray) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray, ___uv8_NativeArray) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray, ___bindPoses) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray, ___boneWeightData) == 0x100, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray, ___blendShapes) == 0x138, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray) == 0x140, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies DigitalOpus.MB.Core.MB2_LightmapOptions, DigitalOpus.MB.Core.MB2_LogLevel, System.Object, UnityEngine.Vector2
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MeshChannelsCache_NativeArray
class CORDL_TYPE MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray : public ::System::Object {
public:
// Declarations
/// @brief Field LOG_LEVEL, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

/// @brief Field _HALF_UV, offset 0x24, size 0x8 
 __declspec(property(get=__cordl_internal_get__HALF_UV, put=__cordl_internal_set__HALF_UV)) ::UnityEngine::Vector2  _HALF_UV;

/// @brief Field _collectedMeshData, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__collectedMeshData, put=__cordl_internal_set__collectedMeshData)) bool  _collectedMeshData;

/// @brief Field _disposed, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field lightmapOption, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightmapOption, put=__cordl_internal_set_lightmapOption)) ::DigitalOpus::MB::Core::MB2_LightmapOptions  lightmapOption;

/// @brief Field meshID2MeshChannels, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshID2MeshChannels, put=__cordl_internal_set_meshID2MeshChannels)) ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*>*  meshID2MeshChannels;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface"
constexpr operator  ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CollectChannelDataForAllMeshesInList, addr 0x9da9268, size 0x86c, virtual true, abstract: false, final true
inline void CollectChannelDataForAllMeshesInList(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  toUpdateDGOs, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  toAddDGOs, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, ::DigitalOpus::MB::Core::MB_RenderType  renderType, bool  doBlendShapes) ;

/// @brief Method Dispose, addr 0x9da88c8, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x9da88d8, size 0x170, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetBindposes, addr 0x9daaaa4, size 0x11c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* GetBindposes(::UnityEngine::Renderer*  r, ::by_ref<bool>  isSkinnedMeshWithBones) ;

/// @brief Method GetBlendShapes, addr 0x9daac78, size 0x220, virtual true, abstract: false, final true
inline ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> GetBlendShapes(::UnityEngine::Mesh*  m, int32_t  gameObjectID, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetBoneWeightData, addr 0x9daabc0, size 0xb8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh GetBoneWeightData(::UnityEngine::Renderer*  r, int32_t  numbones, bool  isSkinnedMeshWithBones) ;

/// @brief Method GetColorsAsNativeArray, addr 0x9da91dc, size 0x8c, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Color> GetColorsAsNativeArray(::UnityEngine::Mesh*  m) ;

/// @brief Method GetNormalsAsNativeArray, addr 0x9da8c20, size 0x100, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> GetNormalsAsNativeArray(::UnityEngine::Mesh*  m) ;

/// @brief Method GetTangentsAsNativeArray, addr 0x9da8d20, size 0x100, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> GetTangentsAsNativeArray(::UnityEngine::Mesh*  m) ;

/// @brief Method GetUVChannelAsNativeArray, addr 0x9da8fe8, size 0x1f4, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> GetUVChannelAsNativeArray(int32_t  channel, ::UnityEngine::Mesh*  m) ;

/// @brief Method GetUv0ModifiedAsNativeArray, addr 0x9da8e20, size 0xe4, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> GetUv0ModifiedAsNativeArray(::UnityEngine::Mesh*  m) ;

/// @brief Method GetUv0Raw, addr 0x9daae98, size 0x8c, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> GetUv0Raw(::UnityEngine::Mesh*  m) ;

/// @brief Method GetUv0RawAsNativeArray, addr 0x9da8a94, size 0x8c, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> GetUv0RawAsNativeArray(::UnityEngine::Mesh*  m) ;

/// @brief Method GetUv2ModifiedAsNativeArray, addr 0x9da8f04, size 0xe4, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> GetUv2ModifiedAsNativeArray(::UnityEngine::Mesh*  m) ;

/// @brief Method GetVerticiesAsNativeArray, addr 0x9da8b20, size 0x100, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> GetVerticiesAsNativeArray(::UnityEngine::Mesh*  m) ;

/// @brief Method HasCollectedMeshData, addr 0x9da8a58, size 0x8, virtual true, abstract: false, final true
inline bool HasCollectedMeshData() ;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray* New_ctor(::DigitalOpus::MB::Core::MB2_LogLevel  ll, ::DigitalOpus::MB::Core::MB2_LightmapOptions  lo) ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__HALF_UV() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__HALF_UV() ;

constexpr bool const& __cordl_internal_get__collectedMeshData() const;

constexpr bool& __cordl_internal_get__collectedMeshData() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions const& __cordl_internal_get_lightmapOption() const;

constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions& __cordl_internal_get_lightmapOption() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*>* const& __cordl_internal_get_meshID2MeshChannels() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*>*& __cordl_internal_get_meshID2MeshChannels() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set__HALF_UV(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__collectedMeshData(bool  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set_lightmapOption(::DigitalOpus::MB::Core::MB2_LightmapOptions  value) ;

constexpr void __cordl_internal_set_meshID2MeshChannels(::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*>*  value) ;

/// @brief Method .ctor, addr 0x9da8820, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(::DigitalOpus::MB::Core::MB2_LogLevel  ll, ::DigitalOpus::MB::Core::MB2_LightmapOptions  lo) ;

/// @brief Method _generateTangents, addr 0x9daaf24, size 0x528, virtual false, abstract: false, final false
inline void _generateTangents(::ArrayW<int32_t>  triangles, ::ArrayW<::UnityEngine::Vector3>  verts, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  uvs, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  outTangents) ;

/// @brief Method _getBindPoses, addr 0x9daa3dc, size 0x34c, virtual false, abstract: false, final false
static inline void _getBindPoses(::UnityEngine::Renderer*  r, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  poses, ::by_ref<bool>  isSkinnedMeshWithBones) ;

/// @brief Method _getBoneWeightData, addr 0x9daa728, size 0x37c, virtual false, abstract: false, final false
static inline void _getBoneWeightData(::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh>  bwd, ::UnityEngine::Renderer*  r, int32_t  numBones, bool  isSkinnedMeshWithBones) ;

/// @brief Method _getBoneWeights, addr 0x9dab44c, size 0x268, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::BoneWeight> _getBoneWeights(::UnityEngine::Renderer*  r, int32_t  numVertsInMeshBeingAdded, bool  isSkinnedMeshWithBones) ;

/// @brief Method _getMeshColors, addr 0x9daa1b4, size 0x228, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> _getMeshColors(::UnityEngine::Mesh*  m) ;

/// @brief Method _getMeshNormals, addr 0x9da9cfc, size 0x22c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> _getMeshNormals(::UnityEngine::Mesh*  m) ;

/// @brief Method _getMeshTangents, addr 0x9da9f28, size 0x28c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector4> _getMeshTangents(::UnityEngine::Mesh*  m) ;

/// @brief Method _getMeshUV2s, addr 0x9da9c20, size 0xdc, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> _getMeshUV2s(::UnityEngine::Mesh*  m, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>  uv2modified) ;

/// @brief Method _getMeshUVs, addr 0x9da9b60, size 0xc0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> _getMeshUVs(::UnityEngine::Mesh*  m) ;

/// @brief Method hasOutOfBoundsUVs, addr 0x9da8a60, size 0x34, virtual true, abstract: false, final true
inline bool hasOutOfBoundsUVs(::UnityEngine::Mesh*  m, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>  mar, int32_t  submeshIdx) ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface"
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface* i___DigitalOpus__MB__Core__MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray(MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray(MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22645};

/// @brief Field LOG_LEVEL, offset: 0x10, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

/// @brief Field lightmapOption, offset: 0x14, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LightmapOptions  ___lightmapOption;

/// @brief Field meshID2MeshChannels, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*>*  ___meshID2MeshChannels;

/// @brief Field _collectedMeshData, offset: 0x20, size: 0x1, def value: None
 bool  ____collectedMeshData;

/// @brief Field _disposed, offset: 0x21, size: 0x1, def value: None
 bool  ____disposed;

/// @brief Field _HALF_UV, offset: 0x24, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____HALF_UV;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray, ___LOG_LEVEL) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray, ___lightmapOption) == 0x14, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray, ___meshID2MeshChannels) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray, ____collectedMeshData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray, ____disposed) == 0x21, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray, ____HALF_UV) == 0x24, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray) == 0x30, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, MB_MaterialAndUVRect, System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/UVAdjuster_Atlas
class CORDL_TYPE MB3_MeshCombinerSingle_UVAdjuster_Atlas : public ::System::Object {
public:
// Declarations
/// @brief Field LOG_LEVEL, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

/// @brief Field compareNamesWhenComparingMaterials, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_compareNamesWhenComparingMaterials, put=__cordl_internal_set_compareNamesWhenComparingMaterials)) bool  compareNamesWhenComparingMaterials;

/// @brief Field matsAndSrcUVRect, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_matsAndSrcUVRect, put=__cordl_internal_set_matsAndSrcUVRect)) ::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*>  matsAndSrcUVRect;

/// @brief Field numTimesMatAppearsInAtlas, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_numTimesMatAppearsInAtlas, put=__cordl_internal_set_numTimesMatAppearsInAtlas)) ::ArrayW<int32_t>  numTimesMatAppearsInAtlas;

/// @brief Field textureBakeResults, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureBakeResults, put=__cordl_internal_set_textureBakeResults)) ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  textureBakeResults;

/// @brief Method IsSameMaterialInTextureBakeResult, addr 0x9da33d0, size 0x110, virtual false, abstract: false, final false
inline bool IsSameMaterialInTextureBakeResult(::UnityEngine::Material*  a, ::UnityEngine::Material*  b) ;

/// @brief Method MapSharedMaterialsToAtlasRects, addr 0x9da2ac8, size 0x908, virtual false, abstract: false, final false
inline bool MapSharedMaterialsToAtlasRects(::ArrayW<::UnityEngine::Material*>  sharedMaterials, bool  checkTargetSubmeshIdxsFromPreviousBake, ::UnityEngine::Mesh*  m, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  meshChannelsCache, ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*  meshAnalysisResultsCache, ::System::Collections::Specialized::OrderedDictionary*  sourceMats2submeshIdx_map, ::UnityEngine::GameObject*  go, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgoOut) ;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas* New_ctor(::GlobalNamespace::MB2_TextureBakeResults*  tbr, ::DigitalOpus::MB::Core::MB2_LogLevel  ll) ;

/// @brief Method TryMapMaterialToUVRect, addr 0x9da34e0, size 0xa14, virtual false, abstract: false, final false
inline bool TryMapMaterialToUVRect(::UnityEngine::Material*  mat, ::UnityEngine::Mesh*  m, int32_t  submeshIdx, int32_t  idxInResultMats, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  meshChannelCache, ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*  meshAnalysisCache, ::by_ref<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>  tilingTreatment, ::by_ref<::UnityEngine::Rect>  rectInAtlas, ::by_ref<::UnityEngine::Rect>  encapsulatingRectOut, ::by_ref<::UnityEngine::Rect>  sourceMaterialTilingOut, ::by_ref<int32_t>  sliceIdx, ::by_ref<::StringW>  errorMsg, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel) ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr bool const& __cordl_internal_get_compareNamesWhenComparingMaterials() const;

constexpr bool& __cordl_internal_get_compareNamesWhenComparingMaterials() ;

constexpr ::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*> const& __cordl_internal_get_matsAndSrcUVRect() const;

constexpr ::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*>& __cordl_internal_get_matsAndSrcUVRect() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_numTimesMatAppearsInAtlas() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_numTimesMatAppearsInAtlas() ;

constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> const& __cordl_internal_get_textureBakeResults() const;

constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>& __cordl_internal_get_textureBakeResults() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set_compareNamesWhenComparingMaterials(bool  value) ;

constexpr void __cordl_internal_set_matsAndSrcUVRect(::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*>  value) ;

constexpr void __cordl_internal_set_numTimesMatAppearsInAtlas(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_textureBakeResults(::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  value) ;

/// @brief Method .ctor, addr 0x9da2810, size 0x2b8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::MB2_TextureBakeResults*  tbr, ::DigitalOpus::MB::Core::MB2_LogLevel  ll) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_UVAdjuster_Atlas() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_UVAdjuster_Atlas", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombinerSingle_UVAdjuster_Atlas(MB3_MeshCombinerSingle_UVAdjuster_Atlas && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_UVAdjuster_Atlas", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSingle_UVAdjuster_Atlas(MB3_MeshCombinerSingle_UVAdjuster_Atlas const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22643};

/// @brief Field textureBakeResults, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  ___textureBakeResults;

/// @brief Field LOG_LEVEL, offset: 0x18, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

/// @brief Field numTimesMatAppearsInAtlas, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___numTimesMatAppearsInAtlas;

/// @brief Field matsAndSrcUVRect, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*>  ___matsAndSrcUVRect;

/// @brief Field compareNamesWhenComparingMaterials, offset: 0x30, size: 0x1, def value: None
 bool  ___compareNamesWhenComparingMaterials;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas, ___textureBakeResults) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas, ___LOG_LEVEL) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas, ___numTimesMatAppearsInAtlas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas, ___matsAndSrcUVRect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas, ___compareNamesWhenComparingMaterials) == 0x30, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas) == 0x38, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MB_MeshCombinerSingle_SubCombiner
class CORDL_TYPE MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner : public ::System::Object {
public:
// Declarations
/// @brief Method Apply, addr 0x9da2134, size 0x58, virtual false, abstract: false, final false
static inline bool Apply(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, bool  triangles, bool  vertices, bool  normals, bool  tangents, bool  uvs, bool  uv2, bool  uv3, bool  uv4, bool  colors, bool  bones, bool  blendShapesFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod) ;

/// @brief Method Apply, addr 0x9da0068, size 0x20cc, virtual false, abstract: false, final false
static inline bool Apply(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, bool  triangles, bool  vertices, bool  normals, bool  tangents, bool  uvs, bool  uv2, bool  uv3, bool  uv4, bool  uv5, bool  uv6, bool  uv7, bool  uv8, bool  colors, bool  bones, bool  blendShapesFlag, bool  suppressClearMesh, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod) ;

/// @brief Method Apply, addr 0x9d9fa58, size 0x610, virtual false, abstract: false, final false
static inline bool Apply(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod) ;

/// @brief Method ApplyShowHide, addr 0x9da218c, size 0x67c, virtual false, abstract: false, final false
static inline bool ApplyShowHide(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner) ;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner* New_ctor() ;

/// @brief Method _AddToCombined, addr 0x9d9d074, size 0x2160, virtual false, abstract: false, final false
static inline bool _AddToCombined(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  c, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, int32_t  totalAddVerts, int32_t  totalDeleteVerts, int32_t  numResultMats, int32_t  totalAddBlendShapes, int32_t  totalDeleteBlendShapes, ::ArrayW<int32_t>  totalAddSubmeshTris, ::ArrayW<int32_t>  totalDeleteSubmeshTris, ::ArrayW<int32_t>  _goToDelete, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  toAddDGOs, ::ArrayW<::UnityEngine::GameObject*>  _goToAdd, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*  uvAdjuster, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>  oldMeshData, ::System::Diagnostics::Stopwatch*  sw) ;

/// @brief Method _ShowHideGameObjects, addr 0x9d9cfc0, size 0xb4, virtual false, abstract: false, final false
static inline bool _ShowHideGameObjects(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  c) ;

/// @brief Method _UpdateGameObjects, addr 0x9d9f1d4, size 0x884, virtual false, abstract: false, final false
static inline bool _UpdateGameObjects(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  dgosToUpdate, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateUV5, bool  updateUV6, bool  updateUV7, bool  updateUV8, bool  updateColors, bool  updateSkinningInfo, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*  uVAdjuster, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method .ctor, addr 0x9da2808, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method instance2Combined_MapAdd, addr 0x9d9cf00, size 0x68, virtual false, abstract: false, final false
static inline void instance2Combined_MapAdd(::by_ref<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>  _instance2combined_map, ::UnityEngine::GameObject*  gameObjectID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo) ;

/// @brief Method instance2Combined_MapRemove, addr 0x9d9cf68, size 0x58, virtual false, abstract: false, final false
static inline void instance2Combined_MapRemove(::by_ref<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>  _instance2combined_map, ::UnityEngine::GameObject*  gameObjectID) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner(MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner(MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22642};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/IVertexAndTriangleProcessor
class CORDL_TYPE MB3_MeshCombinerSingle_IVertexAndTriangleProcessor {
public:
// Declarations
 __declspec(property(get=get_channels)) ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channels;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AssignBuffersToMesh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AssignBuffersToMesh(::UnityEngine::Mesh*  mesh, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsToWriteToMesh, bool  doWriteTrisToMesh, ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*  assignToMeshCustomizer, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>  submeshTrisToUse, ::by_ref<int32_t>  numNonZeroLengthSubmeshes) ;

/// @brief Method AssignTriangleDataForSubmeshes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AssignTriangleDataForSubmeshes(::UnityEngine::Mesh*  mesh, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>  submeshTrisToUse, ::by_ref<int32_t>  numNonZeroLengthSubmeshes) ;

/// @brief Method AssignTriangleDataForSubmeshes_ShowHide, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AssignTriangleDataForSubmeshes_ShowHide(::UnityEngine::Mesh*  mesh, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>  submeshTrisToUse, ::by_ref<int32_t>  numNonZeroLengthSubmeshes) ;

/// @brief Method CopyArraysFromPreviousBakeBuffersToNewBuffers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CopyArraysFromPreviousBakeBuffersToNewBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>  iOldBuffers, int32_t  destStartVertIdx, int32_t  triangleIdxAdjustment, ::ArrayW<int32_t>  targSubmeshTidx, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method CopyFromDGOMeshToBuffers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CopyFromDGOMeshToBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  destStartVertsIdx, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsToUpdate, bool  updateTris, bool  updateBWdata, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*  boneProcessor, ::ArrayW<int32_t>  targSubmeshTidx, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*  uvAdjuster, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  meshChannelCache) ;

/// @brief Method CopyUV2unchangedToSeparateRects, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CopyUV2unchangedToSeparateRects(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, float_t  uv2UnwrappingParamsPackMargin) ;

/// @brief Method GetSubmeshCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetSubmeshCount() ;

/// @brief Method GetTriangleSizes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<int32_t> GetTriangleSizes() ;

/// @brief Method GetVertexCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetVertexCount() ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Init(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, int32_t  vertexCount, ::ArrayW<int32_t>  newSubmeshTrisSize, int32_t  uvChannelWithExtraParameter, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  meshChannelsCache, bool  loadDataFromCombinedMesh, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel) ;

/// @brief Method InitFromMeshCombiner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void InitFromMeshCombiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, int32_t  uvChannelWithExtraParameter) ;

/// @brief Method InitShowHide, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void InitShowHide(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner) ;

/// @brief Method IsDisposed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsDisposed() ;

/// @brief Method IsInitialized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsInitialized() ;

/// @brief Method TransferOwnershipOfSerializableBuffersToCombiner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void TransferOwnershipOfSerializableBuffersToCombiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  c, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsToTransfer, ::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake  serializableBufferData) ;

/// @brief Method get_channels, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags get_channels() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_IVertexAndTriangleProcessor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSingle_IVertexAndTriangleProcessor(MB3_MeshCombinerSingle_IVertexAndTriangleProcessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22641};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DigitalOpus::MB::Core
// Dependencies DigitalOpus.MB.Core.MB2_LightmapOptions, DigitalOpus.MB.Core.MB2_LogLevel, System.Object, UnityEngine.Vector2
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MeshChannelsCache
class CORDL_TYPE MB3_MeshCombinerSingle_MeshChannelsCache : public ::System::Object {
public:
// Declarations
/// @brief Field LOG_LEVEL, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

/// @brief Field _HALF_UV, offset 0x24, size 0x8 
 __declspec(property(get=__cordl_internal_get__HALF_UV, put=__cordl_internal_set__HALF_UV)) ::UnityEngine::Vector2  _HALF_UV;

/// @brief Field _collectedMeshData, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__collectedMeshData, put=__cordl_internal_set__collectedMeshData)) bool  _collectedMeshData;

/// @brief Field _disposed, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field lightmapOption, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightmapOption, put=__cordl_internal_set_lightmapOption)) ::DigitalOpus::MB::Core::MB2_LightmapOptions  lightmapOption;

/// @brief Field meshID2MeshChannels, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshID2MeshChannels, put=__cordl_internal_set_meshID2MeshChannels)) ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>*  meshID2MeshChannels;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface"
constexpr operator  ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CollectChannelDataForAllMeshesInList, addr 0x9d9b258, size 0x704, virtual true, abstract: false, final true
inline void CollectChannelDataForAllMeshesInList(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  toUpdateDGOs, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  toAddDGOs, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, ::DigitalOpus::MB::Core::MB_RenderType  renderType, bool  doBlendShapes) ;

/// @brief Method Dispose, addr 0x9d9aa68, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x9d9aa78, size 0x170, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetBindposes, addr 0x9d95214, size 0x11c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* GetBindposes(::UnityEngine::Renderer*  r, ::by_ref<bool>  isSkinnedMeshWithBones) ;

/// @brief Method GetBlendShapes, addr 0x9d9c788, size 0x220, virtual true, abstract: false, final true
inline ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> GetBlendShapes(::UnityEngine::Mesh*  m, int32_t  gameObjectID, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetBoneWeights, addr 0x9d95330, size 0xa0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::BoneWeight> GetBoneWeights(::UnityEngine::Renderer*  r, int32_t  numVertsInMeshBeingAdded, bool  isSkinnedMeshWithBones) ;

/// @brief Method GetColors, addr 0x9d9b1cc, size 0x8c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> GetColors(::UnityEngine::Mesh*  m) ;

/// @brief Method GetNormals, addr 0x9d9adb0, size 0x8c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> GetNormals(::UnityEngine::Mesh*  m) ;

/// @brief Method GetTangents, addr 0x9d9ae3c, size 0x8c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector4> GetTangents(::UnityEngine::Mesh*  m) ;

/// @brief Method GetUVChannel, addr 0x9d9afe0, size 0x1ec, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> GetUVChannel(int32_t  channel, ::UnityEngine::Mesh*  m) ;

/// @brief Method GetUv0Modified, addr 0x9d9aec8, size 0x8c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> GetUv0Modified(::UnityEngine::Mesh*  m) ;

/// @brief Method GetUv0Raw, addr 0x9d9ac24, size 0x8c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> GetUv0Raw(::UnityEngine::Mesh*  m) ;

/// @brief Method GetUv2Modified, addr 0x9d9af54, size 0x8c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> GetUv2Modified(::UnityEngine::Mesh*  m) ;

/// @brief Method GetVertices, addr 0x9d9acb0, size 0x100, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> GetVertices(::UnityEngine::Mesh*  m) ;

/// @brief Method HasCollectedMeshData, addr 0x9d9abe8, size 0x8, virtual true, abstract: false, final true
inline bool HasCollectedMeshData() ;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache* New_ctor(::DigitalOpus::MB::Core::MB2_LogLevel  ll, ::DigitalOpus::MB::Core::MB2_LightmapOptions  lo) ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__HALF_UV() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__HALF_UV() ;

constexpr bool const& __cordl_internal_get__collectedMeshData() const;

constexpr bool& __cordl_internal_get__collectedMeshData() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions const& __cordl_internal_get_lightmapOption() const;

constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions& __cordl_internal_get_lightmapOption() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>* const& __cordl_internal_get_meshID2MeshChannels() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>*& __cordl_internal_get_meshID2MeshChannels() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set__HALF_UV(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__collectedMeshData(bool  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set_lightmapOption(::DigitalOpus::MB::Core::MB2_LightmapOptions  value) ;

constexpr void __cordl_internal_set_meshID2MeshChannels(::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>*  value) ;

/// @brief Method .ctor, addr 0x9d90a94, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(::DigitalOpus::MB::Core::MB2_LogLevel  ll, ::DigitalOpus::MB::Core::MB2_LightmapOptions  lo) ;

/// @brief Method _generateTangents, addr 0x9d9c9a8, size 0x558, virtual false, abstract: false, final false
inline void _generateTangents(::ArrayW<int32_t>  triangles, ::ArrayW<::UnityEngine::Vector3>  verts, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  outTangents) ;

/// @brief Method _getBindPoses, addr 0x9d9c1d4, size 0x34c, virtual false, abstract: false, final false
static inline void _getBindPoses(::UnityEngine::Renderer*  r, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  poses, ::by_ref<bool>  isSkinnedMeshWithBones) ;

/// @brief Method _getBoneWeights, addr 0x9d9c520, size 0x268, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::BoneWeight> _getBoneWeights(::UnityEngine::Renderer*  r, int32_t  numVertsInMeshBeingAdded, bool  isSkinnedMeshWithBones) ;

/// @brief Method _getMeshColors, addr 0x9d9bfac, size 0x228, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> _getMeshColors(::UnityEngine::Mesh*  m) ;

/// @brief Method _getMeshNormals, addr 0x9d9bafc, size 0x22c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> _getMeshNormals(::UnityEngine::Mesh*  m) ;

/// @brief Method _getMeshTangents, addr 0x9d9bd28, size 0x284, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector4> _getMeshTangents(::UnityEngine::Mesh*  m) ;

/// @brief Method _getMeshUV2s, addr 0x9d9ba1c, size 0xe0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> _getMeshUV2s(::UnityEngine::Mesh*  m, ::by_ref<::ArrayW<::UnityEngine::Vector2>>  uv2modified) ;

/// @brief Method _getMeshUVs, addr 0x9d9b95c, size 0xc0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> _getMeshUVs(::UnityEngine::Mesh*  m) ;

/// @brief Method hasOutOfBoundsUVs, addr 0x9d9abf0, size 0x34, virtual true, abstract: false, final true
inline bool hasOutOfBoundsUVs(::UnityEngine::Mesh*  m, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>  mar, int32_t  submeshIdx) ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface"
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface* i___DigitalOpus__MB__Core__MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_MeshChannelsCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MeshChannelsCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombinerSingle_MeshChannelsCache(MB3_MeshCombinerSingle_MeshChannelsCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MeshChannelsCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSingle_MeshChannelsCache(MB3_MeshCombinerSingle_MeshChannelsCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22640};

/// @brief Field LOG_LEVEL, offset: 0x10, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

/// @brief Field lightmapOption, offset: 0x14, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LightmapOptions  ___lightmapOption;

/// @brief Field meshID2MeshChannels, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>*  ___meshID2MeshChannels;

/// @brief Field _collectedMeshData, offset: 0x20, size: 0x1, def value: None
 bool  ____collectedMeshData;

/// @brief Field _disposed, offset: 0x21, size: 0x1, def value: None
 bool  ____disposed;

/// @brief Field _HALF_UV, offset: 0x24, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____HALF_UV;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache, ___LOG_LEVEL) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache, ___lightmapOption) == 0x14, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache, ___meshID2MeshChannels) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache, ____collectedMeshData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache, ____disposed) == 0x21, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache, ____HALF_UV) == 0x24, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache) == 0x30, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/IMeshChannelsCacheTaggingInterface
class CORDL_TYPE MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface {
public:
// Declarations
/// @brief Method CollectChannelDataForAllMeshesInList, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CollectChannelDataForAllMeshesInList(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  toUpdateDGOs, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  toAddDGOs, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, ::DigitalOpus::MB::Core::MB_RenderType  renderType, bool  doBlendShapes) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Dispose() ;

/// @brief Method GetBlendShapes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> GetBlendShapes(::UnityEngine::Mesh*  mesh, int32_t  instanceID, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method HasCollectedMeshData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool HasCollectedMeshData() ;

/// @brief Method hasOutOfBoundsUVs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool hasOutOfBoundsUVs(::UnityEngine::Mesh*  m, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>  mar, int32_t  submeshIdx) ;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface(MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22639};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DigitalOpus::MB::Core
// Dependencies DigitalOpus.MB.Core.MB3_MeshCombinerSingle::MBBlendShape, System.Object, UnityEngine.BoneWeight, UnityEngine.Color, UnityEngine.Vector2, UnityEngine.Vector3, UnityEngine.Vector4
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MeshChannels
class CORDL_TYPE MB3_MeshCombinerSingle_MeshChannels : public ::System::Object {
public:
// Declarations
/// @brief Field _disposed, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field bindPoses, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_bindPoses, put=__cordl_internal_set_bindPoses)) ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  bindPoses;

/// @brief Field blendShapes, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_blendShapes, put=__cordl_internal_set_blendShapes)) ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>  blendShapes;

/// @brief Field boneWeights, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_boneWeights, put=__cordl_internal_set_boneWeights)) ::ArrayW<::UnityEngine::BoneWeight>  boneWeights;

/// @brief Field colors, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_colors, put=__cordl_internal_set_colors)) ::ArrayW<::UnityEngine::Color>  colors;

/// @brief Field normals, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_normals, put=__cordl_internal_set_normals)) ::ArrayW<::UnityEngine::Vector3>  normals;

/// @brief Field tangents, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tangents, put=__cordl_internal_set_tangents)) ::ArrayW<::UnityEngine::Vector4>  tangents;

/// @brief Field triangles, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_triangles, put=__cordl_internal_set_triangles)) ::ArrayW<int32_t>  triangles;

/// @brief Field uv0modified, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv0modified, put=__cordl_internal_set_uv0modified)) ::ArrayW<::UnityEngine::Vector2>  uv0modified;

/// @brief Field uv0raw, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv0raw, put=__cordl_internal_set_uv0raw)) ::ArrayW<::UnityEngine::Vector2>  uv0raw;

/// @brief Field uv2modified, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv2modified, put=__cordl_internal_set_uv2modified)) ::ArrayW<::UnityEngine::Vector2>  uv2modified;

/// @brief Field uv2raw, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv2raw, put=__cordl_internal_set_uv2raw)) ::ArrayW<::UnityEngine::Vector2>  uv2raw;

/// @brief Field uv3, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv3, put=__cordl_internal_set_uv3)) ::ArrayW<::UnityEngine::Vector2>  uv3;

/// @brief Field uv4, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv4, put=__cordl_internal_set_uv4)) ::ArrayW<::UnityEngine::Vector2>  uv4;

/// @brief Field uv5, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv5, put=__cordl_internal_set_uv5)) ::ArrayW<::UnityEngine::Vector2>  uv5;

/// @brief Field uv6, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv6, put=__cordl_internal_set_uv6)) ::ArrayW<::UnityEngine::Vector2>  uv6;

/// @brief Field uv7, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv7, put=__cordl_internal_set_uv7)) ::ArrayW<::UnityEngine::Vector2>  uv7;

/// @brief Field uv8, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv8, put=__cordl_internal_set_uv8)) ::ArrayW<::UnityEngine::Vector2>  uv8;

/// @brief Field vertices, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_vertices, put=__cordl_internal_set_vertices)) ::ArrayW<::UnityEngine::Vector3>  vertices;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x9d9a754, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x9d9a76c, size 0x13c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method IsDisposed, addr 0x9d9a764, size 0x8, virtual false, abstract: false, final false
inline bool IsDisposed() ;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels* New_ctor() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* const& __cordl_internal_get_bindPoses() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*& __cordl_internal_get_bindPoses() ;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> const& __cordl_internal_get_blendShapes() const;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>& __cordl_internal_get_blendShapes() ;

constexpr ::ArrayW<::UnityEngine::BoneWeight> const& __cordl_internal_get_boneWeights() const;

constexpr ::ArrayW<::UnityEngine::BoneWeight>& __cordl_internal_get_boneWeights() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_colors() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_colors() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_normals() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_normals() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_tangents() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_tangents() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_triangles() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_triangles() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv0modified() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv0modified() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv0raw() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv0raw() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv2modified() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv2modified() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv2raw() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv2raw() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv3() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv3() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv4() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv4() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv5() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv5() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv6() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv6() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv7() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv7() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv8() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv8() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_vertices() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_vertices() ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set_bindPoses(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  value) ;

constexpr void __cordl_internal_set_blendShapes(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>  value) ;

constexpr void __cordl_internal_set_boneWeights(::ArrayW<::UnityEngine::BoneWeight>  value) ;

constexpr void __cordl_internal_set_colors(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set_normals(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_tangents(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set_triangles(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_uv0modified(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv0raw(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv2modified(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv2raw(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv3(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv4(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv5(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv6(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv7(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv8(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_vertices(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0x9d91ed0, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_MeshChannels() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MeshChannels", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombinerSingle_MeshChannels(MB3_MeshCombinerSingle_MeshChannels && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MeshChannels", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSingle_MeshChannels(MB3_MeshCombinerSingle_MeshChannels const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22635};

/// @brief Field _disposed, offset: 0x10, size: 0x1, def value: None
 bool  ____disposed;

/// @brief Field vertices, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___vertices;

/// @brief Field normals, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___normals;

/// @brief Field tangents, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ___tangents;

/// @brief Field uv0raw, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv0raw;

/// @brief Field uv0modified, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv0modified;

/// @brief Field uv2raw, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv2raw;

/// @brief Field uv2modified, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv2modified;

/// @brief Field uv3, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv3;

/// @brief Field uv4, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv4;

/// @brief Field uv5, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv5;

/// @brief Field uv6, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv6;

/// @brief Field uv7, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv7;

/// @brief Field uv8, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv8;

/// @brief Field colors, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ___colors;

/// @brief Field boneWeights, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::BoneWeight>  ___boneWeights;

/// @brief Field bindPoses, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  ___bindPoses;

/// @brief Field triangles, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___triangles;

/// @brief Field blendShapes, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>  ___blendShapes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ____disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ___vertices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ___normals) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ___tangents) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ___uv0raw) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ___uv0modified) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ___uv2raw) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ___uv2modified) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ___uv3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ___uv4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ___uv5) == 0x60, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ___uv6) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ___uv7) == 0x70, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ___uv8) == 0x78, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ___colors) == 0x80, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ___boneWeights) == 0x88, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ___bindPoses) == 0x90, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ___triangles) == 0x98, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels, ___blendShapes) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels) == 0xa8, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies DigitalOpus.MB.Core.MB3_MeshCombinerSingle::BoneAndBindpose, DigitalOpus.MB.Core.MB3_MeshCombinerSingle::BoneWeightDataForMesh, DigitalOpus.MB.Core.MB3_MeshCombinerSingle::SerializableIntArray, System.Object, UnityEngine.BoneWeight, UnityEngine.Material, UnityEngine.Rect, UnityEngine.Transform, UnityEngine.Vector3, UnityEngine.Vector4
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MB_DynamicGameObject
class CORDL_TYPE MB3_MeshCombinerSingle_MB_DynamicGameObject : public ::System::Object {
public:
// Declarations
/// @brief Field _beingDeleted, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get__beingDeleted, put=__cordl_internal_set__beingDeleted)) bool  _beingDeleted;

/// @brief Field _initialized, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _mesh, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh>  _mesh;

/// @brief Field _renderer, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _tmpSMR_CachedBindposes, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpSMR_CachedBindposes, put=__cordl_internal_set__tmpSMR_CachedBindposes)) ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  _tmpSMR_CachedBindposes;

/// @brief Field _tmpSMR_CachedBoneAndBindPose, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpSMR_CachedBoneAndBindPose, put=__cordl_internal_set__tmpSMR_CachedBoneAndBindPose)) ::ArrayW<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>  _tmpSMR_CachedBoneAndBindPose;

/// @brief Field _tmpSMR_CachedBoneWeightData, offset 0x100, size 0x38 
 __declspec(property(get=__cordl_internal_get__tmpSMR_CachedBoneWeightData, put=__cordl_internal_set__tmpSMR_CachedBoneWeightData)) ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh  _tmpSMR_CachedBoneWeightData;

/// @brief Field _tmpSMR_CachedBoneWeights, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpSMR_CachedBoneWeights, put=__cordl_internal_set__tmpSMR_CachedBoneWeights)) ::ArrayW<::UnityEngine::BoneWeight>  _tmpSMR_CachedBoneWeights;

/// @brief Field _tmpSMR_CachedBones, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpSMR_CachedBones, put=__cordl_internal_set__tmpSMR_CachedBones)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _tmpSMR_CachedBones;

/// @brief Field _tmpSMR_srcMeshBoneIdx2masterListBoneIdx, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpSMR_srcMeshBoneIdx2masterListBoneIdx, put=__cordl_internal_set__tmpSMR_srcMeshBoneIdx2masterListBoneIdx)) ::ArrayW<int32_t>  _tmpSMR_srcMeshBoneIdx2masterListBoneIdx;

/// @brief Field _tmpSubmeshTris, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpSubmeshTris, put=__cordl_internal_set__tmpSubmeshTris)) ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  _tmpSubmeshTris;

/// @brief Field blendShapeIdx, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_blendShapeIdx, put=__cordl_internal_set_blendShapeIdx)) int32_t  blendShapeIdx;

/// @brief Field encapsulatingRect, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_encapsulatingRect, put=__cordl_internal_set_encapsulatingRect)) ::ArrayW<::UnityEngine::Rect>  encapsulatingRect;

/// @brief Field gameObject, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObject, put=__cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Field indexesOfBonesUsed, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_indexesOfBonesUsed, put=__cordl_internal_set_indexesOfBonesUsed)) ::ArrayW<int32_t>  indexesOfBonesUsed;

/// @brief Field instanceID, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_instanceID, put=__cordl_internal_set_instanceID)) int32_t  instanceID;

/// @brief Field invertTriangles, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_invertTriangles, put=__cordl_internal_set_invertTriangles)) bool  invertTriangles;

/// @brief Field isSkinnedMeshWithBones, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSkinnedMeshWithBones, put=__cordl_internal_set_isSkinnedMeshWithBones)) bool  isSkinnedMeshWithBones;

/// @brief Field lightmapIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightmapIndex, put=__cordl_internal_set_lightmapIndex)) int32_t  lightmapIndex;

/// @brief Field lightmapTilingOffset, offset 0x4c, size 0x10 
 __declspec(property(get=__cordl_internal_get_lightmapTilingOffset, put=__cordl_internal_set_lightmapTilingOffset)) ::UnityEngine::Vector4  lightmapTilingOffset;

/// @brief Field meshSize, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get_meshSize, put=__cordl_internal_set_meshSize)) ::UnityEngine::Vector3  meshSize;

/// @brief Field name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field numBlendShapes, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_numBlendShapes, put=__cordl_internal_set_numBlendShapes)) int32_t  numBlendShapes;

/// @brief Field numBoneWeights, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_numBoneWeights, put=__cordl_internal_set_numBoneWeights)) int32_t  numBoneWeights;

/// @brief Field numVerts, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_numVerts, put=__cordl_internal_set_numVerts)) int32_t  numVerts;

/// @brief Field obUVRects, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_obUVRects, put=__cordl_internal_set_obUVRects)) ::ArrayW<::UnityEngine::Rect>  obUVRects;

/// @brief Field show, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_show, put=__cordl_internal_set_show)) bool  show;

/// @brief Field sourceMaterialTiling, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceMaterialTiling, put=__cordl_internal_set_sourceMaterialTiling)) ::ArrayW<::UnityEngine::Rect>  sourceMaterialTiling;

/// @brief Field sourceSharedMaterials, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceSharedMaterials, put=__cordl_internal_set_sourceSharedMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  sourceSharedMaterials;

/// @brief Field submeshNumTris, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_submeshNumTris, put=__cordl_internal_set_submeshNumTris)) ::ArrayW<int32_t>  submeshNumTris;

/// @brief Field submeshTriIdxs, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_submeshTriIdxs, put=__cordl_internal_set_submeshTriIdxs)) ::ArrayW<int32_t>  submeshTriIdxs;

/// @brief Field targetSubmeshIdxs, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetSubmeshIdxs, put=__cordl_internal_set_targetSubmeshIdxs)) ::ArrayW<int32_t>  targetSubmeshIdxs;

/// @brief Field textureArraySliceIdx, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureArraySliceIdx, put=__cordl_internal_set_textureArraySliceIdx)) ::ArrayW<int32_t>  textureArraySliceIdx;

/// @brief Field uvRects, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_uvRects, put=__cordl_internal_set_uvRects)) ::ArrayW<::UnityEngine::Rect>  uvRects;

/// @brief Field vertIdx, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_vertIdx, put=__cordl_internal_set_vertIdx)) int32_t  vertIdx;

/// @brief Convert operator to "::System::IComparable_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>"
constexpr operator  ::System::IComparable_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*() noexcept;

/// @brief Method CompareTo, addr 0x9d9a738, size 0x1c, virtual true, abstract: false, final true
inline int32_t CompareTo(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  b) ;

/// @brief Method Initialize, addr 0x9d8c488, size 0xf8, virtual false, abstract: false, final false
inline bool Initialize(bool  beingDeleted) ;

/// @brief Method InitializeNew, addr 0x9d8c33c, size 0x14c, virtual false, abstract: false, final false
inline bool InitializeNew(bool  beingDeleted, ::UnityEngine::GameObject*  go) ;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* New_ctor() ;

/// @brief Method UnInitialize, addr 0x9d9a70c, size 0x2c, virtual false, abstract: false, final false
inline void UnInitialize() ;

constexpr bool const& __cordl_internal_get__beingDeleted() const;

constexpr bool& __cordl_internal_get__beingDeleted() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* const& __cordl_internal_get__tmpSMR_CachedBindposes() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*& __cordl_internal_get__tmpSMR_CachedBindposes() ;

constexpr ::ArrayW<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose> const& __cordl_internal_get__tmpSMR_CachedBoneAndBindPose() const;

constexpr ::ArrayW<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>& __cordl_internal_get__tmpSMR_CachedBoneAndBindPose() ;

constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh const& __cordl_internal_get__tmpSMR_CachedBoneWeightData() const;

constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh& __cordl_internal_get__tmpSMR_CachedBoneWeightData() ;

constexpr ::ArrayW<::UnityEngine::BoneWeight> const& __cordl_internal_get__tmpSMR_CachedBoneWeights() const;

constexpr ::ArrayW<::UnityEngine::BoneWeight>& __cordl_internal_get__tmpSMR_CachedBoneWeights() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__tmpSMR_CachedBones() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__tmpSMR_CachedBones() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__tmpSMR_srcMeshBoneIdx2masterListBoneIdx() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__tmpSMR_srcMeshBoneIdx2masterListBoneIdx() ;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*> const& __cordl_internal_get__tmpSubmeshTris() const;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>& __cordl_internal_get__tmpSubmeshTris() ;

constexpr int32_t const& __cordl_internal_get_blendShapeIdx() const;

constexpr int32_t& __cordl_internal_get_blendShapeIdx() ;

constexpr ::ArrayW<::UnityEngine::Rect> const& __cordl_internal_get_encapsulatingRect() const;

constexpr ::ArrayW<::UnityEngine::Rect>& __cordl_internal_get_encapsulatingRect() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_indexesOfBonesUsed() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_indexesOfBonesUsed() ;

constexpr int32_t const& __cordl_internal_get_instanceID() const;

constexpr int32_t& __cordl_internal_get_instanceID() ;

constexpr bool const& __cordl_internal_get_invertTriangles() const;

constexpr bool& __cordl_internal_get_invertTriangles() ;

constexpr bool const& __cordl_internal_get_isSkinnedMeshWithBones() const;

constexpr bool& __cordl_internal_get_isSkinnedMeshWithBones() ;

constexpr int32_t const& __cordl_internal_get_lightmapIndex() const;

constexpr int32_t& __cordl_internal_get_lightmapIndex() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_lightmapTilingOffset() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_lightmapTilingOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_meshSize() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_meshSize() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr int32_t const& __cordl_internal_get_numBlendShapes() const;

constexpr int32_t& __cordl_internal_get_numBlendShapes() ;

constexpr int32_t const& __cordl_internal_get_numBoneWeights() const;

constexpr int32_t& __cordl_internal_get_numBoneWeights() ;

constexpr int32_t const& __cordl_internal_get_numVerts() const;

constexpr int32_t& __cordl_internal_get_numVerts() ;

constexpr ::ArrayW<::UnityEngine::Rect> const& __cordl_internal_get_obUVRects() const;

constexpr ::ArrayW<::UnityEngine::Rect>& __cordl_internal_get_obUVRects() ;

constexpr bool const& __cordl_internal_get_show() const;

constexpr bool& __cordl_internal_get_show() ;

constexpr ::ArrayW<::UnityEngine::Rect> const& __cordl_internal_get_sourceMaterialTiling() const;

constexpr ::ArrayW<::UnityEngine::Rect>& __cordl_internal_get_sourceMaterialTiling() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_sourceSharedMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_sourceSharedMaterials() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_submeshNumTris() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_submeshNumTris() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_submeshTriIdxs() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_submeshTriIdxs() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_targetSubmeshIdxs() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_targetSubmeshIdxs() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_textureArraySliceIdx() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_textureArraySliceIdx() ;

constexpr ::ArrayW<::UnityEngine::Rect> const& __cordl_internal_get_uvRects() const;

constexpr ::ArrayW<::UnityEngine::Rect>& __cordl_internal_get_uvRects() ;

constexpr int32_t const& __cordl_internal_get_vertIdx() const;

constexpr int32_t& __cordl_internal_get_vertIdx() ;

constexpr void __cordl_internal_set__beingDeleted(bool  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__tmpSMR_CachedBindposes(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  value) ;

constexpr void __cordl_internal_set__tmpSMR_CachedBoneAndBindPose(::ArrayW<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>  value) ;

constexpr void __cordl_internal_set__tmpSMR_CachedBoneWeightData(::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh  value) ;

constexpr void __cordl_internal_set__tmpSMR_CachedBoneWeights(::ArrayW<::UnityEngine::BoneWeight>  value) ;

constexpr void __cordl_internal_set__tmpSMR_CachedBones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set__tmpSMR_srcMeshBoneIdx2masterListBoneIdx(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__tmpSubmeshTris(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  value) ;

constexpr void __cordl_internal_set_blendShapeIdx(int32_t  value) ;

constexpr void __cordl_internal_set_encapsulatingRect(::ArrayW<::UnityEngine::Rect>  value) ;

constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_indexesOfBonesUsed(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_instanceID(int32_t  value) ;

constexpr void __cordl_internal_set_invertTriangles(bool  value) ;

constexpr void __cordl_internal_set_isSkinnedMeshWithBones(bool  value) ;

constexpr void __cordl_internal_set_lightmapIndex(int32_t  value) ;

constexpr void __cordl_internal_set_lightmapTilingOffset(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_meshSize(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_numBlendShapes(int32_t  value) ;

constexpr void __cordl_internal_set_numBoneWeights(int32_t  value) ;

constexpr void __cordl_internal_set_numVerts(int32_t  value) ;

constexpr void __cordl_internal_set_obUVRects(::ArrayW<::UnityEngine::Rect>  value) ;

constexpr void __cordl_internal_set_show(bool  value) ;

constexpr void __cordl_internal_set_sourceMaterialTiling(::ArrayW<::UnityEngine::Rect>  value) ;

constexpr void __cordl_internal_set_sourceSharedMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_submeshNumTris(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_submeshTriIdxs(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_targetSubmeshIdxs(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_textureArraySliceIdx(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_uvRects(::ArrayW<::UnityEngine::Rect>  value) ;

constexpr void __cordl_internal_set_vertIdx(int32_t  value) ;

/// @brief Method .ctor, addr 0x9d8c278, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IComparable_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>"
constexpr ::System::IComparable_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>* i___System__IComparable_1___DigitalOpus__MB__Core__MB3_MeshCombinerSingle_MB_DynamicGameObject__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_MB_DynamicGameObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MB_DynamicGameObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombinerSingle_MB_DynamicGameObject(MB3_MeshCombinerSingle_MB_DynamicGameObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MB_DynamicGameObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSingle_MB_DynamicGameObject(MB3_MeshCombinerSingle_MB_DynamicGameObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22634};

/// @brief Field instanceID, offset: 0x10, size: 0x4, def value: None
 int32_t  ___instanceID;

/// @brief Field gameObject, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObject;

/// @brief Field name, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field vertIdx, offset: 0x28, size: 0x4, def value: None
 int32_t  ___vertIdx;

/// @brief Field blendShapeIdx, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___blendShapeIdx;

/// @brief Field numVerts, offset: 0x30, size: 0x4, def value: None
 int32_t  ___numVerts;

/// @brief Field numBlendShapes, offset: 0x34, size: 0x4, def value: None
 int32_t  ___numBlendShapes;

/// @brief Field numBoneWeights, offset: 0x38, size: 0x4, def value: None
 int32_t  ___numBoneWeights;

/// @brief Field isSkinnedMeshWithBones, offset: 0x3c, size: 0x1, def value: None
 bool  ___isSkinnedMeshWithBones;

/// @brief Field indexesOfBonesUsed, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___indexesOfBonesUsed;

/// @brief Field lightmapIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ___lightmapIndex;

/// @brief Field lightmapTilingOffset, offset: 0x4c, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___lightmapTilingOffset;

/// @brief Field meshSize, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___meshSize;

/// @brief Field show, offset: 0x68, size: 0x1, def value: None
 bool  ___show;

/// @brief Field invertTriangles, offset: 0x69, size: 0x1, def value: None
 bool  ___invertTriangles;

/// @brief Field submeshTriIdxs, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___submeshTriIdxs;

/// @brief Field submeshNumTris, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___submeshNumTris;

/// @brief Field targetSubmeshIdxs, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___targetSubmeshIdxs;

/// @brief Field uvRects, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rect>  ___uvRects;

/// @brief Field encapsulatingRect, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rect>  ___encapsulatingRect;

/// @brief Field sourceMaterialTiling, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rect>  ___sourceMaterialTiling;

/// @brief Field obUVRects, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rect>  ___obUVRects;

/// @brief Field textureArraySliceIdx, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___textureArraySliceIdx;

/// @brief Field sourceSharedMaterials, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___sourceSharedMaterials;

/// @brief Field _initialized, offset: 0xb8, size: 0x1, def value: None
 bool  ____initialized;

/// @brief Field _beingDeleted, offset: 0xb9, size: 0x1, def value: None
 bool  ____beingDeleted;

/// @brief Field _mesh, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____mesh;

/// @brief Field _renderer, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field _tmpSubmeshTris, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  ____tmpSubmeshTris;

/// @brief Field _tmpSMR_CachedBones, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ____tmpSMR_CachedBones;

/// @brief Field _tmpSMR_CachedBindposes, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  ____tmpSMR_CachedBindposes;

/// @brief Field _tmpSMR_CachedBoneAndBindPose, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>  ____tmpSMR_CachedBoneAndBindPose;

/// @brief Field _tmpSMR_srcMeshBoneIdx2masterListBoneIdx, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____tmpSMR_srcMeshBoneIdx2masterListBoneIdx;

/// @brief Field _tmpSMR_CachedBoneWeights, offset: 0xf8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::BoneWeight>  ____tmpSMR_CachedBoneWeights;

/// @brief Field _tmpSMR_CachedBoneWeightData, offset: 0x100, size: 0x38, def value: None
 ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh  ____tmpSMR_CachedBoneWeightData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___instanceID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___gameObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___vertIdx) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___blendShapeIdx) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___numVerts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___numBlendShapes) == 0x34, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___numBoneWeights) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___isSkinnedMeshWithBones) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___indexesOfBonesUsed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___lightmapIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___lightmapTilingOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___meshSize) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___show) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___invertTriangles) == 0x69, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___submeshTriIdxs) == 0x70, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___submeshNumTris) == 0x78, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___targetSubmeshIdxs) == 0x80, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___uvRects) == 0x88, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___encapsulatingRect) == 0x90, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___sourceMaterialTiling) == 0x98, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___obUVRects) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___textureArraySliceIdx) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ___sourceSharedMaterials) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ____initialized) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ____beingDeleted) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ____mesh) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ____renderer) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ____tmpSubmeshTris) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ____tmpSMR_CachedBones) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ____tmpSMR_CachedBindposes) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ____tmpSMR_CachedBoneAndBindPose) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ____tmpSMR_srcMeshBoneIdx2masterListBoneIdx) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ____tmpSMR_CachedBoneWeights) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject, ____tmpSMR_CachedBoneWeightData) == 0x100, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject) == 0x138, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/SerializableIntArray
class CORDL_TYPE MB3_MeshCombinerSingle_SerializableIntArray : public ::System::Object {
public:
// Declarations
/// @brief Field data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::ArrayW<int32_t>  data;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray* New_ctor() ;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray* New_ctor(int32_t  len) ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_data() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_data(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0x9d882b0, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9d9a5e0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  len) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_SerializableIntArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_SerializableIntArray", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombinerSingle_SerializableIntArray(MB3_MeshCombinerSingle_SerializableIntArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_SerializableIntArray", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSingle_SerializableIntArray(MB3_MeshCombinerSingle_SerializableIntArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22632};

/// [SerializeField]
/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray, ___data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray) == 0x18, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, System.Object, Unity.Collections.NativeArray`1<T>, UnityEngine.BoneWeight1, UnityEngine.Matrix4x4, UnityEngine.Transform
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MB_MeshCombinerSingle_BoneProcessorNewAPI
class CORDL_TYPE MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI : public ::System::Object {
public:
// Declarations
/// @brief Field LOG_LEVEL, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

/// @brief Field _disposed, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _initialized, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field boneWeight1s_nvarr, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_boneWeight1s_nvarr, put=__cordl_internal_set_boneWeight1s_nvarr)) ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  boneWeight1s_nvarr;

/// @brief Field boneWeightSize, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_boneWeightSize, put=__cordl_internal_set_boneWeightSize)) int32_t  boneWeightSize;

/// @brief Field bonesPerVertex_nvarr, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_bonesPerVertex_nvarr, put=__cordl_internal_set_bonesPerVertex_nvarr)) ::Unity::Collections::NativeArray_1<uint8_t>  bonesPerVertex_nvarr;

/// @brief Field bonesToAddAndInCombined, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_bonesToAddAndInCombined, put=__cordl_internal_set_bonesToAddAndInCombined)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*  bonesToAddAndInCombined;

/// @brief Field combiner, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_combiner, put=__cordl_internal_set_combiner)) ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner;

/// @brief Field dgo2firstIdxInBoneWeightsArray, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_dgo2firstIdxInBoneWeightsArray, put=__cordl_internal_set_dgo2firstIdxInBoneWeightsArray)) ::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*,int32_t>*  dgo2firstIdxInBoneWeightsArray;

/// @brief Field masterList, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_masterList, put=__cordl_internal_set_masterList)) ::System::Collections::Generic::List_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*  masterList;

/// @brief Field nBindPoses, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_nBindPoses, put=__cordl_internal_set_nBindPoses)) ::ArrayW<::UnityEngine::Matrix4x4>  nBindPoses;

/// @brief Field nbones, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_nbones, put=__cordl_internal_set_nbones)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  nbones;

/// @brief Field targBoneWeightIdx, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_targBoneWeightIdx, put=__cordl_internal_set_targBoneWeightIdx)) int32_t  targBoneWeightIdx;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor"
constexpr operator  ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddBonesToNewBonesArrayAndAdjustBWIndexes1, addr 0x9d98f44, size 0x30c, virtual true, abstract: false, final true
inline void AddBonesToNewBonesArrayAndAdjustBWIndexes1(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  firstVertexIdxForThisDGO) ;

/// @brief Method AllocateAndSetupSMRDataStructures, addr 0x9d97af8, size 0x160, virtual true, abstract: false, final true
inline void AllocateAndSetupSMRDataStructures(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  dgosToAdd, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  dgosInCombinedMesh, int32_t  newVertSize, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*  vertexAndTriangleProcessor) ;

/// @brief Method ApplySMRdataToMesh, addr 0x9d99dd8, size 0xdc, virtual true, abstract: false, final true
inline void ApplySMRdataToMesh(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::UnityEngine::Mesh*  mesh) ;

/// @brief Method ApplySMRdataToMeshToBuffer, addr 0x9d99d54, size 0x84, virtual true, abstract: false, final true
inline void ApplySMRdataToMeshToBuffer() ;

/// @brief Method BuildBoneIdx2DGOMapIfNecessary, addr 0x9d97244, size 0x104, virtual true, abstract: false, final true
inline void BuildBoneIdx2DGOMapIfNecessary(::ArrayW<int32_t>  _goToDelete) ;

/// @brief Method CopyBoneWeightsFromMeshForDGOsInCombined, addr 0x9d98f40, size 0x4, virtual true, abstract: false, final true
inline void CopyBoneWeightsFromMeshForDGOsInCombined(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  targVidx) ;

/// @brief Method CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes, addr 0x9d99250, size 0x4, virtual true, abstract: false, final true
inline void CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes(int32_t  totalDeleteVerts) ;

/// @brief Method CopyVertsNormsTansToBuffers, addr 0x9d99254, size 0x68, virtual true, abstract: false, final true
inline void CopyVertsNormsTansToBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, int32_t  vertsIdx, ::ArrayW<::UnityEngine::Vector3>  nnorms, ::ArrayW<::UnityEngine::Vector4>  ntangs, ::ArrayW<::UnityEngine::Vector3>  nverts, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  tangents, ::ArrayW<::UnityEngine::Vector3>  verts) ;

/// @brief Method CopyVertsNormsTansToBuffers, addr 0x9d992bc, size 0x8c0, virtual true, abstract: false, final true
inline void CopyVertsNormsTansToBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, int32_t  vertsIdx, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  nnorms, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  ntangs, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  nverts, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  normals, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  tangents, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  verts) ;

/// @brief Method DB_CheckIntegrity, addr 0x9d9a5d8, size 0x8, virtual true, abstract: false, final true
inline bool DB_CheckIntegrity() ;

/// @brief Method Dispose, addr 0x9d9a058, size 0x8, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x9d99fac, size 0xac, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method DisposeOfTemporarySMRData, addr 0x9d9a060, size 0x170, virtual true, abstract: false, final true
inline void DisposeOfTemporarySMRData() ;

/// @brief Method GetCachedSMRMeshData, addr 0x9d9734c, size 0x7ac, virtual true, abstract: false, final true
inline bool GetCachedSMRMeshData(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo) ;

/// @brief Method GetNewBonesSize, addr 0x9d971fc, size 0x48, virtual true, abstract: false, final true
inline int32_t GetNewBonesSize() ;

/// @brief Method InsertNewBonesIntoBonesArray, addr 0x9d99b7c, size 0x1d8, virtual true, abstract: false, final true
inline void InsertNewBonesIntoBonesArray() ;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI* New_ctor(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  cm) ;

/// @brief Method RemoveBonesForDgosWeAreDeleting, addr 0x9d97348, size 0x4, virtual true, abstract: false, final true
inline void RemoveBonesForDgosWeAreDeleting(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo) ;

/// @brief Method UpdateGameObjects_ReadBoneWeightInfoFromCombinedMesh, addr 0x9d98c08, size 0x338, virtual true, abstract: false, final true
inline void UpdateGameObjects_ReadBoneWeightInfoFromCombinedMesh() ;

/// @brief Method UpdateGameObjects_UpdateBWIndexes, addr 0x9d99eb4, size 0xf8, virtual true, abstract: false, final true
inline void UpdateGameObjects_UpdateBWIndexes(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo) ;

/// @brief Method _AllocateNewArraysForCombinedMesh, addr 0x9d987a4, size 0x464, virtual false, abstract: false, final false
inline void _AllocateNewArraysForCombinedMesh(int32_t  newVertSize, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*  vertexAndTriangleProcessor) ;

/// @brief Method _BuildMasterBonesArray, addr 0x9d97f2c, size 0x878, virtual false, abstract: false, final false
inline int32_t _BuildMasterBonesArray(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  dgosToAdd, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  dgosInCombinedMesh) ;

/// @brief Method _CollectBonesToAddForDGO_Pass2, addr 0x9d9a1d8, size 0x400, virtual false, abstract: false, final false
inline bool _CollectBonesToAddForDGO_Pass2(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, bool  noExtraBonesForMeshRenderers) ;

/// @brief Method _CollectSkinningDataForDGOsInCombinedMesh, addr 0x9d97c58, size 0x2d4, virtual false, abstract: false, final false
inline void _CollectSkinningDataForDGOsInCombinedMesh(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  dgosAdding, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  dgosInCombinedMesh, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*  meshChannelsCache) ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> const& __cordl_internal_get_boneWeight1s_nvarr() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>& __cordl_internal_get_boneWeight1s_nvarr() ;

constexpr int32_t const& __cordl_internal_get_boneWeightSize() const;

constexpr int32_t& __cordl_internal_get_boneWeightSize() ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_bonesPerVertex_nvarr() const;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_bonesPerVertex_nvarr() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>* const& __cordl_internal_get_bonesToAddAndInCombined() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*& __cordl_internal_get_bonesToAddAndInCombined() ;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* const& __cordl_internal_get_combiner() const;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*& __cordl_internal_get_combiner() ;

constexpr ::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*,int32_t>* const& __cordl_internal_get_dgo2firstIdxInBoneWeightsArray() const;

constexpr ::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*,int32_t>*& __cordl_internal_get_dgo2firstIdxInBoneWeightsArray() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>* const& __cordl_internal_get_masterList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*& __cordl_internal_get_masterList() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get_nBindPoses() const;

constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get_nBindPoses() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_nbones() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_nbones() ;

constexpr int32_t const& __cordl_internal_get_targBoneWeightIdx() const;

constexpr int32_t& __cordl_internal_get_targBoneWeightIdx() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set_boneWeight1s_nvarr(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  value) ;

constexpr void __cordl_internal_set_boneWeightSize(int32_t  value) ;

constexpr void __cordl_internal_set_bonesPerVertex_nvarr(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr void __cordl_internal_set_bonesToAddAndInCombined(::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*  value) ;

constexpr void __cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  value) ;

constexpr void __cordl_internal_set_dgo2firstIdxInBoneWeightsArray(::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*,int32_t>*  value) ;

constexpr void __cordl_internal_set_masterList(::System::Collections::Generic::List_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*  value) ;

constexpr void __cordl_internal_set_nBindPoses(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set_nbones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_targBoneWeightIdx(int32_t  value) ;

/// @brief Method .ctor, addr 0x9d90770, size 0x16c, virtual false, abstract: false, final false
inline void _ctor(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  cm) ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor"
constexpr ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor* i___DigitalOpus__MB__Core__MB_IMeshCombinerSingle_BoneProcessor() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI(MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI(MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22629};

/// @brief Field LOG_LEVEL, offset: 0x10, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

/// @brief Field _initialized, offset: 0x14, size: 0x1, def value: None
 bool  ____initialized;

/// @brief Field _disposed, offset: 0x15, size: 0x1, def value: None
 bool  ____disposed;

/// @brief Field combiner, offset: 0x18, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  ___combiner;

/// @brief Field bonesToAddAndInCombined, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*  ___bonesToAddAndInCombined;

/// @brief Field masterList, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*  ___masterList;

/// @brief Field nBindPoses, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Matrix4x4>  ___nBindPoses;

/// @brief Field nbones, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___nbones;

/// @brief Field boneWeightSize, offset: 0x40, size: 0x4, def value: None
 int32_t  ___boneWeightSize;

/// @brief Field targBoneWeightIdx, offset: 0x44, size: 0x4, def value: None
 int32_t  ___targBoneWeightIdx;

/// @brief Field dgo2firstIdxInBoneWeightsArray, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*,int32_t>*  ___dgo2firstIdxInBoneWeightsArray;

/// @brief Field bonesPerVertex_nvarr, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  ___bonesPerVertex_nvarr;

/// @brief Field boneWeight1s_nvarr, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  ___boneWeight1s_nvarr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI, ___LOG_LEVEL) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI, ____initialized) == 0x14, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI, ____disposed) == 0x15, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI, ___combiner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI, ___bonesToAddAndInCombined) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI, ___masterList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI, ___nBindPoses) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI, ___nbones) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI, ___boneWeightSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI, ___targBoneWeightIdx) == 0x44, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI, ___dgo2firstIdxInBoneWeightsArray) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI, ___bonesPerVertex_nvarr) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI, ___boneWeight1s_nvarr) == 0x60, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI) == 0x70, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Collections.Generic.List`1<T>, System.Object, UnityEngine.BoneWeight, UnityEngine.Matrix4x4, UnityEngine.Transform
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MB_MeshCombinerSingle_BoneProcessor
class CORDL_TYPE MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor : public ::System::Object {
public:
// Declarations
/// @brief Field _didSetup, offset 0x6d, size 0x1 
 __declspec(property(get=__cordl_internal_get__didSetup, put=__cordl_internal_set__didSetup)) bool  _didSetup;

/// @brief Field _disposed, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _newBonesStartAtIdx, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__newBonesStartAtIdx, put=__cordl_internal_set__newBonesStartAtIdx)) int32_t  _newBonesStartAtIdx;

/// @brief Field boneAndBindPose2idx, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_boneAndBindPose2idx, put=__cordl_internal_set_boneAndBindPose2idx)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose,int32_t>*  boneAndBindPose2idx;

/// @brief Field boneIdx2dgoMap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_boneIdx2dgoMap, put=__cordl_internal_set_boneIdx2dgoMap)) ::ArrayW<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>  boneIdx2dgoMap;

/// @brief Field boneIdxsToDelete, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_boneIdxsToDelete, put=__cordl_internal_set_boneIdxsToDelete)) ::System::Collections::Generic::HashSet_1<int32_t>*  boneIdxsToDelete;

/// @brief Field boneWeights, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_boneWeights, put=__cordl_internal_set_boneWeights)) ::ArrayW<::UnityEngine::BoneWeight>  boneWeights;

/// @brief Field bonesToAdd, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_bonesToAdd, put=__cordl_internal_set_bonesToAdd)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*  bonesToAdd;

/// @brief Field combiner, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_combiner, put=__cordl_internal_set_combiner)) ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner;

/// @brief Field nbindPoses, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_nbindPoses, put=__cordl_internal_set_nbindPoses)) ::ArrayW<::UnityEngine::Matrix4x4>  nbindPoses;

/// @brief Field nboneWeights, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_nboneWeights, put=__cordl_internal_set_nboneWeights)) ::ArrayW<::UnityEngine::BoneWeight>  nboneWeights;

/// @brief Field nbones, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_nbones, put=__cordl_internal_set_nbones)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  nbones;

/// @brief Field oldBindPosesPreviousBake, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_oldBindPosesPreviousBake, put=__cordl_internal_set_oldBindPosesPreviousBake)) ::ArrayW<::UnityEngine::Matrix4x4>  oldBindPosesPreviousBake;

/// @brief Field oldBonesPreviousBake, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_oldBonesPreviousBake, put=__cordl_internal_set_oldBonesPreviousBake)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  oldBonesPreviousBake;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor"
constexpr operator  ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddBonesToNewBonesArrayAndAdjustBWIndexes1, addr 0x9d95b34, size 0x538, virtual true, abstract: false, final true
inline void AddBonesToNewBonesArrayAndAdjustBWIndexes1(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  vertsIdx) ;

/// @brief Method AllocateAndSetupSMRDataStructures, addr 0x9d93f48, size 0x1d0, virtual true, abstract: false, final true
inline void AllocateAndSetupSMRDataStructures(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  toAddDGOs, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, int32_t  newVertSize, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*  vertexAndTriangleProcessor) ;

/// @brief Method ApplySMRdataToMesh, addr 0x9d96d20, size 0x44, virtual true, abstract: false, final true
inline void ApplySMRdataToMesh(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::UnityEngine::Mesh*  mesh) ;

/// @brief Method ApplySMRdataToMeshToBuffer, addr 0x9d96d1c, size 0x4, virtual true, abstract: false, final true
inline void ApplySMRdataToMeshToBuffer() ;

/// @brief Method BuildBoneIdx2DGOMapIfNecessary, addr 0x9d939b4, size 0x1e8, virtual true, abstract: false, final true
inline void BuildBoneIdx2DGOMapIfNecessary(::ArrayW<int32_t>  _goToDelete) ;

/// @brief Method CollectBonesToAddForDGO, addr 0x9d9488c, size 0x988, virtual false, abstract: false, final false
inline bool CollectBonesToAddForDGO(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::UnityEngine::Renderer*  r, bool  noExtraBonesForMeshRenderers) ;

/// @brief Method CopyBoneWeightsFromMeshForDGOsInCombined, addr 0x9d96cf0, size 0x2c, virtual true, abstract: false, final true
inline void CopyBoneWeightsFromMeshForDGOsInCombined(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  targVidx) ;

/// @brief Method CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes, addr 0x9d953d0, size 0x468, virtual true, abstract: false, final true
inline void CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes(int32_t  totalDeleteVerts) ;

/// @brief Method CopyVertsNormsTansToBuffers, addr 0x9d96408, size 0x840, virtual true, abstract: false, final true
inline void CopyVertsNormsTansToBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, int32_t  vertsIdx, ::ArrayW<::UnityEngine::Vector3>  nnorms, ::ArrayW<::UnityEngine::Vector4>  ntangs, ::ArrayW<::UnityEngine::Vector3>  nverts, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  tangents, ::ArrayW<::UnityEngine::Vector3>  verts) ;

/// @brief Method CopyVertsNormsTansToBuffers, addr 0x9d963a0, size 0x68, virtual true, abstract: false, final true
inline void CopyVertsNormsTansToBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, int32_t  vertsIdx, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  nnorms, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  ntangs, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  nverts, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  normals, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  tangents, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  verts) ;

/// @brief Method DB_CheckIntegrity, addr 0x9d96d6c, size 0x490, virtual true, abstract: false, final true
inline bool DB_CheckIntegrity() ;

/// @brief Method Dispose, addr 0x9d93944, size 0x8, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x9d938bc, size 0x88, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method DisposeOfTemporarySMRData, addr 0x9d96c48, size 0xa8, virtual true, abstract: false, final true
inline void DisposeOfTemporarySMRData() ;

/// @brief Method GetBonesToAdd, addr 0x9d93964, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>* GetBonesToAdd() ;

/// @brief Method GetCachedSMRMeshData, addr 0x9d96d64, size 0x8, virtual true, abstract: false, final true
inline bool GetCachedSMRMeshData(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo) ;

/// @brief Method GetNewBonesLength, addr 0x9d94270, size 0x10c, virtual false, abstract: false, final false
inline int32_t GetNewBonesLength() ;

/// @brief Method GetNewBonesSize, addr 0x9d9394c, size 0x18, virtual true, abstract: false, final true
inline int32_t GetNewBonesSize() ;

/// @brief Method GetNumBonesToDelete, addr 0x9d9396c, size 0x48, virtual false, abstract: false, final false
inline int32_t GetNumBonesToDelete() ;

/// @brief Method InsertNewBonesIntoBonesArray, addr 0x9d95838, size 0x2fc, virtual true, abstract: false, final true
inline void InsertNewBonesIntoBonesArray() ;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor* New_ctor(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  cm) ;

/// @brief Method RemoveBonesForDgosWeAreDeleting, addr 0x9d93e1c, size 0x12c, virtual true, abstract: false, final true
inline void RemoveBonesForDgosWeAreDeleting(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo) ;

/// @brief Method UpdateGameObjects_ReadBoneWeightInfoFromCombinedMesh, addr 0x9d9437c, size 0x510, virtual true, abstract: false, final true
inline void UpdateGameObjects_ReadBoneWeightInfoFromCombinedMesh() ;

/// @brief Method UpdateGameObjects_UpdateBWIndexes, addr 0x9d9606c, size 0x334, virtual true, abstract: false, final true
inline void UpdateGameObjects_UpdateBWIndexes(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo) ;

/// @brief Method _CollectSkinningDataForDGOsInCombinedMesh, addr 0x9d94118, size 0x158, virtual false, abstract: false, final false
inline void _CollectSkinningDataForDGOsInCombinedMesh(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  objsToAdd) ;

constexpr bool const& __cordl_internal_get__didSetup() const;

constexpr bool& __cordl_internal_get__didSetup() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr int32_t const& __cordl_internal_get__newBonesStartAtIdx() const;

constexpr int32_t& __cordl_internal_get__newBonesStartAtIdx() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose,int32_t>* const& __cordl_internal_get_boneAndBindPose2idx() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose,int32_t>*& __cordl_internal_get_boneAndBindPose2idx() ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*> const& __cordl_internal_get_boneIdx2dgoMap() const;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>& __cordl_internal_get_boneIdx2dgoMap() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_boneIdxsToDelete() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_boneIdxsToDelete() ;

constexpr ::ArrayW<::UnityEngine::BoneWeight> const& __cordl_internal_get_boneWeights() const;

constexpr ::ArrayW<::UnityEngine::BoneWeight>& __cordl_internal_get_boneWeights() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>* const& __cordl_internal_get_bonesToAdd() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*& __cordl_internal_get_bonesToAdd() ;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* const& __cordl_internal_get_combiner() const;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*& __cordl_internal_get_combiner() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get_nbindPoses() const;

constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get_nbindPoses() ;

constexpr ::ArrayW<::UnityEngine::BoneWeight> const& __cordl_internal_get_nboneWeights() const;

constexpr ::ArrayW<::UnityEngine::BoneWeight>& __cordl_internal_get_nboneWeights() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_nbones() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_nbones() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get_oldBindPosesPreviousBake() const;

constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get_oldBindPosesPreviousBake() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_oldBonesPreviousBake() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_oldBonesPreviousBake() ;

constexpr void __cordl_internal_set__didSetup(bool  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__newBonesStartAtIdx(int32_t  value) ;

constexpr void __cordl_internal_set_boneAndBindPose2idx(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose,int32_t>*  value) ;

constexpr void __cordl_internal_set_boneIdx2dgoMap(::ArrayW<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>  value) ;

constexpr void __cordl_internal_set_boneIdxsToDelete(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_boneWeights(::ArrayW<::UnityEngine::BoneWeight>  value) ;

constexpr void __cordl_internal_set_bonesToAdd(::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*  value) ;

constexpr void __cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  value) ;

constexpr void __cordl_internal_set_nbindPoses(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set_nboneWeights(::ArrayW<::UnityEngine::BoneWeight>  value) ;

constexpr void __cordl_internal_set_nbones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_oldBindPosesPreviousBake(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set_oldBonesPreviousBake(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method _buildBoneIdx2dgoMap, addr 0x9d93b9c, size 0x244, virtual false, abstract: false, final false
inline ::ArrayW<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*> _buildBoneIdx2dgoMap() ;

/// @brief Method .ctor, addr 0x9d908dc, size 0x1b8, virtual false, abstract: false, final false
inline void _ctor(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  cm) ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor"
constexpr ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor* i___DigitalOpus__MB__Core__MB_IMeshCombinerSingle_BoneProcessor() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor(MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor(MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22628};

/// @brief Field combiner, offset: 0x10, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  ___combiner;

/// @brief Field boneIdx2dgoMap, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>  ___boneIdx2dgoMap;

/// @brief Field boneIdxsToDelete, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___boneIdxsToDelete;

/// @brief Field bonesToAdd, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*  ___bonesToAdd;

/// @brief Field boneAndBindPose2idx, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose,int32_t>*  ___boneAndBindPose2idx;

/// @brief Field oldBonesPreviousBake, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___oldBonesPreviousBake;

/// @brief Field oldBindPosesPreviousBake, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Matrix4x4>  ___oldBindPosesPreviousBake;

/// @brief Field nbones, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___nbones;

/// @brief Field nbindPoses, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Matrix4x4>  ___nbindPoses;

/// @brief Field nboneWeights, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::BoneWeight>  ___nboneWeights;

/// @brief Field boneWeights, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::BoneWeight>  ___boneWeights;

/// @brief Field _newBonesStartAtIdx, offset: 0x68, size: 0x4, def value: None
 int32_t  ____newBonesStartAtIdx;

/// @brief Field _disposed, offset: 0x6c, size: 0x1, def value: None
 bool  ____disposed;

/// @brief Field _didSetup, offset: 0x6d, size: 0x1, def value: None
 bool  ____didSetup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor, ___combiner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor, ___boneIdx2dgoMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor, ___boneIdxsToDelete) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor, ___bonesToAdd) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor, ___boneAndBindPose2idx) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor, ___oldBonesPreviousBake) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor, ___oldBindPosesPreviousBake) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor, ___nbones) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor, ___nbindPoses) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor, ___nboneWeights) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor, ___boneWeights) == 0x60, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor, ____newBonesStartAtIdx) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor, ____disposed) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor, ____didSetup) == 0x6d, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor) == 0x70, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies DigitalOpus.MB.Core.MB3_MeshCombinerSingle::MBBlendShape, System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MB_MeshCombinerSingle_BlendShapeProcessor
class CORDL_TYPE MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor : public ::System::Object {
public:
// Declarations
/// @brief Field _disposed, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field combiner, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_combiner, put=__cordl_internal_set_combiner)) ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner;

/// @brief Field nblendShapes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_nblendShapes, put=__cordl_internal_set_nblendShapes)) ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>  nblendShapes;

/// @brief Method AllocateBlendShapeArrayIfNecessary, addr 0x9d92858, size 0xf4, virtual false, abstract: false, final false
inline void AllocateBlendShapeArrayIfNecessary(int32_t  nBlendShapeSize) ;

/// @brief Method ApplyBlendShapeFramesToMeshAndBuildMap, addr 0x9d91f6c, size 0x564, virtual false, abstract: false, final false
inline void ApplyBlendShapeFramesToMeshAndBuildMap(int32_t  newVertCount) ;

/// @brief Method ApplyBlendShapeFramesToMeshAndBuildMap_MergeBlendShapesWithTheSameName, addr 0x9d92cd4, size 0xbe8, virtual false, abstract: false, final false
inline void ApplyBlendShapeFramesToMeshAndBuildMap_MergeBlendShapesWithTheSameName(int32_t  newVertCount) ;

/// @brief Method AssignNewBlendShapesToCombinerIfNecessary, addr 0x9d9294c, size 0xd8, virtual false, abstract: false, final false
inline void AssignNewBlendShapesToCombinerIfNecessary() ;

/// @brief Method CopyBlendShapesForNewMeshIfNecessary, addr 0x9d92b28, size 0x1ac, virtual false, abstract: false, final false
inline void CopyBlendShapesForNewMeshIfNecessary(::by_ref<int32_t>  targBlendShapeIdx, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::UnityEngine::Mesh*  mesh, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  meshChannelCache) ;

/// @brief Method CopyBlendShapesInCurrentMeshIfNecessary, addr 0x9d92a24, size 0x104, virtual false, abstract: false, final false
inline void CopyBlendShapesInCurrentMeshIfNecessary(::by_ref<int32_t>  targBlendShapeIdx, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo) ;

/// @brief Method Dispose, addr 0x9d86de4, size 0x8, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Dispose, addr 0x9d91960, size 0x48, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetBlendShapes, addr 0x9d919a8, size 0x528, virtual false, abstract: false, final false
static inline ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> GetBlendShapes(::UnityEngine::Mesh*  m, ::UnityEngine::GameObject*  gameObject, ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>*  meshID2MeshChannels) ;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor* New_ctor(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  cm) ;

/// @brief Method _BuildSrcShape2CombinedMap, addr 0x9d925c0, size 0x298, virtual false, abstract: false, final false
static inline void _BuildSrcShape2CombinedMap(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*  map, ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>  bs) ;

/// @brief Method _ConvertBlendShapeNameToOutputName, addr 0x9d924d0, size 0x44, virtual false, abstract: false, final false
static inline ::StringW _ConvertBlendShapeNameToOutputName(::StringW  bs) ;

/// @brief Method _ZeroArray, addr 0x9d92514, size 0xac, virtual false, abstract: false, final false
static inline void _ZeroArray(::ArrayW<::UnityEngine::Vector3>  arr, int32_t  idx, int32_t  length) ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* const& __cordl_internal_get_combiner() const;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*& __cordl_internal_get_combiner() ;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> const& __cordl_internal_get_nblendShapes() const;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>& __cordl_internal_get_nblendShapes() ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  value) ;

constexpr void __cordl_internal_set_nblendShapes(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>  value) ;

/// @brief Method .ctor, addr 0x9d8a5d0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  cm) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor(MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor(MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22627};

/// @brief Field combiner, offset: 0x10, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  ___combiner;

/// @brief Field nblendShapes, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>  ___nblendShapes;

/// @brief Field _disposed, offset: 0x20, size: 0x1, def value: None
 bool  ____disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor, ___combiner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor, ___nblendShapes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor, ____disposed) == 0x20, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor) == 0x28, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies DigitalOpus.MB.Core.MB3_MeshCombinerSingle::MBBlendShapeFrame, System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MBBlendShape
class CORDL_TYPE MB3_MeshCombinerSingle_MBBlendShape : public ::System::Object {
public:
// Declarations
/// @brief Field frames, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_frames, put=__cordl_internal_set_frames)) ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame*>  frames;

/// @brief Field gameObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObject, put=__cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Field indexInSource, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_indexInSource, put=__cordl_internal_set_indexInSource)) int32_t  indexInSource;

/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape* New_ctor() ;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame*> const& __cordl_internal_get_frames() const;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame*>& __cordl_internal_get_frames() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject() ;

constexpr int32_t const& __cordl_internal_get_indexInSource() const;

constexpr int32_t& __cordl_internal_get_indexInSource() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_frames(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame*>  value) ;

constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_indexInSource(int32_t  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0x9d91f5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_MBBlendShape() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MBBlendShape", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombinerSingle_MBBlendShape(MB3_MeshCombinerSingle_MBBlendShape && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MBBlendShape", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSingle_MBBlendShape(MB3_MeshCombinerSingle_MBBlendShape const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22637};

/// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObject;

/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field indexInSource, offset: 0x20, size: 0x4, def value: None
 int32_t  ___indexInSource;

/// @brief Field frames, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame*>  ___frames;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape, ___indexInSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape, ___frames) == 0x28, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape) == 0x30, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object, UnityEngine.Vector3
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MBBlendShapeFrame
class CORDL_TYPE MB3_MeshCombinerSingle_MBBlendShapeFrame : public ::System::Object {
public:
// Declarations
/// @brief Field frameWeight, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameWeight, put=__cordl_internal_set_frameWeight)) float_t  frameWeight;

/// @brief Field normals, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_normals, put=__cordl_internal_set_normals)) ::ArrayW<::UnityEngine::Vector3>  normals;

/// @brief Field tangents, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tangents, put=__cordl_internal_set_tangents)) ::ArrayW<::UnityEngine::Vector3>  tangents;

/// @brief Field vertices, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_vertices, put=__cordl_internal_set_vertices)) ::ArrayW<::UnityEngine::Vector3>  vertices;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame* New_ctor() ;

constexpr float_t const& __cordl_internal_get_frameWeight() const;

constexpr float_t& __cordl_internal_get_frameWeight() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_normals() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_normals() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_tangents() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_tangents() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_vertices() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_vertices() ;

constexpr void __cordl_internal_set_frameWeight(float_t  value) ;

constexpr void __cordl_internal_set_normals(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_tangents(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_vertices(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0x9d91f64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_MBBlendShapeFrame() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MBBlendShapeFrame", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombinerSingle_MBBlendShapeFrame(MB3_MeshCombinerSingle_MBBlendShapeFrame && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSingle_MBBlendShapeFrame", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSingle_MBBlendShapeFrame(MB3_MeshCombinerSingle_MBBlendShapeFrame const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22636};

/// @brief Field frameWeight, offset: 0x10, size: 0x4, def value: None
 float_t  ___frameWeight;

/// @brief Field vertices, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___vertices;

/// @brief Field normals, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___normals;

/// @brief Field tangents, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___tangents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame, ___frameWeight) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame, ___vertices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame, ___normals) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame, ___tangents) == 0x28, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame) == 0x30, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
