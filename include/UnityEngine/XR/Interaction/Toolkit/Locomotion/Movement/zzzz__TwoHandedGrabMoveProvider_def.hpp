#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Movement/TwoHandedGrabMoveProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Movement/zzzz__ConstrainedMoveProvider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TwoHandedGrabMoveProvider)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement {
class GrabMoveProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRBodyScale;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRBodyYawRotation;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement {
class TwoHandedGrabMoveProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement", "TwoHandedGrabMoveProvider");
// [DefaultExecutionOrder(-209)]
// [AddComponentMenu("XR/Locomotion/Two-Handed Grab Move Provider", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.TwoHandedGrabMoveProvider.html")]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ConstrainedMoveProvider
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.TwoHandedGrabMoveProvider
class CORDL_TYPE TwoHandedGrabMoveProvider : public ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ConstrainedMoveProvider {
public:
// Declarations
/// @brief Field <rotateTransformation>k__BackingField, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotateTransformation_k__BackingField, put=__cordl_internal_set__rotateTransformation_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*  _rotateTransformation_k__BackingField;

/// @brief Field <scaleTransformation>k__BackingField, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleTransformation_k__BackingField, put=__cordl_internal_set__scaleTransformation_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyScale*  _scaleTransformation_k__BackingField;

 __declspec(property(get=get_enableRotation, put=set_enableRotation)) bool  enableRotation;

 __declspec(property(get=get_enableScaling, put=set_enableScaling)) bool  enableScaling;

 __declspec(property(get=get_leftGrabMoveProvider, put=set_leftGrabMoveProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider>  leftGrabMoveProvider;

/// @brief Field m_EnableRotation, offset 0xf1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableRotation, put=__cordl_internal_set_m_EnableRotation)) bool  m_EnableRotation;

/// @brief Field m_EnableScaling, offset 0xf2, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableScaling, put=__cordl_internal_set_m_EnableScaling)) bool  m_EnableScaling;

/// @brief Field m_InitialDistanceBetweenHands, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InitialDistanceBetweenHands, put=__cordl_internal_set_m_InitialDistanceBetweenHands)) float_t  m_InitialDistanceBetweenHands;

/// @brief Field m_InitialLeftToRightDirection, offset 0x124, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_InitialLeftToRightDirection, put=__cordl_internal_set_m_InitialLeftToRightDirection)) ::UnityEngine::Vector3  m_InitialLeftToRightDirection;

/// @brief Field m_InitialLeftToRightOrthogonal, offset 0x130, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_InitialLeftToRightOrthogonal, put=__cordl_internal_set_m_InitialLeftToRightOrthogonal)) ::UnityEngine::Vector3  m_InitialLeftToRightOrthogonal;

/// @brief Field m_InitialOriginScale, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InitialOriginScale, put=__cordl_internal_set_m_InitialOriginScale)) float_t  m_InitialOriginScale;

/// @brief Field m_InitialOriginYaw, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InitialOriginYaw, put=__cordl_internal_set_m_InitialOriginYaw)) float_t  m_InitialOriginYaw;

/// @brief Field m_IsMoving, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsMoving, put=__cordl_internal_set_m_IsMoving)) bool  m_IsMoving;

/// @brief Field m_LeftGrabMoveProvider, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LeftGrabMoveProvider, put=__cordl_internal_set_m_LeftGrabMoveProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider>  m_LeftGrabMoveProvider;

/// @brief Field m_MaximumScale, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaximumScale, put=__cordl_internal_set_m_MaximumScale)) float_t  m_MaximumScale;

/// @brief Field m_MinimumScale, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinimumScale, put=__cordl_internal_set_m_MinimumScale)) float_t  m_MinimumScale;

/// @brief Field m_MoveFactor, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MoveFactor, put=__cordl_internal_set_m_MoveFactor)) float_t  m_MoveFactor;

/// @brief Field m_OverrideSharedSettingsOnInit, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OverrideSharedSettingsOnInit, put=__cordl_internal_set_m_OverrideSharedSettingsOnInit)) bool  m_OverrideSharedSettingsOnInit;

/// @brief Field m_PreviousMidpointBetweenControllers, offset 0x114, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_PreviousMidpointBetweenControllers, put=__cordl_internal_set_m_PreviousMidpointBetweenControllers)) ::UnityEngine::Vector3  m_PreviousMidpointBetweenControllers;

/// @brief Field m_RequireTwoHandsForTranslation, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RequireTwoHandsForTranslation, put=__cordl_internal_set_m_RequireTwoHandsForTranslation)) bool  m_RequireTwoHandsForTranslation;

/// @brief Field m_RightGrabMoveProvider, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RightGrabMoveProvider, put=__cordl_internal_set_m_RightGrabMoveProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider>  m_RightGrabMoveProvider;

 __declspec(property(get=get_maximumScale, put=set_maximumScale)) float_t  maximumScale;

 __declspec(property(get=get_minimumScale, put=set_minimumScale)) float_t  minimumScale;

 __declspec(property(get=get_moveFactor, put=set_moveFactor)) float_t  moveFactor;

 __declspec(property(get=get_overrideSharedSettingsOnInit, put=set_overrideSharedSettingsOnInit)) bool  overrideSharedSettingsOnInit;

 __declspec(property(get=get_requireTwoHandsForTranslation, put=set_requireTwoHandsForTranslation)) bool  requireTwoHandsForTranslation;

 __declspec(property(get=get_rightGrabMoveProvider, put=set_rightGrabMoveProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider>  rightGrabMoveProvider;

 __declspec(property(get=get_rotateTransformation, put=set_rotateTransformation)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*  rotateTransformation;

 __declspec(property(get=get_scaleTransformation, put=set_scaleTransformation)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyScale*  scaleTransformation;

/// @brief Method ComputeDesiredMove, addr 0xb452740, size 0x36c, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 ComputeDesiredMove(::by_ref<bool>  attemptingMove) ;

/// @brief Method MoveRig, addr 0xb452aac, size 0x388, virtual true, abstract: false, final false
inline void MoveRig(::UnityEngine::Vector3  translationInWorldSpace) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0xb45268c, size 0xb4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4524e0, size 0x1ac, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation* const& __cordl_internal_get__rotateTransformation_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*& __cordl_internal_get__rotateTransformation_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyScale* const& __cordl_internal_get__scaleTransformation_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyScale*& __cordl_internal_get__scaleTransformation_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_EnableRotation() const;

constexpr bool& __cordl_internal_get_m_EnableRotation() ;

constexpr bool const& __cordl_internal_get_m_EnableScaling() const;

constexpr bool& __cordl_internal_get_m_EnableScaling() ;

constexpr float_t const& __cordl_internal_get_m_InitialDistanceBetweenHands() const;

constexpr float_t& __cordl_internal_get_m_InitialDistanceBetweenHands() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InitialLeftToRightDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InitialLeftToRightDirection() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InitialLeftToRightOrthogonal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InitialLeftToRightOrthogonal() ;

constexpr float_t const& __cordl_internal_get_m_InitialOriginScale() const;

constexpr float_t& __cordl_internal_get_m_InitialOriginScale() ;

constexpr float_t const& __cordl_internal_get_m_InitialOriginYaw() const;

constexpr float_t& __cordl_internal_get_m_InitialOriginYaw() ;

constexpr bool const& __cordl_internal_get_m_IsMoving() const;

constexpr bool& __cordl_internal_get_m_IsMoving() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider> const& __cordl_internal_get_m_LeftGrabMoveProvider() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider>& __cordl_internal_get_m_LeftGrabMoveProvider() ;

constexpr float_t const& __cordl_internal_get_m_MaximumScale() const;

constexpr float_t& __cordl_internal_get_m_MaximumScale() ;

constexpr float_t const& __cordl_internal_get_m_MinimumScale() const;

constexpr float_t& __cordl_internal_get_m_MinimumScale() ;

constexpr float_t const& __cordl_internal_get_m_MoveFactor() const;

constexpr float_t& __cordl_internal_get_m_MoveFactor() ;

constexpr bool const& __cordl_internal_get_m_OverrideSharedSettingsOnInit() const;

constexpr bool& __cordl_internal_get_m_OverrideSharedSettingsOnInit() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PreviousMidpointBetweenControllers() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PreviousMidpointBetweenControllers() ;

constexpr bool const& __cordl_internal_get_m_RequireTwoHandsForTranslation() const;

constexpr bool& __cordl_internal_get_m_RequireTwoHandsForTranslation() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider> const& __cordl_internal_get_m_RightGrabMoveProvider() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider>& __cordl_internal_get_m_RightGrabMoveProvider() ;

constexpr void __cordl_internal_set__rotateTransformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*  value) ;

constexpr void __cordl_internal_set__scaleTransformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyScale*  value) ;

constexpr void __cordl_internal_set_m_EnableRotation(bool  value) ;

constexpr void __cordl_internal_set_m_EnableScaling(bool  value) ;

constexpr void __cordl_internal_set_m_InitialDistanceBetweenHands(float_t  value) ;

constexpr void __cordl_internal_set_m_InitialLeftToRightDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_InitialLeftToRightOrthogonal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_InitialOriginScale(float_t  value) ;

constexpr void __cordl_internal_set_m_InitialOriginYaw(float_t  value) ;

constexpr void __cordl_internal_set_m_IsMoving(bool  value) ;

constexpr void __cordl_internal_set_m_LeftGrabMoveProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider>  value) ;

constexpr void __cordl_internal_set_m_MaximumScale(float_t  value) ;

constexpr void __cordl_internal_set_m_MinimumScale(float_t  value) ;

constexpr void __cordl_internal_set_m_MoveFactor(float_t  value) ;

constexpr void __cordl_internal_set_m_OverrideSharedSettingsOnInit(bool  value) ;

constexpr void __cordl_internal_set_m_PreviousMidpointBetweenControllers(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_RequireTwoHandsForTranslation(bool  value) ;

constexpr void __cordl_internal_set_m_RightGrabMoveProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider>  value) ;

/// @brief Method .ctor, addr 0xb452e34, size 0xc8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_enableRotation, addr 0xb452470, size 0x8, virtual false, abstract: false, final false
inline bool get_enableRotation() ;

/// @brief Method get_enableScaling, addr 0xb452480, size 0x8, virtual false, abstract: false, final false
inline bool get_enableScaling() ;

/// @brief Method get_leftGrabMoveProvider, addr 0xb452420, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider> get_leftGrabMoveProvider() ;

/// @brief Method get_maximumScale, addr 0xb4524a0, size 0x8, virtual false, abstract: false, final false
inline float_t get_maximumScale() ;

/// @brief Method get_minimumScale, addr 0xb452490, size 0x8, virtual false, abstract: false, final false
inline float_t get_minimumScale() ;

/// @brief Method get_moveFactor, addr 0xb452450, size 0x8, virtual false, abstract: false, final false
inline float_t get_moveFactor() ;

/// @brief Method get_overrideSharedSettingsOnInit, addr 0xb452440, size 0x8, virtual false, abstract: false, final false
inline bool get_overrideSharedSettingsOnInit() ;

/// @brief Method get_requireTwoHandsForTranslation, addr 0xb452460, size 0x8, virtual false, abstract: false, final false
inline bool get_requireTwoHandsForTranslation() ;

/// @brief Method get_rightGrabMoveProvider, addr 0xb452430, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider> get_rightGrabMoveProvider() ;

/// [CompilerGenerated]
/// @brief Method get_rotateTransformation, addr 0xb4524b0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation* get_rotateTransformation() ;

/// [CompilerGenerated]
/// @brief Method get_scaleTransformation, addr 0xb4524c8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyScale* get_scaleTransformation() ;

/// @brief Method set_enableRotation, addr 0xb452478, size 0x8, virtual false, abstract: false, final false
inline void set_enableRotation(bool  value) ;

/// @brief Method set_enableScaling, addr 0xb452488, size 0x8, virtual false, abstract: false, final false
inline void set_enableScaling(bool  value) ;

/// @brief Method set_leftGrabMoveProvider, addr 0xb452428, size 0x8, virtual false, abstract: false, final false
inline void set_leftGrabMoveProvider(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*  value) ;

/// @brief Method set_maximumScale, addr 0xb4524a8, size 0x8, virtual false, abstract: false, final false
inline void set_maximumScale(float_t  value) ;

/// @brief Method set_minimumScale, addr 0xb452498, size 0x8, virtual false, abstract: false, final false
inline void set_minimumScale(float_t  value) ;

/// @brief Method set_moveFactor, addr 0xb452458, size 0x8, virtual false, abstract: false, final false
inline void set_moveFactor(float_t  value) ;

/// @brief Method set_overrideSharedSettingsOnInit, addr 0xb452448, size 0x8, virtual false, abstract: false, final false
inline void set_overrideSharedSettingsOnInit(bool  value) ;

/// @brief Method set_requireTwoHandsForTranslation, addr 0xb452468, size 0x8, virtual false, abstract: false, final false
inline void set_requireTwoHandsForTranslation(bool  value) ;

/// @brief Method set_rightGrabMoveProvider, addr 0xb452438, size 0x8, virtual false, abstract: false, final false
inline void set_rightGrabMoveProvider(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*  value) ;

/// [CompilerGenerated]
/// @brief Method set_rotateTransformation, addr 0xb4524b8, size 0x10, virtual false, abstract: false, final false
inline void set_rotateTransformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*  value) ;

/// [CompilerGenerated]
/// @brief Method set_scaleTransformation, addr 0xb4524d0, size 0x10, virtual false, abstract: false, final false
inline void set_scaleTransformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyScale*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TwoHandedGrabMoveProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TwoHandedGrabMoveProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TwoHandedGrabMoveProvider(TwoHandedGrabMoveProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TwoHandedGrabMoveProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TwoHandedGrabMoveProvider(TwoHandedGrabMoveProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11374};

/// [SerializeField]
/// [Tooltip("The left hand grab move instance which will be used as one half of two-handed locomotion.")]
/// @brief Field m_LeftGrabMoveProvider, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider>  ___m_LeftGrabMoveProvider;

/// [SerializeField]
/// [Tooltip("The right hand grab move instance which will be used as one half of two-handed locomotion.")]
/// @brief Field m_RightGrabMoveProvider, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider>  ___m_RightGrabMoveProvider;

/// [SerializeField]
/// [Tooltip("Controls whether to override the settings for individual handed providers with this provider\'s settings on initialization.")]
/// @brief Field m_OverrideSharedSettingsOnInit, offset: 0xe8, size: 0x1, def value: None
 bool  ___m_OverrideSharedSettingsOnInit;

/// [SerializeField]
/// [Tooltip("The ratio of actual movement distance to controller movement distance.")]
/// @brief Field m_MoveFactor, offset: 0xec, size: 0x4, def value: None
 float_t  ___m_MoveFactor;

/// [SerializeField]
/// [Tooltip("Controls whether translation requires both grab move inputs to be active.")]
/// @brief Field m_RequireTwoHandsForTranslation, offset: 0xf0, size: 0x1, def value: None
 bool  ___m_RequireTwoHandsForTranslation;

/// [SerializeField]
/// [Tooltip("Controls whether to enable yaw rotation of the user.")]
/// @brief Field m_EnableRotation, offset: 0xf1, size: 0x1, def value: None
 bool  ___m_EnableRotation;

/// [SerializeField]
/// [Tooltip("Controls whether to enable uniform scaling of the user.")]
/// @brief Field m_EnableScaling, offset: 0xf2, size: 0x1, def value: None
 bool  ___m_EnableScaling;

/// [SerializeField]
/// [Tooltip("The minimum user scale allowed.")]
/// @brief Field m_MinimumScale, offset: 0xf4, size: 0x4, def value: None
 float_t  ___m_MinimumScale;

/// [SerializeField]
/// [Tooltip("The maximum user scale allowed.")]
/// @brief Field m_MaximumScale, offset: 0xf8, size: 0x4, def value: None
 float_t  ___m_MaximumScale;

/// [CompilerGenerated]
/// @brief Field <rotateTransformation>k__BackingField, offset: 0x100, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*  ____rotateTransformation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <scaleTransformation>k__BackingField, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyScale*  ____scaleTransformation_k__BackingField;

/// @brief Field m_IsMoving, offset: 0x110, size: 0x1, def value: None
 bool  ___m_IsMoving;

/// @brief Field m_PreviousMidpointBetweenControllers, offset: 0x114, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_PreviousMidpointBetweenControllers;

/// @brief Field m_InitialOriginYaw, offset: 0x120, size: 0x4, def value: None
 float_t  ___m_InitialOriginYaw;

/// @brief Field m_InitialLeftToRightDirection, offset: 0x124, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_InitialLeftToRightDirection;

/// @brief Field m_InitialLeftToRightOrthogonal, offset: 0x130, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_InitialLeftToRightOrthogonal;

/// @brief Field m_InitialOriginScale, offset: 0x13c, size: 0x4, def value: None
 float_t  ___m_InitialOriginScale;

/// @brief Field m_InitialDistanceBetweenHands, offset: 0x140, size: 0x4, def value: None
 float_t  ___m_InitialDistanceBetweenHands;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider, ___m_LeftGrabMoveProvider) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider, ___m_RightGrabMoveProvider) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider, ___m_OverrideSharedSettingsOnInit) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider, ___m_MoveFactor) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider, ___m_RequireTwoHandsForTranslation) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider, ___m_EnableRotation) == 0xf1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider, ___m_EnableScaling) == 0xf2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider, ___m_MinimumScale) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider, ___m_MaximumScale) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider, ____rotateTransformation_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider, ____scaleTransformation_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider, ___m_IsMoving) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider, ___m_PreviousMidpointBetweenControllers) == 0x114, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider, ___m_InitialOriginYaw) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider, ___m_InitialLeftToRightDirection) == 0x124, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider, ___m_InitialLeftToRightOrthogonal) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider, ___m_InitialOriginScale) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider, ___m_InitialDistanceBetweenHands) == 0x140, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::TwoHandedGrabMoveProvider) == 0x148, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement
