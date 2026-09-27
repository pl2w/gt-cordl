#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractorStateChangeArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__InteractorState_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InteractorStateChangeArgs)
namespace Oculus::Interaction {
struct InteractorState;
}
// Forward declare root types
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::InteractorStateChangeArgs);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractorStateChangeArgs, "Oculus.Interaction", "InteractorStateChangeArgs");
// Dependencies Oculus.Interaction.InteractorState
namespace Oculus::Interaction {
// Is value type: true
// CS Name: Oculus.Interaction.InteractorStateChangeArgs
struct CORDL_TYPE InteractorStateChangeArgs {
public:
// Declarations
 __declspec(property(get=get_NewState)) ::Oculus::Interaction::InteractorState  NewState;

 __declspec(property(get=get_PreviousState)) ::Oculus::Interaction::InteractorState  PreviousState;

/// @brief Method .ctor, addr 0xa40b784, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::InteractorState  previousState, ::Oculus::Interaction::InteractorState  newState) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_NewState, addr 0xa4149e0, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::InteractorState get_NewState() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_PreviousState, addr 0xa4149d8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::InteractorState get_PreviousState() ;

// Ctor Parameters []
// @brief default ctor
constexpr InteractorStateChangeArgs() ;

// Ctor Parameters [CppParam { name: "_PreviousState_k__BackingField", ty: "::Oculus::Interaction::InteractorState", modifiers: "", def_value: None, comment: None }, CppParam { name: "_NewState_k__BackingField", ty: "::Oculus::Interaction::InteractorState", modifiers: "", def_value: None, comment: None }]
constexpr InteractorStateChangeArgs(::Oculus::Interaction::InteractorState  _PreviousState_k__BackingField, ::Oculus::Interaction::InteractorState  _NewState_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15768};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <PreviousState>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Oculus::Interaction::InteractorState  _PreviousState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <NewState>k__BackingField, offset: 0x4, size: 0x4, def value: None
 ::Oculus::Interaction::InteractorState  _NewState_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::InteractorStateChangeArgs, _PreviousState_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorStateChangeArgs, _NewState_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::InteractorStateChangeArgs) == 0x8, "Size mismatch!");

} // namespace end def Oculus::Interaction
