#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDebugGodmodeButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableReleaseButton_def.hpp"
CORDL_MODULE_EXPORT(GRDebugGodmodeButton)
// Forward declare root types
namespace GlobalNamespace {
class GRDebugGodmodeButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRDebugGodmodeButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRDebugGodmodeButton*, "", "GRDebugGodmodeButton");
// Dependencies GorillaPressableReleaseButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRDebugGodmodeButton
class CORDL_TYPE GRDebugGodmodeButton : public ::GlobalNamespace::GorillaPressableReleaseButton {
public:
// Declarations
/// @brief Method Awake, addr 0x58757e8, size 0x24, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ButtonActivation, addr 0x5875810, size 0x24, virtual true, abstract: false, final false
inline void ButtonActivation() ;

/// @brief Method ButtonDeactivation, addr 0x5875834, size 0x24, virtual true, abstract: false, final false
inline void ButtonDeactivation() ;

static inline ::GlobalNamespace::GRDebugGodmodeButton* New_ctor() ;

/// @brief Method OnPressedButton, addr 0x587580c, size 0x4, virtual false, abstract: false, final false
inline void OnPressedButton() ;

/// @brief Method .ctor, addr 0x5875858, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRDebugGodmodeButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRDebugGodmodeButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRDebugGodmodeButton(GRDebugGodmodeButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRDebugGodmodeButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRDebugGodmodeButton(GRDebugGodmodeButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1903};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GRDebugGodmodeButton) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
