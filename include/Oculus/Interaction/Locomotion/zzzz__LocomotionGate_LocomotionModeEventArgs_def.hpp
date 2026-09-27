#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionGate_LocomotionModeEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionGate_LocomotionMode_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LocomotionGate_LocomotionModeEventArgs)
namespace GlobalNamespace {
struct LocomotionGate_LocomotionMode;
}
// Forward declare root types
namespace GlobalNamespace {
struct LocomotionGate_LocomotionModeEventArgs;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs, "Oculus.Interaction.Locomotion", "LocomotionGate/LocomotionModeEventArgs");
// Dependencies Oculus.Interaction.Locomotion.LocomotionGate::LocomotionMode
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Locomotion.LocomotionGate/LocomotionModeEventArgs
struct CORDL_TYPE LocomotionGate_LocomotionModeEventArgs {
public:
// Declarations
 __declspec(property(get=get_NewMode)) ::GlobalNamespace::LocomotionGate_LocomotionMode  NewMode;

 __declspec(property(get=get_PreviousMode)) ::GlobalNamespace::LocomotionGate_LocomotionMode  PreviousMode;

/// @brief Method .ctor, addr 0xa4c7d90, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::LocomotionGate_LocomotionMode  previousMode, ::GlobalNamespace::LocomotionGate_LocomotionMode  newMode) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_NewMode, addr 0xa4c95bc, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::LocomotionGate_LocomotionMode get_NewMode() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_PreviousMode, addr 0xa4c95b4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::LocomotionGate_LocomotionMode get_PreviousMode() ;

// Ctor Parameters []
// @brief default ctor
constexpr LocomotionGate_LocomotionModeEventArgs() ;

// Ctor Parameters [CppParam { name: "_PreviousMode_k__BackingField", ty: "::GlobalNamespace::LocomotionGate_LocomotionMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "_NewMode_k__BackingField", ty: "::GlobalNamespace::LocomotionGate_LocomotionMode", modifiers: "", def_value: None, comment: None }]
constexpr LocomotionGate_LocomotionModeEventArgs(::GlobalNamespace::LocomotionGate_LocomotionMode  _PreviousMode_k__BackingField, ::GlobalNamespace::LocomotionGate_LocomotionMode  _NewMode_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16268};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <PreviousMode>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::LocomotionGate_LocomotionMode  _PreviousMode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <NewMode>k__BackingField, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::LocomotionGate_LocomotionMode  _NewMode_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs, _PreviousMode_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs, _NewMode_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
