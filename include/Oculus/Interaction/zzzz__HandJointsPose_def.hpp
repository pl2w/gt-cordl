#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandJointsPose.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandJointsPose)
namespace GlobalNamespace {
struct HandJointsPose_WeightedJoint;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class HandJointsPose;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandJointsPose*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandJointsPose*, "Oculus.Interaction", "HandJointsPose");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandJointsPose
class CORDL_TYPE HandJointsPose : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using WeightedJoint = ::GlobalNamespace::HandJointsPose_WeightedJoint;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_LocalPositionOffset, put=set_LocalPositionOffset)) ::UnityEngine::Vector3  LocalPositionOffset;

 __declspec(property(get=get_MirrorOffsetsForLeftHand, put=set_MirrorOffsetsForLeftHand)) bool  MirrorOffsetsForLeftHand;

 __declspec(property(get=get_RotationOffset, put=set_RotationOffset)) ::UnityEngine::Quaternion  RotationOffset;

 __declspec(property(get=get_WeightedJoints, put=set_WeightedJoints)) ::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*  WeightedJoints;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _cachedPose, offset 0x80, size 0x1c 
 __declspec(property(get=__cordl_internal_get__cachedPose, put=__cordl_internal_set__cachedPose)) ::UnityEngine::Pose  _cachedPose;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _joints, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__joints, put=__cordl_internal_set__joints)) ::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*  _joints;

/// @brief Field _localPositionOffset, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get__localPositionOffset, put=__cordl_internal_set__localPositionOffset)) ::UnityEngine::Vector3  _localPositionOffset;

/// @brief Field _mirrorOffsetsForLeftHand, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get__mirrorOffsetsForLeftHand, put=__cordl_internal_set__mirrorOffsetsForLeftHand)) bool  _mirrorOffsetsForLeftHand;

/// @brief Field _posOffset, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get__posOffset, put=__cordl_internal_set__posOffset)) ::UnityEngine::Vector3  _posOffset;

/// @brief Field _rotOffset, offset 0x6c, size 0x10 
 __declspec(property(get=__cordl_internal_get__rotOffset, put=__cordl_internal_set__rotOffset)) ::UnityEngine::Quaternion  _rotOffset;

/// @brief Field _rotationOffset, offset 0x44, size 0x10 
 __declspec(property(get=__cordl_internal_get__rotationOffset, put=__cordl_internal_set__rotationOffset)) ::UnityEngine::Quaternion  _rotationOffset;

/// @brief Field _started, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _weightedJoints, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__weightedJoints, put=__cordl_internal_set__weightedJoints)) ::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*  _weightedJoints;

/// @brief Method Awake, addr 0xa47db4c, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetOffset, addr 0xa47e138, size 0xe4, virtual false, abstract: false, final false
inline void GetOffset(::by_ref<::UnityEngine::Pose>  pose, ::Oculus::Interaction::Input::Handedness  handedness, float_t  scale) ;

/// @brief Method HandleHandUpdated, addr 0xa47ddd0, size 0x360, virtual false, abstract: false, final false
inline void HandleHandUpdated() ;

/// @brief Method InjectAllHandJoint, addr 0xa47e21c, size 0x4, virtual false, abstract: false, final false
inline void InjectAllHandJoint(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHand, addr 0xa47e220, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

static inline ::Oculus::Interaction::HandJointsPose* New_ctor() ;

/// @brief Method OnDisable, addr 0xa47dcd0, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa47dbd0, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa47dba4, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__cachedPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__cachedPose() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>* const& __cordl_internal_get__joints() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*& __cordl_internal_get__joints() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localPositionOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__localPositionOffset() ;

constexpr bool const& __cordl_internal_get__mirrorOffsetsForLeftHand() const;

constexpr bool& __cordl_internal_get__mirrorOffsetsForLeftHand() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__posOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__posOffset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__rotOffset() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__rotOffset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__rotationOffset() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__rotationOffset() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>* const& __cordl_internal_get__weightedJoints() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*& __cordl_internal_get__weightedJoints() ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__cachedPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__joints(::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*  value) ;

constexpr void __cordl_internal_set__localPositionOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__mirrorOffsetsForLeftHand(bool  value) ;

constexpr void __cordl_internal_set__posOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rotOffset(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__rotationOffset(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__weightedJoints(::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*  value) ;

/// @brief Method .ctor, addr 0xa47e2f0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa47daec, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Method get_LocalPositionOffset, addr 0xa47db1c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LocalPositionOffset() ;

/// @brief Method get_MirrorOffsetsForLeftHand, addr 0xa47dafc, size 0x8, virtual false, abstract: false, final false
inline bool get_MirrorOffsetsForLeftHand() ;

/// @brief Method get_RotationOffset, addr 0xa47db34, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_RotationOffset() ;

/// @brief Method get_WeightedJoints, addr 0xa47db0c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>* get_WeightedJoints() ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa47daf4, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// @brief Method set_LocalPositionOffset, addr 0xa47db28, size 0xc, virtual false, abstract: false, final false
inline void set_LocalPositionOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_MirrorOffsetsForLeftHand, addr 0xa47db04, size 0x8, virtual false, abstract: false, final false
inline void set_MirrorOffsetsForLeftHand(bool  value) ;

/// @brief Method set_RotationOffset, addr 0xa47db40, size 0xc, virtual false, abstract: false, final false
inline void set_RotationOffset(::UnityEngine::Quaternion  value) ;

/// @brief Method set_WeightedJoints, addr 0xa47db14, size 0x8, virtual false, abstract: false, final false
inline void set_WeightedJoints(::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandJointsPose() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandJointsPose", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandJointsPose(HandJointsPose && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandJointsPose", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandJointsPose(HandJointsPose const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15972};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [SerializeField]
/// [InspectorName("Weighted Joints")]
/// @brief Field _weightedJoints, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*  ____weightedJoints;

/// [SerializeField]
/// [InspectorName("Offset")]
/// @brief Field _localPositionOffset, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____localPositionOffset;

/// [SerializeField]
/// [InspectorName("Rotation")]
/// @brief Field _rotationOffset, offset: 0x44, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____rotationOffset;

/// [SerializeField]
/// [InspectorName("Weighted Joints")]
/// @brief Field _joints, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*  ____joints;

/// [SerializeField]
/// [InspectorName("Offset")]
/// @brief Field _posOffset, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____posOffset;

/// [SerializeField]
/// [InspectorName("Rotation")]
/// @brief Field _rotOffset, offset: 0x6c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____rotOffset;

/// [SerializeField]
/// [Tooltip("When the attached hand\'s handedness is set to Left, this property will mirror the offsets. This allows for offset values to be set in Right hand coordinates for both Left and Right hands.")]
/// @brief Field _mirrorOffsetsForLeftHand, offset: 0x7c, size: 0x1, def value: None
 bool  ____mirrorOffsetsForLeftHand;

/// @brief Field _cachedPose, offset: 0x80, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____cachedPose;

/// @brief Field _started, offset: 0x9c, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandJointsPose, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJointsPose, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJointsPose, ____weightedJoints) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJointsPose, ____localPositionOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJointsPose, ____rotationOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJointsPose, ____joints) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJointsPose, ____posOffset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJointsPose, ____rotOffset) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJointsPose, ____mirrorOffsetsForLeftHand) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJointsPose, ____cachedPose) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJointsPose, ____started) == 0x9c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandJointsPose) == 0xa0, "Size mismatch!");

} // namespace end def Oculus::Interaction
