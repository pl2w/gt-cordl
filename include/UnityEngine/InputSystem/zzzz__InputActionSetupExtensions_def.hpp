#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionSetupExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionSetupExtensions)
namespace GlobalNamespace {
struct InputActionSetupExtensions_BindingSyntax;
}
namespace GlobalNamespace {
struct InputActionSetupExtensions_CompositeSyntax;
}
namespace GlobalNamespace {
struct InputActionSetupExtensions_ControlSchemeSyntax;
}
namespace System {
struct Guid;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
class InputActionSetupExtensions___c__DisplayClass5_0;
}
namespace UnityEngine::InputSystem {
struct InputActionType;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputActionSetupExtensions;
}
namespace UnityEngine::InputSystem {
class InputActionSetupExtensions___c__DisplayClass5_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::InputActionSetupExtensions*);
MARK_REF_T(::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionSetupExtensions*, "UnityEngine.InputSystem", "InputActionSetupExtensions");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0*, "UnityEngine.InputSystem", "InputActionSetupExtensions/<>c__DisplayClass5_0");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionSetupExtensions
class CORDL_TYPE InputActionSetupExtensions : public ::System::Object {
public:
// Declarations
using BindingSyntax = ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax;

using CompositeSyntax = ::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax;

using ControlSchemeSyntax = ::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax;

using __c__DisplayClass5_0 = ::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0;

/// [Extension]
/// @brief Method AddAction, addr 0xaf23c58, size 0x370, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputAction* AddAction(::UnityEngine::InputSystem::InputActionMap*  map, ::StringW  name, ::UnityEngine::InputSystem::InputActionType  type, ::StringW  binding, ::StringW  interactions, ::StringW  processors, ::StringW  groups, ::StringW  expectedControlLayout) ;

/// [Extension]
/// @brief Method AddActionMap, addr 0xaf235a8, size 0x1c0, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputActionMap* AddActionMap(::UnityEngine::InputSystem::InputActionAsset*  asset, ::StringW  name) ;

/// [Extension]
/// @brief Method AddActionMap, addr 0xaf23768, size 0x268, virtual false, abstract: false, final false
static inline void AddActionMap(::UnityEngine::InputSystem::InputActionAsset*  asset, ::UnityEngine::InputSystem::InputActionMap*  map) ;

/// [Extension]
/// @brief Method AddBinding, addr 0xaf2452c, size 0xf0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax AddBinding(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputBinding  binding) ;

/// [Extension]
/// @brief Method AddBinding, addr 0xaf2461c, size 0xa4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax AddBinding(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputControl*  control) ;

/// [Extension]
/// @brief Method AddBinding, addr 0xaf23fc8, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax AddBinding(::UnityEngine::InputSystem::InputAction*  action, ::StringW  path, ::StringW  interactions, ::StringW  processors, ::StringW  groups) ;

/// [Extension]
/// @brief Method AddBinding, addr 0xaf24998, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::UnityEngine::InputSystem::InputBinding  binding) ;

/// [Extension]
/// @brief Method AddBinding, addr 0xaf24bd4, size 0xf4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::StringW  path, ::System::Guid  action, ::StringW  interactions, ::StringW  groups) ;

/// [Extension]
/// @brief Method AddBinding, addr 0xaf24ab0, size 0x124, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::StringW  path, ::UnityEngine::InputSystem::InputAction*  action, ::StringW  interactions, ::StringW  groups) ;

/// [Extension]
/// @brief Method AddBinding, addr 0xaf24848, size 0x150, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::StringW  path, ::StringW  interactions, ::StringW  groups, ::StringW  action, ::StringW  processors) ;

/// @brief Method AddBindingInternal, addr 0xaf246c0, size 0x150, virtual false, abstract: false, final false
static inline int32_t AddBindingInternal(::UnityEngine::InputSystem::InputActionMap*  map, ::UnityEngine::InputSystem::InputBinding  binding, int32_t  bindingIndex) ;

/// [Extension]
/// @brief Method AddCompositeBinding, addr 0xaf24cc8, size 0x1e8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax AddCompositeBinding(::UnityEngine::InputSystem::InputAction*  action, ::StringW  composite, ::StringW  interactions, ::StringW  processors) ;

/// [Extension]
/// @brief Method AddControlScheme, addr 0xaf25e14, size 0x17c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax AddControlScheme(::UnityEngine::InputSystem::InputActionAsset*  asset, ::StringW  name) ;

/// [Extension]
/// @brief Method AddControlScheme, addr 0xaf25b7c, size 0x298, virtual false, abstract: false, final false
static inline void AddControlScheme(::UnityEngine::InputSystem::InputActionAsset*  asset, ::UnityEngine::InputSystem::InputControlScheme  controlScheme) ;

/// [Extension]
/// @brief Method ChangeBinding, addr 0xaf24f54, size 0xb4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputAction*  action, int32_t  index) ;

/// [Extension]
/// @brief Method ChangeBinding, addr 0xaf2507c, size 0x17c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputBinding  match) ;

/// [Extension]
/// @brief Method ChangeBinding, addr 0xaf25008, size 0x74, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputAction*  action, ::StringW  name) ;

/// [Extension]
/// @brief Method ChangeBinding, addr 0xaf251f8, size 0x114, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputActionMap*  actionMap, int32_t  index) ;

/// [Extension]
/// @brief Method ChangeBindingWithGroup, addr 0xaf25500, size 0xd4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax ChangeBindingWithGroup(::UnityEngine::InputSystem::InputAction*  action, ::StringW  group) ;

/// [Extension]
/// @brief Method ChangeBindingWithId, addr 0xaf2530c, size 0xd4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax ChangeBindingWithId(::UnityEngine::InputSystem::InputAction*  action, ::StringW  id) ;

/// [Extension]
/// @brief Method ChangeBindingWithId, addr 0xaf253e0, size 0xe8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax ChangeBindingWithId(::UnityEngine::InputSystem::InputAction*  action, ::System::Guid  id) ;

/// [Extension]
/// @brief Method ChangeBindingWithPath, addr 0xaf255d4, size 0xd4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax ChangeBindingWithPath(::UnityEngine::InputSystem::InputAction*  action, ::StringW  path) ;

/// [Extension]
/// @brief Method ChangeCompositeBinding, addr 0xaf256a8, size 0x1e4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax ChangeCompositeBinding(::UnityEngine::InputSystem::InputAction*  action, ::StringW  compositeName) ;

/// [Extension]
/// @brief Method OrWithOptionalDevice, addr 0xaf267d4, size 0xb8, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputControlScheme OrWithOptionalDevice(::UnityEngine::InputSystem::InputControlScheme  scheme, ::StringW  controlPath) ;

/// [Extension]
/// @brief Method OrWithRequiredDevice, addr 0xaf266e8, size 0xb8, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputControlScheme OrWithRequiredDevice(::UnityEngine::InputSystem::InputControlScheme  scheme, ::StringW  controlPath) ;

/// [Extension]
/// @brief Method RemoveAction, addr 0xaf2408c, size 0x38c, virtual false, abstract: false, final false
static inline void RemoveAction(::UnityEngine::InputSystem::InputAction*  action) ;

/// [Extension]
/// @brief Method RemoveAction, addr 0xaf24420, size 0x10c, virtual false, abstract: false, final false
static inline void RemoveAction(::UnityEngine::InputSystem::InputActionAsset*  asset, ::StringW  nameOrId) ;

/// [Extension]
/// @brief Method RemoveActionMap, addr 0xaf239d0, size 0x174, virtual false, abstract: false, final false
static inline void RemoveActionMap(::UnityEngine::InputSystem::InputActionAsset*  asset, ::UnityEngine::InputSystem::InputActionMap*  map) ;

/// [Extension]
/// @brief Method RemoveActionMap, addr 0xaf23b44, size 0x114, virtual false, abstract: false, final false
static inline void RemoveActionMap(::UnityEngine::InputSystem::InputActionAsset*  asset, ::StringW  nameOrId) ;

/// [Extension]
/// @brief Method RemoveControlScheme, addr 0xaf25fc0, size 0x134, virtual false, abstract: false, final false
static inline void RemoveControlScheme(::UnityEngine::InputSystem::InputActionAsset*  asset, ::StringW  name) ;

/// [Extension]
/// @brief Method Rename, addr 0xaf258f0, size 0x28c, virtual false, abstract: false, final false
static inline void Rename(::UnityEngine::InputSystem::InputAction*  action, ::StringW  newName) ;

/// [Extension]
/// @brief Method WithBindingGroup, addr 0xaf260f4, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputControlScheme WithBindingGroup(::UnityEngine::InputSystem::InputControlScheme  scheme, ::StringW  bindingGroup) ;

/// [Extension]
/// @brief Method WithDevice, addr 0xaf263f0, size 0x120, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputControlScheme WithDevice(::UnityEngine::InputSystem::InputControlScheme  scheme, ::StringW  controlPath, bool  required) ;

/// [Extension]
/// @brief Method WithOptionalDevice, addr 0xaf26630, size 0xb8, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputControlScheme WithOptionalDevice(::UnityEngine::InputSystem::InputControlScheme  scheme, ::StringW  controlPath) ;

/// [Extension]
/// @brief Method WithRequiredDevice, addr 0xaf26578, size 0xb8, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputControlScheme WithRequiredDevice(::UnityEngine::InputSystem::InputControlScheme  scheme, ::StringW  controlPath) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputActionSetupExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputActionSetupExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionSetupExtensions(InputActionSetupExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionSetupExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionSetupExtensions(InputActionSetupExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13380};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputActionSetupExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.InputSystem.InputBinding
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionSetupExtensions/<>c__DisplayClass5_0
class CORDL_TYPE InputActionSetupExtensions___c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field binding, offset 0x10, size 0x58 
 __declspec(property(get=__cordl_internal_get_binding, put=__cordl_internal_set_binding)) ::UnityEngine::InputSystem::InputBinding  binding;

static inline ::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0* New_ctor() ;

/// @brief Method <RemoveAction>b__0, addr 0xaf28580, size 0x44, virtual false, abstract: false, final false
inline bool _RemoveAction_b__0(::UnityEngine::InputSystem::InputBinding  b) ;

constexpr ::UnityEngine::InputSystem::InputBinding const& __cordl_internal_get_binding() const;

constexpr ::UnityEngine::InputSystem::InputBinding& __cordl_internal_get_binding() ;

constexpr void __cordl_internal_set_binding(::UnityEngine::InputSystem::InputBinding  value) ;

/// @brief Method .ctor, addr 0xaf24418, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputActionSetupExtensions___c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputActionSetupExtensions___c__DisplayClass5_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionSetupExtensions___c__DisplayClass5_0(InputActionSetupExtensions___c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionSetupExtensions___c__DisplayClass5_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionSetupExtensions___c__DisplayClass5_0(InputActionSetupExtensions___c__DisplayClass5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13379};

/// @brief Field binding, offset: 0x10, size: 0x58, def value: None
 ::UnityEngine::InputSystem::InputBinding  ___binding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0, ___binding) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
