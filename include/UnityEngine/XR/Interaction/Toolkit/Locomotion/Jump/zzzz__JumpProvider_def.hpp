#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Jump/JumpProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JumpProvider)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputButtonReader;
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
class XROriginMovement;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump {
class JumpProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Jump", "JumpProvider");
// [AddComponentMenu("XR/Locomotion/Jump Provider", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Jump.JumpProvider.html")]
// Dependencies UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Jump.JumpProvider
class CORDL_TYPE JumpProvider : public ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider {
public:
// Declarations
/// @brief Field <gravityPaused>k__BackingField, offset 0xc9, size 0x1 
 __declspec(property(get=__cordl_internal_get__gravityPaused_k__BackingField, put=__cordl_internal_set__gravityPaused_k__BackingField)) bool  _gravityPaused_k__BackingField;

/// @brief Field <transformation>k__BackingField, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformation_k__BackingField, put=__cordl_internal_set__transformation_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  _transformation_k__BackingField;

 __declspec(property(get=get_canProcess)) bool  canProcess;

 __declspec(property(get=get_disableGravityDuringJump, put=set_disableGravityDuringJump)) bool  disableGravityDuringJump;

 __declspec(property(get=get_earlyOutDecelerationSpeed, put=set_earlyOutDecelerationSpeed)) float_t  earlyOutDecelerationSpeed;

 __declspec(property(get=get_gravityPaused, put=set_gravityPaused)) bool  gravityPaused;

 __declspec(property(get=get_inAirJumpCount, put=set_inAirJumpCount)) int32_t  inAirJumpCount;

 __declspec(property(get=get_isJumping)) bool  isJumping;

 __declspec(property(get=get_jumpForgivenessWindow, put=set_jumpForgivenessWindow)) float_t  jumpForgivenessWindow;

 __declspec(property(get=get_jumpHeight, put=set_jumpHeight)) float_t  jumpHeight;

 __declspec(property(get=get_jumpInput, put=set_jumpInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  jumpInput;

/// @brief Field m_CurrentInAirJumpCount, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentInAirJumpCount, put=__cordl_internal_set_m_CurrentInAirJumpCount)) int32_t  m_CurrentInAirJumpCount;

/// @brief Field m_CurrentJumpForceThisFrame, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentJumpForceThisFrame, put=__cordl_internal_set_m_CurrentJumpForceThisFrame)) float_t  m_CurrentJumpForceThisFrame;

/// @brief Field m_CurrentJumpForgivenessWindowTime, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentJumpForgivenessWindowTime, put=__cordl_internal_set_m_CurrentJumpForgivenessWindowTime)) float_t  m_CurrentJumpForgivenessWindowTime;

/// @brief Field m_CurrentJumpTimer, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentJumpTimer, put=__cordl_internal_set_m_CurrentJumpTimer)) float_t  m_CurrentJumpTimer;

/// @brief Field m_DisableGravityDuringJump, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DisableGravityDuringJump, put=__cordl_internal_set_m_DisableGravityDuringJump)) bool  m_DisableGravityDuringJump;

/// @brief Field m_EarlyOutDecelerationSpeed, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_EarlyOutDecelerationSpeed, put=__cordl_internal_set_m_EarlyOutDecelerationSpeed)) float_t  m_EarlyOutDecelerationSpeed;

/// @brief Field m_GravityProvider, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GravityProvider, put=__cordl_internal_set_m_GravityProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>  m_GravityProvider;

/// @brief Field m_HasGravityProvider, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasGravityProvider, put=__cordl_internal_set_m_HasGravityProvider)) bool  m_HasGravityProvider;

/// @brief Field m_HasJumped, offset 0xca, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasJumped, put=__cordl_internal_set_m_HasJumped)) bool  m_HasJumped;

/// @brief Field m_InAirJumpCount, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InAirJumpCount, put=__cordl_internal_set_m_InAirJumpCount)) int32_t  m_InAirJumpCount;

/// @brief Field m_IsJumping, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsJumping, put=__cordl_internal_set_m_IsJumping)) bool  m_IsJumping;

/// @brief Field m_JumpForgivenessWindow, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_JumpForgivenessWindow, put=__cordl_internal_set_m_JumpForgivenessWindow)) float_t  m_JumpForgivenessWindow;

/// @brief Field m_JumpHeight, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_JumpHeight, put=__cordl_internal_set_m_JumpHeight)) float_t  m_JumpHeight;

/// @brief Field m_JumpInput, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_JumpInput, put=__cordl_internal_set_m_JumpInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_JumpInput;

/// @brief Field m_JumpVector, offset 0xd8, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_JumpVector, put=__cordl_internal_set_m_JumpVector)) ::UnityEngine::Vector3  m_JumpVector;

/// @brief Field m_MaxJumpHoldTime, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxJumpHoldTime, put=__cordl_internal_set_m_MaxJumpHoldTime)) float_t  m_MaxJumpHoldTime;

/// @brief Field m_MinJumpHoldTime, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinJumpHoldTime, put=__cordl_internal_set_m_MinJumpHoldTime)) float_t  m_MinJumpHoldTime;

/// @brief Field m_StoppingJumpTime, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StoppingJumpTime, put=__cordl_internal_set_m_StoppingJumpTime)) float_t  m_StoppingJumpTime;

/// @brief Field m_UnlimitedInAirJumps, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UnlimitedInAirJumps, put=__cordl_internal_set_m_UnlimitedInAirJumps)) bool  m_UnlimitedInAirJumps;

/// @brief Field m_VariableHeightJump, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_VariableHeightJump, put=__cordl_internal_set_m_VariableHeightJump)) bool  m_VariableHeightJump;

 __declspec(property(get=get_maxJumpHoldTime, put=set_maxJumpHoldTime)) float_t  maxJumpHoldTime;

 __declspec(property(get=get_minJumpHoldTime, put=set_minJumpHoldTime)) float_t  minJumpHoldTime;

 __declspec(property(get=get_transformation, put=set_transformation)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  transformation;

 __declspec(property(get=get_unlimitedInAirJumps, put=set_unlimitedInAirJumps)) bool  unlimitedInAirJumps;

 __declspec(property(get=get_variableHeightJump, put=set_variableHeightJump)) bool  variableHeightJump;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*() noexcept;

/// @brief Method Awake, addr 0xb452ff0, size 0xe8, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateJumpForceForFrame, addr 0xb4536a8, size 0x5c, virtual false, abstract: false, final false
inline float_t CalculateJumpForceForFrame(float_t  normalizedJumpTime) ;

/// @brief Method CanJump, addr 0xb4532f8, size 0x44, virtual false, abstract: false, final false
inline bool CanJump() ;

/// @brief Method CheckJump, addr 0xb453120, size 0xa0, virtual false, abstract: false, final false
inline void CheckJump() ;

/// @brief Method IsPausingGravity, addr 0xb4537a8, size 0x20, virtual false, abstract: false, final false
inline bool IsPausingGravity() ;

/// @brief Method Jump, addr 0xb4531c0, size 0x7c, virtual false, abstract: false, final false
inline void Jump() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0xb453104, size 0x18, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4530d8, size 0x2c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGravityLockChanged, addr 0xb453898, size 0x10, virtual true, abstract: false, final false
inline void OnGravityLockChanged(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride) ;

/// @brief Method OnGroundedChanged, addr 0xb4537e8, size 0xb0, virtual true, abstract: false, final false
inline void OnGroundedChanged(bool  isGrounded) ;

/// @brief Method OnValidate, addr 0xb452fe0, size 0x10, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ProcessJumpForce, addr 0xb453430, size 0x110, virtual false, abstract: false, final false
inline void ProcessJumpForce(float_t  dt) ;

/// @brief Method RemoveGravityLock, addr 0xb453718, size 0x84, virtual true, abstract: false, final true
inline void RemoveGravityLock() ;

/// @brief Method StartCoyoteTimer, addr 0xb45379c, size 0xc, virtual false, abstract: false, final false
inline void StartCoyoteTimer() ;

/// @brief Method StopJump, addr 0xb453704, size 0x14, virtual false, abstract: false, final false
inline void StopJump() ;

/// @brief Method TryLockGravity, addr 0xb45333c, size 0x9c, virtual true, abstract: false, final true
inline bool TryLockGravity(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController.OnGravityLockChanged, addr 0xb4537d8, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGravityLockChanged(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController.OnGroundedChanged, addr 0xb4537c8, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGroundedChanged(bool  isGrounded) ;

/// @brief Method Update, addr 0xb45311c, size 0x4, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateJump, addr 0xb45323c, size 0xbc, virtual false, abstract: false, final false
inline void UpdateJump() ;

constexpr bool const& __cordl_internal_get__gravityPaused_k__BackingField() const;

constexpr bool& __cordl_internal_get__gravityPaused_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* const& __cordl_internal_get__transformation_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*& __cordl_internal_get__transformation_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_m_CurrentInAirJumpCount() const;

constexpr int32_t& __cordl_internal_get_m_CurrentInAirJumpCount() ;

constexpr float_t const& __cordl_internal_get_m_CurrentJumpForceThisFrame() const;

constexpr float_t& __cordl_internal_get_m_CurrentJumpForceThisFrame() ;

constexpr float_t const& __cordl_internal_get_m_CurrentJumpForgivenessWindowTime() const;

constexpr float_t& __cordl_internal_get_m_CurrentJumpForgivenessWindowTime() ;

constexpr float_t const& __cordl_internal_get_m_CurrentJumpTimer() const;

constexpr float_t& __cordl_internal_get_m_CurrentJumpTimer() ;

constexpr bool const& __cordl_internal_get_m_DisableGravityDuringJump() const;

constexpr bool& __cordl_internal_get_m_DisableGravityDuringJump() ;

constexpr float_t const& __cordl_internal_get_m_EarlyOutDecelerationSpeed() const;

constexpr float_t& __cordl_internal_get_m_EarlyOutDecelerationSpeed() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider> const& __cordl_internal_get_m_GravityProvider() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>& __cordl_internal_get_m_GravityProvider() ;

constexpr bool const& __cordl_internal_get_m_HasGravityProvider() const;

constexpr bool& __cordl_internal_get_m_HasGravityProvider() ;

constexpr bool const& __cordl_internal_get_m_HasJumped() const;

constexpr bool& __cordl_internal_get_m_HasJumped() ;

constexpr int32_t const& __cordl_internal_get_m_InAirJumpCount() const;

constexpr int32_t& __cordl_internal_get_m_InAirJumpCount() ;

constexpr bool const& __cordl_internal_get_m_IsJumping() const;

constexpr bool& __cordl_internal_get_m_IsJumping() ;

constexpr float_t const& __cordl_internal_get_m_JumpForgivenessWindow() const;

constexpr float_t& __cordl_internal_get_m_JumpForgivenessWindow() ;

constexpr float_t const& __cordl_internal_get_m_JumpHeight() const;

constexpr float_t& __cordl_internal_get_m_JumpHeight() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_JumpInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_JumpInput() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_JumpVector() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_JumpVector() ;

constexpr float_t const& __cordl_internal_get_m_MaxJumpHoldTime() const;

constexpr float_t& __cordl_internal_get_m_MaxJumpHoldTime() ;

constexpr float_t const& __cordl_internal_get_m_MinJumpHoldTime() const;

constexpr float_t& __cordl_internal_get_m_MinJumpHoldTime() ;

constexpr float_t const& __cordl_internal_get_m_StoppingJumpTime() const;

constexpr float_t& __cordl_internal_get_m_StoppingJumpTime() ;

constexpr bool const& __cordl_internal_get_m_UnlimitedInAirJumps() const;

constexpr bool& __cordl_internal_get_m_UnlimitedInAirJumps() ;

constexpr bool const& __cordl_internal_get_m_VariableHeightJump() const;

constexpr bool& __cordl_internal_get_m_VariableHeightJump() ;

constexpr void __cordl_internal_set__gravityPaused_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__transformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  value) ;

constexpr void __cordl_internal_set_m_CurrentInAirJumpCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_CurrentJumpForceThisFrame(float_t  value) ;

constexpr void __cordl_internal_set_m_CurrentJumpForgivenessWindowTime(float_t  value) ;

constexpr void __cordl_internal_set_m_CurrentJumpTimer(float_t  value) ;

constexpr void __cordl_internal_set_m_DisableGravityDuringJump(bool  value) ;

constexpr void __cordl_internal_set_m_EarlyOutDecelerationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_GravityProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>  value) ;

constexpr void __cordl_internal_set_m_HasGravityProvider(bool  value) ;

constexpr void __cordl_internal_set_m_HasJumped(bool  value) ;

constexpr void __cordl_internal_set_m_InAirJumpCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_IsJumping(bool  value) ;

constexpr void __cordl_internal_set_m_JumpForgivenessWindow(float_t  value) ;

constexpr void __cordl_internal_set_m_JumpHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_JumpInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_JumpVector(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_MaxJumpHoldTime(float_t  value) ;

constexpr void __cordl_internal_set_m_MinJumpHoldTime(float_t  value) ;

constexpr void __cordl_internal_set_m_StoppingJumpTime(float_t  value) ;

constexpr void __cordl_internal_set_m_UnlimitedInAirJumps(bool  value) ;

constexpr void __cordl_internal_set_m_VariableHeightJump(bool  value) ;

/// @brief Method .ctor, addr 0xb4538a8, size 0x12c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_canProcess, addr 0xb452fc8, size 0x8, virtual true, abstract: false, final true
inline bool get_canProcess() ;

/// @brief Method get_disableGravityDuringJump, addr 0xb452efc, size 0x8, virtual false, abstract: false, final false
inline bool get_disableGravityDuringJump() ;

/// @brief Method get_earlyOutDecelerationSpeed, addr 0xb452f88, size 0x8, virtual false, abstract: false, final false
inline float_t get_earlyOutDecelerationSpeed() ;

/// [CompilerGenerated]
/// @brief Method get_gravityPaused, addr 0xb452fd0, size 0x8, virtual true, abstract: false, final true
inline bool get_gravityPaused() ;

/// @brief Method get_inAirJumpCount, addr 0xb452f1c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_inAirJumpCount() ;

/// @brief Method get_isJumping, addr 0xb452fc0, size 0x8, virtual false, abstract: false, final false
inline bool get_isJumping() ;

/// @brief Method get_jumpForgivenessWindow, addr 0xb452f34, size 0x8, virtual false, abstract: false, final false
inline float_t get_jumpForgivenessWindow() ;

/// @brief Method get_jumpHeight, addr 0xb452f48, size 0x8, virtual false, abstract: false, final false
inline float_t get_jumpHeight() ;

/// @brief Method get_jumpInput, addr 0xb452f98, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_jumpInput() ;

/// @brief Method get_maxJumpHoldTime, addr 0xb452f78, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxJumpHoldTime() ;

/// @brief Method get_minJumpHoldTime, addr 0xb452f68, size 0x8, virtual false, abstract: false, final false
inline float_t get_minJumpHoldTime() ;

/// [CompilerGenerated]
/// @brief Method get_transformation, addr 0xb452fb0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* get_transformation() ;

/// @brief Method get_unlimitedInAirJumps, addr 0xb452f0c, size 0x8, virtual false, abstract: false, final false
inline bool get_unlimitedInAirJumps() ;

/// @brief Method get_variableHeightJump, addr 0xb452f58, size 0x8, virtual false, abstract: false, final false
inline bool get_variableHeightJump() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController* i___UnityEngine__XR__Interaction__Toolkit__Locomotion__Gravity__IGravityController() noexcept;

/// @brief Method set_disableGravityDuringJump, addr 0xb452f04, size 0x8, virtual false, abstract: false, final false
inline void set_disableGravityDuringJump(bool  value) ;

/// @brief Method set_earlyOutDecelerationSpeed, addr 0xb452f90, size 0x8, virtual false, abstract: false, final false
inline void set_earlyOutDecelerationSpeed(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_gravityPaused, addr 0xb452fd8, size 0x8, virtual false, abstract: false, final false
inline void set_gravityPaused(bool  value) ;

/// @brief Method set_inAirJumpCount, addr 0xb452f24, size 0x10, virtual false, abstract: false, final false
inline void set_inAirJumpCount(int32_t  value) ;

/// @brief Method set_jumpForgivenessWindow, addr 0xb452f3c, size 0xc, virtual false, abstract: false, final false
inline void set_jumpForgivenessWindow(float_t  value) ;

/// @brief Method set_jumpHeight, addr 0xb452f50, size 0x8, virtual false, abstract: false, final false
inline void set_jumpHeight(float_t  value) ;

/// @brief Method set_jumpInput, addr 0xb452fa0, size 0x10, virtual false, abstract: false, final false
inline void set_jumpInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_maxJumpHoldTime, addr 0xb452f80, size 0x8, virtual false, abstract: false, final false
inline void set_maxJumpHoldTime(float_t  value) ;

/// @brief Method set_minJumpHoldTime, addr 0xb452f70, size 0x8, virtual false, abstract: false, final false
inline void set_minJumpHoldTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_transformation, addr 0xb452fb8, size 0x8, virtual false, abstract: false, final false
inline void set_transformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  value) ;

/// @brief Method set_unlimitedInAirJumps, addr 0xb452f14, size 0x8, virtual false, abstract: false, final false
inline void set_unlimitedInAirJumps(bool  value) ;

/// @brief Method set_variableHeightJump, addr 0xb452f60, size 0x8, virtual false, abstract: false, final false
inline void set_variableHeightJump(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JumpProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JumpProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JumpProvider(JumpProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JumpProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JumpProvider(JumpProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11375};

/// [SerializeField]
/// [Tooltip("Disable gravity during the jump. This will result in a more floaty jump.")]
/// @brief Field m_DisableGravityDuringJump, offset: 0x98, size: 0x1, def value: None
 bool  ___m_DisableGravityDuringJump;

/// [SerializeField]
/// [Tooltip("Allow player to jump without being grounded.")]
/// @brief Field m_UnlimitedInAirJumps, offset: 0x99, size: 0x1, def value: None
 bool  ___m_UnlimitedInAirJumps;

/// [SerializeField]
/// [Tooltip("The number of times a player can jump before landing.")]
/// @brief Field m_InAirJumpCount, offset: 0x9c, size: 0x4, def value: None
 int32_t  ___m_InAirJumpCount;

/// [SerializeField]
/// [Tooltip("The time window after leaving the ground that a jump can still be performed. Sometimes known as coyote time.")]
/// @brief Field m_JumpForgivenessWindow, offset: 0xa0, size: 0x4, def value: None
 float_t  ___m_JumpForgivenessWindow;

/// [SerializeField]
/// [Tooltip("The height (approximately in meters) the player will be when reaching the apex of the jump.")]
/// @brief Field m_JumpHeight, offset: 0xa4, size: 0x4, def value: None
 float_t  ___m_JumpHeight;

/// [SerializeField]
/// [Tooltip("Allow the player to stop their jump early when input is released before reaching the maximum jump height.")]
/// @brief Field m_VariableHeightJump, offset: 0xa8, size: 0x1, def value: None
 bool  ___m_VariableHeightJump;

/// [SerializeField]
/// [Tooltip("The minimum amount of time the jump will execute for.")]
/// @brief Field m_MinJumpHoldTime, offset: 0xac, size: 0x4, def value: None
 float_t  ___m_MinJumpHoldTime;

/// [SerializeField]
/// [Tooltip("The maximum time a player can hold down the jump button to increase altitude.")]
/// @brief Field m_MaxJumpHoldTime, offset: 0xb0, size: 0x4, def value: None
 float_t  ___m_MaxJumpHoldTime;

/// [SerializeField]
/// [Tooltip("The speed at which the jump will decelerate when the player releases the jump button early.")]
/// @brief Field m_EarlyOutDecelerationSpeed, offset: 0xb4, size: 0x4, def value: None
 float_t  ___m_EarlyOutDecelerationSpeed;

/// [SerializeField]
/// [Tooltip("Input data that will be used to perform a jump.")]
/// @brief Field m_JumpInput, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_JumpInput;

/// [CompilerGenerated]
/// @brief Field <transformation>k__BackingField, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  ____transformation_k__BackingField;

/// @brief Field m_IsJumping, offset: 0xc8, size: 0x1, def value: None
 bool  ___m_IsJumping;

/// [CompilerGenerated]
/// @brief Field <gravityPaused>k__BackingField, offset: 0xc9, size: 0x1, def value: None
 bool  ____gravityPaused_k__BackingField;

/// @brief Field m_HasJumped, offset: 0xca, size: 0x1, def value: None
 bool  ___m_HasJumped;

/// @brief Field m_CurrentJumpForgivenessWindowTime, offset: 0xcc, size: 0x4, def value: None
 float_t  ___m_CurrentJumpForgivenessWindowTime;

/// @brief Field m_StoppingJumpTime, offset: 0xd0, size: 0x4, def value: None
 float_t  ___m_StoppingJumpTime;

/// @brief Field m_CurrentJumpForceThisFrame, offset: 0xd4, size: 0x4, def value: None
 float_t  ___m_CurrentJumpForceThisFrame;

/// @brief Field m_JumpVector, offset: 0xd8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_JumpVector;

/// @brief Field m_GravityProvider, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>  ___m_GravityProvider;

/// @brief Field m_HasGravityProvider, offset: 0xf0, size: 0x1, def value: None
 bool  ___m_HasGravityProvider;

/// @brief Field m_CurrentJumpTimer, offset: 0xf4, size: 0x4, def value: None
 float_t  ___m_CurrentJumpTimer;

/// @brief Field m_CurrentInAirJumpCount, offset: 0xf8, size: 0x4, def value: None
 int32_t  ___m_CurrentInAirJumpCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_DisableGravityDuringJump) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_UnlimitedInAirJumps) == 0x99, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_InAirJumpCount) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_JumpForgivenessWindow) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_JumpHeight) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_VariableHeightJump) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_MinJumpHoldTime) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_MaxJumpHoldTime) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_EarlyOutDecelerationSpeed) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_JumpInput) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ____transformation_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_IsJumping) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ____gravityPaused_k__BackingField) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_HasJumped) == 0xca, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_CurrentJumpForgivenessWindowTime) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_StoppingJumpTime) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_CurrentJumpForceThisFrame) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_JumpVector) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_GravityProvider) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_HasGravityProvider) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_CurrentJumpTimer) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider, ___m_CurrentInAirJumpCount) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider) == 0x100, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump
