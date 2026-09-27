#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDAgeGate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KIDAgeGate)
namespace GlobalNamespace {
class AgeSliderWithProgressBar;
}
namespace GlobalNamespace {
class GetRequirementsData;
}
namespace GlobalNamespace {
class KIDAgeGateConfirmation;
}
namespace GlobalNamespace {
struct KIDAgeGate__AppealAge_d__41;
}
namespace GlobalNamespace {
struct KIDAgeGate__BeginAgeGate_d__31;
}
namespace GlobalNamespace {
struct KIDAgeGate__InitialiseAgeGate_d__33;
}
namespace GlobalNamespace {
struct KIDAgeGate__ProcessAgeGateConfirmation_d__35;
}
namespace GlobalNamespace {
struct KIDAgeGate__ProcessAgeGate_d__34;
}
namespace GlobalNamespace {
struct KIDAgeGate__StartAgeGate_d__32;
}
namespace GlobalNamespace {
struct KIDAgeGate__Start_d__29;
}
namespace GlobalNamespace {
struct KIDAgeGate__WaitForAgeChoice_d__36;
}
namespace GlobalNamespace {
class KIDUI_AgeDiscrepancyScreen;
}
namespace GlobalNamespace {
class PreGameMessage;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDAgeGate;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDAgeGate*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDAgeGate*, "", "KIDAgeGate");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDAgeGate
class CORDL_TYPE KIDAgeGate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _AppealAge_d__41 = ::GlobalNamespace::KIDAgeGate__AppealAge_d__41;

using _BeginAgeGate_d__31 = ::GlobalNamespace::KIDAgeGate__BeginAgeGate_d__31;

using _InitialiseAgeGate_d__33 = ::GlobalNamespace::KIDAgeGate__InitialiseAgeGate_d__33;

using _ProcessAgeGateConfirmation_d__35 = ::GlobalNamespace::KIDAgeGate__ProcessAgeGateConfirmation_d__35;

using _ProcessAgeGate_d__34 = ::GlobalNamespace::KIDAgeGate__ProcessAgeGate_d__34;

using _StartAgeGate_d__32 = ::GlobalNamespace::KIDAgeGate__StartAgeGate_d__32;

using _Start_d__29 = ::GlobalNamespace::KIDAgeGate__Start_d__29;

using _WaitForAgeChoice_d__36 = ::GlobalNamespace::KIDAgeGate__WaitForAgeChoice_d__36;

/// @brief Field <DisplayedScreen>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__DisplayedScreen_k__BackingField, put=setStaticF__DisplayedScreen_k__BackingField)) bool  _DisplayedScreen_k__BackingField;

/// @brief Field _activeReference, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__activeReference, put=setStaticF__activeReference)) ::UnityW<::GlobalNamespace::KIDAgeGate>  _activeReference;

/// @brief Field _ageDiscrepancyScreen, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ageDiscrepancyScreen, put=__cordl_internal_set__ageDiscrepancyScreen)) ::UnityW<::GlobalNamespace::KIDUI_AgeDiscrepancyScreen>  _ageDiscrepancyScreen;

/// @brief Field _ageGateConfig, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__ageGateConfig, put=setStaticF__ageGateConfig)) ::GlobalNamespace::GetRequirementsData*  _ageGateConfig;

/// @brief Field _ageSlider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ageSlider, put=__cordl_internal_set__ageSlider)) ::UnityW<::GlobalNamespace::AgeSliderWithProgressBar>  _ageSlider;

/// @brief Field _ageValue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ageValue, put=setStaticF__ageValue)) int32_t  _ageValue;

/// @brief Field _confirmationAgeText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmationAgeText, put=__cordl_internal_set__confirmationAgeText)) ::UnityW<::TMPro::TMP_Text>  _confirmationAgeText;

/// @brief Field _confirmationUI, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmationUI, put=__cordl_internal_set__confirmationUI)) ::UnityW<::UnityEngine::GameObject>  _confirmationUI;

/// @brief Field _confirmationUIManager, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmationUIManager, put=__cordl_internal_set__confirmationUIManager)) ::UnityW<::GlobalNamespace::KIDAgeGateConfirmation>  _confirmationUIManager;

/// @brief Field _hasChosenAge, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__hasChosenAge, put=setStaticF__hasChosenAge)) bool  _hasChosenAge;

/// @brief Field _metrics_LearnMorePressed, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__metrics_LearnMorePressed, put=__cordl_internal_set__metrics_LearnMorePressed)) bool  _metrics_LearnMorePressed;

/// @brief Field _pregameMessageReference, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__pregameMessageReference, put=__cordl_internal_set__pregameMessageReference)) ::UnityW<::GlobalNamespace::PreGameMessage>  _pregameMessageReference;

/// @brief Field _uiParent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__uiParent, put=__cordl_internal_set__uiParent)) ::UnityW<::UnityEngine::GameObject>  _uiParent;

/// @brief Field _whyAgeGateScreen, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__whyAgeGateScreen, put=__cordl_internal_set__whyAgeGateScreen)) ::UnityW<::UnityEngine::GameObject>  _whyAgeGateScreen;

/// @brief Field requestCancellationSource, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestCancellationSource, put=__cordl_internal_set_requestCancellationSource)) ::System::Threading::CancellationTokenSource*  requestCancellationSource;

/// [AsyncStateMachine(typeof(KIDAgeGate::<AppealAge>d__41))]
/// @brief Method AppealAge, addr 0x5a28a20, size 0xa8, virtual false, abstract: false, final false
inline void AppealAge() ;

/// @brief Method AppealRejected, addr 0x5a28ac8, size 0x140, virtual false, abstract: false, final false
inline void AppealRejected() ;

/// @brief Method Awake, addr 0x5a2816c, size 0x124, virtual false, abstract: false, final false
inline void Awake() ;

/// [AsyncStateMachine(typeof(KIDAgeGate::<BeginAgeGate>d__31))]
/// @brief Method BeginAgeGate, addr 0x5a28338, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* BeginAgeGate() ;

/// @brief Method FinaliseAgeGateAndContinue, addr 0x5a288b8, size 0xd4, virtual false, abstract: false, final false
inline void FinaliseAgeGateAndContinue() ;

/// [AsyncStateMachine(typeof(KIDAgeGate::<InitialiseAgeGate>d__33))]
/// @brief Method InitialiseAgeGate, addr 0x5a284d4, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* InitialiseAgeGate() ;

static inline ::GlobalNamespace::KIDAgeGate* New_ctor() ;

/// @brief Method OnAgeGateCompleted, addr 0x5a288b4, size 0x4, virtual false, abstract: false, final false
inline void OnAgeGateCompleted() ;

/// @brief Method OnConfirmAgePressed, addr 0x5a28868, size 0x4c, virtual false, abstract: false, final false
static inline void OnConfirmAgePressed(int32_t  currentAge) ;

/// @brief Method OnDestroy, addr 0x5a28320, size 0x18, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnLearnMoreAboutKIDPressed, addr 0x5a28ef0, size 0x250, virtual false, abstract: false, final false
inline void OnLearnMoreAboutKIDPressed() ;

/// @brief Method OnWhyAgeGateButtonBackPressed, addr 0x5a28ea0, size 0x50, virtual false, abstract: false, final false
inline void OnWhyAgeGateButtonBackPressed() ;

/// @brief Method OnWhyAgeGateButtonPressed, addr 0x5a28c5c, size 0x244, virtual false, abstract: false, final false
inline void OnWhyAgeGateButtonPressed() ;

/// [AsyncStateMachine(typeof(KIDAgeGate::<ProcessAgeGate>d__34))]
/// @brief Method ProcessAgeGate, addr 0x5a285b0, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ProcessAgeGate() ;

/// [AsyncStateMachine(typeof(KIDAgeGate::<ProcessAgeGateConfirmation>d__35))]
/// @brief Method ProcessAgeGateConfirmation, addr 0x5a28688, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* ProcessAgeGateConfirmation() ;

/// @brief Method QuitGame, addr 0x5a2898c, size 0x94, virtual false, abstract: false, final false
inline void QuitGame() ;

/// @brief Method RefreshChallengeStatus, addr 0x5a28c08, size 0x4, virtual false, abstract: false, final false
inline void RefreshChallengeStatus() ;

/// @brief Method SetAgeGateConfig, addr 0x5a28c0c, size 0x50, virtual false, abstract: false, final false
static inline void SetAgeGateConfig(::GlobalNamespace::GetRequirementsData*  response) ;

/// [AsyncStateMachine(typeof(KIDAgeGate::<Start>d__29))]
/// @brief Method Start, addr 0x5a28290, size 0x90, virtual false, abstract: false, final false
inline void Start() ;

/// [AsyncStateMachine(typeof(KIDAgeGate::<StartAgeGate>d__32))]
/// @brief Method StartAgeGate, addr 0x5a283fc, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* StartAgeGate() ;

/// [AsyncStateMachine(typeof(KIDAgeGate::<WaitForAgeChoice>d__36))]
/// @brief Method WaitForAgeChoice, addr 0x5a28790, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForAgeChoice() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeDiscrepancyScreen> const& __cordl_internal_get__ageDiscrepancyScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeDiscrepancyScreen>& __cordl_internal_get__ageDiscrepancyScreen() ;

constexpr ::UnityW<::GlobalNamespace::AgeSliderWithProgressBar> const& __cordl_internal_get__ageSlider() const;

constexpr ::UnityW<::GlobalNamespace::AgeSliderWithProgressBar>& __cordl_internal_get__ageSlider() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__confirmationAgeText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__confirmationAgeText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__confirmationUI() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__confirmationUI() ;

constexpr ::UnityW<::GlobalNamespace::KIDAgeGateConfirmation> const& __cordl_internal_get__confirmationUIManager() const;

constexpr ::UnityW<::GlobalNamespace::KIDAgeGateConfirmation>& __cordl_internal_get__confirmationUIManager() ;

constexpr bool const& __cordl_internal_get__metrics_LearnMorePressed() const;

constexpr bool& __cordl_internal_get__metrics_LearnMorePressed() ;

constexpr ::UnityW<::GlobalNamespace::PreGameMessage> const& __cordl_internal_get__pregameMessageReference() const;

constexpr ::UnityW<::GlobalNamespace::PreGameMessage>& __cordl_internal_get__pregameMessageReference() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__uiParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__uiParent() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__whyAgeGateScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__whyAgeGateScreen() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_requestCancellationSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_requestCancellationSource() ;

constexpr void __cordl_internal_set__ageDiscrepancyScreen(::UnityW<::GlobalNamespace::KIDUI_AgeDiscrepancyScreen>  value) ;

constexpr void __cordl_internal_set__ageSlider(::UnityW<::GlobalNamespace::AgeSliderWithProgressBar>  value) ;

constexpr void __cordl_internal_set__confirmationAgeText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__confirmationUI(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__confirmationUIManager(::UnityW<::GlobalNamespace::KIDAgeGateConfirmation>  value) ;

constexpr void __cordl_internal_set__metrics_LearnMorePressed(bool  value) ;

constexpr void __cordl_internal_set__pregameMessageReference(::UnityW<::GlobalNamespace::PreGameMessage>  value) ;

constexpr void __cordl_internal_set__uiParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__whyAgeGateScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_requestCancellationSource(::System::Threading::CancellationTokenSource*  value) ;

/// @brief Method .ctor, addr 0x5a29140, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__DisplayedScreen_k__BackingField() ;

static inline ::UnityW<::GlobalNamespace::KIDAgeGate> getStaticF__activeReference() ;

static inline ::GlobalNamespace::GetRequirementsData* getStaticF__ageGateConfig() ;

static inline int32_t getStaticF__ageValue() ;

static inline bool getStaticF__hasChosenAge() ;

/// [CompilerGenerated]
/// @brief Method get_DisplayedScreen, addr 0x5a280d4, size 0x48, virtual false, abstract: false, final false
static inline bool get_DisplayedScreen() ;

/// @brief Method get_UserAge, addr 0x5a2808c, size 0x48, virtual false, abstract: false, final false
static inline int32_t get_UserAge() ;

static inline void setStaticF__DisplayedScreen_k__BackingField(bool  value) ;

static inline void setStaticF__activeReference(::UnityW<::GlobalNamespace::KIDAgeGate>  value) ;

static inline void setStaticF__ageGateConfig(::GlobalNamespace::GetRequirementsData*  value) ;

static inline void setStaticF__ageValue(int32_t  value) ;

static inline void setStaticF__hasChosenAge(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_DisplayedScreen, addr 0x5a2811c, size 0x50, virtual false, abstract: false, final false
static inline void set_DisplayedScreen(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDAgeGate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDAgeGate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDAgeGate(KIDAgeGate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDAgeGate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDAgeGate(KIDAgeGate const& ) = delete;

/// @brief Field DEFAULT_AGE_VALUE_STRING offset 0xffffffff size 0x8
static constexpr ::ConstString  DEFAULT_AGE_VALUE_STRING{u"SET AGE"};

/// @brief Field LEARN_MORE_URL offset 0xffffffff size 0x8
static constexpr ::ConstString  LEARN_MORE_URL{u"https://whyagegate.com/"};

/// @brief Field MINIMUM_PLATFORM_AGE offset 0xffffffff size 0x4
static constexpr int32_t  MINIMUM_PLATFORM_AGE{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2909};

/// @brief Field strBlockAccessConfirm offset 0xffffffff size 0x8
static constexpr ::ConstString  strBlockAccessConfirm{u"Hold any face button to appeal"};

/// @brief Field strBlockAccessMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  strBlockAccessMessage{u"Your VR platform requires a certain minimum age to play Gorilla Tag. Unfortunately, due to those age requirements, we cannot allow you to play Gorilla Tag at this time.\n\nIf you incorrectly submitted your age, please appeal."};

/// @brief Field strBlockAccessTitle offset 0xffffffff size 0x8
static constexpr ::ConstString  strBlockAccessTitle{u"UNDER AGE"};

/// @brief Field strDiscrepancyMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  strDiscrepancyMessage{u"You entered {0} for your age,\nbut your Meta account says you should be {1}. You could be logged into the wrong Meta account on this device.\n\nWe will use the lowest age ({2})\nif you Continue."};

/// @brief Field strVerifyAgeMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  strVerifyAgeMessage{u"GETTING ONE TIME PASSCODE. PLEASE WAIT.\n\nGIVE IT TO A PARENT/GUARDIAN TO ENTER IT AT: k-id.com/code"};

/// @brief Field strVerifyAgeTitle offset 0xffffffff size 0x8
static constexpr ::ConstString  strVerifyAgeTitle{u"VERIFY AGE"};

/// [Header("Age Gate Settings")]
/// [SerializeField]
/// @brief Field _pregameMessageReference, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PreGameMessage>  ____pregameMessageReference;

/// [SerializeField]
/// @brief Field _ageDiscrepancyScreen, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_AgeDiscrepancyScreen>  ____ageDiscrepancyScreen;

/// [SerializeField]
/// @brief Field _uiParent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____uiParent;

/// [SerializeField]
/// @brief Field _ageSlider, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AgeSliderWithProgressBar>  ____ageSlider;

/// [SerializeField]
/// @brief Field _confirmationUI, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____confirmationUI;

/// [SerializeField]
/// @brief Field _confirmationUIManager, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDAgeGateConfirmation>  ____confirmationUIManager;

/// [SerializeField]
/// @brief Field _confirmationAgeText, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____confirmationAgeText;

/// [SerializeField]
/// @brief Field _whyAgeGateScreen, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____whyAgeGateScreen;

/// @brief Field requestCancellationSource, offset: 0x60, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___requestCancellationSource;

/// @brief Field _metrics_LearnMorePressed, offset: 0x68, size: 0x1, def value: None
 bool  ____metrics_LearnMorePressed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDAgeGate, ____pregameMessageReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAgeGate, ____ageDiscrepancyScreen) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAgeGate, ____uiParent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAgeGate, ____ageSlider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAgeGate, ____confirmationUI) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAgeGate, ____confirmationUIManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAgeGate, ____confirmationAgeText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAgeGate, ____whyAgeGateScreen) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAgeGate, ___requestCancellationSource) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAgeGate, ____metrics_LearnMorePressed) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDAgeGate) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
