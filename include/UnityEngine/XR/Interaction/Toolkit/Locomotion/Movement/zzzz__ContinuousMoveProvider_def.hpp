#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Movement/ContinuousMoveProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ContinuousMoveProvider)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class XRInputValueReader_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity {
struct GravityOverride;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity {
class GravityProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity {
class IGravityController;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
struct LocomotionState;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XROriginMovement;
}
namespace UnityEngine {
class CharacterController;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement {
class ContinuousMoveProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement", "ContinuousMoveProvider");
// [AddComponentMenu("XR/Locomotion/Continuous Move Provider", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider.html")]
// Dependencies UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider
class CORDL_TYPE ContinuousMoveProvider : public ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider {
public:
// Declarations
/// @brief Field <transformation>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformation_k__BackingField, put=__cordl_internal_set__transformation_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  _transformation_k__BackingField;

 __declspec(property(get=get_canProcess)) bool  canProcess;

 __declspec(property(get=get_enableFly, put=set_enableFly)) bool  enableFly;

 __declspec(property(get=get_enableStrafe, put=set_enableStrafe)) bool  enableStrafe;

 __declspec(property(get=get_forwardSource, put=set_forwardSource)) ::UnityW<::UnityEngine::Transform>  forwardSource;

 __declspec(property(get=get_gravityPaused)) bool  gravityPaused;

 __declspec(property(get=get_inAirControlModifier, put=set_inAirControlModifier)) float_t  inAirControlModifier;

 __declspec(property(get=get_leftHandMoveInput, put=set_leftHandMoveInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  leftHandMoveInput;

/// @brief Field m_AttemptedGetCharacterController, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AttemptedGetCharacterController, put=__cordl_internal_set_m_AttemptedGetCharacterController)) bool  m_AttemptedGetCharacterController;

/// @brief Field m_CharacterController, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CharacterController, put=__cordl_internal_set_m_CharacterController)) ::UnityW<::UnityEngine::CharacterController>  m_CharacterController;

/// @brief Field m_EnableFly, offset 0xa1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableFly, put=__cordl_internal_set_m_EnableFly)) bool  m_EnableFly;

/// @brief Field m_EnableStrafe, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableStrafe, put=__cordl_internal_set_m_EnableStrafe)) bool  m_EnableStrafe;

/// @brief Field m_ForwardSource, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ForwardSource, put=__cordl_internal_set_m_ForwardSource)) ::UnityW<::UnityEngine::Transform>  m_ForwardSource;

/// @brief Field m_GravityDrivenVelocity, offset 0xdc, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_GravityDrivenVelocity, put=__cordl_internal_set_m_GravityDrivenVelocity)) ::UnityEngine::Vector3  m_GravityDrivenVelocity;

/// @brief Field m_GravityProvider, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GravityProvider, put=__cordl_internal_set_m_GravityProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>  m_GravityProvider;

/// @brief Field m_InAirControlModifier, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InAirControlModifier, put=__cordl_internal_set_m_InAirControlModifier)) float_t  m_InAirControlModifier;

/// @brief Field m_InAirVelocity, offset 0xe8, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_InAirVelocity, put=__cordl_internal_set_m_InAirVelocity)) ::UnityEngine::Vector3  m_InAirVelocity;

/// @brief Field m_IsMovingXROrigin, offset 0xd9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsMovingXROrigin, put=__cordl_internal_set_m_IsMovingXROrigin)) bool  m_IsMovingXROrigin;

/// @brief Field m_LeftHandMoveInput, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LeftHandMoveInput, put=__cordl_internal_set_m_LeftHandMoveInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_LeftHandMoveInput;

/// @brief Field m_MoveSpeed, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MoveSpeed, put=__cordl_internal_set_m_MoveSpeed)) float_t  m_MoveSpeed;

/// @brief Field m_RightHandMoveInput, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RightHandMoveInput, put=__cordl_internal_set_m_RightHandMoveInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_RightHandMoveInput;

/// @brief Field m_UseGravity, offset 0xf4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseGravity, put=__cordl_internal_set_m_UseGravity)) bool  m_UseGravity;

 __declspec(property(get=get_moveSpeed, put=set_moveSpeed)) float_t  moveSpeed;

 __declspec(property(get=get_rightHandMoveInput, put=set_rightHandMoveInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  rightHandMoveInput;

 __declspec(property(get=get_transformation, put=set_transformation)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  transformation;

/// @brief [Obsolete("Controlling gravity directly in the move provider has been deprecated in XRI 3.1.0, use Gravity Provider instead.")]
 __declspec(property(get=get_useGravity, put=set_useGravity)) bool  useGravity;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*() noexcept;

/// @brief Method Awake, addr 0xb450494, size 0x98, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeDesiredMove, addr 0xb450b0c, size 0x540, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 ComputeDesiredMove(::UnityEngine::Vector2  input) ;

/// @brief Method FindCharacterController, addr 0xb4512c8, size 0x174, virtual false, abstract: false, final false
inline void FindCharacterController() ;

/// [Obsolete("Private migration helper.")]
/// @brief Method MigrateUseGravityToGravityProvider, addr 0xb45052c, size 0x114, virtual false, abstract: false, final false
inline void MigrateUseGravityToGravityProvider() ;

/// @brief Method MoveRig, addr 0xb45104c, size 0x27c, virtual true, abstract: false, final false
inline void MoveRig(::UnityEngine::Vector3  translationInWorldSpace) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0xb4506d0, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb450640, size 0x90, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGravityLockChanged, addr 0xb4518a4, size 0x4, virtual true, abstract: false, final false
inline void OnGravityLockChanged(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride) ;

/// @brief Method OnGroundedChanged, addr 0xb4518a0, size 0x4, virtual true, abstract: false, final false
inline void OnGroundedChanged(bool  isGrounded) ;

/// @brief Method OnLocomotionEnding, addr 0xb45088c, size 0x8, virtual true, abstract: false, final false
inline void OnLocomotionEnding() ;

/// @brief Method OnLocomotionStarting, addr 0xb450884, size 0x8, virtual true, abstract: false, final false
inline void OnLocomotionStarting() ;

/// @brief Method OnLocomotionStateChanging, addr 0xb450700, size 0x64, virtual true, abstract: false, final false
inline void OnLocomotionStateChanging(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  state) ;

/// @brief Method ReadInput, addr 0xb450a90, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 ReadInput() ;

/// @brief Method RemoveGravityLock, addr 0xb450800, size 0x84, virtual true, abstract: false, final true
inline void RemoveGravityLock() ;

/// @brief Method TryLockGravity, addr 0xb450764, size 0x9c, virtual true, abstract: false, final true
inline bool TryLockGravity(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController.OnGravityLockChanged, addr 0xb451890, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGravityLockChanged(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController.OnGroundedChanged, addr 0xb451880, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGroundedChanged(bool  isGrounded) ;

/// @brief Method Update, addr 0xb450894, size 0x1fc, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* const& __cordl_internal_get__transformation_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*& __cordl_internal_get__transformation_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_AttemptedGetCharacterController() const;

constexpr bool& __cordl_internal_get_m_AttemptedGetCharacterController() ;

constexpr ::UnityW<::UnityEngine::CharacterController> const& __cordl_internal_get_m_CharacterController() const;

constexpr ::UnityW<::UnityEngine::CharacterController>& __cordl_internal_get_m_CharacterController() ;

constexpr bool const& __cordl_internal_get_m_EnableFly() const;

constexpr bool& __cordl_internal_get_m_EnableFly() ;

constexpr bool const& __cordl_internal_get_m_EnableStrafe() const;

constexpr bool& __cordl_internal_get_m_EnableStrafe() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_ForwardSource() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_ForwardSource() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_GravityDrivenVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_GravityDrivenVelocity() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider> const& __cordl_internal_get_m_GravityProvider() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>& __cordl_internal_get_m_GravityProvider() ;

constexpr float_t const& __cordl_internal_get_m_InAirControlModifier() const;

constexpr float_t& __cordl_internal_get_m_InAirControlModifier() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InAirVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InAirVelocity() ;

constexpr bool const& __cordl_internal_get_m_IsMovingXROrigin() const;

constexpr bool& __cordl_internal_get_m_IsMovingXROrigin() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_LeftHandMoveInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_LeftHandMoveInput() ;

constexpr float_t const& __cordl_internal_get_m_MoveSpeed() const;

constexpr float_t& __cordl_internal_get_m_MoveSpeed() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_RightHandMoveInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_RightHandMoveInput() ;

constexpr bool const& __cordl_internal_get_m_UseGravity() const;

constexpr bool& __cordl_internal_get_m_UseGravity() ;

constexpr void __cordl_internal_set__transformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  value) ;

constexpr void __cordl_internal_set_m_AttemptedGetCharacterController(bool  value) ;

constexpr void __cordl_internal_set_m_CharacterController(::UnityW<::UnityEngine::CharacterController>  value) ;

constexpr void __cordl_internal_set_m_EnableFly(bool  value) ;

constexpr void __cordl_internal_set_m_EnableStrafe(bool  value) ;

constexpr void __cordl_internal_set_m_ForwardSource(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_GravityDrivenVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_GravityProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>  value) ;

constexpr void __cordl_internal_set_m_InAirControlModifier(float_t  value) ;

constexpr void __cordl_internal_set_m_InAirVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_IsMovingXROrigin(bool  value) ;

constexpr void __cordl_internal_set_m_LeftHandMoveInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_MoveSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_RightHandMoveInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_UseGravity(bool  value) ;

/// @brief Method .ctor, addr 0xb45196c, size 0x16c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_canProcess, addr 0xb450484, size 0x8, virtual true, abstract: false, final true
inline bool get_canProcess() ;

/// @brief Method get_enableFly, addr 0xb45038c, size 0x8, virtual false, abstract: false, final false
inline bool get_enableFly() ;

/// @brief Method get_enableStrafe, addr 0xb45037c, size 0x8, virtual false, abstract: false, final false
inline bool get_enableStrafe() ;

/// @brief Method get_forwardSource, addr 0xb45039c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_forwardSource() ;

/// @brief Method get_gravityPaused, addr 0xb45048c, size 0x8, virtual true, abstract: false, final true
inline bool get_gravityPaused() ;

/// @brief Method get_inAirControlModifier, addr 0xb45036c, size 0x8, virtual false, abstract: false, final false
inline float_t get_inAirControlModifier() ;

/// @brief Method get_leftHandMoveInput, addr 0xb4503bc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_leftHandMoveInput() ;

/// @brief Method get_moveSpeed, addr 0xb45035c, size 0x8, virtual false, abstract: false, final false
inline float_t get_moveSpeed() ;

/// @brief Method get_rightHandMoveInput, addr 0xb450420, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_rightHandMoveInput() ;

/// [CompilerGenerated]
/// @brief Method get_transformation, addr 0xb4503ac, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* get_transformation() ;

/// @brief Method get_useGravity, addr 0xb4518a8, size 0x8, virtual false, abstract: false, final false
inline bool get_useGravity() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController* i___UnityEngine__XR__Interaction__Toolkit__Locomotion__Gravity__IGravityController() noexcept;

/// @brief Method set_enableFly, addr 0xb450394, size 0x8, virtual false, abstract: false, final false
inline void set_enableFly(bool  value) ;

/// @brief Method set_enableStrafe, addr 0xb450384, size 0x8, virtual false, abstract: false, final false
inline void set_enableStrafe(bool  value) ;

/// @brief Method set_forwardSource, addr 0xb4503a4, size 0x8, virtual false, abstract: false, final false
inline void set_forwardSource(::UnityEngine::Transform*  value) ;

/// @brief Method set_inAirControlModifier, addr 0xb450374, size 0x8, virtual false, abstract: false, final false
inline void set_inAirControlModifier(float_t  value) ;

/// @brief Method set_leftHandMoveInput, addr 0xb4503c4, size 0x5c, virtual false, abstract: false, final false
inline void set_leftHandMoveInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_moveSpeed, addr 0xb450364, size 0x8, virtual false, abstract: false, final false
inline void set_moveSpeed(float_t  value) ;

/// @brief Method set_rightHandMoveInput, addr 0xb450428, size 0x5c, virtual false, abstract: false, final false
inline void set_rightHandMoveInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_transformation, addr 0xb4503b4, size 0x8, virtual false, abstract: false, final false
inline void set_transformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  value) ;

/// @brief Method set_useGravity, addr 0xb4518b0, size 0xbc, virtual false, abstract: false, final false
inline void set_useGravity(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContinuousMoveProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContinuousMoveProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuousMoveProvider(ContinuousMoveProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuousMoveProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuousMoveProvider(ContinuousMoveProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11372};

/// [SerializeField]
/// [Tooltip("The speed, in units per second, to move forward.")]
/// @brief Field m_MoveSpeed, offset: 0x98, size: 0x4, def value: None
 float_t  ___m_MoveSpeed;

/// [SerializeField]
/// [Tooltip("Determines how much control the player has while in the air (0 = no control, 1 = full control).")]
/// @brief Field m_InAirControlModifier, offset: 0x9c, size: 0x4, def value: None
 float_t  ___m_InAirControlModifier;

/// [SerializeField]
/// [Tooltip("Controls whether to enable strafing (sideways movement).")]
/// @brief Field m_EnableStrafe, offset: 0xa0, size: 0x1, def value: None
 bool  ___m_EnableStrafe;

/// [SerializeField]
/// [Tooltip("Controls whether to enable flying (unconstrained movement). This overrides the use of gravity.")]
/// @brief Field m_EnableFly, offset: 0xa1, size: 0x1, def value: None
 bool  ___m_EnableFly;

/// [SerializeField]
/// [Tooltip("The source Transform to define the forward direction.")]
/// @brief Field m_ForwardSource, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_ForwardSource;

/// [CompilerGenerated]
/// @brief Field <transformation>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  ____transformation_k__BackingField;

/// [SerializeField]
/// [Tooltip("Reads input data from the left hand controller. Input Action must be a Value action type (Vector 2).")]
/// @brief Field m_LeftHandMoveInput, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_LeftHandMoveInput;

/// [SerializeField]
/// [Tooltip("Reads input data from the right hand controller. Input Action must be a Value action type (Vector 2).")]
/// @brief Field m_RightHandMoveInput, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_RightHandMoveInput;

/// @brief Field m_GravityProvider, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>  ___m_GravityProvider;

/// @brief Field m_CharacterController, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CharacterController>  ___m_CharacterController;

/// @brief Field m_AttemptedGetCharacterController, offset: 0xd8, size: 0x1, def value: None
 bool  ___m_AttemptedGetCharacterController;

/// @brief Field m_IsMovingXROrigin, offset: 0xd9, size: 0x1, def value: None
 bool  ___m_IsMovingXROrigin;

/// @brief Field m_GravityDrivenVelocity, offset: 0xdc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_GravityDrivenVelocity;

/// @brief Field m_InAirVelocity, offset: 0xe8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_InAirVelocity;

/// [SerializeField]
/// [Tooltip("Controls whether gravity affects this provider when a Character Controller is used and flying is disabled. Ignored when a Gravity Provider component is found in the scene. Deprecated in XRI 3.1.0, use Gravity Provider instead.")]
/// [Obsolete("Controlling gravity directly in the move provider has been deprecated in XRI 3.1.0, use Gravity Provider instead.")]
/// @brief Field m_UseGravity, offset: 0xf4, size: 0x1, def value: None
 bool  ___m_UseGravity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider, ___m_MoveSpeed) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider, ___m_InAirControlModifier) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider, ___m_EnableStrafe) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider, ___m_EnableFly) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider, ___m_ForwardSource) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider, ____transformation_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider, ___m_LeftHandMoveInput) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider, ___m_RightHandMoveInput) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider, ___m_GravityProvider) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider, ___m_CharacterController) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider, ___m_AttemptedGetCharacterController) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider, ___m_IsMovingXROrigin) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider, ___m_GravityDrivenVelocity) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider, ___m_InAirVelocity) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider, ___m_UseGravity) == 0xf4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider) == 0xf8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement
