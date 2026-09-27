#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Samples/LockedBodyPose.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
CORDL_MODULE_EXPORT(LockedBodyPose)
namespace Oculus::Interaction::Body::Input {
struct BodyJointId;
}
namespace Oculus::Interaction::Body::Input {
class ISkeletonMapping;
}
namespace Oculus::Interaction::Body::PoseDetection {
class IBodyPose;
}
namespace Oculus::Interaction::Body::Samples {
class LockedBodyPose___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Body::Samples {
class LockedBodyPose;
}
namespace Oculus::Interaction::Body::Samples {
class LockedBodyPose___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::Samples::LockedBodyPose*);
MARK_REF_T(::Oculus::Interaction::Body::Samples::LockedBodyPose___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::Samples::LockedBodyPose*, "Oculus.Interaction.Body.Samples", "LockedBodyPose");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::Samples::LockedBodyPose___c*, "Oculus.Interaction.Body.Samples", "LockedBodyPose/<>c");
// Dependencies Oculus.Interaction.Body.Input.BodyJointId, UnityEngine.MonoBehaviour, UnityEngine.Pose
namespace Oculus::Interaction::Body::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Body.Samples.LockedBodyPose
class CORDL_TYPE LockedBodyPose : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::Body::Samples::LockedBodyPose___c;

/// @brief Field HIP_OFFSET, offset 0xffffffff, size 0x1c 
 __declspec(property(get=getStaticF_HIP_OFFSET, put=setStaticF_HIP_OFFSET)) ::UnityEngine::Pose  HIP_OFFSET;

/// @brief Field Pose, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Pose, put=__cordl_internal_set_Pose)) ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  Pose;

 __declspec(property(get=get_SkeletonMapping)) ::Oculus::Interaction::Body::Input::ISkeletonMapping*  SkeletonMapping;

/// @brief Field WhenBodyPoseUpdated, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenBodyPoseUpdated, put=__cordl_internal_set_WhenBodyPoseUpdated)) ::System::Action*  WhenBodyPoseUpdated;

/// @brief Field _lockedPoses, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__lockedPoses, put=__cordl_internal_set__lockedPoses)) ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  _lockedPoses;

/// @brief Field _pose, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__pose, put=__cordl_internal_set__pose)) ::UnityW<::UnityEngine::Object>  _pose;

/// @brief Field _referenceJoint, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__referenceJoint, put=__cordl_internal_set__referenceJoint)) ::Oculus::Interaction::Body::Input::BodyJointId  _referenceJoint;

/// @brief Field _referenceOffset, offset 0x3c, size 0x1c 
 __declspec(property(get=__cordl_internal_get__referenceOffset, put=__cordl_internal_set__referenceOffset)) ::UnityEngine::Pose  _referenceOffset;

/// @brief Field _started, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::Body::PoseDetection::IBodyPose"
constexpr operator  ::Oculus::Interaction::Body::PoseDetection::IBodyPose*() noexcept;

/// @brief Method Awake, addr 0xa435004, size 0xbc, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetJointPoseFromRoot, addr 0xa434d88, size 0x68, virtual true, abstract: false, final true
inline bool GetJointPoseFromRoot(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPoseLocal, addr 0xa434ccc, size 0xbc, virtual true, abstract: false, final true
inline bool GetJointPoseLocal(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

static inline ::Oculus::Interaction::Body::Samples::LockedBodyPose* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4351f0, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4350f4, size 0xfc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa4350c0, size 0x34, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateLockedBodyPose, addr 0xa434df0, size 0x214, virtual false, abstract: false, final false
inline void UpdateLockedBodyPose() ;

constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* const& __cordl_internal_get_Pose() const;

constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose*& __cordl_internal_get_Pose() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenBodyPoseUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_WhenBodyPoseUpdated() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>* const& __cordl_internal_get__lockedPoses() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*& __cordl_internal_get__lockedPoses() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__pose() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__pose() ;

constexpr ::Oculus::Interaction::Body::Input::BodyJointId const& __cordl_internal_get__referenceJoint() const;

constexpr ::Oculus::Interaction::Body::Input::BodyJointId& __cordl_internal_get__referenceJoint() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__referenceOffset() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__referenceOffset() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_Pose(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  value) ;

constexpr void __cordl_internal_set_WhenBodyPoseUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set__lockedPoses(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  value) ;

constexpr void __cordl_internal_set__pose(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__referenceJoint(::Oculus::Interaction::Body::Input::BodyJointId  value) ;

constexpr void __cordl_internal_set__referenceOffset(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4352f0, size 0x148, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenBodyPoseUpdated, addr 0xa434af0, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenBodyPoseUpdated(::System::Action*  value) ;

static inline ::UnityEngine::Pose getStaticF_HIP_OFFSET() ;

/// @brief Method get_SkeletonMapping, addr 0xa434c28, size 0xa4, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Body::Input::ISkeletonMapping* get_SkeletonMapping() ;

/// @brief Convert to "::Oculus::Interaction::Body::PoseDetection::IBodyPose"
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* i___Oculus__Interaction__Body__PoseDetection__IBodyPose() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenBodyPoseUpdated, addr 0xa434b8c, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenBodyPoseUpdated(::System::Action*  value) ;

static inline void setStaticF_HIP_OFFSET(::UnityEngine::Pose  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LockedBodyPose() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LockedBodyPose", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LockedBodyPose(LockedBodyPose && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LockedBodyPose", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LockedBodyPose(LockedBodyPose const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28290};

/// [CompilerGenerated]
/// @brief Field WhenBodyPoseUpdated, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___WhenBodyPoseUpdated;

/// [Tooltip("The body pose to be locked")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Body.PoseDetection.IBodyPose), new[] {  })]
/// @brief Field _pose, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____pose;

/// @brief Field Pose, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  ___Pose;

/// [Tooltip("The body pose will be locked relative to this joint at the specified offset.")]
/// [SerializeField]
/// @brief Field _referenceJoint, offset: 0x38, size: 0x4, def value: None
 ::Oculus::Interaction::Body::Input::BodyJointId  ____referenceJoint;

/// [Tooltip("The reference joint will be placed at this offset from the root.")]
/// [SerializeField]
/// @brief Field _referenceOffset, offset: 0x3c, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____referenceOffset;

/// @brief Field _started, offset: 0x58, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _lockedPoses, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  ____lockedPoses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Body::Samples::LockedBodyPose, ___WhenBodyPoseUpdated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::LockedBodyPose, ____pose) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::LockedBodyPose, ___Pose) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::LockedBodyPose, ____referenceJoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::LockedBodyPose, ____referenceOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::LockedBodyPose, ____started) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::LockedBodyPose, ____lockedPoses) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Body::Samples::LockedBodyPose) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::Samples
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Body::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Body.Samples.LockedBodyPose/<>c
class CORDL_TYPE LockedBodyPose___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Body::Samples::LockedBodyPose___c*  __9;

/// @brief Field <>9__19_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_0, put=setStaticF___9__19_0)) ::System::Action*  __9__19_0;

static inline ::Oculus::Interaction::Body::Samples::LockedBodyPose___c* New_ctor() ;

/// @brief Method <.ctor>b__19_0, addr 0xa43551c, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__19_0() ;

/// @brief Method .ctor, addr 0xa435514, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Body::Samples::LockedBodyPose___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__19_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Body::Samples::LockedBodyPose___c*  value) ;

static inline void setStaticF___9__19_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LockedBodyPose___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LockedBodyPose___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LockedBodyPose___c(LockedBodyPose___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LockedBodyPose___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LockedBodyPose___c(LockedBodyPose___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28289};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Body::Samples::LockedBodyPose___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::Samples
