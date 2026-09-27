#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_AgeAppealEmailScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KIDUI_AgeAppealEmailScreen)
namespace GlobalNamespace {
class KIDUIButton;
}
namespace GlobalNamespace {
class KIDUI_AgeAppealEmailConfirmation;
}
namespace TMPro {
class TMP_InputField;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_AgeAppealEmailScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_AgeAppealEmailScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_AgeAppealEmailScreen*, "", "KIDUI_AgeAppealEmailScreen");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_AgeAppealEmailScreen
class CORDL_TYPE KIDUI_AgeAppealEmailScreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field PARENT_EMAIL_DESCRIPTION, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_PARENT_EMAIL_DESCRIPTION, put=__cordl_internal_set_PARENT_EMAIL_DESCRIPTION)) ::StringW  PARENT_EMAIL_DESCRIPTION;

/// @brief Field VERIFY_AGE_EMAIL_DESCRIPTION, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_VERIFY_AGE_EMAIL_DESCRIPTION, put=__cordl_internal_set_VERIFY_AGE_EMAIL_DESCRIPTION)) ::StringW  VERIFY_AGE_EMAIL_DESCRIPTION;

/// @brief Field _confirmButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmButton, put=__cordl_internal_set__confirmButton)) ::UnityW<::GlobalNamespace::KIDUIButton>  _confirmButton;

/// @brief Field _confirmationScreen, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmationScreen, put=__cordl_internal_set__confirmationScreen)) ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation>  _confirmationScreen;

/// @brief Field _emailText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__emailText, put=__cordl_internal_set__emailText)) ::UnityW<::TMPro::TMP_InputField>  _emailText;

/// @brief Field _enterEmailText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__enterEmailText, put=__cordl_internal_set__enterEmailText)) ::UnityW<::TMPro::TMP_Text>  _enterEmailText;

/// @brief Field _parentPermissionNotice, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__parentPermissionNotice, put=__cordl_internal_set__parentPermissionNotice)) ::UnityW<::UnityEngine::GameObject>  _parentPermissionNotice;

/// @brief Field hasChallenge, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasChallenge, put=__cordl_internal_set_hasChallenge)) bool  hasChallenge;

/// @brief Field newAgeToAppeal, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_newAgeToAppeal, put=__cordl_internal_set_newAgeToAppeal)) int32_t  newAgeToAppeal;

static inline ::GlobalNamespace::KIDUI_AgeAppealEmailScreen* New_ctor() ;

/// @brief Method OnConfirmPressed, addr 0x5a4ddcc, size 0xd4, virtual false, abstract: false, final false
inline void OnConfirmPressed() ;

/// @brief Method OnDisable, addr 0x5a4df28, size 0x28, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnInputChanged, addr 0x5a4dd24, size 0xa8, virtual false, abstract: false, final false
inline void OnInputChanged(::StringW  newVal) ;

/// @brief Method ShowAgeAppealEmailScreen, addr 0x5a4da3c, size 0x2e8, virtual false, abstract: false, final false
inline void ShowAgeAppealEmailScreen(bool  receivedChallenge, int32_t  newAge) ;

constexpr ::StringW const& __cordl_internal_get_PARENT_EMAIL_DESCRIPTION() const;

constexpr ::StringW& __cordl_internal_get_PARENT_EMAIL_DESCRIPTION() ;

constexpr ::StringW const& __cordl_internal_get_VERIFY_AGE_EMAIL_DESCRIPTION() const;

constexpr ::StringW& __cordl_internal_get_VERIFY_AGE_EMAIL_DESCRIPTION() ;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& __cordl_internal_get__confirmButton() const;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& __cordl_internal_get__confirmButton() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation> const& __cordl_internal_get__confirmationScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation>& __cordl_internal_get__confirmationScreen() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get__emailText() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get__emailText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__enterEmailText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__enterEmailText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__parentPermissionNotice() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__parentPermissionNotice() ;

constexpr bool const& __cordl_internal_get_hasChallenge() const;

constexpr bool& __cordl_internal_get_hasChallenge() ;

constexpr int32_t const& __cordl_internal_get_newAgeToAppeal() const;

constexpr int32_t& __cordl_internal_get_newAgeToAppeal() ;

constexpr void __cordl_internal_set_PARENT_EMAIL_DESCRIPTION(::StringW  value) ;

constexpr void __cordl_internal_set_VERIFY_AGE_EMAIL_DESCRIPTION(::StringW  value) ;

constexpr void __cordl_internal_set__confirmButton(::UnityW<::GlobalNamespace::KIDUIButton>  value) ;

constexpr void __cordl_internal_set__confirmationScreen(::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation>  value) ;

constexpr void __cordl_internal_set__emailText(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set__enterEmailText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__parentPermissionNotice(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_hasChallenge(bool  value) ;

constexpr void __cordl_internal_set_newAgeToAppeal(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a4df50, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_AgeAppealEmailScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_AgeAppealEmailScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_AgeAppealEmailScreen(KIDUI_AgeAppealEmailScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_AgeAppealEmailScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_AgeAppealEmailScreen(KIDUI_AgeAppealEmailScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3002};

/// [SerializeField]
/// @brief Field _confirmButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUIButton>  ____confirmButton;

/// [SerializeField]
/// @brief Field _confirmationScreen, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation>  ____confirmationScreen;

/// [SerializeField]
/// @brief Field _enterEmailText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____enterEmailText;

/// [SerializeField]
/// @brief Field _emailText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ____emailText;

/// [SerializeField]
/// @brief Field _parentPermissionNotice, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____parentPermissionNotice;

/// @brief Field PARENT_EMAIL_DESCRIPTION, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___PARENT_EMAIL_DESCRIPTION;

/// @brief Field VERIFY_AGE_EMAIL_DESCRIPTION, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___VERIFY_AGE_EMAIL_DESCRIPTION;

/// @brief Field hasChallenge, offset: 0x58, size: 0x1, def value: None
 bool  ___hasChallenge;

/// @brief Field newAgeToAppeal, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___newAgeToAppeal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailScreen, ____confirmButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailScreen, ____confirmationScreen) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailScreen, ____enterEmailText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailScreen, ____emailText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailScreen, ____parentPermissionNotice) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailScreen, ___PARENT_EMAIL_DESCRIPTION) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailScreen, ___VERIFY_AGE_EMAIL_DESCRIPTION) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailScreen, ___hasChallenge) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailScreen, ___newAgeToAppeal) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_AgeAppealEmailScreen) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
