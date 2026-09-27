#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/LocomotionStateExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LocomotionStateExtensions)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
struct LocomotionState;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class LocomotionStateExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionStateExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionStateExtensions*, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "LocomotionStateExtensions");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionStateExtensions
class CORDL_TYPE LocomotionStateExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method IsActive, addr 0xb449620, size 0x10, virtual false, abstract: false, final false
static inline bool IsActive(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  state) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionStateExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionStateExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionStateExtensions(LocomotionStateExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionStateExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionStateExtensions(LocomotionStateExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11336};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionStateExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion
