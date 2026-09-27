#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_SetupScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(KIDUI_SetupScreen)
namespace GlobalNamespace {
class KIDUIButton;
}
namespace GlobalNamespace {
class KIDUI_ConfirmScreen;
}
namespace GlobalNamespace {
class KIDUI_MainScreen;
}
namespace TMPro {
class TMP_InputField;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class TouchScreenKeyboard;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_SetupScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_SetupScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_SetupScreen*, "", "KIDUI_SetupScreen");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_SetupScreen
class CORDL_TYPE KIDUI_SetupScreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _confirmButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmButton, put=__cordl_internal_set__confirmButton)) ::UnityW<::GlobalNamespace::KIDUIButton>  _confirmButton;

/// @brief Field _confirmScreen, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmScreen, put=__cordl_internal_set__confirmScreen)) ::UnityW<::GlobalNamespace::KIDUI_ConfirmScreen>  _confirmScreen;

/// @brief Field _emailInputField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__emailInputField, put=__cordl_internal_set__emailInputField)) ::UnityW<::TMPro::TMP_InputField>  _emailInputField;

/// @brief Field _emailStr, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__emailStr, put=__cordl_internal_set__emailStr)) ::StringW  _emailStr;

/// @brief Field _keyboard, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__keyboard, put=__cordl_internal_set__keyboard)) ::UnityEngine::TouchScreenKeyboard*  _keyboard;

/// @brief Field _mainScreen, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__mainScreen, put=__cordl_internal_set__mainScreen)) ::UnityW<::GlobalNamespace::KIDUI_MainScreen>  _mainScreen;

/// @brief Field _riftKeyboardMessage, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__riftKeyboardMessage, put=__cordl_internal_set__riftKeyboardMessage)) ::UnityW<::TMPro::TMP_Text>  _riftKeyboardMessage;

/// @brief Method Awake, addr 0x5a5b4ac, size 0x290, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::KIDUI_SetupScreen* New_ctor() ;

/// @brief Method OnBackPressed, addr 0x5a5ba30, size 0xa0, virtual false, abstract: false, final false
inline void OnBackPressed() ;

/// @brief Method OnDisable, addr 0x5a5b894, size 0x18, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5a5b73c, size 0xb0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnInputChanged, addr 0x5a5b7ec, size 0xa8, virtual false, abstract: false, final false
inline void OnInputChanged(::StringW  newVal) ;

/// @brief Method OnInputSelected, addr 0x5a5b8ac, size 0xdc, virtual false, abstract: false, final false
inline void OnInputSelected() ;

/// @brief Method OnStartSetup, addr 0x5a522e8, size 0x228, virtual false, abstract: false, final false
inline void OnStartSetup() ;

/// @brief Method OnSubmitEmailPressed, addr 0x5a5b988, size 0xa8, virtual false, abstract: false, final false
inline void OnSubmitEmailPressed() ;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& __cordl_internal_get__confirmButton() const;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& __cordl_internal_get__confirmButton() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_ConfirmScreen> const& __cordl_internal_get__confirmScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_ConfirmScreen>& __cordl_internal_get__confirmScreen() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get__emailInputField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get__emailInputField() ;

constexpr ::StringW const& __cordl_internal_get__emailStr() const;

constexpr ::StringW& __cordl_internal_get__emailStr() ;

constexpr ::UnityEngine::TouchScreenKeyboard* const& __cordl_internal_get__keyboard() const;

constexpr ::UnityEngine::TouchScreenKeyboard*& __cordl_internal_get__keyboard() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen> const& __cordl_internal_get__mainScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen>& __cordl_internal_get__mainScreen() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__riftKeyboardMessage() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__riftKeyboardMessage() ;

constexpr void __cordl_internal_set__confirmButton(::UnityW<::GlobalNamespace::KIDUIButton>  value) ;

constexpr void __cordl_internal_set__confirmScreen(::UnityW<::GlobalNamespace::KIDUI_ConfirmScreen>  value) ;

constexpr void __cordl_internal_set__emailInputField(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set__emailStr(::StringW  value) ;

constexpr void __cordl_internal_set__keyboard(::UnityEngine::TouchScreenKeyboard*  value) ;

constexpr void __cordl_internal_set__mainScreen(::UnityW<::GlobalNamespace::KIDUI_MainScreen>  value) ;

constexpr void __cordl_internal_set__riftKeyboardMessage(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x5a5bad0, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_SetupScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_SetupScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_SetupScreen(KIDUI_SetupScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_SetupScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_SetupScreen(KIDUI_SetupScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3039};

/// [SerializeField]
/// @brief Field _emailInputField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ____emailInputField;

/// [SerializeField]
/// @brief Field _confirmButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUIButton>  ____confirmButton;

/// [SerializeField]
/// @brief Field _confirmScreen, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_ConfirmScreen>  ____confirmScreen;

/// [SerializeField]
/// @brief Field _mainScreen, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_MainScreen>  ____mainScreen;

/// [SerializeField]
/// @brief Field _riftKeyboardMessage, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____riftKeyboardMessage;

/// @brief Field _emailStr, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____emailStr;

/// @brief Field _keyboard, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::TouchScreenKeyboard*  ____keyboard;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_SetupScreen, ____emailInputField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_SetupScreen, ____confirmButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_SetupScreen, ____confirmScreen) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_SetupScreen, ____mainScreen) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_SetupScreen, ____riftKeyboardMessage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_SetupScreen, ____emailStr) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_SetupScreen, ____keyboard) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_SetupScreen) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
