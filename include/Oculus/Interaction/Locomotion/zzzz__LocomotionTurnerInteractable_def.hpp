#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionTurnerInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__Interactable_2_def.hpp"
CORDL_MODULE_EXPORT(LocomotionTurnerInteractable)
namespace Oculus::Interaction::Locomotion {
class LocomotionTurnerInteractor;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class LocomotionTurnerInteractable;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractable*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractable*, "Oculus.Interaction.Locomotion", "LocomotionTurnerInteractable");
// Dependencies Oculus.Interaction.Interactable`2<TInteractor, TInteractable>
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionTurnerInteractable
class CORDL_TYPE LocomotionTurnerInteractable : public ::Oculus::Interaction::Interactable_2<::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor>,::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractable>> {
public:
// Declarations
static inline ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractable* New_ctor() ;

/// @brief Method .ctor, addr 0xa4d4358, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionTurnerInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTurnerInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionTurnerInteractable(LocomotionTurnerInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTurnerInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionTurnerInteractable(LocomotionTurnerInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16299};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractable) == 0xb0, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
