#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsTerminalControlButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CustomMapsScreenTouchPoint_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CustomMapsTerminalControlButton)
namespace GlobalNamespace {
class CustomMapsTerminal;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsTerminalControlButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsTerminalControlButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsTerminalControlButton*, "", "CustomMapsTerminalControlButton");
// Dependencies CustomMapsScreenTouchPoint, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsTerminalControlButton
class CORDL_TYPE CustomMapsTerminalControlButton : public ::GlobalNamespace::CustomMapsScreenTouchPoint {
public:
// Declarations
 __declspec(property(get=get_IsLocked, put=set_IsLocked)) bool  IsLocked;

/// @brief Field bttnText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_bttnText, put=__cordl_internal_set_bttnText)) ::UnityW<::TMPro::TMP_Text>  bttnText;

/// @brief Field isLocked, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLocked, put=__cordl_internal_set_isLocked)) bool  isLocked;

/// @brief Field lockedFontSize, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_lockedFontSize, put=__cordl_internal_set_lockedFontSize)) float_t  lockedFontSize;

/// @brief Field lockedText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lockedText, put=__cordl_internal_set_lockedText)) ::StringW  lockedText;

/// @brief Field lockedTextColor, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_lockedTextColor, put=__cordl_internal_set_lockedTextColor)) ::UnityEngine::Color  lockedTextColor;

/// @brief Field mapsTerminal, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapsTerminal, put=__cordl_internal_set_mapsTerminal)) ::UnityW<::GlobalNamespace::CustomMapsTerminal>  mapsTerminal;

/// @brief Field unlockedFontSize, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_unlockedFontSize, put=__cordl_internal_set_unlockedFontSize)) float_t  unlockedFontSize;

/// @brief Field unlockedText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockedText, put=__cordl_internal_set_unlockedText)) ::StringW  unlockedText;

/// @brief Field unlockedTextColor, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_unlockedTextColor, put=__cordl_internal_set_unlockedTextColor)) ::UnityEngine::Color  unlockedTextColor;

/// @brief Method LockTerminalControl, addr 0x59a95d0, size 0x20, virtual false, abstract: false, final false
inline void LockTerminalControl() ;

static inline ::GlobalNamespace::CustomMapsTerminalControlButton* New_ctor() ;

/// @brief Method OnButtonPressedEvent, addr 0x59a94e4, size 0xec, virtual true, abstract: false, final false
inline void OnButtonPressedEvent() ;

/// @brief Method PressButtonColourUpdate, addr 0x59a960c, size 0x118, virtual true, abstract: false, final false
inline void PressButtonColourUpdate() ;

/// @brief Method UnlockTerminalControl, addr 0x59a95f0, size 0x1c, virtual false, abstract: false, final false
inline void UnlockTerminalControl() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_bttnText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_bttnText() ;

constexpr bool const& __cordl_internal_get_isLocked() const;

constexpr bool& __cordl_internal_get_isLocked() ;

constexpr float_t const& __cordl_internal_get_lockedFontSize() const;

constexpr float_t& __cordl_internal_get_lockedFontSize() ;

constexpr ::StringW const& __cordl_internal_get_lockedText() const;

constexpr ::StringW& __cordl_internal_get_lockedText() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_lockedTextColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_lockedTextColor() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsTerminal> const& __cordl_internal_get_mapsTerminal() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsTerminal>& __cordl_internal_get_mapsTerminal() ;

constexpr float_t const& __cordl_internal_get_unlockedFontSize() const;

constexpr float_t& __cordl_internal_get_unlockedFontSize() ;

constexpr ::StringW const& __cordl_internal_get_unlockedText() const;

constexpr ::StringW& __cordl_internal_get_unlockedText() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_unlockedTextColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_unlockedTextColor() ;

constexpr void __cordl_internal_set_bttnText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_isLocked(bool  value) ;

constexpr void __cordl_internal_set_lockedFontSize(float_t  value) ;

constexpr void __cordl_internal_set_lockedText(::StringW  value) ;

constexpr void __cordl_internal_set_lockedTextColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_mapsTerminal(::UnityW<::GlobalNamespace::CustomMapsTerminal>  value) ;

constexpr void __cordl_internal_set_unlockedFontSize(float_t  value) ;

constexpr void __cordl_internal_set_unlockedText(::StringW  value) ;

constexpr void __cordl_internal_set_unlockedTextColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x59a9724, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsLocked, addr 0x59a94d4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLocked() ;

/// @brief Method set_IsLocked, addr 0x59a94dc, size 0x8, virtual false, abstract: false, final false
inline void set_IsLocked(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsTerminalControlButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsTerminalControlButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsTerminalControlButton(CustomMapsTerminalControlButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsTerminalControlButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsTerminalControlButton(CustomMapsTerminalControlButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2645};

/// [SerializeField]
/// @brief Field bttnText, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___bttnText;

/// [SerializeField]
/// @brief Field unlockedText, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___unlockedText;

/// [SerializeField]
/// @brief Field lockedText, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___lockedText;

/// [SerializeField]
/// @brief Field unlockedFontSize, offset: 0x60, size: 0x4, def value: None
 float_t  ___unlockedFontSize;

/// [SerializeField]
/// @brief Field lockedFontSize, offset: 0x64, size: 0x4, def value: None
 float_t  ___lockedFontSize;

/// [SerializeField]
/// @brief Field unlockedTextColor, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Color  ___unlockedTextColor;

/// [SerializeField]
/// @brief Field lockedTextColor, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Color  ___lockedTextColor;

/// @brief Field isLocked, offset: 0x88, size: 0x1, def value: None
 bool  ___isLocked;

/// [SerializeField]
/// @brief Field mapsTerminal, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsTerminal>  ___mapsTerminal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsTerminalControlButton, ___bttnText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminalControlButton, ___unlockedText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminalControlButton, ___lockedText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminalControlButton, ___unlockedFontSize) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminalControlButton, ___lockedFontSize) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminalControlButton, ___unlockedTextColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminalControlButton, ___lockedTextColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminalControlButton, ___isLocked) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminalControlButton, ___mapsTerminal) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsTerminalControlButton) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
