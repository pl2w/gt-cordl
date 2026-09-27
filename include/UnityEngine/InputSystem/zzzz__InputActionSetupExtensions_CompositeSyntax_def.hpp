#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionSetupExtensions_CompositeSyntax.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionSetupExtensions_CompositeSyntax)
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionSetupExtensions_CompositeSyntax;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax, "UnityEngine.InputSystem", "InputActionSetupExtensions/CompositeSyntax");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionSetupExtensions/CompositeSyntax
struct CORDL_TYPE InputActionSetupExtensions_CompositeSyntax {
public:
// Declarations
 __declspec(property(get=get_bindingIndex)) int32_t  bindingIndex;

/// @brief Method With, addr 0xaf2814c, size 0x228, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax With(::StringW  name, ::StringW  binding, ::StringW  groups, ::StringW  processors) ;

/// @brief Method .ctor, addr 0xaf24ed0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::InputActionMap*  map, ::UnityEngine::InputSystem::InputAction*  action, int32_t  compositeIndex) ;

/// @brief Method get_bindingIndex, addr 0xaf28120, size 0x2c, virtual false, abstract: false, final false
inline int32_t get_bindingIndex() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionSetupExtensions_CompositeSyntax() ;

// Ctor Parameters [CppParam { name: "m_Action", ty: "::UnityEngine::InputSystem::InputAction*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ActionMap", ty: "::UnityEngine::InputSystem::InputActionMap*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BindingIndexInMap", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputActionSetupExtensions_CompositeSyntax(::UnityEngine::InputSystem::InputAction*  m_Action, ::UnityEngine::InputSystem::InputActionMap*  m_ActionMap, int32_t  m_BindingIndexInMap) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13377};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Action, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputAction*  m_Action;

/// @brief Field m_ActionMap, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputActionMap*  m_ActionMap;

/// @brief Field m_BindingIndexInMap, offset: 0x10, size: 0x4, def value: None
 int32_t  m_BindingIndexInMap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax, m_Action) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax, m_ActionMap) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax, m_BindingIndexInMap) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
