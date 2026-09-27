#pragma once
// IWYU pragma private; include "GorillaTagScripts/WhackAMoleButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
CORDL_MODULE_EXPORT(WhackAMoleButton)
// Forward declare root types
namespace GorillaTagScripts {
class WhackAMoleButton;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::WhackAMoleButton*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::WhackAMoleButton*, "GorillaTagScripts", "WhackAMoleButton");
// Dependencies GorillaPressableButton
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.WhackAMoleButton
class CORDL_TYPE WhackAMoleButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Method ButtonActivationWithHand, addr 0x5b80950, size 0x8, virtual true, abstract: false, final false
inline void ButtonActivationWithHand(bool  isLeftHand) ;

static inline ::GorillaTagScripts::WhackAMoleButton* New_ctor() ;

/// @brief Method .ctor, addr 0x5b80958, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhackAMoleButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhackAMoleButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhackAMoleButton(WhackAMoleButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhackAMoleButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhackAMoleButton(WhackAMoleButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3915};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::WhackAMoleButton) == 0xb8, "Size mismatch!");

} // namespace end def GorillaTagScripts
