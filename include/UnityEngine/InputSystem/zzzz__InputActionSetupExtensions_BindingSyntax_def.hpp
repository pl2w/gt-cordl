#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionSetupExtensions_BindingSyntax.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionSetupExtensions_BindingSyntax)
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionSetupExtensions_BindingSyntax;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionSetupExtensions_BindingSyntax);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionSetupExtensions_BindingSyntax, "UnityEngine.InputSystem", "InputActionSetupExtensions/BindingSyntax");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct CORDL_TYPE InputActionSetupExtensions_BindingSyntax {
public:
// Declarations
 __declspec(property(get=get_binding)) ::UnityEngine::InputSystem::InputBinding  binding;

 __declspec(property(get=get_bindingIndex)) int32_t  bindingIndex;

 __declspec(property(get=get_valid)) bool  valid;

/// @brief Method Erase, addr 0xaf27d70, size 0x1ac, virtual false, abstract: false, final false
inline void Erase() ;

/// @brief Method InsertPartBinding, addr 0xaf27f1c, size 0x1e4, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax InsertPartBinding(::StringW  partName, ::StringW  path) ;

/// @brief Method Iterate, addr 0xaf278a8, size 0xd8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax Iterate(bool  next) ;

/// @brief Method IterateCompositeBinding, addr 0xaf27c44, size 0xe8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax IterateCompositeBinding(bool  next, ::StringW  compositeName) ;

/// @brief Method IteratePartBinding, addr 0xaf27a58, size 0x110, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax IteratePartBinding(bool  next, ::StringW  partName) ;

/// @brief Method NextBinding, addr 0xaf27874, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax NextBinding() ;

/// @brief Method NextCompositeBinding, addr 0xaf27c0c, size 0x38, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax NextCompositeBinding(::StringW  compositeName) ;

/// @brief Method NextPartBinding, addr 0xaf279b4, size 0xa4, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax NextPartBinding(::StringW  partName) ;

/// @brief Method PreviousBinding, addr 0xaf27980, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax PreviousBinding() ;

/// @brief Method PreviousCompositeBinding, addr 0xaf27d2c, size 0x38, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax PreviousCompositeBinding(::StringW  compositeName) ;

/// @brief Method PreviousPartBinding, addr 0xaf27b68, size 0xa4, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax PreviousPartBinding(::StringW  partName) ;

/// @brief Method To, addr 0xaf27750, size 0x124, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax To(::UnityEngine::InputSystem::InputBinding  binding) ;

/// @brief Method Triggering, addr 0xaf275d0, size 0x180, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax Triggering(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method WithGroup, addr 0xaf26ba4, size 0x19c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax WithGroup(::StringW  group) ;

/// @brief Method WithGroups, addr 0xaf26d40, size 0x1c8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax WithGroups(::StringW  groups) ;

/// @brief Method WithInteraction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TInteraction>
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax WithInteraction() ;

/// @brief Method WithInteraction, addr 0xaf26f08, size 0x19c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax WithInteraction(::StringW  interaction) ;

/// @brief Method WithInteractions, addr 0xaf270a4, size 0x1c8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax WithInteractions(::StringW  interactions) ;

/// @brief Method WithName, addr 0xaf26a0c, size 0xcc, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax WithName(::StringW  name) ;

/// @brief Method WithPath, addr 0xaf26ad8, size 0xcc, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax WithPath(::StringW  path) ;

/// @brief Method WithProcessor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TProcessor>
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax WithProcessor() ;

/// @brief Method WithProcessor, addr 0xaf2726c, size 0x19c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax WithProcessor(::StringW  processor) ;

/// @brief Method WithProcessors, addr 0xaf27408, size 0x1c8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax WithProcessors(::StringW  processors) ;

/// @brief Method .ctor, addr 0xaf24810, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::InputActionMap*  map, int32_t  bindingIndexInMap, ::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method get_binding, addr 0xaf26964, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputBinding get_binding() ;

/// @brief Method get_bindingIndex, addr 0xaf2692c, size 0x38, virtual false, abstract: false, final false
inline int32_t get_bindingIndex() ;

/// @brief Method get_valid, addr 0xaf268c0, size 0x6c, virtual false, abstract: false, final false
inline bool get_valid() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionSetupExtensions_BindingSyntax() ;

// Ctor Parameters [CppParam { name: "m_ActionMap", ty: "::UnityEngine::InputSystem::InputActionMap*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Action", ty: "::UnityEngine::InputSystem::InputAction*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BindingIndexInMap", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputActionSetupExtensions_BindingSyntax(::UnityEngine::InputSystem::InputActionMap*  m_ActionMap, ::UnityEngine::InputSystem::InputAction*  m_Action, int32_t  m_BindingIndexInMap) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13376};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ActionMap, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputActionMap*  m_ActionMap;

/// @brief Field m_Action, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputAction*  m_Action;

/// @brief Field m_BindingIndexInMap, offset: 0x10, size: 0x4, def value: None
 int32_t  m_BindingIndexInMap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionSetupExtensions_BindingSyntax, m_ActionMap) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionSetupExtensions_BindingSyntax, m_Action) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionSetupExtensions_BindingSyntax, m_BindingIndexInMap) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionSetupExtensions_BindingSyntax) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
