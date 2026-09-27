#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDMessagingController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KIDMessagingController)
namespace GlobalNamespace {
struct KIDMessagingController__GetSetupConfirmationMessage_d__21;
}
namespace GlobalNamespace {
struct KIDMessagingController__StartKIDConfirmationScreenInternal_d__18;
}
namespace GlobalNamespace {
struct KIDMessagingController__StartKIDConfirmationScreen_d__20;
}
namespace GlobalNamespace {
class KIDMessagingController___c__DisplayClass21_0;
}
namespace GlobalNamespace {
class MessageBox;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDMessagingController;
}
namespace GlobalNamespace {
class KIDMessagingController___c__DisplayClass21_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDMessagingController*);
MARK_REF_T(::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDMessagingController*, "", "KIDMessagingController");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0*, "", "KIDMessagingController/<>c__DisplayClass21_0");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDMessagingController
class CORDL_TYPE KIDMessagingController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _GetSetupConfirmationMessage_d__21 = ::GlobalNamespace::KIDMessagingController__GetSetupConfirmationMessage_d__21;

using _StartKIDConfirmationScreenInternal_d__18 = ::GlobalNamespace::KIDMessagingController__StartKIDConfirmationScreenInternal_d__18;

using _StartKIDConfirmationScreen_d__20 = ::GlobalNamespace::KIDMessagingController__StartKIDConfirmationScreen_d__20;

using __c__DisplayClass21_0 = ::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0;

/// @brief Field _closeMessageBox, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__closeMessageBox, put=__cordl_internal_set__closeMessageBox)) bool  _closeMessageBox;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::KIDMessagingController>  instance;

/// @brief Field messageBox, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_messageBox, put=__cordl_internal_set_messageBox)) ::UnityW<::GlobalNamespace::MessageBox>  messageBox;

/// @brief Method Awake, addr 0x5a45b9c, size 0x110, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetConfirmMessageFromTitleDataJson, addr 0x5a45f54, size 0x144, virtual false, abstract: false, final false
static inline ::StringW GetConfirmMessageFromTitleDataJson(::StringW  jsonTxt) ;

/// [AsyncStateMachine(typeof(KIDMessagingController::<GetSetupConfirmationMessage>d__21))]
/// @brief Method GetSetupConfirmationMessage, addr 0x5a45e68, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::StringW>* GetSetupConfirmationMessage() ;

static inline ::GlobalNamespace::KIDMessagingController* New_ctor() ;

/// @brief Method OnConfirmPressed, addr 0x5a45b90, size 0xc, virtual false, abstract: false, final false
inline void OnConfirmPressed() ;

/// @brief Method OnDisable, addr 0x5a45e40, size 0x28, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method ShouldShowConfirmationScreen, addr 0x5a45cac, size 0x9c, virtual false, abstract: false, final false
inline bool ShouldShowConfirmationScreen() ;

/// @brief Method ShowConnectionErrorScreen, addr 0x5a46098, size 0x2cc, virtual false, abstract: false, final false
static inline void ShowConnectionErrorScreen() ;

/// [AsyncStateMachine(typeof(KIDMessagingController::<StartKIDConfirmationScreen>d__20))]
/// @brief Method StartKIDConfirmationScreen, addr 0x5a35a24, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* StartKIDConfirmationScreen(::System::Threading::CancellationToken  token) ;

/// [AsyncStateMachine(typeof(KIDMessagingController::<StartKIDConfirmationScreenInternal>d__18))]
/// @brief Method StartKIDConfirmationScreenInternal, addr 0x5a45d48, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* StartKIDConfirmationScreenInternal(::System::Threading::CancellationToken  token) ;

constexpr bool const& __cordl_internal_get__closeMessageBox() const;

constexpr bool& __cordl_internal_get__closeMessageBox() ;

constexpr ::UnityW<::GlobalNamespace::MessageBox> const& __cordl_internal_get_messageBox() const;

constexpr ::UnityW<::GlobalNamespace::MessageBox>& __cordl_internal_get_messageBox() ;

constexpr void __cordl_internal_set__closeMessageBox(bool  value) ;

constexpr void __cordl_internal_set_messageBox(::UnityW<::GlobalNamespace::MessageBox>  value) ;

/// @brief Method .ctor, addr 0x5a46364, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::KIDMessagingController> getStaticF_instance() ;

/// @brief Method get_HasShownConfirmationScreenPlayerPref, addr 0x5a45b1c, size 0x74, virtual false, abstract: false, final false
static inline ::StringW get_HasShownConfirmationScreenPlayerPref() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::KIDMessagingController>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDMessagingController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDMessagingController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDMessagingController(KIDMessagingController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDMessagingController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDMessagingController(KIDMessagingController const& ) = delete;

/// @brief Field CONFIRMATION_BODY offset 0xffffffff size 0x8
static constexpr ::ConstString  CONFIRMATION_BODY{u"k-ID setup is now complete. Thanks and have fun in Gorilla World!"};

/// @brief Field CONFIRMATION_BUTTON offset 0xffffffff size 0x8
static constexpr ::ConstString  CONFIRMATION_BUTTON{u"Continue"};

/// @brief Field CONFIRMATION_HEADER offset 0xffffffff size 0x8
static constexpr ::ConstString  CONFIRMATION_HEADER{u"Thank you"};

/// @brief Field CONNECTION_ERROR_BODY offset 0xffffffff size 0x8
static constexpr ::ConstString  CONNECTION_ERROR_BODY{u"Unable to connect to the internet. Please restart the game and try again."};

/// @brief Field CONNECTION_ERROR_BUTTON offset 0xffffffff size 0x8
static constexpr ::ConstString  CONNECTION_ERROR_BUTTON{u"Quit"};

/// @brief Field CONNECTION_ERROR_HEADER offset 0xffffffff size 0x8
static constexpr ::ConstString  CONNECTION_ERROR_HEADER{u"Connection Error"};

/// @brief Field KID_SETUP_CONFIRMATION_BODY_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_SETUP_CONFIRMATION_BODY_KEY{u"KID_SETUP_CONFIRMATION_BODY"};

/// @brief Field KID_SETUP_CONFIRMATION_BUTTON_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_SETUP_CONFIRMATION_BUTTON_KEY{u"KID_SETUP_CONFIRMATION_BUTTON"};

/// @brief Field KID_SETUP_CONFIRMATION_TITLE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_SETUP_CONFIRMATION_TITLE_KEY{u"KID_SETUP_CONFIRMATION_TITLE"};

/// @brief Field SHOWN_CONFIRMATION_SCREEN_PREFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  SHOWN_CONFIRMATION_SCREEN_PREFIX{u"hasShownKIDConfirmationScreen-"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2984};

/// [SerializeField]
/// @brief Field messageBox, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MessageBox>  ___messageBox;

/// @brief Field _closeMessageBox, offset: 0x28, size: 0x1, def value: None
 bool  ____closeMessageBox;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDMessagingController, ___messageBox) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDMessagingController, ____closeMessageBox) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDMessagingController) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDMessagingController/<>c__DisplayClass21_0
class CORDL_TYPE KIDMessagingController___c__DisplayClass21_0 : public ::System::Object {
public:
// Declarations
/// @brief Field bodyText, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyText, put=__cordl_internal_set_bodyText)) ::StringW  bodyText;

/// @brief Field state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) int32_t  state;

static inline ::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0* New_ctor() ;

/// @brief Method <GetSetupConfirmationMessage>b__0, addr 0x5a46374, size 0x2c, virtual false, abstract: false, final false
inline void _GetSetupConfirmationMessage_b__0(::StringW  res) ;

/// @brief Method <GetSetupConfirmationMessage>b__1, addr 0x5a463a0, size 0x98, virtual false, abstract: false, final false
inline void _GetSetupConfirmationMessage_b__1(::PlayFab::PlayFabError*  err) ;

constexpr ::StringW const& __cordl_internal_get_bodyText() const;

constexpr ::StringW& __cordl_internal_get_bodyText() ;

constexpr int32_t const& __cordl_internal_get_state() const;

constexpr int32_t& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_bodyText(::StringW  value) ;

constexpr void __cordl_internal_set_state(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a4636c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDMessagingController___c__DisplayClass21_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDMessagingController___c__DisplayClass21_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDMessagingController___c__DisplayClass21_0(KIDMessagingController___c__DisplayClass21_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDMessagingController___c__DisplayClass21_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDMessagingController___c__DisplayClass21_0(KIDMessagingController___c__DisplayClass21_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2980};

/// @brief Field state, offset: 0x10, size: 0x4, def value: None
 int32_t  ___state;

/// @brief Field bodyText, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___bodyText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0, ___state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0, ___bodyText) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
