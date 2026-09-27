#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MRUKAnchor)
namespace GlobalNamespace {
struct MRUKAnchor_ComponentType;
}
namespace GlobalNamespace {
struct MRUKAnchor_SceneLabels;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace Meta::XR::MRUtilityKit {
class MRUKRoom;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKAnchor*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKAnchor*, "Meta.XR.MRUtilityKit", "MRUKAnchor");
// [HelpURL("https://developers.meta.com/horizon/reference/mruk/latest/class_meta_x_r_m_r_utility_kit_m_r_u_k_anchor")]
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.MRUKAnchor::SceneLabels, OVRAnchor, System.Nullable`1<T>, UnityEngine.Bounds, UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Rect
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKAnchor
class CORDL_TYPE MRUKAnchor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ComponentType = ::GlobalNamespace::MRUKAnchor_ComponentType;

using SceneLabels = ::GlobalNamespace::MRUKAnchor_SceneLabels;

 __declspec(property(get=get_Anchor, put=set_Anchor)) ::GlobalNamespace::OVRAnchor  Anchor;

/// @brief [Obsolete("Use \'Label\' instead.")]
 __declspec(property(get=get_AnchorLabels)) ::System::Collections::Generic::List_1<::StringW>*  AnchorLabels;

 __declspec(property(get=get_ChildAnchors, put=set_ChildAnchors)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  ChildAnchors;

 __declspec(property(get=get_DeltaPose)) ::UnityEngine::Pose  DeltaPose;

 __declspec(property(get=get_GlobalMesh, put=set_GlobalMesh)) ::UnityW<::UnityEngine::Mesh>  GlobalMesh;

/// @brief [Obsolete("Use PlaneRect.HasValue instead.")]
 __declspec(property(get=get_HasPlane)) bool  HasPlane;

 __declspec(property(get=get_HasValidHandle)) bool  HasValidHandle;

/// @brief [Obsolete("Use VolumeBounds.HasValue instead.")]
 __declspec(property(get=get_HasVolume)) bool  HasVolume;

 __declspec(property(get=get_InitialPose, put=set_InitialPose)) ::UnityEngine::Pose  InitialPose;

/// @brief [Obsolete("Use HasValidHandle instead.")]
 __declspec(property(get=get_IsLocal)) bool  IsLocal;

 __declspec(property(get=get_Label, put=set_Label)) ::GlobalNamespace::MRUKAnchor_SceneLabels  Label;

 __declspec(property(get=get_Mesh, put=set_Mesh)) ::UnityW<::UnityEngine::Mesh>  Mesh;

 __declspec(property(get=get_ParentAnchor, put=set_ParentAnchor)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  ParentAnchor;

 __declspec(property(get=get_PlaneBoundary2D, put=set_PlaneBoundary2D)) ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  PlaneBoundary2D;

 __declspec(property(get=get_PlaneRect, put=set_PlaneRect)) ::System::Nullable_1<::UnityEngine::Rect>  PlaneRect;

 __declspec(property(get=get_Room, put=set_Room)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  Room;

 __declspec(property(get=get_VolumeBounds, put=set_VolumeBounds)) ::System::Nullable_1<::UnityEngine::Bounds>  VolumeBounds;

/// @brief Field <Anchor>k__BackingField, offset 0x68, size 0x18 
 __declspec(property(get=__cordl_internal_get__Anchor_k__BackingField, put=__cordl_internal_set__Anchor_k__BackingField)) ::GlobalNamespace::OVRAnchor  _Anchor_k__BackingField;

/// @brief Field <ChildAnchors>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__ChildAnchors_k__BackingField, put=__cordl_internal_set__ChildAnchors_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  _ChildAnchors_k__BackingField;

/// @brief Field <InitialPose>k__BackingField, offset 0x20, size 0x1c 
 __declspec(property(get=__cordl_internal_get__InitialPose_k__BackingField, put=__cordl_internal_set__InitialPose_k__BackingField)) ::UnityEngine::Pose  _InitialPose_k__BackingField;

/// @brief Field <Label>k__BackingField, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Label_k__BackingField, put=__cordl_internal_set__Label_k__BackingField)) ::GlobalNamespace::MRUKAnchor_SceneLabels  _Label_k__BackingField;

/// @brief Field <ParentAnchor>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__ParentAnchor_k__BackingField, put=__cordl_internal_set__ParentAnchor_k__BackingField)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  _ParentAnchor_k__BackingField;

/// @brief Field <PlaneBoundary2D>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlaneBoundary2D_k__BackingField, put=__cordl_internal_set__PlaneBoundary2D_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  _PlaneBoundary2D_k__BackingField;

/// @brief Field <PlaneRect>k__BackingField, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__PlaneRect_k__BackingField, put=__cordl_internal_set__PlaneRect_k__BackingField)) ::System::Nullable_1<::UnityEngine::Rect>  _PlaneRect_k__BackingField;

/// @brief Field <Room>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__Room_k__BackingField, put=__cordl_internal_set__Room_k__BackingField)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  _Room_k__BackingField;

/// @brief Field <VolumeBounds>k__BackingField, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__VolumeBounds_k__BackingField, put=__cordl_internal_set__VolumeBounds_k__BackingField)) ::System::Nullable_1<::UnityEngine::Bounds>  _VolumeBounds_k__BackingField;

/// @brief Field _mesh, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh>  _mesh;

/// @brief Method AddChildReference, addr 0x9f31710, size 0x100, virtual false, abstract: false, final false
inline void AddChildReference(::Meta::XR::MRUtilityKit::MRUKAnchor*  childObj) ;

/// @brief Method ClearChildReferences, addr 0x9f31810, size 0x70, virtual false, abstract: false, final false
inline void ClearChildReferences() ;

/// @brief Method GetAnchorCenter, addr 0x9f31f34, size 0xd4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetAnchorCenter() ;

/// [Obsolete("Use PlaneRect and VolumeBounds properties instead")]
/// @brief Method GetAnchorSize, addr 0x9f32008, size 0x190, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetAnchorSize() ;

/// @brief Method GetBoundsFaceCenters, addr 0x9f32198, size 0x380, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> GetBoundsFaceCenters() ;

/// @brief Method GetClosestSurfacePosition, addr 0x9f31f0c, size 0x28, virtual false, abstract: false, final false
inline float_t GetClosestSurfacePosition(::UnityEngine::Vector3  testPosition, ::by_ref<::UnityEngine::Vector3>  closestPosition, ::GlobalNamespace::MRUKAnchor_ComponentType  componentTypes) ;

/// @brief Method GetClosestSurfacePosition, addr 0x9f318b4, size 0x658, virtual false, abstract: false, final false
inline float_t GetClosestSurfacePosition(::UnityEngine::Vector3  testPosition, ::by_ref<::UnityEngine::Vector3>  closestPosition, ::by_ref<::UnityEngine::Vector3>  normal, ::GlobalNamespace::MRUKAnchor_ComponentType  componentTypes) ;

/// @brief Method GetDistanceToSurface, addr 0x9f31880, size 0x34, virtual false, abstract: false, final false
inline float_t GetDistanceToSurface(::UnityEngine::Vector3  position, ::GlobalNamespace::MRUKAnchor_ComponentType  componentTypes) ;

/// [Obsolete("Use \'Label\' instead.")]
/// @brief Method GetLabelsAsEnum, addr 0x9f32abc, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MRUKAnchor_SceneLabels GetLabelsAsEnum() ;

/// @brief Method HasAnyLabel, addr 0x9f32690, size 0x10, virtual false, abstract: false, final false
inline bool HasAnyLabel(::GlobalNamespace::MRUKAnchor_SceneLabels  labelFlags) ;

/// [Obsolete("String-based labels are deprecated (v65). Please use the equivalent enum-based methods.")]
/// @brief Method HasAnyLabel, addr 0x9f32a48, size 0x74, virtual false, abstract: false, final false
inline bool HasAnyLabel(::System::Collections::Generic::List_1<::StringW>*  labels) ;

/// [Obsolete("String-based labels are deprecated (v65). Please use the equivalent enum-based methods.")]
/// @brief Method HasLabel, addr 0x9f329d4, size 0x74, virtual false, abstract: false, final false
inline bool HasLabel(::StringW  label) ;

/// @brief Method IsPositionInBoundary, addr 0x9f31670, size 0xa0, virtual false, abstract: false, final false
inline bool IsPositionInBoundary(::UnityEngine::Vector2  position) ;

/// @brief Method IsPositionInVolume, addr 0x9f32518, size 0x178, virtual false, abstract: false, final false
inline bool IsPositionInVolume(::UnityEngine::Vector3  worldPosition, bool  testVerticalBounds, float_t  distanceBuffer) ;

/// @brief Method LoadGlobalMeshTriangles, addr 0x9f30cf4, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> LoadGlobalMeshTriangles() ;

/// @brief Method LoadObjectMeshTriangles, addr 0x9f326a0, size 0x334, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> LoadObjectMeshTriangles() ;

static inline ::Meta::XR::MRUtilityKit::MRUKAnchor* New_ctor() ;

/// @brief Method Raycast, addr 0x9f30d74, size 0x24c, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDist, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, ::GlobalNamespace::MRUKAnchor_ComponentType  componentTypes) ;

/// @brief Method RaycastPlane, addr 0x9f30fc0, size 0x2b4, virtual false, abstract: false, final false
inline bool RaycastPlane(::UnityEngine::Ray  localRay, float_t  maxDist, ::by_ref<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method RaycastVolume, addr 0x9f31274, size 0x3fc, virtual false, abstract: false, final false
inline bool RaycastVolume(::UnityEngine::Ray  localRay, float_t  maxDist, ::by_ref<::UnityEngine::RaycastHit>  hitInfo) ;

constexpr ::GlobalNamespace::OVRAnchor const& __cordl_internal_get__Anchor_k__BackingField() const;

constexpr ::GlobalNamespace::OVRAnchor& __cordl_internal_get__Anchor_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* const& __cordl_internal_get__ChildAnchors_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*& __cordl_internal_get__ChildAnchors_k__BackingField() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__InitialPose_k__BackingField() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__InitialPose_k__BackingField() ;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& __cordl_internal_get__Label_k__BackingField() const;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& __cordl_internal_get__Label_k__BackingField() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> const& __cordl_internal_get__ParentAnchor_k__BackingField() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>& __cordl_internal_get__ParentAnchor_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* const& __cordl_internal_get__PlaneBoundary2D_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& __cordl_internal_get__PlaneBoundary2D_k__BackingField() ;

constexpr ::System::Nullable_1<::UnityEngine::Rect> const& __cordl_internal_get__PlaneRect_k__BackingField() const;

constexpr ::System::Nullable_1<::UnityEngine::Rect>& __cordl_internal_get__PlaneRect_k__BackingField() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> const& __cordl_internal_get__Room_k__BackingField() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>& __cordl_internal_get__Room_k__BackingField() ;

constexpr ::System::Nullable_1<::UnityEngine::Bounds> const& __cordl_internal_get__VolumeBounds_k__BackingField() const;

constexpr ::System::Nullable_1<::UnityEngine::Bounds>& __cordl_internal_get__VolumeBounds_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh() ;

constexpr void __cordl_internal_set__Anchor_k__BackingField(::GlobalNamespace::OVRAnchor  value) ;

constexpr void __cordl_internal_set__ChildAnchors_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value) ;

constexpr void __cordl_internal_set__InitialPose_k__BackingField(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__Label_k__BackingField(::GlobalNamespace::MRUKAnchor_SceneLabels  value) ;

constexpr void __cordl_internal_set__ParentAnchor_k__BackingField(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  value) ;

constexpr void __cordl_internal_set__PlaneBoundary2D_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set__PlaneRect_k__BackingField(::System::Nullable_1<::UnityEngine::Rect>  value) ;

constexpr void __cordl_internal_set__Room_k__BackingField(::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  value) ;

constexpr void __cordl_internal_set__VolumeBounds_k__BackingField(::System::Nullable_1<::UnityEngine::Bounds>  value) ;

constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value) ;

/// @brief Method .ctor, addr 0x9f32ac4, size 0x110, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Anchor, addr 0x9f30b24, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRAnchor get_Anchor() ;

/// @brief Method get_AnchorLabels, addr 0x9f308b4, size 0x5c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_AnchorLabels() ;

/// [CompilerGenerated]
/// @brief Method get_ChildAnchors, addr 0x9f30b6c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* get_ChildAnchors() ;

/// @brief Method get_DeltaPose, addr 0x9f30940, size 0x16c, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_DeltaPose() ;

/// @brief Method get_GlobalMesh, addr 0x9f30c68, size 0x84, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_GlobalMesh() ;

/// @brief Method get_HasPlane, addr 0x9f30b7c, size 0x44, virtual false, abstract: false, final false
inline bool get_HasPlane() ;

/// @brief Method get_HasValidHandle, addr 0x9f30c08, size 0x5c, virtual false, abstract: false, final false
inline bool get_HasValidHandle() ;

/// @brief Method get_HasVolume, addr 0x9f30bc0, size 0x44, virtual false, abstract: false, final false
inline bool get_HasVolume() ;

/// [CompilerGenerated]
/// @brief Method get_InitialPose, addr 0x9f30910, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_InitialPose() ;

/// @brief Method get_IsLocal, addr 0x9f30c04, size 0x4, virtual false, abstract: false, final false
inline bool get_IsLocal() ;

/// [CompilerGenerated]
/// @brief Method get_Label, addr 0x9f30aac, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MRUKAnchor_SceneLabels get_Label() ;

/// @brief Method get_Mesh, addr 0x9f30c64, size 0x4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_Mesh() ;

/// [CompilerGenerated]
/// @brief Method get_ParentAnchor, addr 0x9f30b5c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> get_ParentAnchor() ;

/// [CompilerGenerated]
/// @brief Method get_PlaneBoundary2D, addr 0x9f30b14, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* get_PlaneBoundary2D() ;

/// [CompilerGenerated]
/// @brief Method get_PlaneRect, addr 0x9f30abc, size 0x14, virtual false, abstract: false, final false
inline ::System::Nullable_1<::UnityEngine::Rect> get_PlaneRect() ;

/// [CompilerGenerated]
/// @brief Method get_Room, addr 0x9f30b4c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> get_Room() ;

/// [CompilerGenerated]
/// @brief Method get_VolumeBounds, addr 0x9f30ae4, size 0x14, virtual false, abstract: false, final false
inline ::System::Nullable_1<::UnityEngine::Bounds> get_VolumeBounds() ;

/// [CompilerGenerated]
/// @brief Method set_Anchor, addr 0x9f30b38, size 0x14, virtual false, abstract: false, final false
inline void set_Anchor(::GlobalNamespace::OVRAnchor  value) ;

/// [CompilerGenerated]
/// @brief Method set_ChildAnchors, addr 0x9f30b74, size 0x8, virtual false, abstract: false, final false
inline void set_ChildAnchors(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value) ;

/// @brief Method set_GlobalMesh, addr 0x9f30d6c, size 0x8, virtual false, abstract: false, final false
inline void set_GlobalMesh(::UnityEngine::Mesh*  value) ;

/// [CompilerGenerated]
/// @brief Method set_InitialPose, addr 0x9f30924, size 0x1c, virtual false, abstract: false, final false
inline void set_InitialPose(::UnityEngine::Pose  value) ;

/// [CompilerGenerated]
/// @brief Method set_Label, addr 0x9f30ab4, size 0x8, virtual false, abstract: false, final false
inline void set_Label(::GlobalNamespace::MRUKAnchor_SceneLabels  value) ;

/// @brief Method set_Mesh, addr 0x9f30cec, size 0x8, virtual false, abstract: false, final false
inline void set_Mesh(::UnityEngine::Mesh*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ParentAnchor, addr 0x9f30b64, size 0x8, virtual false, abstract: false, final false
inline void set_ParentAnchor(::Meta::XR::MRUtilityKit::MRUKAnchor*  value) ;

/// [CompilerGenerated]
/// @brief Method set_PlaneBoundary2D, addr 0x9f30b1c, size 0x8, virtual false, abstract: false, final false
inline void set_PlaneBoundary2D(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_PlaneRect, addr 0x9f30ad0, size 0x14, virtual false, abstract: false, final false
inline void set_PlaneRect(::System::Nullable_1<::UnityEngine::Rect>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Room, addr 0x9f30b54, size 0x8, virtual false, abstract: false, final false
inline void set_Room(::Meta::XR::MRUtilityKit::MRUKRoom*  value) ;

/// [CompilerGenerated]
/// @brief Method set_VolumeBounds, addr 0x9f30af8, size 0x1c, virtual false, abstract: false, final false
inline void set_VolumeBounds(::System::Nullable_1<::UnityEngine::Bounds>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKAnchor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKAnchor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKAnchor(MRUKAnchor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKAnchor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKAnchor(MRUKAnchor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25886};

/// [CompilerGenerated]
/// @brief Field <InitialPose>k__BackingField, offset: 0x20, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____InitialPose_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Label>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::MRUKAnchor_SceneLabels  ____Label_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PlaneRect>k__BackingField, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Rect>  ____PlaneRect_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <VolumeBounds>k__BackingField, offset: 0x50, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Bounds>  ____VolumeBounds_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PlaneBoundary2D>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  ____PlaneBoundary2D_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Anchor>k__BackingField, offset: 0x68, size: 0x18, def value: None
 ::GlobalNamespace::OVRAnchor  ____Anchor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Room>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  ____Room_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ParentAnchor>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  ____ParentAnchor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ChildAnchors>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  ____ChildAnchors_k__BackingField;

/// @brief Field _mesh, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____mesh;

/// @brief Size padding 0xb0 - 0xa0 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKAnchor, ____InitialPose_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKAnchor, ____Label_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKAnchor, ____PlaneRect_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKAnchor, ____VolumeBounds_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKAnchor, ____PlaneBoundary2D_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKAnchor, ____Anchor_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKAnchor, ____Room_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKAnchor, ____ParentAnchor_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKAnchor, ____ChildAnchors_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKAnchor, ____mesh) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKAnchor) == 0xb0, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
