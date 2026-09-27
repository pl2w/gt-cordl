#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/CharacterController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CharacterController)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class CapsuleCollider;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class CharacterController;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::CharacterController*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::CharacterController*, "Oculus.Interaction.Locomotion", "CharacterController");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.RaycastHit
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.CharacterController
class CORDL_TYPE CharacterController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Height)) float_t  Height;

 __declspec(property(get=get_IsGrounded)) bool  IsGrounded;

 __declspec(property(get=get_LayerMask, put=set_LayerMask)) ::UnityEngine::LayerMask  LayerMask;

 __declspec(property(get=get_MaxReboundSteps, put=set_MaxReboundSteps)) int32_t  MaxReboundSteps;

 __declspec(property(get=get_MaxSlopeAngle, put=set_MaxSlopeAngle)) float_t  MaxSlopeAngle;

 __declspec(property(get=get_MaxStep, put=set_MaxStep)) float_t  MaxStep;

 __declspec(property(get=get_Pose)) ::UnityEngine::Pose  Pose;

 __declspec(property(get=get_Radius)) float_t  Radius;

 __declspec(property(get=get_SkinWidth, put=set_SkinWidth)) float_t  SkinWidth;

/// @brief Field _capsule, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__capsule, put=__cordl_internal_set__capsule)) ::UnityW<::UnityEngine::CapsuleCollider>  _capsule;

/// @brief Field _feetAnchor, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__feetAnchor, put=__cordl_internal_set__feetAnchor)) ::UnityW<::UnityEngine::Transform>  _feetAnchor;

/// @brief Field _groundHit, offset 0x50, size 0x2c 
 __declspec(property(get=__cordl_internal_get__groundHit, put=__cordl_internal_set__groundHit)) ::UnityEngine::RaycastHit  _groundHit;

/// @brief Field _headAnchor, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__headAnchor, put=__cordl_internal_set__headAnchor)) ::UnityW<::UnityEngine::Transform>  _headAnchor;

/// @brief Field _isGrounded, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isGrounded, put=__cordl_internal_set__isGrounded)) bool  _isGrounded;

/// @brief Field _layerMask, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__layerMask, put=__cordl_internal_set__layerMask)) ::UnityEngine::LayerMask  _layerMask;

/// @brief Field _maxReboundSteps, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxReboundSteps, put=__cordl_internal_set__maxReboundSteps)) int32_t  _maxReboundSteps;

/// @brief Field _maxSlopeAngle, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxSlopeAngle, put=__cordl_internal_set__maxSlopeAngle)) float_t  _maxSlopeAngle;

/// @brief Field _maxStep, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxStep, put=__cordl_internal_set__maxStep)) float_t  _maxStep;

/// @brief Field _skinWidth, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__skinWidth, put=__cordl_internal_set__skinWidth)) float_t  _skinWidth;

/// @brief Field _started, offset 0x7d, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method CalculateGround, addr 0xa4be484, size 0x200, virtual false, abstract: false, final false
inline bool CalculateGround(::by_ref<::UnityEngine::RaycastHit>  groundHit, float_t  extraDistance) ;

/// @brief Method CalculateGround, addr 0xa4c0394, size 0x444, virtual false, abstract: false, final false
inline bool CalculateGround(::UnityEngine::Vector3  origin, float_t  radius, float_t  distance, ::by_ref<::UnityEngine::RaycastHit>  groundHit) ;

/// @brief Method CheckMoveCharacter, addr 0xa4be0a8, size 0x250, virtual false, abstract: false, final false
inline bool CheckMoveCharacter(::UnityEngine::Vector3  delta, ::by_ref<::UnityEngine::Vector3>  movement) ;

/// @brief Method ClimbStep, addr 0xa4bf668, size 0x8c4, virtual false, abstract: false, final false
inline bool ClimbStep(::UnityEngine::Vector3  capsuleBase, ::UnityEngine::Vector3  capsuleTop, float_t  radius, ::UnityEngine::Vector3  delta, ::by_ref<::UnityEngine::Vector3>  climbDelta, ::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>  stepHit) ;

/// @brief Method DecomposeDelta, addr 0xa4c01f4, size 0x1a0, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> DecomposeDelta(::UnityEngine::Vector3  delta, ::UnityEngine::RaycastHit  hit) ;

/// @brief Method InjectAllCharacterController, addr 0xa4c0d70, size 0x8, virtual false, abstract: false, final false
inline void InjectAllCharacterController(::UnityEngine::CapsuleCollider*  capsule) ;

/// @brief Method InjectCapsule, addr 0xa4c0d78, size 0x8, virtual false, abstract: false, final false
inline void InjectCapsule(::UnityEngine::CapsuleCollider*  capsule) ;

/// @brief Method InjectOptionalFeetAnchor, addr 0xa4c0d80, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalFeetAnchor(::UnityEngine::Transform*  feetAnchor) ;

/// @brief Method InjectOptionalHeadAnchor, addr 0xa4c0d88, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalHeadAnchor(::UnityEngine::Transform*  headAnchor) ;

/// @brief Method IsFlat, addr 0xa4be684, size 0x15c, virtual false, abstract: false, final false
inline bool IsFlat(::UnityEngine::Vector3  groundNormal) ;

/// @brief Method Move, addr 0xa4bea1c, size 0x284, virtual false, abstract: false, final false
inline void Move(::UnityEngine::Vector3  delta) ;

/// @brief Method MoveCapsuleCollides, addr 0xa4bff2c, size 0x2c8, virtual false, abstract: false, final false
inline bool MoveCapsuleCollides(::UnityEngine::Vector3  capsuleBase, ::UnityEngine::Vector3  capsuleTop, float_t  radius, ::UnityEngine::Vector3  delta, ::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>  moveHit) ;

static inline ::Oculus::Interaction::Locomotion::CharacterController* New_ctor() ;

/// @brief Method OnEnable, addr 0xa4bdcc0, size 0x10, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RaycastHitPlane, addr 0xa4be7e0, size 0x17c, virtual false, abstract: false, final false
inline bool RaycastHitPlane(::UnityEngine::RaycastHit  hit, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<float_t>  enter) ;

/// @brief Method RaycastSphere, addr 0xa4c07d8, size 0x134, virtual false, abstract: false, final false
static inline bool RaycastSphere(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::UnityEngine::Vector3  sphereCenter, float_t  radius, ::by_ref<float_t>  distance) ;

/// @brief Method Rebound, addr 0xa4beca0, size 0x27c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 Rebound(::UnityEngine::Vector3  delta, int32_t  bounces) ;

/// @brief Method SetPosition, addr 0xa4be9c0, size 0x5c, virtual false, abstract: false, final false
inline void SetPosition(::UnityEngine::Vector3  position) ;

/// @brief Method SetRotation, addr 0xa4be95c, size 0x64, virtual false, abstract: false, final false
inline void SetRotation(::UnityEngine::Quaternion  rotation) ;

/// @brief Method SlideDelta, addr 0xa4c090c, size 0x464, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 SlideDelta(::UnityEngine::Vector3  delta, ::UnityEngine::Vector3  originalFlatDelta, ::UnityEngine::RaycastHit  hit) ;

/// @brief Method Start, addr 0xa4bdc94, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TryGround, addr 0xa4be2f8, size 0x18c, virtual false, abstract: false, final false
inline bool TryGround(float_t  extraDistance) ;

/// @brief Method TrySetHeight, addr 0xa4bdefc, size 0x1ac, virtual false, abstract: false, final false
inline bool TrySetHeight(float_t  desiredHeight) ;

/// @brief Method UpdateAnchorPoints, addr 0xa4bdcd0, size 0x22c, virtual false, abstract: false, final false
inline void UpdateAnchorPoints() ;

/// @brief Method UpdateGrounded, addr 0xa4bef1c, size 0x170, virtual false, abstract: false, final false
inline void UpdateGrounded(bool  forceGrounded) ;

/// [CompilerGenerated]
/// @brief Method <Rebound>g__ReboundRecursive|42_0, addr 0xa4bf08c, size 0x5dc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _Rebound_g__ReboundRecursive_42_0(::UnityEngine::Vector3  capsuleBase, ::UnityEngine::Vector3  capsuleTop, float_t  radius, ::UnityEngine::Vector3  delta, ::UnityEngine::Vector3  originalFlatDelta, int32_t  bounceStep) ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get__capsule() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get__capsule() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__feetAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__feetAnchor() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get__groundHit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get__groundHit() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__headAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__headAnchor() ;

constexpr bool const& __cordl_internal_get__isGrounded() const;

constexpr bool& __cordl_internal_get__isGrounded() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__layerMask() ;

constexpr int32_t const& __cordl_internal_get__maxReboundSteps() const;

constexpr int32_t& __cordl_internal_get__maxReboundSteps() ;

constexpr float_t const& __cordl_internal_get__maxSlopeAngle() const;

constexpr float_t& __cordl_internal_get__maxSlopeAngle() ;

constexpr float_t const& __cordl_internal_get__maxStep() const;

constexpr float_t& __cordl_internal_get__maxStep() ;

constexpr float_t const& __cordl_internal_get__skinWidth() const;

constexpr float_t& __cordl_internal_get__skinWidth() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__capsule(::UnityW<::UnityEngine::CapsuleCollider>  value) ;

constexpr void __cordl_internal_set__feetAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__groundHit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set__headAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__isGrounded(bool  value) ;

constexpr void __cordl_internal_set__layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__maxReboundSteps(int32_t  value) ;

constexpr void __cordl_internal_set__maxSlopeAngle(float_t  value) ;

constexpr void __cordl_internal_set__maxStep(float_t  value) ;

constexpr void __cordl_internal_set__skinWidth(float_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4c0d90, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Height, addr 0xa4bdc18, size 0x18, virtual false, abstract: false, final false
inline float_t get_Height() ;

/// @brief Method get_IsGrounded, addr 0xa4bdc10, size 0x8, virtual false, abstract: false, final false
inline bool get_IsGrounded() ;

/// @brief Method get_LayerMask, addr 0xa4bdbd0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_LayerMask() ;

/// @brief Method get_MaxReboundSteps, addr 0xa4bdc00, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxReboundSteps() ;

/// @brief Method get_MaxSlopeAngle, addr 0xa4bdbe0, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxSlopeAngle() ;

/// @brief Method get_MaxStep, addr 0xa4bdbf0, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxStep() ;

/// @brief Method get_Pose, addr 0xa4bdc48, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_Pose() ;

/// @brief Method get_Radius, addr 0xa4bdc30, size 0x18, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// @brief Method get_SkinWidth, addr 0xa4bdbc0, size 0x8, virtual false, abstract: false, final false
inline float_t get_SkinWidth() ;

/// @brief Method set_LayerMask, addr 0xa4bdbd8, size 0x8, virtual false, abstract: false, final false
inline void set_LayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_MaxReboundSteps, addr 0xa4bdc08, size 0x8, virtual false, abstract: false, final false
inline void set_MaxReboundSteps(int32_t  value) ;

/// @brief Method set_MaxSlopeAngle, addr 0xa4bdbe8, size 0x8, virtual false, abstract: false, final false
inline void set_MaxSlopeAngle(float_t  value) ;

/// @brief Method set_MaxStep, addr 0xa4bdbf8, size 0x8, virtual false, abstract: false, final false
inline void set_MaxStep(float_t  value) ;

/// @brief Method set_SkinWidth, addr 0xa4bdbc8, size 0x8, virtual false, abstract: false, final false
inline void set_SkinWidth(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CharacterController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CharacterController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CharacterController(CharacterController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharacterController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharacterController(CharacterController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16245};

/// @brief Field _cornerHitEpsilon offset 0xffffffff size 0x4
static constexpr float_t  _cornerHitEpsilon{static_cast<float_t>(0.001f)};

/// [Header("Character")]
/// [SerializeField]
/// [Tooltip("Capsule collider that represents the character and will be moved by the locomotor.")]
/// @brief Field _capsule, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider>  ____capsule;

/// [SerializeField]
/// [Min(0)]
/// [Tooltip("Extra offset added to the radius of the capsule for soft collisions.")]
/// @brief Field _skinWidth, offset: 0x28, size: 0x4, def value: None
 float_t  ____skinWidth;

/// [SerializeField]
/// [Tooltip("LayerMask check for collisions when moving.")]
/// @brief Field _layerMask, offset: 0x2c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____layerMask;

/// [SerializeField]
/// [Range(0, 90)]
/// [Tooltip("Max climbable slope angle in degrees.")]
/// @brief Field _maxSlopeAngle, offset: 0x30, size: 0x4, def value: None
 float_t  ____maxSlopeAngle;

/// [SerializeField]
/// [Min(0)]
/// [Tooltip("Max climbable height for steps.")]
/// @brief Field _maxStep, offset: 0x34, size: 0x4, def value: None
 float_t  ____maxStep;

/// [SerializeField]
/// [Min(1)]
/// [Tooltip("Max iterations for sliding the delta movement after colliding with an obstacle.")]
/// @brief Field _maxReboundSteps, offset: 0x38, size: 0x4, def value: None
 int32_t  ____maxReboundSteps;

/// [Header("Anchors")]
/// [SerializeField]
/// [Optional]
/// [Tooltip("Optional. This transform pose will be updated with the pose of the character top.")]
/// @brief Field _headAnchor, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____headAnchor;

/// [SerializeField]
/// [Optional]
/// [Tooltip("Optional. This transform pose will be updated with the pose of the character base.")]
/// @brief Field _feetAnchor, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____feetAnchor;

/// @brief Field _groundHit, offset: 0x50, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ____groundHit;

/// @brief Field _isGrounded, offset: 0x7c, size: 0x1, def value: None
 bool  ____isGrounded;

/// @brief Field _started, offset: 0x7d, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::CharacterController, ____capsule) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CharacterController, ____skinWidth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CharacterController, ____layerMask) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CharacterController, ____maxSlopeAngle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CharacterController, ____maxStep) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CharacterController, ____maxReboundSteps) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CharacterController, ____headAnchor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CharacterController, ____feetAnchor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CharacterController, ____groundHit) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CharacterController, ____isGrounded) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CharacterController, ____started) == 0x7d, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::CharacterController) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
