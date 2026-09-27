#pragma once
// IWYU pragma private; include "GlobalNamespace/WarningScreens.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__WarningButtonResult_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(WarningScreens)
namespace GlobalNamespace {
class MessageBox;
}
namespace GlobalNamespace {
struct WarningButtonResult;
}
namespace GlobalNamespace {
struct WarningScreens__StartOptInFollowUpScreenInternal_d__15;
}
namespace GlobalNamespace {
struct WarningScreens__StartOptInFollowUpScreen_d__17;
}
namespace GlobalNamespace {
struct WarningScreens__StartWarningScreenInternal_d__14;
}
namespace GlobalNamespace {
struct WarningScreens__StartWarningScreen_d__16;
}
namespace GlobalNamespace {
struct WarningScreens__WaitForResponse_d__18;
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
namespace System {
class Action;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class WarningScreens;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WarningScreens*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WarningScreens*, "", "WarningScreens");
// Dependencies UnityEngine.MonoBehaviour, WarningButtonResult
namespace GlobalNamespace {
// Is value type: false
// CS Name: WarningScreens
class CORDL_TYPE WarningScreens : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _StartOptInFollowUpScreenInternal_d__15 = ::GlobalNamespace::WarningScreens__StartOptInFollowUpScreenInternal_d__15;

using _StartOptInFollowUpScreen_d__17 = ::GlobalNamespace::WarningScreens__StartOptInFollowUpScreen_d__17;

using _StartWarningScreenInternal_d__14 = ::GlobalNamespace::WarningScreens__StartWarningScreenInternal_d__14;

using _StartWarningScreen_d__16 = ::GlobalNamespace::WarningScreens__StartWarningScreen_d__16;

using _WaitForResponse_d__18 = ::GlobalNamespace::WarningScreens__WaitForResponse_d__18;

/// @brief Field _activeReference, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__activeReference, put=setStaticF__activeReference)) ::UnityW<::GlobalNamespace::WarningScreens>  _activeReference;

/// @brief Field _closedMessageBox, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__closedMessageBox, put=setStaticF__closedMessageBox)) bool  _closedMessageBox;

/// @brief Field _imageContainerAfter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__imageContainerAfter, put=__cordl_internal_set__imageContainerAfter)) ::UnityW<::UnityEngine::GameObject>  _imageContainerAfter;

/// @brief Field _imageContainerBefore, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__imageContainerBefore, put=__cordl_internal_set__imageContainerBefore)) ::UnityW<::UnityEngine::GameObject>  _imageContainerBefore;

/// @brief Field _leftButtonResult, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__leftButtonResult, put=setStaticF__leftButtonResult)) ::GlobalNamespace::WarningButtonResult  _leftButtonResult;

/// @brief Field _messageBox, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__messageBox, put=__cordl_internal_set__messageBox)) ::UnityW<::GlobalNamespace::MessageBox>  _messageBox;

/// @brief Field _noImageText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__noImageText, put=__cordl_internal_set__noImageText)) ::UnityW<::TMPro::TMP_Text>  _noImageText;

/// @brief Field _onLeftButtonPressedAction, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__onLeftButtonPressedAction, put=__cordl_internal_set__onLeftButtonPressedAction)) ::System::Action*  _onLeftButtonPressedAction;

/// @brief Field _onRightButtonPressedAction, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__onRightButtonPressedAction, put=__cordl_internal_set__onRightButtonPressedAction)) ::System::Action*  _onRightButtonPressedAction;

/// @brief Field _result, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__result, put=setStaticF__result)) ::GlobalNamespace::WarningButtonResult  _result;

/// @brief Field _rightButtonResult, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__rightButtonResult, put=setStaticF__rightButtonResult)) ::GlobalNamespace::WarningButtonResult  _rightButtonResult;

/// @brief Field _withImageTextAfter, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__withImageTextAfter, put=__cordl_internal_set__withImageTextAfter)) ::UnityW<::TMPro::TMP_Text>  _withImageTextAfter;

/// @brief Field _withImageTextBefore, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__withImageTextBefore, put=__cordl_internal_set__withImageTextBefore)) ::UnityW<::TMPro::TMP_Text>  _withImageTextBefore;

/// @brief Method Awake, addr 0x5a5bd20, size 0x110, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::WarningScreens* New_ctor() ;

/// @brief Method OnDisable, addr 0x5a5c358, size 0x28, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnLeftButtonClicked, addr 0x5a5c380, size 0x7c, virtual false, abstract: false, final false
static inline void OnLeftButtonClicked() ;

/// @brief Method OnRightButtonClicked, addr 0x5a5c3fc, size 0x7c, virtual false, abstract: false, final false
static inline void OnRightButtonClicked() ;

/// [AsyncStateMachine(typeof(WarningScreens::<StartOptInFollowUpScreen>d__17))]
/// @brief Method StartOptInFollowUpScreen, addr 0x5a5c178, size 0x108, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::WarningButtonResult>* StartOptInFollowUpScreen(::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(WarningScreens::<StartOptInFollowUpScreenInternal>d__15))]
/// @brief Method StartOptInFollowUpScreenInternal, addr 0x5a5bf50, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::WarningButtonResult>* StartOptInFollowUpScreenInternal(::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(WarningScreens::<StartWarningScreen>d__16))]
/// @brief Method StartWarningScreen, addr 0x5a5c070, size 0x108, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::WarningButtonResult>* StartWarningScreen(::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(WarningScreens::<StartWarningScreenInternal>d__14))]
/// @brief Method StartWarningScreenInternal, addr 0x5a5be30, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::WarningButtonResult>* StartWarningScreenInternal(::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(WarningScreens::<WaitForResponse>d__18))]
/// @brief Method WaitForResponse, addr 0x5a5c280, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* WaitForResponse(::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__imageContainerAfter() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__imageContainerAfter() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__imageContainerBefore() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__imageContainerBefore() ;

constexpr ::UnityW<::GlobalNamespace::MessageBox> const& __cordl_internal_get__messageBox() const;

constexpr ::UnityW<::GlobalNamespace::MessageBox>& __cordl_internal_get__messageBox() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__noImageText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__noImageText() ;

constexpr ::System::Action* const& __cordl_internal_get__onLeftButtonPressedAction() const;

constexpr ::System::Action*& __cordl_internal_get__onLeftButtonPressedAction() ;

constexpr ::System::Action* const& __cordl_internal_get__onRightButtonPressedAction() const;

constexpr ::System::Action*& __cordl_internal_get__onRightButtonPressedAction() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__withImageTextAfter() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__withImageTextAfter() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__withImageTextBefore() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__withImageTextBefore() ;

constexpr void __cordl_internal_set__imageContainerAfter(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__imageContainerBefore(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__messageBox(::UnityW<::GlobalNamespace::MessageBox>  value) ;

constexpr void __cordl_internal_set__noImageText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__onLeftButtonPressedAction(::System::Action*  value) ;

constexpr void __cordl_internal_set__onRightButtonPressedAction(::System::Action*  value) ;

constexpr void __cordl_internal_set__withImageTextAfter(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__withImageTextBefore(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x5a5c478, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::WarningScreens> getStaticF__activeReference() ;

static inline bool getStaticF__closedMessageBox() ;

static inline ::GlobalNamespace::WarningButtonResult getStaticF__leftButtonResult() ;

static inline ::GlobalNamespace::WarningButtonResult getStaticF__result() ;

static inline ::GlobalNamespace::WarningButtonResult getStaticF__rightButtonResult() ;

static inline void setStaticF__activeReference(::UnityW<::GlobalNamespace::WarningScreens>  value) ;

static inline void setStaticF__closedMessageBox(bool  value) ;

static inline void setStaticF__leftButtonResult(::GlobalNamespace::WarningButtonResult  value) ;

static inline void setStaticF__result(::GlobalNamespace::WarningButtonResult  value) ;

static inline void setStaticF__rightButtonResult(::GlobalNamespace::WarningButtonResult  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WarningScreens() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WarningScreens", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WarningScreens(WarningScreens && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WarningScreens", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WarningScreens(WarningScreens const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3049};

/// [SerializeField]
/// @brief Field _messageBox, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MessageBox>  ____messageBox;

/// [SerializeField]
/// @brief Field _imageContainerAfter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____imageContainerAfter;

/// [SerializeField]
/// @brief Field _imageContainerBefore, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____imageContainerBefore;

/// [SerializeField]
/// @brief Field _withImageTextBefore, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____withImageTextBefore;

/// [SerializeField]
/// @brief Field _withImageTextAfter, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____withImageTextAfter;

/// [SerializeField]
/// @brief Field _noImageText, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____noImageText;

/// @brief Field _onLeftButtonPressedAction, offset: 0x50, size: 0x8, def value: None
 ::System::Action*  ____onLeftButtonPressedAction;

/// @brief Field _onRightButtonPressedAction, offset: 0x58, size: 0x8, def value: None
 ::System::Action*  ____onRightButtonPressedAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WarningScreens, ____messageBox) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WarningScreens, ____imageContainerAfter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WarningScreens, ____imageContainerBefore) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WarningScreens, ____withImageTextBefore) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WarningScreens, ____withImageTextAfter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WarningScreens, ____noImageText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WarningScreens, ____onLeftButtonPressedAction) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WarningScreens, ____onRightButtonPressedAction) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WarningScreens) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
