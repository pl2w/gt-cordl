#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandPinchOffset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandPinchOffset)
namespace Oculus::Interaction::GrabAPI {
class HandGrabAPI;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace UnityEngine {
class Collider;
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
class HandPinchOffset;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandPinchOffset*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandPinchOffset*, "Oculus.Interaction", "HandPinchOffset");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandPinchOffset
class CORDL_TYPE HandPinchOffset : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_LocalPositionOffset, put=set_LocalPositionOffset)) ::UnityEngine::Vector3  LocalPositionOffset;

 __declspec(property(get=get_MirrorOffsetsForLeftHand, put=set_MirrorOffsetsForLeftHand)) bool  MirrorOffsetsForLeftHand;

 __declspec(property(get=get_RotationOffset, put=set_RotationOffset)) ::UnityEngine::Quaternion  RotationOffset;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _cachedPose, offset 0x7c, size 0x1c 
 __declspec(property(get=__cordl_internal_get__cachedPose, put=__cordl_internal_set__cachedPose)) ::UnityEngine::Pose  _cachedPose;

/// @brief Field _collider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__collider, put=__cordl_internal_set__collider)) ::UnityW<::UnityEngine::Collider>  _collider;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _handGrabApi, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabApi, put=__cordl_internal_set__handGrabApi)) ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  _handGrabApi;

/// @brief Field _localPositionOffset, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get__localPositionOffset, put=__cordl_internal_set__localPositionOffset)) ::UnityEngine::Vector3  _localPositionOffset;

/// @brief Field _mirrorOffsetsForLeftHand, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__mirrorOffsetsForLeftHand, put=__cordl_internal_set__mirrorOffsetsForLeftHand)) bool  _mirrorOffsetsForLeftHand;

/// @brief Field _posOffset, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get__posOffset, put=__cordl_internal_set__posOffset)) ::UnityEngine::Vector3  _posOffset;

/// @brief Field _rotOffset, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get__rotOffset, put=__cordl_internal_set__rotOffset)) ::UnityEngine::Quaternion  _rotOffset;

/// @brief Field _rotationOffset, offset 0x4c, size 0x10 
 __declspec(property(get=__cordl_internal_get__rotationOffset, put=__cordl_internal_set__rotationOffset)) ::UnityEngine::Quaternion  _rotationOffset;

/// @brief Field _started, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa47e40c, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetOffset, addr 0xa47e958, size 0xe4, virtual false, abstract: false, final false
inline void GetOffset(::by_ref<::UnityEngine::Pose>  pose, ::Oculus::Interaction::Input::Handedness  handedness, float_t  scale) ;

/// @brief Method HandleHandUpdated, addr 0xa47e690, size 0x2c8, virtual false, abstract: false, final false
inline void HandleHandUpdated() ;

/// @brief Method InjectAllHandPinchOffset, addr 0xa47ea3c, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllHandPinchOffset(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::GrabAPI::HandGrabAPI*  handGrabApi) ;

/// @brief Method InjectHand, addr 0xa47ea68, size 0xcc, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHandGrabAPI, addr 0xa47eb34, size 0x8, virtual false, abstract: false, final false
inline void InjectHandGrabAPI(::Oculus::Interaction::GrabAPI::HandGrabAPI*  handGrabApi) ;

/// @brief Method InjectOptionalCollider, addr 0xa47eb3c, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalCollider(::UnityEngine::Collider*  collider) ;

static inline ::Oculus::Interaction::HandPinchOffset* New_ctor() ;

/// @brief Method OnDisable, addr 0xa47e590, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa47e490, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa47e464, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__cachedPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__cachedPose() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__collider() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI> const& __cordl_internal_get__handGrabApi() const;

constexpr ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>& __cordl_internal_get__handGrabApi() ;

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

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__cachedPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handGrabApi(::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  value) ;

constexpr void __cordl_internal_set__localPositionOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__mirrorOffsetsForLeftHand(bool  value) ;

constexpr void __cordl_internal_set__posOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rotOffset(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__rotationOffset(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa47eb44, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa47e3bc, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Method get_LocalPositionOffset, addr 0xa47e3dc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LocalPositionOffset() ;

/// @brief Method get_MirrorOffsetsForLeftHand, addr 0xa47e3cc, size 0x8, virtual false, abstract: false, final false
inline bool get_MirrorOffsetsForLeftHand() ;

/// @brief Method get_RotationOffset, addr 0xa47e3f4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_RotationOffset() ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa47e3c4, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// @brief Method set_LocalPositionOffset, addr 0xa47e3e8, size 0xc, virtual false, abstract: false, final false
inline void set_LocalPositionOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_MirrorOffsetsForLeftHand, addr 0xa47e3d4, size 0x8, virtual false, abstract: false, final false
inline void set_MirrorOffsetsForLeftHand(bool  value) ;

/// @brief Method set_RotationOffset, addr 0xa47e400, size 0xc, virtual false, abstract: false, final false
inline void set_RotationOffset(::UnityEngine::Quaternion  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandPinchOffset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandPinchOffset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandPinchOffset(HandPinchOffset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandPinchOffset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandPinchOffset(HandPinchOffset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15973};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [SerializeField]
/// @brief Field _handGrabApi, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  ____handGrabApi;

/// [SerializeField]
/// [Optional]
/// @brief Field _collider, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____collider;

/// [SerializeField]
/// [InspectorName("Offset")]
/// @brief Field _localPositionOffset, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____localPositionOffset;

/// [SerializeField]
/// [InspectorName("Rotation")]
/// @brief Field _rotationOffset, offset: 0x4c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____rotationOffset;

/// [SerializeField]
/// [InspectorName("Offset")]
/// @brief Field _posOffset, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____posOffset;

/// [SerializeField]
/// [InspectorName("Rotation")]
/// @brief Field _rotOffset, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____rotOffset;

/// [SerializeField]
/// [Tooltip("When the attached hand\'s handedness is set to Left, this property will mirror the offsets. This allows for offset values to be set in Right hand coordinates for both Left and Right hands.")]
/// @brief Field _mirrorOffsetsForLeftHand, offset: 0x78, size: 0x1, def value: None
 bool  ____mirrorOffsetsForLeftHand;

/// @brief Field _started, offset: 0x79, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _cachedPose, offset: 0x7c, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____cachedPose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandPinchOffset, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPinchOffset, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPinchOffset, ____handGrabApi) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPinchOffset, ____collider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPinchOffset, ____localPositionOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPinchOffset, ____rotationOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPinchOffset, ____posOffset) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPinchOffset, ____rotOffset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPinchOffset, ____mirrorOffsetsForLeftHand) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPinchOffset, ____started) == 0x79, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPinchOffset, ____cachedPose) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandPinchOffset) == 0x98, "Size mismatch!");

} // namespace end def Oculus::Interaction
