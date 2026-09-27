#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/ActionBasedSnapTurnProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SnapTurnProviderBase_def.hpp"
CORDL_MODULE_EXPORT(ActionBasedSnapTurnProvider)
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class ActionBasedSnapTurnProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::ActionBasedSnapTurnProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::ActionBasedSnapTurnProvider*, "UnityEngine.XR.Interaction.Toolkit", "ActionBasedSnapTurnProvider");
// [AddComponentMenu("XR/Locomotion/Legacy/Snap Turn Provider (Action-based)", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.ActionBasedSnapTurnProvider.html")]
// [Obsolete("ActionBasedSnapTurnProvider has been deprecated in version 3.0.0. Use SnapTurnProvider instead.")]
// Dependencies UnityEngine.InputSystem.InputActionProperty, UnityEngine.XR.Interaction.Toolkit.SnapTurnProviderBase
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.ActionBasedSnapTurnProvider
class CORDL_TYPE ActionBasedSnapTurnProvider : public ::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase {
public:
// Declarations
 __declspec(property(get=get_leftHandSnapTurnAction, put=set_leftHandSnapTurnAction)) ::UnityEngine::InputSystem::InputActionProperty  leftHandSnapTurnAction;

/// @brief Field m_LeftHandSnapTurnAction, offset 0xb8, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_LeftHandSnapTurnAction, put=__cordl_internal_set_m_LeftHandSnapTurnAction)) ::UnityEngine::InputSystem::InputActionProperty  m_LeftHandSnapTurnAction;

/// @brief Field m_RightHandSnapTurnAction, offset 0xd0, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_RightHandSnapTurnAction, put=__cordl_internal_set_m_RightHandSnapTurnAction)) ::UnityEngine::InputSystem::InputActionProperty  m_RightHandSnapTurnAction;

 __declspec(property(get=get_rightHandSnapTurnAction, put=set_rightHandSnapTurnAction)) ::UnityEngine::InputSystem::InputActionProperty  rightHandSnapTurnAction;

static inline ::UnityEngine::XR::Interaction::Toolkit::ActionBasedSnapTurnProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0xb416f5c, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb416f0c, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReadInput, addr 0xb416fac, size 0xf8, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 ReadInput() ;

/// @brief Method SetInputActionProperty, addr 0xb416dd4, size 0xf4, virtual false, abstract: false, final false
inline void SetInputActionProperty(::by_ref<::UnityEngine::InputSystem::InputActionProperty>  property, ::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_LeftHandSnapTurnAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_LeftHandSnapTurnAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_RightHandSnapTurnAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_RightHandSnapTurnAction() ;

constexpr void __cordl_internal_set_m_LeftHandSnapTurnAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_RightHandSnapTurnAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method .ctor, addr 0xb4170a4, size 0x160, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_leftHandSnapTurnAction, addr 0xb416d90, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_leftHandSnapTurnAction() ;

/// @brief Method get_rightHandSnapTurnAction, addr 0xb416ec8, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_rightHandSnapTurnAction() ;

/// @brief Method set_leftHandSnapTurnAction, addr 0xb416da4, size 0x30, virtual false, abstract: false, final false
inline void set_leftHandSnapTurnAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_rightHandSnapTurnAction, addr 0xb416edc, size 0x30, virtual false, abstract: false, final false
inline void set_rightHandSnapTurnAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActionBasedSnapTurnProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActionBasedSnapTurnProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActionBasedSnapTurnProvider(ActionBasedSnapTurnProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActionBasedSnapTurnProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActionBasedSnapTurnProvider(ActionBasedSnapTurnProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11113};

/// [SerializeField]
/// [Tooltip("The Input System Action that will be used to read Snap Turn data from the left hand controller. Must be a Value Vector2 Control.")]
/// @brief Field m_LeftHandSnapTurnAction, offset: 0xb8, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_LeftHandSnapTurnAction;

/// [SerializeField]
/// [Tooltip("The Input System Action that will be used to read Snap Turn data from the right hand controller. Must be a Value Vector2 Control.")]
/// @brief Field m_RightHandSnapTurnAction, offset: 0xd0, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_RightHandSnapTurnAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedSnapTurnProvider, ___m_LeftHandSnapTurnAction) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedSnapTurnProvider, ___m_RightHandSnapTurnAction) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedSnapTurnProvider) == 0xe8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
