#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/FollowPreset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/zzzz__FollowReferenceAxis_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FollowPreset)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI::BodyUI {
class FollowPreset;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*, "UnityEngine.XR.Interaction.Toolkit.UI.BodyUI", "FollowPreset");
// Dependencies System.Object, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.FollowReferenceAxis
namespace UnityEngine::XR::Interaction::Toolkit::UI::BodyUI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.FollowPreset
class CORDL_TYPE FollowPreset : public ::System::Object {
public:
// Declarations
/// @brief Field allowSmoothing, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowSmoothing, put=__cordl_internal_set_allowSmoothing)) bool  allowSmoothing;

/// @brief Field followLowerSmoothingValue, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_followLowerSmoothingValue, put=__cordl_internal_set_followLowerSmoothingValue)) float_t  followLowerSmoothingValue;

/// @brief Field followUpperSmoothingValue, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_followUpperSmoothingValue, put=__cordl_internal_set_followUpperSmoothingValue)) float_t  followUpperSmoothingValue;

/// @brief Field hideDelaySeconds, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_hideDelaySeconds, put=__cordl_internal_set_hideDelaySeconds)) float_t  hideDelaySeconds;

/// @brief Field invertAxisForRightHand, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_invertAxisForRightHand, put=__cordl_internal_set_invertAxisForRightHand)) bool  invertAxisForRightHand;

/// @brief Field leftHandLocalPosition, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftHandLocalPosition, put=__cordl_internal_set_leftHandLocalPosition)) ::UnityEngine::Vector3  leftHandLocalPosition;

/// @brief Field leftHandLocalRotation, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftHandLocalRotation, put=__cordl_internal_set_leftHandLocalRotation)) ::UnityEngine::Vector3  leftHandLocalRotation;

/// @brief Field m_PalmFacingUpDotThreshold, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PalmFacingUpDotThreshold, put=__cordl_internal_set_m_PalmFacingUpDotThreshold)) float_t  m_PalmFacingUpDotThreshold;

/// @brief Field m_PalmFacingUserDotThreshold, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PalmFacingUserDotThreshold, put=__cordl_internal_set_m_PalmFacingUserDotThreshold)) float_t  m_PalmFacingUserDotThreshold;

/// @brief Field m_SnapToGazeDotThreshold, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SnapToGazeDotThreshold, put=__cordl_internal_set_m_SnapToGazeDotThreshold)) float_t  m_SnapToGazeDotThreshold;

/// @brief Field palmFacingUpDegreeAngleThreshold, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_palmFacingUpDegreeAngleThreshold, put=__cordl_internal_set_palmFacingUpDegreeAngleThreshold)) float_t  palmFacingUpDegreeAngleThreshold;

 __declspec(property(get=get_palmFacingUpDotThreshold)) float_t  palmFacingUpDotThreshold;

/// @brief Field palmFacingUserDegreeAngleThreshold, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_palmFacingUserDegreeAngleThreshold, put=__cordl_internal_set_palmFacingUserDegreeAngleThreshold)) float_t  palmFacingUserDegreeAngleThreshold;

 __declspec(property(get=get_palmFacingUserDotThreshold)) float_t  palmFacingUserDotThreshold;

/// @brief Field palmReferenceAxis, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_palmReferenceAxis, put=__cordl_internal_set_palmReferenceAxis)) ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowReferenceAxis  palmReferenceAxis;

/// @brief Field requirePalmFacingUp, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_requirePalmFacingUp, put=__cordl_internal_set_requirePalmFacingUp)) bool  requirePalmFacingUp;

/// @brief Field requirePalmFacingUser, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_requirePalmFacingUser, put=__cordl_internal_set_requirePalmFacingUser)) bool  requirePalmFacingUser;

/// @brief Field rightHandLocalPosition, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightHandLocalPosition, put=__cordl_internal_set_rightHandLocalPosition)) ::UnityEngine::Vector3  rightHandLocalPosition;

/// @brief Field rightHandLocalRotation, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightHandLocalRotation, put=__cordl_internal_set_rightHandLocalRotation)) ::UnityEngine::Vector3  rightHandLocalRotation;

/// @brief Field snapToGaze, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_snapToGaze, put=__cordl_internal_set_snapToGaze)) bool  snapToGaze;

/// @brief Field snapToGazeAngleThreshold, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_snapToGazeAngleThreshold, put=__cordl_internal_set_snapToGazeAngleThreshold)) float_t  snapToGazeAngleThreshold;

 __declspec(property(get=get_snapToGazeDotThreshold)) float_t  snapToGazeDotThreshold;

/// @brief Method AngleToDot, addr 0xb444a68, size 0x10, virtual false, abstract: false, final false
static inline float_t AngleToDot(float_t  angleDeg) ;

/// @brief Method ApplyPreset, addr 0xb444874, size 0x19c, virtual false, abstract: false, final false
inline void ApplyPreset(::UnityEngine::Transform*  leftTrackingOffset, ::UnityEngine::Transform*  rightTrackingOffset) ;

/// @brief Method ComputeDotProductThresholds, addr 0xb444a10, size 0x58, virtual false, abstract: false, final false
inline void ComputeDotProductThresholds() ;

/// @brief Method GetLocalAxis, addr 0xb444aa0, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetLocalAxis(bool  isRightHand) ;

/// @brief Method GetReferenceAxisForTrackingAnchor, addr 0xb444a78, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetReferenceAxisForTrackingAnchor(::UnityEngine::Transform*  trackingRoot, bool  isRightHand) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset* New_ctor() ;

constexpr bool const& __cordl_internal_get_allowSmoothing() const;

constexpr bool& __cordl_internal_get_allowSmoothing() ;

constexpr float_t const& __cordl_internal_get_followLowerSmoothingValue() const;

constexpr float_t& __cordl_internal_get_followLowerSmoothingValue() ;

constexpr float_t const& __cordl_internal_get_followUpperSmoothingValue() const;

constexpr float_t& __cordl_internal_get_followUpperSmoothingValue() ;

constexpr float_t const& __cordl_internal_get_hideDelaySeconds() const;

constexpr float_t& __cordl_internal_get_hideDelaySeconds() ;

constexpr bool const& __cordl_internal_get_invertAxisForRightHand() const;

constexpr bool& __cordl_internal_get_invertAxisForRightHand() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftHandLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftHandLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftHandLocalRotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftHandLocalRotation() ;

constexpr float_t const& __cordl_internal_get_m_PalmFacingUpDotThreshold() const;

constexpr float_t& __cordl_internal_get_m_PalmFacingUpDotThreshold() ;

constexpr float_t const& __cordl_internal_get_m_PalmFacingUserDotThreshold() const;

constexpr float_t& __cordl_internal_get_m_PalmFacingUserDotThreshold() ;

constexpr float_t const& __cordl_internal_get_m_SnapToGazeDotThreshold() const;

constexpr float_t& __cordl_internal_get_m_SnapToGazeDotThreshold() ;

constexpr float_t const& __cordl_internal_get_palmFacingUpDegreeAngleThreshold() const;

constexpr float_t& __cordl_internal_get_palmFacingUpDegreeAngleThreshold() ;

constexpr float_t const& __cordl_internal_get_palmFacingUserDegreeAngleThreshold() const;

constexpr float_t& __cordl_internal_get_palmFacingUserDegreeAngleThreshold() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowReferenceAxis const& __cordl_internal_get_palmReferenceAxis() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowReferenceAxis& __cordl_internal_get_palmReferenceAxis() ;

constexpr bool const& __cordl_internal_get_requirePalmFacingUp() const;

constexpr bool& __cordl_internal_get_requirePalmFacingUp() ;

constexpr bool const& __cordl_internal_get_requirePalmFacingUser() const;

constexpr bool& __cordl_internal_get_requirePalmFacingUser() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightHandLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightHandLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightHandLocalRotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightHandLocalRotation() ;

constexpr bool const& __cordl_internal_get_snapToGaze() const;

constexpr bool& __cordl_internal_get_snapToGaze() ;

constexpr float_t const& __cordl_internal_get_snapToGazeAngleThreshold() const;

constexpr float_t& __cordl_internal_get_snapToGazeAngleThreshold() ;

constexpr void __cordl_internal_set_allowSmoothing(bool  value) ;

constexpr void __cordl_internal_set_followLowerSmoothingValue(float_t  value) ;

constexpr void __cordl_internal_set_followUpperSmoothingValue(float_t  value) ;

constexpr void __cordl_internal_set_hideDelaySeconds(float_t  value) ;

constexpr void __cordl_internal_set_invertAxisForRightHand(bool  value) ;

constexpr void __cordl_internal_set_leftHandLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leftHandLocalRotation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_PalmFacingUpDotThreshold(float_t  value) ;

constexpr void __cordl_internal_set_m_PalmFacingUserDotThreshold(float_t  value) ;

constexpr void __cordl_internal_set_m_SnapToGazeDotThreshold(float_t  value) ;

constexpr void __cordl_internal_set_palmFacingUpDegreeAngleThreshold(float_t  value) ;

constexpr void __cordl_internal_set_palmFacingUserDegreeAngleThreshold(float_t  value) ;

constexpr void __cordl_internal_set_palmReferenceAxis(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowReferenceAxis  value) ;

constexpr void __cordl_internal_set_requirePalmFacingUp(bool  value) ;

constexpr void __cordl_internal_set_requirePalmFacingUser(bool  value) ;

constexpr void __cordl_internal_set_rightHandLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rightHandLocalRotation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_snapToGaze(bool  value) ;

constexpr void __cordl_internal_set_snapToGazeAngleThreshold(float_t  value) ;

/// @brief Method .ctor, addr 0xb444c94, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_palmFacingUpDotThreshold, addr 0xb444864, size 0x8, virtual false, abstract: false, final false
inline float_t get_palmFacingUpDotThreshold() ;

/// @brief Method get_palmFacingUserDotThreshold, addr 0xb44485c, size 0x8, virtual false, abstract: false, final false
inline float_t get_palmFacingUserDotThreshold() ;

/// @brief Method get_snapToGazeDotThreshold, addr 0xb44486c, size 0x8, virtual false, abstract: false, final false
inline float_t get_snapToGazeDotThreshold() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FollowPreset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FollowPreset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FollowPreset(FollowPreset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FollowPreset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FollowPreset(FollowPreset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11321};

/// [Header("Local Space Anchor Transform")]
/// [Tooltip("Local space anchor position for the right hand.")]
/// @brief Field rightHandLocalPosition, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightHandLocalPosition;

/// [Tooltip("Local space anchor position for the left hand.")]
/// @brief Field leftHandLocalPosition, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftHandLocalPosition;

/// [Tooltip("Local space anchor rotation for the right hand.")]
/// @brief Field rightHandLocalRotation, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightHandLocalRotation;

/// [Tooltip("Local space anchor rotation for the left hand.")]
/// @brief Field leftHandLocalRotation, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftHandLocalRotation;

/// [Header("Hand anchor angle constraints")]
/// [Tooltip("Reference axis equivalent used for comparisons with the user\'s gaze direction and the world up direction.")]
/// @brief Field palmReferenceAxis, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowReferenceAxis  ___palmReferenceAxis;

/// [Tooltip("Given that the default reference hand for menus is the left hand, it may be required to mirror the reference axis for the right hand.")]
/// @brief Field invertAxisForRightHand, offset: 0x44, size: 0x1, def value: None
 bool  ___invertAxisForRightHand;

/// [Tooltip("Whether or not check if the palm reference axis is facing the user.")]
/// @brief Field requirePalmFacingUser, offset: 0x45, size: 0x1, def value: None
 bool  ___requirePalmFacingUser;

/// [Tooltip("The angle threshold in degrees to check if the palm reference axis is facing the user.")]
/// @brief Field palmFacingUserDegreeAngleThreshold, offset: 0x48, size: 0x4, def value: None
 float_t  ___palmFacingUserDegreeAngleThreshold;

/// @brief Field m_PalmFacingUserDotThreshold, offset: 0x4c, size: 0x4, def value: None
 float_t  ___m_PalmFacingUserDotThreshold;

/// [Tooltip("Whether or not check if the palm reference axis is facing up.")]
/// @brief Field requirePalmFacingUp, offset: 0x50, size: 0x1, def value: None
 bool  ___requirePalmFacingUp;

/// [Tooltip("The angle threshold in degrees to check if the palm reference axis is facing up.")]
/// @brief Field palmFacingUpDegreeAngleThreshold, offset: 0x54, size: 0x4, def value: None
 float_t  ___palmFacingUpDegreeAngleThreshold;

/// @brief Field m_PalmFacingUpDotThreshold, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_PalmFacingUpDotThreshold;

/// [Header("Snap To gaze config")]
/// [Tooltip("Whether to snap the following element to the gaze direction.")]
/// @brief Field snapToGaze, offset: 0x5c, size: 0x1, def value: None
 bool  ___snapToGaze;

/// [Tooltip("The angle threshold in degrees to snap the following element to the gaze direction.")]
/// @brief Field snapToGazeAngleThreshold, offset: 0x60, size: 0x4, def value: None
 float_t  ___snapToGazeAngleThreshold;

/// @brief Field m_SnapToGazeDotThreshold, offset: 0x64, size: 0x4, def value: None
 float_t  ___m_SnapToGazeDotThreshold;

/// [Header("Hide delay config")]
/// [Tooltip("The amount of time in seconds to wait before hiding the following element after the hand is no longer tracked.")]
/// @brief Field hideDelaySeconds, offset: 0x68, size: 0x4, def value: None
 float_t  ___hideDelaySeconds;

/// [Header("Smoothing Config")]
/// [Tooltip("Whether to allow smoothing of the following element position and rotation.")]
/// @brief Field allowSmoothing, offset: 0x6c, size: 0x1, def value: None
 bool  ___allowSmoothing;

/// [Tooltip("The lower bound of smoothing to apply.")]
/// @brief Field followLowerSmoothingValue, offset: 0x70, size: 0x4, def value: None
 float_t  ___followLowerSmoothingValue;

/// [Tooltip("The upper bound of smoothing to apply.")]
/// @brief Field followUpperSmoothingValue, offset: 0x74, size: 0x4, def value: None
 float_t  ___followUpperSmoothingValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___rightHandLocalPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___leftHandLocalPosition) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___rightHandLocalRotation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___leftHandLocalRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___palmReferenceAxis) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___invertAxisForRightHand) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___requirePalmFacingUser) == 0x45, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___palmFacingUserDegreeAngleThreshold) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___m_PalmFacingUserDotThreshold) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___requirePalmFacingUp) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___palmFacingUpDegreeAngleThreshold) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___m_PalmFacingUpDotThreshold) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___snapToGaze) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___snapToGazeAngleThreshold) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___m_SnapToGazeDotThreshold) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___hideDelaySeconds) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___allowSmoothing) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___followLowerSmoothingValue) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset, ___followUpperSmoothingValue) == 0x74, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset) == 0x78, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI::BodyUI
