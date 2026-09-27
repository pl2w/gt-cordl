#pragma once
// IWYU pragma private; include "GlobalNamespace/VirtualStumpOptionsTerminal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VirtualStumpOptionsTerminal_ETerminalState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VirtualStumpOptionsTerminal)
namespace GlobalNamespace {
class AssociateMotherhsipAndModIOAccountsResponse;
}
namespace GlobalNamespace {
struct VirtualStumpOptionsTerminal_ETerminalState;
}
namespace GlobalNamespace {
struct VirtualStumpOptionsTerminal__StartAccountLinkingProcess_d__40;
}
namespace GlobalNamespace {
class VirtualStumpOptionsTerminal___c;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
struct CustomMapKeyboardBinding;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
class CustomMapsKeyboard;
}
namespace Modio::Customizations {
class IWssAuthPrompter;
}
namespace Modio::Users {
class User;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class VirtualStumpOptionsTerminal;
}
namespace GlobalNamespace {
class VirtualStumpOptionsTerminal___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VirtualStumpOptionsTerminal*);
MARK_REF_T(::GlobalNamespace::VirtualStumpOptionsTerminal___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VirtualStumpOptionsTerminal*, "", "VirtualStumpOptionsTerminal");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VirtualStumpOptionsTerminal___c*, "", "VirtualStumpOptionsTerminal/<>c");
// Dependencies UnityEngine.MonoBehaviour, VirtualStumpOptionsTerminal::ETerminalState
namespace GlobalNamespace {
// Is value type: false
// CS Name: VirtualStumpOptionsTerminal
class CORDL_TYPE VirtualStumpOptionsTerminal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ETerminalState = ::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState;

using _StartAccountLinkingProcess_d__40 = ::GlobalNamespace::VirtualStumpOptionsTerminal__StartAccountLinkingProcess_d__40;

using __c = ::GlobalNamespace::VirtualStumpOptionsTerminal___c;

/// @brief Field OKButton, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OKButton, put=__cordl_internal_set_OKButton)) ::UnityW<::UnityEngine::GameObject>  OKButton;

/// @brief Field accountLinkingPromptString, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_accountLinkingPromptString, put=__cordl_internal_set_accountLinkingPromptString)) ::StringW  accountLinkingPromptString;

/// @brief Field alreadyLinkedAccountString, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_alreadyLinkedAccountString, put=__cordl_internal_set_alreadyLinkedAccountString)) ::StringW  alreadyLinkedAccountString;

/// @brief Field buttonsToShow_MODIO, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonsToShow_MODIO, put=__cordl_internal_set_buttonsToShow_MODIO)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  buttonsToShow_MODIO;

/// @brief Field buttonsToShow_ROOMSIZE, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonsToShow_ROOMSIZE, put=__cordl_internal_set_buttonsToShow_ROOMSIZE)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  buttonsToShow_ROOMSIZE;

/// @brief Field cachedError, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedError, put=__cordl_internal_set_cachedError)) ::StringW  cachedError;

/// @brief Field cachedLinkCode, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedLinkCode, put=__cordl_internal_set_cachedLinkCode)) ::StringW  cachedLinkCode;

/// @brief Field cachedLinkURL, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedLinkURL, put=__cordl_internal_set_cachedLinkURL)) ::StringW  cachedLinkURL;

/// @brief Field contextualButtons, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_contextualButtons, put=__cordl_internal_set_contextualButtons)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  contextualButtons;

/// @brief Field currentState, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState  currentState;

/// @brief Field keyboard, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyboard, put=__cordl_internal_set_keyboard)) ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard>  keyboard;

/// @brief Field linkAccountPromptString, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_linkAccountPromptString, put=__cordl_internal_set_linkAccountPromptString)) ::StringW  linkAccountPromptString;

/// @brief Field linkCodeLabelString, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_linkCodeLabelString, put=__cordl_internal_set_linkCodeLabelString)) ::StringW  linkCodeLabelString;

/// @brief Field loggedInAsString, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_loggedInAsString, put=__cordl_internal_set_loggedInAsString)) ::StringW  loggedInAsString;

/// @brief Field loggingInString, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_loggingInString, put=__cordl_internal_set_loggingInString)) ::StringW  loggingInString;

/// @brief Field loggingOutString, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_loggingOutString, put=__cordl_internal_set_loggingOutString)) ::StringW  loggingOutString;

/// @brief Field loginPromptString, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_loginPromptString, put=__cordl_internal_set_loginPromptString)) ::StringW  loginPromptString;

/// @brief Field mainScreenText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainScreenText, put=__cordl_internal_set_mainScreenText)) ::UnityW<::TMPro::TMP_Text>  mainScreenText;

/// @brief Field notLoggedInString, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_notLoggedInString, put=__cordl_internal_set_notLoggedInString)) ::StringW  notLoggedInString;

/// @brief Field optionList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_optionList, put=__cordl_internal_set_optionList)) ::UnityW<::TMPro::TMP_Text>  optionList;

/// @brief Field optionStrings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_optionStrings, put=__cordl_internal_set_optionStrings)) ::System::Collections::Generic::List_1<::StringW>*  optionStrings;

/// @brief Field processingAccountLink, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_processingAccountLink, put=__cordl_internal_set_processingAccountLink)) bool  processingAccountLink;

/// @brief Field roomSizeDescriptionString, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomSizeDescriptionString, put=__cordl_internal_set_roomSizeDescriptionString)) ::StringW  roomSizeDescriptionString;

/// @brief Field roomSizeLabelString, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomSizeLabelString, put=__cordl_internal_set_roomSizeLabelString)) ::StringW  roomSizeLabelString;

/// @brief Field urlLabelString, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_urlLabelString, put=__cordl_internal_set_urlLabelString)) ::StringW  urlLabelString;

/// @brief Convert operator to "::Modio::Customizations::IWssAuthPrompter"
constexpr operator  ::Modio::Customizations::IWssAuthPrompter*() noexcept;

/// @brief Method ChangeState, addr 0x5a0a514, size 0x18, virtual false, abstract: false, final false
inline void ChangeState(::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState  newState) ;

/// @brief Method DecrementRoomSize, addr 0x5a0b0f8, size 0x68, virtual false, abstract: false, final false
inline void DecrementRoomSize() ;

/// @brief Method IncrementRoomSize, addr 0x5a0b160, size 0x68, virtual false, abstract: false, final false
inline void IncrementRoomSize() ;

static inline ::GlobalNamespace::VirtualStumpOptionsTerminal* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5a0a14c, size 0x2cc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x5a0a418, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnKeyPressed, addr 0x5a0a438, size 0xdc, virtual false, abstract: false, final false
inline void OnKeyPressed(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding  pressedButton) ;

/// @brief Method OnKeyPressed_ModIOAccount, addr 0x5a0a52c, size 0x304, virtual false, abstract: false, final false
inline void OnKeyPressed_ModIOAccount(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding  pressedButton) ;

/// @brief Method OnKeyPressed_RoomSize, addr 0x5a0a830, size 0x38, virtual false, abstract: false, final false
inline void OnKeyPressed_RoomSize(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding  pressedButton) ;

/// @brief Method OnModIOLoggedIn, addr 0x5a0ac40, size 0x2bc, virtual false, abstract: false, final false
inline void OnModIOLoggedIn() ;

/// @brief Method OnModIOLoggedOut, addr 0x5a0aefc, size 0xc8, virtual false, abstract: false, final false
inline void OnModIOLoggedOut() ;

/// @brief Method OnModIOLoginFailed, addr 0x5a0afc4, size 0x20, virtual false, abstract: false, final false
inline void OnModIOLoginFailed(::StringW  error) ;

/// @brief Method OnModIOLoginStarted, addr 0x5a0ac3c, size 0x4, virtual false, abstract: false, final false
inline void OnModIOLoginStarted() ;

/// @brief Method OnModIOUserChanged, addr 0x5a0afe4, size 0x4, virtual false, abstract: false, final false
inline void OnModIOUserChanged(::Modio::Users::User*  user) ;

/// @brief Method RefreshButtonState, addr 0x5a09c90, size 0x228, virtual false, abstract: false, final false
inline void RefreshButtonState() ;

/// @brief Method ShowPrompt, addr 0x5a0b0c0, size 0x38, virtual true, abstract: false, final true
inline void ShowPrompt(::StringW  url, ::StringW  code) ;

/// @brief Method Start, addr 0x5a099bc, size 0x2d4, virtual false, abstract: false, final false
inline void Start() ;

/// [AsyncStateMachine(typeof(VirtualStumpOptionsTerminal::<StartAccountLinkingProcess>d__40))]
/// @brief Method StartAccountLinkingProcess, addr 0x5a0afe8, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* StartAccountLinkingProcess() ;

/// @brief Method UpdateOptionListForCurrentState, addr 0x5a09eb8, size 0x13c, virtual false, abstract: false, final false
inline void UpdateOptionListForCurrentState() ;

/// @brief Method UpdateScreen, addr 0x5a09ff4, size 0x158, virtual false, abstract: false, final false
inline void UpdateScreen() ;

/// @brief Method UpdateScreen_ModIOAccount, addr 0x5a0a868, size 0x2c8, virtual false, abstract: false, final false
inline ::StringW UpdateScreen_ModIOAccount() ;

/// @brief Method UpdateScreen_RoomSize, addr 0x5a0ab30, size 0x10c, virtual false, abstract: false, final false
inline ::StringW UpdateScreen_RoomSize() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_OKButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_OKButton() ;

constexpr ::StringW const& __cordl_internal_get_accountLinkingPromptString() const;

constexpr ::StringW& __cordl_internal_get_accountLinkingPromptString() ;

constexpr ::StringW const& __cordl_internal_get_alreadyLinkedAccountString() const;

constexpr ::StringW& __cordl_internal_get_alreadyLinkedAccountString() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_buttonsToShow_MODIO() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_buttonsToShow_MODIO() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_buttonsToShow_ROOMSIZE() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_buttonsToShow_ROOMSIZE() ;

constexpr ::StringW const& __cordl_internal_get_cachedError() const;

constexpr ::StringW& __cordl_internal_get_cachedError() ;

constexpr ::StringW const& __cordl_internal_get_cachedLinkCode() const;

constexpr ::StringW& __cordl_internal_get_cachedLinkCode() ;

constexpr ::StringW const& __cordl_internal_get_cachedLinkURL() const;

constexpr ::StringW& __cordl_internal_get_cachedLinkURL() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_contextualButtons() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_contextualButtons() ;

constexpr ::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState& __cordl_internal_get_currentState() ;

constexpr ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard> const& __cordl_internal_get_keyboard() const;

constexpr ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard>& __cordl_internal_get_keyboard() ;

constexpr ::StringW const& __cordl_internal_get_linkAccountPromptString() const;

constexpr ::StringW& __cordl_internal_get_linkAccountPromptString() ;

constexpr ::StringW const& __cordl_internal_get_linkCodeLabelString() const;

constexpr ::StringW& __cordl_internal_get_linkCodeLabelString() ;

constexpr ::StringW const& __cordl_internal_get_loggedInAsString() const;

constexpr ::StringW& __cordl_internal_get_loggedInAsString() ;

constexpr ::StringW const& __cordl_internal_get_loggingInString() const;

constexpr ::StringW& __cordl_internal_get_loggingInString() ;

constexpr ::StringW const& __cordl_internal_get_loggingOutString() const;

constexpr ::StringW& __cordl_internal_get_loggingOutString() ;

constexpr ::StringW const& __cordl_internal_get_loginPromptString() const;

constexpr ::StringW& __cordl_internal_get_loginPromptString() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_mainScreenText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_mainScreenText() ;

constexpr ::StringW const& __cordl_internal_get_notLoggedInString() const;

constexpr ::StringW& __cordl_internal_get_notLoggedInString() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_optionList() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_optionList() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_optionStrings() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_optionStrings() ;

constexpr bool const& __cordl_internal_get_processingAccountLink() const;

constexpr bool& __cordl_internal_get_processingAccountLink() ;

constexpr ::StringW const& __cordl_internal_get_roomSizeDescriptionString() const;

constexpr ::StringW& __cordl_internal_get_roomSizeDescriptionString() ;

constexpr ::StringW const& __cordl_internal_get_roomSizeLabelString() const;

constexpr ::StringW& __cordl_internal_get_roomSizeLabelString() ;

constexpr ::StringW const& __cordl_internal_get_urlLabelString() const;

constexpr ::StringW& __cordl_internal_get_urlLabelString() ;

constexpr void __cordl_internal_set_OKButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_accountLinkingPromptString(::StringW  value) ;

constexpr void __cordl_internal_set_alreadyLinkedAccountString(::StringW  value) ;

constexpr void __cordl_internal_set_buttonsToShow_MODIO(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_buttonsToShow_ROOMSIZE(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_cachedError(::StringW  value) ;

constexpr void __cordl_internal_set_cachedLinkCode(::StringW  value) ;

constexpr void __cordl_internal_set_cachedLinkURL(::StringW  value) ;

constexpr void __cordl_internal_set_contextualButtons(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState  value) ;

constexpr void __cordl_internal_set_keyboard(::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard>  value) ;

constexpr void __cordl_internal_set_linkAccountPromptString(::StringW  value) ;

constexpr void __cordl_internal_set_linkCodeLabelString(::StringW  value) ;

constexpr void __cordl_internal_set_loggedInAsString(::StringW  value) ;

constexpr void __cordl_internal_set_loggingInString(::StringW  value) ;

constexpr void __cordl_internal_set_loggingOutString(::StringW  value) ;

constexpr void __cordl_internal_set_loginPromptString(::StringW  value) ;

constexpr void __cordl_internal_set_mainScreenText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_notLoggedInString(::StringW  value) ;

constexpr void __cordl_internal_set_optionList(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_optionStrings(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_processingAccountLink(bool  value) ;

constexpr void __cordl_internal_set_roomSizeDescriptionString(::StringW  value) ;

constexpr void __cordl_internal_set_roomSizeLabelString(::StringW  value) ;

constexpr void __cordl_internal_set_urlLabelString(::StringW  value) ;

/// @brief Method .ctor, addr 0x5a0b1c8, size 0x40c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Customizations::IWssAuthPrompter"
constexpr ::Modio::Customizations::IWssAuthPrompter* i___Modio__Customizations__IWssAuthPrompter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualStumpOptionsTerminal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpOptionsTerminal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualStumpOptionsTerminal(VirtualStumpOptionsTerminal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpOptionsTerminal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualStumpOptionsTerminal(VirtualStumpOptionsTerminal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2769};

/// [SerializeField]
/// @brief Field optionList, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___optionList;

/// [SerializeField]
/// @brief Field mainScreenText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___mainScreenText;

/// [SerializeField]
/// @brief Field keyboard, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard>  ___keyboard;

/// [SerializeField]
/// @brief Field optionStrings, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___optionStrings;

/// [SerializeField]
/// @brief Field loggedInAsString, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___loggedInAsString;

/// [SerializeField]
/// @brief Field notLoggedInString, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___notLoggedInString;

/// [SerializeField]
/// @brief Field loginPromptString, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___loginPromptString;

/// [SerializeField]
/// @brief Field loggingInString, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___loggingInString;

/// [SerializeField]
/// @brief Field loggingOutString, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___loggingOutString;

/// [SerializeField]
/// @brief Field linkAccountPromptString, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___linkAccountPromptString;

/// [SerializeField]
/// @brief Field alreadyLinkedAccountString, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___alreadyLinkedAccountString;

/// [SerializeField]
/// @brief Field accountLinkingPromptString, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___accountLinkingPromptString;

/// [SerializeField]
/// @brief Field urlLabelString, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___urlLabelString;

/// [SerializeField]
/// @brief Field linkCodeLabelString, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___linkCodeLabelString;

/// [SerializeField]
/// @brief Field roomSizeDescriptionString, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___roomSizeDescriptionString;

/// [SerializeField]
/// @brief Field roomSizeLabelString, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___roomSizeLabelString;

/// [SerializeField]
/// @brief Field OKButton, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___OKButton;

/// [SerializeField]
/// @brief Field contextualButtons, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___contextualButtons;

/// [SerializeField]
/// @brief Field buttonsToShow_MODIO, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___buttonsToShow_MODIO;

/// [SerializeField]
/// @brief Field buttonsToShow_ROOMSIZE, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___buttonsToShow_ROOMSIZE;

/// @brief Field processingAccountLink, offset: 0xc0, size: 0x1, def value: None
 bool  ___processingAccountLink;

/// @brief Field cachedLinkURL, offset: 0xc8, size: 0x8, def value: None
 ::StringW  ___cachedLinkURL;

/// @brief Field cachedLinkCode, offset: 0xd0, size: 0x8, def value: None
 ::StringW  ___cachedLinkCode;

/// @brief Field cachedError, offset: 0xd8, size: 0x8, def value: None
 ::StringW  ___cachedError;

/// @brief Field currentState, offset: 0xe0, size: 0x4, def value: None
 ::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState  ___currentState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___optionList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___mainScreenText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___keyboard) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___optionStrings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___loggedInAsString) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___notLoggedInString) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___loginPromptString) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___loggingInString) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___loggingOutString) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___linkAccountPromptString) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___alreadyLinkedAccountString) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___accountLinkingPromptString) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___urlLabelString) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___linkCodeLabelString) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___roomSizeDescriptionString) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___roomSizeLabelString) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___OKButton) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___contextualButtons) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___buttonsToShow_MODIO) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___buttonsToShow_ROOMSIZE) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___processingAccountLink) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___cachedLinkURL) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___cachedLinkCode) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___cachedError) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal, ___currentState) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VirtualStumpOptionsTerminal) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VirtualStumpOptionsTerminal/<>c
class CORDL_TYPE VirtualStumpOptionsTerminal___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::VirtualStumpOptionsTerminal___c*  __9;

/// @brief Field <>9__35_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__35_0, put=setStaticF___9__35_0)) ::System::Action_1<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>*  __9__35_0;

static inline ::GlobalNamespace::VirtualStumpOptionsTerminal___c* New_ctor() ;

/// @brief Method <OnModIOLoggedIn>b__35_0, addr 0x5a0b644, size 0x4, virtual false, abstract: false, final false
inline void _OnModIOLoggedIn_b__35_0(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*  response) ;

/// @brief Method .ctor, addr 0x5a0b63c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::VirtualStumpOptionsTerminal___c* getStaticF___9() ;

static inline ::System::Action_1<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>* getStaticF___9__35_0() ;

static inline void setStaticF___9(::GlobalNamespace::VirtualStumpOptionsTerminal___c*  value) ;

static inline void setStaticF___9__35_0(::System::Action_1<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualStumpOptionsTerminal___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpOptionsTerminal___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualStumpOptionsTerminal___c(VirtualStumpOptionsTerminal___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpOptionsTerminal___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualStumpOptionsTerminal___c(VirtualStumpOptionsTerminal___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2767};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::VirtualStumpOptionsTerminal___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
