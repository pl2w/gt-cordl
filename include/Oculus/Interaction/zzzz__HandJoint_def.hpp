#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandJoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandJoint)
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
class IHand;
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
class HandJoint;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandJoint*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandJoint*, "Oculus.Interaction", "HandJoint");
// Dependencies Oculus.Interaction.Input.HandJointId, UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandJoint
class CORDL_TYPE HandJoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_FreezeRotationX, put=set_FreezeRotationX)) bool  FreezeRotationX;

 __declspec(property(get=get_FreezeRotationY, put=set_FreezeRotationY)) bool  FreezeRotationY;

 __declspec(property(get=get_FreezeRotationZ, put=set_FreezeRotationZ)) bool  FreezeRotationZ;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_HandJointId, put=set_HandJointId)) ::Oculus::Interaction::Input::HandJointId  HandJointId;

/// @brief Field LEFT_LEGACY_ROT, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_LEFT_LEGACY_ROT, put=setStaticF_LEFT_LEGACY_ROT)) ::UnityEngine::Vector3  LEFT_LEGACY_ROT;

 __declspec(property(get=get_LocalPositionOffset, put=set_LocalPositionOffset)) ::UnityEngine::Vector3  LocalPositionOffset;

 __declspec(property(get=get_MirrorOffsetsForLeftHand, put=set_MirrorOffsetsForLeftHand)) bool  MirrorOffsetsForLeftHand;

/// @brief Field RIGHT_LEGACY_ROT, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_RIGHT_LEGACY_ROT, put=setStaticF_RIGHT_LEGACY_ROT)) ::UnityEngine::Vector3  RIGHT_LEGACY_ROT;

 __declspec(property(get=get_RotationOffset, put=set_RotationOffset)) ::UnityEngine::Quaternion  RotationOffset;

/// @brief [Obsolete("This property is provided for backwards compatibility only, and its function will be removed in a future version of Interaction SDK.")]
 __declspec(property(get=get_UseLegacyOrientation, put=set_UseLegacyOrientation)) bool  UseLegacyOrientation;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _cachedPose, offset 0x78, size 0x1c 
 __declspec(property(get=__cordl_internal_get__cachedPose, put=__cordl_internal_set__cachedPose)) ::UnityEngine::Pose  _cachedPose;

/// @brief Field _freezeRotationX, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get__freezeRotationX, put=__cordl_internal_set__freezeRotationX)) bool  _freezeRotationX;

/// @brief Field _freezeRotationY, offset 0x73, size 0x1 
 __declspec(property(get=__cordl_internal_get__freezeRotationY, put=__cordl_internal_set__freezeRotationY)) bool  _freezeRotationY;

/// @brief Field _freezeRotationZ, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get__freezeRotationZ, put=__cordl_internal_set__freezeRotationZ)) bool  _freezeRotationZ;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _handJointId, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__handJointId, put=__cordl_internal_set__handJointId)) ::Oculus::Interaction::Input::HandJointId  _handJointId;

/// @brief Field _jointId, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__jointId, put=__cordl_internal_set__jointId)) ::Oculus::Interaction::Input::HandJointId  _jointId;

/// @brief Field _localPositionOffset, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get__localPositionOffset, put=__cordl_internal_set__localPositionOffset)) ::UnityEngine::Vector3  _localPositionOffset;

/// @brief Field _mirrorOffsetsForLeftHand, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get__mirrorOffsetsForLeftHand, put=__cordl_internal_set__mirrorOffsetsForLeftHand)) bool  _mirrorOffsetsForLeftHand;

/// @brief Field _posOffset, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get__posOffset, put=__cordl_internal_set__posOffset)) ::UnityEngine::Vector3  _posOffset;

/// @brief Field _rotOffset, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__rotOffset, put=__cordl_internal_set__rotOffset)) ::UnityEngine::Quaternion  _rotOffset;

/// @brief Field _rotationOffset, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__rotationOffset, put=__cordl_internal_set__rotationOffset)) ::UnityEngine::Quaternion  _rotationOffset;

/// @brief Field _started, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _useLegacyOrientation, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__useLegacyOrientation, put=__cordl_internal_set__useLegacyOrientation)) bool  _useLegacyOrientation;

/// @brief Method Awake, addr 0xa47cf10, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method FreezeRotation, addr 0xa47d5e4, size 0x2fc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion FreezeRotation(::UnityEngine::Quaternion  rotation) ;

/// @brief Method GetOffset, addr 0xa47d500, size 0xe4, virtual false, abstract: false, final false
inline void GetOffset(::by_ref<::UnityEngine::Pose>  pose, ::Oculus::Interaction::Input::Handedness  handedness, float_t  scale) ;

/// @brief Method HandleHandUpdated, addr 0xa47d194, size 0x36c, virtual false, abstract: false, final false
inline void HandleHandUpdated() ;

/// @brief Method InjectAllHandJoint, addr 0xa47d8e0, size 0x4, virtual false, abstract: false, final false
inline void InjectAllHandJoint(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHand, addr 0xa47d8e4, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

static inline ::Oculus::Interaction::HandJoint* New_ctor() ;

/// @brief Method OnDisable, addr 0xa47d094, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa47cf94, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa47cf68, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__cachedPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__cachedPose() ;

constexpr bool const& __cordl_internal_get__freezeRotationX() const;

constexpr bool& __cordl_internal_get__freezeRotationX() ;

constexpr bool const& __cordl_internal_get__freezeRotationY() const;

constexpr bool& __cordl_internal_get__freezeRotationY() ;

constexpr bool const& __cordl_internal_get__freezeRotationZ() const;

constexpr bool& __cordl_internal_get__freezeRotationZ() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::Oculus::Interaction::Input::HandJointId const& __cordl_internal_get__handJointId() const;

constexpr ::Oculus::Interaction::Input::HandJointId& __cordl_internal_get__handJointId() ;

constexpr ::Oculus::Interaction::Input::HandJointId const& __cordl_internal_get__jointId() const;

constexpr ::Oculus::Interaction::Input::HandJointId& __cordl_internal_get__jointId() ;

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

constexpr bool const& __cordl_internal_get__useLegacyOrientation() const;

constexpr bool& __cordl_internal_get__useLegacyOrientation() ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__cachedPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__freezeRotationX(bool  value) ;

constexpr void __cordl_internal_set__freezeRotationY(bool  value) ;

constexpr void __cordl_internal_set__freezeRotationZ(bool  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handJointId(::Oculus::Interaction::Input::HandJointId  value) ;

constexpr void __cordl_internal_set__jointId(::Oculus::Interaction::Input::HandJointId  value) ;

constexpr void __cordl_internal_set__localPositionOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__mirrorOffsetsForLeftHand(bool  value) ;

constexpr void __cordl_internal_set__posOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rotOffset(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__rotationOffset(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__useLegacyOrientation(bool  value) ;

/// @brief Method .ctor, addr 0xa47d9b4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Vector3 getStaticF_LEFT_LEGACY_ROT() ;

static inline ::UnityEngine::Vector3 getStaticF_RIGHT_LEGACY_ROT() ;

/// @brief Method get_FreezeRotationX, addr 0xa47ce90, size 0x8, virtual false, abstract: false, final false
inline bool get_FreezeRotationX() ;

/// @brief Method get_FreezeRotationY, addr 0xa47cea0, size 0x8, virtual false, abstract: false, final false
inline bool get_FreezeRotationY() ;

/// @brief Method get_FreezeRotationZ, addr 0xa47ceb0, size 0x8, virtual false, abstract: false, final false
inline bool get_FreezeRotationZ() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa47ce70, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Method get_HandJointId, addr 0xa47ced0, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::HandJointId get_HandJointId() ;

/// @brief Method get_LocalPositionOffset, addr 0xa47cee0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LocalPositionOffset() ;

/// @brief Method get_MirrorOffsetsForLeftHand, addr 0xa47cec0, size 0x8, virtual false, abstract: false, final false
inline bool get_MirrorOffsetsForLeftHand() ;

/// @brief Method get_RotationOffset, addr 0xa47cef8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_RotationOffset() ;

/// @brief Method get_UseLegacyOrientation, addr 0xa47ce80, size 0x8, virtual false, abstract: false, final false
inline bool get_UseLegacyOrientation() ;

static inline void setStaticF_LEFT_LEGACY_ROT(::UnityEngine::Vector3  value) ;

static inline void setStaticF_RIGHT_LEGACY_ROT(::UnityEngine::Vector3  value) ;

/// @brief Method set_FreezeRotationX, addr 0xa47ce98, size 0x8, virtual false, abstract: false, final false
inline void set_FreezeRotationX(bool  value) ;

/// @brief Method set_FreezeRotationY, addr 0xa47cea8, size 0x8, virtual false, abstract: false, final false
inline void set_FreezeRotationY(bool  value) ;

/// @brief Method set_FreezeRotationZ, addr 0xa47ceb8, size 0x8, virtual false, abstract: false, final false
inline void set_FreezeRotationZ(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa47ce78, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// @brief Method set_HandJointId, addr 0xa47ced8, size 0x8, virtual false, abstract: false, final false
inline void set_HandJointId(::Oculus::Interaction::Input::HandJointId  value) ;

/// @brief Method set_LocalPositionOffset, addr 0xa47ceec, size 0xc, virtual false, abstract: false, final false
inline void set_LocalPositionOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_MirrorOffsetsForLeftHand, addr 0xa47cec8, size 0x8, virtual false, abstract: false, final false
inline void set_MirrorOffsetsForLeftHand(bool  value) ;

/// @brief Method set_RotationOffset, addr 0xa47cf04, size 0xc, virtual false, abstract: false, final false
inline void set_RotationOffset(::UnityEngine::Quaternion  value) ;

/// @brief Method set_UseLegacyOrientation, addr 0xa47ce88, size 0x8, virtual false, abstract: false, final false
inline void set_UseLegacyOrientation(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandJoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandJoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandJoint(HandJoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandJoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandJoint(HandJoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15970};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [SerializeField]
/// @brief Field _handJointId, offset: 0x30, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandJointId  ____handJointId;

/// [SerializeField]
/// [InspectorName("Offset")]
/// @brief Field _localPositionOffset, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____localPositionOffset;

/// [SerializeField]
/// [InspectorName("Rotation")]
/// @brief Field _rotationOffset, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____rotationOffset;

/// [SerializeField]
/// @brief Field _jointId, offset: 0x50, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandJointId  ____jointId;

/// [SerializeField]
/// [InspectorName("Offset")]
/// @brief Field _posOffset, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____posOffset;

/// [SerializeField]
/// [InspectorName("Rotation")]
/// @brief Field _rotOffset, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____rotOffset;

/// [Tooltip("Provided for backwards compatibility. When set, the rotation of the driven transform for this component will match the legacy hand skeleton joint orientation rather than the current OpenXR joint orientation.")]
/// [SerializeField]
/// @brief Field _useLegacyOrientation, offset: 0x70, size: 0x1, def value: None
 bool  ____useLegacyOrientation;

/// [SerializeField]
/// [Tooltip("When the attached hand\'s handedness is set to Left, this property will mirror the offsets. This allows for offset values to be set in Right hand coordinates for both Left and Right hands.")]
/// @brief Field _mirrorOffsetsForLeftHand, offset: 0x71, size: 0x1, def value: None
 bool  ____mirrorOffsetsForLeftHand;

/// [Header("Freeze rotations")]
/// [SerializeField]
/// @brief Field _freezeRotationX, offset: 0x72, size: 0x1, def value: None
 bool  ____freezeRotationX;

/// [SerializeField]
/// @brief Field _freezeRotationY, offset: 0x73, size: 0x1, def value: None
 bool  ____freezeRotationY;

/// [SerializeField]
/// @brief Field _freezeRotationZ, offset: 0x74, size: 0x1, def value: None
 bool  ____freezeRotationZ;

/// @brief Field _cachedPose, offset: 0x78, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____cachedPose;

/// @brief Field _started, offset: 0x94, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandJoint, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJoint, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJoint, ____handJointId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJoint, ____localPositionOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJoint, ____rotationOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJoint, ____jointId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJoint, ____posOffset) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJoint, ____rotOffset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJoint, ____useLegacyOrientation) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJoint, ____mirrorOffsetsForLeftHand) == 0x71, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJoint, ____freezeRotationX) == 0x72, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJoint, ____freezeRotationY) == 0x73, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJoint, ____freezeRotationZ) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJoint, ____cachedPose) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandJoint, ____started) == 0x94, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandJoint) == 0x98, "Size mismatch!");

} // namespace end def Oculus::Interaction
