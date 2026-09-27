#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDebugger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshTriangulation_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SceneDebugger)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVRGazePointer;
}
namespace GlobalNamespace {
class OVRRayHelper;
}
namespace GlobalNamespace {
class OVRRaycaster;
}
namespace Meta::XR::MRUtilityKit {
class DestructibleMeshComponent;
}
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
}
namespace Meta::XR::MRUtilityKit {
class MRUKRoom;
}
namespace Meta::XR::MRUtilityKit {
class SceneDebugger__SnapCanvasInFrontOfCamera_d__84;
}
namespace Meta::XR::MRUtilityKit {
class SpaceMapGPU;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace TMPro {
class TMP_Dropdown;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::EventSystems {
class OVRInputModule;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class Canvas;
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
class SceneDebugger;
}
namespace Meta::XR::MRUtilityKit {
class SceneDebugger__SnapCanvasInFrontOfCamera_d__84;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDebugger*);
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDebugger*, "Meta.XR.MRUtilityKit", "SceneDebugger");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84*, "Meta.XR.MRUtilityKit", "SceneDebugger/<SnapCanvasInFrontOfCamera>d__84");
// [Obsolete("This component is deprecated.Please use the Immersive Debugger fromMeta > Tools > Immersive Debugger")]
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies UnityEngine.AI.NavMeshTriangulation, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDebugger
class CORDL_TYPE SceneDebugger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _SnapCanvasInFrontOfCamera_d__84 = ::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84;

/// @brief Field GazePointer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_GazePointer, put=__cordl_internal_set_GazePointer)) ::UnityW<::GlobalNamespace::OVRGazePointer>  GazePointer;

/// @brief Field InputModule, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_InputModule, put=__cordl_internal_set_InputModule)) ::UnityW<::UnityEngine::EventSystems::OVRInputModule>  InputModule;

/// @brief Field Menus, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_Menus, put=__cordl_internal_set_Menus)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*  Menus;

/// @brief Field MoveCanvasInFrontOfCamera, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_MoveCanvasInFrontOfCamera, put=__cordl_internal_set_MoveCanvasInFrontOfCamera)) bool  MoveCanvasInFrontOfCamera;

/// @brief Field RayHelper, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_RayHelper, put=__cordl_internal_set_RayHelper)) ::UnityW<::GlobalNamespace::OVRRayHelper>  RayHelper;

/// @brief Field Raycaster, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_Raycaster, put=__cordl_internal_set_Raycaster)) ::UnityW<::GlobalNamespace::OVRRaycaster>  Raycaster;

/// @brief Field RoomDetails, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoomDetails, put=__cordl_internal_set_RoomDetails)) ::UnityW<::TMPro::TextMeshProUGUI>  RoomDetails;

/// @brief Field SetupInteractions, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_SetupInteractions, put=__cordl_internal_set_SetupInteractions)) bool  SetupInteractions;

/// @brief Field ShowDebugAnchors, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowDebugAnchors, put=__cordl_internal_set_ShowDebugAnchors)) bool  ShowDebugAnchors;

/// @brief Field Tabs, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tabs, put=__cordl_internal_set_Tabs)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  Tabs;

/// @brief Field _backgroundColor, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get__backgroundColor, put=__cordl_internal_set__backgroundColor)) ::UnityEngine::Color  _backgroundColor;

/// @brief Field _cameraRig, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraRig, put=__cordl_internal_set__cameraRig)) ::UnityW<::GlobalNamespace::OVRCameraRig>  _cameraRig;

/// @brief Field _canvas, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvas, put=__cordl_internal_set__canvas)) ::UnityW<::UnityEngine::Canvas>  _canvas;

/// @brief Field _checkerMeshMaterial, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__checkerMeshMaterial, put=__cordl_internal_set__checkerMeshMaterial)) ::UnityW<::UnityEngine::Material>  _checkerMeshMaterial;

/// @brief Field _color, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) int32_t  _color;

/// @brief Field _cull, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get__cull, put=__cordl_internal_set__cull)) int32_t  _cull;

/// @brief Field _currentRoom, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentRoom, put=__cordl_internal_set__currentRoom)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  _currentRoom;

/// @brief Field _debugAction, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugAction, put=__cordl_internal_set__debugAction)) ::System::Action*  _debugAction;

/// @brief Field _debugAnchor, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugAnchor, put=__cordl_internal_set__debugAnchor)) ::UnityW<::UnityEngine::GameObject>  _debugAnchor;

/// @brief Field _debugAnchors, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugAnchors, put=__cordl_internal_set__debugAnchors)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _debugAnchors;

/// @brief Field _debugCheckerMesh, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugCheckerMesh, put=__cordl_internal_set__debugCheckerMesh)) ::UnityW<::UnityEngine::Mesh>  _debugCheckerMesh;

/// @brief Field _debugCube, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugCube, put=__cordl_internal_set__debugCube)) ::UnityW<::UnityEngine::GameObject>  _debugCube;

/// @brief Field _debugMaterial, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugMaterial, put=__cordl_internal_set__debugMaterial)) ::UnityW<::UnityEngine::Material>  _debugMaterial;

/// @brief Field _debugNormal, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugNormal, put=__cordl_internal_set__debugNormal)) ::UnityW<::UnityEngine::GameObject>  _debugNormal;

/// @brief Field _debugSphere, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugSphere, put=__cordl_internal_set__debugSphere)) ::UnityW<::UnityEngine::GameObject>  _debugSphere;

/// @brief Field _dstBlend, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__dstBlend, put=__cordl_internal_set__dstBlend)) int32_t  _dstBlend;

/// @brief Field _foregroundColor, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get__foregroundColor, put=__cordl_internal_set__foregroundColor)) ::UnityEngine::Color  _foregroundColor;

/// @brief Field _globalMeshAnchor, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__globalMeshAnchor, put=__cordl_internal_set__globalMeshAnchor)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  _globalMeshAnchor;

/// @brief Field _globalMeshCollider, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__globalMeshCollider, put=__cordl_internal_set__globalMeshCollider)) ::UnityW<::UnityEngine::MeshCollider>  _globalMeshCollider;

/// @brief Field _globalMeshGO, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__globalMeshGO, put=__cordl_internal_set__globalMeshGO)) ::UnityW<::UnityEngine::GameObject>  _globalMeshGO;

/// @brief Field _navMeshMaterial, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__navMeshMaterial, put=__cordl_internal_set__navMeshMaterial)) ::UnityW<::UnityEngine::Material>  _navMeshMaterial;

/// @brief Field _navMeshTriangulation, offset 0x130, size 0x18 
 __declspec(property(get=__cordl_internal_get__navMeshTriangulation, put=__cordl_internal_set__navMeshTriangulation)) ::UnityEngine::AI::NavMeshTriangulation  _navMeshTriangulation;

/// @brief Field _navMeshViz, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__navMeshViz, put=__cordl_internal_set__navMeshViz)) ::UnityW<::UnityEngine::GameObject>  _navMeshViz;

/// @brief Field _previousShowDebugAnchors, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get__previousShowDebugAnchors, put=__cordl_internal_set__previousShowDebugAnchors)) bool  _previousShowDebugAnchors;

/// @brief Field _previousShownDebugAnchor, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousShownDebugAnchor, put=__cordl_internal_set__previousShownDebugAnchor)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  _previousShownDebugAnchor;

 __declspec(property(get=get__roomHasChanged)) bool  _roomHasChanged;

/// @brief Field _spaceMapGPU, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__spaceMapGPU, put=__cordl_internal_set__spaceMapGPU)) ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>  _spaceMapGPU;

/// @brief Field _srcBlend, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__srcBlend, put=__cordl_internal_set__srcBlend)) int32_t  _srcBlend;

/// @brief Field _zWrite, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__zWrite, put=__cordl_internal_set__zWrite)) int32_t  _zWrite;

/// @brief Field exportGlobalMeshJSONDropdown, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_exportGlobalMeshJSONDropdown, put=__cordl_internal_set_exportGlobalMeshJSONDropdown)) ::UnityW<::TMPro::TMP_Dropdown>  exportGlobalMeshJSONDropdown;

/// @brief Field logs, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_logs, put=__cordl_internal_set_logs)) ::UnityW<::TMPro::TextMeshProUGUI>  logs;

/// @brief Field positioningMethodDropdown, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_positioningMethodDropdown, put=__cordl_internal_set_positioningMethodDropdown)) ::UnityW<::TMPro::TMP_Dropdown>  positioningMethodDropdown;

/// @brief Field surfaceTypeDropdown, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_surfaceTypeDropdown, put=__cordl_internal_set_surfaceTypeDropdown)) ::UnityW<::TMPro::TMP_Dropdown>  surfaceTypeDropdown;

/// @brief Field visualHelperMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_visualHelperMaterial, put=__cordl_internal_set_visualHelperMaterial)) ::UnityW<::UnityEngine::Material>  visualHelperMaterial;

/// @brief Method ActivateMenu, addr 0x9f412b8, size 0x13c, virtual false, abstract: false, final false
inline void ActivateMenu(::UnityEngine::CanvasGroup*  menuToActivate) ;

/// @brief Method ActivateTab, addr 0x9f4114c, size 0x16c, virtual false, abstract: false, final false
inline void ActivateTab(::UnityEngine::UI::Image*  selectedTab) ;

/// @brief Method Awake, addr 0x9f3b108, size 0xc4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Billboard, addr 0x9f3c8a0, size 0x148, virtual false, abstract: false, final false
inline void Billboard() ;

/// @brief Method CreateDebugPrefabSource, addr 0x9f40094, size 0x484, virtual false, abstract: false, final false
inline void CreateDebugPrefabSource(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// @brief Method CreateDebugPrimitives, addr 0x9f3bd44, size 0x2bc, virtual false, abstract: false, final false
inline void CreateDebugPrimitives() ;

/// @brief Method CreateGridPattern, addr 0x9f407d4, size 0x710, virtual false, abstract: false, final false
inline void CreateGridPattern(::UnityEngine::Transform*  parentTransform, ::UnityEngine::Vector3  localOffset, ::UnityEngine::Quaternion  localRotation) ;

/// @brief Method DebugDestructibleMeshComponent, addr 0x9f3fbf4, size 0xbc, virtual false, abstract: false, final false
static inline void DebugDestructibleMeshComponent(::Meta::XR::MRUtilityKit::DestructibleMeshComponent*  destructibleMeshComponent) ;

/// @brief Method DisplayGlobalMesh, addr 0x9f3ed60, size 0x408, virtual false, abstract: false, final false
inline void DisplayGlobalMesh(bool  isOn) ;

/// @brief Method DisplayNavMesh, addr 0x9f3fcb4, size 0x22c, virtual false, abstract: false, final false
inline void DisplayNavMesh(bool  isOn) ;

/// @brief Method DisplaySpaceMap, addr 0x9f3fcb0, size 0x4, virtual false, abstract: false, final false
inline void DisplaySpaceMap(bool  isOn) ;

/// @brief Method ExportJSON, addr 0x9f3f750, size 0x4a4, virtual false, abstract: false, final false
inline void ExportJSON(bool  isOn) ;

/// @brief Method GenerateDebugAnchor, addr 0x9f3c530, size 0x2b8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GenerateDebugAnchor(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// @brief Method GetBestPoseFromRaycastDebugger, addr 0x9f3e3e4, size 0x258, virtual false, abstract: false, final false
inline void GetBestPoseFromRaycastDebugger(bool  isOn) ;

/// @brief Method GetClosestSeatPoseDebugger, addr 0x9f3df34, size 0x258, virtual false, abstract: false, final false
inline void GetClosestSeatPoseDebugger(bool  isOn) ;

/// @brief Method GetClosestSurfacePositionDebugger, addr 0x9f3e18c, size 0x258, virtual false, abstract: false, final false
inline void GetClosestSurfacePositionDebugger(bool  isOn) ;

/// @brief Method GetControllerRay, addr 0x9f3cbe0, size 0x2d8, virtual false, abstract: false, final false
inline ::UnityEngine::Ray GetControllerRay() ;

/// @brief Method GetKeyWallDebugger, addr 0x9f3d210, size 0x55c, virtual false, abstract: false, final false
inline void GetKeyWallDebugger(bool  isOn) ;

/// @brief Method GetLargestSurfaceDebugger, addr 0x9f3d76c, size 0x7c8, virtual false, abstract: false, final false
inline void GetLargestSurfaceDebugger(bool  isOn) ;

/// @brief Method GetSpaceMapGPU, addr 0x9f3baa8, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU> GetSpaceMapGPU() ;

/// @brief Method InstantiateGlobalMesh, addr 0x9f3f168, size 0x1f0, virtual false, abstract: false, final false
inline void InstantiateGlobalMesh(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::Mesh>>*  onMeshSegmentInstantiated) ;

/// @brief Method IsPositionInRoomDebugger, addr 0x9f3e894, size 0x240, virtual false, abstract: false, final false
inline void IsPositionInRoomDebugger(bool  isOn) ;

static inline ::Meta::XR::MRUtilityKit::SceneDebugger* New_ctor() ;

/// @brief Method OnDisable, addr 0x9f3c9e8, size 0x14, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnSceneLoaded, addr 0x9f3c9fc, size 0x1e4, virtual false, abstract: false, final false
inline void OnSceneLoaded() ;

/// @brief Method RayCastDebugger, addr 0x9f3e63c, size 0x258, virtual false, abstract: false, final false
inline void RayCastDebugger(bool  isOn) ;

/// @brief Method ScaleChildren, addr 0x9f40518, size 0x2bc, virtual false, abstract: false, final false
inline void ScaleChildren(::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  localScale) ;

/// @brief Method SetLogsText, addr 0x9f3d15c, size 0xb4, virtual false, abstract: false, final false
inline void SetLogsText(::StringW  logsText, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method SetupCheckerMeshMaterial, addr 0x9f3bba4, size 0x1a0, virtual false, abstract: false, final false
inline void SetupCheckerMeshMaterial(::UnityEngine::Shader*  debugShader) ;

/// @brief Method SetupInteractionDependencies, addr 0x9f3b1cc, size 0x53c, virtual false, abstract: false, final false
inline void SetupInteractionDependencies() ;

/// @brief Method ShowDebugAnchorsDebugger, addr 0x9f3ead4, size 0x28c, virtual false, abstract: false, final false
inline void ShowDebugAnchorsDebugger(bool  isOn) ;

/// @brief Method ShowHitNormal, addr 0x9f40ee4, size 0x268, virtual false, abstract: false, final false
inline void ShowHitNormal(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal) ;

/// @brief Method ShowRoomDetails, addr 0x9f3fee0, size 0x1b4, virtual false, abstract: false, final false
inline void ShowRoomDetails() ;

/// @brief Method ShowRoomDetailsDebugger, addr 0x9f3ceb8, size 0x2a4, virtual false, abstract: false, final false
inline void ShowRoomDetailsDebugger(bool  isOn) ;

/// [IteratorStateMachine(typeof(Meta.XR.MRUtilityKit.SceneDebugger::<SnapCanvasInFrontOfCamera>d__84))]
/// @brief Method SnapCanvasInFrontOfCamera, addr 0x9f3bb38, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SnapCanvasInFrontOfCamera() ;

/// @brief Method Start, addr 0x9f3b708, size 0x3a0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleCanvasGroup, addr 0x9f413f4, size 0x64, virtual false, abstract: false, final false
inline void ToggleCanvasGroup(::UnityEngine::CanvasGroup*  canvasGroup, bool  shouldShow) ;

/// @brief Method ToggleGlobalMeshCollisions, addr 0x9f3f358, size 0x3f8, virtual false, abstract: false, final false
inline void ToggleGlobalMeshCollisions(bool  isOn) ;

/// @brief Method ToggleMenu, addr 0x9f3c7e8, size 0xb8, virtual false, abstract: false, final false
inline void ToggleMenu(bool  active) ;

/// @brief Method Update, addr 0x9f3c000, size 0x530, virtual false, abstract: false, final false
inline void Update() ;

/// [CompilerGenerated]
/// @brief Method <DisplayGlobalMesh>b__62_0, addr 0x9f42e6c, size 0x64, virtual false, abstract: false, final false
inline void _DisplayGlobalMesh_b__62_0(::UnityEngine::GameObject*  globalMeshSegmentGO, ::UnityEngine::Mesh*  _) ;

/// [CompilerGenerated]
/// @brief Method <DisplayNavMesh>b__68_0, addr 0x9f42ed0, size 0x2e0, virtual false, abstract: false, final false
inline void _DisplayNavMesh_b__68_0() ;

/// [CompilerGenerated]
/// @brief Method <GetBestPoseFromRaycastDebugger>b__58_0, addr 0x9f41f34, size 0x4a4, virtual false, abstract: false, final false
inline void _GetBestPoseFromRaycastDebugger_b__58_0() ;

/// [CompilerGenerated]
/// @brief Method <GetClosestSeatPoseDebugger>b__56_0, addr 0x9f416a0, size 0x484, virtual false, abstract: false, final false
inline void _GetClosestSeatPoseDebugger_b__56_0() ;

/// [CompilerGenerated]
/// @brief Method <GetClosestSurfacePositionDebugger>b__57_0, addr 0x9f41b24, size 0x410, virtual false, abstract: false, final false
inline void _GetClosestSurfacePositionDebugger_b__57_0() ;

/// [CompilerGenerated]
/// @brief Method <IsPositionInRoomDebugger>b__60_0, addr 0x9f42720, size 0x3cc, virtual false, abstract: false, final false
inline void _IsPositionInRoomDebugger_b__60_0() ;

/// [CompilerGenerated]
/// @brief Method <RayCastDebugger>b__59_0, addr 0x9f423d8, size 0x348, virtual false, abstract: false, final false
inline void _RayCastDebugger_b__59_0() ;

/// [CompilerGenerated]
/// @brief Method <ShowDebugAnchorsDebugger>b__61_0, addr 0x9f42aec, size 0x380, virtual false, abstract: false, final false
inline void _ShowDebugAnchorsDebugger_b__61_0() ;

/// [CompilerGenerated]
/// @brief Method <SnapCanvasInFrontOfCamera>b__84_0, addr 0x9f431b0, size 0x118, virtual false, abstract: false, final false
inline bool _SnapCanvasInFrontOfCamera_b__84_0() ;

constexpr ::UnityW<::GlobalNamespace::OVRGazePointer> const& __cordl_internal_get_GazePointer() const;

constexpr ::UnityW<::GlobalNamespace::OVRGazePointer>& __cordl_internal_get_GazePointer() ;

constexpr ::UnityW<::UnityEngine::EventSystems::OVRInputModule> const& __cordl_internal_get_InputModule() const;

constexpr ::UnityW<::UnityEngine::EventSystems::OVRInputModule>& __cordl_internal_get_InputModule() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* const& __cordl_internal_get_Menus() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*& __cordl_internal_get_Menus() ;

constexpr bool const& __cordl_internal_get_MoveCanvasInFrontOfCamera() const;

constexpr bool& __cordl_internal_get_MoveCanvasInFrontOfCamera() ;

constexpr ::UnityW<::GlobalNamespace::OVRRayHelper> const& __cordl_internal_get_RayHelper() const;

constexpr ::UnityW<::GlobalNamespace::OVRRayHelper>& __cordl_internal_get_RayHelper() ;

constexpr ::UnityW<::GlobalNamespace::OVRRaycaster> const& __cordl_internal_get_Raycaster() const;

constexpr ::UnityW<::GlobalNamespace::OVRRaycaster>& __cordl_internal_get_Raycaster() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_RoomDetails() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_RoomDetails() ;

constexpr bool const& __cordl_internal_get_SetupInteractions() const;

constexpr bool& __cordl_internal_get_SetupInteractions() ;

constexpr bool const& __cordl_internal_get_ShowDebugAnchors() const;

constexpr bool& __cordl_internal_get_ShowDebugAnchors() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* const& __cordl_internal_get_Tabs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*& __cordl_internal_get_Tabs() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__backgroundColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__backgroundColor() ;

constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get__cameraRig() const;

constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get__cameraRig() ;

constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get__canvas() const;

constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get__canvas() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__checkerMeshMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__checkerMeshMaterial() ;

constexpr int32_t const& __cordl_internal_get__color() const;

constexpr int32_t& __cordl_internal_get__color() ;

constexpr int32_t const& __cordl_internal_get__cull() const;

constexpr int32_t& __cordl_internal_get__cull() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> const& __cordl_internal_get__currentRoom() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>& __cordl_internal_get__currentRoom() ;

constexpr ::System::Action* const& __cordl_internal_get__debugAction() const;

constexpr ::System::Action*& __cordl_internal_get__debugAction() ;

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

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__debugNormal() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__debugNormal() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__debugSphere() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__debugSphere() ;

constexpr int32_t const& __cordl_internal_get__dstBlend() const;

constexpr int32_t& __cordl_internal_get__dstBlend() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__foregroundColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__foregroundColor() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> const& __cordl_internal_get__globalMeshAnchor() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>& __cordl_internal_get__globalMeshAnchor() ;

constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get__globalMeshCollider() const;

constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get__globalMeshCollider() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__globalMeshGO() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__globalMeshGO() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__navMeshMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__navMeshMaterial() ;

constexpr ::UnityEngine::AI::NavMeshTriangulation const& __cordl_internal_get__navMeshTriangulation() const;

constexpr ::UnityEngine::AI::NavMeshTriangulation& __cordl_internal_get__navMeshTriangulation() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__navMeshViz() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__navMeshViz() ;

constexpr bool const& __cordl_internal_get__previousShowDebugAnchors() const;

constexpr bool& __cordl_internal_get__previousShowDebugAnchors() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> const& __cordl_internal_get__previousShownDebugAnchor() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>& __cordl_internal_get__previousShownDebugAnchor() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU> const& __cordl_internal_get__spaceMapGPU() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>& __cordl_internal_get__spaceMapGPU() ;

constexpr int32_t const& __cordl_internal_get__srcBlend() const;

constexpr int32_t& __cordl_internal_get__srcBlend() ;

constexpr int32_t const& __cordl_internal_get__zWrite() const;

constexpr int32_t& __cordl_internal_get__zWrite() ;

constexpr ::UnityW<::TMPro::TMP_Dropdown> const& __cordl_internal_get_exportGlobalMeshJSONDropdown() const;

constexpr ::UnityW<::TMPro::TMP_Dropdown>& __cordl_internal_get_exportGlobalMeshJSONDropdown() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_logs() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_logs() ;

constexpr ::UnityW<::TMPro::TMP_Dropdown> const& __cordl_internal_get_positioningMethodDropdown() const;

constexpr ::UnityW<::TMPro::TMP_Dropdown>& __cordl_internal_get_positioningMethodDropdown() ;

constexpr ::UnityW<::TMPro::TMP_Dropdown> const& __cordl_internal_get_surfaceTypeDropdown() const;

constexpr ::UnityW<::TMPro::TMP_Dropdown>& __cordl_internal_get_surfaceTypeDropdown() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_visualHelperMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_visualHelperMaterial() ;

constexpr void __cordl_internal_set_GazePointer(::UnityW<::GlobalNamespace::OVRGazePointer>  value) ;

constexpr void __cordl_internal_set_InputModule(::UnityW<::UnityEngine::EventSystems::OVRInputModule>  value) ;

constexpr void __cordl_internal_set_Menus(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*  value) ;

constexpr void __cordl_internal_set_MoveCanvasInFrontOfCamera(bool  value) ;

constexpr void __cordl_internal_set_RayHelper(::UnityW<::GlobalNamespace::OVRRayHelper>  value) ;

constexpr void __cordl_internal_set_Raycaster(::UnityW<::GlobalNamespace::OVRRaycaster>  value) ;

constexpr void __cordl_internal_set_RoomDetails(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_SetupInteractions(bool  value) ;

constexpr void __cordl_internal_set_ShowDebugAnchors(bool  value) ;

constexpr void __cordl_internal_set_Tabs(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  value) ;

constexpr void __cordl_internal_set__backgroundColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig>  value) ;

constexpr void __cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas>  value) ;

constexpr void __cordl_internal_set__checkerMeshMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__color(int32_t  value) ;

constexpr void __cordl_internal_set__cull(int32_t  value) ;

constexpr void __cordl_internal_set__currentRoom(::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  value) ;

constexpr void __cordl_internal_set__debugAction(::System::Action*  value) ;

constexpr void __cordl_internal_set__debugAnchor(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__debugAnchors(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__debugCheckerMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__debugCube(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__debugMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__debugNormal(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__debugSphere(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__dstBlend(int32_t  value) ;

constexpr void __cordl_internal_set__foregroundColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__globalMeshAnchor(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  value) ;

constexpr void __cordl_internal_set__globalMeshCollider(::UnityW<::UnityEngine::MeshCollider>  value) ;

constexpr void __cordl_internal_set__globalMeshGO(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__navMeshMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__navMeshTriangulation(::UnityEngine::AI::NavMeshTriangulation  value) ;

constexpr void __cordl_internal_set__navMeshViz(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__previousShowDebugAnchors(bool  value) ;

constexpr void __cordl_internal_set__previousShownDebugAnchor(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  value) ;

constexpr void __cordl_internal_set__spaceMapGPU(::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>  value) ;

constexpr void __cordl_internal_set__srcBlend(int32_t  value) ;

constexpr void __cordl_internal_set__zWrite(int32_t  value) ;

constexpr void __cordl_internal_set_exportGlobalMeshJSONDropdown(::UnityW<::TMPro::TMP_Dropdown>  value) ;

constexpr void __cordl_internal_set_logs(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_positioningMethodDropdown(::UnityW<::TMPro::TMP_Dropdown>  value) ;

constexpr void __cordl_internal_set_surfaceTypeDropdown(::UnityW<::TMPro::TMP_Dropdown>  value) ;

constexpr void __cordl_internal_set_visualHelperMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x9f41480, size 0x220, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get__roomHasChanged, addr 0x9f3af8c, size 0x17c, virtual false, abstract: false, final false
inline bool get__roomHasChanged() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneDebugger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneDebugger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneDebugger(SceneDebugger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneDebugger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneDebugger(SceneDebugger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25897};

/// @brief Field _spawnDistanceFromCamera offset 0xffffffff size 0x4
static constexpr float_t  _spawnDistanceFromCamera{static_cast<float_t>(0.75f)};

/// [Tooltip("Material used for visual helpers in debugging")]
/// @brief Field visualHelperMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___visualHelperMaterial;

/// [Tooltip("Visualize anchors")]
/// @brief Field ShowDebugAnchors, offset: 0x28, size: 0x1, def value: None
 bool  ___ShowDebugAnchors;

/// [Tooltip("On start, place the canvas in front of the user")]
/// @brief Field MoveCanvasInFrontOfCamera, offset: 0x29, size: 0x1, def value: None
 bool  ___MoveCanvasInFrontOfCamera;

/// [Tooltip("When false, use the interaction system already present in the scene")]
/// @brief Field SetupInteractions, offset: 0x2a, size: 0x1, def value: None
 bool  ___SetupInteractions;

/// [Tooltip(" Text field for displaying logs")]
/// @brief Field logs, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___logs;

/// [Tooltip("Dropdown to select what surface types to debug")]
/// @brief Field surfaceTypeDropdown, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Dropdown>  ___surfaceTypeDropdown;

/// [Tooltip("Dropdown to select whether to export the global mesh with the scene JSON")]
/// @brief Field exportGlobalMeshJSONDropdown, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Dropdown>  ___exportGlobalMeshJSONDropdown;

/// [Tooltip("Dropdown to select what positioning methods to debug")]
/// @brief Field positioningMethodDropdown, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Dropdown>  ___positioningMethodDropdown;

/// [Tooltip("Text field for displaying room details")]
/// @brief Field RoomDetails, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___RoomDetails;

/// [Tooltip("List of navigable tabs representing sub menus accessible from the top of the debug menu")]
/// @brief Field Tabs, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  ___Tabs;

/// [Tooltip("List of canvas groups for different menus")]
/// @brief Field Menus, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*  ___Menus;

/// [Tooltip("Helper for ray interactions")]
/// @brief Field RayHelper, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRRayHelper>  ___RayHelper;

/// [Tooltip("Input module for handling VR input")]
/// @brief Field InputModule, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::EventSystems::OVRInputModule>  ___InputModule;

/// [Tooltip("Raycaster for handling ray interactions")]
/// @brief Field Raycaster, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRRaycaster>  ___Raycaster;

/// [Tooltip("Gaze pointer for VR interactions")]
/// @brief Field GazePointer, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRGazePointer>  ___GazePointer;

/// @brief Field _foregroundColor, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Color  ____foregroundColor;

/// @brief Field _backgroundColor, offset: 0x98, size: 0x10, def value: None
 ::UnityEngine::Color  ____backgroundColor;

/// @brief Field _srcBlend, offset: 0xa8, size: 0x4, def value: None
 int32_t  ____srcBlend;

/// @brief Field _dstBlend, offset: 0xac, size: 0x4, def value: None
 int32_t  ____dstBlend;

/// @brief Field _zWrite, offset: 0xb0, size: 0x4, def value: None
 int32_t  ____zWrite;

/// @brief Field _cull, offset: 0xb4, size: 0x4, def value: None
 int32_t  ____cull;

/// @brief Field _color, offset: 0xb8, size: 0x4, def value: None
 int32_t  ____color;

/// @brief Field _debugAnchors, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____debugAnchors;

/// @brief Field _globalMeshGO, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____globalMeshGO;

/// @brief Field _debugMaterial, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____debugMaterial;

/// @brief Field _cameraRig, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRCameraRig>  ____cameraRig;

/// @brief Field _currentRoom, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  ____currentRoom;

/// @brief Field _debugCube, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____debugCube;

/// @brief Field _debugSphere, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____debugSphere;

/// @brief Field _debugNormal, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____debugNormal;

/// @brief Field _navMeshViz, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____navMeshViz;

/// @brief Field _debugAnchor, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____debugAnchor;

/// @brief Field _previousShowDebugAnchors, offset: 0x110, size: 0x1, def value: None
 bool  ____previousShowDebugAnchors;

/// @brief Field _debugCheckerMesh, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____debugCheckerMesh;

/// @brief Field _previousShownDebugAnchor, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  ____previousShownDebugAnchor;

/// @brief Field _globalMeshAnchor, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  ____globalMeshAnchor;

/// @brief Field _navMeshTriangulation, offset: 0x130, size: 0x18, def value: None
 ::UnityEngine::AI::NavMeshTriangulation  ____navMeshTriangulation;

/// @brief Field _debugAction, offset: 0x148, size: 0x8, def value: None
 ::System::Action*  ____debugAction;

/// @brief Field _canvas, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Canvas>  ____canvas;

/// @brief Field _spaceMapGPU, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>  ____spaceMapGPU;

/// @brief Field _globalMeshCollider, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshCollider>  ____globalMeshCollider;

/// @brief Field _navMeshMaterial, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____navMeshMaterial;

/// @brief Field _checkerMeshMaterial, offset: 0x170, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____checkerMeshMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ___visualHelperMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ___ShowDebugAnchors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ___MoveCanvasInFrontOfCamera) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ___SetupInteractions) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ___logs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ___surfaceTypeDropdown) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ___exportGlobalMeshJSONDropdown) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ___positioningMethodDropdown) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ___RoomDetails) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ___Tabs) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ___Menus) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ___RayHelper) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ___InputModule) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ___Raycaster) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ___GazePointer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____foregroundColor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____backgroundColor) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____srcBlend) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____dstBlend) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____zWrite) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____cull) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____color) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____debugAnchors) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____globalMeshGO) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____debugMaterial) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____cameraRig) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____currentRoom) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____debugCube) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____debugSphere) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____debugNormal) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____navMeshViz) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____debugAnchor) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____previousShowDebugAnchors) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____debugCheckerMesh) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____previousShownDebugAnchor) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____globalMeshAnchor) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____navMeshTriangulation) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____debugAction) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____canvas) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____spaceMapGPU) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____globalMeshCollider) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____navMeshMaterial) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger, ____checkerMeshMaterial) == 0x170, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDebugger) == 0x178, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDebugger/<SnapCanvasInFrontOfCamera>d__84
class CORDL_TYPE SceneDebugger__SnapCanvasInFrontOfCamera_d__84 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::XR::MRUtilityKit::SceneDebugger>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9f432cc, size 0x194, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9f43460, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9f43468, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9f434a0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9f432c8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDebugger> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDebugger>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::XR::MRUtilityKit::SceneDebugger>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9f41458, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneDebugger__SnapCanvasInFrontOfCamera_d__84() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneDebugger__SnapCanvasInFrontOfCamera_d__84", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneDebugger__SnapCanvasInFrontOfCamera_d__84(SceneDebugger__SnapCanvasInFrontOfCamera_d__84 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneDebugger__SnapCanvasInFrontOfCamera_d__84", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneDebugger__SnapCanvasInFrontOfCamera_d__84(SceneDebugger__SnapCanvasInFrontOfCamera_d__84 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25896};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::SceneDebugger>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84) == 0x28, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
