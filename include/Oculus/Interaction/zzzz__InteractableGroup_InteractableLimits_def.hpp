#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableGroup_InteractableLimits.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InteractableGroup_InteractableLimits)
// Forward declare root types
namespace GlobalNamespace {
struct InteractableGroup_InteractableLimits;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InteractableGroup_InteractableLimits);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InteractableGroup_InteractableLimits, "Oculus.Interaction", "InteractableGroup/InteractableLimits");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.InteractableGroup/InteractableLimits
struct CORDL_TYPE InteractableGroup_InteractableLimits {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InteractableGroup_InteractableLimits() ;

// Ctor Parameters [CppParam { name: "MaxInteractors", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaxSelectingInteractors", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InteractableGroup_InteractableLimits(int32_t  MaxInteractors, int32_t  MaxSelectingInteractors) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15774};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field MaxInteractors, offset: 0x0, size: 0x4, def value: None
 int32_t  MaxInteractors;

/// @brief Field MaxSelectingInteractors, offset: 0x4, size: 0x4, def value: None
 int32_t  MaxSelectingInteractors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InteractableGroup_InteractableLimits, MaxInteractors) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractableGroup_InteractableLimits, MaxSelectingInteractors) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InteractableGroup_InteractableLimits) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
