#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_ErrorScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(KIDUI_ErrorScreen)
namespace GlobalNamespace {
class KIDUI_MainScreen;
}
namespace GlobalNamespace {
class KIDUI_SetupScreen;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_ErrorScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_ErrorScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_ErrorScreen*, "", "KIDUI_ErrorScreen");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_ErrorScreen
class CORDL_TYPE KIDUI_ErrorScreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _emailTxt, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__emailTxt, put=__cordl_internal_set__emailTxt)) ::UnityW<::TMPro::TMP_Text>  _emailTxt;

/// @brief Field _errorTxt, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorTxt, put=__cordl_internal_set__errorTxt)) ::UnityW<::TMPro::TMP_Text>  _errorTxt;

/// @brief Field _mainScreen, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__mainScreen, put=__cordl_internal_set__mainScreen)) ::UnityW<::GlobalNamespace::KIDUI_MainScreen>  _mainScreen;

/// @brief Field _setupScreen, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__setupScreen, put=__cordl_internal_set__setupScreen)) ::UnityW<::GlobalNamespace::KIDUI_SetupScreen>  _setupScreen;

/// @brief Field _titleTxt, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__titleTxt, put=__cordl_internal_set__titleTxt)) ::UnityW<::TMPro::TMP_Text>  _titleTxt;

static inline ::GlobalNamespace::KIDUI_ErrorScreen* New_ctor() ;

/// @brief Method OnBack, addr 0x5a565cc, size 0x34, virtual false, abstract: false, final false
inline void OnBack() ;

/// @brief Method OnClose, addr 0x5a56544, size 0x38, virtual false, abstract: false, final false
inline void OnClose() ;

/// @brief Method OnQuitGame, addr 0x5a5657c, size 0x50, virtual false, abstract: false, final false
inline void OnQuitGame() ;

/// @brief Method ShowErrorScreen, addr 0x5a53440, size 0x8c, virtual false, abstract: false, final false
inline void ShowErrorScreen(::StringW  title, ::StringW  email, ::StringW  errorMessage) ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__emailTxt() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__emailTxt() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__errorTxt() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__errorTxt() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen> const& __cordl_internal_get__mainScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen>& __cordl_internal_get__mainScreen() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_SetupScreen> const& __cordl_internal_get__setupScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_SetupScreen>& __cordl_internal_get__setupScreen() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__titleTxt() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__titleTxt() ;

constexpr void __cordl_internal_set__emailTxt(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__errorTxt(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__mainScreen(::UnityW<::GlobalNamespace::KIDUI_MainScreen>  value) ;

constexpr void __cordl_internal_set__setupScreen(::UnityW<::GlobalNamespace::KIDUI_SetupScreen>  value) ;

constexpr void __cordl_internal_set__titleTxt(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x5a56600, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_ErrorScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_ErrorScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_ErrorScreen(KIDUI_ErrorScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_ErrorScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_ErrorScreen(KIDUI_ErrorScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3027};

/// [SerializeField]
/// @brief Field _titleTxt, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____titleTxt;

/// [SerializeField]
/// @brief Field _emailTxt, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____emailTxt;

/// [SerializeField]
/// @brief Field _errorTxt, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____errorTxt;

/// [SerializeField]
/// @brief Field _mainScreen, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_MainScreen>  ____mainScreen;

/// [SerializeField]
/// @brief Field _setupScreen, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_SetupScreen>  ____setupScreen;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_ErrorScreen, ____titleTxt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ErrorScreen, ____emailTxt) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ErrorScreen, ____errorTxt) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ErrorScreen, ____mainScreen) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ErrorScreen, ____setupScreen) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_ErrorScreen) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
