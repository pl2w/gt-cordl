#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/PoseDetection/BodyPoseComparerActiveStateDebugVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BodyPoseComparerActiveStateDebugVisual)
namespace Oculus::Interaction::Body::PoseDetection {
class BodyPoseComparerActiveState;
}
namespace Oculus::Interaction::Body::PoseDetection {
class IBodyPose;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Body::PoseDetection {
class BodyPoseComparerActiveStateDebugVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual*, "Oculus.Interaction.Body.PoseDetection", "BodyPoseComparerActiveStateDebugVisual");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Body::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual
class CORDL_TYPE BodyPoseComparerActiveStateDebugVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field BodyPose, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_BodyPose, put=__cordl_internal_set_BodyPose)) ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  BodyPose;

 __declspec(property(get=get_Radius, put=set_Radius)) float_t  Radius;

/// @brief Field _bodyPose, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyPose, put=__cordl_internal_set__bodyPose)) ::UnityW<::UnityEngine::Object>  _bodyPose;

/// @brief Field _bodyPoseComparer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyPoseComparer, put=__cordl_internal_set__bodyPoseComparer)) ::UnityW<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState>  _bodyPoseComparer;

/// @brief Field _radius, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__radius, put=__cordl_internal_set__radius)) float_t  _radius;

/// @brief Field _root, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__root, put=__cordl_internal_set__root)) ::UnityW<::UnityEngine::Transform>  _root;

/// @brief Method Awake, addr 0xa4f4e84, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DrawJointSpheres, addr 0xa4f4ef4, size 0x4c0, virtual false, abstract: false, final false
inline void DrawJointSpheres() ;

/// @brief Method InjectAllBodyPoseComparerActiveStateDebugVisual, addr 0xa4f53b4, size 0x40, virtual false, abstract: false, final false
inline void InjectAllBodyPoseComparerActiveStateDebugVisual(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*  bodyPoseComparer, ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  bodyPose, ::UnityEngine::Transform*  root) ;

/// @brief Method InjectBodyPose, addr 0xa4f53f4, size 0xd0, virtual false, abstract: false, final false
inline void InjectBodyPose(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  bodyPose) ;

/// @brief Method InjectBodyPoseComparer, addr 0xa4f54cc, size 0x8, virtual false, abstract: false, final false
inline void InjectBodyPoseComparer(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*  bodyPoseComparer) ;

/// @brief Method InjectRootTransform, addr 0xa4f54c4, size 0x8, virtual false, abstract: false, final false
inline void InjectRootTransform(::UnityEngine::Transform*  root) ;

static inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual* New_ctor() ;

/// @brief Method Start, addr 0xa4f4eec, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa4f4ef0, size 0x4, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* const& __cordl_internal_get_BodyPose() const;

constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose*& __cordl_internal_get_BodyPose() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__bodyPose() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__bodyPose() ;

constexpr ::UnityW<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState> const& __cordl_internal_get__bodyPoseComparer() const;

constexpr ::UnityW<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState>& __cordl_internal_get__bodyPoseComparer() ;

constexpr float_t const& __cordl_internal_get__radius() const;

constexpr float_t& __cordl_internal_get__radius() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__root() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__root() ;

constexpr void __cordl_internal_set_BodyPose(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  value) ;

constexpr void __cordl_internal_set__bodyPose(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__bodyPoseComparer(::UnityW<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState>  value) ;

constexpr void __cordl_internal_set__radius(float_t  value) ;

constexpr void __cordl_internal_set__root(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa4f54d4, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Radius, addr 0xa4f4e74, size 0x8, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// @brief Method set_Radius, addr 0xa4f4e7c, size 0x8, virtual false, abstract: false, final false
inline void set_Radius(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BodyPoseComparerActiveStateDebugVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseComparerActiveStateDebugVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BodyPoseComparerActiveStateDebugVisual(BodyPoseComparerActiveStateDebugVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseComparerActiveStateDebugVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BodyPoseComparerActiveStateDebugVisual(BodyPoseComparerActiveStateDebugVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16389};

/// [Tooltip("The PoseComparer to debug.")]
/// [SerializeField]
/// @brief Field _bodyPoseComparer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState>  ____bodyPoseComparer;

/// [Tooltip("The body pose to overlay onto. This gizmo simply draws gizmos at joint locations - you must provide a body pose in order for this component to place the gizmos accurately.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Body.PoseDetection.IBodyPose), new[] {  })]
/// @brief Field _bodyPose, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____bodyPose;

/// @brief Field BodyPose, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  ___BodyPose;

/// [Tooltip("The root transform of the body on which to overlay the spheres. For BodyPoseDebugGizmos, this is simply the transform of the component. For a skinned body model, this would be the Root transform.")]
/// [SerializeField]
/// @brief Field _root, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____root;

/// [Tooltip("The radius of the debug spheres.")]
/// [SerializeField]
/// [Delayed]
/// @brief Field _radius, offset: 0x40, size: 0x4, def value: None
 float_t  ____radius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual, ____bodyPoseComparer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual, ____bodyPose) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual, ___BodyPose) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual, ____root) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual, ____radius) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::PoseDetection
