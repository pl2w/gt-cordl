#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/ActionBasedContinuousMoveProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ContinuousMoveProviderBase_def.hpp"
CORDL_MODULE_EXPORT(ActionBasedContinuousMoveProvider)
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class ActionBasedContinuousMoveProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousMoveProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousMoveProvider*, "UnityEngine.XR.Interaction.Toolkit", "ActionBasedContinuousMoveProvider");
// [AddComponentMenu("XR/Locomotion/Legacy/Continuous Move Provider (Action-based)", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider.html")]
// [Obsolete("ActionBasedContinuousMoveProvider has been deprecated in version 3.0.0. Use ContinuousMoveProvider instead.", false)]
// Dependencies UnityEngine.InputSystem.InputActionProperty, UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider
class CORDL_TYPE ActionBasedContinuousMoveProvider : public ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase {
public:
// Declarations
 __declspec(property(get=get_leftHandMoveAction, put=set_leftHandMoveAction)) ::UnityEngine::InputSystem::InputActionProperty  leftHandMoveAction;

/// @brief Field m_LeftHandMoveAction, offset 0xc8, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_LeftHandMoveAction, put=__cordl_internal_set_m_LeftHandMoveAction)) ::UnityEngine::InputSystem::InputActionProperty  m_LeftHandMoveAction;

/// @brief Field m_RightHandMoveAction, offset 0xe0, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_RightHandMoveAction, put=__cordl_internal_set_m_RightHandMoveAction)) ::UnityEngine::InputSystem::InputActionProperty  m_RightHandMoveAction;

 __declspec(property(get=get_rightHandMoveAction, put=set_rightHandMoveAction)) ::UnityEngine::InputSystem::InputActionProperty  rightHandMoveAction;

static inline ::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousMoveProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0xb41660c, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4165bc, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReadInput, addr 0xb41665c, size 0xf8, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 ReadInput() ;

/// @brief Method SetInputActionProperty, addr 0xb416484, size 0xf4, virtual false, abstract: false, final false
inline void SetInputActionProperty(::by_ref<::UnityEngine::InputSystem::InputActionProperty>  property, ::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_LeftHandMoveAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_LeftHandMoveAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_RightHandMoveAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_RightHandMoveAction() ;

constexpr void __cordl_internal_set_m_LeftHandMoveAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_RightHandMoveAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method .ctor, addr 0xb416754, size 0x15c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_leftHandMoveAction, addr 0xb416440, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_leftHandMoveAction() ;

/// @brief Method get_rightHandMoveAction, addr 0xb416578, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_rightHandMoveAction() ;

/// @brief Method set_leftHandMoveAction, addr 0xb416454, size 0x30, virtual false, abstract: false, final false
inline void set_leftHandMoveAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_rightHandMoveAction, addr 0xb41658c, size 0x30, virtual false, abstract: false, final false
inline void set_rightHandMoveAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActionBasedContinuousMoveProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActionBasedContinuousMoveProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActionBasedContinuousMoveProvider(ActionBasedContinuousMoveProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActionBasedContinuousMoveProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActionBasedContinuousMoveProvider(ActionBasedContinuousMoveProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11111};

/// [SerializeField]
/// [Tooltip("The Input System Action that will be used to read Move data from the left hand controller. Must be a Value Vector2 Control.")]
/// @brief Field m_LeftHandMoveAction, offset: 0xc8, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_LeftHandMoveAction;

/// [SerializeField]
/// [Tooltip("The Input System Action that will be used to read Move data from the right hand controller. Must be a Value Vector2 Control.")]
/// @brief Field m_RightHandMoveAction, offset: 0xe0, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_RightHandMoveAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousMoveProvider, ___m_LeftHandMoveAction) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousMoveProvider, ___m_RightHandMoveAction) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousMoveProvider) == 0xf8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
