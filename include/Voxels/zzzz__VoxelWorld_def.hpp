#pragma once
// IWYU pragma private; include "Voxels/VoxelWorld.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeHashSet_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "UnityEngine/zzzz__BoundsInt_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Voxels/zzzz__VoxelWorld_WorldType_def.hpp"
#include "Voxels/zzzz__Voxel_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelWorld)
namespace GlobalNamespace {
struct VoxelWorld_WorldType;
}
namespace GlobalNamespace {
struct VoxelWorld___c__DisplayClass120_1;
}
namespace GlobalNamespace {
struct VoxelWorld___c__DisplayClass121_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
class Action_5;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::Mathematics {
struct int3;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
struct BoundsInt;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
namespace Voxels {
class ChunkComponent;
}
namespace Voxels {
struct ChunkDTO;
}
namespace Voxels {
class ChunkTaskSet;
}
namespace Voxels {
class Chunk;
}
namespace Voxels {
struct MeshGenerationMode;
}
namespace Voxels {
class VoxelGenerator;
}
namespace Voxels {
class VoxelMaterialSet;
}
namespace Voxels {
class VoxelWorld___c;
}
namespace Voxels {
class VoxelWorld___c__DisplayClass117_0;
}
namespace Voxels {
class VoxelWorld___c__DisplayClass119_0;
}
namespace Voxels {
class VoxelWorld___c__DisplayClass120_0;
}
namespace Voxels {
class VoxelWorld___c__DisplayClass121_0;
}
namespace Voxels {
struct Voxel;
}
// Forward declare root types
namespace Voxels {
class VoxelWorld;
}
namespace Voxels {
class VoxelWorld___c;
}
namespace Voxels {
class VoxelWorld___c__DisplayClass117_0;
}
namespace Voxels {
class VoxelWorld___c__DisplayClass119_0;
}
namespace Voxels {
class VoxelWorld___c__DisplayClass120_0;
}
namespace Voxels {
class VoxelWorld___c__DisplayClass121_0;
}
// Write type traits
MARK_REF_T(::Voxels::VoxelWorld*);
MARK_REF_T(::Voxels::VoxelWorld___c*);
MARK_REF_T(::Voxels::VoxelWorld___c__DisplayClass117_0*);
MARK_REF_T(::Voxels::VoxelWorld___c__DisplayClass119_0*);
MARK_REF_T(::Voxels::VoxelWorld___c__DisplayClass120_0*);
MARK_REF_T(::Voxels::VoxelWorld___c__DisplayClass121_0*);
DEFINE_IL2CPP_CLASS(::Voxels::VoxelWorld*, "Voxels", "VoxelWorld");
DEFINE_IL2CPP_CLASS(::Voxels::VoxelWorld___c*, "Voxels", "VoxelWorld/<>c");
DEFINE_IL2CPP_CLASS(::Voxels::VoxelWorld___c__DisplayClass117_0*, "Voxels", "VoxelWorld/<>c__DisplayClass117_0");
DEFINE_IL2CPP_CLASS(::Voxels::VoxelWorld___c__DisplayClass119_0*, "Voxels", "VoxelWorld/<>c__DisplayClass119_0");
DEFINE_IL2CPP_CLASS(::Voxels::VoxelWorld___c__DisplayClass120_0*, "Voxels", "VoxelWorld/<>c__DisplayClass120_0");
DEFINE_IL2CPP_CLASS(::Voxels::VoxelWorld___c__DisplayClass121_0*, "Voxels", "VoxelWorld/<>c__DisplayClass121_0");
// [DefaultExecutionOrder(5)]
// Dependencies Unity.Collections.NativeHashSet`1<T>, Unity.Collections.NativeList`1<T>, Unity.Jobs.JobHandle, Unity.Mathematics.int3, UnityEngine.BoundsInt, UnityEngine.MonoBehaviour, Voxels.VoxelWorld::WorldType
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelWorld
class CORDL_TYPE VoxelWorld : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using WorldType = ::GlobalNamespace::VoxelWorld_WorldType;

using __c__DisplayClass120_1 = ::GlobalNamespace::VoxelWorld___c__DisplayClass120_1;

using __c__DisplayClass121_1 = ::GlobalNamespace::VoxelWorld___c__DisplayClass121_1;

using __c = ::Voxels::VoxelWorld___c;

using __c__DisplayClass117_0 = ::Voxels::VoxelWorld___c__DisplayClass117_0;

using __c__DisplayClass119_0 = ::Voxels::VoxelWorld___c__DisplayClass119_0;

using __c__DisplayClass120_0 = ::Voxels::VoxelWorld___c__DisplayClass120_0;

using __c__DisplayClass121_0 = ::Voxels::VoxelWorld___c__DisplayClass121_0;

 __declspec(property(get=get_ChunkSize, put=set_ChunkSize)) ::Unity::Mathematics::int3  ChunkSize;

 __declspec(property(get=get_Chunks)) ::System::Collections::Generic::IEnumerable_1<::Voxels::Chunk*>*  Chunks;

 __declspec(property(get=get_Id, put=set_Id)) int32_t  Id;

 __declspec(property(get=get_Initialized, put=set_Initialized)) bool  Initialized;

 __declspec(property(get=get_IsInfinite)) bool  IsInfinite;

/// @brief Field MaterialSet, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaterialSet, put=__cordl_internal_set_MaterialSet)) ::UnityW<::Voxels::VoxelMaterialSet>  MaterialSet;

 __declspec(property(get=get_MeshGenerationMode)) ::Voxels::MeshGenerationMode  MeshGenerationMode;

 __declspec(property(get=get_Root)) ::UnityW<::UnityEngine::Transform>  Root;

 __declspec(property(get=get_Scale)) float_t  Scale;

 __declspec(property(get=get_UpdateWorld, put=set_UpdateWorld)) bool  UpdateWorld;

 __declspec(property(get=get_VoxelCount, put=set_VoxelCount)) int32_t  VoxelCount;

 __declspec(property(get=get_VoxelDimension, put=set_VoxelDimension)) int32_t  VoxelDimension;

 __declspec(property(get=get_WorldBounds)) ::UnityEngine::BoundsInt  WorldBounds;

 __declspec(property(get=get_WorldGenerationComplete)) bool  WorldGenerationComplete;

/// @brief Field WorldLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WorldLookup, put=setStaticF_WorldLookup)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Voxels::VoxelWorld>>*  WorldLookup;

/// @brief Field <ChunkSize>k__BackingField, offset 0xfc, size 0xc 
 __declspec(property(get=__cordl_internal_get__ChunkSize_k__BackingField, put=__cordl_internal_set__ChunkSize_k__BackingField)) ::Unity::Mathematics::int3  _ChunkSize_k__BackingField;

/// @brief Field <Id>k__BackingField, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get__Id_k__BackingField, put=__cordl_internal_set__Id_k__BackingField)) int32_t  _Id_k__BackingField;

/// @brief Field <Initialized>k__BackingField, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get__Initialized_k__BackingField, put=__cordl_internal_set__Initialized_k__BackingField)) bool  _Initialized_k__BackingField;

/// @brief Field <VoxelCount>k__BackingField, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get__VoxelCount_k__BackingField, put=__cordl_internal_set__VoxelCount_k__BackingField)) int32_t  _VoxelCount_k__BackingField;

/// @brief Field <VoxelDimension>k__BackingField, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get__VoxelDimension_k__BackingField, put=__cordl_internal_set__VoxelDimension_k__BackingField)) int32_t  _VoxelDimension_k__BackingField;

/// @brief Field _chunkComponentPool, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__chunkComponentPool, put=__cordl_internal_set__chunkComponentPool)) ::UnityEngine::Pool::ObjectPool_1<::UnityW<::Voxels::ChunkComponent>>*  _chunkComponentPool;

/// @brief Field _chunkPool, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__chunkPool, put=__cordl_internal_set__chunkPool)) ::UnityEngine::Pool::ObjectPool_1<::Voxels::Chunk*>*  _chunkPool;

/// @brief Field _meshPool, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshPool, put=__cordl_internal_set__meshPool)) ::UnityEngine::Pool::ObjectPool_1<::UnityW<::UnityEngine::Mesh>>*  _meshPool;

/// @brief Field _opAnyChanged, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__opAnyChanged, put=setStaticF__opAnyChanged)) bool  _opAnyChanged;

/// @brief Field _opBounds, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF__opBounds, put=setStaticF__opBounds)) ::UnityEngine::BoundsInt  _opBounds;

/// @brief Field _opChangedChunks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__opChangedChunks, put=setStaticF__opChangedChunks)) ::System::Collections::Generic::List_1<::Voxels::Chunk*>*  _opChangedChunks;

/// @brief Field _opChunk, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__opChunk, put=setStaticF__opChunk)) ::Voxels::Chunk*  _opChunk;

/// @brief Field _opChunkJobs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__opChunkJobs, put=setStaticF__opChunkJobs)) ::System::Collections::Generic::List_1<::Voxels::ChunkTaskSet*>*  _opChunkJobs;

/// @brief Field _opChunks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__opChunks, put=setStaticF__opChunks)) ::System::Collections::Generic::List_1<::Voxels::Chunk*>*  _opChunks;

/// @brief Field _opSetDataFunction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__opSetDataFunction, put=setStaticF__opSetDataFunction)) ::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*  _opSetDataFunction;

/// @brief Field _tempChunkList, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__tempChunkList, put=__cordl_internal_set__tempChunkList)) ::System::Collections::Generic::List_1<::Voxels::Chunk*>*  _tempChunkList;

/// @brief Field _updateWorld, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get__updateWorld, put=__cordl_internal_set__updateWorld)) bool  _updateWorld;

/// @brief Field chunkJobs, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_chunkJobs, put=__cordl_internal_set_chunkJobs)) ::System::Collections::Generic::Dictionary_2<::Unity::Mathematics::int3,::Voxels::ChunkTaskSet*>*  chunkJobs;

/// @brief Field chunkPrefab, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_chunkPrefab, put=__cordl_internal_set_chunkPrefab)) ::UnityW<::Voxels::ChunkComponent>  chunkPrefab;

/// @brief Field chunkSize, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_chunkSize, put=__cordl_internal_set_chunkSize)) int32_t  chunkSize;

/// @brief Field chunkSortIndex, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_chunkSortIndex, put=__cordl_internal_set_chunkSortIndex)) int32_t  chunkSortIndex;

/// @brief Field chunks, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_chunks, put=__cordl_internal_set_chunks)) ::System::Collections::Generic::Dictionary_2<::Unity::Mathematics::int3,::Voxels::Chunk*>*  chunks;

/// @brief Field chunksToGenerate, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_chunksToGenerate, put=__cordl_internal_set_chunksToGenerate)) ::Unity::Collections::NativeHashSet_1<::Unity::Mathematics::int3>  chunksToGenerate;

/// @brief Field chunksToRemove, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_chunksToRemove, put=__cordl_internal_set_chunksToRemove)) ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*  chunksToRemove;

/// @brief Field completedJobs, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_completedJobs, put=__cordl_internal_set_completedJobs)) ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*  completedJobs;

/// @brief Field generationQueueChanged, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_generationQueueChanged, put=__cordl_internal_set_generationQueueChanged)) bool  generationQueueChanged;

/// @brief Field generator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_generator, put=__cordl_internal_set_generator)) ::Voxels::VoxelGenerator*  generator;

/// @brief Field maxJobs, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxJobs, put=__cordl_internal_set_maxJobs)) int32_t  maxJobs;

/// @brief Field persistChanges, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get_persistChanges, put=__cordl_internal_set_persistChanges)) bool  persistChanges;

/// @brief Field playerChunk, offset 0xbc, size 0xc 
 __declspec(property(get=__cordl_internal_get_playerChunk, put=__cordl_internal_set_playerChunk)) ::Unity::Mathematics::int3  playerChunk;

/// @brief Field registerAsSceneWorld, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_registerAsSceneWorld, put=__cordl_internal_set_registerAsSceneWorld)) bool  registerAsSceneWorld;

/// @brief Field root, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_root, put=__cordl_internal_set_root)) ::UnityW<::UnityEngine::Transform>  root;

/// @brief Field sortJobHandle, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get_sortJobHandle, put=__cordl_internal_set_sortJobHandle)) ::Unity::Jobs::JobHandle  sortJobHandle;

/// @brief Field sortedChunkCount, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_sortedChunkCount, put=__cordl_internal_set_sortedChunkCount)) int32_t  sortedChunkCount;

/// @brief Field sortedChunks, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_sortedChunks, put=__cordl_internal_set_sortedChunks)) ::Unity::Collections::NativeList_1<::Unity::Mathematics::int3>  sortedChunks;

/// @brief Field target, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field viewDistance, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_viewDistance, put=__cordl_internal_set_viewDistance)) int32_t  viewDistance;

/// @brief Field worldBounds, offset 0x34, size 0x18 
 __declspec(property(get=__cordl_internal_get_worldBounds, put=__cordl_internal_set_worldBounds)) ::UnityEngine::BoundsInt  worldBounds;

/// @brief Field worldScale, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_worldScale, put=__cordl_internal_set_worldScale)) float_t  worldScale;

/// @brief Field worldType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_worldType, put=__cordl_internal_set_worldType)) ::GlobalNamespace::VoxelWorld_WorldType  worldType;

/// @brief Method AddChunkTask, addr 0x5dbcc60, size 0x178, virtual false, abstract: false, final false
inline void AddChunkTask(::Voxels::ChunkTaskSet*  chunkTask) ;

/// @brief Method AssignMesh, addr 0x5dbd1e4, size 0x2bc, virtual false, abstract: false, final false
inline void AssignMesh(::Voxels::Chunk*  chunk) ;

/// @brief Method Awake, addr 0x5db92d4, size 0x270, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BoundsChunksLoaded, addr 0x5dbf700, size 0x158, virtual false, abstract: false, final false
inline bool BoundsChunksLoaded(::UnityEngine::BoundsInt  localWorldBounds, bool  includeLLC) ;

/// @brief Method ChunksHaveJobs, addr 0x5dbf920, size 0x2f8, virtual false, abstract: false, final false
inline bool ChunksHaveJobs(::System::Collections::Generic::IList_1<::Voxels::Chunk*>*  chunks) ;

/// @brief Method ChunksHaveJobs, addr 0x5dbf8dc, size 0x44, virtual false, abstract: false, final false
inline bool ChunksHaveJobs(::UnityEngine::BoundsInt  worldBounds) ;

/// @brief Method ClampToWorldBounds, addr 0x5dbf858, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3Int ClampToWorldBounds(::UnityEngine::Vector3Int  coord) ;

/// @brief Method ConfigurePools, addr 0x5db9c88, size 0x584, virtual false, abstract: false, final false
inline void ConfigurePools() ;

/// @brief Method CreateChunkMesh, addr 0x5dbd764, size 0x28, virtual false, abstract: false, final false
inline void CreateChunkMesh(::Voxels::Chunk*  chunk) ;

/// @brief Method CreateMesh, addr 0x5dbcf28, size 0x2bc, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> CreateMesh(::Voxels::Chunk*  chunk) ;

/// @brief Method CreateOrLoadChunk, addr 0x5dbbc84, size 0xe8, virtual false, abstract: false, final false
inline ::Voxels::Chunk* CreateOrLoadChunk(::Unity::Mathematics::int3  chunkId) ;

/// @brief Method ExistsFor, addr 0x5db8e94, size 0x7c, virtual false, abstract: false, final false
static inline bool ExistsFor(::UnityEngine::Component*  component) ;

/// @brief Method ExistsFor, addr 0x5db8e24, size 0x70, virtual false, abstract: false, final false
static inline bool ExistsFor(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method ExistsFor, addr 0x5db8d8c, size 0x98, virtual false, abstract: false, final false
static inline bool ExistsFor(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method FinalizeOperationOnChunks, addr 0x5dbdf04, size 0x4bc, virtual false, abstract: false, final false
inline void FinalizeOperationOnChunks(bool  immediate) ;

/// @brief Method ForEachChunk, addr 0x5dbe50c, size 0x180, virtual false, abstract: false, final false
inline void ForEachChunk(::System::Collections::Generic::List_1<::Voxels::Chunk*>*  opChunks, ::System::Action*  action) ;

/// @brief Method ForEachChunkInBounds, addr 0x5dbe9f8, size 0x420, virtual false, abstract: false, final false
inline void ForEachChunkInBounds(::UnityEngine::BoundsInt  bounds, ::System::Action*  action) ;

/// @brief Method ForEachSpecifiedVoxelInChunk, addr 0x5dc0344, size 0x188, virtual false, abstract: false, final false
inline void ForEachSpecifiedVoxelInChunk(::ArrayW<::Unity::Mathematics::int3>  voxels, ::Voxels::Chunk*  chunk, ::System::Action_5<::Unity::Mathematics::int3,::Unity::Mathematics::int3,int32_t,uint8_t,uint8_t>*  action) ;

/// @brief Method ForEachVoxelInChunkInBounds, addr 0x5dbfd60, size 0x2ec, virtual false, abstract: false, final false
inline void ForEachVoxelInChunkInBounds(::UnityEngine::BoundsInt  worldBounds, ::Voxels::Chunk*  chunk, ::System::Action_4<::Unity::Mathematics::int3,::Unity::Mathematics::int3,int32_t,uint8_t>*  action) ;

/// @brief Method ForEachVoxelInChunkInBounds, addr 0x5dc004c, size 0x2f8, virtual false, abstract: false, final false
inline void ForEachVoxelInChunkInBounds(::UnityEngine::BoundsInt  worldBounds, ::Voxels::Chunk*  chunk, ::System::Action_5<::Unity::Mathematics::int3,::Unity::Mathematics::int3,int32_t,uint8_t,uint8_t>*  action) ;

/// @brief Method GetBoundsFor, addr 0x5dbe8f8, size 0x100, virtual false, abstract: false, final false
static inline ::UnityEngine::BoundsInt GetBoundsFor(::ArrayW<::Unity::Mathematics::int3>  voxels) ;

/// @brief Method GetChunkBoundsForLocalBounds, addr 0x5dbc06c, size 0x20c, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::Unity::Mathematics::int3,::Unity::Mathematics::int3> GetChunkBoundsForLocalBounds(::UnityEngine::BoundsInt  worldBounds, bool  includeLLC) ;

/// @brief Method GetChunkForLocalPosition, addr 0x5dbfc18, size 0x9c, virtual false, abstract: false, final false
inline ::Voxels::Chunk* GetChunkForLocalPosition(::Unity::Mathematics::int3  worldPosition) ;

/// @brief Method GetChunkForLocalPosition, addr 0x5dbfcb4, size 0xac, virtual false, abstract: false, final false
inline ::Voxels::Chunk* GetChunkForLocalPosition(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method GetChunkIdForLocalPosition, addr 0x5dbc2c8, size 0x44, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 GetChunkIdForLocalPosition(::UnityEngine::Vector3  voxelWorldPosition) ;

/// @brief Method GetChunkIdForWorldPosition, addr 0x5dbc278, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 GetChunkIdForWorldPosition(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method GetChunksForBounds, addr 0x5dbdb14, size 0x3f0, virtual false, abstract: false, final false
inline void GetChunksForBounds(::UnityEngine::BoundsInt  worldBounds, ::by_ref<::System::Collections::Generic::List_1<::Voxels::Chunk*>*>  list) ;

/// @brief Method GetDensityAt, addr 0x5db2a90, size 0xf4, virtual false, abstract: false, final false
inline uint8_t GetDensityAt(::Unity::Mathematics::int3  voxelWorldPosition, uint8_t  defaultDensity) ;

/// @brief Method GetDensityAt, addr 0x5dc04cc, size 0x44, virtual false, abstract: false, final false
inline uint8_t GetDensityAt(::UnityEngine::Vector3  voxelWorldPosition) ;

/// @brief Method GetFor, addr 0x5db9258, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityW<::Voxels::VoxelWorld> GetFor(::UnityEngine::Component*  component) ;

/// @brief Method GetFor, addr 0x5db1b60, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::Voxels::VoxelWorld> GetFor(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetFor, addr 0x5db9128, size 0x130, virtual false, abstract: false, final false
static inline ::UnityW<::Voxels::VoxelWorld> GetFor(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method GetLocalPosition, addr 0x5dc0708, size 0x150, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetLocalPosition(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method GetPooledChunk, addr 0x5dbbc00, size 0x84, virtual false, abstract: false, final false
inline ::Voxels::Chunk* GetPooledChunk(::Unity::Mathematics::int3  chunkId) ;

/// @brief Method GetVoxelData, addr 0x5dbf2d4, size 0x124, virtual false, abstract: false, final false
inline ::Voxels::Voxel GetVoxelData(::Unity::Mathematics::int3  voxelId) ;

/// @brief Method GetVoxelDensity, addr 0x5dbf1d4, size 0x100, virtual false, abstract: false, final false
inline uint8_t GetVoxelDensity(::Unity::Mathematics::int3  voxelId) ;

/// @brief Method GetVoxelForLocalPosition, addr 0x5dc0a00, size 0x58, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 GetVoxelForLocalPosition(::UnityEngine::Vector3  localPosition) ;

/// @brief Method GetVoxelForWorldPosition, addr 0x5dc09a0, size 0x60, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 GetVoxelForWorldPosition(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method GetVoxelMaterial, addr 0x5dbf0d4, size 0x100, virtual false, abstract: false, final false
inline uint8_t GetVoxelMaterial(::Unity::Mathematics::int3  voxelId) ;

/// @brief Method GetWorldPosition, addr 0x5dc0988, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetWorldPosition(::Unity::Mathematics::int3  localPosition) ;

/// @brief Method GetWorldPosition, addr 0x5dc0858, size 0x130, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetWorldPosition(::UnityEngine::Vector3  localPosition) ;

/// @brief Method HandleJobCompletion, addr 0x5dbac8c, size 0x260, virtual false, abstract: false, final false
inline void HandleJobCompletion(::Voxels::ChunkTaskSet*  chunkTask) ;

/// @brief Method MeshChunkImmediately, addr 0x5dbcdd8, size 0x150, virtual false, abstract: false, final false
inline void MeshChunkImmediately(::Voxels::Chunk*  chunk) ;

/// @brief Method MeshChunks, addr 0x5dbd4a0, size 0x2c4, virtual false, abstract: false, final false
inline void MeshChunks(::System::Collections::Generic::List_1<::Voxels::Chunk*>*  chunks) ;

static inline ::Voxels::VoxelWorld* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5dba300, size 0x204, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5dba264, size 0x9c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x5dc0a60, size 0x270, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x5dba20c, size 0x58, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OptimizeChunkSize, addr 0x5dbc890, size 0x16c, virtual false, abstract: false, final false
inline void OptimizeChunkSize() ;

/// @brief Method OptimizeWorld, addr 0x5db974c, size 0x53c, virtual false, abstract: false, final false
inline void OptimizeWorld() ;

/// @brief Method PrepForOperationOnChunks, addr 0x5dbd78c, size 0x388, virtual false, abstract: false, final false
inline void PrepForOperationOnChunks(::UnityEngine::BoundsInt  bounds) ;

/// @brief Method ProcessChunk, addr 0x5dbaeec, size 0x4ac, virtual false, abstract: false, final false
inline void ProcessChunk(::Unity::Mathematics::int3  chunkId) ;

/// @brief Method RegenerateAllChunks, addr 0x5dbc328, size 0x320, virtual false, abstract: false, final false
inline void RegenerateAllChunks() ;

/// @brief Method RemoveChunkTask, addr 0x5dbcaf4, size 0x16c, virtual false, abstract: false, final false
inline void RemoveChunkTask(::Voxels::ChunkTaskSet*  chunkTask) ;

/// @brief Method ResetChunk, addr 0x5dbc9fc, size 0xf8, virtual false, abstract: false, final false
inline void ResetChunk(::Unity::Mathematics::int3  chunkId) ;

/// @brief Method ResetWorld, addr 0x5dbc7b8, size 0xd8, virtual false, abstract: false, final false
static inline void ResetWorld(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method Save, addr 0x5dbbf60, size 0xa4, virtual false, abstract: false, final false
inline void Save(::Voxels::Chunk*  chunk) ;

/// @brief Method SaveChunks, addr 0x5dba504, size 0x1fc, virtual false, abstract: false, final false
inline void SaveChunks() ;

/// @brief Method SaveWorld, addr 0x5dbc648, size 0x170, virtual false, abstract: false, final false
static inline void SaveWorld(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method SetChunkFrom, addr 0x5dbbd6c, size 0xe4, virtual false, abstract: false, final false
inline void SetChunkFrom(::Voxels::ChunkDTO  dto) ;

/// @brief Method SetDensityAt, addr 0x5dc0554, size 0x1b4, virtual false, abstract: false, final false
inline void SetDensityAt(::Unity::Mathematics::int3  voxelWorldPosition, uint8_t  density) ;

/// @brief Method SetDensityAt, addr 0x5dc0510, size 0x44, virtual false, abstract: false, final false
inline void SetDensityAt(::UnityEngine::Vector3  voxelWorldPosition, uint8_t  density) ;

/// @brief Method SetFor, addr 0x5db90a4, size 0x84, virtual false, abstract: false, final false
static inline void SetFor(::UnityEngine::Component*  component, ::Voxels::VoxelWorld*  voxelWorld) ;

/// @brief Method SetFor, addr 0x5db902c, size 0x78, virtual false, abstract: false, final false
static inline void SetFor(::UnityEngine::GameObject*  gameObject, ::Voxels::VoxelWorld*  voxelWorld) ;

/// @brief Method SetFor, addr 0x5db8f10, size 0x11c, virtual false, abstract: false, final false
static inline void SetFor(::UnityEngine::SceneManagement::Scene  scene, ::Voxels::VoxelWorld*  voxelWorld) ;

/// @brief Method SetVoxelData, addr 0x5dbf5f0, size 0x110, virtual false, abstract: false, final false
inline void SetVoxelData(::Unity::Mathematics::int3  voxelId, ::Voxels::Voxel  data) ;

/// @brief Method SetVoxelDataCustom, addr 0x5dbe794, size 0x164, virtual false, abstract: false, final false
inline void SetVoxelDataCustom(::ArrayW<::Unity::Mathematics::int3>  voxels, /* [TupleElementNames(new[] { "density", "material", "density", "material" })] */ ::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*  setDataFunction, bool  immediate) ;

/// @brief Method SetVoxelDataCustom, addr 0x5dbe68c, size 0x108, virtual false, abstract: false, final false
inline void SetVoxelDataCustom(::UnityEngine::BoundsInt  worldBounds, /* [TupleElementNames(new[] { "density", "material", "density", "material" })] */ ::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*  setDataFunction, bool  immediate) ;

/// @brief Method SetVoxelDensity, addr 0x5dbefc8, size 0x10c, virtual false, abstract: false, final false
inline void SetVoxelDensity(::UnityEngine::BoundsInt  bounds, ::ArrayW<uint8_t>  data, bool  immediate) ;

/// @brief Method SetVoxelDensity, addr 0x5dbf4f4, size 0xfc, virtual false, abstract: false, final false
inline void SetVoxelDensity(::Unity::Mathematics::int3  voxelId, uint8_t  density) ;

/// @brief Method SetVoxelDensityCustom, addr 0x5dbe3c0, size 0x14c, virtual false, abstract: false, final false
inline void SetVoxelDensityCustom(::UnityEngine::BoundsInt  worldBounds, ::System::Func_3<::Unity::Mathematics::int3,uint8_t,uint8_t>*  setDensityFunction, bool  immediate) ;

/// @brief Method SetVoxelMaterial, addr 0x5dbf3f8, size 0xfc, virtual false, abstract: false, final false
inline void SetVoxelMaterial(::Unity::Mathematics::int3  voxelId, uint8_t  material) ;

/// @brief Method SetVoxels, addr 0x5dbee18, size 0x1b0, virtual false, abstract: false, final false
inline void SetVoxels(::UnityEngine::BoundsInt  bounds, ::ArrayW<::Voxels::Voxel>  voxels, bool  immediate) ;

/// @brief Method SetWorldBounds, addr 0x5db0d08, size 0x1c, virtual false, abstract: false, final false
inline void SetWorldBounds(::UnityEngine::BoundsInt  bounds) ;

/// @brief Method SetWorldType, addr 0x5dbc30c, size 0x1c, virtual false, abstract: false, final false
inline void SetWorldType(::GlobalNamespace::VoxelWorld_WorldType  newWorldType, bool  force) ;

/// @brief Method Start, addr 0x5db9544, size 0x208, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryGetChunk, addr 0x5dbbb90, size 0x70, virtual false, abstract: false, final false
inline bool TryGetChunk(::Unity::Mathematics::int3  chunkId, ::by_ref<::Voxels::Chunk*>  chunk) ;

/// @brief Method Unload, addr 0x5dbc004, size 0x68, virtual false, abstract: false, final false
inline void Unload(::Voxels::Chunk*  chunk) ;

/// @brief Method Update, addr 0x5dba700, size 0x58c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateChunkFrom, addr 0x5dbbe50, size 0x110, virtual false, abstract: false, final false
inline void UpdateChunkFrom(::Voxels::ChunkDTO  dto) ;

/// @brief Method UpdateVisibleChunks, addr 0x5dbb398, size 0x7f8, virtual false, abstract: false, final false
inline void UpdateVisibleChunks(bool  isFirstTime) ;

/// [CompilerGenerated]
/// @brief Method <ConfigurePools>b__81_0, addr 0x5dc0fd0, size 0xa0, virtual false, abstract: false, final false
inline ::Voxels::Chunk* _ConfigurePools_b__81_0() ;

/// [CompilerGenerated]
/// @brief Method <ConfigurePools>b__81_2, addr 0x5dc1070, size 0xb0, virtual false, abstract: false, final false
inline void _ConfigurePools_b__81_2(::Voxels::Chunk*  chunk) ;

/// [CompilerGenerated]
/// @brief Method <ConfigurePools>b__81_4, addr 0x5dc1120, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::Voxels::ChunkComponent> _ConfigurePools_b__81_4() ;

/// [CompilerGenerated]
/// @brief Method <ConfigurePools>b__81_5, addr 0x5dc1190, size 0x70, virtual false, abstract: false, final false
inline void _ConfigurePools_b__81_5(::Voxels::ChunkComponent*  chunkComponent) ;

/// [CompilerGenerated]
/// @brief Method <ConfigurePools>b__81_6, addr 0x5dc1200, size 0x104, virtual false, abstract: false, final false
inline void _ConfigurePools_b__81_6(::Voxels::ChunkComponent*  chunkComponent) ;

/// [CompilerGenerated]
/// @brief Method <SetVoxelDataCustom>g__SetVoxelDataInChunk|118_0, addr 0x5dc1304, size 0x190, virtual false, abstract: false, final false
inline void _SetVoxelDataCustom_g__SetVoxelDataInChunk_118_0() ;

/// [CompilerGenerated]
/// @brief Method <SetVoxelDataCustom>g__SetVoxelData|118_1, addr 0x5dc1494, size 0x1130, virtual false, abstract: false, final false
static inline void _SetVoxelDataCustom_g__SetVoxelData_118_1(::Unity::Mathematics::int3  voxelWorldPosition, ::Unity::Mathematics::int3  voxelLocalPosition, int32_t  voxelIndex, uint8_t  density, uint8_t  material) ;

constexpr ::UnityW<::Voxels::VoxelMaterialSet> const& __cordl_internal_get_MaterialSet() const;

constexpr ::UnityW<::Voxels::VoxelMaterialSet>& __cordl_internal_get_MaterialSet() ;

constexpr ::Unity::Mathematics::int3 const& __cordl_internal_get__ChunkSize_k__BackingField() const;

constexpr ::Unity::Mathematics::int3& __cordl_internal_get__ChunkSize_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Id_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Id_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Initialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__Initialized_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__VoxelCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__VoxelCount_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__VoxelDimension_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__VoxelDimension_k__BackingField() ;

constexpr ::UnityEngine::Pool::ObjectPool_1<::UnityW<::Voxels::ChunkComponent>>* const& __cordl_internal_get__chunkComponentPool() const;

constexpr ::UnityEngine::Pool::ObjectPool_1<::UnityW<::Voxels::ChunkComponent>>*& __cordl_internal_get__chunkComponentPool() ;

constexpr ::UnityEngine::Pool::ObjectPool_1<::Voxels::Chunk*>* const& __cordl_internal_get__chunkPool() const;

constexpr ::UnityEngine::Pool::ObjectPool_1<::Voxels::Chunk*>*& __cordl_internal_get__chunkPool() ;

constexpr ::UnityEngine::Pool::ObjectPool_1<::UnityW<::UnityEngine::Mesh>>* const& __cordl_internal_get__meshPool() const;

constexpr ::UnityEngine::Pool::ObjectPool_1<::UnityW<::UnityEngine::Mesh>>*& __cordl_internal_get__meshPool() ;

constexpr ::System::Collections::Generic::List_1<::Voxels::Chunk*>* const& __cordl_internal_get__tempChunkList() const;

constexpr ::System::Collections::Generic::List_1<::Voxels::Chunk*>*& __cordl_internal_get__tempChunkList() ;

constexpr bool const& __cordl_internal_get__updateWorld() const;

constexpr bool& __cordl_internal_get__updateWorld() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Unity::Mathematics::int3,::Voxels::ChunkTaskSet*>* const& __cordl_internal_get_chunkJobs() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Unity::Mathematics::int3,::Voxels::ChunkTaskSet*>*& __cordl_internal_get_chunkJobs() ;

constexpr ::UnityW<::Voxels::ChunkComponent> const& __cordl_internal_get_chunkPrefab() const;

constexpr ::UnityW<::Voxels::ChunkComponent>& __cordl_internal_get_chunkPrefab() ;

constexpr int32_t const& __cordl_internal_get_chunkSize() const;

constexpr int32_t& __cordl_internal_get_chunkSize() ;

constexpr int32_t const& __cordl_internal_get_chunkSortIndex() const;

constexpr int32_t& __cordl_internal_get_chunkSortIndex() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Unity::Mathematics::int3,::Voxels::Chunk*>* const& __cordl_internal_get_chunks() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Unity::Mathematics::int3,::Voxels::Chunk*>*& __cordl_internal_get_chunks() ;

constexpr ::Unity::Collections::NativeHashSet_1<::Unity::Mathematics::int3> const& __cordl_internal_get_chunksToGenerate() const;

constexpr ::Unity::Collections::NativeHashSet_1<::Unity::Mathematics::int3>& __cordl_internal_get_chunksToGenerate() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>* const& __cordl_internal_get_chunksToRemove() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*& __cordl_internal_get_chunksToRemove() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>* const& __cordl_internal_get_completedJobs() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*& __cordl_internal_get_completedJobs() ;

constexpr bool const& __cordl_internal_get_generationQueueChanged() const;

constexpr bool& __cordl_internal_get_generationQueueChanged() ;

constexpr ::Voxels::VoxelGenerator* const& __cordl_internal_get_generator() const;

constexpr ::Voxels::VoxelGenerator*& __cordl_internal_get_generator() ;

constexpr int32_t const& __cordl_internal_get_maxJobs() const;

constexpr int32_t& __cordl_internal_get_maxJobs() ;

constexpr bool const& __cordl_internal_get_persistChanges() const;

constexpr bool& __cordl_internal_get_persistChanges() ;

constexpr ::Unity::Mathematics::int3 const& __cordl_internal_get_playerChunk() const;

constexpr ::Unity::Mathematics::int3& __cordl_internal_get_playerChunk() ;

constexpr bool const& __cordl_internal_get_registerAsSceneWorld() const;

constexpr bool& __cordl_internal_get_registerAsSceneWorld() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_root() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_root() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_sortJobHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_sortJobHandle() ;

constexpr int32_t const& __cordl_internal_get_sortedChunkCount() const;

constexpr int32_t& __cordl_internal_get_sortedChunkCount() ;

constexpr ::Unity::Collections::NativeList_1<::Unity::Mathematics::int3> const& __cordl_internal_get_sortedChunks() const;

constexpr ::Unity::Collections::NativeList_1<::Unity::Mathematics::int3>& __cordl_internal_get_sortedChunks() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr int32_t const& __cordl_internal_get_viewDistance() const;

constexpr int32_t& __cordl_internal_get_viewDistance() ;

constexpr ::UnityEngine::BoundsInt const& __cordl_internal_get_worldBounds() const;

constexpr ::UnityEngine::BoundsInt& __cordl_internal_get_worldBounds() ;

constexpr float_t const& __cordl_internal_get_worldScale() const;

constexpr float_t& __cordl_internal_get_worldScale() ;

constexpr ::GlobalNamespace::VoxelWorld_WorldType const& __cordl_internal_get_worldType() const;

constexpr ::GlobalNamespace::VoxelWorld_WorldType& __cordl_internal_get_worldType() ;

constexpr void __cordl_internal_set_MaterialSet(::UnityW<::Voxels::VoxelMaterialSet>  value) ;

constexpr void __cordl_internal_set__ChunkSize_k__BackingField(::Unity::Mathematics::int3  value) ;

constexpr void __cordl_internal_set__Id_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Initialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__VoxelCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__VoxelDimension_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__chunkComponentPool(::UnityEngine::Pool::ObjectPool_1<::UnityW<::Voxels::ChunkComponent>>*  value) ;

constexpr void __cordl_internal_set__chunkPool(::UnityEngine::Pool::ObjectPool_1<::Voxels::Chunk*>*  value) ;

constexpr void __cordl_internal_set__meshPool(::UnityEngine::Pool::ObjectPool_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

constexpr void __cordl_internal_set__tempChunkList(::System::Collections::Generic::List_1<::Voxels::Chunk*>*  value) ;

constexpr void __cordl_internal_set__updateWorld(bool  value) ;

constexpr void __cordl_internal_set_chunkJobs(::System::Collections::Generic::Dictionary_2<::Unity::Mathematics::int3,::Voxels::ChunkTaskSet*>*  value) ;

constexpr void __cordl_internal_set_chunkPrefab(::UnityW<::Voxels::ChunkComponent>  value) ;

constexpr void __cordl_internal_set_chunkSize(int32_t  value) ;

constexpr void __cordl_internal_set_chunkSortIndex(int32_t  value) ;

constexpr void __cordl_internal_set_chunks(::System::Collections::Generic::Dictionary_2<::Unity::Mathematics::int3,::Voxels::Chunk*>*  value) ;

constexpr void __cordl_internal_set_chunksToGenerate(::Unity::Collections::NativeHashSet_1<::Unity::Mathematics::int3>  value) ;

constexpr void __cordl_internal_set_chunksToRemove(::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*  value) ;

constexpr void __cordl_internal_set_completedJobs(::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*  value) ;

constexpr void __cordl_internal_set_generationQueueChanged(bool  value) ;

constexpr void __cordl_internal_set_generator(::Voxels::VoxelGenerator*  value) ;

constexpr void __cordl_internal_set_maxJobs(int32_t  value) ;

constexpr void __cordl_internal_set_persistChanges(bool  value) ;

constexpr void __cordl_internal_set_playerChunk(::Unity::Mathematics::int3  value) ;

constexpr void __cordl_internal_set_registerAsSceneWorld(bool  value) ;

constexpr void __cordl_internal_set_root(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_sortJobHandle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set_sortedChunkCount(int32_t  value) ;

constexpr void __cordl_internal_set_sortedChunks(::Unity::Collections::NativeList_1<::Unity::Mathematics::int3>  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_viewDistance(int32_t  value) ;

constexpr void __cordl_internal_set_worldBounds(::UnityEngine::BoundsInt  value) ;

constexpr void __cordl_internal_set_worldScale(float_t  value) ;

constexpr void __cordl_internal_set_worldType(::GlobalNamespace::VoxelWorld_WorldType  value) ;

/// @brief Method .ctor, addr 0x5dc0cd0, size 0x190, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Voxels::VoxelWorld>>* getStaticF_WorldLookup() ;

static inline bool getStaticF__opAnyChanged() ;

static inline ::UnityEngine::BoundsInt getStaticF__opBounds() ;

static inline ::System::Collections::Generic::List_1<::Voxels::Chunk*>* getStaticF__opChangedChunks() ;

static inline ::Voxels::Chunk* getStaticF__opChunk() ;

static inline ::System::Collections::Generic::List_1<::Voxels::ChunkTaskSet*>* getStaticF__opChunkJobs() ;

static inline ::System::Collections::Generic::List_1<::Voxels::Chunk*>* getStaticF__opChunks() ;

static inline ::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>* getStaticF__opSetDataFunction() ;

/// [CompilerGenerated]
/// @brief Method get_ChunkSize, addr 0x5db8cb4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_ChunkSize() ;

/// @brief Method get_Chunks, addr 0x5db8c10, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Voxels::Chunk*>* get_Chunks() ;

/// [CompilerGenerated]
/// @brief Method get_Id, addr 0x5db8c94, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Id() ;

/// [CompilerGenerated]
/// @brief Method get_Initialized, addr 0x5db8c60, size 0x8, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_IsInfinite, addr 0x5db8c70, size 0x10, virtual false, abstract: false, final false
inline bool get_IsInfinite() ;

/// @brief Method get_MeshGenerationMode, addr 0x5db8cf0, size 0x18, virtual false, abstract: false, final false
inline ::Voxels::MeshGenerationMode get_MeshGenerationMode() ;

/// @brief Method get_Root, addr 0x5db0870, size 0x7c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Root() ;

/// @brief Method get_Scale, addr 0x5dc0a58, size 0x8, virtual false, abstract: false, final false
inline float_t get_Scale() ;

/// @brief Method get_UpdateWorld, addr 0x5db8ca4, size 0x8, virtual false, abstract: false, final false
inline bool get_UpdateWorld() ;

/// [CompilerGenerated]
/// @brief Method get_VoxelCount, addr 0x5db8ce0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_VoxelCount() ;

/// [CompilerGenerated]
/// @brief Method get_VoxelDimension, addr 0x5db8cd0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_VoxelDimension() ;

/// @brief Method get_WorldBounds, addr 0x5db8c80, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::BoundsInt get_WorldBounds() ;

/// @brief Method get_WorldGenerationComplete, addr 0x5db8d08, size 0x84, virtual false, abstract: false, final false
inline bool get_WorldGenerationComplete() ;

static inline void setStaticF_WorldLookup(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Voxels::VoxelWorld>>*  value) ;

static inline void setStaticF__opAnyChanged(bool  value) ;

static inline void setStaticF__opBounds(::UnityEngine::BoundsInt  value) ;

static inline void setStaticF__opChangedChunks(::System::Collections::Generic::List_1<::Voxels::Chunk*>*  value) ;

static inline void setStaticF__opChunk(::Voxels::Chunk*  value) ;

static inline void setStaticF__opChunkJobs(::System::Collections::Generic::List_1<::Voxels::ChunkTaskSet*>*  value) ;

static inline void setStaticF__opChunks(::System::Collections::Generic::List_1<::Voxels::Chunk*>*  value) ;

static inline void setStaticF__opSetDataFunction(::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ChunkSize, addr 0x5db8cc4, size 0xc, virtual false, abstract: false, final false
inline void set_ChunkSize(::Unity::Mathematics::int3  value) ;

/// [CompilerGenerated]
/// @brief Method set_Id, addr 0x5db8c9c, size 0x8, virtual false, abstract: false, final false
inline void set_Id(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Initialized, addr 0x5db8c68, size 0x8, virtual false, abstract: false, final false
inline void set_Initialized(bool  value) ;

/// @brief Method set_UpdateWorld, addr 0x5db8cac, size 0x8, virtual false, abstract: false, final false
inline void set_UpdateWorld(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_VoxelCount, addr 0x5db8ce8, size 0x8, virtual false, abstract: false, final false
inline void set_VoxelCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_VoxelDimension, addr 0x5db8cd8, size 0x8, virtual false, abstract: false, final false
inline void set_VoxelDimension(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelWorld() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelWorld", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelWorld(VoxelWorld && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelWorld", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelWorld(VoxelWorld const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5061};

/// [Header("World Settings")]
/// @brief Field MaterialSet, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Voxels::VoxelMaterialSet>  ___MaterialSet;

/// [SerializeReference]
/// @brief Field generator, offset: 0x28, size: 0x8, def value: None
 ::Voxels::VoxelGenerator*  ___generator;

/// [SerializeField]
/// @brief Field worldType, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::VoxelWorld_WorldType  ___worldType;

/// [SerializeField]
/// @brief Field worldBounds, offset: 0x34, size: 0x18, def value: None
 ::UnityEngine::BoundsInt  ___worldBounds;

/// [SerializeField]
/// @brief Field worldScale, offset: 0x4c, size: 0x4, def value: None
 float_t  ___worldScale;

/// [SerializeField]
/// @brief Field chunkSize, offset: 0x50, size: 0x4, def value: None
 int32_t  ___chunkSize;

/// [SerializeField]
/// @brief Field viewDistance, offset: 0x54, size: 0x4, def value: None
 int32_t  ___viewDistance;

/// [SerializeField]
/// @brief Field maxJobs, offset: 0x58, size: 0x4, def value: None
 int32_t  ___maxJobs;

/// [SerializeField]
/// @brief Field registerAsSceneWorld, offset: 0x5c, size: 0x1, def value: None
 bool  ___registerAsSceneWorld;

/// [SerializeField]
/// @brief Field persistChanges, offset: 0x5d, size: 0x1, def value: None
 bool  ___persistChanges;

/// [Header("References")]
/// [SerializeField]
/// @brief Field chunkPrefab, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::Voxels::ChunkComponent>  ___chunkPrefab;

/// [SerializeField]
/// @brief Field target, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// [SerializeField]
/// @brief Field root, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___root;

/// @brief Field chunks, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Unity::Mathematics::int3,::Voxels::Chunk*>*  ___chunks;

/// @brief Field chunkJobs, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Unity::Mathematics::int3,::Voxels::ChunkTaskSet*>*  ___chunkJobs;

/// @brief Field completedJobs, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*  ___completedJobs;

/// @brief Field chunksToGenerate, offset: 0x90, size: 0x8, def value: None
 ::Unity::Collections::NativeHashSet_1<::Unity::Mathematics::int3>  ___chunksToGenerate;

/// @brief Field sortedChunks, offset: 0x98, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::Unity::Mathematics::int3>  ___sortedChunks;

/// @brief Field chunkSortIndex, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___chunkSortIndex;

/// @brief Field sortJobHandle, offset: 0xa8, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___sortJobHandle;

/// @brief Field sortedChunkCount, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___sortedChunkCount;

/// @brief Field playerChunk, offset: 0xbc, size: 0xc, def value: None
 ::Unity::Mathematics::int3  ___playerChunk;

/// @brief Field generationQueueChanged, offset: 0xc8, size: 0x1, def value: None
 bool  ___generationQueueChanged;

/// @brief Field chunksToRemove, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*  ___chunksToRemove;

/// @brief Field _chunkPool, offset: 0xd8, size: 0x8, def value: None
 ::UnityEngine::Pool::ObjectPool_1<::Voxels::Chunk*>*  ____chunkPool;

/// @brief Field _chunkComponentPool, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::Pool::ObjectPool_1<::UnityW<::Voxels::ChunkComponent>>*  ____chunkComponentPool;

/// @brief Field _meshPool, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::Pool::ObjectPool_1<::UnityW<::UnityEngine::Mesh>>*  ____meshPool;

/// [CompilerGenerated]
/// @brief Field <Initialized>k__BackingField, offset: 0xf0, size: 0x1, def value: None
 bool  ____Initialized_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Id>k__BackingField, offset: 0xf4, size: 0x4, def value: None
 int32_t  ____Id_k__BackingField;

/// @brief Field _updateWorld, offset: 0xf8, size: 0x1, def value: None
 bool  ____updateWorld;

/// [CompilerGenerated]
/// @brief Field <ChunkSize>k__BackingField, offset: 0xfc, size: 0xc, def value: None
 ::Unity::Mathematics::int3  ____ChunkSize_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <VoxelDimension>k__BackingField, offset: 0x108, size: 0x4, def value: None
 int32_t  ____VoxelDimension_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <VoxelCount>k__BackingField, offset: 0x10c, size: 0x4, def value: None
 int32_t  ____VoxelCount_k__BackingField;

/// @brief Field _tempChunkList, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Voxels::Chunk*>*  ____tempChunkList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::VoxelWorld, ___MaterialSet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___generator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___worldType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___worldBounds) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___worldScale) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___chunkSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___viewDistance) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___maxJobs) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___registerAsSceneWorld) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___persistChanges) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___chunkPrefab) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___target) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___root) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___chunks) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___chunkJobs) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___completedJobs) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___chunksToGenerate) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___sortedChunks) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___chunkSortIndex) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___sortJobHandle) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___sortedChunkCount) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___playerChunk) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___generationQueueChanged) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ___chunksToRemove) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ____chunkPool) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ____chunkComponentPool) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ____meshPool) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ____Initialized_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ____Id_k__BackingField) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ____updateWorld) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ____ChunkSize_k__BackingField) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ____VoxelDimension_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ____VoxelCount_k__BackingField) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld, ____tempChunkList) == 0x110, "Offset mismatch!");

static_assert(sizeof(::Voxels::VoxelWorld) == 0x118, "Size mismatch!");

} // namespace end def Voxels
// [CompilerGenerated]
// Dependencies System.Object
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelWorld/<>c__DisplayClass121_0
class CORDL_TYPE VoxelWorld___c__DisplayClass121_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Voxels::VoxelWorld>  __4__this;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::ArrayW<uint8_t>  data;

/// @brief Field immediate, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_immediate, put=__cordl_internal_set_immediate)) bool  immediate;

static inline ::Voxels::VoxelWorld___c__DisplayClass121_0* New_ctor() ;

/// @brief Method <SetVoxelDensity>g__SetVoxelDensityInChunk|0, addr 0x5dc3294, size 0x450, virtual false, abstract: false, final false
inline void _SetVoxelDensity_g__SetVoxelDensityInChunk_0() ;

/// @brief Method <SetVoxelDensity>g__SetVoxelDensity|1, addr 0x5dc36e4, size 0xbc, virtual false, abstract: false, final false
inline void _SetVoxelDensity_g__SetVoxelDensity_1(int32_t  voxelIndex, uint8_t  density, ::by_ref<::GlobalNamespace::VoxelWorld___c__DisplayClass121_1>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::UnityW<::Voxels::VoxelWorld> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Voxels::VoxelWorld>& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_data() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_data() ;

constexpr bool const& __cordl_internal_get_immediate() const;

constexpr bool& __cordl_internal_get_immediate() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Voxels::VoxelWorld>  value) ;

constexpr void __cordl_internal_set_data(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_immediate(bool  value) ;

/// @brief Method .ctor, addr 0x5dc328c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelWorld___c__DisplayClass121_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelWorld___c__DisplayClass121_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelWorld___c__DisplayClass121_0(VoxelWorld___c__DisplayClass121_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelWorld___c__DisplayClass121_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelWorld___c__DisplayClass121_0(VoxelWorld___c__DisplayClass121_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5059};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Voxels::VoxelWorld>  _____4__this;

/// @brief Field immediate, offset: 0x18, size: 0x1, def value: None
 bool  ___immediate;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::VoxelWorld___c__DisplayClass121_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld___c__DisplayClass121_0, ___immediate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld___c__DisplayClass121_0, ___data) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Voxels::VoxelWorld___c__DisplayClass121_0) == 0x28, "Size mismatch!");

} // namespace end def Voxels
// [CompilerGenerated]
// Dependencies System.Object, Voxels.Voxel
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelWorld/<>c__DisplayClass120_0
class CORDL_TYPE VoxelWorld___c__DisplayClass120_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Voxels::VoxelWorld>  __4__this;

/// @brief Field immediate, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_immediate, put=__cordl_internal_set_immediate)) bool  immediate;

/// @brief Field voxels, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_voxels, put=__cordl_internal_set_voxels)) ::ArrayW<::Voxels::Voxel>  voxels;

static inline ::Voxels::VoxelWorld___c__DisplayClass120_0* New_ctor() ;

/// @brief Method <SetVoxels>g__SetVoxelDataInChunk|0, addr 0x5dc2d20, size 0x488, virtual false, abstract: false, final false
inline void _SetVoxels_g__SetVoxelDataInChunk_0() ;

/// @brief Method <SetVoxels>g__SetVoxelData|1, addr 0x5dc31a8, size 0xe4, virtual false, abstract: false, final false
inline void _SetVoxels_g__SetVoxelData_1(::Unity::Mathematics::int3  voxelWorldPosition, ::Unity::Mathematics::int3  voxelLocalPosition, int32_t  voxelIndex, uint8_t  material, uint8_t  density, ::by_ref<::GlobalNamespace::VoxelWorld___c__DisplayClass120_1>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::UnityW<::Voxels::VoxelWorld> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Voxels::VoxelWorld>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get_immediate() const;

constexpr bool& __cordl_internal_get_immediate() ;

constexpr ::ArrayW<::Voxels::Voxel> const& __cordl_internal_get_voxels() const;

constexpr ::ArrayW<::Voxels::Voxel>& __cordl_internal_get_voxels() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Voxels::VoxelWorld>  value) ;

constexpr void __cordl_internal_set_immediate(bool  value) ;

constexpr void __cordl_internal_set_voxels(::ArrayW<::Voxels::Voxel>  value) ;

/// @brief Method .ctor, addr 0x5dc2d18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelWorld___c__DisplayClass120_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelWorld___c__DisplayClass120_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelWorld___c__DisplayClass120_0(VoxelWorld___c__DisplayClass120_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelWorld___c__DisplayClass120_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelWorld___c__DisplayClass120_0(VoxelWorld___c__DisplayClass120_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5057};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Voxels::VoxelWorld>  _____4__this;

/// @brief Field immediate, offset: 0x18, size: 0x1, def value: None
 bool  ___immediate;

/// @brief Field voxels, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Voxels::Voxel>  ___voxels;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::VoxelWorld___c__DisplayClass120_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld___c__DisplayClass120_0, ___immediate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld___c__DisplayClass120_0, ___voxels) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Voxels::VoxelWorld___c__DisplayClass120_0) == 0x28, "Size mismatch!");

} // namespace end def Voxels
// [CompilerGenerated]
// Dependencies System.Object, Unity.Mathematics.int3
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelWorld/<>c__DisplayClass119_0
class CORDL_TYPE VoxelWorld___c__DisplayClass119_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Voxels::VoxelWorld>  __4__this;

/// @brief Field immediate, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_immediate, put=__cordl_internal_set_immediate)) bool  immediate;

/// @brief Field setDataFunction, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_setDataFunction, put=__cordl_internal_set_setDataFunction)) ::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*  setDataFunction;

/// @brief Field voxels, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_voxels, put=__cordl_internal_set_voxels)) ::ArrayW<::Unity::Mathematics::int3>  voxels;

static inline ::Voxels::VoxelWorld___c__DisplayClass119_0* New_ctor() ;

/// @brief Method <SetVoxelDataCustom>g__SetVoxelDataInChunk|0, addr 0x5dc29dc, size 0x208, virtual false, abstract: false, final false
inline void _SetVoxelDataCustom_g__SetVoxelDataInChunk_0() ;

/// @brief Method <SetVoxelDataCustom>g__SetVoxelData|1, addr 0x5dc2be4, size 0x134, virtual false, abstract: false, final false
inline void _SetVoxelDataCustom_g__SetVoxelData_1(::Unity::Mathematics::int3  voxelWorldPosition, ::Unity::Mathematics::int3  voxelLocalPosition, int32_t  voxelIndex, uint8_t  density, uint8_t  material) ;

constexpr ::UnityW<::Voxels::VoxelWorld> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Voxels::VoxelWorld>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get_immediate() const;

constexpr bool& __cordl_internal_get_immediate() ;

constexpr ::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>* const& __cordl_internal_get_setDataFunction() const;

constexpr ::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*& __cordl_internal_get_setDataFunction() ;

constexpr ::ArrayW<::Unity::Mathematics::int3> const& __cordl_internal_get_voxels() const;

constexpr ::ArrayW<::Unity::Mathematics::int3>& __cordl_internal_get_voxels() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Voxels::VoxelWorld>  value) ;

constexpr void __cordl_internal_set_immediate(bool  value) ;

constexpr void __cordl_internal_set_setDataFunction(::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*  value) ;

constexpr void __cordl_internal_set_voxels(::ArrayW<::Unity::Mathematics::int3>  value) ;

/// @brief Method .ctor, addr 0x5dc29d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelWorld___c__DisplayClass119_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelWorld___c__DisplayClass119_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelWorld___c__DisplayClass119_0(VoxelWorld___c__DisplayClass119_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelWorld___c__DisplayClass119_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelWorld___c__DisplayClass119_0(VoxelWorld___c__DisplayClass119_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5056};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Voxels::VoxelWorld>  _____4__this;

/// @brief Field voxels, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Unity::Mathematics::int3>  ___voxels;

/// @brief Field immediate, offset: 0x20, size: 0x1, def value: None
 bool  ___immediate;

/// [TupleElementNames(new[] { "density", "material", "density", "material" })]
/// @brief Field setDataFunction, offset: 0x28, size: 0x8, def value: None
 ::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*  ___setDataFunction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::VoxelWorld___c__DisplayClass119_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld___c__DisplayClass119_0, ___voxels) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld___c__DisplayClass119_0, ___immediate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld___c__DisplayClass119_0, ___setDataFunction) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Voxels::VoxelWorld___c__DisplayClass119_0) == 0x30, "Size mismatch!");

} // namespace end def Voxels
// [CompilerGenerated]
// Dependencies System.Object
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelWorld/<>c__DisplayClass117_0
class CORDL_TYPE VoxelWorld___c__DisplayClass117_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Voxels::VoxelWorld>  __4__this;

/// @brief Field setDensityFunction, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_setDensityFunction, put=__cordl_internal_set_setDensityFunction)) ::System::Func_3<::Unity::Mathematics::int3,uint8_t,uint8_t>*  setDensityFunction;

static inline ::Voxels::VoxelWorld___c__DisplayClass117_0* New_ctor() ;

/// @brief Method <SetVoxelDensityCustom>g__SetDensity|1, addr 0x5dc2904, size 0xd0, virtual false, abstract: false, final false
inline void _SetVoxelDensityCustom_g__SetDensity_1(::Unity::Mathematics::int3  voxelWorldPosition, ::Unity::Mathematics::int3  voxelLocalPosition, int32_t  voxelIndex, uint8_t  density) ;

/// @brief Method <SetVoxelDensityCustom>g__SetVoxelDensityInChunk|0, addr 0x5dc2768, size 0x19c, virtual false, abstract: false, final false
inline void _SetVoxelDensityCustom_g__SetVoxelDensityInChunk_0() ;

constexpr ::UnityW<::Voxels::VoxelWorld> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Voxels::VoxelWorld>& __cordl_internal_get___4__this() ;

constexpr ::System::Func_3<::Unity::Mathematics::int3,uint8_t,uint8_t>* const& __cordl_internal_get_setDensityFunction() const;

constexpr ::System::Func_3<::Unity::Mathematics::int3,uint8_t,uint8_t>*& __cordl_internal_get_setDensityFunction() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Voxels::VoxelWorld>  value) ;

constexpr void __cordl_internal_set_setDensityFunction(::System::Func_3<::Unity::Mathematics::int3,uint8_t,uint8_t>*  value) ;

/// @brief Method .ctor, addr 0x5dc2760, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelWorld___c__DisplayClass117_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelWorld___c__DisplayClass117_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelWorld___c__DisplayClass117_0(VoxelWorld___c__DisplayClass117_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelWorld___c__DisplayClass117_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelWorld___c__DisplayClass117_0(VoxelWorld___c__DisplayClass117_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5055};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Voxels::VoxelWorld>  _____4__this;

/// @brief Field setDensityFunction, offset: 0x18, size: 0x8, def value: None
 ::System::Func_3<::Unity::Mathematics::int3,uint8_t,uint8_t>*  ___setDensityFunction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::VoxelWorld___c__DisplayClass117_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelWorld___c__DisplayClass117_0, ___setDensityFunction) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Voxels::VoxelWorld___c__DisplayClass117_0) == 0x20, "Size mismatch!");

} // namespace end def Voxels
// [CompilerGenerated]
// Dependencies System.Object
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelWorld/<>c
class CORDL_TYPE VoxelWorld___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Voxels::VoxelWorld___c*  __9;

/// @brief Field <>9__81_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__81_1, put=setStaticF___9__81_1)) ::System::Action_1<::Voxels::Chunk*>*  __9__81_1;

/// @brief Field <>9__81_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__81_3, put=setStaticF___9__81_3)) ::System::Action_1<::Voxels::Chunk*>*  __9__81_3;

/// @brief Field <>9__81_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__81_7, put=setStaticF___9__81_7)) ::System::Action_1<::UnityW<::Voxels::ChunkComponent>>*  __9__81_7;

/// @brief Field <>9__81_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__81_8, put=setStaticF___9__81_8)) ::System::Func_1<::UnityW<::UnityEngine::Mesh>>*  __9__81_8;

/// @brief Field <>9__81_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__81_9, put=setStaticF___9__81_9)) ::System::Action_1<::UnityW<::UnityEngine::Mesh>>*  __9__81_9;

static inline ::Voxels::VoxelWorld___c* New_ctor() ;

/// @brief Method <ConfigurePools>b__81_1, addr 0x5dc2634, size 0x4, virtual false, abstract: false, final false
inline void _ConfigurePools_b__81_1(::Voxels::Chunk*  chunk) ;

/// @brief Method <ConfigurePools>b__81_3, addr 0x5dc2638, size 0x18, virtual false, abstract: false, final false
inline void _ConfigurePools_b__81_3(::Voxels::Chunk*  chunk) ;

/// @brief Method <ConfigurePools>b__81_7, addr 0x5dc2650, size 0xa0, virtual false, abstract: false, final false
inline void _ConfigurePools_b__81_7(::Voxels::ChunkComponent*  chunkComponent) ;

/// @brief Method <ConfigurePools>b__81_8, addr 0x5dc26f0, size 0x54, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> _ConfigurePools_b__81_8() ;

/// @brief Method <ConfigurePools>b__81_9, addr 0x5dc2744, size 0x1c, virtual false, abstract: false, final false
inline void _ConfigurePools_b__81_9(::UnityEngine::Mesh*  mesh) ;

/// @brief Method .ctor, addr 0x5dc262c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Voxels::VoxelWorld___c* getStaticF___9() ;

static inline ::System::Action_1<::Voxels::Chunk*>* getStaticF___9__81_1() ;

static inline ::System::Action_1<::Voxels::Chunk*>* getStaticF___9__81_3() ;

static inline ::System::Action_1<::UnityW<::Voxels::ChunkComponent>>* getStaticF___9__81_7() ;

static inline ::System::Func_1<::UnityW<::UnityEngine::Mesh>>* getStaticF___9__81_8() ;

static inline ::System::Action_1<::UnityW<::UnityEngine::Mesh>>* getStaticF___9__81_9() ;

static inline void setStaticF___9(::Voxels::VoxelWorld___c*  value) ;

static inline void setStaticF___9__81_1(::System::Action_1<::Voxels::Chunk*>*  value) ;

static inline void setStaticF___9__81_3(::System::Action_1<::Voxels::Chunk*>*  value) ;

static inline void setStaticF___9__81_7(::System::Action_1<::UnityW<::Voxels::ChunkComponent>>*  value) ;

static inline void setStaticF___9__81_8(::System::Func_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF___9__81_9(::System::Action_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelWorld___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelWorld___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelWorld___c(VoxelWorld___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelWorld___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelWorld___c(VoxelWorld___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5054};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Voxels::VoxelWorld___c) == 0x10, "Size mismatch!");

} // namespace end def Voxels
