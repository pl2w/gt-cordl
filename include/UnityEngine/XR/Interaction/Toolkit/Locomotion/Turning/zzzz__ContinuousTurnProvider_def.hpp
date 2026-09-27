#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Turning/ContinuousTurnProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ContinuousTurnProvider)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class XRInputValueReader_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRBodyYawRotation;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning {
class ContinuousTurnProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Turning", "ContinuousTurnProvider");
// [AddComponentMenu("XR/Locomotion/Continuous Turn Provider", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Turning.ContinuousTurnProvider.html")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Turning.ContinuousTurnProvider
class CORDL_TYPE ContinuousTurnProvider : public ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider {
public:
// Declarations
/// @brief Field <transformation>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformation_k__BackingField, put=__cordl_internal_set__transformation_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*  _transformation_k__BackingField;

 __declspec(property(get=get_enableTurnAround, put=set_enableTurnAround)) bool  enableTurnAround;

 __declspec(property(get=get_enableTurnLeftRight, put=set_enableTurnLeftRight)) bool  enableTurnLeftRight;

 __declspec(property(get=get_leftHandTurnInput, put=set_leftHandTurnInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  leftHandTurnInput;

/// @brief Field m_EnableTurnAround, offset 0x9d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableTurnAround, put=__cordl_internal_set_m_EnableTurnAround)) bool  m_EnableTurnAround;

/// @brief Field m_EnableTurnLeftRight, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableTurnLeftRight, put=__cordl_internal_set_m_EnableTurnLeftRight)) bool  m_EnableTurnLeftRight;

/// @brief Field m_IsTurningXROrigin, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsTurningXROrigin, put=__cordl_internal_set_m_IsTurningXROrigin)) bool  m_IsTurningXROrigin;

/// @brief Field m_LeftHandTurnInput, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LeftHandTurnInput, put=__cordl_internal_set_m_LeftHandTurnInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_LeftHandTurnInput;

/// @brief Field m_RightHandTurnInput, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RightHandTurnInput, put=__cordl_internal_set_m_RightHandTurnInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_RightHandTurnInput;

/// @brief Field m_TurnAroundActivated, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TurnAroundActivated, put=__cordl_internal_set_m_TurnAroundActivated)) bool  m_TurnAroundActivated;

/// @brief Field m_TurnSpeed, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TurnSpeed, put=__cordl_internal_set_m_TurnSpeed)) float_t  m_TurnSpeed;

 __declspec(property(get=get_rightHandTurnInput, put=set_rightHandTurnInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  rightHandTurnInput;

 __declspec(property(get=get_transformation, put=set_transformation)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*  transformation;

 __declspec(property(get=get_turnSpeed, put=set_turnSpeed)) float_t  turnSpeed;

/// @brief Method GetTurnAmount, addr 0xb44b5c4, size 0xe0, virtual true, abstract: false, final false
inline float_t GetTurnAmount(::UnityEngine::Vector2  input) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0xb44b358, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb44b328, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReadInput, addr 0xb44b440, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 ReadInput() ;

/// @brief Method TurnRig, addr 0xb44b4bc, size 0x108, virtual false, abstract: false, final false
inline void TurnRig(float_t  turnAmount) ;

/// @brief Method Update, addr 0xb44b388, size 0xb8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation* const& __cordl_internal_get__transformation_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*& __cordl_internal_get__transformation_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_EnableTurnAround() const;

constexpr bool& __cordl_internal_get_m_EnableTurnAround() ;

constexpr bool const& __cordl_internal_get_m_EnableTurnLeftRight() const;

constexpr bool& __cordl_internal_get_m_EnableTurnLeftRight() ;

constexpr bool const& __cordl_internal_get_m_IsTurningXROrigin() const;

constexpr bool& __cordl_internal_get_m_IsTurningXROrigin() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_LeftHandTurnInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_LeftHandTurnInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_RightHandTurnInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_RightHandTurnInput() ;

constexpr bool const& __cordl_internal_get_m_TurnAroundActivated() const;

constexpr bool& __cordl_internal_get_m_TurnAroundActivated() ;

constexpr float_t const& __cordl_internal_get_m_TurnSpeed() const;

constexpr float_t& __cordl_internal_get_m_TurnSpeed() ;

constexpr void __cordl_internal_set__transformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*  value) ;

constexpr void __cordl_internal_set_m_EnableTurnAround(bool  value) ;

constexpr void __cordl_internal_set_m_EnableTurnLeftRight(bool  value) ;

constexpr void __cordl_internal_set_m_IsTurningXROrigin(bool  value) ;

constexpr void __cordl_internal_set_m_LeftHandTurnInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_RightHandTurnInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_TurnAroundActivated(bool  value) ;

constexpr void __cordl_internal_set_m_TurnSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0xb44b6a4, size 0x160, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_enableTurnAround, addr 0xb44b240, size 0x8, virtual false, abstract: false, final false
inline bool get_enableTurnAround() ;

/// @brief Method get_enableTurnLeftRight, addr 0xb44b230, size 0x8, virtual false, abstract: false, final false
inline bool get_enableTurnLeftRight() ;

/// @brief Method get_leftHandTurnInput, addr 0xb44b250, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_leftHandTurnInput() ;

/// @brief Method get_rightHandTurnInput, addr 0xb44b2b4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_rightHandTurnInput() ;

/// [CompilerGenerated]
/// @brief Method get_transformation, addr 0xb44b318, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation* get_transformation() ;

/// @brief Method get_turnSpeed, addr 0xb44b220, size 0x8, virtual false, abstract: false, final false
inline float_t get_turnSpeed() ;

/// @brief Method set_enableTurnAround, addr 0xb44b248, size 0x8, virtual false, abstract: false, final false
inline void set_enableTurnAround(bool  value) ;

/// @brief Method set_enableTurnLeftRight, addr 0xb44b238, size 0x8, virtual false, abstract: false, final false
inline void set_enableTurnLeftRight(bool  value) ;

/// @brief Method set_leftHandTurnInput, addr 0xb44b258, size 0x5c, virtual false, abstract: false, final false
inline void set_leftHandTurnInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_rightHandTurnInput, addr 0xb44b2bc, size 0x5c, virtual false, abstract: false, final false
inline void set_rightHandTurnInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_transformation, addr 0xb44b320, size 0x8, virtual false, abstract: false, final false
inline void set_transformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*  value) ;

/// @brief Method set_turnSpeed, addr 0xb44b228, size 0x8, virtual false, abstract: false, final false
inline void set_turnSpeed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContinuousTurnProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContinuousTurnProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuousTurnProvider(ContinuousTurnProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuousTurnProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuousTurnProvider(ContinuousTurnProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11350};

/// [SerializeField]
/// [Tooltip("The number of degrees/second clockwise to rotate when turning clockwise.")]
/// @brief Field m_TurnSpeed, offset: 0x98, size: 0x4, def value: None
 float_t  ___m_TurnSpeed;

/// [SerializeField]
/// [Tooltip("Controls whether to enable left & right continuous turns.")]
/// @brief Field m_EnableTurnLeftRight, offset: 0x9c, size: 0x1, def value: None
 bool  ___m_EnableTurnLeftRight;

/// [SerializeField]
/// [Tooltip("Controls whether to enable 180\u{b0} snap turns on the South direction.")]
/// @brief Field m_EnableTurnAround, offset: 0x9d, size: 0x1, def value: None
 bool  ___m_EnableTurnAround;

/// [SerializeField]
/// [Tooltip("Reads input data from the left hand controller. Input Action must be a Value action type (Vector 2).")]
/// @brief Field m_LeftHandTurnInput, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_LeftHandTurnInput;

/// [SerializeField]
/// [Tooltip("Reads input data from the right hand controller. Input Action must be a Value action type (Vector 2).")]
/// @brief Field m_RightHandTurnInput, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_RightHandTurnInput;

/// [CompilerGenerated]
/// @brief Field <transformation>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*  ____transformation_k__BackingField;

/// @brief Field m_IsTurningXROrigin, offset: 0xb8, size: 0x1, def value: None
 bool  ___m_IsTurningXROrigin;

/// @brief Field m_TurnAroundActivated, offset: 0xb9, size: 0x1, def value: None
 bool  ___m_TurnAroundActivated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider, ___m_TurnSpeed) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider, ___m_EnableTurnLeftRight) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider, ___m_EnableTurnAround) == 0x9d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider, ___m_LeftHandTurnInput) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider, ___m_RightHandTurnInput) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider, ____transformation_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider, ___m_IsTurningXROrigin) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider, ___m_TurnAroundActivated) == 0xb9, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider) == 0xc0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning
