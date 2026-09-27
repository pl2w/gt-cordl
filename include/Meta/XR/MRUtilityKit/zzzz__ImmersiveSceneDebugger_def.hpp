#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/ImmersiveSceneDebugger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__ImmersiveSceneDebugger_DebugAction_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_PositioningMethod_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshTriangulation_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImmersiveSceneDebugger)
namespace GlobalNamespace {
struct ImmersiveSceneDebugger_DebugAction;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
struct __c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d;
}
namespace Meta::XR::MRUtilityKit {
class ImmersiveSceneDebugger___c;
}
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
}
namespace Meta::XR::MRUtilityKit {
class MRUKRoom;
}
namespace Meta::XR::MRUtilityKit {
class SpaceMapGPU;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class ImmersiveSceneDebugger;
}
namespace Meta::XR::MRUtilityKit {
class ImmersiveSceneDebugger___c;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*);
MARK_REF_T(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*, "Meta.XR.MRUtilityKit", "ImmersiveSceneDebugger");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*, "Meta.XR.MRUtilityKit", "ImmersiveSceneDebugger/<>c");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.ImmersiveSceneDebugger::DebugAction, Meta.XR.MRUtilityKit.MRUK::PositioningMethod, Meta.XR.MRUtilityKit.MRUKAnchor::SceneLabels, System.Nullable`1<T>, UnityEngine.AI.NavMeshTriangulation, UnityEngine.MonoBehaviour
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger
class CORDL_TYPE ImmersiveSceneDebugger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DebugAction = ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction;

using __c = ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c;

 __declspec(property(get=get_ShouldDisplayGlobalMesh, put=set_ShouldDisplayGlobalMesh)) bool  ShouldDisplayGlobalMesh;

 __declspec(property(get=get_ShouldDisplayNavMesh, put=set_ShouldDisplayNavMesh)) bool  ShouldDisplayNavMesh;

 __declspec(property(get=get_ShouldToggleGlobalMeshCollision, put=set_ShouldToggleGlobalMeshCollision)) bool  ShouldToggleGlobalMeshCollision;

/// @brief Field ShowDebugAnchors, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowDebugAnchors, put=__cordl_internal_set_ShowDebugAnchors)) bool  ShowDebugAnchors;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger>  _Instance_k__BackingField;

/// @brief Field _cameraRig, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraRig, put=__cordl_internal_set__cameraRig)) ::UnityW<::GlobalNamespace::OVRCameraRig>  _cameraRig;

/// @brief Field _checkerMeshMaterial, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__checkerMeshMaterial, put=__cordl_internal_set__checkerMeshMaterial)) ::UnityW<::UnityEngine::Material>  _checkerMeshMaterial;

/// @brief Field _color, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) int32_t  _color;

/// @brief Field _cull, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__cull, put=__cordl_internal_set__cull)) int32_t  _cull;

/// @brief Field _currentDebugAction, offset 0x200, size 0x10 
 __declspec(property(get=__cordl_internal_get__currentDebugAction, put=__cordl_internal_set__currentDebugAction)) ::System::Nullable_1<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction>  _currentDebugAction;

/// @brief Field _currentDebugMessage, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentDebugMessage, put=__cordl_internal_set__currentDebugMessage)) ::StringW  _currentDebugMessage;

/// @brief Field _currentRoom, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentRoom, put=__cordl_internal_set__currentRoom)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  _currentRoom;

/// @brief Field _debugAnchor, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugAnchor, put=__cordl_internal_set__debugAnchor)) ::UnityW<::UnityEngine::GameObject>  _debugAnchor;

/// @brief Field _debugAnchors, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugAnchors, put=__cordl_internal_set__debugAnchors)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _debugAnchors;

/// @brief Field _debugCheckerMesh, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugCheckerMesh, put=__cordl_internal_set__debugCheckerMesh)) ::UnityW<::UnityEngine::Mesh>  _debugCheckerMesh;

/// @brief Field _debugCube, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugCube, put=__cordl_internal_set__debugCube)) ::UnityW<::UnityEngine::GameObject>  _debugCube;

/// @brief Field _debugMaterial, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugMaterial, put=__cordl_internal_set__debugMaterial)) ::UnityW<::UnityEngine::Material>  _debugMaterial;

/// @brief Field _debugMessage, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugMessage, put=__cordl_internal_set__debugMessage)) ::StringW  _debugMessage;

/// @brief Field _debugNormal, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugNormal, put=__cordl_internal_set__debugNormal)) ::UnityW<::UnityEngine::GameObject>  _debugNormal;

/// @brief Field _debugShader, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugShader, put=__cordl_internal_set__debugShader)) ::UnityW<::UnityEngine::Shader>  _debugShader;

/// @brief Field _debugSphere, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugSphere, put=__cordl_internal_set__debugSphere)) ::UnityW<::UnityEngine::GameObject>  _debugSphere;

/// @brief Field _dstBlend, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__dstBlend, put=__cordl_internal_set__dstBlend)) int32_t  _dstBlend;

/// @brief Field _getBestPoseFromRaycastDebugger, offset 0x160, size 0x18 
 __declspec(property(get=__cordl_internal_get__getBestPoseFromRaycastDebugger, put=__cordl_internal_set__getBestPoseFromRaycastDebugger)) ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  _getBestPoseFromRaycastDebugger;

/// @brief Field _getClosestSeatPoseDebugger, offset 0x1c8, size 0x18 
 __declspec(property(get=__cordl_internal_get__getClosestSeatPoseDebugger, put=__cordl_internal_set__getClosestSeatPoseDebugger)) ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  _getClosestSeatPoseDebugger;

/// @brief Field _getClosestSurfacePositionDebugger, offset 0x1e0, size 0x18 
 __declspec(property(get=__cordl_internal_get__getClosestSurfacePositionDebugger, put=__cordl_internal_set__getClosestSurfacePositionDebugger)) ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  _getClosestSurfacePositionDebugger;

/// @brief Field _getKeyWallDebugger, offset 0x178, size 0x18 
 __declspec(property(get=__cordl_internal_get__getKeyWallDebugger, put=__cordl_internal_set__getKeyWallDebugger)) ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  _getKeyWallDebugger;

/// @brief Field _getLargestSurfaceDebugger, offset 0x1b0, size 0x18 
 __declspec(property(get=__cordl_internal_get__getLargestSurfaceDebugger, put=__cordl_internal_set__getLargestSurfaceDebugger)) ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  _getLargestSurfaceDebugger;

/// @brief Field _getLaunchSpaceSetupDebugger, offset 0x190, size 0x18 
 __declspec(property(get=__cordl_internal_get__getLaunchSpaceSetupDebugger, put=__cordl_internal_set__getLaunchSpaceSetupDebugger)) ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  _getLaunchSpaceSetupDebugger;

/// @brief Field _globalMeshAnchor, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__globalMeshAnchor, put=__cordl_internal_set__globalMeshAnchor)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  _globalMeshAnchor;

/// @brief Field _globalMeshCollider, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__globalMeshCollider, put=__cordl_internal_set__globalMeshCollider)) ::UnityW<::UnityEngine::MeshCollider>  _globalMeshCollider;

/// @brief Field _globalMeshGO, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__globalMeshGO, put=__cordl_internal_set__globalMeshGO)) ::UnityW<::UnityEngine::GameObject>  _globalMeshGO;

/// @brief Field _isPositionInRoom, offset 0x110, size 0x18 
 __declspec(property(get=__cordl_internal_get__isPositionInRoom, put=__cordl_internal_set__isPositionInRoom)) ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  _isPositionInRoom;

/// @brief Field _largestSurfaceFilter, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get__largestSurfaceFilter, put=__cordl_internal_set__largestSurfaceFilter)) ::GlobalNamespace::MRUKAnchor_SceneLabels  _largestSurfaceFilter;

/// @brief Field _navMeshMaterial, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__navMeshMaterial, put=__cordl_internal_set__navMeshMaterial)) ::UnityW<::UnityEngine::Material>  _navMeshMaterial;

/// @brief Field _navMeshTriangulation, offset 0xb8, size 0x18 
 __declspec(property(get=__cordl_internal_get__navMeshTriangulation, put=__cordl_internal_set__navMeshTriangulation)) ::UnityEngine::AI::NavMeshTriangulation  _navMeshTriangulation;

/// @brief Field _navMeshViz, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__navMeshViz, put=__cordl_internal_set__navMeshViz)) ::UnityW<::UnityEngine::GameObject>  _navMeshViz;

/// @brief Field _positioningMethod, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get__positioningMethod, put=__cordl_internal_set__positioningMethod)) ::GlobalNamespace::MRUK_PositioningMethod  _positioningMethod;

/// @brief Field _previousShowDebugAnchors, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__previousShowDebugAnchors, put=__cordl_internal_set__previousShowDebugAnchors)) bool  _previousShowDebugAnchors;

/// @brief Field _previousShownDebugAnchor, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousShownDebugAnchor, put=__cordl_internal_set__previousShownDebugAnchor)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  _previousShownDebugAnchor;

/// @brief Field _raycastDebugger, offset 0x140, size 0x18 
 __declspec(property(get=__cordl_internal_get__raycastDebugger, put=__cordl_internal_set__raycastDebugger)) ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  _raycastDebugger;

 __declspec(property(get=get__roomHasChanged)) bool  _roomHasChanged;

/// @brief Field _sceneDetails, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__sceneDetails, put=__cordl_internal_set__sceneDetails)) ::StringW  _sceneDetails;

/// @brief Field _shouldDisplayGlobalMesh, offset 0x210, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldDisplayGlobalMesh, put=__cordl_internal_set__shouldDisplayGlobalMesh)) bool  _shouldDisplayGlobalMesh;

/// @brief Field _shouldDisplayNavMesh, offset 0x212, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldDisplayNavMesh, put=__cordl_internal_set__shouldDisplayNavMesh)) bool  _shouldDisplayNavMesh;

/// @brief Field _shouldToggleGlobalMeshCollision, offset 0x211, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldToggleGlobalMeshCollision, put=__cordl_internal_set__shouldToggleGlobalMeshCollision)) bool  _shouldToggleGlobalMeshCollision;

/// @brief Field _showDebugAnchorsDebugAction, offset 0x128, size 0x18 
 __declspec(property(get=__cordl_internal_get__showDebugAnchorsDebugAction, put=__cordl_internal_set__showDebugAnchorsDebugAction)) ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  _showDebugAnchorsDebugAction;

/// @brief Field _spaceMapGPU, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__spaceMapGPU, put=__cordl_internal_set__spaceMapGPU)) ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>  _spaceMapGPU;

/// @brief Field _srcBlend, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__srcBlend, put=__cordl_internal_set__srcBlend)) int32_t  _srcBlend;

/// @brief Field _zWrite, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__zWrite, put=__cordl_internal_set__zWrite)) int32_t  _zWrite;

/// @brief Field exportGlobalMeshJSON, offset 0x1f8, size 0x1 
 __declspec(property(get=__cordl_internal_get_exportGlobalMeshJSON, put=__cordl_internal_set_exportGlobalMeshJSON)) bool  exportGlobalMeshJSON;

/// @brief Field visualHelperMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_visualHelperMaterial, put=__cordl_internal_set_visualHelperMaterial)) ::UnityW<::UnityEngine::Material>  visualHelperMaterial;

/// @brief Method Awake, addr 0x9f18af0, size 0x2f8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateDebugPrefabSource, addr 0x9f1bbec, size 0x488, virtual false, abstract: false, final false
inline void CreateDebugPrefabSource(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// @brief Method CreateDebugPrimitives, addr 0x9f1a114, size 0x3bc, virtual false, abstract: false, final false
inline void CreateDebugPrimitives() ;

/// @brief Method CreateGridPattern, addr 0x9f1c330, size 0x718, virtual false, abstract: false, final false
inline void CreateGridPattern(::UnityEngine::Transform*  parentTransform, ::UnityEngine::Vector3  localOffset, ::UnityEngine::Quaternion  localRotation) ;

/// @brief Method DisplayDebugAnchors, addr 0x9f1b19c, size 0x30, virtual false, abstract: false, final false
inline void DisplayDebugAnchors() ;

/// @brief Method DisplayGlobalMesh, addr 0x9f18278, size 0x220, virtual false, abstract: false, final false
inline void DisplayGlobalMesh(bool  isOn) ;

/// @brief Method DisplayNavMesh, addr 0x9f18730, size 0x320, virtual false, abstract: false, final false
inline void DisplayNavMesh(bool  isOn) ;

/// @brief Method ExportJSON, addr 0x9f1b87c, size 0x36c, virtual false, abstract: false, final false
inline void ExportJSON() ;

/// @brief Method GenerateDebugAnchor, addr 0x9f1aa20, size 0x2b8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GenerateDebugAnchor(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// @brief Method GetBestPoseFromRayCast, addr 0x9f1b1f8, size 0x2c, virtual false, abstract: false, final false
inline void GetBestPoseFromRayCast() ;

/// @brief Method GetBestPoseFromRaycastDebugger, addr 0x9f1907c, size 0xfc, virtual false, abstract: false, final false
inline ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction GetBestPoseFromRaycastDebugger() ;

/// @brief Method GetClosestSeatPose, addr 0x9f1b2ac, size 0x30, virtual false, abstract: false, final false
inline void GetClosestSeatPose() ;

/// @brief Method GetClosestSeatPoseDebugger, addr 0x9f195d8, size 0x164, virtual false, abstract: false, final false
inline ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction GetClosestSeatPoseDebugger() ;

/// @brief Method GetClosestSurfacePosition, addr 0x9f1b2dc, size 0x2c, virtual false, abstract: false, final false
inline void GetClosestSurfacePosition() ;

/// @brief Method GetClosestSurfacePositionDebugger, addr 0x9f1973c, size 0xfc, virtual false, abstract: false, final false
inline ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction GetClosestSurfacePositionDebugger() ;

/// @brief Method GetControllerRay, addr 0x9f1b370, size 0x2d8, virtual false, abstract: false, final false
inline ::UnityEngine::Ray GetControllerRay() ;

/// @brief Method GetKeyWall, addr 0x9f1b224, size 0x30, virtual false, abstract: false, final false
inline void GetKeyWall() ;

/// @brief Method GetKeyWallDebugger, addr 0x9f19178, size 0x164, virtual false, abstract: false, final false
inline ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction GetKeyWallDebugger() ;

/// @brief Method GetLargestSurface, addr 0x9f1b280, size 0x2c, virtual false, abstract: false, final false
inline void GetLargestSurface() ;

/// @brief Method GetLargestSurfaceDebugger, addr 0x9f194dc, size 0xfc, virtual false, abstract: false, final false
inline ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction GetLargestSurfaceDebugger() ;

/// @brief Method GetLaunchSpaceSetup, addr 0x9f1b254, size 0x2c, virtual false, abstract: false, final false
inline void GetLaunchSpaceSetup() ;

/// @brief Method GetLaunchSpaceSetupDebugger, addr 0x9f192dc, size 0x200, virtual false, abstract: false, final false
inline ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction GetLaunchSpaceSetupDebugger() ;

/// @brief Method InstantiateGlobalMesh, addr 0x9f1b68c, size 0x1f0, virtual false, abstract: false, final false
inline void InstantiateGlobalMesh(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::Mesh>>*  onMeshSegmentInstantiated) ;

/// @brief Method IsPositionInRoom, addr 0x9f1afc0, size 0x2c, virtual false, abstract: false, final false
inline void IsPositionInRoom() ;

/// @brief Method IsPositionInRoomDebugger, addr 0x9f18de8, size 0xcc, virtual false, abstract: false, final false
inline ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction IsPositionInRoomDebugger() ;

static inline ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9f1ace4, size 0xf8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9f1acd8, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnSceneLoaded, addr 0x9f1addc, size 0x1e4, virtual false, abstract: false, final false
inline void OnSceneLoaded() ;

/// @brief Method RayCastDebugger, addr 0x9f18f80, size 0xfc, virtual false, abstract: false, final false
inline ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction RayCastDebugger() ;

/// @brief Method Raycast, addr 0x9f1b1cc, size 0x2c, virtual false, abstract: false, final false
inline void Raycast() ;

/// @brief Method ScaleChildren, addr 0x9f1c074, size 0x2bc, virtual false, abstract: false, final false
inline void ScaleChildren(::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  localScale) ;

/// @brief Method SetDebugAction, addr 0x9f1afec, size 0x1b0, virtual false, abstract: false, final false
inline void SetDebugAction(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  newDebugAction) ;

/// @brief Method SetupCheckerMeshMaterial, addr 0x9f19f74, size 0x1a0, virtual false, abstract: false, final false
inline void SetupCheckerMeshMaterial(::UnityEngine::Shader*  debugShader) ;

/// @brief Method ShowDebugAnchorsDebugger, addr 0x9f18eb4, size 0xcc, virtual false, abstract: false, final false
inline ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction ShowDebugAnchorsDebugger() ;

/// @brief Method ShowHitNormal, addr 0x9f1ca48, size 0x280, virtual false, abstract: false, final false
inline void ShowHitNormal(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal) ;

/// @brief Method ShowRoomDetails, addr 0x9f19b38, size 0x43c, virtual false, abstract: false, final false
inline ::StringW ShowRoomDetails() ;

/// @brief Method Start, addr 0x9f19838, size 0x2ac, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleGlobalMeshCollisions, addr 0x9f184a8, size 0x278, virtual false, abstract: false, final false
inline void ToggleGlobalMeshCollisions(bool  isOn) ;

/// @brief Method Update, addr 0x9f1a4d0, size 0x534, virtual false, abstract: false, final false
inline void Update() ;

/// [CompilerGenerated]
/// @brief Method <DisplayGlobalMesh>b__88_0, addr 0x9f1ec90, size 0x64, virtual false, abstract: false, final false
inline void _DisplayGlobalMesh_b__88_0(::UnityEngine::GameObject*  globalMeshSegmentGO, ::UnityEngine::Mesh*  mesh) ;

/// [CompilerGenerated]
/// @brief Method <GetBestPoseFromRaycastDebugger>b__84_0, addr 0x9f1dd7c, size 0x1c, virtual false, abstract: false, final false
inline void _GetBestPoseFromRaycastDebugger_b__84_0() ;

/// [CompilerGenerated]
/// @brief Method <GetBestPoseFromRaycastDebugger>b__84_1, addr 0x9f1dd98, size 0x470, virtual false, abstract: false, final false
inline void _GetBestPoseFromRaycastDebugger_b__84_1() ;

/// [CompilerGenerated]
/// @brief Method <GetBestPoseFromRaycastDebugger>b__84_2, addr 0x9f1e208, size 0x1c, virtual false, abstract: false, final false
inline void _GetBestPoseFromRaycastDebugger_b__84_2() ;

/// [CompilerGenerated]
/// @brief Method <GetClosestSeatPoseDebugger>b__82_0, addr 0x9f1d580, size 0x388, virtual false, abstract: false, final false
inline void _GetClosestSeatPoseDebugger_b__82_0() ;

/// [CompilerGenerated]
/// @brief Method <GetClosestSeatPoseDebugger>b__82_2, addr 0x9f1d908, size 0x1c, virtual false, abstract: false, final false
inline void _GetClosestSeatPoseDebugger_b__82_2() ;

/// [CompilerGenerated]
/// @brief Method <GetClosestSurfacePositionDebugger>b__83_0, addr 0x9f1d924, size 0x1c, virtual false, abstract: false, final false
inline void _GetClosestSurfacePositionDebugger_b__83_0() ;

/// [CompilerGenerated]
/// @brief Method <GetClosestSurfacePositionDebugger>b__83_1, addr 0x9f1d940, size 0x420, virtual false, abstract: false, final false
inline void _GetClosestSurfacePositionDebugger_b__83_1() ;

/// [CompilerGenerated]
/// @brief Method <GetClosestSurfacePositionDebugger>b__83_2, addr 0x9f1dd60, size 0x1c, virtual false, abstract: false, final false
inline void _GetClosestSurfacePositionDebugger_b__83_2() ;

/// [CompilerGenerated]
/// @brief Method <GetKeyWallDebugger>b__79_0, addr 0x9f1ce88, size 0x290, virtual false, abstract: false, final false
inline void _GetKeyWallDebugger_b__79_0() ;

/// [CompilerGenerated]
/// @brief Method <GetKeyWallDebugger>b__79_2, addr 0x9f1d118, size 0x1c, virtual false, abstract: false, final false
inline void _GetKeyWallDebugger_b__79_2() ;

/// [CompilerGenerated]
/// @brief Method <GetLargestSurfaceDebugger>b__81_0, addr 0x9f1d134, size 0x1c, virtual false, abstract: false, final false
inline void _GetLargestSurfaceDebugger_b__81_0() ;

/// [CompilerGenerated]
/// @brief Method <GetLargestSurfaceDebugger>b__81_1, addr 0x9f1d150, size 0x414, virtual false, abstract: false, final false
inline void _GetLargestSurfaceDebugger_b__81_1() ;

/// [CompilerGenerated]
/// @brief Method <GetLargestSurfaceDebugger>b__81_2, addr 0x9f1d564, size 0x1c, virtual false, abstract: false, final false
inline void _GetLargestSurfaceDebugger_b__81_2() ;

/// [CompilerGenerated]
/// @brief Method <IsPositionInRoomDebugger>b__86_0, addr 0x9f1e5ac, size 0x34c, virtual false, abstract: false, final false
inline void _IsPositionInRoomDebugger_b__86_0() ;

/// [CompilerGenerated]
/// @brief Method <IsPositionInRoomDebugger>b__86_1, addr 0x9f1e8f8, size 0x1c, virtual false, abstract: false, final false
inline void _IsPositionInRoomDebugger_b__86_1() ;

/// [CompilerGenerated]
/// @brief Method <RayCastDebugger>b__85_0, addr 0x9f1e224, size 0x1c, virtual false, abstract: false, final false
inline void _RayCastDebugger_b__85_0() ;

/// [CompilerGenerated]
/// @brief Method <RayCastDebugger>b__85_1, addr 0x9f1e240, size 0x350, virtual false, abstract: false, final false
inline void _RayCastDebugger_b__85_1() ;

/// [CompilerGenerated]
/// @brief Method <RayCastDebugger>b__85_2, addr 0x9f1e590, size 0x1c, virtual false, abstract: false, final false
inline void _RayCastDebugger_b__85_2() ;

/// [CompilerGenerated]
/// @brief Method <ShowDebugAnchorsDebugger>b__87_0, addr 0x9f1e914, size 0x2d4, virtual false, abstract: false, final false
inline void _ShowDebugAnchorsDebugger_b__87_0() ;

/// [CompilerGenerated]
/// @brief Method <ShowDebugAnchorsDebugger>b__87_1, addr 0x9f1ebe8, size 0xa8, virtual false, abstract: false, final false
inline void _ShowDebugAnchorsDebugger_b__87_1() ;

constexpr bool const& __cordl_internal_get_ShowDebugAnchors() const;

constexpr bool& __cordl_internal_get_ShowDebugAnchors() ;

constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get__cameraRig() const;

constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get__cameraRig() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__checkerMeshMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__checkerMeshMaterial() ;

constexpr int32_t const& __cordl_internal_get__color() const;

constexpr int32_t& __cordl_internal_get__color() ;

constexpr int32_t const& __cordl_internal_get__cull() const;

constexpr int32_t& __cordl_internal_get__cull() ;

constexpr ::System::Nullable_1<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction> const& __cordl_internal_get__currentDebugAction() const;

constexpr ::System::Nullable_1<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction>& __cordl_internal_get__currentDebugAction() ;

constexpr ::StringW const& __cordl_internal_get__currentDebugMessage() const;

constexpr ::StringW& __cordl_internal_get__currentDebugMessage() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> const& __cordl_internal_get__currentRoom() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>& __cordl_internal_get__currentRoom() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__debugAnchor() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__debugAnchor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__debugAnchors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__debugAnchors() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__debugCheckerMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__debugCheckerMesh() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__debugCube() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__debugCube() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__debugMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__debugMaterial() ;

constexpr ::StringW const& __cordl_internal_get__debugMessage() const;

constexpr ::StringW& __cordl_internal_get__debugMessage() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__debugNormal() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__debugNormal() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__debugShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__debugShader() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__debugSphere() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__debugSphere() ;

constexpr int32_t const& __cordl_internal_get__dstBlend() const;

constexpr int32_t& __cordl_internal_get__dstBlend() ;

constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction const& __cordl_internal_get__getBestPoseFromRaycastDebugger() const;

constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction& __cordl_internal_get__getBestPoseFromRaycastDebugger() ;

constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction const& __cordl_internal_get__getClosestSeatPoseDebugger() const;

constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction& __cordl_internal_get__getClosestSeatPoseDebugger() ;

constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction const& __cordl_internal_get__getClosestSurfacePositionDebugger() const;

constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction& __cordl_internal_get__getClosestSurfacePositionDebugger() ;

constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction const& __cordl_internal_get__getKeyWallDebugger() const;

constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction& __cordl_internal_get__getKeyWallDebugger() ;

constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction const& __cordl_internal_get__getLargestSurfaceDebugger() const;

constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction& __cordl_internal_get__getLargestSurfaceDebugger() ;

constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction const& __cordl_internal_get__getLaunchSpaceSetupDebugger() const;

constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction& __cordl_internal_get__getLaunchSpaceSetupDebugger() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> const& __cordl_internal_get__globalMeshAnchor() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>& __cordl_internal_get__globalMeshAnchor() ;

constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get__globalMeshCollider() const;

constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get__globalMeshCollider() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__globalMeshGO() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__globalMeshGO() ;

constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction const& __cordl_internal_get__isPositionInRoom() const;

constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction& __cordl_internal_get__isPositionInRoom() ;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& __cordl_internal_get__largestSurfaceFilter() const;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& __cordl_internal_get__largestSurfaceFilter() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__navMeshMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__navMeshMaterial() ;

constexpr ::UnityEngine::AI::NavMeshTriangulation const& __cordl_internal_get__navMeshTriangulation() const;

constexpr ::UnityEngine::AI::NavMeshTriangulation& __cordl_internal_get__navMeshTriangulation() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__navMeshViz() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__navMeshViz() ;

constexpr ::GlobalNamespace::MRUK_PositioningMethod const& __cordl_internal_get__positioningMethod() const;

constexpr ::GlobalNamespace::MRUK_PositioningMethod& __cordl_internal_get__positioningMethod() ;

constexpr bool const& __cordl_internal_get__previousShowDebugAnchors() const;

constexpr bool& __cordl_internal_get__previousShowDebugAnchors() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> const& __cordl_internal_get__previousShownDebugAnchor() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>& __cordl_internal_get__previousShownDebugAnchor() ;

constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction const& __cordl_internal_get__raycastDebugger() const;

constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction& __cordl_internal_get__raycastDebugger() ;

constexpr ::StringW const& __cordl_internal_get__sceneDetails() const;

constexpr ::StringW& __cordl_internal_get__sceneDetails() ;

constexpr bool const& __cordl_internal_get__shouldDisplayGlobalMesh() const;

constexpr bool& __cordl_internal_get__shouldDisplayGlobalMesh() ;

constexpr bool const& __cordl_internal_get__shouldDisplayNavMesh() const;

constexpr bool& __cordl_internal_get__shouldDisplayNavMesh() ;

constexpr bool const& __cordl_internal_get__shouldToggleGlobalMeshCollision() const;

constexpr bool& __cordl_internal_get__shouldToggleGlobalMeshCollision() ;

constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction const& __cordl_internal_get__showDebugAnchorsDebugAction() const;

constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction& __cordl_internal_get__showDebugAnchorsDebugAction() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU> const& __cordl_internal_get__spaceMapGPU() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>& __cordl_internal_get__spaceMapGPU() ;

constexpr int32_t const& __cordl_internal_get__srcBlend() const;

constexpr int32_t& __cordl_internal_get__srcBlend() ;

constexpr int32_t const& __cordl_internal_get__zWrite() const;

constexpr int32_t& __cordl_internal_get__zWrite() ;

constexpr bool const& __cordl_internal_get_exportGlobalMeshJSON() const;

constexpr bool& __cordl_internal_get_exportGlobalMeshJSON() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_visualHelperMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_visualHelperMaterial() ;

constexpr void __cordl_internal_set_ShowDebugAnchors(bool  value) ;

constexpr void __cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig>  value) ;

constexpr void __cordl_internal_set__checkerMeshMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__color(int32_t  value) ;

constexpr void __cordl_internal_set__cull(int32_t  value) ;

constexpr void __cordl_internal_set__currentDebugAction(::System::Nullable_1<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction>  value) ;

constexpr void __cordl_internal_set__currentDebugMessage(::StringW  value) ;

constexpr void __cordl_internal_set__currentRoom(::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  value) ;

constexpr void __cordl_internal_set__debugAnchor(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__debugAnchors(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__debugCheckerMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__debugCube(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__debugMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__debugMessage(::StringW  value) ;

constexpr void __cordl_internal_set__debugNormal(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__debugShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__debugSphere(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__dstBlend(int32_t  value) ;

constexpr void __cordl_internal_set__getBestPoseFromRaycastDebugger(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  value) ;

constexpr void __cordl_internal_set__getClosestSeatPoseDebugger(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  value) ;

constexpr void __cordl_internal_set__getClosestSurfacePositionDebugger(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  value) ;

constexpr void __cordl_internal_set__getKeyWallDebugger(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  value) ;

constexpr void __cordl_internal_set__getLargestSurfaceDebugger(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  value) ;

constexpr void __cordl_internal_set__getLaunchSpaceSetupDebugger(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  value) ;

constexpr void __cordl_internal_set__globalMeshAnchor(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  value) ;

constexpr void __cordl_internal_set__globalMeshCollider(::UnityW<::UnityEngine::MeshCollider>  value) ;

constexpr void __cordl_internal_set__globalMeshGO(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__isPositionInRoom(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  value) ;

constexpr void __cordl_internal_set__largestSurfaceFilter(::GlobalNamespace::MRUKAnchor_SceneLabels  value) ;

constexpr void __cordl_internal_set__navMeshMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__navMeshTriangulation(::UnityEngine::AI::NavMeshTriangulation  value) ;

constexpr void __cordl_internal_set__navMeshViz(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__positioningMethod(::GlobalNamespace::MRUK_PositioningMethod  value) ;

constexpr void __cordl_internal_set__previousShowDebugAnchors(bool  value) ;

constexpr void __cordl_internal_set__previousShownDebugAnchor(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  value) ;

constexpr void __cordl_internal_set__raycastDebugger(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  value) ;

constexpr void __cordl_internal_set__sceneDetails(::StringW  value) ;

constexpr void __cordl_internal_set__shouldDisplayGlobalMesh(bool  value) ;

constexpr void __cordl_internal_set__shouldDisplayNavMesh(bool  value) ;

constexpr void __cordl_internal_set__shouldToggleGlobalMeshCollision(bool  value) ;

constexpr void __cordl_internal_set__showDebugAnchorsDebugAction(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  value) ;

constexpr void __cordl_internal_set__spaceMapGPU(::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>  value) ;

constexpr void __cordl_internal_set__srcBlend(int32_t  value) ;

constexpr void __cordl_internal_set__zWrite(int32_t  value) ;

constexpr void __cordl_internal_set_exportGlobalMeshJSON(bool  value) ;

constexpr void __cordl_internal_set_visualHelperMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x9f1ccc8, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger> getStaticF__Instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x9f18a50, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger> get_Instance() ;

/// @brief Method get_ShouldDisplayGlobalMesh, addr 0x9f18268, size 0x8, virtual false, abstract: false, final false
inline bool get_ShouldDisplayGlobalMesh() ;

/// @brief Method get_ShouldDisplayNavMesh, addr 0x9f18720, size 0x8, virtual false, abstract: false, final false
inline bool get_ShouldDisplayNavMesh() ;

/// @brief Method get_ShouldToggleGlobalMeshCollision, addr 0x9f18498, size 0x8, virtual false, abstract: false, final false
inline bool get_ShouldToggleGlobalMeshCollision() ;

/// @brief Method get__roomHasChanged, addr 0x9f17e00, size 0x174, virtual false, abstract: false, final false
inline bool get__roomHasChanged() ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x9f18a98, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*  value) ;

/// @brief Method set_ShouldDisplayGlobalMesh, addr 0x9f18270, size 0x8, virtual false, abstract: false, final false
inline void set_ShouldDisplayGlobalMesh(bool  value) ;

/// @brief Method set_ShouldDisplayNavMesh, addr 0x9f18728, size 0x8, virtual false, abstract: false, final false
inline void set_ShouldDisplayNavMesh(bool  value) ;

/// @brief Method set_ShouldToggleGlobalMeshCollision, addr 0x9f184a0, size 0x8, virtual false, abstract: false, final false
inline void set_ShouldToggleGlobalMeshCollision(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImmersiveSceneDebugger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImmersiveSceneDebugger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ImmersiveSceneDebugger(ImmersiveSceneDebugger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImmersiveSceneDebugger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImmersiveSceneDebugger(ImmersiveSceneDebugger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25856};

/// [Tooltip("Visualize anchors")]
/// @brief Field ShowDebugAnchors, offset: 0x20, size: 0x1, def value: None
 bool  ___ShowDebugAnchors;

/// [SerializeField]
/// @brief Field visualHelperMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___visualHelperMaterial;

/// [SerializeField]
/// @brief Field _debugShader, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____debugShader;

/// @brief Field _srcBlend, offset: 0x38, size: 0x4, def value: None
 int32_t  ____srcBlend;

/// @brief Field _dstBlend, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____dstBlend;

/// @brief Field _zWrite, offset: 0x40, size: 0x4, def value: None
 int32_t  ____zWrite;

/// @brief Field _cull, offset: 0x44, size: 0x4, def value: None
 int32_t  ____cull;

/// @brief Field _color, offset: 0x48, size: 0x4, def value: None
 int32_t  ____color;

/// @brief Field _debugAnchors, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____debugAnchors;

/// @brief Field _globalMeshGO, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____globalMeshGO;

/// @brief Field _cameraRig, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRCameraRig>  ____cameraRig;

/// @brief Field _currentRoom, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  ____currentRoom;

/// @brief Field _debugCube, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____debugCube;

/// @brief Field _debugSphere, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____debugSphere;

/// @brief Field _debugNormal, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____debugNormal;

/// @brief Field _navMeshViz, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____navMeshViz;

/// @brief Field _debugAnchor, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____debugAnchor;

/// @brief Field _previousShowDebugAnchors, offset: 0x98, size: 0x1, def value: None
 bool  ____previousShowDebugAnchors;

/// @brief Field _debugCheckerMesh, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____debugCheckerMesh;

/// @brief Field _previousShownDebugAnchor, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  ____previousShownDebugAnchor;

/// @brief Field _globalMeshAnchor, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  ____globalMeshAnchor;

/// @brief Field _navMeshTriangulation, offset: 0xb8, size: 0x18, def value: None
 ::UnityEngine::AI::NavMeshTriangulation  ____navMeshTriangulation;

/// @brief Field _spaceMapGPU, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>  ____spaceMapGPU;

/// @brief Field _globalMeshCollider, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshCollider>  ____globalMeshCollider;

/// @brief Field _navMeshMaterial, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____navMeshMaterial;

/// @brief Field _debugMessage, offset: 0xe8, size: 0x8, def value: None
 ::StringW  ____debugMessage;

/// @brief Field _currentDebugMessage, offset: 0xf0, size: 0x8, def value: None
 ::StringW  ____currentDebugMessage;

/// @brief Field _sceneDetails, offset: 0xf8, size: 0x8, def value: None
 ::StringW  ____sceneDetails;

/// @brief Field _debugMaterial, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____debugMaterial;

/// @brief Field _checkerMeshMaterial, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____checkerMeshMaterial;

/// @brief Field _isPositionInRoom, offset: 0x110, size: 0x18, def value: None
 ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  ____isPositionInRoom;

/// @brief Field _showDebugAnchorsDebugAction, offset: 0x128, size: 0x18, def value: None
 ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  ____showDebugAnchorsDebugAction;

/// @brief Field _raycastDebugger, offset: 0x140, size: 0x18, def value: None
 ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  ____raycastDebugger;

/// @brief Field _positioningMethod, offset: 0x158, size: 0x4, def value: None
 ::GlobalNamespace::MRUK_PositioningMethod  ____positioningMethod;

/// @brief Field _getBestPoseFromRaycastDebugger, offset: 0x160, size: 0x18, def value: None
 ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  ____getBestPoseFromRaycastDebugger;

/// @brief Field _getKeyWallDebugger, offset: 0x178, size: 0x18, def value: None
 ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  ____getKeyWallDebugger;

/// @brief Field _getLaunchSpaceSetupDebugger, offset: 0x190, size: 0x18, def value: None
 ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  ____getLaunchSpaceSetupDebugger;

/// @brief Field _largestSurfaceFilter, offset: 0x1a8, size: 0x4, def value: None
 ::GlobalNamespace::MRUKAnchor_SceneLabels  ____largestSurfaceFilter;

/// @brief Field _getLargestSurfaceDebugger, offset: 0x1b0, size: 0x18, def value: None
 ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  ____getLargestSurfaceDebugger;

/// @brief Field _getClosestSeatPoseDebugger, offset: 0x1c8, size: 0x18, def value: None
 ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  ____getClosestSeatPoseDebugger;

/// @brief Field _getClosestSurfacePositionDebugger, offset: 0x1e0, size: 0x18, def value: None
 ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  ____getClosestSurfacePositionDebugger;

/// @brief Field exportGlobalMeshJSON, offset: 0x1f8, size: 0x1, def value: None
 bool  ___exportGlobalMeshJSON;

/// @brief Field _currentDebugAction, offset: 0x200, size: 0x10, def value: None
 ::System::Nullable_1<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction>  ____currentDebugAction;

/// @brief Field _shouldDisplayGlobalMesh, offset: 0x210, size: 0x1, def value: None
 bool  ____shouldDisplayGlobalMesh;

/// @brief Field _shouldToggleGlobalMeshCollision, offset: 0x211, size: 0x1, def value: None
 bool  ____shouldToggleGlobalMeshCollision;

/// @brief Field _shouldDisplayNavMesh, offset: 0x212, size: 0x1, def value: None
 bool  ____shouldDisplayNavMesh;

/// @brief Size padding 0x228 - 0x218 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ___ShowDebugAnchors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ___visualHelperMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____debugShader) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____srcBlend) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____dstBlend) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____zWrite) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____cull) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____color) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____debugAnchors) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____globalMeshGO) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____cameraRig) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____currentRoom) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____debugCube) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____debugSphere) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____debugNormal) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____navMeshViz) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____debugAnchor) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____previousShowDebugAnchors) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____debugCheckerMesh) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____previousShownDebugAnchor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____globalMeshAnchor) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____navMeshTriangulation) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____spaceMapGPU) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____globalMeshCollider) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____navMeshMaterial) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____debugMessage) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____currentDebugMessage) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____sceneDetails) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____debugMaterial) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____checkerMeshMaterial) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____isPositionInRoom) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____showDebugAnchorsDebugAction) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____raycastDebugger) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____positioningMethod) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____getBestPoseFromRaycastDebugger) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____getKeyWallDebugger) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____getLaunchSpaceSetupDebugger) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____largestSurfaceFilter) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____getLargestSurfaceDebugger) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____getClosestSeatPoseDebugger) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____getClosestSurfacePositionDebugger) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ___exportGlobalMeshJSON) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____currentDebugAction) == 0x200, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____shouldDisplayGlobalMesh) == 0x210, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____shouldToggleGlobalMeshCollision) == 0x211, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger, ____shouldDisplayNavMesh) == 0x212, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger) == 0x228, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger/<>c
class CORDL_TYPE ImmersiveSceneDebugger___c : public ::System::Object {
public:
// Declarations
using __GetLaunchSpaceSetupDebugger_b__80_0_d = ::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d;

/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*  __9;

/// @brief Field <>9__79_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__79_1, put=setStaticF___9__79_1)) ::System::Action*  __9__79_1;

/// @brief Field <>9__80_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__80_0, put=setStaticF___9__80_0)) ::System::Action*  __9__80_0;

/// @brief Field <>9__80_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__80_1, put=setStaticF___9__80_1)) ::System::Action*  __9__80_1;

/// @brief Field <>9__80_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__80_2, put=setStaticF___9__80_2)) ::System::Action*  __9__80_2;

/// @brief Field <>9__82_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__82_1, put=setStaticF___9__82_1)) ::System::Action*  __9__82_1;

static inline ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c* New_ctor() ;

/// @brief Method <GetClosestSeatPoseDebugger>b__82_1, addr 0x9f1ef9c, size 0x4, virtual false, abstract: false, final false
inline void _GetClosestSeatPoseDebugger_b__82_1() ;

/// @brief Method <GetKeyWallDebugger>b__79_1, addr 0x9f1ef00, size 0x4, virtual false, abstract: false, final false
inline void _GetKeyWallDebugger_b__79_1() ;

/// [AsyncStateMachine(typeof(Meta.XR.MRUtilityKit.ImmersiveSceneDebugger::<>c::<<GetLaunchSpaceSetupDebugger>b__80_0>d))]
/// @brief Method <GetLaunchSpaceSetupDebugger>b__80_0, addr 0x9f1ef04, size 0x90, virtual false, abstract: false, final false
inline void _GetLaunchSpaceSetupDebugger_b__80_0() ;

/// @brief Method <GetLaunchSpaceSetupDebugger>b__80_1, addr 0x9f1ef94, size 0x4, virtual false, abstract: false, final false
inline void _GetLaunchSpaceSetupDebugger_b__80_1() ;

/// @brief Method <GetLaunchSpaceSetupDebugger>b__80_2, addr 0x9f1ef98, size 0x4, virtual false, abstract: false, final false
inline void _GetLaunchSpaceSetupDebugger_b__80_2() ;

/// @brief Method .ctor, addr 0x9f1eef8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__79_1() ;

static inline ::System::Action* getStaticF___9__80_0() ;

static inline ::System::Action* getStaticF___9__80_1() ;

static inline ::System::Action* getStaticF___9__80_2() ;

static inline ::System::Action* getStaticF___9__82_1() ;

static inline void setStaticF___9(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*  value) ;

static inline void setStaticF___9__79_1(::System::Action*  value) ;

static inline void setStaticF___9__80_0(::System::Action*  value) ;

static inline void setStaticF___9__80_1(::System::Action*  value) ;

static inline void setStaticF___9__80_2(::System::Action*  value) ;

static inline void setStaticF___9__82_1(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImmersiveSceneDebugger___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImmersiveSceneDebugger___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ImmersiveSceneDebugger___c(ImmersiveSceneDebugger___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImmersiveSceneDebugger___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImmersiveSceneDebugger___c(ImmersiveSceneDebugger___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25855};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
