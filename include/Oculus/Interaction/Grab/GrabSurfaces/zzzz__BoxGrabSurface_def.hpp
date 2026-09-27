#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/BoxGrabSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BoxGrabSurface)
namespace Oculus::Interaction::Grab::GrabSurfaces {
class BoxGrabSurfaceData;
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
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
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
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Oculus::Interaction::Grab::GrabSurfaces {
class BoxGrabSurface;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*, "Oculus.Interaction.Grab.GrabSurfaces", "BoxGrabSurface");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Grab::GrabSurfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface
class CORDL_TYPE BoxGrabSurface : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_RelativePose)) ::UnityEngine::Pose  RelativePose;

/// @brief Field _data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*  _data;

/// @brief Field _relativeTo, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__relativeTo, put=__cordl_internal_set__relativeTo)) ::UnityW<::UnityEngine::Transform>  _relativeTo;

/// @brief Convert operator to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr operator  ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*() noexcept;

/// @brief Method CalculateBestPoseAtSurface, addr 0xa4e9778, size 0xbc, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Grab::GrabPoseScore CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CalculateBestPoseAtSurface, addr 0xa4e9834, size 0xe8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Grab::GrabPoseScore CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CalculateBestPoseAtSurface, addr 0xa4e9d34, size 0x354, virtual true, abstract: false, final true
inline bool CalculateBestPoseAtSurface(::UnityEngine::Ray  targetRay, ::by_ref<::UnityEngine::Pose>  bestPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CalculateCorners, addr 0xa4e991c, size 0x210, virtual false, abstract: false, final false
inline void CalculateCorners(::by_ref<::UnityEngine::Vector3>  bottomLeft, ::by_ref<::UnityEngine::Vector3>  bottomRight, ::by_ref<::UnityEngine::Vector3>  topLeft, ::by_ref<::UnityEngine::Vector3>  topRight, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CreateDuplicatedSurface, addr 0xa4e9708, size 0x70, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* CreateDuplicatedSurface(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method CreateMirroredSurface, addr 0xa4e9684, size 0x84, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* CreateMirroredSurface(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetDirection, addr 0xa4e93b0, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetDirection(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method GetReferencePose, addr 0xa4e8f90, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetReferencePose(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method GetRotation, addr 0xa4e91d8, size 0xec, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetRotation(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method GetSize, addr 0xa4e9130, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetSize(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method GetSnapOffset, addr 0xa4e907c, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetSnapOffset(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method GetWidthOffset, addr 0xa4e9008, size 0x38, virtual false, abstract: false, final false
inline float_t GetWidthOffset(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method InjectAllBoxSurface, addr 0xa4eb080, size 0x30, virtual false, abstract: false, final false
inline void InjectAllBoxSurface(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*  data, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method InjectData, addr 0xa4eb0b0, size 0x8, virtual false, abstract: false, final false
inline void InjectData(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*  data) ;

/// @brief Method InjectRelativeTo, addr 0xa4eb0b8, size 0x8, virtual false, abstract: false, final false
inline void InjectRelativeTo(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method MinimalRotationPoseAtSurface, addr 0xa4ea760, size 0x728, virtual false, abstract: false, final false
inline ::UnityEngine::Pose MinimalRotationPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method MinimalTranslationPoseAtSurface, addr 0xa4ea0c0, size 0x1b0, virtual false, abstract: false, final false
inline ::UnityEngine::Pose MinimalTranslationPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method MirrorPose, addr 0xa4e9518, size 0x16c, virtual false, abstract: false, final false
inline ::UnityEngine::Pose MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  pose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method NearestPointAndAngleInSurface, addr 0xa4ea270, size 0x4f0, virtual false, abstract: false, final false
inline void NearestPointAndAngleInSurface(::UnityEngine::Vector3  targetPosition, ::by_ref<::UnityEngine::Vector3>  surfacePoint, ::by_ref<float_t>  angle, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method NearestPointInSurface, addr 0xa4ea088, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 NearestPointInSurface(::UnityEngine::Vector3  targetPosition, ::UnityEngine::Transform*  relativeTo) ;

static inline ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface* New_ctor() ;

/// @brief Method Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface, addr 0xa4eb14c, size 0x4, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface, addr 0xa4eb150, size 0x4, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose, addr 0xa4eb154, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::Pose Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  gripPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method ProjectOnSegment, addr 0xa4e9b2c, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ProjectOnSegment(::UnityEngine::Vector3  point, ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>  segment) ;

/// @brief Method Reset, addr 0xa4e942c, size 0xe8, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method RotationalScore, addr 0xa4eae88, size 0x1f8, virtual false, abstract: false, final false
static inline float_t RotationalScore(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  to) ;

/// @brief Method SetRotation, addr 0xa4e92c4, size 0xec, virtual false, abstract: false, final false
inline void SetRotation(::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method SetSize, addr 0xa4e9180, size 0x58, virtual false, abstract: false, final false
inline void SetSize(::UnityEngine::Vector3  size, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method SetSnapOffset, addr 0xa4e90d0, size 0x60, virtual false, abstract: false, final false
inline void SetSnapOffset(::UnityEngine::Vector4  snapOffset, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method SetWidthOffset, addr 0xa4e9040, size 0x3c, virtual false, abstract: false, final false
inline void SetWidthOffset(float_t  widthOffset, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method Start, addr 0xa4e9514, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData* const& __cordl_internal_get__data() const;

constexpr ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*& __cordl_internal_get__data() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__relativeTo() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__relativeTo() ;

constexpr void __cordl_internal_set__data(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*  value) ;

constexpr void __cordl_internal_set__relativeTo(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa4eb0c0, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_RelativePose, addr 0xa4e8f40, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_RelativePose() ;

/// @brief Convert to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* i___Oculus__Interaction__Grab__GrabSurfaces__IGrabSurface() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoxGrabSurface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoxGrabSurface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoxGrabSurface(BoxGrabSurface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoxGrabSurface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoxGrabSurface(BoxGrabSurface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16357};

/// [SerializeField]
/// @brief Field _data, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*  ____data;

/// [SerializeField]
/// [Tooltip("Transform used as a reference to measure the local data of the grab surface")]
/// @brief Field _relativeTo, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____relativeTo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface, ____data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface, ____relativeTo) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Grab::GrabSurfaces
