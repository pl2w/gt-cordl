#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/ColliderGrabSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ColliderGrabSurface)
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
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Pose;
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
class ColliderGrabSurface;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*, "Oculus.Interaction.Grab.GrabSurfaces", "ColliderGrabSurface");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Grab::GrabSurfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface
class CORDL_TYPE ColliderGrabSurface : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _collider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__collider, put=__cordl_internal_set__collider)) ::UnityW<::UnityEngine::Collider>  _collider;

/// @brief Convert operator to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr operator  ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*() noexcept;

/// @brief Method CalculateBestPoseAtSurface, addr 0xa4eb24c, size 0xb4, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Grab::GrabPoseScore CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CalculateBestPoseAtSurface, addr 0xa4eb300, size 0x98, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Grab::GrabPoseScore CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CalculateBestPoseAtSurface, addr 0xa4eb398, size 0x104, virtual true, abstract: false, final true
inline bool CalculateBestPoseAtSurface(::UnityEngine::Ray  targetRay, ::by_ref<::UnityEngine::Pose>  bestPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CreateDuplicatedSurface, addr 0xa4eb544, size 0x70, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* CreateDuplicatedSurface(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method CreateMirroredSurface, addr 0xa4eb540, size 0x4, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* CreateMirroredSurface(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method InjectAllColliderGrabSurface, addr 0xa4eb5b4, size 0x8, virtual false, abstract: false, final false
inline void InjectAllColliderGrabSurface(::UnityEngine::Collider*  collider) ;

/// @brief Method InjectCollider, addr 0xa4eb5bc, size 0x8, virtual false, abstract: false, final false
inline void InjectCollider(::UnityEngine::Collider*  collider) ;

/// @brief Method MirrorPose, addr 0xa4eb49c, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::Pose MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  gripPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method NearestPointInSurface, addr 0xa4eb188, size 0xc4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 NearestPointInSurface(::UnityEngine::Vector3  targetPosition) ;

static inline ::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface* New_ctor() ;

/// @brief Method Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface, addr 0xa4eb5cc, size 0x4, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface, addr 0xa4eb5d0, size 0x4, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose, addr 0xa4eb5d4, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::Pose Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  gripPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method Start, addr 0xa4eb184, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__collider() ;

constexpr void __cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value) ;

/// @brief Method .ctor, addr 0xa4eb5c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* i___Oculus__Interaction__Grab__GrabSurfaces__IGrabSurface() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColliderGrabSurface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColliderGrabSurface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColliderGrabSurface(ColliderGrabSurface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColliderGrabSurface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColliderGrabSurface(ColliderGrabSurface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16358};

/// [SerializeField]
/// @brief Field _collider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____collider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface, ____collider) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Grab::GrabSurfaces
