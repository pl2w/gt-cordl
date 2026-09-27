#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Turning/SnapTurnProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SnapTurnProvider)
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
class SnapTurnProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::SnapTurnProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::SnapTurnProvider*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Turning", "SnapTurnProvider");
// [AddComponentMenu("XR/Locomotion/Snap Turn Provider", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Turning.SnapTurnProvider.html")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Turning.SnapTurnProvider
class CORDL_TYPE SnapTurnProvider : public ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider {
public:
// Declarations
/// @brief Field <transformation>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformation_k__BackingField, put=__cordl_internal_set__transformation_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*  _transformation_k__BackingField;

 __declspec(property(get=get_canStartMoving)) bool  canStartMoving;

 __declspec(property(get=get_debounceTime, put=set_debounceTime)) float_t  debounceTime;

 __declspec(property(get=get_delayTime, put=set_delayTime)) float_t  delayTime;

 __declspec(property(get=get_enableTurnAround, put=set_enableTurnAround)) bool  enableTurnAround;

 __declspec(property(get=get_enableTurnLeftRight, put=set_enableTurnLeftRight)) bool  enableTurnLeftRight;

 __declspec(property(get=get_leftHandTurnInput, put=set_leftHandTurnInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  leftHandTurnInput;

/// @brief Field m_CurrentTurnAmount, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentTurnAmount, put=__cordl_internal_set_m_CurrentTurnAmount)) float_t  m_CurrentTurnAmount;

/// @brief Field m_DebounceTime, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DebounceTime, put=__cordl_internal_set_m_DebounceTime)) float_t  m_DebounceTime;

/// @brief Field m_DelayStartTime, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DelayStartTime, put=__cordl_internal_set_m_DelayStartTime)) float_t  m_DelayStartTime;

/// @brief Field m_DelayTime, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DelayTime, put=__cordl_internal_set_m_DelayTime)) float_t  m_DelayTime;

/// @brief Field m_EnableTurnAround, offset 0xa1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableTurnAround, put=__cordl_internal_set_m_EnableTurnAround)) bool  m_EnableTurnAround;

/// @brief Field m_EnableTurnLeftRight, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableTurnLeftRight, put=__cordl_internal_set_m_EnableTurnLeftRight)) bool  m_EnableTurnLeftRight;

/// @brief Field m_LeftHandTurnInput, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LeftHandTurnInput, put=__cordl_internal_set_m_LeftHandTurnInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_LeftHandTurnInput;

/// @brief Field m_RightHandTurnInput, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RightHandTurnInput, put=__cordl_internal_set_m_RightHandTurnInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_RightHandTurnInput;

/// @brief Field m_TimeStarted, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TimeStarted, put=__cordl_internal_set_m_TimeStarted)) float_t  m_TimeStarted;

/// @brief Field m_TurnAmount, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TurnAmount, put=__cordl_internal_set_m_TurnAmount)) float_t  m_TurnAmount;

/// @brief Field m_TurnAroundActivated, offset 0xcc, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TurnAroundActivated, put=__cordl_internal_set_m_TurnAroundActivated)) bool  m_TurnAroundActivated;

 __declspec(property(get=get_rightHandTurnInput, put=set_rightHandTurnInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  rightHandTurnInput;

 __declspec(property(get=get_transformation, put=set_transformation)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*  transformation;

 __declspec(property(get=get_turnAmount, put=set_turnAmount)) float_t  turnAmount;

/// @brief Method GetTurnAmount, addr 0xb44bd80, size 0xf8, virtual true, abstract: false, final false
inline float_t GetTurnAmount(::UnityEngine::Vector2  input) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::SnapTurnProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0xb44b99c, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb44b96c, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReadInput, addr 0xb44bc10, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 ReadInput() ;

/// @brief Method StartTurn, addr 0xb44bc8c, size 0xf4, virtual false, abstract: false, final false
inline void StartTurn(float_t  amount) ;

/// @brief Method Update, addr 0xb44b9cc, size 0x244, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation* const& __cordl_internal_get__transformation_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*& __cordl_internal_get__transformation_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_m_CurrentTurnAmount() const;

constexpr float_t& __cordl_internal_get_m_CurrentTurnAmount() ;

constexpr float_t const& __cordl_internal_get_m_DebounceTime() const;

constexpr float_t& __cordl_internal_get_m_DebounceTime() ;

constexpr float_t const& __cordl_internal_get_m_DelayStartTime() const;

constexpr float_t& __cordl_internal_get_m_DelayStartTime() ;

constexpr float_t const& __cordl_internal_get_m_DelayTime() const;

constexpr float_t& __cordl_internal_get_m_DelayTime() ;

constexpr bool const& __cordl_internal_get_m_EnableTurnAround() const;

constexpr bool& __cordl_internal_get_m_EnableTurnAround() ;

constexpr bool const& __cordl_internal_get_m_EnableTurnLeftRight() const;

constexpr bool& __cordl_internal_get_m_EnableTurnLeftRight() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_LeftHandTurnInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_LeftHandTurnInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_RightHandTurnInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_RightHandTurnInput() ;

constexpr float_t const& __cordl_internal_get_m_TimeStarted() const;

constexpr float_t& __cordl_internal_get_m_TimeStarted() ;

constexpr float_t const& __cordl_internal_get_m_TurnAmount() const;

constexpr float_t& __cordl_internal_get_m_TurnAmount() ;

constexpr bool const& __cordl_internal_get_m_TurnAroundActivated() const;

constexpr bool& __cordl_internal_get_m_TurnAroundActivated() ;

constexpr void __cordl_internal_set__transformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*  value) ;

constexpr void __cordl_internal_set_m_CurrentTurnAmount(float_t  value) ;

constexpr void __cordl_internal_set_m_DebounceTime(float_t  value) ;

constexpr void __cordl_internal_set_m_DelayStartTime(float_t  value) ;

constexpr void __cordl_internal_set_m_DelayTime(float_t  value) ;

constexpr void __cordl_internal_set_m_EnableTurnAround(bool  value) ;

constexpr void __cordl_internal_set_m_EnableTurnLeftRight(bool  value) ;

constexpr void __cordl_internal_set_m_LeftHandTurnInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_RightHandTurnInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_TimeStarted(float_t  value) ;

constexpr void __cordl_internal_set_m_TurnAmount(float_t  value) ;

constexpr void __cordl_internal_set_m_TurnAroundActivated(bool  value) ;

/// @brief Method .ctor, addr 0xb44be78, size 0x164, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_canStartMoving, addr 0xb44b854, size 0x40, virtual true, abstract: false, final false
inline bool get_canStartMoving() ;

/// @brief Method get_debounceTime, addr 0xb44b814, size 0x8, virtual false, abstract: false, final false
inline float_t get_debounceTime() ;

/// @brief Method get_delayTime, addr 0xb44b844, size 0x8, virtual false, abstract: false, final false
inline float_t get_delayTime() ;

/// @brief Method get_enableTurnAround, addr 0xb44b834, size 0x8, virtual false, abstract: false, final false
inline bool get_enableTurnAround() ;

/// @brief Method get_enableTurnLeftRight, addr 0xb44b824, size 0x8, virtual false, abstract: false, final false
inline bool get_enableTurnLeftRight() ;

/// @brief Method get_leftHandTurnInput, addr 0xb44b8a4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_leftHandTurnInput() ;

/// @brief Method get_rightHandTurnInput, addr 0xb44b908, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_rightHandTurnInput() ;

/// [CompilerGenerated]
/// @brief Method get_transformation, addr 0xb44b894, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation* get_transformation() ;

/// @brief Method get_turnAmount, addr 0xb44b804, size 0x8, virtual false, abstract: false, final false
inline float_t get_turnAmount() ;

/// @brief Method set_debounceTime, addr 0xb44b81c, size 0x8, virtual false, abstract: false, final false
inline void set_debounceTime(float_t  value) ;

/// @brief Method set_delayTime, addr 0xb44b84c, size 0x8, virtual false, abstract: false, final false
inline void set_delayTime(float_t  value) ;

/// @brief Method set_enableTurnAround, addr 0xb44b83c, size 0x8, virtual false, abstract: false, final false
inline void set_enableTurnAround(bool  value) ;

/// @brief Method set_enableTurnLeftRight, addr 0xb44b82c, size 0x8, virtual false, abstract: false, final false
inline void set_enableTurnLeftRight(bool  value) ;

/// @brief Method set_leftHandTurnInput, addr 0xb44b8ac, size 0x5c, virtual false, abstract: false, final false
inline void set_leftHandTurnInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_rightHandTurnInput, addr 0xb44b910, size 0x5c, virtual false, abstract: false, final false
inline void set_rightHandTurnInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_transformation, addr 0xb44b89c, size 0x8, virtual false, abstract: false, final false
inline void set_transformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*  value) ;

/// @brief Method set_turnAmount, addr 0xb44b80c, size 0x8, virtual false, abstract: false, final false
inline void set_turnAmount(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnapTurnProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnapTurnProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SnapTurnProvider(SnapTurnProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnapTurnProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnapTurnProvider(SnapTurnProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11351};

/// [SerializeField]
/// [Tooltip("The number of degrees clockwise to rotate when snap turning clockwise.")]
/// @brief Field m_TurnAmount, offset: 0x98, size: 0x4, def value: None
 float_t  ___m_TurnAmount;

/// [SerializeField]
/// [Tooltip("The amount of time that the system will wait before starting another snap turn.")]
/// @brief Field m_DebounceTime, offset: 0x9c, size: 0x4, def value: None
 float_t  ___m_DebounceTime;

/// [SerializeField]
/// [Tooltip("Controls whether to enable left & right snap turns.")]
/// @brief Field m_EnableTurnLeftRight, offset: 0xa0, size: 0x1, def value: None
 bool  ___m_EnableTurnLeftRight;

/// [SerializeField]
/// [Tooltip("Controls whether to enable 180\u{b0} snap turns.")]
/// @brief Field m_EnableTurnAround, offset: 0xa1, size: 0x1, def value: None
 bool  ___m_EnableTurnAround;

/// [SerializeField]
/// [Tooltip("The time (in seconds) to delay the first turn after receiving initial input for the turn.")]
/// @brief Field m_DelayTime, offset: 0xa4, size: 0x4, def value: None
 float_t  ___m_DelayTime;

/// [CompilerGenerated]
/// @brief Field <transformation>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*  ____transformation_k__BackingField;

/// [SerializeField]
/// [Tooltip("Reads input data from the left hand controller. Input Action must be a Value action type (Vector 2).")]
/// @brief Field m_LeftHandTurnInput, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_LeftHandTurnInput;

/// [SerializeField]
/// [Tooltip("Reads input data from the right hand controller. Input Action must be a Value action type (Vector 2).")]
/// @brief Field m_RightHandTurnInput, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_RightHandTurnInput;

/// @brief Field m_CurrentTurnAmount, offset: 0xc0, size: 0x4, def value: None
 float_t  ___m_CurrentTurnAmount;

/// @brief Field m_TimeStarted, offset: 0xc4, size: 0x4, def value: None
 float_t  ___m_TimeStarted;

/// @brief Field m_DelayStartTime, offset: 0xc8, size: 0x4, def value: None
 float_t  ___m_DelayStartTime;

/// @brief Field m_TurnAroundActivated, offset: 0xcc, size: 0x1, def value: None
 bool  ___m_TurnAroundActivated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::SnapTurnProvider, ___m_TurnAmount) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::SnapTurnProvider, ___m_DebounceTime) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::SnapTurnProvider, ___m_EnableTurnLeftRight) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::SnapTurnProvider, ___m_EnableTurnAround) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::SnapTurnProvider, ___m_DelayTime) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::SnapTurnProvider, ____transformation_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::SnapTurnProvider, ___m_LeftHandTurnInput) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::SnapTurnProvider, ___m_RightHandTurnInput) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::SnapTurnProvider, ___m_CurrentTurnAmount) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::SnapTurnProvider, ___m_TimeStarted) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::SnapTurnProvider, ___m_DelayStartTime) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::SnapTurnProvider, ___m_TurnAroundActivated) == 0xcc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::SnapTurnProvider) == 0xd0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning
