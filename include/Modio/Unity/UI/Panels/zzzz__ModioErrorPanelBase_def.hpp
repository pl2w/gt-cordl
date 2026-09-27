#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioErrorPanelBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioErrorPanelBase)
namespace GlobalNamespace {
struct ModioErrorPanelBase__MonitorTaskThenOpenPanelIfError_d__14;
}
namespace Modio::Unity::UI::Components::Localization {
class ModioUILocalizedText;
}
namespace Modio::Unity::UI::Panels {
class ModioErrorPanelBase_ErrorMessageResponse;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels {
class ModioErrorPanelBase;
}
namespace Modio::Unity::UI::Panels {
class ModioErrorPanelBase_ErrorMessageResponse;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::ModioErrorPanelBase*);
MARK_REF_T(::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModioErrorPanelBase*, "Modio.Unity.UI.Panels", "ModioErrorPanelBase");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse*, "Modio.Unity.UI.Panels", "ModioErrorPanelBase/ErrorMessageResponse");
// Dependencies Modio.Unity.UI.Panels.ModioErrorPanelBase::ErrorMessageResponse, Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModioErrorPanelBase
class CORDL_TYPE ModioErrorPanelBase : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
using _MonitorTaskThenOpenPanelIfError_d__14 = ::GlobalNamespace::ModioErrorPanelBase__MonitorTaskThenOpenPanelIfError_d__14;

using ErrorMessageResponse = ::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse;

/// @brief Field _action, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__action, put=__cordl_internal_set__action)) ::System::Action*  _action;

/// @brief Field _actionMessageLocalised, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__actionMessageLocalised, put=__cordl_internal_set__actionMessageLocalised)) ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  _actionMessageLocalised;

/// @brief Field _errorCode, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorCode, put=__cordl_internal_set__errorCode)) ::UnityW<::TMPro::TMP_Text>  _errorCode;

/// @brief Field _errorCodeLocalised, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorCodeLocalised, put=__cordl_internal_set__errorCodeLocalised)) ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  _errorCodeLocalised;

/// @brief Field _errorMessageLocalised, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorMessageLocalised, put=__cordl_internal_set__errorMessageLocalised)) ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  _errorMessageLocalised;

/// @brief Field _errorMessageResponses, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorMessageResponses, put=__cordl_internal_set__errorMessageResponses)) ::ArrayW<::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse*>  _errorMessageResponses;

/// @brief Field _showWhenActionProvided, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__showWhenActionProvided, put=__cordl_internal_set__showWhenActionProvided)) ::UnityW<::UnityEngine::GameObject>  _showWhenActionProvided;

/// @brief Field _titleLocalised, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__titleLocalised, put=__cordl_internal_set__titleLocalised)) ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  _titleLocalised;

/// @brief Field _useLocalizedActionPrompt, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__useLocalizedActionPrompt, put=__cordl_internal_set__useLocalizedActionPrompt)) bool  _useLocalizedActionPrompt;

/// @brief Method CancelPressed, addr 0x9fa8028, size 0x34, virtual true, abstract: false, final false
inline void CancelPressed() ;

/// @brief Method InvokeAction, addr 0x9fa8158, size 0x2c, virtual false, abstract: false, final false
inline void InvokeAction() ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Panels.ModioErrorPanelBase::<MonitorTaskThenOpenPanelIfError>d__14))]
/// @brief Method MonitorTaskThenOpenPanelIfError, addr 0x9fa8060, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* MonitorTaskThenOpenPanelIfError(::System::Threading::Tasks::Task_1<::Modio::Error*>*  task) ;

static inline ::Modio::Unity::UI::Panels::ModioErrorPanelBase* New_ctor() ;

/// @brief Method OpenPanel, addr 0x9fa4c34, size 0x5a8, virtual false, abstract: false, final false
inline void OpenPanel(::Modio::Error*  error) ;

/// @brief Method OpenPanel, addr 0x9fa7ef8, size 0x130, virtual false, abstract: false, final false
inline void OpenPanel(::StringW  message) ;

/// @brief Method OpenPanel, addr 0x9fa7ce4, size 0x214, virtual false, abstract: false, final false
inline void OpenPanel(::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse*  response, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

constexpr ::System::Action* const& __cordl_internal_get__action() const;

constexpr ::System::Action*& __cordl_internal_get__action() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& __cordl_internal_get__actionMessageLocalised() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& __cordl_internal_get__actionMessageLocalised() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__errorCode() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__errorCode() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& __cordl_internal_get__errorCodeLocalised() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& __cordl_internal_get__errorCodeLocalised() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& __cordl_internal_get__errorMessageLocalised() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& __cordl_internal_get__errorMessageLocalised() ;

constexpr ::ArrayW<::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse*> const& __cordl_internal_get__errorMessageResponses() const;

constexpr ::ArrayW<::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse*>& __cordl_internal_get__errorMessageResponses() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__showWhenActionProvided() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__showWhenActionProvided() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& __cordl_internal_get__titleLocalised() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& __cordl_internal_get__titleLocalised() ;

constexpr bool const& __cordl_internal_get__useLocalizedActionPrompt() const;

constexpr bool& __cordl_internal_get__useLocalizedActionPrompt() ;

constexpr void __cordl_internal_set__action(::System::Action*  value) ;

constexpr void __cordl_internal_set__actionMessageLocalised(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value) ;

constexpr void __cordl_internal_set__errorCode(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__errorCodeLocalised(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value) ;

constexpr void __cordl_internal_set__errorMessageLocalised(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value) ;

constexpr void __cordl_internal_set__errorMessageResponses(::ArrayW<::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse*>  value) ;

constexpr void __cordl_internal_set__showWhenActionProvided(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__titleLocalised(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value) ;

constexpr void __cordl_internal_set__useLocalizedActionPrompt(bool  value) ;

/// @brief Method .ctor, addr 0x9fa8184, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioErrorPanelBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioErrorPanelBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioErrorPanelBase(ModioErrorPanelBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioErrorPanelBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioErrorPanelBase(ModioErrorPanelBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27071};

/// [SerializeField]
/// @brief Field _titleLocalised, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  ____titleLocalised;

/// [SerializeField]
/// @brief Field _errorCode, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____errorCode;

/// [SerializeField]
/// @brief Field _errorCodeLocalised, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  ____errorCodeLocalised;

/// [SerializeField]
/// @brief Field _errorMessageLocalised, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  ____errorMessageLocalised;

/// [SerializeField]
/// @brief Field _showWhenActionProvided, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____showWhenActionProvided;

/// [SerializeField]
/// @brief Field _actionMessageLocalised, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  ____actionMessageLocalised;

/// [SerializeField]
/// @brief Field _errorMessageResponses, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse*>  ____errorMessageResponses;

/// @brief Field _action, offset: 0x90, size: 0x8, def value: None
 ::System::Action*  ____action;

/// @brief Field _useLocalizedActionPrompt, offset: 0x98, size: 0x1, def value: None
 bool  ____useLocalizedActionPrompt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::ModioErrorPanelBase, ____titleLocalised) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioErrorPanelBase, ____errorCode) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioErrorPanelBase, ____errorCodeLocalised) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioErrorPanelBase, ____errorMessageLocalised) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioErrorPanelBase, ____showWhenActionProvided) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioErrorPanelBase, ____actionMessageLocalised) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioErrorPanelBase, ____errorMessageResponses) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioErrorPanelBase, ____action) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioErrorPanelBase, ____useLocalizedActionPrompt) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::ModioErrorPanelBase) == 0xa0, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
// Dependencies System.Object
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModioErrorPanelBase/ErrorMessageResponse
class CORDL_TYPE ModioErrorPanelBase_ErrorMessageResponse : public ::System::Object {
public:
// Declarations
/// @brief Field actionPromptLocalised, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_actionPromptLocalised, put=__cordl_internal_set_actionPromptLocalised)) ::StringW  actionPromptLocalised;

/// @brief Field apiCode, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_apiCode, put=__cordl_internal_set_apiCode)) ::System::Collections::Generic::List_1<int64_t>*  apiCode;

/// @brief Field errorCode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorCode, put=__cordl_internal_set_errorCode)) ::System::Collections::Generic::List_1<int64_t>*  errorCode;

/// @brief Field onActionPressed, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onActionPressed, put=__cordl_internal_set_onActionPressed)) ::UnityEngine::Events::UnityEvent*  onActionPressed;

/// @brief Field windowMessageLocalised, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_windowMessageLocalised, put=__cordl_internal_set_windowMessageLocalised)) ::StringW  windowMessageLocalised;

/// @brief Field windowTitleLocalised, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_windowTitleLocalised, put=__cordl_internal_set_windowTitleLocalised)) ::StringW  windowTitleLocalised;

static inline ::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_actionPromptLocalised() const;

constexpr ::StringW& __cordl_internal_get_actionPromptLocalised() ;

constexpr ::System::Collections::Generic::List_1<int64_t>* const& __cordl_internal_get_apiCode() const;

constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get_apiCode() ;

constexpr ::System::Collections::Generic::List_1<int64_t>* const& __cordl_internal_get_errorCode() const;

constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get_errorCode() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onActionPressed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onActionPressed() ;

constexpr ::StringW const& __cordl_internal_get_windowMessageLocalised() const;

constexpr ::StringW& __cordl_internal_get_windowMessageLocalised() ;

constexpr ::StringW const& __cordl_internal_get_windowTitleLocalised() const;

constexpr ::StringW& __cordl_internal_get_windowTitleLocalised() ;

constexpr void __cordl_internal_set_actionPromptLocalised(::StringW  value) ;

constexpr void __cordl_internal_set_apiCode(::System::Collections::Generic::List_1<int64_t>*  value) ;

constexpr void __cordl_internal_set_errorCode(::System::Collections::Generic::List_1<int64_t>*  value) ;

constexpr void __cordl_internal_set_onActionPressed(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_windowMessageLocalised(::StringW  value) ;

constexpr void __cordl_internal_set_windowTitleLocalised(::StringW  value) ;

/// @brief Method .ctor, addr 0x9fa818c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioErrorPanelBase_ErrorMessageResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioErrorPanelBase_ErrorMessageResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioErrorPanelBase_ErrorMessageResponse(ModioErrorPanelBase_ErrorMessageResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioErrorPanelBase_ErrorMessageResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioErrorPanelBase_ErrorMessageResponse(ModioErrorPanelBase_ErrorMessageResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27069};

/// @brief Field errorCode, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int64_t>*  ___errorCode;

/// @brief Field apiCode, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int64_t>*  ___apiCode;

/// @brief Field windowTitleLocalised, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___windowTitleLocalised;

/// @brief Field windowMessageLocalised, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___windowMessageLocalised;

/// @brief Field actionPromptLocalised, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___actionPromptLocalised;

/// @brief Field onActionPressed, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onActionPressed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse, ___errorCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse, ___apiCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse, ___windowTitleLocalised) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse, ___windowMessageLocalised) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse, ___actionPromptLocalised) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse, ___onActionPressed) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse) == 0x40, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
