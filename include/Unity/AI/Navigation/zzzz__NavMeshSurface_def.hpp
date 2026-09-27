#pragma once
// IWYU pragma private; include "Unity/AI/Navigation/NavMeshSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/AI/Navigation/zzzz__CollectObjects_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshCollectGeometry_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshDataInstance_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshSurface)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace Unity::AI::Navigation {
struct CollectObjects;
}
namespace Unity::AI::Navigation {
class NavMeshModifierVolume;
}
namespace Unity::AI::Navigation {
class NavMeshModifier;
}
namespace Unity::AI::Navigation {
class NavMeshSurface___c;
}
namespace UnityEngine::AI {
struct NavMeshBuildMarkup;
}
namespace UnityEngine::AI {
struct NavMeshBuildSettings;
}
namespace UnityEngine::AI {
struct NavMeshBuildSource;
}
namespace UnityEngine::AI {
struct NavMeshCollectGeometry;
}
namespace UnityEngine::AI {
struct NavMeshDataInstance;
}
namespace UnityEngine::AI {
class NavMeshData;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::AI::Navigation {
class NavMeshSurface;
}
namespace Unity::AI::Navigation {
class NavMeshSurface___c;
}
// Write type traits
MARK_REF_T(::Unity::AI::Navigation::NavMeshSurface*);
MARK_REF_T(::Unity::AI::Navigation::NavMeshSurface___c*);
DEFINE_IL2CPP_CLASS(::Unity::AI::Navigation::NavMeshSurface*, "Unity.AI.Navigation", "NavMeshSurface");
DEFINE_IL2CPP_CLASS(::Unity::AI::Navigation::NavMeshSurface___c*, "Unity.AI.Navigation", "NavMeshSurface/<>c");
// [ExecuteAlways]
// [DefaultExecutionOrder(-102)]
// [AddComponentMenu("Navigation/NavMesh Surface", 30)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.ai.navigation@2.0/manual/NavMeshSurface.html")]
// Dependencies Unity.AI.Navigation.CollectObjects, UnityEngine.AI.NavMeshCollectGeometry, UnityEngine.AI.NavMeshDataInstance, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Unity::AI::Navigation {
// Is value type: false
// CS Name: Unity.AI.Navigation.NavMeshSurface
class CORDL_TYPE NavMeshSurface : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Unity::AI::Navigation::NavMeshSurface___c;

 __declspec(property(get=get_agentTypeID, put=set_agentTypeID)) int32_t  agentTypeID;

 __declspec(property(get=get_buildHeightMesh, put=set_buildHeightMesh)) bool  buildHeightMesh;

 __declspec(property(get=get_center, put=set_center)) ::UnityEngine::Vector3  center;

 __declspec(property(get=get_collectObjects, put=set_collectObjects)) ::Unity::AI::Navigation::CollectObjects  collectObjects;

 __declspec(property(get=get_defaultArea, put=set_defaultArea)) int32_t  defaultArea;

 __declspec(property(get=get_ignoreNavMeshAgent, put=set_ignoreNavMeshAgent)) bool  ignoreNavMeshAgent;

 __declspec(property(get=get_ignoreNavMeshObstacle, put=set_ignoreNavMeshObstacle)) bool  ignoreNavMeshObstacle;

 __declspec(property(get=get_layerMask, put=set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field m_AgentTypeID, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AgentTypeID, put=__cordl_internal_set_m_AgentTypeID)) int32_t  m_AgentTypeID;

/// @brief Field m_BuildHeightMesh, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_BuildHeightMesh, put=__cordl_internal_set_m_BuildHeightMesh)) bool  m_BuildHeightMesh;

/// @brief Field m_Center, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_Center, put=__cordl_internal_set_m_Center)) ::UnityEngine::Vector3  m_Center;

/// @brief Field m_CollectObjects, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CollectObjects, put=__cordl_internal_set_m_CollectObjects)) ::Unity::AI::Navigation::CollectObjects  m_CollectObjects;

/// @brief Field m_DefaultArea, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DefaultArea, put=__cordl_internal_set_m_DefaultArea)) int32_t  m_DefaultArea;

/// @brief Field m_GenerateLinks, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_GenerateLinks, put=__cordl_internal_set_m_GenerateLinks)) bool  m_GenerateLinks;

/// @brief Field m_IgnoreNavMeshAgent, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreNavMeshAgent, put=__cordl_internal_set_m_IgnoreNavMeshAgent)) bool  m_IgnoreNavMeshAgent;

/// @brief Field m_IgnoreNavMeshObstacle, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreNavMeshObstacle, put=__cordl_internal_set_m_IgnoreNavMeshObstacle)) bool  m_IgnoreNavMeshObstacle;

/// @brief Field m_LastPosition, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LastPosition, put=__cordl_internal_set_m_LastPosition)) ::UnityEngine::Vector3  m_LastPosition;

/// @brief Field m_LastRotation, offset 0x84, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_LastRotation, put=__cordl_internal_set_m_LastRotation)) ::UnityEngine::Quaternion  m_LastRotation;

/// @brief Field m_LayerMask, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LayerMask, put=__cordl_internal_set_m_LayerMask)) ::UnityEngine::LayerMask  m_LayerMask;

/// @brief Field m_MinRegionArea, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinRegionArea, put=__cordl_internal_set_m_MinRegionArea)) float_t  m_MinRegionArea;

/// @brief Field m_NavMeshData, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NavMeshData, put=__cordl_internal_set_m_NavMeshData)) ::UnityW<::UnityEngine::AI::NavMeshData>  m_NavMeshData;

/// @brief Field m_NavMeshDataInstance, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NavMeshDataInstance, put=__cordl_internal_set_m_NavMeshDataInstance)) ::UnityEngine::AI::NavMeshDataInstance  m_NavMeshDataInstance;

/// @brief Field m_OverrideTileSize, offset 0x53, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OverrideTileSize, put=__cordl_internal_set_m_OverrideTileSize)) bool  m_OverrideTileSize;

/// @brief Field m_OverrideVoxelSize, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OverrideVoxelSize, put=__cordl_internal_set_m_OverrideVoxelSize)) bool  m_OverrideVoxelSize;

/// @brief Field m_SerializedVersion, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SerializedVersion, put=__cordl_internal_set_m_SerializedVersion)) uint8_t  m_SerializedVersion;

/// @brief Field m_Size, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_Size, put=__cordl_internal_set_m_Size)) ::UnityEngine::Vector3  m_Size;

/// @brief Field m_TileSize, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TileSize, put=__cordl_internal_set_m_TileSize)) int32_t  m_TileSize;

/// @brief Field m_UseGeometry, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UseGeometry, put=__cordl_internal_set_m_UseGeometry)) ::UnityEngine::AI::NavMeshCollectGeometry  m_UseGeometry;

/// @brief Field m_VoxelSize, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_VoxelSize, put=__cordl_internal_set_m_VoxelSize)) float_t  m_VoxelSize;

 __declspec(property(get=get_minRegionArea, put=set_minRegionArea)) float_t  minRegionArea;

 __declspec(property(get=get_navMeshData, put=set_navMeshData)) ::UnityW<::UnityEngine::AI::NavMeshData>  navMeshData;

 __declspec(property(get=get_navMeshDataInstance)) ::UnityEngine::AI::NavMeshDataInstance  navMeshDataInstance;

 __declspec(property(get=get_overrideTileSize, put=set_overrideTileSize)) bool  overrideTileSize;

 __declspec(property(get=get_overrideVoxelSize, put=set_overrideVoxelSize)) bool  overrideVoxelSize;

/// @brief Field s_NavMeshSurfaces, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_NavMeshSurfaces, put=setStaticF_s_NavMeshSurfaces)) ::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshSurface>>*  s_NavMeshSurfaces;

 __declspec(property(get=get_size, put=set_size)) ::UnityEngine::Vector3  size;

 __declspec(property(get=get_tileSize, put=set_tileSize)) int32_t  tileSize;

 __declspec(property(get=get_useGeometry, put=set_useGeometry)) ::UnityEngine::AI::NavMeshCollectGeometry  useGeometry;

 __declspec(property(get=get_voxelSize, put=set_voxelSize)) float_t  voxelSize;

/// @brief Method Abs, addr 0xae75adc, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Abs(::UnityEngine::Vector3  v) ;

/// @brief Method AddData, addr 0xae74b4c, size 0x158, virtual false, abstract: false, final false
inline void AddData() ;

/// @brief Method AppendModifierVolumes, addr 0xae76538, size 0x5e0, virtual false, abstract: false, final false
inline void AppendModifierVolumes(::by_ref<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>  sources) ;

/// @brief Method BuildNavMesh, addr 0xae7503c, size 0x230, virtual false, abstract: false, final false
inline void BuildNavMesh() ;

/// @brief Method CalculateWorldBounds, addr 0xae75aec, size 0x83c, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds CalculateWorldBounds(::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  sources) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method ClearNavMeshSurfaces, addr 0xae74814, size 0x98, virtual false, abstract: false, final false
static inline void ClearNavMeshSurfaces() ;

/// @brief Method CollectSources, addr 0xae7526c, size 0x870, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* CollectSources() ;

/// @brief Method CollectSourcesInHierarchy, addr 0xae76b18, size 0x2c, virtual false, abstract: false, final false
inline void CollectSourcesInHierarchy(::UnityEngine::Transform*  root, int32_t  includedLayerMask, ::UnityEngine::AI::NavMeshCollectGeometry  geometry, int32_t  areaByDefault, bool  generateLinksByDefault, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*  markups, bool  includeOnlyMarkedObjects, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  results) ;

/// @brief Method CollectSourcesInVolume, addr 0xae76d40, size 0x50, virtual false, abstract: false, final false
inline void CollectSourcesInVolume(::UnityEngine::Bounds  includedWorldBounds, int32_t  includedLayerMask, ::UnityEngine::AI::NavMeshCollectGeometry  geometry, int32_t  areaByDefault, bool  generateLinksByDefault, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*  markups, bool  includeOnlyMarkedObjects, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  results) ;

/// @brief Method GetBuildSettings, addr 0xae74eb0, size 0x18c, virtual false, abstract: false, final false
inline ::UnityEngine::AI::NavMeshBuildSettings GetBuildSettings() ;

/// @brief Method GetInflatedBounds, addr 0xae74754, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds GetInflatedBounds() ;

/// @brief Method GetWorldBounds, addr 0xae76b44, size 0x1fc, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds GetWorldBounds(::UnityEngine::Matrix4x4  mat, ::UnityEngine::Bounds  bounds) ;

/// @brief Method HasTransformChanged, addr 0xae76d90, size 0xc4, virtual false, abstract: false, final false
inline bool HasTransformChanged() ;

static inline ::Unity::AI::Navigation::NavMeshSurface* New_ctor() ;

/// @brief Method OnDisable, addr 0xae74ca4, size 0x64, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xae748ac, size 0x5c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Register, addr 0xae74908, size 0x244, virtual false, abstract: false, final false
static inline void Register(::Unity::AI::Navigation::NavMeshSurface*  surface) ;

/// @brief Method RemoveData, addr 0xae74d08, size 0x20, virtual false, abstract: false, final false
inline void RemoveData() ;

/// @brief Method Unregister, addr 0xae74d28, size 0x188, virtual false, abstract: false, final false
static inline void Unregister(::Unity::AI::Navigation::NavMeshSurface*  surface) ;

/// @brief Method UpdateActive, addr 0xae76438, size 0xcc, virtual false, abstract: false, final false
static inline void UpdateActive() ;

/// @brief Method UpdateDataIfTransformChanged, addr 0xae76504, size 0x34, virtual false, abstract: false, final false
inline void UpdateDataIfTransformChanged() ;

/// @brief Method UpdateNavMesh, addr 0xae76328, size 0x110, virtual false, abstract: false, final false
inline ::UnityEngine::AsyncOperation* UpdateNavMesh(::UnityEngine::AI::NavMeshData*  data) ;

constexpr int32_t const& __cordl_internal_get_m_AgentTypeID() const;

constexpr int32_t& __cordl_internal_get_m_AgentTypeID() ;

constexpr bool const& __cordl_internal_get_m_BuildHeightMesh() const;

constexpr bool& __cordl_internal_get_m_BuildHeightMesh() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Center() ;

constexpr ::Unity::AI::Navigation::CollectObjects const& __cordl_internal_get_m_CollectObjects() const;

constexpr ::Unity::AI::Navigation::CollectObjects& __cordl_internal_get_m_CollectObjects() ;

constexpr int32_t const& __cordl_internal_get_m_DefaultArea() const;

constexpr int32_t& __cordl_internal_get_m_DefaultArea() ;

constexpr bool const& __cordl_internal_get_m_GenerateLinks() const;

constexpr bool& __cordl_internal_get_m_GenerateLinks() ;

constexpr bool const& __cordl_internal_get_m_IgnoreNavMeshAgent() const;

constexpr bool& __cordl_internal_get_m_IgnoreNavMeshAgent() ;

constexpr bool const& __cordl_internal_get_m_IgnoreNavMeshObstacle() const;

constexpr bool& __cordl_internal_get_m_IgnoreNavMeshObstacle() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_LastRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_LastRotation() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_LayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_LayerMask() ;

constexpr float_t const& __cordl_internal_get_m_MinRegionArea() const;

constexpr float_t& __cordl_internal_get_m_MinRegionArea() ;

constexpr ::UnityW<::UnityEngine::AI::NavMeshData> const& __cordl_internal_get_m_NavMeshData() const;

constexpr ::UnityW<::UnityEngine::AI::NavMeshData>& __cordl_internal_get_m_NavMeshData() ;

constexpr ::UnityEngine::AI::NavMeshDataInstance const& __cordl_internal_get_m_NavMeshDataInstance() const;

constexpr ::UnityEngine::AI::NavMeshDataInstance& __cordl_internal_get_m_NavMeshDataInstance() ;

constexpr bool const& __cordl_internal_get_m_OverrideTileSize() const;

constexpr bool& __cordl_internal_get_m_OverrideTileSize() ;

constexpr bool const& __cordl_internal_get_m_OverrideVoxelSize() const;

constexpr bool& __cordl_internal_get_m_OverrideVoxelSize() ;

constexpr uint8_t const& __cordl_internal_get_m_SerializedVersion() const;

constexpr uint8_t& __cordl_internal_get_m_SerializedVersion() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Size() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Size() ;

constexpr int32_t const& __cordl_internal_get_m_TileSize() const;

constexpr int32_t& __cordl_internal_get_m_TileSize() ;

constexpr ::UnityEngine::AI::NavMeshCollectGeometry const& __cordl_internal_get_m_UseGeometry() const;

constexpr ::UnityEngine::AI::NavMeshCollectGeometry& __cordl_internal_get_m_UseGeometry() ;

constexpr float_t const& __cordl_internal_get_m_VoxelSize() const;

constexpr float_t& __cordl_internal_get_m_VoxelSize() ;

constexpr void __cordl_internal_set_m_AgentTypeID(int32_t  value) ;

constexpr void __cordl_internal_set_m_BuildHeightMesh(bool  value) ;

constexpr void __cordl_internal_set_m_Center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_CollectObjects(::Unity::AI::Navigation::CollectObjects  value) ;

constexpr void __cordl_internal_set_m_DefaultArea(int32_t  value) ;

constexpr void __cordl_internal_set_m_GenerateLinks(bool  value) ;

constexpr void __cordl_internal_set_m_IgnoreNavMeshAgent(bool  value) ;

constexpr void __cordl_internal_set_m_IgnoreNavMeshObstacle(bool  value) ;

constexpr void __cordl_internal_set_m_LastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_LastRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_LayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_m_MinRegionArea(float_t  value) ;

constexpr void __cordl_internal_set_m_NavMeshData(::UnityW<::UnityEngine::AI::NavMeshData>  value) ;

constexpr void __cordl_internal_set_m_NavMeshDataInstance(::UnityEngine::AI::NavMeshDataInstance  value) ;

constexpr void __cordl_internal_set_m_OverrideTileSize(bool  value) ;

constexpr void __cordl_internal_set_m_OverrideVoxelSize(bool  value) ;

constexpr void __cordl_internal_set_m_SerializedVersion(uint8_t  value) ;

constexpr void __cordl_internal_set_m_Size(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_TileSize(int32_t  value) ;

constexpr void __cordl_internal_set_m_UseGeometry(::UnityEngine::AI::NavMeshCollectGeometry  value) ;

constexpr void __cordl_internal_set_m_VoxelSize(float_t  value) ;

/// @brief Method .ctor, addr 0xae76e54, size 0xd8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshSurface>>* getStaticF_s_NavMeshSurfaces() ;

/// @brief Method get_activeSurfaces, addr 0xae746fc, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshSurface>>* get_activeSurfaces() ;

/// @brief Method get_agentTypeID, addr 0xae745e4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_agentTypeID() ;

/// @brief Method get_buildHeightMesh, addr 0xae746d4, size 0x8, virtual false, abstract: false, final false
inline bool get_buildHeightMesh() ;

/// @brief Method get_center, addr 0xae7461c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_center() ;

/// @brief Method get_collectObjects, addr 0xae745f4, size 0x8, virtual false, abstract: false, final false
inline ::Unity::AI::Navigation::CollectObjects get_collectObjects() ;

/// @brief Method get_defaultArea, addr 0xae74654, size 0x8, virtual false, abstract: false, final false
inline int32_t get_defaultArea() ;

/// @brief Method get_ignoreNavMeshAgent, addr 0xae74664, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreNavMeshAgent() ;

/// @brief Method get_ignoreNavMeshObstacle, addr 0xae74674, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreNavMeshObstacle() ;

/// @brief Method get_layerMask, addr 0xae74634, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_layerMask() ;

/// @brief Method get_minRegionArea, addr 0xae746c4, size 0x8, virtual false, abstract: false, final false
inline float_t get_minRegionArea() ;

/// @brief Method get_navMeshData, addr 0xae746e4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AI::NavMeshData> get_navMeshData() ;

/// @brief Method get_navMeshDataInstance, addr 0xae746f4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AI::NavMeshDataInstance get_navMeshDataInstance() ;

/// @brief Method get_overrideTileSize, addr 0xae74684, size 0x8, virtual false, abstract: false, final false
inline bool get_overrideTileSize() ;

/// @brief Method get_overrideVoxelSize, addr 0xae746a4, size 0x8, virtual false, abstract: false, final false
inline bool get_overrideVoxelSize() ;

/// @brief Method get_size, addr 0xae74604, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_size() ;

/// @brief Method get_tileSize, addr 0xae74694, size 0x8, virtual false, abstract: false, final false
inline int32_t get_tileSize() ;

/// @brief Method get_useGeometry, addr 0xae74644, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AI::NavMeshCollectGeometry get_useGeometry() ;

/// @brief Method get_voxelSize, addr 0xae746b4, size 0x8, virtual false, abstract: false, final false
inline float_t get_voxelSize() ;

static inline void setStaticF_s_NavMeshSurfaces(::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshSurface>>*  value) ;

/// @brief Method set_agentTypeID, addr 0xae745ec, size 0x8, virtual false, abstract: false, final false
inline void set_agentTypeID(int32_t  value) ;

/// @brief Method set_buildHeightMesh, addr 0xae746dc, size 0x8, virtual false, abstract: false, final false
inline void set_buildHeightMesh(bool  value) ;

/// @brief Method set_center, addr 0xae74628, size 0xc, virtual false, abstract: false, final false
inline void set_center(::UnityEngine::Vector3  value) ;

/// @brief Method set_collectObjects, addr 0xae745fc, size 0x8, virtual false, abstract: false, final false
inline void set_collectObjects(::Unity::AI::Navigation::CollectObjects  value) ;

/// @brief Method set_defaultArea, addr 0xae7465c, size 0x8, virtual false, abstract: false, final false
inline void set_defaultArea(int32_t  value) ;

/// @brief Method set_ignoreNavMeshAgent, addr 0xae7466c, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreNavMeshAgent(bool  value) ;

/// @brief Method set_ignoreNavMeshObstacle, addr 0xae7467c, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreNavMeshObstacle(bool  value) ;

/// @brief Method set_layerMask, addr 0xae7463c, size 0x8, virtual false, abstract: false, final false
inline void set_layerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_minRegionArea, addr 0xae746cc, size 0x8, virtual false, abstract: false, final false
inline void set_minRegionArea(float_t  value) ;

/// @brief Method set_navMeshData, addr 0xae746ec, size 0x8, virtual false, abstract: false, final false
inline void set_navMeshData(::UnityEngine::AI::NavMeshData*  value) ;

/// @brief Method set_overrideTileSize, addr 0xae7468c, size 0x8, virtual false, abstract: false, final false
inline void set_overrideTileSize(bool  value) ;

/// @brief Method set_overrideVoxelSize, addr 0xae746ac, size 0x8, virtual false, abstract: false, final false
inline void set_overrideVoxelSize(bool  value) ;

/// @brief Method set_size, addr 0xae74610, size 0xc, virtual false, abstract: false, final false
inline void set_size(::UnityEngine::Vector3  value) ;

/// @brief Method set_tileSize, addr 0xae7469c, size 0x8, virtual false, abstract: false, final false
inline void set_tileSize(int32_t  value) ;

/// @brief Method set_useGeometry, addr 0xae7464c, size 0x8, virtual false, abstract: false, final false
inline void set_useGeometry(::UnityEngine::AI::NavMeshCollectGeometry  value) ;

/// @brief Method set_voxelSize, addr 0xae746bc, size 0x8, virtual false, abstract: false, final false
inline void set_voxelSize(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavMeshSurface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavMeshSurface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMeshSurface(NavMeshSurface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshSurface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMeshSurface(NavMeshSurface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32517};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_SerializedVersion, offset: 0x20, size: 0x1, def value: None
 uint8_t  ___m_SerializedVersion;

/// [SerializeField]
/// @brief Field m_AgentTypeID, offset: 0x24, size: 0x4, def value: None
 int32_t  ___m_AgentTypeID;

/// [SerializeField]
/// @brief Field m_CollectObjects, offset: 0x28, size: 0x4, def value: None
 ::Unity::AI::Navigation::CollectObjects  ___m_CollectObjects;

/// [SerializeField]
/// @brief Field m_Size, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_Size;

/// [SerializeField]
/// @brief Field m_Center, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_Center;

/// [SerializeField]
/// @brief Field m_LayerMask, offset: 0x44, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___m_LayerMask;

/// [SerializeField]
/// @brief Field m_UseGeometry, offset: 0x48, size: 0x4, def value: None
 ::UnityEngine::AI::NavMeshCollectGeometry  ___m_UseGeometry;

/// [SerializeField]
/// @brief Field m_DefaultArea, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___m_DefaultArea;

/// [SerializeField]
/// @brief Field m_GenerateLinks, offset: 0x50, size: 0x1, def value: None
 bool  ___m_GenerateLinks;

/// [SerializeField]
/// @brief Field m_IgnoreNavMeshAgent, offset: 0x51, size: 0x1, def value: None
 bool  ___m_IgnoreNavMeshAgent;

/// [SerializeField]
/// @brief Field m_IgnoreNavMeshObstacle, offset: 0x52, size: 0x1, def value: None
 bool  ___m_IgnoreNavMeshObstacle;

/// [SerializeField]
/// @brief Field m_OverrideTileSize, offset: 0x53, size: 0x1, def value: None
 bool  ___m_OverrideTileSize;

/// [SerializeField]
/// @brief Field m_TileSize, offset: 0x54, size: 0x4, def value: None
 int32_t  ___m_TileSize;

/// [SerializeField]
/// @brief Field m_OverrideVoxelSize, offset: 0x58, size: 0x1, def value: None
 bool  ___m_OverrideVoxelSize;

/// [SerializeField]
/// @brief Field m_VoxelSize, offset: 0x5c, size: 0x4, def value: None
 float_t  ___m_VoxelSize;

/// [SerializeField]
/// @brief Field m_MinRegionArea, offset: 0x60, size: 0x4, def value: None
 float_t  ___m_MinRegionArea;

/// [FormerlySerializedAs("m_BakedNavMeshData")]
/// [SerializeField]
/// @brief Field m_NavMeshData, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AI::NavMeshData>  ___m_NavMeshData;

/// [SerializeField]
/// @brief Field m_BuildHeightMesh, offset: 0x70, size: 0x1, def value: None
 bool  ___m_BuildHeightMesh;

/// @brief Field m_NavMeshDataInstance, offset: 0x74, size: 0x4, def value: None
 ::UnityEngine::AI::NavMeshDataInstance  ___m_NavMeshDataInstance;

/// @brief Field m_LastPosition, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LastPosition;

/// @brief Field m_LastRotation, offset: 0x84, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_LastRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_SerializedVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_AgentTypeID) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_CollectObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_Size) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_Center) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_LayerMask) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_UseGeometry) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_DefaultArea) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_GenerateLinks) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_IgnoreNavMeshAgent) == 0x51, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_IgnoreNavMeshObstacle) == 0x52, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_OverrideTileSize) == 0x53, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_TileSize) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_OverrideVoxelSize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_VoxelSize) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_MinRegionArea) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_NavMeshData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_BuildHeightMesh) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_NavMeshDataInstance) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_LastPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshSurface, ___m_LastRotation) == 0x84, "Offset mismatch!");

static_assert(sizeof(::Unity::AI::Navigation::NavMeshSurface) == 0x98, "Size mismatch!");

} // namespace end def Unity::AI::Navigation
// [CompilerGenerated]
// Dependencies System.Object
namespace Unity::AI::Navigation {
// Is value type: false
// CS Name: Unity.AI.Navigation.NavMeshSurface/<>c
class CORDL_TYPE NavMeshSurface___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Unity::AI::Navigation::NavMeshSurface___c*  __9;

/// @brief Field <>9__86_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__86_0, put=setStaticF___9__86_0)) ::System::Predicate_1<::UnityW<::Unity::AI::Navigation::NavMeshModifierVolume>>*  __9__86_0;

/// @brief Field <>9__87_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__87_0, put=setStaticF___9__87_0)) ::System::Predicate_1<::UnityW<::Unity::AI::Navigation::NavMeshModifier>>*  __9__87_0;

/// @brief Field <>9__87_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__87_1, put=setStaticF___9__87_1)) ::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*  __9__87_1;

/// @brief Field <>9__87_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__87_2, put=setStaticF___9__87_2)) ::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*  __9__87_2;

static inline ::Unity::AI::Navigation::NavMeshSurface___c* New_ctor() ;

/// @brief Method <AppendModifierVolumes>b__86_0, addr 0xae77034, size 0x28, virtual false, abstract: false, final false
inline bool _AppendModifierVolumes_b__86_0(::Unity::AI::Navigation::NavMeshModifierVolume*  x) ;

/// @brief Method <CollectSources>b__87_0, addr 0xae7705c, size 0x28, virtual false, abstract: false, final false
inline bool _CollectSources_b__87_0(::Unity::AI::Navigation::NavMeshModifier*  x) ;

/// @brief Method <CollectSources>b__87_1, addr 0xae77084, size 0xe8, virtual false, abstract: false, final false
inline bool _CollectSources_b__87_1(::UnityEngine::AI::NavMeshBuildSource  x) ;

/// @brief Method <CollectSources>b__87_2, addr 0xae7716c, size 0xe8, virtual false, abstract: false, final false
inline bool _CollectSources_b__87_2(::UnityEngine::AI::NavMeshBuildSource  x) ;

/// @brief Method .ctor, addr 0xae7702c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::AI::Navigation::NavMeshSurface___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityW<::Unity::AI::Navigation::NavMeshModifierVolume>>* getStaticF___9__86_0() ;

static inline ::System::Predicate_1<::UnityW<::Unity::AI::Navigation::NavMeshModifier>>* getStaticF___9__87_0() ;

static inline ::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>* getStaticF___9__87_1() ;

static inline ::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>* getStaticF___9__87_2() ;

static inline void setStaticF___9(::Unity::AI::Navigation::NavMeshSurface___c*  value) ;

static inline void setStaticF___9__86_0(::System::Predicate_1<::UnityW<::Unity::AI::Navigation::NavMeshModifierVolume>>*  value) ;

static inline void setStaticF___9__87_0(::System::Predicate_1<::UnityW<::Unity::AI::Navigation::NavMeshModifier>>*  value) ;

static inline void setStaticF___9__87_1(::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*  value) ;

static inline void setStaticF___9__87_2(::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavMeshSurface___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavMeshSurface___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMeshSurface___c(NavMeshSurface___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshSurface___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMeshSurface___c(NavMeshSurface___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32516};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::AI::Navigation::NavMeshSurface___c) == 0x10, "Size mismatch!");

} // namespace end def Unity::AI::Navigation
