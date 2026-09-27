#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/ImmersiveSceneDebugger_DebugAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImmersiveSceneDebugger_DebugAction)
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct ImmersiveSceneDebugger_DebugAction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction, "Meta.XR.MRUtilityKit", "ImmersiveSceneDebugger/DebugAction");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger/DebugAction
struct CORDL_TYPE ImmersiveSceneDebugger_DebugAction {
public:
// Declarations
/// @brief Method Cleanup, addr 0x9f1b308, size 0x1c, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method Equals, addr 0x9f1ed54, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x9f1ecf4, size 0x60, virtual false, abstract: false, final false
inline bool Equals(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  other) ;

/// @brief Method Execute, addr 0x9f1aa04, size 0x1c, virtual false, abstract: false, final false
inline void Execute() ;

/// @brief Method GetHashCode, addr 0x9f1ede4, size 0x78, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Setup, addr 0x9f1b354, size 0x1c, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method .ctor, addr 0x9f1b648, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::System::Action*  setup, ::System::Action*  execute, ::System::Action*  cleanup) ;

/// @brief Method op_Equality, addr 0x9f1b324, size 0x30, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  left, ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  right) ;

/// @brief Method op_Inequality, addr 0x9f1ee5c, size 0x34, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  left, ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr ImmersiveSceneDebugger_DebugAction() ;

// Ctor Parameters [CppParam { name: "_setup", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_cleanup", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_execute", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }]
constexpr ImmersiveSceneDebugger_DebugAction(::System::Action*  _setup, ::System::Action*  _cleanup, ::System::Action*  _execute) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25853};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _setup, offset: 0x0, size: 0x8, def value: None
 ::System::Action*  _setup;

/// @brief Field _cleanup, offset: 0x8, size: 0x8, def value: None
 ::System::Action*  _cleanup;

/// @brief Field _execute, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  _execute;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction, _setup) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction, _cleanup) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction, _execute) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
