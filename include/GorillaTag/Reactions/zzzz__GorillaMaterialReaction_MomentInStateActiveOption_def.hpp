#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/GorillaMaterialReaction_MomentInStateActiveOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GorillaMaterialReaction_MomentInStateActiveOption)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaMaterialReaction_MomentInStateActiveOption;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption, "GorillaTag.Reactions", "GorillaMaterialReaction/MomentInStateActiveOption");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Reactions.GorillaMaterialReaction/MomentInStateActiveOption
struct CORDL_TYPE GorillaMaterialReaction_MomentInStateActiveOption {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GorillaMaterialReaction_MomentInStateActiveOption() ;

// Ctor Parameters [CppParam { name: "change", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "activeState", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr GorillaMaterialReaction_MomentInStateActiveOption(bool  change, bool  activeState) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4704};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field change, offset: 0x0, size: 0x1, def value: None
 bool  change;

/// @brief Field activeState, offset: 0x1, size: 0x1, def value: None
 bool  activeState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption, change) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption, activeState) == 0x1, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption) == 0x2, "Size mismatch!");

} // namespace end def GlobalNamespace
