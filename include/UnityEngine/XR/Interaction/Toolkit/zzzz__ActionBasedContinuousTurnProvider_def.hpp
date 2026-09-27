#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/ActionBasedContinuousTurnProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ContinuousTurnProviderBase_def.hpp"
CORDL_MODULE_EXPORT(ActionBasedContinuousTurnProvider)
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class ActionBasedContinuousTurnProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousTurnProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousTurnProvider*, "UnityEngine.XR.Interaction.Toolkit", "ActionBasedContinuousTurnProvider");
// [AddComponentMenu("XR/Locomotion/Legacy/Continuous Turn Provider (Action-based)", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousTurnProvider.html")]
// [Obsolete("ActionBasedContinuousTurnProvider has been deprecated in version 3.0.0. Use ContinuousTurnProvider instead.")]
// Dependencies UnityEngine.InputSystem.InputActionProperty, UnityEngine.XR.Interaction.Toolkit.ContinuousTurnProviderBase
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousTurnProvider
class CORDL_TYPE ActionBasedContinuousTurnProvider : public ::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase {
public:
// Declarations
 __declspec(property(get=get_leftHandTurnAction, put=set_leftHandTurnAction)) ::UnityEngine::InputSystem::InputActionProperty  leftHandTurnAction;

/// @brief Field m_LeftHandTurnAction, offset 0xa0, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_LeftHandTurnAction, put=__cordl_internal_set_m_LeftHandTurnAction)) ::UnityEngine::InputSystem::InputActionProperty  m_LeftHandTurnAction;

/// @brief Field m_RightHandTurnAction, offset 0xb8, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_RightHandTurnAction, put=__cordl_internal_set_m_RightHandTurnAction)) ::UnityEngine::InputSystem::InputActionProperty  m_RightHandTurnAction;

 __declspec(property(get=get_rightHandTurnAction, put=set_rightHandTurnAction)) ::UnityEngine::InputSystem::InputActionProperty  rightHandTurnAction;

static inline ::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousTurnProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0xb416ae8, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb416a98, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReadInput, addr 0xb416b38, size 0xf8, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 ReadInput() ;

/// @brief Method SetInputActionProperty, addr 0xb416960, size 0xf4, virtual false, abstract: false, final false
inline void SetInputActionProperty(::by_ref<::UnityEngine::InputSystem::InputActionProperty>  property, ::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_LeftHandTurnAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_LeftHandTurnAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_RightHandTurnAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_RightHandTurnAction() ;

constexpr void __cordl_internal_set_m_LeftHandTurnAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_RightHandTurnAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method .ctor, addr 0xb416c30, size 0x160, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_leftHandTurnAction, addr 0xb41691c, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_leftHandTurnAction() ;

/// @brief Method get_rightHandTurnAction, addr 0xb416a54, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_rightHandTurnAction() ;

/// @brief Method set_leftHandTurnAction, addr 0xb416930, size 0x30, virtual false, abstract: false, final false
inline void set_leftHandTurnAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_rightHandTurnAction, addr 0xb416a68, size 0x30, virtual false, abstract: false, final false
inline void set_rightHandTurnAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActionBasedContinuousTurnProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActionBasedContinuousTurnProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActionBasedContinuousTurnProvider(ActionBasedContinuousTurnProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActionBasedContinuousTurnProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActionBasedContinuousTurnProvider(ActionBasedContinuousTurnProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11112};

/// [SerializeField]
/// [Tooltip("The Input System Action that will be used to read Turn data from the left hand controller. Must be a Value Vector2 Control.")]
/// @brief Field m_LeftHandTurnAction, offset: 0xa0, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_LeftHandTurnAction;

/// [SerializeField]
/// [Tooltip("The Input System Action that will be used to read Turn data from the right hand controller. Must be a Value Vector2 Control.")]
/// @brief Field m_RightHandTurnAction, offset: 0xb8, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_RightHandTurnAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousTurnProvider, ___m_LeftHandTurnAction) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousTurnProvider, ___m_RightHandTurnAction) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousTurnProvider) == 0xd0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
