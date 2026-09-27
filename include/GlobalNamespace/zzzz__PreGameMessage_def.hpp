#pragma once
// IWYU pragma private; include "GlobalNamespace/PreGameMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PreGameMessage)
namespace GlobalNamespace {
struct PreGameMessage__ShowMessageWithAwait_d__20;
}
namespace GlobalNamespace {
struct PreGameMessage__WaitForCompletion_d__23;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class LineRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class PreGameMessage;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PreGameMessage*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PreGameMessage*, "", "PreGameMessage");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PreGameMessage
class CORDL_TYPE PreGameMessage : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _ShowMessageWithAwait_d__20 = ::GlobalNamespace::PreGameMessage__ShowMessageWithAwait_d__20;

using _WaitForCompletion_d__23 = ::GlobalNamespace::PreGameMessage__WaitForCompletion_d__23;

/// @brief Field _alternativeAction, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__alternativeAction, put=__cordl_internal_set__alternativeAction)) ::System::Action*  _alternativeAction;

/// @brief Field _confirmButtonRoot, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmButtonRoot, put=__cordl_internal_set__confirmButtonRoot)) ::UnityW<::UnityEngine::GameObject>  _confirmButtonRoot;

/// @brief Field _confirmationAction, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmationAction, put=__cordl_internal_set__confirmationAction)) ::System::Action*  _confirmationAction;

/// @brief Field _hasCompleted, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasCompleted, put=__cordl_internal_set__hasCompleted)) bool  _hasCompleted;

/// @brief Field _messageAlternativeButtonTxt, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__messageAlternativeButtonTxt, put=__cordl_internal_set__messageAlternativeButtonTxt)) ::UnityW<::TMPro::TMP_Text>  _messageAlternativeButtonTxt;

/// @brief Field _messageAlternativeConfirmationTxt, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__messageAlternativeConfirmationTxt, put=__cordl_internal_set__messageAlternativeConfirmationTxt)) ::UnityW<::TMPro::TMP_Text>  _messageAlternativeConfirmationTxt;

/// @brief Field _messageBodyTxt, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__messageBodyTxt, put=__cordl_internal_set__messageBodyTxt)) ::UnityW<::TMPro::TMP_Text>  _messageBodyTxt;

/// @brief Field _messageConfirmationTxt, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__messageConfirmationTxt, put=__cordl_internal_set__messageConfirmationTxt)) ::UnityW<::TMPro::TMP_Text>  _messageConfirmationTxt;

/// @brief Field _messageTitleTxt, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__messageTitleTxt, put=__cordl_internal_set__messageTitleTxt)) ::UnityW<::TMPro::TMP_Text>  _messageTitleTxt;

/// @brief Field _multiButtonRoot, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__multiButtonRoot, put=__cordl_internal_set__multiButtonRoot)) ::UnityW<::UnityEngine::GameObject>  _multiButtonRoot;

/// @brief Field _uiParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__uiParent, put=__cordl_internal_set__uiParent)) ::UnityW<::UnityEngine::GameObject>  _uiParent;

/// @brief Field holdTime, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_holdTime, put=__cordl_internal_set_holdTime)) float_t  holdTime;

/// @brief Field progress, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) float_t  progress;

/// @brief Field progressBar, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressBar, put=__cordl_internal_set_progressBar)) ::UnityW<::UnityEngine::LineRenderer>  progressBar;

/// @brief Field progressBarL, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressBarL, put=__cordl_internal_set_progressBarL)) ::UnityW<::UnityEngine::LineRenderer>  progressBarL;

/// @brief Field progressBarR, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressBarR, put=__cordl_internal_set_progressBarR)) ::UnityW<::UnityEngine::LineRenderer>  progressBarR;

/// @brief Method CloseMessage, addr 0x5a42a30, size 0x24, virtual false, abstract: false, final false
inline void CloseMessage() ;

static inline ::GlobalNamespace::PreGameMessage* New_ctor() ;

/// @brief Method OnAlternativePressed, addr 0x5a42f94, size 0x50, virtual false, abstract: false, final false
inline void OnAlternativePressed() ;

/// @brief Method OnConfirmedPressed, addr 0x5a42f44, size 0x50, virtual false, abstract: false, final false
inline void OnConfirmedPressed() ;

/// @brief Method OnDisable, addr 0x5a42390, size 0x150, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5a42258, size 0x138, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PostUpdate, addr 0x5a42b2c, size 0x418, virtual false, abstract: false, final false
inline void PostUpdate() ;

/// @brief Method ShowMessage, addr 0x5a424e0, size 0x154, virtual false, abstract: false, final false
inline void ShowMessage(::StringW  messageTitle, ::StringW  messageBody, ::StringW  messageConfirmation, ::System::Action*  onConfirmationAction, float_t  bodyFontSize, float_t  buttonHideTimer) ;

/// @brief Method ShowMessage, addr 0x5a42634, size 0x200, virtual false, abstract: false, final false
inline void ShowMessage(::StringW  messageTitle, ::StringW  messageBody, ::StringW  messageConfirmationButton, ::StringW  messageAlternativeButton, ::System::Action*  onConfirmationAction, ::System::Action*  onAlternativeAction, float_t  bodyFontSize) ;

/// [AsyncStateMachine(typeof(PreGameMessage::<ShowMessageWithAwait>d__20))]
/// @brief Method ShowMessageWithAwait, addr 0x5a42834, size 0x150, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ShowMessageWithAwait(::StringW  messageTitle, ::StringW  messageBody, ::StringW  messageConfirmation, ::System::Action*  onConfirmationAction, float_t  bodyFontSize, float_t  buttonHideTimer) ;

/// @brief Method UpdateMessage, addr 0x5a42984, size 0xac, virtual false, abstract: false, final false
inline void UpdateMessage(::StringW  newMessageBody, ::StringW  newConfirmButton) ;

/// [AsyncStateMachine(typeof(PreGameMessage::<WaitForCompletion>d__23))]
/// @brief Method WaitForCompletion, addr 0x5a42a54, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForCompletion() ;

constexpr ::System::Action* const& __cordl_internal_get__alternativeAction() const;

constexpr ::System::Action*& __cordl_internal_get__alternativeAction() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__confirmButtonRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__confirmButtonRoot() ;

constexpr ::System::Action* const& __cordl_internal_get__confirmationAction() const;

constexpr ::System::Action*& __cordl_internal_get__confirmationAction() ;

constexpr bool const& __cordl_internal_get__hasCompleted() const;

constexpr bool& __cordl_internal_get__hasCompleted() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__messageAlternativeButtonTxt() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__messageAlternativeButtonTxt() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__messageAlternativeConfirmationTxt() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__messageAlternativeConfirmationTxt() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__messageBodyTxt() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__messageBodyTxt() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__messageConfirmationTxt() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__messageConfirmationTxt() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__messageTitleTxt() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__messageTitleTxt() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__multiButtonRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__multiButtonRoot() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__uiParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__uiParent() ;

constexpr float_t const& __cordl_internal_get_holdTime() const;

constexpr float_t& __cordl_internal_get_holdTime() ;

constexpr float_t const& __cordl_internal_get_progress() const;

constexpr float_t& __cordl_internal_get_progress() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_progressBar() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_progressBar() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_progressBarL() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_progressBarL() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_progressBarR() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_progressBarR() ;

constexpr void __cordl_internal_set__alternativeAction(::System::Action*  value) ;

constexpr void __cordl_internal_set__confirmButtonRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__confirmationAction(::System::Action*  value) ;

constexpr void __cordl_internal_set__hasCompleted(bool  value) ;

constexpr void __cordl_internal_set__messageAlternativeButtonTxt(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__messageAlternativeConfirmationTxt(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__messageBodyTxt(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__messageConfirmationTxt(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__messageTitleTxt(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__multiButtonRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__uiParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_holdTime(float_t  value) ;

constexpr void __cordl_internal_set_progress(float_t  value) ;

constexpr void __cordl_internal_set_progressBar(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_progressBarL(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_progressBarR(::UnityW<::UnityEngine::LineRenderer>  value) ;

/// @brief Method .ctor, addr 0x5a42fe4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreGameMessage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreGameMessage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PreGameMessage(PreGameMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreGameMessage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreGameMessage(PreGameMessage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2969};

/// [SerializeField]
/// @brief Field _uiParent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____uiParent;

/// [SerializeField]
/// @brief Field _messageTitleTxt, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____messageTitleTxt;

/// [SerializeField]
/// @brief Field _messageBodyTxt, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____messageBodyTxt;

/// [SerializeField]
/// @brief Field _confirmButtonRoot, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____confirmButtonRoot;

/// [SerializeField]
/// @brief Field _multiButtonRoot, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____multiButtonRoot;

/// [SerializeField]
/// @brief Field _messageConfirmationTxt, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____messageConfirmationTxt;

/// [SerializeField]
/// @brief Field _messageAlternativeConfirmationTxt, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____messageAlternativeConfirmationTxt;

/// [SerializeField]
/// @brief Field _messageAlternativeButtonTxt, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____messageAlternativeButtonTxt;

/// @brief Field _confirmationAction, offset: 0x60, size: 0x8, def value: None
 ::System::Action*  ____confirmationAction;

/// @brief Field _alternativeAction, offset: 0x68, size: 0x8, def value: None
 ::System::Action*  ____alternativeAction;

/// @brief Field _hasCompleted, offset: 0x70, size: 0x1, def value: None
 bool  ____hasCompleted;

/// @brief Field progress, offset: 0x74, size: 0x4, def value: None
 float_t  ___progress;

/// [SerializeField]
/// @brief Field holdTime, offset: 0x78, size: 0x4, def value: None
 float_t  ___holdTime;

/// [SerializeField]
/// @brief Field progressBar, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___progressBar;

/// [SerializeField]
/// @brief Field progressBarL, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___progressBarL;

/// [SerializeField]
/// @brief Field progressBarR, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___progressBarR;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PreGameMessage, ____uiParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreGameMessage, ____messageTitleTxt) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreGameMessage, ____messageBodyTxt) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreGameMessage, ____confirmButtonRoot) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreGameMessage, ____multiButtonRoot) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreGameMessage, ____messageConfirmationTxt) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreGameMessage, ____messageAlternativeConfirmationTxt) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreGameMessage, ____messageAlternativeButtonTxt) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreGameMessage, ____confirmationAction) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreGameMessage, ____alternativeAction) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreGameMessage, ____hasCompleted) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreGameMessage, ___progress) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreGameMessage, ___holdTime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreGameMessage, ___progressBar) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreGameMessage, ___progressBarL) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreGameMessage, ___progressBarR) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PreGameMessage) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
