#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/DefaultInputActions_UIActions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(DefaultInputActions_UIActions)
namespace UnityEngine::InputSystem {
class DefaultInputActions_IUIActions;
}
namespace UnityEngine::InputSystem {
class DefaultInputActions;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
// Forward declare root types
namespace GlobalNamespace {
struct DefaultInputActions_UIActions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DefaultInputActions_UIActions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DefaultInputActions_UIActions, "UnityEngine.InputSystem", "DefaultInputActions/UIActions");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.DefaultInputActions/UIActions
struct CORDL_TYPE DefaultInputActions_UIActions {
public:
// Declarations
 __declspec(property(get=get_Cancel)) ::UnityEngine::InputSystem::InputAction*  Cancel;

 __declspec(property(get=get_Click)) ::UnityEngine::InputSystem::InputAction*  Click;

 __declspec(property(get=get_MiddleClick)) ::UnityEngine::InputSystem::InputAction*  MiddleClick;

 __declspec(property(get=get_Navigate)) ::UnityEngine::InputSystem::InputAction*  Navigate;

 __declspec(property(get=get_Point)) ::UnityEngine::InputSystem::InputAction*  Point;

 __declspec(property(get=get_RightClick)) ::UnityEngine::InputSystem::InputAction*  RightClick;

 __declspec(property(get=get_ScrollWheel)) ::UnityEngine::InputSystem::InputAction*  ScrollWheel;

 __declspec(property(get=get_Submit)) ::UnityEngine::InputSystem::InputAction*  Submit;

 __declspec(property(get=get_TrackedDeviceOrientation)) ::UnityEngine::InputSystem::InputAction*  TrackedDeviceOrientation;

 __declspec(property(get=get_TrackedDevicePosition)) ::UnityEngine::InputSystem::InputAction*  TrackedDevicePosition;

 __declspec(property(get=get_enabled)) bool  enabled;

/// @brief Method Disable, addr 0xafb9d60, size 0x24, virtual false, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0xafb9d3c, size 0x24, virtual false, abstract: false, final false
inline void Enable() ;

/// @brief Method Get, addr 0xafb9d24, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionMap* Get() ;

/// @brief Method SetCallbacks, addr 0xafb9dbc, size 0x2324, virtual false, abstract: false, final false
inline void SetCallbacks(::UnityEngine::InputSystem::DefaultInputActions_IUIActions*  instance) ;

/// @brief Method .ctor, addr 0xafb9c2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::DefaultInputActions*  wrapper) ;

/// @brief Method get_Cancel, addr 0xafb9c64, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_Cancel() ;

/// @brief Method get_Click, addr 0xafb9c94, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_Click() ;

/// @brief Method get_MiddleClick, addr 0xafb9cc4, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_MiddleClick() ;

/// @brief Method get_Navigate, addr 0xafb9c34, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_Navigate() ;

/// @brief Method get_Point, addr 0xafb9c7c, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_Point() ;

/// @brief Method get_RightClick, addr 0xafb9cdc, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_RightClick() ;

/// @brief Method get_ScrollWheel, addr 0xafb9cac, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_ScrollWheel() ;

/// @brief Method get_Submit, addr 0xafb9c4c, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_Submit() ;

/// @brief Method get_TrackedDeviceOrientation, addr 0xafb9d0c, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_TrackedDeviceOrientation() ;

/// @brief Method get_TrackedDevicePosition, addr 0xafb9cf4, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_TrackedDevicePosition() ;

/// @brief Method get_enabled, addr 0xafb9d84, size 0x24, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method op_Implicit, addr 0xafb9da8, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputActionMap* op_Implicit___UnityEngine__InputSystem__InputActionMap_(::GlobalNamespace::DefaultInputActions_UIActions  set) ;

// Ctor Parameters []
// @brief default ctor
constexpr DefaultInputActions_UIActions() ;

// Ctor Parameters [CppParam { name: "m_Wrapper", ty: "::UnityEngine::InputSystem::DefaultInputActions*", modifiers: "", def_value: None, comment: None }]
constexpr DefaultInputActions_UIActions(::UnityEngine::InputSystem::DefaultInputActions*  m_Wrapper) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13522};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Wrapper, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::DefaultInputActions*  m_Wrapper;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DefaultInputActions_UIActions, m_Wrapper) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DefaultInputActions_UIActions) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
