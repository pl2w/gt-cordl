#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/CylinderGrabSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CylinderGrabSurface)
namespace Oculus::Interaction::Grab::GrabSurfaces {
class CylinderSurfaceData;
}
namespace Oculus::Interaction::Grab::GrabSurfaces {
class IGrabSurface;
}
namespace Oculus::Interaction::Grab {
struct GrabPoseScore;
}
namespace Oculus::Interaction::Grab {
struct PoseMeasureParameters;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Grab::GrabSurfaces {
class CylinderGrabSurface;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*, "Oculus.Interaction.Grab.GrabSurfaces", "CylinderGrabSurface");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Grab::GrabSurfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface
class CORDL_TYPE CylinderGrabSurface : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ArcLength, put=set_ArcLength)) float_t  ArcLength;

 __declspec(property(get=get_ArcOffset, put=set_ArcOffset)) float_t  ArcOffset;

 __declspec(property(get=get_LocalDirection)) ::UnityEngine::Vector3  LocalDirection;

 __declspec(property(get=get_LocalPerpendicularDir)) ::UnityEngine::Vector3  LocalPerpendicularDir;

 __declspec(property(get=get_RelativePose)) ::UnityEngine::Pose  RelativePose;

/// @brief Field _data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*  _data;

/// @brief Field _relativeTo, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__relativeTo, put=__cordl_internal_set__relativeTo)) ::UnityW<::UnityEngine::Transform>  _relativeTo;

/// @brief Convert operator to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr operator  ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*() noexcept;

/// @brief Method CalculateBestPoseAtSurface, addr 0xa4ec71c, size 0xbc, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Grab::GrabPoseScore CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CalculateBestPoseAtSurface, addr 0xa4ec7d8, size 0xe8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Grab::GrabPoseScore CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CalculateBestPoseAtSurface, addr 0xa4ecf14, size 0x34c, virtual true, abstract: false, final true
inline bool CalculateBestPoseAtSurface(::UnityEngine::Ray  targetRay, ::by_ref<::UnityEngine::Pose>  bestPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CalculateRotationOffset, addr 0xa4ed7e0, size 0x188, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion CalculateRotationOffset(::UnityEngine::Vector3  surfacePoint, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CreateDuplicatedSurface, addr 0xa4ec944, size 0x10c, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* CreateDuplicatedSurface(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method CreateMirroredSurface, addr 0xa4ec8c0, size 0x84, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* CreateMirroredSurface(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetDirection, addr 0xa4ec0f0, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetDirection(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method GetEndArcDir, addr 0xa4ebd24, size 0x15c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetEndArcDir(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method GetEndPoint, addr 0xa4ebedc, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetEndPoint(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method GetHeight, addr 0xa4ec114, size 0xb8, virtual false, abstract: false, final false
inline float_t GetHeight(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method GetPerpendicularDir, addr 0xa4ebc54, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPerpendicularDir(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method GetRadius, addr 0xa4ebf38, size 0x1b8, virtual false, abstract: false, final false
inline float_t GetRadius(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method GetReferencePose, addr 0xa4eb79c, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetReferencePose(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method GetRotation, addr 0xa4ec1cc, size 0x164, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetRotation(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method GetStartArcDir, addr 0xa4ebc78, size 0xac, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetStartArcDir(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method GetStartPoint, addr 0xa4ebe80, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetStartPoint(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method InjectAllCylinderSurface, addr 0xa4ed968, size 0x30, virtual false, abstract: false, final false
inline void InjectAllCylinderSurface(::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*  data, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method InjectData, addr 0xa4ed998, size 0x8, virtual false, abstract: false, final false
inline void InjectData(::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*  data) ;

/// @brief Method InjectRelativeTo, addr 0xa4ed9a0, size 0x8, virtual false, abstract: false, final false
inline void InjectRelativeTo(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method MinimalRotationPoseAtSurface, addr 0xa4ed384, size 0x45c, virtual false, abstract: false, final false
inline ::UnityEngine::Pose MinimalRotationPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method MinimalTranslationPoseAtSurface, addr 0xa4ed260, size 0x124, virtual false, abstract: false, final false
inline ::UnityEngine::Pose MinimalTranslationPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method MirrorPose, addr 0xa4ec41c, size 0x1bc, virtual false, abstract: false, final false
inline ::UnityEngine::Pose MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  pose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method NearestPointInSurface, addr 0xa4eca50, size 0x4c4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 NearestPointInSurface(::UnityEngine::Vector3  targetPosition, ::UnityEngine::Transform*  relativeTo) ;

static inline ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface* New_ctor() ;

/// @brief Method Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface, addr 0xa4eda34, size 0x4, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface, addr 0xa4eda38, size 0x4, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose, addr 0xa4eda3c, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::Pose Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  gripPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method PointAltitude, addr 0xa4ec5d8, size 0x144, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 PointAltitude(::UnityEngine::Vector3  point, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method Reset, addr 0xa4ec330, size 0xe8, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SetEndPoint, addr 0xa4ebf08, size 0x30, virtual false, abstract: false, final false
inline void SetEndPoint(::UnityEngine::Vector3  point, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method SetStartPoint, addr 0xa4ebeac, size 0x30, virtual false, abstract: false, final false
inline void SetStartPoint(::UnityEngine::Vector3  point, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method Start, addr 0xa4ec418, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData* const& __cordl_internal_get__data() const;

constexpr ::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*& __cordl_internal_get__data() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__relativeTo() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__relativeTo() ;

constexpr void __cordl_internal_set__data(::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*  value) ;

constexpr void __cordl_internal_set__relativeTo(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa4ed9a8, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ArcLength, addr 0xa4eb8b0, size 0x18, virtual false, abstract: false, final false
inline float_t get_ArcLength() ;

/// @brief Method get_ArcOffset, addr 0xa4eb814, size 0x18, virtual false, abstract: false, final false
inline float_t get_ArcOffset() ;

/// @brief Method get_LocalDirection, addr 0xa4ebb20, size 0x134, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LocalDirection() ;

/// @brief Method get_LocalPerpendicularDir, addr 0xa4eb94c, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LocalPerpendicularDir() ;

/// @brief Method get_RelativePose, addr 0xa4eb74c, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_RelativePose() ;

/// @brief Convert to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* i___Oculus__Interaction__Grab__GrabSurfaces__IGrabSurface() noexcept;

/// @brief Method set_ArcLength, addr 0xa4eb8c8, size 0x84, virtual false, abstract: false, final false
inline void set_ArcLength(float_t  value) ;

/// @brief Method set_ArcOffset, addr 0xa4eb82c, size 0x84, virtual false, abstract: false, final false
inline void set_ArcOffset(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CylinderGrabSurface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CylinderGrabSurface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CylinderGrabSurface(CylinderGrabSurface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CylinderGrabSurface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CylinderGrabSurface(CylinderGrabSurface const& ) = delete;

/// @brief Field Epsilon offset 0xffffffff size 0x4
static constexpr float_t  Epsilon{static_cast<float_t>(1e-6f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16360};

/// [SerializeField]
/// @brief Field _data, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*  ____data;

/// [SerializeField]
/// [Tooltip("Transform used as a reference to measure the local data of the grab surface")]
/// @brief Field _relativeTo, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____relativeTo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface, ____data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface, ____relativeTo) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Grab::GrabSurfaces
