#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIOLinkButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
CORDL_MODULE_EXPORT(ModIOLinkButton)
// Forward declare root types
namespace GlobalNamespace {
class ModIOLinkButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ModIOLinkButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModIOLinkButton*, "", "ModIOLinkButton");
// Dependencies GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: ModIOLinkButton
class CORDL_TYPE ModIOLinkButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
static inline ::GlobalNamespace::ModIOLinkButton* New_ctor() ;

/// @brief Method .ctor, addr 0x59c75bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModIOLinkButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModIOLinkButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModIOLinkButton(ModIOLinkButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModIOLinkButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModIOLinkButton(ModIOLinkButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2684};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ModIOLinkButton) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
