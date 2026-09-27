#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIOTermsOfUse_v1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ModIOTermsOfUse_v1)
namespace GlobalNamespace {
struct ModIOTermsOfUse_v1__Start_d__19;
}
namespace GlobalNamespace {
struct ModIOTermsOfUse_v1__UpdateTextFromTerms_d__20;
}
namespace GlobalNamespace {
struct ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21;
}
namespace GlobalNamespace {
struct ModIOTermsOfUse_v1__WaitForAcknowledgement_d__23;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
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
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ModIOTermsOfUse_v1;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ModIOTermsOfUse_v1*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModIOTermsOfUse_v1*, "", "ModIOTermsOfUse_v1");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ModIOTermsOfUse_v1
class CORDL_TYPE ModIOTermsOfUse_v1 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__19 = ::GlobalNamespace::ModIOTermsOfUse_v1__Start_d__19;

using _UpdateTextFromTerms_d__20 = ::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextFromTerms_d__20;

using _UpdateTextWithFullTerms_d__21 = ::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21;

using _WaitForAcknowledgement_d__23 = ::GlobalNamespace::ModIOTermsOfUse_v1__WaitForAcknowledgement_d__23;

/// @brief Field acceptButtonDown, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get_acceptButtonDown, put=__cordl_internal_set_acceptButtonDown)) bool  acceptButtonDown;

/// @brief Field accepted, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_accepted, put=__cordl_internal_set_accepted)) bool  accepted;

/// @brief Field cachedTermsText, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedTermsText, put=__cordl_internal_set_cachedTermsText)) ::StringW  cachedTermsText;

/// @brief Field hasTermsOfUse, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasTermsOfUse, put=__cordl_internal_set_hasTermsOfUse)) bool  hasTermsOfUse;

/// @brief Field holdTime, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_holdTime, put=__cordl_internal_set_holdTime)) float_t  holdTime;

/// @brief Field nextButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextButton, put=__cordl_internal_set_nextButton)) ::UnityW<::UnityEngine::GameObject>  nextButton;

/// @brief Field prevButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevButton, put=__cordl_internal_set_prevButton)) ::UnityW<::UnityEngine::GameObject>  prevButton;

/// @brief Field progressBar, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressBar, put=__cordl_internal_set_progressBar)) ::UnityW<::UnityEngine::LineRenderer>  progressBar;

/// @brief Field termsAcknowledgedCallback, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_termsAcknowledgedCallback, put=__cordl_internal_set_termsAcknowledgedCallback)) ::System::Action_1<bool>*  termsAcknowledgedCallback;

/// @brief Field title, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_title, put=__cordl_internal_set_title)) ::StringW  title;

/// @brief Field tmpBody, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_tmpBody, put=__cordl_internal_set_tmpBody)) ::UnityW<::TMPro::TMP_Text>  tmpBody;

/// @brief Field tmpPage, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_tmpPage, put=__cordl_internal_set_tmpPage)) ::UnityW<::TMPro::TMP_Text>  tmpPage;

/// @brief Field tmpTitle, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_tmpTitle, put=__cordl_internal_set_tmpTitle)) ::UnityW<::TMPro::TMP_Text>  tmpTitle;

/// @brief Field uiParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_uiParent, put=__cordl_internal_set_uiParent)) ::UnityW<::UnityEngine::Transform>  uiParent;

/// @brief Field waitingForAcknowledge, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_waitingForAcknowledge, put=__cordl_internal_set_waitingForAcknowledge)) bool  waitingForAcknowledge;

/// @brief Field yesNoButtons, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_yesNoButtons, put=__cordl_internal_set_yesNoButtons)) ::UnityW<::UnityEngine::GameObject>  yesNoButtons;

/// @brief Method Acknowledge, addr 0x59f233c, size 0x8, virtual false, abstract: false, final false
inline void Acknowledge(bool  didAccept) ;

/// @brief Method ActivateAcceptButtonGroup, addr 0x59f22e0, size 0x5c, virtual false, abstract: false, final false
inline void ActivateAcceptButtonGroup() ;

/// @brief Method GetStringForListItemIdx_LowerAlpha, addr 0x59f2074, size 0x194, virtual false, abstract: false, final false
inline ::StringW GetStringForListItemIdx_LowerAlpha(int32_t  idx) ;

static inline ::GlobalNamespace::ModIOTermsOfUse_v1* New_ctor() ;

/// @brief Method OnDisable, addr 0x59f1a28, size 0x138, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59f18f0, size 0x138, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PostUpdate, addr 0x59f1b60, size 0xf4, virtual false, abstract: false, final false
inline void PostUpdate() ;

/// [AsyncStateMachine(typeof(ModIOTermsOfUse_v1::<Start>d__19))]
/// @brief Method Start, addr 0x59f1ddc, size 0xa8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TurnPage, addr 0x59f1c54, size 0x188, virtual false, abstract: false, final false
inline void TurnPage(int32_t  i) ;

/// [AsyncStateMachine(typeof(ModIOTermsOfUse_v1::<UpdateTextFromTerms>d__20))]
/// @brief Method UpdateTextFromTerms, addr 0x59f1e84, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* UpdateTextFromTerms() ;

/// [AsyncStateMachine(typeof(ModIOTermsOfUse_v1::<UpdateTextWithFullTerms>d__21))]
/// @brief Method UpdateTextWithFullTerms, addr 0x59f1f8c, size 0xe8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* UpdateTextWithFullTerms() ;

/// [AsyncStateMachine(typeof(ModIOTermsOfUse_v1::<WaitForAcknowledgement>d__23))]
/// @brief Method WaitForAcknowledgement, addr 0x59f2208, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForAcknowledgement() ;

constexpr bool const& __cordl_internal_get_acceptButtonDown() const;

constexpr bool& __cordl_internal_get_acceptButtonDown() ;

constexpr bool const& __cordl_internal_get_accepted() const;

constexpr bool& __cordl_internal_get_accepted() ;

constexpr ::StringW const& __cordl_internal_get_cachedTermsText() const;

constexpr ::StringW& __cordl_internal_get_cachedTermsText() ;

constexpr bool const& __cordl_internal_get_hasTermsOfUse() const;

constexpr bool& __cordl_internal_get_hasTermsOfUse() ;

constexpr float_t const& __cordl_internal_get_holdTime() const;

constexpr float_t& __cordl_internal_get_holdTime() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_nextButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_nextButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prevButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prevButton() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_progressBar() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_progressBar() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_termsAcknowledgedCallback() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_termsAcknowledgedCallback() ;

constexpr ::StringW const& __cordl_internal_get_title() const;

constexpr ::StringW& __cordl_internal_get_title() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_tmpBody() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_tmpBody() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_tmpPage() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_tmpPage() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_tmpTitle() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_tmpTitle() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_uiParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_uiParent() ;

constexpr bool const& __cordl_internal_get_waitingForAcknowledge() const;

constexpr bool& __cordl_internal_get_waitingForAcknowledge() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_yesNoButtons() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_yesNoButtons() ;

constexpr void __cordl_internal_set_acceptButtonDown(bool  value) ;

constexpr void __cordl_internal_set_accepted(bool  value) ;

constexpr void __cordl_internal_set_cachedTermsText(::StringW  value) ;

constexpr void __cordl_internal_set_hasTermsOfUse(bool  value) ;

constexpr void __cordl_internal_set_holdTime(float_t  value) ;

constexpr void __cordl_internal_set_nextButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_prevButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_progressBar(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_termsAcknowledgedCallback(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_title(::StringW  value) ;

constexpr void __cordl_internal_set_tmpBody(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_tmpPage(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_tmpTitle(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_uiParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_waitingForAcknowledge(bool  value) ;

constexpr void __cordl_internal_set_yesNoButtons(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x59f2344, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModIOTermsOfUse_v1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModIOTermsOfUse_v1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModIOTermsOfUse_v1(ModIOTermsOfUse_v1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModIOTermsOfUse_v1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModIOTermsOfUse_v1(ModIOTermsOfUse_v1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2729};

/// [SerializeField]
/// @brief Field uiParent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___uiParent;

/// [SerializeField]
/// @brief Field title, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___title;

/// [SerializeField]
/// @brief Field tmpBody, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___tmpBody;

/// [SerializeField]
/// @brief Field tmpTitle, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___tmpTitle;

/// [SerializeField]
/// @brief Field tmpPage, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___tmpPage;

/// [SerializeField]
/// @brief Field yesNoButtons, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___yesNoButtons;

/// [SerializeField]
/// @brief Field nextButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___nextButton;

/// [SerializeField]
/// @brief Field prevButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___prevButton;

/// @brief Field hasTermsOfUse, offset: 0x60, size: 0x1, def value: None
 bool  ___hasTermsOfUse;

/// @brief Field termsAcknowledgedCallback, offset: 0x68, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___termsAcknowledgedCallback;

/// @brief Field cachedTermsText, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___cachedTermsText;

/// @brief Field waitingForAcknowledge, offset: 0x78, size: 0x1, def value: None
 bool  ___waitingForAcknowledge;

/// @brief Field accepted, offset: 0x79, size: 0x1, def value: None
 bool  ___accepted;

/// @brief Field acceptButtonDown, offset: 0x7a, size: 0x1, def value: None
 bool  ___acceptButtonDown;

/// [SerializeField]
/// @brief Field holdTime, offset: 0x7c, size: 0x4, def value: None
 float_t  ___holdTime;

/// [SerializeField]
/// @brief Field progressBar, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___progressBar;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModIOTermsOfUse_v1, ___uiParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOTermsOfUse_v1, ___title) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOTermsOfUse_v1, ___tmpBody) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOTermsOfUse_v1, ___tmpTitle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOTermsOfUse_v1, ___tmpPage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOTermsOfUse_v1, ___yesNoButtons) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOTermsOfUse_v1, ___nextButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOTermsOfUse_v1, ___prevButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOTermsOfUse_v1, ___hasTermsOfUse) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOTermsOfUse_v1, ___termsAcknowledgedCallback) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOTermsOfUse_v1, ___cachedTermsText) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOTermsOfUse_v1, ___waitingForAcknowledge) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOTermsOfUse_v1, ___accepted) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOTermsOfUse_v1, ___acceptButtonDown) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOTermsOfUse_v1, ___holdTime) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOTermsOfUse_v1, ___progressBar) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModIOTermsOfUse_v1) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
