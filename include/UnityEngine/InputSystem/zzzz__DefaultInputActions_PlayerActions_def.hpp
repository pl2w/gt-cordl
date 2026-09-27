#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/DefaultInputActions_PlayerActions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(DefaultInputActions_PlayerActions)
namespace UnityEngine::InputSystem {
class DefaultInputActions_IPlayerActions;
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
struct DefaultInputActions_PlayerActions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DefaultInputActions_PlayerActions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DefaultInputActions_PlayerActions, "UnityEngine.InputSystem", "DefaultInputActions/PlayerActions");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.DefaultInputActions/PlayerActions
struct CORDL_TYPE DefaultInputActions_PlayerActions {
public:
// Declarations
 __declspec(property(get=get_Fire)) ::UnityEngine::InputSystem::InputAction*  Fire;

 __declspec(property(get=get_Look)) ::UnityEngine::InputSystem::InputAction*  Look;

 __declspec(property(get=get_Move)) ::UnityEngine::InputSystem::InputAction*  Move;

 __declspec(property(get=get_enabled)) bool  enabled;

/// @brief Method Disable, addr 0xafb90f4, size 0x24, virtual false, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0xafb90d0, size 0x24, virtual false, abstract: false, final false
inline void Enable() ;

/// @brief Method Get, addr 0xafb90b8, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionMap* Get() ;

/// @brief Method SetCallbacks, addr 0xafb9150, size 0xadc, virtual false, abstract: false, final false
inline void SetCallbacks(::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions*  instance) ;

/// @brief Method .ctor, addr 0xafb9068, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::DefaultInputActions*  wrapper) ;

/// @brief Method get_Fire, addr 0xafb90a0, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_Fire() ;

/// @brief Method get_Look, addr 0xafb9088, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_Look() ;

/// @brief Method get_Move, addr 0xafb9070, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_Move() ;

/// @brief Method get_enabled, addr 0xafb9118, size 0x24, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method op_Implicit, addr 0xafb913c, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputActionMap* op_Implicit___UnityEngine__InputSystem__InputActionMap_(::GlobalNamespace::DefaultInputActions_PlayerActions  set) ;

// Ctor Parameters []
// @brief default ctor
constexpr DefaultInputActions_PlayerActions() ;

// Ctor Parameters [CppParam { name: "m_Wrapper", ty: "::UnityEngine::InputSystem::DefaultInputActions*", modifiers: "", def_value: None, comment: None }]
constexpr DefaultInputActions_PlayerActions(::UnityEngine::InputSystem::DefaultInputActions*  m_Wrapper) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13521};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Wrapper, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::DefaultInputActions*  m_Wrapper;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DefaultInputActions_PlayerActions, m_Wrapper) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DefaultInputActions_PlayerActions) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
