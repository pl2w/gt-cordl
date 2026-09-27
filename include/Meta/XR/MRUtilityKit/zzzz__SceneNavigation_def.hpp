#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneNavigation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_RoomFilter_def.hpp"
#include "Unity/AI/Navigation/zzzz__CollectObjects_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshCollectGeometry_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SceneNavigation)
namespace Meta::XR::MRUtilityKit {
class EffectMesh;
}
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
}
namespace Meta::XR::MRUtilityKit {
class MRUKRoom;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::AI::Navigation {
class NavMeshSurface;
}
namespace UnityEngine::AI {
class NavMeshAgent;
}
namespace UnityEngine::AI {
struct NavMeshBuildSettings;
}
namespace UnityEngine::AI {
struct NavMeshBuildSource;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class SceneNavigation;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneNavigation*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneNavigation*, "Meta.XR.MRUtilityKit", "SceneNavigation");
// [HelpURL("https://developers.meta.com/horizon/reference/mruk/latest/class_meta_x_r_m_r_utility_kit_scene_navigation")]
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.MRUK::RoomFilter, Meta.XR.MRUtilityKit.MRUKAnchor::SceneLabels, Unity.AI.Navigation.CollectObjects, UnityEngine.AI.NavMeshCollectGeometry, UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneNavigation
class CORDL_TYPE SceneNavigation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field AgentClimb, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_AgentClimb, put=__cordl_internal_set_AgentClimb)) float_t  AgentClimb;

/// @brief Field AgentHeight, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_AgentHeight, put=__cordl_internal_set_AgentHeight)) float_t  AgentHeight;

/// @brief Field AgentIndex, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_AgentIndex, put=__cordl_internal_set_AgentIndex)) int32_t  AgentIndex;

/// @brief Field AgentMaxSlope, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_AgentMaxSlope, put=__cordl_internal_set_AgentMaxSlope)) float_t  AgentMaxSlope;

/// @brief Field AgentRadius, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_AgentRadius, put=__cordl_internal_set_AgentRadius)) float_t  AgentRadius;

/// @brief Field Agents, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Agents, put=__cordl_internal_set_Agents)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshAgent>>*  Agents;

/// @brief Field BuildOnSceneLoaded, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_BuildOnSceneLoaded, put=__cordl_internal_set_BuildOnSceneLoaded)) ::GlobalNamespace::MRUK_RoomFilter  BuildOnSceneLoaded;

/// @brief Field CollectGeometry, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_CollectGeometry, put=__cordl_internal_set_CollectGeometry)) ::UnityEngine::AI::NavMeshCollectGeometry  CollectGeometry;

/// @brief Field CollectObjects, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_CollectObjects, put=__cordl_internal_set_CollectObjects)) ::Unity::AI::Navigation::CollectObjects  CollectObjects;

/// @brief Field CustomAgent, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_CustomAgent, put=__cordl_internal_set_CustomAgent)) bool  CustomAgent;

/// @brief Field GenerateLinks, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_GenerateLinks, put=__cordl_internal_set_GenerateLinks)) bool  GenerateLinks;

/// @brief Field Layers, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_Layers, put=__cordl_internal_set_Layers)) ::UnityEngine::LayerMask  Layers;

/// @brief Field NavigableSurfaces, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_NavigableSurfaces, put=__cordl_internal_set_NavigableSurfaces)) ::GlobalNamespace::MRUKAnchor_SceneLabels  NavigableSurfaces;

 __declspec(property(get=get_ObstacleRoot)) ::UnityW<::UnityEngine::Transform>  ObstacleRoot;

 __declspec(property(get=get_Obstacles, put=set_Obstacles)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  Obstacles;

 __declspec(property(get=get_OnNavMeshInitialized, put=set_OnNavMeshInitialized)) ::UnityEngine::Events::UnityEvent*  OnNavMeshInitialized;

/// @brief Field OverrideTileSize, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_OverrideTileSize, put=__cordl_internal_set_OverrideTileSize)) bool  OverrideTileSize;

/// @brief Field OverrideVoxelSize, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get_OverrideVoxelSize, put=__cordl_internal_set_OverrideVoxelSize)) bool  OverrideVoxelSize;

/// @brief Field SceneObstacles, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SceneObstacles, put=__cordl_internal_set_SceneObstacles)) ::GlobalNamespace::MRUKAnchor_SceneLabels  SceneObstacles;

/// @brief [Obsolete("Navigable surfaces are now handled as NavMeshBuildSource hence this container is not going to be populated.Access the anchors used as navigable surfaces directly.")]
 __declspec(property(get=get_Surfaces, put=set_Surfaces)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  Surfaces;

/// @brief Field TileSize, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_TileSize, put=__cordl_internal_set_TileSize)) int32_t  TileSize;

/// @brief Field TrackUpdates, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_TrackUpdates, put=__cordl_internal_set_TrackUpdates)) bool  TrackUpdates;

/// @brief Field UseSceneData, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseSceneData, put=__cordl_internal_set_UseSceneData)) bool  UseSceneData;

/// @brief Field VoxelSize, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_VoxelSize, put=__cordl_internal_set_VoxelSize)) float_t  VoxelSize;

/// @brief Field <Obstacles>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Obstacles_k__BackingField, put=__cordl_internal_set__Obstacles_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  _Obstacles_k__BackingField;

/// @brief Field <OnNavMeshInitialized>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnNavMeshInitialized_k__BackingField, put=__cordl_internal_set__OnNavMeshInitialized_k__BackingField)) ::UnityEngine::Events::UnityEvent*  _OnNavMeshInitialized_k__BackingField;

/// @brief Field <Surfaces>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__Surfaces_k__BackingField, put=__cordl_internal_set__Surfaces_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  _Surfaces_k__BackingField;

/// @brief Field _cachedNavigableSceneLabels, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedNavigableSceneLabels, put=__cordl_internal_set__cachedNavigableSceneLabels)) ::GlobalNamespace::MRUKAnchor_SceneLabels  _cachedNavigableSceneLabels;

/// @brief Field _connectionMeshes, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__connectionMeshes, put=__cordl_internal_set__connectionMeshes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  _connectionMeshes;

/// @brief Field _effectMesh, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__effectMesh, put=__cordl_internal_set__effectMesh)) ::UnityW<::Meta::XR::MRUtilityKit::EffectMesh>  _effectMesh;

/// @brief Field _navMeshSurface, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__navMeshSurface, put=__cordl_internal_set__navMeshSurface)) ::UnityW<::Unity::AI::Navigation::NavMeshSurface>  _navMeshSurface;

/// @brief Field _obstaclesRoot, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__obstaclesRoot, put=__cordl_internal_set__obstaclesRoot)) ::UnityW<::UnityEngine::Transform>  _obstaclesRoot;

/// @brief Field _sources, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__sources, put=__cordl_internal_set__sources)) ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  _sources;

/// @brief Field _surfacesRoot, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__surfacesRoot, put=__cordl_internal_set__surfacesRoot)) ::UnityW<::UnityEngine::Transform>  _surfacesRoot;

/// @brief Method Awake, addr 0x9f435a8, size 0x74, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BuildSceneNavMesh, addr 0x9f43fc4, size 0x8, virtual false, abstract: false, final false
inline void BuildSceneNavMesh() ;

/// @brief Method BuildSceneNavMeshForRoom, addr 0x9f43a68, size 0x55c, virtual false, abstract: false, final false
inline void BuildSceneNavMeshForRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method ClearObstacle, addr 0x9f46ca8, size 0xcc, virtual false, abstract: false, final false
inline void ClearObstacle(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// @brief Method ClearObstacles, addr 0x9f45110, size 0x3d8, virtual false, abstract: false, final false
inline void ClearObstacles(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// [Obsolete("Navigable surfaces are now handled as NavMeshBuildSource hence their destruction is handled internally.")]
/// @brief Method ClearSurface, addr 0x9f4714c, size 0xf0, virtual false, abstract: false, final false
inline void ClearSurface(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// @brief Method ClearSurfaces, addr 0x9f46d74, size 0x3d8, virtual false, abstract: false, final false
inline void ClearSurfaces(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method CollectSceneSources, addr 0x9f44ae8, size 0x434, virtual false, abstract: false, final false
inline void CollectSceneSources(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms, ::System::Collections::Generic::ICollection_1<::UnityEngine::AI::NavMeshBuildSource>*  sources) ;

/// @brief Method CreateNavMeshBuildSettings, addr 0x9f445ec, size 0x10c, virtual false, abstract: false, final false
inline ::UnityEngine::AI::NavMeshBuildSettings CreateNavMeshBuildSettings(float_t  agentRadius, float_t  agentHeight, float_t  agentMaxSlope, float_t  agentClimb) ;

/// @brief Method CreateNavMeshSurface, addr 0x9f44220, size 0x13c, virtual false, abstract: false, final false
inline void CreateNavMeshSurface() ;

/// @brief Method CreateNavigableSurface, addr 0x9f466e8, size 0x57c, virtual false, abstract: false, final false
inline void CreateNavigableSurface(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// [Obsolete("Navigable surfaces are now handled as NavMeshBuildSource, and are automatically created when buildingthe NavMesh using the scene data. Use EffectMesh to spawn colliders in the place of anchors.", true)]
/// @brief Method CreateNavigableSurfaces, addr 0x9f46240, size 0x4a8, virtual false, abstract: false, final false
inline void CreateNavigableSurfaces(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method CreateObstacle, addr 0x9f458fc, size 0x2b4, virtual false, abstract: false, final false
inline void CreateObstacle(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, bool  shouldCarve, bool  carveOnlyStationary, float_t  carvingTimeToStationary, float_t  carvingMoveThreshold) ;

/// @brief Method CreateObstacles, addr 0x9f45704, size 0x1f8, virtual false, abstract: false, final false
inline void CreateObstacles(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method CreateObstacles, addr 0x9f44838, size 0x2b0, virtual false, abstract: false, final false
inline void CreateObstacles(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms) ;

/// @brief Method CreateRoomBridges, addr 0x9f45e20, size 0x420, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* CreateRoomBridges(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>>*  connections) ;

/// @brief Method GetFirstLayerFromLayerMask, addr 0x9f46c64, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetFirstLayerFromLayerMask(::UnityEngine::LayerMask  layerMask) ;

/// @brief Method InitializeNavMesh, addr 0x9f44f1c, size 0x1f4, virtual false, abstract: false, final false
inline void InitializeNavMesh(int32_t  agentTypeID) ;

/// @brief Method InstantiateObstacle, addr 0x9f45bb0, size 0x270, virtual false, abstract: false, final false
inline void InstantiateObstacle(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, bool  shouldCarve, bool  carveOnlyStationary, float_t  carvingTimeToStationary, float_t  carvingMoveThreshold, ::UnityEngine::Vector3  obstacleSize, ::UnityEngine::Vector3  obstacleCenter) ;

static inline ::Meta::XR::MRUtilityKit::SceneNavigation* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9f4723c, size 0x354, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnSceneLoadedEvent, addr 0x9f4399c, size 0xcc, virtual false, abstract: false, final false
inline void OnSceneLoadedEvent() ;

/// @brief Method ReceiveCreatedRoom, addr 0x9f43fcc, size 0x10, virtual false, abstract: false, final false
inline void ReceiveCreatedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method ReceiveRemovedRoom, addr 0x9f440b8, size 0x10, virtual false, abstract: false, final false
inline void ReceiveRemovedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method ReceiveUpdatedRoom, addr 0x9f43fdc, size 0x34, virtual false, abstract: false, final false
inline void ReceiveUpdatedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method RemoveNavMeshData, addr 0x9f44010, size 0xa8, virtual false, abstract: false, final false
inline void RemoveNavMeshData() ;

/// @brief Method ResizeNavMeshFromRoomBounds, addr 0x9f454e8, size 0x21c, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds ResizeNavMeshFromRoomBounds(::by_ref<::Unity::AI::Navigation::NavMeshSurface*>  surface, ::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method ResizeNavMeshFromRoomBounds, addr 0x9f4435c, size 0x290, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds ResizeNavMeshFromRoomBounds(::by_ref<::Unity::AI::Navigation::NavMeshSurface*>  surface, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms) ;

/// @brief Method Start, addr 0x9f4361c, size 0x380, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleGlobalMeshNavigation, addr 0x9f440c8, size 0x158, virtual false, abstract: false, final false
inline void ToggleGlobalMeshNavigation(bool  useGlobalMesh, int32_t  agentTypeID) ;

/// @brief Method ValidateBuildSettings, addr 0x9f446f8, size 0x140, virtual false, abstract: false, final false
static inline bool ValidateBuildSettings(::UnityEngine::AI::NavMeshBuildSettings  navMeshBuildSettings, ::UnityEngine::Bounds  navMeshBounds) ;

constexpr float_t const& __cordl_internal_get_AgentClimb() const;

constexpr float_t& __cordl_internal_get_AgentClimb() ;

constexpr float_t const& __cordl_internal_get_AgentHeight() const;

constexpr float_t& __cordl_internal_get_AgentHeight() ;

constexpr int32_t const& __cordl_internal_get_AgentIndex() const;

constexpr int32_t& __cordl_internal_get_AgentIndex() ;

constexpr float_t const& __cordl_internal_get_AgentMaxSlope() const;

constexpr float_t& __cordl_internal_get_AgentMaxSlope() ;

constexpr float_t const& __cordl_internal_get_AgentRadius() const;

constexpr float_t& __cordl_internal_get_AgentRadius() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshAgent>>* const& __cordl_internal_get_Agents() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshAgent>>*& __cordl_internal_get_Agents() ;

constexpr ::GlobalNamespace::MRUK_RoomFilter const& __cordl_internal_get_BuildOnSceneLoaded() const;

constexpr ::GlobalNamespace::MRUK_RoomFilter& __cordl_internal_get_BuildOnSceneLoaded() ;

constexpr ::UnityEngine::AI::NavMeshCollectGeometry const& __cordl_internal_get_CollectGeometry() const;

constexpr ::UnityEngine::AI::NavMeshCollectGeometry& __cordl_internal_get_CollectGeometry() ;

constexpr ::Unity::AI::Navigation::CollectObjects const& __cordl_internal_get_CollectObjects() const;

constexpr ::Unity::AI::Navigation::CollectObjects& __cordl_internal_get_CollectObjects() ;

constexpr bool const& __cordl_internal_get_CustomAgent() const;

constexpr bool& __cordl_internal_get_CustomAgent() ;

constexpr bool const& __cordl_internal_get_GenerateLinks() const;

constexpr bool& __cordl_internal_get_GenerateLinks() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_Layers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_Layers() ;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& __cordl_internal_get_NavigableSurfaces() const;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& __cordl_internal_get_NavigableSurfaces() ;

constexpr bool const& __cordl_internal_get_OverrideTileSize() const;

constexpr bool& __cordl_internal_get_OverrideTileSize() ;

constexpr bool const& __cordl_internal_get_OverrideVoxelSize() const;

constexpr bool& __cordl_internal_get_OverrideVoxelSize() ;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& __cordl_internal_get_SceneObstacles() const;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& __cordl_internal_get_SceneObstacles() ;

constexpr int32_t const& __cordl_internal_get_TileSize() const;

constexpr int32_t& __cordl_internal_get_TileSize() ;

constexpr bool const& __cordl_internal_get_TrackUpdates() const;

constexpr bool& __cordl_internal_get_TrackUpdates() ;

constexpr bool const& __cordl_internal_get_UseSceneData() const;

constexpr bool& __cordl_internal_get_UseSceneData() ;

constexpr float_t const& __cordl_internal_get_VoxelSize() const;

constexpr float_t& __cordl_internal_get_VoxelSize() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__Obstacles_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__Obstacles_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__OnNavMeshInitialized_k__BackingField() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__OnNavMeshInitialized_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__Surfaces_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__Surfaces_k__BackingField() ;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& __cordl_internal_get__cachedNavigableSceneLabels() const;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& __cordl_internal_get__cachedNavigableSceneLabels() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& __cordl_internal_get__connectionMeshes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& __cordl_internal_get__connectionMeshes() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::EffectMesh> const& __cordl_internal_get__effectMesh() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::EffectMesh>& __cordl_internal_get__effectMesh() ;

constexpr ::UnityW<::Unity::AI::Navigation::NavMeshSurface> const& __cordl_internal_get__navMeshSurface() const;

constexpr ::UnityW<::Unity::AI::Navigation::NavMeshSurface>& __cordl_internal_get__navMeshSurface() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__obstaclesRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__obstaclesRoot() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* const& __cordl_internal_get__sources() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*& __cordl_internal_get__sources() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__surfacesRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__surfacesRoot() ;

constexpr void __cordl_internal_set_AgentClimb(float_t  value) ;

constexpr void __cordl_internal_set_AgentHeight(float_t  value) ;

constexpr void __cordl_internal_set_AgentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_AgentMaxSlope(float_t  value) ;

constexpr void __cordl_internal_set_AgentRadius(float_t  value) ;

constexpr void __cordl_internal_set_Agents(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshAgent>>*  value) ;

constexpr void __cordl_internal_set_BuildOnSceneLoaded(::GlobalNamespace::MRUK_RoomFilter  value) ;

constexpr void __cordl_internal_set_CollectGeometry(::UnityEngine::AI::NavMeshCollectGeometry  value) ;

constexpr void __cordl_internal_set_CollectObjects(::Unity::AI::Navigation::CollectObjects  value) ;

constexpr void __cordl_internal_set_CustomAgent(bool  value) ;

constexpr void __cordl_internal_set_GenerateLinks(bool  value) ;

constexpr void __cordl_internal_set_Layers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_NavigableSurfaces(::GlobalNamespace::MRUKAnchor_SceneLabels  value) ;

constexpr void __cordl_internal_set_OverrideTileSize(bool  value) ;

constexpr void __cordl_internal_set_OverrideVoxelSize(bool  value) ;

constexpr void __cordl_internal_set_SceneObstacles(::GlobalNamespace::MRUKAnchor_SceneLabels  value) ;

constexpr void __cordl_internal_set_TileSize(int32_t  value) ;

constexpr void __cordl_internal_set_TrackUpdates(bool  value) ;

constexpr void __cordl_internal_set_UseSceneData(bool  value) ;

constexpr void __cordl_internal_set_VoxelSize(float_t  value) ;

constexpr void __cordl_internal_set__Obstacles_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__OnNavMeshInitialized_k__BackingField(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__Surfaces_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__cachedNavigableSceneLabels(::GlobalNamespace::MRUKAnchor_SceneLabels  value) ;

constexpr void __cordl_internal_set__connectionMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

constexpr void __cordl_internal_set__effectMesh(::UnityW<::Meta::XR::MRUtilityKit::EffectMesh>  value) ;

constexpr void __cordl_internal_set__navMeshSurface(::UnityW<::Unity::AI::Navigation::NavMeshSurface>  value) ;

constexpr void __cordl_internal_set__obstaclesRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__sources(::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  value) ;

constexpr void __cordl_internal_set__surfacesRoot(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x9f47590, size 0x2c8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ObstacleRoot, addr 0x9f434d8, size 0xd0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_ObstacleRoot() ;

/// [CompilerGenerated]
/// @brief Method get_Obstacles, addr 0x9f434b8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>* get_Obstacles() ;

/// [CompilerGenerated]
/// @brief Method get_OnNavMeshInitialized, addr 0x9f434a8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_OnNavMeshInitialized() ;

/// [CompilerGenerated]
/// @brief Method get_Surfaces, addr 0x9f434c8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>* get_Surfaces() ;

/// [CompilerGenerated]
/// @brief Method set_Obstacles, addr 0x9f434c0, size 0x8, virtual false, abstract: false, final false
inline void set_Obstacles(::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_OnNavMeshInitialized, addr 0x9f434b0, size 0x8, virtual false, abstract: false, final false
inline void set_OnNavMeshInitialized(::UnityEngine::Events::UnityEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Surfaces, addr 0x9f434d0, size 0x8, virtual false, abstract: false, final false
inline void set_Surfaces(::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneNavigation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneNavigation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneNavigation(SceneNavigation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneNavigation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneNavigation(SceneNavigation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25898};

/// @brief Field _minimumNavMeshSurfaceArea offset 0xffffffff size 0x4
static constexpr float_t  _minimumNavMeshSurfaceArea{static_cast<float_t>(0.0f)};

/// @brief Field _obstaclePrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  _obstaclePrefix{u"_obstacles"};

/// [Tooltip("When the scene data is loaded, this controls what room(s) will be used when baking the NavMesh.")]
/// @brief Field BuildOnSceneLoaded, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::MRUK_RoomFilter  ___BuildOnSceneLoaded;

/// [Tooltip("If enabled, updates on scene elements such as rooms and anchors will be handled by this class")]
/// @brief Field TrackUpdates, offset: 0x24, size: 0x1, def value: None
 bool  ___TrackUpdates;

/// [Tooltip("Used for specifying the type of geometry to collect when building a NavMesh")]
/// @brief Field CollectGeometry, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::AI::NavMeshCollectGeometry  ___CollectGeometry;

/// [Tooltip("Used for specifying the type of objects to include when building a NavMesh")]
/// @brief Field CollectObjects, offset: 0x2c, size: 0x4, def value: None
 ::Unity::AI::Navigation::CollectObjects  ___CollectObjects;

/// [Tooltip("The minimum distance to the walls where the navigation mesh can exist.")]
/// @brief Field AgentRadius, offset: 0x30, size: 0x4, def value: None
 float_t  ___AgentRadius;

/// [Tooltip("How much vertical clearance space must exist.")]
/// @brief Field AgentHeight, offset: 0x34, size: 0x4, def value: None
 float_t  ___AgentHeight;

/// [Tooltip("The height of discontinuities in the level the agent can climb over (i.e. steps and stairs).")]
/// @brief Field AgentClimb, offset: 0x38, size: 0x4, def value: None
 float_t  ___AgentClimb;

/// [Tooltip("Maximum slope the agent can walk up.")]
/// @brief Field AgentMaxSlope, offset: 0x3c, size: 0x4, def value: None
 float_t  ___AgentMaxSlope;

/// [Tooltip("The agents that will be assigned to the NavMesh generated with the scene data.")]
/// @brief Field Agents, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshAgent>>*  ___Agents;

/// [FormerlySerializedAs("SceneObjectsToInclude")]
/// [Tooltip("The scene objects that will contribute to the creation of the NavMesh.")]
/// @brief Field NavigableSurfaces, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::MRUKAnchor_SceneLabels  ___NavigableSurfaces;

/// [Tooltip("The scene objects that will carve a hole in the NavMesh.")]
/// @brief Field SceneObstacles, offset: 0x4c, size: 0x4, def value: None
 ::GlobalNamespace::MRUKAnchor_SceneLabels  ___SceneObstacles;

/// [Tooltip("A bitmask representing the layers to consider when selecting what that will be used for baking.")]
/// @brief Field Layers, offset: 0x50, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___Layers;

/// [Tooltip("The agent\'s used that is going to be used to build the NavMesh")]
/// @brief Field AgentIndex, offset: 0x54, size: 0x4, def value: None
 int32_t  ___AgentIndex;

/// [Tooltip("Determines whether scene data should be used for NavMesh generation.")]
/// @brief Field UseSceneData, offset: 0x58, size: 0x1, def value: None
 bool  ___UseSceneData;

/// [Tooltip("Determines whether a custom NavMeshAgent configuration should be used. If true, a new agent will be created when building the NavMesh.")]
/// @brief Field CustomAgent, offset: 0x59, size: 0x1, def value: None
 bool  ___CustomAgent;

/// [Tooltip("Allows overriding the default voxel size used in NavMesh generation. Enable this to specify a custom voxel size.")]
/// @brief Field OverrideVoxelSize, offset: 0x5a, size: 0x1, def value: None
 bool  ___OverrideVoxelSize;

/// [Tooltip("The NavMesh voxel size in world length units. Should be 4-6 voxels per character diameter.")]
/// @brief Field VoxelSize, offset: 0x5c, size: 0x4, def value: None
 float_t  ___VoxelSize;

/// [Tooltip("Allows overriding the default tile size used in NavMesh generation. Enable this to specify a custom tile size.")]
/// @brief Field OverrideTileSize, offset: 0x60, size: 0x1, def value: None
 bool  ___OverrideTileSize;

/// [Tooltip("Specifies the tile size for the NavMesh if OverrideTileSize is enabled. Represents the width and height of the square tiles in world units.")]
/// @brief Field TileSize, offset: 0x64, size: 0x4, def value: None
 int32_t  ___TileSize;

/// [Tooltip("Enables the generation of off-mesh links in the NavMesh, allowing agents to navigate between disconnected mesh regions, such as jumping or climbing.")]
/// @brief Field GenerateLinks, offset: 0x68, size: 0x1, def value: None
 bool  ___GenerateLinks;

/// @brief Field _effectMesh, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::EffectMesh>  ____effectMesh;

/// @brief Field _sources, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  ____sources;

/// @brief Field _connectionMeshes, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  ____connectionMeshes;

/// [CompilerGenerated]
/// [SerializeField]
/// [Space(10)]
/// @brief Field <OnNavMeshInitialized>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____OnNavMeshInitialized_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Obstacles>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  ____Obstacles_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Surfaces>k__BackingField, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  ____Surfaces_k__BackingField;

/// @brief Field _navMeshSurface, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::Unity::AI::Navigation::NavMeshSurface>  ____navMeshSurface;

/// @brief Field _obstaclesRoot, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____obstaclesRoot;

/// @brief Field _surfacesRoot, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____surfacesRoot;

/// @brief Field _cachedNavigableSceneLabels, offset: 0xb8, size: 0x4, def value: None
 ::GlobalNamespace::MRUKAnchor_SceneLabels  ____cachedNavigableSceneLabels;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___BuildOnSceneLoaded) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___TrackUpdates) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___CollectGeometry) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___CollectObjects) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___AgentRadius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___AgentHeight) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___AgentClimb) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___AgentMaxSlope) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___Agents) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___NavigableSurfaces) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___SceneObstacles) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___Layers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___AgentIndex) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___UseSceneData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___CustomAgent) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___OverrideVoxelSize) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___VoxelSize) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___OverrideTileSize) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___TileSize) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ___GenerateLinks) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ____effectMesh) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ____sources) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ____connectionMeshes) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ____OnNavMeshInitialized_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ____Obstacles_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ____Surfaces_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ____navMeshSurface) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ____obstaclesRoot) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ____surfacesRoot) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneNavigation, ____cachedNavigableSceneLabels) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneNavigation) == 0xc0, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
