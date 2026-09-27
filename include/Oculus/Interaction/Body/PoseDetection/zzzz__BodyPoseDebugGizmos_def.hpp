#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/PoseDetection/BodyPoseDebugGizmos.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__SkeletonDebugGizmos_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BodyPoseDebugGizmos)
namespace GlobalNamespace {
struct SkeletonDebugGizmos_VisibilityFlags;
}
namespace Oculus::Interaction::Body::PoseDetection {
class IBodyPose;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Body::PoseDetection {
class BodyPoseDebugGizmos;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*, "Oculus.Interaction.Body.PoseDetection", "BodyPoseDebugGizmos");
// Dependencies Oculus.Interaction.SkeletonDebugGizmos
namespace Oculus::Interaction::Body::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos
class CORDL_TYPE BodyPoseDebugGizmos : public ::Oculus::Interaction::SkeletonDebugGizmos {
public:
// Declarations
/// @brief Field BodyPose, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_BodyPose, put=__cordl_internal_set_BodyPose)) ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  BodyPose;

/// @brief Field _bodyPose, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyPose, put=__cordl_internal_set__bodyPose)) ::UnityW<::UnityEngine::Object>  _bodyPose;

/// @brief Method Awake, addr 0xa4f62e4, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetVisibilityFlags, addr 0xa4f65e0, size 0x24, virtual false, abstract: false, final false
inline ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags GetVisibilityFlags() ;

/// @brief Method InjectAllBodyJointDebugGizmos, addr 0xa4f68d4, size 0x4, virtual false, abstract: false, final false
inline void InjectAllBodyJointDebugGizmos(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  bodyPose) ;

/// @brief Method InjectBodyPose, addr 0xa4f68d8, size 0xd0, virtual false, abstract: false, final false
inline void InjectBodyPose(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  bodyPose) ;

static inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos* New_ctor() ;

/// @brief Method Start, addr 0xa4f634c, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TryGetJointPose, addr 0xa4f6604, size 0x184, virtual true, abstract: false, final false
inline bool TryGetJointPose(int32_t  jointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method TryGetParentJointId, addr 0xa4f6788, size 0x14c, virtual true, abstract: false, final false
inline bool TryGetParentJointId(int32_t  jointId, ::by_ref<int32_t>  parent) ;

/// @brief Method Update, addr 0xa4f6350, size 0x290, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* const& __cordl_internal_get_BodyPose() const;

constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose*& __cordl_internal_get_BodyPose() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__bodyPose() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__bodyPose() ;

constexpr void __cordl_internal_set_BodyPose(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  value) ;

constexpr void __cordl_internal_set__bodyPose(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa4f69a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BodyPoseDebugGizmos() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseDebugGizmos", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BodyPoseDebugGizmos(BodyPoseDebugGizmos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseDebugGizmos", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BodyPoseDebugGizmos(BodyPoseDebugGizmos const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16394};

/// [Tooltip("The IBodyPose that will drive the visuals.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Body.PoseDetection.IBodyPose), new[] {  })]
/// @brief Field _bodyPose, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____bodyPose;

/// @brief Field BodyPose, offset: 0x50, size: 0x8, def value: None
 ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  ___BodyPose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos, ____bodyPose) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos, ___BodyPose) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::PoseDetection
