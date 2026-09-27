#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionAxisTurnerInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__Interactable_2_def.hpp"
CORDL_MODULE_EXPORT(LocomotionAxisTurnerInteractable)
namespace Oculus::Interaction::Locomotion {
class LocomotionAxisTurnerInteractor;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class LocomotionAxisTurnerInteractable;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable*, "Oculus.Interaction.Locomotion", "LocomotionAxisTurnerInteractable");
// Dependencies Oculus.Interaction.Interactable`2<TInteractor, TInteractable>
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionAxisTurnerInteractable
class CORDL_TYPE LocomotionAxisTurnerInteractable : public ::Oculus::Interaction::Interactable_2<::UnityW<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor>,::UnityW<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable>> {
public:
// Declarations
static inline ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable* New_ctor() ;

/// @brief Method .ctor, addr 0xa4d2bcc, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionAxisTurnerInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionAxisTurnerInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionAxisTurnerInteractable(LocomotionAxisTurnerInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionAxisTurnerInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionAxisTurnerInteractable(LocomotionAxisTurnerInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16296};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable) == 0xb0, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
