#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/SphereGrabSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SphereGrabSurface)
namespace Oculus::Interaction::Grab::GrabSurfaces {
class IGrabSurface;
}
namespace Oculus::Interaction::Grab::GrabSurfaces {
class SphereGrabSurfaceData;
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
class SphereGrabSurface;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*, "Oculus.Interaction.Grab.GrabSurfaces", "SphereGrabSurface");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Grab::GrabSurfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface
class CORDL_TYPE SphereGrabSurface : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_RelativePose)) ::UnityEngine::Pose  RelativePose;

/// @brief Field _data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*  _data;

/// @brief Field _relativeTo, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__relativeTo, put=__cordl_internal_set__relativeTo)) ::UnityW<::UnityEngine::Transform>  _relativeTo;

/// @brief Convert operator to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr operator  ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*() noexcept;

/// @brief Method CalculateBestPoseAtSurface, addr 0xa4ee6d4, size 0xbc, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Grab::GrabPoseScore CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CalculateBestPoseAtSurface, addr 0xa4ee790, size 0xe8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Grab::GrabPoseScore CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CalculateBestPoseAtSurface, addr 0xa4ee178, size 0x334, virtual true, abstract: false, final true
inline bool CalculateBestPoseAtSurface(::UnityEngine::Ray  targetRay, ::by_ref<::UnityEngine::Pose>  bestPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CreateDuplicatedSurface, addr 0xa4ee8fc, size 0x70, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* CreateDuplicatedSurface(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method CreateMirroredSurface, addr 0xa4ee878, size 0x84, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* CreateMirroredSurface(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetCentre, addr 0xa4edc80, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetCentre(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method GetDirection, addr 0xa4edd9c, size 0x118, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetDirection(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method GetRadius, addr 0xa4edcdc, size 0xc0, virtual false, abstract: false, final false
inline float_t GetRadius(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method GetReferencePose, addr 0xa4edc08, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetReferencePose(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method InjectAllSphereSurface, addr 0xa4ef098, size 0x30, virtual false, abstract: false, final false
inline void InjectAllSphereSurface(::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*  data, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method InjectData, addr 0xa4ef0c8, size 0x8, virtual false, abstract: false, final false
inline void InjectData(::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*  data) ;

/// @brief Method InjectRelativeTo, addr 0xa4ef0d0, size 0x8, virtual false, abstract: false, final false
inline void InjectRelativeTo(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method MinimalRotationPoseAtSurface, addr 0xa4ee96c, size 0x204, virtual false, abstract: false, final false
inline ::UnityEngine::Pose MinimalRotationPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method MinimalTranslationPoseAtSurface, addr 0xa4ee5d4, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Pose MinimalTranslationPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method MirrorPose, addr 0xa4edfa0, size 0x1d8, virtual false, abstract: false, final false
inline ::UnityEngine::Pose MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  pose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method NearestPointInSurface, addr 0xa4ee4ac, size 0x128, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 NearestPointInSurface(::UnityEngine::Vector3  targetPosition, ::UnityEngine::Transform*  relativeTo) ;

static inline ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface* New_ctor() ;

/// @brief Method Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface, addr 0xa4ef140, size 0x4, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface, addr 0xa4ef144, size 0x4, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose, addr 0xa4ef148, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::Pose Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  gripPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method Reset, addr 0xa4edeb4, size 0xe8, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method RotationAtPoint, addr 0xa4eeb70, size 0x528, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion RotationAtPoint(::UnityEngine::Vector3  surfacePoint, ::UnityEngine::Quaternion  baseRot, ::UnityEngine::Quaternion  desiredRotation, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method SetCentre, addr 0xa4edcac, size 0x30, virtual false, abstract: false, final false
inline void SetCentre(::UnityEngine::Vector3  point, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method Start, addr 0xa4edf9c, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData* const& __cordl_internal_get__data() const;

constexpr ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*& __cordl_internal_get__data() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__relativeTo() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__relativeTo() ;

constexpr void __cordl_internal_set__data(::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*  value) ;

constexpr void __cordl_internal_set__relativeTo(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa4ef0d8, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_RelativePose, addr 0xa4edbb8, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_RelativePose() ;

/// @brief Convert to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* i___Oculus__Interaction__Grab__GrabSurfaces__IGrabSurface() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SphereGrabSurface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SphereGrabSurface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SphereGrabSurface(SphereGrabSurface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SphereGrabSurface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SphereGrabSurface(SphereGrabSurface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16363};

/// [SerializeField]
/// @brief Field _data, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*  ____data;

/// [SerializeField]
/// [Tooltip("Transform used as a reference to measure the local data of the grab surface")]
/// @brief Field _relativeTo, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____relativeTo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface, ____data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface, ____relativeTo) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Grab::GrabSurfaces
