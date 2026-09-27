#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableStateChangeArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__InteractableState_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InteractableStateChangeArgs)
namespace Oculus::Interaction {
struct InteractableState;
}
// Forward declare root types
namespace Oculus::Interaction {
struct InteractableStateChangeArgs;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::InteractableStateChangeArgs);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractableStateChangeArgs, "Oculus.Interaction", "InteractableStateChangeArgs");
// Dependencies Oculus.Interaction.InteractableState
namespace Oculus::Interaction {
// Is value type: true
// CS Name: Oculus.Interaction.InteractableStateChangeArgs
struct CORDL_TYPE InteractableStateChangeArgs {
public:
// Declarations
 __declspec(property(get=get_NewState)) ::Oculus::Interaction::InteractableState  NewState;

 __declspec(property(get=get_PreviousState)) ::Oculus::Interaction::InteractableState  PreviousState;

/// @brief Method .ctor, addr 0xa4149d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::InteractableState  previousState, ::Oculus::Interaction::InteractableState  newState) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_NewState, addr 0xa4149c8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::InteractableState get_NewState() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_PreviousState, addr 0xa4149c0, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::InteractableState get_PreviousState() ;

// Ctor Parameters []
// @brief default ctor
constexpr InteractableStateChangeArgs() ;

// Ctor Parameters [CppParam { name: "_PreviousState_k__BackingField", ty: "::Oculus::Interaction::InteractableState", modifiers: "", def_value: None, comment: None }, CppParam { name: "_NewState_k__BackingField", ty: "::Oculus::Interaction::InteractableState", modifiers: "", def_value: None, comment: None }]
constexpr InteractableStateChangeArgs(::Oculus::Interaction::InteractableState  _PreviousState_k__BackingField, ::Oculus::Interaction::InteractableState  _NewState_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15765};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <PreviousState>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Oculus::Interaction::InteractableState  _PreviousState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <NewState>k__BackingField, offset: 0x4, size: 0x4, def value: None
 ::Oculus::Interaction::InteractableState  _NewState_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::InteractableStateChangeArgs, _PreviousState_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableStateChangeArgs, _NewState_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::InteractableStateChangeArgs) == 0x8, "Size mismatch!");

} // namespace end def Oculus::Interaction
