#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsScreenButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CustomMapsScreenTouchPoint_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CustomMapsScreenButton)
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsScreenButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsScreenButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsScreenButton*, "", "CustomMapsScreenButton");
// Dependencies CustomMapsScreenTouchPoint
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsScreenButton
class CORDL_TYPE CustomMapsScreenButton : public ::GlobalNamespace::CustomMapsScreenTouchPoint {
public:
// Declarations
/// @brief Field bttnText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_bttnText, put=__cordl_internal_set_bttnText)) ::UnityW<::TMPro::TMP_Text>  bttnText;

/// @brief Field isActive, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_isActive, put=__cordl_internal_set_isActive)) bool  isActive;

/// @brief Field isToggle, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_isToggle, put=__cordl_internal_set_isToggle)) bool  isToggle;

static inline ::GlobalNamespace::CustomMapsScreenButton* New_ctor() ;

/// @brief Method OnButtonPressedEvent, addr 0x5a04b1c, size 0x10, virtual true, abstract: false, final false
inline void OnButtonPressedEvent() ;

/// @brief Method OnDisable, addr 0x5a048b8, size 0x30, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method PressButtonColourUpdate, addr 0x5a04a94, size 0x10, virtual true, abstract: false, final false
inline void PressButtonColourUpdate() ;

/// @brief Method SetButtonActive, addr 0x5a04990, size 0x68, virtual false, abstract: false, final false
inline void SetButtonActive(bool  active) ;

/// @brief Method SetButtonText, addr 0x5a049f8, size 0x9c, virtual false, abstract: false, final false
inline void SetButtonText(::StringW  text) ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_bttnText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_bttnText() ;

constexpr bool const& __cordl_internal_get_isActive() const;

constexpr bool& __cordl_internal_get_isActive() ;

constexpr bool const& __cordl_internal_get_isToggle() const;

constexpr bool& __cordl_internal_get_isToggle() ;

constexpr void __cordl_internal_set_bttnText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_isActive(bool  value) ;

constexpr void __cordl_internal_set_isToggle(bool  value) ;

/// @brief Method .ctor, addr 0x5a04b2c, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsScreenButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsScreenButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsScreenButton(CustomMapsScreenButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsScreenButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsScreenButton(CustomMapsScreenButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2756};

/// [SerializeField]
/// @brief Field bttnText, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___bttnText;

/// [SerializeField]
/// @brief Field isToggle, offset: 0x50, size: 0x1, def value: None
 bool  ___isToggle;

/// @brief Field isActive, offset: 0x51, size: 0x1, def value: None
 bool  ___isActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsScreenButton, ___bttnText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsScreenButton, ___isToggle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsScreenButton, ___isActive) == 0x51, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsScreenButton) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
