#pragma once
// IWYU pragma private; include "GorillaLocomotion/GTPlayerTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Gravity/zzzz__MonkeGravityController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GTPlayerTransform)
namespace GorillaLocomotion {
class GTPlayer;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct ForceMode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaLocomotion {
class GTPlayerTransform;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::GTPlayerTransform*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::GTPlayerTransform*, "GorillaLocomotion", "GTPlayerTransform");
// Dependencies GorillaTag.Gravity.MonkeGravityController, UnityEngine.Vector3
namespace GorillaLocomotion {
// Is value type: false
// CS Name: GorillaLocomotion.GTPlayerTransform
class CORDL_TYPE GTPlayerTransform : public ::GorillaTag::Gravity::MonkeGravityController {
public:
// Declarations
 __declspec(property(get=get_Scale)) float_t  Scale;

/// @brief Field <Down>k__BackingField, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF__Down_k__BackingField, put=setStaticF__Down_k__BackingField)) ::UnityEngine::Vector3  _Down_k__BackingField;

/// @brief Field <Forward>k__BackingField, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF__Forward_k__BackingField, put=setStaticF__Forward_k__BackingField)) ::UnityEngine::Vector3  _Forward_k__BackingField;

/// @brief Field <GravityForce>k__BackingField, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF__GravityForce_k__BackingField, put=setStaticF__GravityForce_k__BackingField)) ::UnityEngine::Vector3  _GravityForce_k__BackingField;

/// @brief Field <GravityStrength>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GravityStrength_k__BackingField, put=setStaticF__GravityStrength_k__BackingField)) float_t  _GravityStrength_k__BackingField;

/// @brief Field <IgnoreGravityForce>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__IgnoreGravityForce_k__BackingField, put=setStaticF__IgnoreGravityForce_k__BackingField)) bool  _IgnoreGravityForce_k__BackingField;

/// @brief Field <IgnoreGravityRotation>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__IgnoreGravityRotation_k__BackingField, put=setStaticF__IgnoreGravityRotation_k__BackingField)) bool  _IgnoreGravityRotation_k__BackingField;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GorillaLocomotion::GTPlayerTransform>  _Instance_k__BackingField;

/// @brief Field <PhysicsDown>k__BackingField, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF__PhysicsDown_k__BackingField, put=setStaticF__PhysicsDown_k__BackingField)) ::UnityEngine::Vector3  _PhysicsDown_k__BackingField;

/// @brief Field <PhysicsUp>k__BackingField, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF__PhysicsUp_k__BackingField, put=setStaticF__PhysicsUp_k__BackingField)) ::UnityEngine::Vector3  _PhysicsUp_k__BackingField;

/// @brief Field <Right>k__BackingField, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF__Right_k__BackingField, put=setStaticF__Right_k__BackingField)) ::UnityEngine::Vector3  _Right_k__BackingField;

/// @brief Field <Up>k__BackingField, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF__Up_k__BackingField, put=setStaticF__Up_k__BackingField)) ::UnityEngine::Vector3  _Up_k__BackingField;

/// @brief Field k_bodyTransform, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_bodyTransform, put=setStaticF_k_bodyTransform)) ::UnityW<::UnityEngine::Transform>  k_bodyTransform;

/// @brief Field k_playerInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_playerInstance, put=setStaticF_k_playerInstance)) ::UnityW<::GorillaLocomotion::GTPlayer>  k_playerInstance;

/// @brief Field k_rigidBody, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_rigidBody, put=setStaticF_k_rigidBody)) ::UnityW<::UnityEngine::Rigidbody>  k_rigidBody;

/// @brief Field k_rotationOverrideFrameTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_rotationOverrideFrameTime, put=setStaticF_k_rotationOverrideFrameTime)) int32_t  k_rotationOverrideFrameTime;

/// @brief Field k_rotationPosOffsetChange, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_k_rotationPosOffsetChange, put=setStaticF_k_rotationPosOffsetChange)) ::UnityEngine::Vector3  k_rotationPosOffsetChange;

/// @brief Field k_transform, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_transform, put=setStaticF_k_transform)) ::UnityW<::UnityEngine::Transform>  k_transform;

/// @brief Field k_useFastRotation, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_k_useFastRotation, put=setStaticF_k_useFastRotation)) bool  k_useFastRotation;

/// @brief Field m_gtPlayerBodyTransform, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_gtPlayerBodyTransform, put=__cordl_internal_set_m_gtPlayerBodyTransform)) ::UnityW<::UnityEngine::Transform>  m_gtPlayerBodyTransform;

/// @brief Field m_gtPlayerInstance, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_gtPlayerInstance, put=__cordl_internal_set_m_gtPlayerInstance)) ::UnityW<::GorillaLocomotion::GTPlayer>  m_gtPlayerInstance;

/// @brief Field m_smallRotationAngleThreshold, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_smallRotationAngleThreshold, put=__cordl_internal_set_m_smallRotationAngleThreshold)) float_t  m_smallRotationAngleThreshold;

/// @brief Field m_smallRotationSpeed, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_smallRotationSpeed, put=__cordl_internal_set_m_smallRotationSpeed)) float_t  m_smallRotationSpeed;

/// @brief Method ApplyGravityForce, addr 0x5cdd5a0, size 0x288, virtual true, abstract: false, final false
inline void ApplyGravityForce(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  force, ::UnityEngine::ForceMode  forceType) ;

/// @brief Method ApplyGravityUpRotation, addr 0x5cdd0a4, size 0x4fc, virtual true, abstract: false, final false
inline void ApplyGravityUpRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  upDir, float_t  speed) ;

/// @brief Method ApplyRotationOverride, addr 0x5cdc5a4, size 0x70, virtual false, abstract: false, final false
static inline void ApplyRotationOverride(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  rotation, int32_t  frameTime) ;

/// @brief Method Awake, addr 0x5cdcc78, size 0x42c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CallBack, addr 0x5cdd920, size 0x2e4, virtual true, abstract: false, final false
inline void CallBack() ;

/// @brief Method GetRotatedDifference, addr 0x5cdc540, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetRotatedDifference(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  pivotPoint, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  worldPoint, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method GetWorldPoint, addr 0x5cdd828, size 0x64, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetWorldPoint() ;

static inline ::GorillaLocomotion::GTPlayerTransform* New_ctor() ;

/// @brief Method ResetRotationPositionOffset, addr 0x5cdc614, size 0x9c, virtual false, abstract: false, final false
static inline void ResetRotationPositionOffset() ;

/// @brief Method RotateBy, addr 0x5cdc3ac, size 0x108, virtual false, abstract: false, final false
static inline void RotateBy(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method RotateFromToDirection, addr 0x5cdb954, size 0x14c, virtual false, abstract: false, final false
static inline void RotateFromToDirection(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentDir, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetDir) ;

/// @brief Method RotateToUp, addr 0x5cdb7bc, size 0x198, virtual false, abstract: false, final false
static inline void RotateToUp(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetUp) ;

/// @brief Method SetRotation, addr 0x5cdbaa0, size 0x90c, virtual false, abstract: false, final false
static inline void SetRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  newRotation, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  currentRotation) ;

/// @brief Method SetRotation, addr 0x5cdc4b4, size 0x8c, virtual false, abstract: false, final false
static inline void SetRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  targetRotation) ;

/// @brief Method TeleportFromTo, addr 0x5cdc6b0, size 0x204, virtual false, abstract: false, final false
static inline void TeleportFromTo(::UnityEngine::Transform*  sourceNode, ::UnityEngine::Transform*  targetNode, bool  keepVelocity, bool  centre, /* [IsReadOnly] */ ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  offset) ;

/// @brief Method TeleportTo, addr 0x5cdc8b4, size 0x310, virtual false, abstract: false, final false
static inline void TeleportTo(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetPos, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  targetRot, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  currentRot, bool  keepVelocity, bool  centre) ;

/// @brief Method TeleportTo, addr 0x5cdcbc4, size 0xb4, virtual false, abstract: false, final false
static inline void TeleportTo(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetPos, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  targetRot, bool  keepVelocity, bool  centre) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_gtPlayerBodyTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_gtPlayerBodyTransform() ;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& __cordl_internal_get_m_gtPlayerInstance() const;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& __cordl_internal_get_m_gtPlayerInstance() ;

constexpr float_t const& __cordl_internal_get_m_smallRotationAngleThreshold() const;

constexpr float_t& __cordl_internal_get_m_smallRotationAngleThreshold() ;

constexpr float_t const& __cordl_internal_get_m_smallRotationSpeed() const;

constexpr float_t& __cordl_internal_get_m_smallRotationSpeed() ;

constexpr void __cordl_internal_set_m_gtPlayerBodyTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_gtPlayerInstance(::UnityW<::GorillaLocomotion::GTPlayer>  value) ;

constexpr void __cordl_internal_set_m_smallRotationAngleThreshold(float_t  value) ;

constexpr void __cordl_internal_set_m_smallRotationSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x5cddc04, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Vector3 getStaticF__Down_k__BackingField() ;

static inline ::UnityEngine::Vector3 getStaticF__Forward_k__BackingField() ;

static inline ::UnityEngine::Vector3 getStaticF__GravityForce_k__BackingField() ;

static inline float_t getStaticF__GravityStrength_k__BackingField() ;

static inline bool getStaticF__IgnoreGravityForce_k__BackingField() ;

static inline bool getStaticF__IgnoreGravityRotation_k__BackingField() ;

static inline ::UnityW<::GorillaLocomotion::GTPlayerTransform> getStaticF__Instance_k__BackingField() ;

static inline ::UnityEngine::Vector3 getStaticF__PhysicsDown_k__BackingField() ;

static inline ::UnityEngine::Vector3 getStaticF__PhysicsUp_k__BackingField() ;

static inline ::UnityEngine::Vector3 getStaticF__Right_k__BackingField() ;

static inline ::UnityEngine::Vector3 getStaticF__Up_k__BackingField() ;

static inline ::UnityW<::UnityEngine::Transform> getStaticF_k_bodyTransform() ;

static inline ::UnityW<::GorillaLocomotion::GTPlayer> getStaticF_k_playerInstance() ;

static inline ::UnityW<::UnityEngine::Rigidbody> getStaticF_k_rigidBody() ;

static inline int32_t getStaticF_k_rotationOverrideFrameTime() ;

static inline ::UnityEngine::Vector3 getStaticF_k_rotationPosOffsetChange() ;

static inline ::UnityW<::UnityEngine::Transform> getStaticF_k_transform() ;

static inline bool getStaticF_k_useFastRotation() ;

/// @brief Method get_BodyRotation, addr 0x5cdb4d4, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion get_BodyRotation() ;

/// [CompilerGenerated]
/// @brief Method get_Down, addr 0x5cdb184, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_Down() ;

/// [CompilerGenerated]
/// @brief Method get_Forward, addr 0x5cdb32c, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_Forward() ;

/// [CompilerGenerated]
/// @brief Method get_GravityForce, addr 0x5cdaf08, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_GravityForce() ;

/// [CompilerGenerated]
/// @brief Method get_GravityStrength, addr 0x5cdae4c, size 0x58, virtual false, abstract: false, final false
static inline float_t get_GravityStrength() ;

/// [CompilerGenerated]
/// @brief Method get_IgnoreGravityForce, addr 0x5cdb5f0, size 0x58, virtual false, abstract: false, final false
static inline bool get_IgnoreGravityForce() ;

/// [CompilerGenerated]
/// @brief Method get_IgnoreGravityRotation, addr 0x5cdb538, size 0x58, virtual false, abstract: false, final false
static inline bool get_IgnoreGravityRotation() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x5cdb704, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaLocomotion::GTPlayerTransform> get_Instance() ;

/// [CompilerGenerated]
/// @brief Method get_PhysicsDown, addr 0x5cdb258, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_PhysicsDown() ;

/// [CompilerGenerated]
/// @brief Method get_PhysicsUp, addr 0x5cdb0b0, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_PhysicsUp() ;

/// [CompilerGenerated]
/// @brief Method get_Right, addr 0x5cdb400, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_Right() ;

/// @brief Method get_RotationPosOffsetChange, addr 0x5cdb6a8, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_RotationPosOffsetChange() ;

/// @brief Method get_Scale, addr 0x5cdd88c, size 0x94, virtual true, abstract: false, final false
inline float_t get_Scale() ;

/// [CompilerGenerated]
/// @brief Method get_Up, addr 0x5cdafdc, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_Up() ;

static inline void setStaticF__Down_k__BackingField(::UnityEngine::Vector3  value) ;

static inline void setStaticF__Forward_k__BackingField(::UnityEngine::Vector3  value) ;

static inline void setStaticF__GravityForce_k__BackingField(::UnityEngine::Vector3  value) ;

static inline void setStaticF__GravityStrength_k__BackingField(float_t  value) ;

static inline void setStaticF__IgnoreGravityForce_k__BackingField(bool  value) ;

static inline void setStaticF__IgnoreGravityRotation_k__BackingField(bool  value) ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GorillaLocomotion::GTPlayerTransform>  value) ;

static inline void setStaticF__PhysicsDown_k__BackingField(::UnityEngine::Vector3  value) ;

static inline void setStaticF__PhysicsUp_k__BackingField(::UnityEngine::Vector3  value) ;

static inline void setStaticF__Right_k__BackingField(::UnityEngine::Vector3  value) ;

static inline void setStaticF__Up_k__BackingField(::UnityEngine::Vector3  value) ;

static inline void setStaticF_k_bodyTransform(::UnityW<::UnityEngine::Transform>  value) ;

static inline void setStaticF_k_playerInstance(::UnityW<::GorillaLocomotion::GTPlayer>  value) ;

static inline void setStaticF_k_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

static inline void setStaticF_k_rotationOverrideFrameTime(int32_t  value) ;

static inline void setStaticF_k_rotationPosOffsetChange(::UnityEngine::Vector3  value) ;

static inline void setStaticF_k_transform(::UnityW<::UnityEngine::Transform>  value) ;

static inline void setStaticF_k_useFastRotation(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Down, addr 0x5cdb1e0, size 0x78, virtual false, abstract: false, final false
static inline void set_Down(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_Forward, addr 0x5cdb388, size 0x78, virtual false, abstract: false, final false
static inline void set_Forward(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_GravityForce, addr 0x5cdaf64, size 0x78, virtual false, abstract: false, final false
static inline void set_GravityForce(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_GravityStrength, addr 0x5cdaea4, size 0x64, virtual false, abstract: false, final false
static inline void set_GravityStrength(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_IgnoreGravityForce, addr 0x5cdb648, size 0x60, virtual false, abstract: false, final false
static inline void set_IgnoreGravityForce(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IgnoreGravityRotation, addr 0x5cdb590, size 0x60, virtual false, abstract: false, final false
static inline void set_IgnoreGravityRotation(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x5cdb75c, size 0x60, virtual false, abstract: false, final false
static inline void set_Instance(::GorillaLocomotion::GTPlayerTransform*  value) ;

/// [CompilerGenerated]
/// @brief Method set_PhysicsDown, addr 0x5cdb2b4, size 0x78, virtual false, abstract: false, final false
static inline void set_PhysicsDown(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_PhysicsUp, addr 0x5cdb10c, size 0x78, virtual false, abstract: false, final false
static inline void set_PhysicsUp(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_Right, addr 0x5cdb45c, size 0x78, virtual false, abstract: false, final false
static inline void set_Right(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_Up, addr 0x5cdb038, size 0x78, virtual false, abstract: false, final false
static inline void set_Up(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTPlayerTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTPlayerTransform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTPlayerTransform(GTPlayerTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTPlayerTransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTPlayerTransform(GTPlayerTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4507};

/// [SerializeField]
/// @brief Field m_gtPlayerBodyTransform, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_gtPlayerBodyTransform;

/// [SerializeField]
/// @brief Field m_gtPlayerInstance, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::GTPlayer>  ___m_gtPlayerInstance;

/// [Header("Slow rotation for small angles")]
/// [Tooltip("If rotating less than this distance (degrees), use the slow speed.")]
/// [SerializeField]
/// @brief Field m_smallRotationAngleThreshold, offset: 0xa0, size: 0x4, def value: None
 float_t  ___m_smallRotationAngleThreshold;

/// [Tooltip("Rotation speed (rad/s) used for rotations less than the small-angle threshold.")]
/// [SerializeField]
/// @brief Field m_smallRotationSpeed, offset: 0xa4, size: 0x4, def value: None
 float_t  ___m_smallRotationSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::GTPlayerTransform, ___m_gtPlayerBodyTransform) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayerTransform, ___m_gtPlayerInstance) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayerTransform, ___m_smallRotationAngleThreshold) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayerTransform, ___m_smallRotationSpeed) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::GTPlayerTransform) == 0xa8, "Size mismatch!");

} // namespace end def GorillaLocomotion
