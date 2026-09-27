#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Gravity/GravityProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GravityProvider)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity {
struct GravityOverride;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity {
class IGravityController;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XROriginMovement;
}
namespace UnityEngine {
class CharacterController;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity {
class GravityProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity", "GravityProvider");
// [AddComponentMenu("XR/Locomotion/Gravity Provider", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.GravityProvider.html")]
// [DefaultExecutionOrder(-207)]
// Dependencies UnityEngine.LayerMask, UnityEngine.PhysicsScene, UnityEngine.QueryTriggerInteraction, UnityEngine.RaycastHit, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.GravityProvider
class CORDL_TYPE GravityProvider : public ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider {
public:
// Declarations
/// @brief Field <transformation>k__BackingField, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformation_k__BackingField, put=__cordl_internal_set__transformation_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  _transformation_k__BackingField;

 __declspec(property(get=get_gravityAccelerationModifier, put=set_gravityAccelerationModifier)) float_t  gravityAccelerationModifier;

 __declspec(property(get=get_gravityControllers)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*  gravityControllers;

 __declspec(property(get=get_isGrounded)) bool  isGrounded;

/// @brief Field m_AttemptedGetCharacterController, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AttemptedGetCharacterController, put=__cordl_internal_set_m_AttemptedGetCharacterController)) bool  m_AttemptedGetCharacterController;

/// @brief Field m_CharacterController, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CharacterController, put=__cordl_internal_set_m_CharacterController)) ::UnityW<::UnityEngine::CharacterController>  m_CharacterController;

/// @brief Field m_CurrentFallVelocity, offset 0xf0, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_CurrentFallVelocity, put=__cordl_internal_set_m_CurrentFallVelocity)) ::UnityEngine::Vector3  m_CurrentFallVelocity;

/// @brief Field m_GravityAccelerationModifier, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_GravityAccelerationModifier, put=__cordl_internal_set_m_GravityAccelerationModifier)) float_t  m_GravityAccelerationModifier;

/// @brief Field m_GravityControllers, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GravityControllers, put=__cordl_internal_set_m_GravityControllers)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*  m_GravityControllers;

/// @brief Field m_GravityForcedOffProviders, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GravityForcedOffProviders, put=__cordl_internal_set_m_GravityForcedOffProviders)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*  m_GravityForcedOffProviders;

/// @brief Field m_GravityForcedOnProviders, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GravityForcedOnProviders, put=__cordl_internal_set_m_GravityForcedOnProviders)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*  m_GravityForcedOnProviders;

/// @brief Field m_GroundedAllocHits, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GroundedAllocHits, put=__cordl_internal_set_m_GroundedAllocHits)) ::ArrayW<::UnityEngine::RaycastHit>  m_GroundedAllocHits;

/// @brief Field m_HeadTransform, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HeadTransform, put=__cordl_internal_set_m_HeadTransform)) ::UnityW<::UnityEngine::Transform>  m_HeadTransform;

/// @brief Field m_IsGrounded, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsGrounded, put=__cordl_internal_set_m_IsGrounded)) bool  m_IsGrounded;

/// @brief Field m_LocalPhysicsScene, offset 0xfc, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocalPhysicsScene, put=__cordl_internal_set_m_LocalPhysicsScene)) ::UnityEngine::PhysicsScene  m_LocalPhysicsScene;

/// @brief Field m_OnGravityLockChanged, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnGravityLockChanged, put=__cordl_internal_set_m_OnGravityLockChanged)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>*  m_OnGravityLockChanged;

/// @brief Field m_OnGroundedChanged, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnGroundedChanged, put=__cordl_internal_set_m_OnGroundedChanged)) ::UnityEngine::Events::UnityEvent_1<bool>*  m_OnGroundedChanged;

/// @brief Field m_SphereCastDistanceBuffer, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SphereCastDistanceBuffer, put=__cordl_internal_set_m_SphereCastDistanceBuffer)) float_t  m_SphereCastDistanceBuffer;

/// @brief Field m_SphereCastLayerMask, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SphereCastLayerMask, put=__cordl_internal_set_m_SphereCastLayerMask)) ::UnityEngine::LayerMask  m_SphereCastLayerMask;

/// @brief Field m_SphereCastRadius, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SphereCastRadius, put=__cordl_internal_set_m_SphereCastRadius)) float_t  m_SphereCastRadius;

/// @brief Field m_SphereCastTriggerInteraction, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SphereCastTriggerInteraction, put=__cordl_internal_set_m_SphereCastTriggerInteraction)) ::UnityEngine::QueryTriggerInteraction  m_SphereCastTriggerInteraction;

/// @brief Field m_TerminalVelocity, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TerminalVelocity, put=__cordl_internal_set_m_TerminalVelocity)) float_t  m_TerminalVelocity;

/// @brief Field m_UpdateCharacterControllerCenterEachFrame, offset 0xa4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UpdateCharacterControllerCenterEachFrame, put=__cordl_internal_set_m_UpdateCharacterControllerCenterEachFrame)) bool  m_UpdateCharacterControllerCenterEachFrame;

/// @brief Field m_UseGravity, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseGravity, put=__cordl_internal_set_m_UseGravity)) bool  m_UseGravity;

/// @brief Field m_UseLocalSpaceGravity, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseLocalSpaceGravity, put=__cordl_internal_set_m_UseLocalSpaceGravity)) bool  m_UseLocalSpaceGravity;

 __declspec(property(get=get_onGravityLockChanged, put=set_onGravityLockChanged)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>*  onGravityLockChanged;

 __declspec(property(get=get_onGroundedChanged)) ::UnityEngine::Events::UnityEvent_1<bool>*  onGroundedChanged;

 __declspec(property(get=get_sphereCastDistanceBuffer, put=set_sphereCastDistanceBuffer)) float_t  sphereCastDistanceBuffer;

 __declspec(property(get=get_sphereCastLayerMask, put=set_sphereCastLayerMask)) ::UnityEngine::LayerMask  sphereCastLayerMask;

 __declspec(property(get=get_sphereCastRadius, put=set_sphereCastRadius)) float_t  sphereCastRadius;

 __declspec(property(get=get_sphereCastTriggerInteraction, put=set_sphereCastTriggerInteraction)) ::UnityEngine::QueryTriggerInteraction  sphereCastTriggerInteraction;

 __declspec(property(get=get_terminalVelocity, put=set_terminalVelocity)) float_t  terminalVelocity;

 __declspec(property(get=get_transformation, put=set_transformation)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  transformation;

 __declspec(property(get=get_updateCharacterControllerCenterEachFrame, put=set_updateCharacterControllerCenterEachFrame)) bool  updateCharacterControllerCenterEachFrame;

 __declspec(property(get=get_useGravity, put=set_useGravity)) bool  useGravity;

 __declspec(property(get=get_useLocalSpaceGravity, put=set_useLocalSpaceGravity)) bool  useLocalSpaceGravity;

/// @brief Method Awake, addr 0xb453a9c, size 0xd8, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanProcessGravity, addr 0xb454444, size 0x268, virtual false, abstract: false, final false
inline bool CanProcessGravity() ;

/// @brief Method CheckGrounded, addr 0xb453e80, size 0x294, virtual false, abstract: false, final false
inline void CheckGrounded() ;

/// @brief Method FindCharacterController, addr 0xb45489c, size 0x170, virtual false, abstract: false, final false
inline void FindCharacterController() ;

/// @brief Method FindHeadTransform, addr 0xb453b78, size 0x158, virtual false, abstract: false, final false
inline void FindHeadTransform() ;

/// @brief Method GetBodyHeadPosition, addr 0xb4546ac, size 0x1b8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetBodyHeadPosition() ;

/// @brief Method GetCurrentGravity, addr 0xb4542fc, size 0x148, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetCurrentGravity() ;

/// @brief Method GetCurrentUp, addr 0xb453540, size 0x168, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetCurrentUp() ;

/// @brief Method GetLocalHeadHeight, addr 0xb454864, size 0x38, virtual false, abstract: false, final false
inline float_t GetLocalHeadHeight() ;

/// @brief Method IsGravityBlocked, addr 0xb4542cc, size 0x30, virtual false, abstract: false, final false
inline bool IsGravityBlocked() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0xb454a0c, size 0x1f0, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method ResetFallForce, addr 0xb4533d8, size 0x58, virtual false, abstract: false, final false
inline void ResetFallForce() ;

/// @brief Method Start, addr 0xb453b74, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TryLockGravity, addr 0xb45143c, size 0x3d8, virtual false, abstract: false, final false
inline bool TryLockGravity(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*  provider, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride) ;

/// @brief Method TryProcessGravity, addr 0xb454114, size 0x1b8, virtual true, abstract: false, final false
inline bool TryProcessGravity(float_t  time) ;

/// @brief Method UnlockGravity, addr 0xb451814, size 0x6c, virtual false, abstract: false, final false
inline void UnlockGravity(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*  provider) ;

/// @brief Method Update, addr 0xb453cd0, size 0x1b0, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* const& __cordl_internal_get__transformation_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*& __cordl_internal_get__transformation_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_AttemptedGetCharacterController() const;

constexpr bool& __cordl_internal_get_m_AttemptedGetCharacterController() ;

constexpr ::UnityW<::UnityEngine::CharacterController> const& __cordl_internal_get_m_CharacterController() const;

constexpr ::UnityW<::UnityEngine::CharacterController>& __cordl_internal_get_m_CharacterController() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CurrentFallVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CurrentFallVelocity() ;

constexpr float_t const& __cordl_internal_get_m_GravityAccelerationModifier() const;

constexpr float_t& __cordl_internal_get_m_GravityAccelerationModifier() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>* const& __cordl_internal_get_m_GravityControllers() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*& __cordl_internal_get_m_GravityControllers() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>* const& __cordl_internal_get_m_GravityForcedOffProviders() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*& __cordl_internal_get_m_GravityForcedOffProviders() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>* const& __cordl_internal_get_m_GravityForcedOnProviders() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*& __cordl_internal_get_m_GravityForcedOnProviders() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_m_GroundedAllocHits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_m_GroundedAllocHits() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_HeadTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_HeadTransform() ;

constexpr bool const& __cordl_internal_get_m_IsGrounded() const;

constexpr bool& __cordl_internal_get_m_IsGrounded() ;

constexpr ::UnityEngine::PhysicsScene const& __cordl_internal_get_m_LocalPhysicsScene() const;

constexpr ::UnityEngine::PhysicsScene& __cordl_internal_get_m_LocalPhysicsScene() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>* const& __cordl_internal_get_m_OnGravityLockChanged() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>*& __cordl_internal_get_m_OnGravityLockChanged() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_m_OnGroundedChanged() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_m_OnGroundedChanged() ;

constexpr float_t const& __cordl_internal_get_m_SphereCastDistanceBuffer() const;

constexpr float_t& __cordl_internal_get_m_SphereCastDistanceBuffer() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_SphereCastLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_SphereCastLayerMask() ;

constexpr float_t const& __cordl_internal_get_m_SphereCastRadius() const;

constexpr float_t& __cordl_internal_get_m_SphereCastRadius() ;

constexpr ::UnityEngine::QueryTriggerInteraction const& __cordl_internal_get_m_SphereCastTriggerInteraction() const;

constexpr ::UnityEngine::QueryTriggerInteraction& __cordl_internal_get_m_SphereCastTriggerInteraction() ;

constexpr float_t const& __cordl_internal_get_m_TerminalVelocity() const;

constexpr float_t& __cordl_internal_get_m_TerminalVelocity() ;

constexpr bool const& __cordl_internal_get_m_UpdateCharacterControllerCenterEachFrame() const;

constexpr bool& __cordl_internal_get_m_UpdateCharacterControllerCenterEachFrame() ;

constexpr bool const& __cordl_internal_get_m_UseGravity() const;

constexpr bool& __cordl_internal_get_m_UseGravity() ;

constexpr bool const& __cordl_internal_get_m_UseLocalSpaceGravity() const;

constexpr bool& __cordl_internal_get_m_UseLocalSpaceGravity() ;

constexpr void __cordl_internal_set__transformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  value) ;

constexpr void __cordl_internal_set_m_AttemptedGetCharacterController(bool  value) ;

constexpr void __cordl_internal_set_m_CharacterController(::UnityW<::UnityEngine::CharacterController>  value) ;

constexpr void __cordl_internal_set_m_CurrentFallVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_GravityAccelerationModifier(float_t  value) ;

constexpr void __cordl_internal_set_m_GravityControllers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*  value) ;

constexpr void __cordl_internal_set_m_GravityForcedOffProviders(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*  value) ;

constexpr void __cordl_internal_set_m_GravityForcedOnProviders(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*  value) ;

constexpr void __cordl_internal_set_m_GroundedAllocHits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_m_HeadTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_IsGrounded(bool  value) ;

constexpr void __cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene  value) ;

constexpr void __cordl_internal_set_m_OnGravityLockChanged(::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>*  value) ;

constexpr void __cordl_internal_set_m_OnGroundedChanged(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set_m_SphereCastDistanceBuffer(float_t  value) ;

constexpr void __cordl_internal_set_m_SphereCastLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_m_SphereCastRadius(float_t  value) ;

constexpr void __cordl_internal_set_m_SphereCastTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value) ;

constexpr void __cordl_internal_set_m_TerminalVelocity(float_t  value) ;

constexpr void __cordl_internal_set_m_UpdateCharacterControllerCenterEachFrame(bool  value) ;

constexpr void __cordl_internal_set_m_UseGravity(bool  value) ;

constexpr void __cordl_internal_set_m_UseLocalSpaceGravity(bool  value) ;

/// @brief Method .ctor, addr 0xb454bfc, size 0x24c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_gravityAccelerationModifier, addr 0xb453a04, size 0x8, virtual false, abstract: false, final false
inline float_t get_gravityAccelerationModifier() ;

/// @brief Method get_gravityControllers, addr 0xb453a94, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>* get_gravityControllers() ;

/// @brief Method get_isGrounded, addr 0xb453a7c, size 0x8, virtual false, abstract: false, final false
inline bool get_isGrounded() ;

/// @brief Method get_onGravityLockChanged, addr 0xb453a64, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>* get_onGravityLockChanged() ;

/// @brief Method get_onGroundedChanged, addr 0xb453a74, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<bool>* get_onGroundedChanged() ;

/// @brief Method get_sphereCastDistanceBuffer, addr 0xb453a34, size 0x8, virtual false, abstract: false, final false
inline float_t get_sphereCastDistanceBuffer() ;

/// @brief Method get_sphereCastLayerMask, addr 0xb453a44, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_sphereCastLayerMask() ;

/// @brief Method get_sphereCastRadius, addr 0xb453a24, size 0x8, virtual false, abstract: false, final false
inline float_t get_sphereCastRadius() ;

/// @brief Method get_sphereCastTriggerInteraction, addr 0xb453a54, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::QueryTriggerInteraction get_sphereCastTriggerInteraction() ;

/// @brief Method get_terminalVelocity, addr 0xb4539f4, size 0x8, virtual false, abstract: false, final false
inline float_t get_terminalVelocity() ;

/// [CompilerGenerated]
/// @brief Method get_transformation, addr 0xb453a84, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* get_transformation() ;

/// @brief Method get_updateCharacterControllerCenterEachFrame, addr 0xb453a14, size 0x8, virtual false, abstract: false, final false
inline bool get_updateCharacterControllerCenterEachFrame() ;

/// @brief Method get_useGravity, addr 0xb4539d4, size 0x8, virtual false, abstract: false, final false
inline bool get_useGravity() ;

/// @brief Method get_useLocalSpaceGravity, addr 0xb4539e4, size 0x8, virtual false, abstract: false, final false
inline bool get_useLocalSpaceGravity() ;

/// @brief Method set_gravityAccelerationModifier, addr 0xb453a0c, size 0x8, virtual false, abstract: false, final false
inline void set_gravityAccelerationModifier(float_t  value) ;

/// @brief Method set_onGravityLockChanged, addr 0xb453a6c, size 0x8, virtual false, abstract: false, final false
inline void set_onGravityLockChanged(::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>*  value) ;

/// @brief Method set_sphereCastDistanceBuffer, addr 0xb453a3c, size 0x8, virtual false, abstract: false, final false
inline void set_sphereCastDistanceBuffer(float_t  value) ;

/// @brief Method set_sphereCastLayerMask, addr 0xb453a4c, size 0x8, virtual false, abstract: false, final false
inline void set_sphereCastLayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_sphereCastRadius, addr 0xb453a2c, size 0x8, virtual false, abstract: false, final false
inline void set_sphereCastRadius(float_t  value) ;

/// @brief Method set_sphereCastTriggerInteraction, addr 0xb453a5c, size 0x8, virtual false, abstract: false, final false
inline void set_sphereCastTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value) ;

/// @brief Method set_terminalVelocity, addr 0xb4539fc, size 0x8, virtual false, abstract: false, final false
inline void set_terminalVelocity(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_transformation, addr 0xb453a8c, size 0x8, virtual false, abstract: false, final false
inline void set_transformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  value) ;

/// @brief Method set_updateCharacterControllerCenterEachFrame, addr 0xb453a1c, size 0x8, virtual false, abstract: false, final false
inline void set_updateCharacterControllerCenterEachFrame(bool  value) ;

/// @brief Method set_useGravity, addr 0xb4539dc, size 0x8, virtual false, abstract: false, final false
inline void set_useGravity(bool  value) ;

/// @brief Method set_useLocalSpaceGravity, addr 0xb4539ec, size 0x8, virtual false, abstract: false, final false
inline void set_useLocalSpaceGravity(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GravityProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GravityProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GravityProvider(GravityProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GravityProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GravityProvider(GravityProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11377};

/// [SerializeField]
/// [Tooltip("Apply gravity to the XR Origin.")]
/// @brief Field m_UseGravity, offset: 0x98, size: 0x1, def value: None
 bool  ___m_UseGravity;

/// [SerializeField]
/// [Tooltip("Apply gravity based on the current Up vector of the XR Origin.")]
/// @brief Field m_UseLocalSpaceGravity, offset: 0x99, size: 0x1, def value: None
 bool  ___m_UseLocalSpaceGravity;

/// [SerializeField]
/// [Tooltip("Determines the maximum fall speed based on units per second.")]
/// @brief Field m_TerminalVelocity, offset: 0x9c, size: 0x4, def value: None
 float_t  ___m_TerminalVelocity;

/// [SerializeField]
/// [Tooltip("Determines the speed at which a player reaches max gravity velocity.")]
/// @brief Field m_GravityAccelerationModifier, offset: 0xa0, size: 0x4, def value: None
 float_t  ___m_GravityAccelerationModifier;

/// [SerializeField]
/// [Tooltip("Sets the center of the character controller to match the local x and z positions of the player camera.")]
/// @brief Field m_UpdateCharacterControllerCenterEachFrame, offset: 0xa4, size: 0x1, def value: None
 bool  ___m_UpdateCharacterControllerCenterEachFrame;

/// [SerializeField]
/// [Tooltip("Buffer for the radius of the sphere cast used to check if the player is grounded.")]
/// @brief Field m_SphereCastRadius, offset: 0xa8, size: 0x4, def value: None
 float_t  ___m_SphereCastRadius;

/// [SerializeField]
/// [Tooltip("Buffer for the distance of the sphere cast used to check if the player is grounded.")]
/// @brief Field m_SphereCastDistanceBuffer, offset: 0xac, size: 0x4, def value: None
 float_t  ___m_SphereCastDistanceBuffer;

/// [SerializeField]
/// [Tooltip("The layer mask used for the sphere cast to check if the player is grounded.")]
/// @brief Field m_SphereCastLayerMask, offset: 0xb0, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___m_SphereCastLayerMask;

/// [SerializeField]
/// [Tooltip("Whether trigger colliders are considered when using a sphere cast to determine if grounded. Use Global refers to the Queries Hit Triggers setting in Physics Project Settings.")]
/// @brief Field m_SphereCastTriggerInteraction, offset: 0xb4, size: 0x4, def value: None
 ::UnityEngine::QueryTriggerInteraction  ___m_SphereCastTriggerInteraction;

/// [Tooltip("Event that is called when gravity lock is changed.")]
/// [SerializeField]
/// @brief Field m_OnGravityLockChanged, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>*  ___m_OnGravityLockChanged;

/// [Tooltip("Callback for anytime the grounded state changes.")]
/// [SerializeField]
/// @brief Field m_OnGroundedChanged, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___m_OnGroundedChanged;

/// @brief Field m_IsGrounded, offset: 0xc8, size: 0x1, def value: None
 bool  ___m_IsGrounded;

/// [CompilerGenerated]
/// @brief Field <transformation>k__BackingField, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  ____transformation_k__BackingField;

/// @brief Field m_GravityControllers, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*  ___m_GravityControllers;

/// @brief Field m_HeadTransform, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_HeadTransform;

/// @brief Field m_GroundedAllocHits, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___m_GroundedAllocHits;

/// @brief Field m_CurrentFallVelocity, offset: 0xf0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_CurrentFallVelocity;

/// @brief Field m_LocalPhysicsScene, offset: 0xfc, size: 0x8, def value: None
 ::UnityEngine::PhysicsScene  ___m_LocalPhysicsScene;

/// @brief Field m_CharacterController, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CharacterController>  ___m_CharacterController;

/// @brief Field m_AttemptedGetCharacterController, offset: 0x110, size: 0x1, def value: None
 bool  ___m_AttemptedGetCharacterController;

/// @brief Field m_GravityForcedOnProviders, offset: 0x118, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*  ___m_GravityForcedOnProviders;

/// @brief Field m_GravityForcedOffProviders, offset: 0x120, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*  ___m_GravityForcedOffProviders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_UseGravity) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_UseLocalSpaceGravity) == 0x99, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_TerminalVelocity) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_GravityAccelerationModifier) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_UpdateCharacterControllerCenterEachFrame) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_SphereCastRadius) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_SphereCastDistanceBuffer) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_SphereCastLayerMask) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_SphereCastTriggerInteraction) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_OnGravityLockChanged) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_OnGroundedChanged) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_IsGrounded) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ____transformation_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_GravityControllers) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_HeadTransform) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_GroundedAllocHits) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_CurrentFallVelocity) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_LocalPhysicsScene) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_CharacterController) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_AttemptedGetCharacterController) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_GravityForcedOnProviders) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider, ___m_GravityForcedOffProviders) == 0x120, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider) == 0x128, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity
