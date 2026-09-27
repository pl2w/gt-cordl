#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/IGrabSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGrabSurface)
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
struct Ray;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Grab::GrabSurfaces {
class IGrabSurface;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*, "Oculus.Interaction.Grab.GrabSurfaces", "IGrabSurface");
// Dependencies 
namespace Oculus::Interaction::Grab::GrabSurfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface
class CORDL_TYPE IGrabSurface {
public:
// Declarations
/// [Obsolete("Use CalculateBestPoseAtSurface with offset instead")]
/// @brief Method CalculateBestPoseAtSurface, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::Grab::GrabPoseScore CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CalculateBestPoseAtSurface, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::Grab::GrabPoseScore CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CalculateBestPoseAtSurface, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CalculateBestPoseAtSurface(::UnityEngine::Ray  targetRay, ::by_ref<::UnityEngine::Pose>  bestPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CreateDuplicatedSurface, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* CreateDuplicatedSurface(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method CreateMirroredSurface, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* CreateMirroredSurface(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method MirrorPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Pose MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  gripPose, ::UnityEngine::Transform*  relativeTo) ;

// Ctor Parameters [CppParam { name: "", ty: "IGrabSurface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGrabSurface(IGrabSurface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16361};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Grab::GrabSurfaces
