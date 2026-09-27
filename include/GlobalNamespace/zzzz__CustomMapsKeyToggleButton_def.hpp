#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsKeyToggleButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapsKeyButton_def.hpp"
CORDL_MODULE_EXPORT(CustomMapsKeyToggleButton)
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsKeyToggleButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsKeyToggleButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsKeyToggleButton*, "", "CustomMapsKeyToggleButton");
// Dependencies GorillaTagScripts.VirtualStumpCustomMaps.UI.CustomMapsKeyButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsKeyToggleButton
class CORDL_TYPE CustomMapsKeyToggleButton : public ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyButton {
public:
// Declarations
/// @brief Field isPressed, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPressed, put=__cordl_internal_set_isPressed)) bool  isPressed;

static inline ::GlobalNamespace::CustomMapsKeyToggleButton* New_ctor() ;

/// @brief Method PressButtonColourUpdate, addr 0x59fe9e4, size 0x4, virtual true, abstract: false, final false
inline void PressButtonColourUpdate() ;

/// @brief Method SetButtonStatus, addr 0x59fe9e8, size 0x150, virtual false, abstract: false, final false
inline void SetButtonStatus(bool  newIsPressed) ;

constexpr bool const& __cordl_internal_get_isPressed() const;

constexpr bool& __cordl_internal_get_isPressed() ;

constexpr void __cordl_internal_set_isPressed(bool  value) ;

/// @brief Method .ctor, addr 0x59feb38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsKeyToggleButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsKeyToggleButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsKeyToggleButton(CustomMapsKeyToggleButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsKeyToggleButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsKeyToggleButton(CustomMapsKeyToggleButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2746};

/// @brief Field isPressed, offset: 0x80, size: 0x1, def value: None
 bool  ___isPressed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsKeyToggleButton, ___isPressed) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsKeyToggleButton) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
