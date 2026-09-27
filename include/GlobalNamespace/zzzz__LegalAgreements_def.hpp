#pragma once
// IWYU pragma private; include "GlobalNamespace/LegalAgreements.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LegalAgreementTextAsset_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LegalAgreements)
namespace GlobalNamespace {
class KIDUIButton;
}
namespace GlobalNamespace {
class LegalAgreementTextAsset;
}
namespace GlobalNamespace {
struct LegalAgreements__GetAcceptedAgreements_d__37;
}
namespace GlobalNamespace {
struct LegalAgreements__GetTitleDataAsync_d__36;
}
namespace GlobalNamespace {
struct LegalAgreements__StartLegalAgreements_d__24;
}
namespace GlobalNamespace {
struct LegalAgreements__SubmitAcceptedAgreements_d__38;
}
namespace GlobalNamespace {
struct LegalAgreements__UpdateTextFromPlayFabTitleData_d__33;
}
namespace GlobalNamespace {
struct LegalAgreements__UpdateText_d__28;
}
namespace GlobalNamespace {
struct LegalAgreements__WaitForAcknowledgement_d__27;
}
namespace GlobalNamespace {
class LegalAgreements___c;
}
namespace GlobalNamespace {
class LegalAgreements___c__DisplayClass36_0;
}
namespace GlobalNamespace {
class LegalAgreements___c__DisplayClass37_0;
}
namespace GlobalNamespace {
class LegalAgreements___c__DisplayClass38_0;
}
namespace PlayFab::CloudScriptModels {
class ExecuteFunctionResult;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Scrollbar;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LegalAgreements;
}
namespace GlobalNamespace {
class LegalAgreements___c;
}
namespace GlobalNamespace {
class LegalAgreements___c__DisplayClass36_0;
}
namespace GlobalNamespace {
class LegalAgreements___c__DisplayClass37_0;
}
namespace GlobalNamespace {
class LegalAgreements___c__DisplayClass38_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LegalAgreements*);
MARK_REF_T(::GlobalNamespace::LegalAgreements___c*);
MARK_REF_T(::GlobalNamespace::LegalAgreements___c__DisplayClass36_0*);
MARK_REF_T(::GlobalNamespace::LegalAgreements___c__DisplayClass37_0*);
MARK_REF_T(::GlobalNamespace::LegalAgreements___c__DisplayClass38_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LegalAgreements*, "", "LegalAgreements");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LegalAgreements___c*, "", "LegalAgreements/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LegalAgreements___c__DisplayClass36_0*, "", "LegalAgreements/<>c__DisplayClass36_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LegalAgreements___c__DisplayClass37_0*, "", "LegalAgreements/<>c__DisplayClass37_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LegalAgreements___c__DisplayClass38_0*, "", "LegalAgreements/<>c__DisplayClass38_0");
// [DefaultExecutionOrder(1)]
// Dependencies LegalAgreementTextAsset, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LegalAgreements
class CORDL_TYPE LegalAgreements : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _GetAcceptedAgreements_d__37 = ::GlobalNamespace::LegalAgreements__GetAcceptedAgreements_d__37;

using _GetTitleDataAsync_d__36 = ::GlobalNamespace::LegalAgreements__GetTitleDataAsync_d__36;

using _StartLegalAgreements_d__24 = ::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24;

using _SubmitAcceptedAgreements_d__38 = ::GlobalNamespace::LegalAgreements__SubmitAcceptedAgreements_d__38;

using _UpdateTextFromPlayFabTitleData_d__33 = ::GlobalNamespace::LegalAgreements__UpdateTextFromPlayFabTitleData_d__33;

using _UpdateText_d__28 = ::GlobalNamespace::LegalAgreements__UpdateText_d__28;

using _WaitForAcknowledgement_d__27 = ::GlobalNamespace::LegalAgreements__WaitForAcknowledgement_d__27;

using __c = ::GlobalNamespace::LegalAgreements___c;

using __c__DisplayClass36_0 = ::GlobalNamespace::LegalAgreements___c__DisplayClass36_0;

using __c__DisplayClass37_0 = ::GlobalNamespace::LegalAgreements___c__DisplayClass37_0;

using __c__DisplayClass38_0 = ::GlobalNamespace::LegalAgreements___c__DisplayClass38_0;

/// @brief Field SCROLL_TO_END_MESSAGE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SCROLL_TO_END_MESSAGE, put=setStaticF_SCROLL_TO_END_MESSAGE)) ::StringW  SCROLL_TO_END_MESSAGE;

/// @brief Field _accepted, offset 0x85, size 0x1 
 __declspec(property(get=__cordl_internal_get__accepted, put=__cordl_internal_set__accepted)) bool  _accepted;

/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::UnityW<::GlobalNamespace::LegalAgreements>  _instance_k__BackingField;

/// @brief Field _maxScrollSpeed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxScrollSpeed, put=__cordl_internal_set__maxScrollSpeed)) float_t  _maxScrollSpeed;

/// @brief Field _minScrollSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__minScrollSpeed, put=__cordl_internal_set__minScrollSpeed)) float_t  _minScrollSpeed;

/// @brief Field _pressAndHoldToConfirmButton, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__pressAndHoldToConfirmButton, put=__cordl_internal_set__pressAndHoldToConfirmButton)) ::UnityW<::GlobalNamespace::KIDUIButton>  _pressAndHoldToConfirmButton;

/// @brief Field _scrollInterpCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__scrollInterpCurve, put=__cordl_internal_set__scrollInterpCurve)) ::UnityEngine::AnimationCurve*  _scrollInterpCurve;

/// @brief Field _scrollInterpTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__scrollInterpTime, put=__cordl_internal_set__scrollInterpTime)) float_t  _scrollInterpTime;

/// @brief Field _scrollToBottomText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__scrollToBottomText, put=__cordl_internal_set__scrollToBottomText)) ::UnityW<::TMPro::TMP_Text>  _scrollToBottomText;

/// @brief Field _stickVibrationDuration, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__stickVibrationDuration, put=__cordl_internal_set__stickVibrationDuration)) float_t  _stickVibrationDuration;

/// @brief Field _stickVibrationStrength, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__stickVibrationStrength, put=__cordl_internal_set__stickVibrationStrength)) float_t  _stickVibrationStrength;

/// @brief Field cachedText, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedText, put=__cordl_internal_set_cachedText)) ::StringW  cachedText;

/// @brief Field legalAgreementScreens, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_legalAgreementScreens, put=__cordl_internal_set_legalAgreementScreens)) ::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>>  legalAgreementScreens;

/// @brief Field legalAgreementsStarted, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_legalAgreementsStarted, put=__cordl_internal_set_legalAgreementsStarted)) bool  legalAgreementsStarted;

/// @brief Field optIn, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get_optIn, put=__cordl_internal_set_optIn)) bool  optIn;

/// @brief Field optional, offset 0x95, size 0x1 
 __declspec(property(get=__cordl_internal_get_optional, put=__cordl_internal_set_optional)) bool  optional;

/// @brief Field scrollBar, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_scrollBar, put=__cordl_internal_set_scrollBar)) ::UnityW<::UnityEngine::UI::Scrollbar>  scrollBar;

/// @brief Field scrollSpeed, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_scrollSpeed, put=__cordl_internal_set_scrollSpeed)) float_t  scrollSpeed;

/// @brief Field scrollTime, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_scrollTime, put=__cordl_internal_set_scrollTime)) float_t  scrollTime;

/// @brief Field state, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) int32_t  state;

/// @brief Field stickHeldDuration, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_stickHeldDuration, put=__cordl_internal_set_stickHeldDuration)) float_t  stickHeldDuration;

/// @brief Field tmpBody, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_tmpBody, put=__cordl_internal_set_tmpBody)) ::UnityW<::TMPro::TMP_Text>  tmpBody;

/// @brief Field tmpTitle, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_tmpTitle, put=__cordl_internal_set_tmpTitle)) ::UnityW<::TMPro::TMP_Text>  tmpTitle;

/// @brief Field uiParent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_uiParent, put=__cordl_internal_set_uiParent)) ::UnityW<::UnityEngine::Transform>  uiParent;

/// @brief Method Awake, addr 0x5a5faf0, size 0x1a4, virtual true, abstract: false, final false
inline void Awake() ;

/// [AsyncStateMachine(typeof(LegalAgreements::<GetAcceptedAgreements>d__37))]
/// @brief Method GetAcceptedAgreements, addr 0x5a605f4, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* GetAcceptedAgreements(::ArrayW<::GlobalNamespace::LegalAgreementTextAsset*>  agreements) ;

/// [AsyncStateMachine(typeof(LegalAgreements::<GetTitleDataAsync>d__36))]
/// @brief Method GetTitleDataAsync, addr 0x5a604e8, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* GetTitleDataAsync(::StringW  key) ;

static inline ::GlobalNamespace::LegalAgreements* New_ctor() ;

/// @brief Method OnAccepted, addr 0x5a6014c, size 0xc, virtual false, abstract: false, final false
inline void OnAccepted(int32_t  currentAge) ;

/// @brief Method OnDisable, addr 0x5a607dc, size 0x28, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnPlayFabError, addr 0x5a604b8, size 0xc, virtual false, abstract: false, final false
inline void OnPlayFabError(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnTitleDataReceived, addr 0x5a604c4, size 0x24, virtual false, abstract: false, final false
inline void OnTitleDataReceived(::StringW  obj) ;

/// [AsyncStateMachine(typeof(LegalAgreements::<StartLegalAgreements>d__24))]
/// @brief Method StartLegalAgreements, addr 0x5a60068, size 0xe4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* StartLegalAgreements() ;

/// [AsyncStateMachine(typeof(LegalAgreements::<SubmitAcceptedAgreements>d__38))]
/// @brief Method SubmitAcceptedAgreements, addr 0x5a60700, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SubmitAcceptedAgreements(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  agreements) ;

/// @brief Method Update, addr 0x5a5fc94, size 0x3d4, virtual false, abstract: false, final false
inline void Update() ;

/// [AsyncStateMachine(typeof(LegalAgreements::<UpdateText>d__28))]
/// @brief Method UpdateText, addr 0x5a60230, size 0x138, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* UpdateText(::GlobalNamespace::LegalAgreementTextAsset*  asset, ::StringW  version) ;

/// [AsyncStateMachine(typeof(LegalAgreements::<UpdateTextFromPlayFabTitleData>d__33))]
/// @brief Method UpdateTextFromPlayFabTitleData, addr 0x5a60368, size 0x150, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* UpdateTextFromPlayFabTitleData(::StringW  key, ::StringW  version, ::TMPro::TMP_Text*  target) ;

/// [AsyncStateMachine(typeof(LegalAgreements::<WaitForAcknowledgement>d__27))]
/// @brief Method WaitForAcknowledgement, addr 0x5a60158, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForAcknowledgement() ;

constexpr bool const& __cordl_internal_get__accepted() const;

constexpr bool& __cordl_internal_get__accepted() ;

constexpr float_t const& __cordl_internal_get__maxScrollSpeed() const;

constexpr float_t& __cordl_internal_get__maxScrollSpeed() ;

constexpr float_t const& __cordl_internal_get__minScrollSpeed() const;

constexpr float_t& __cordl_internal_get__minScrollSpeed() ;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& __cordl_internal_get__pressAndHoldToConfirmButton() const;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& __cordl_internal_get__pressAndHoldToConfirmButton() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__scrollInterpCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__scrollInterpCurve() ;

constexpr float_t const& __cordl_internal_get__scrollInterpTime() const;

constexpr float_t& __cordl_internal_get__scrollInterpTime() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__scrollToBottomText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__scrollToBottomText() ;

constexpr float_t const& __cordl_internal_get__stickVibrationDuration() const;

constexpr float_t& __cordl_internal_get__stickVibrationDuration() ;

constexpr float_t const& __cordl_internal_get__stickVibrationStrength() const;

constexpr float_t& __cordl_internal_get__stickVibrationStrength() ;

constexpr ::StringW const& __cordl_internal_get_cachedText() const;

constexpr ::StringW& __cordl_internal_get_cachedText() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>> const& __cordl_internal_get_legalAgreementScreens() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>>& __cordl_internal_get_legalAgreementScreens() ;

constexpr bool const& __cordl_internal_get_legalAgreementsStarted() const;

constexpr bool& __cordl_internal_get_legalAgreementsStarted() ;

constexpr bool const& __cordl_internal_get_optIn() const;

constexpr bool& __cordl_internal_get_optIn() ;

constexpr bool const& __cordl_internal_get_optional() const;

constexpr bool& __cordl_internal_get_optional() ;

constexpr ::UnityW<::UnityEngine::UI::Scrollbar> const& __cordl_internal_get_scrollBar() const;

constexpr ::UnityW<::UnityEngine::UI::Scrollbar>& __cordl_internal_get_scrollBar() ;

constexpr float_t const& __cordl_internal_get_scrollSpeed() const;

constexpr float_t& __cordl_internal_get_scrollSpeed() ;

constexpr float_t const& __cordl_internal_get_scrollTime() const;

constexpr float_t& __cordl_internal_get_scrollTime() ;

constexpr int32_t const& __cordl_internal_get_state() const;

constexpr int32_t& __cordl_internal_get_state() ;

constexpr float_t const& __cordl_internal_get_stickHeldDuration() const;

constexpr float_t& __cordl_internal_get_stickHeldDuration() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_tmpBody() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_tmpBody() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_tmpTitle() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_tmpTitle() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_uiParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_uiParent() ;

constexpr void __cordl_internal_set__accepted(bool  value) ;

constexpr void __cordl_internal_set__maxScrollSpeed(float_t  value) ;

constexpr void __cordl_internal_set__minScrollSpeed(float_t  value) ;

constexpr void __cordl_internal_set__pressAndHoldToConfirmButton(::UnityW<::GlobalNamespace::KIDUIButton>  value) ;

constexpr void __cordl_internal_set__scrollInterpCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__scrollInterpTime(float_t  value) ;

constexpr void __cordl_internal_set__scrollToBottomText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__stickVibrationDuration(float_t  value) ;

constexpr void __cordl_internal_set__stickVibrationStrength(float_t  value) ;

constexpr void __cordl_internal_set_cachedText(::StringW  value) ;

constexpr void __cordl_internal_set_legalAgreementScreens(::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>>  value) ;

constexpr void __cordl_internal_set_legalAgreementsStarted(bool  value) ;

constexpr void __cordl_internal_set_optIn(bool  value) ;

constexpr void __cordl_internal_set_optional(bool  value) ;

constexpr void __cordl_internal_set_scrollBar(::UnityW<::UnityEngine::UI::Scrollbar>  value) ;

constexpr void __cordl_internal_set_scrollSpeed(float_t  value) ;

constexpr void __cordl_internal_set_scrollTime(float_t  value) ;

constexpr void __cordl_internal_set_state(int32_t  value) ;

constexpr void __cordl_internal_set_stickHeldDuration(float_t  value) ;

constexpr void __cordl_internal_set_tmpBody(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_tmpTitle(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_uiParent(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5a60804, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_SCROLL_TO_END_MESSAGE() ;

static inline ::UnityW<::GlobalNamespace::LegalAgreements> getStaticF__instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0x5a5fa38, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::LegalAgreements> get_instance() ;

static inline void setStaticF_SCROLL_TO_END_MESSAGE(::StringW  value) ;

static inline void setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::LegalAgreements>  value) ;

/// [CompilerGenerated]
/// @brief Method set_instance, addr 0x5a5fa90, size 0x60, virtual false, abstract: false, final false
static inline void set_instance(::GlobalNamespace::LegalAgreements*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegalAgreements() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegalAgreements", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LegalAgreements(LegalAgreements && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegalAgreements", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegalAgreements(LegalAgreements const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3070};

/// [Header("Scroll Behavior")]
/// [SerializeField]
/// @brief Field _minScrollSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ____minScrollSpeed;

/// [SerializeField]
/// @brief Field _maxScrollSpeed, offset: 0x24, size: 0x4, def value: None
 float_t  ____maxScrollSpeed;

/// [SerializeField]
/// @brief Field _scrollInterpTime, offset: 0x28, size: 0x4, def value: None
 float_t  ____scrollInterpTime;

/// [SerializeField]
/// @brief Field _scrollInterpCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____scrollInterpCurve;

/// [SerializeField]
/// @brief Field uiParent, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___uiParent;

/// [SerializeField]
/// @brief Field tmpBody, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___tmpBody;

/// [SerializeField]
/// @brief Field tmpTitle, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___tmpTitle;

/// [SerializeField]
/// @brief Field scrollBar, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Scrollbar>  ___scrollBar;

/// [SerializeField]
/// @brief Field legalAgreementScreens, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>>  ___legalAgreementScreens;

/// [SerializeField]
/// @brief Field _pressAndHoldToConfirmButton, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUIButton>  ____pressAndHoldToConfirmButton;

/// [SerializeField]
/// @brief Field _scrollToBottomText, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____scrollToBottomText;

/// [SerializeField]
/// @brief Field _stickVibrationStrength, offset: 0x70, size: 0x4, def value: None
 float_t  ____stickVibrationStrength;

/// [SerializeField]
/// @brief Field _stickVibrationDuration, offset: 0x74, size: 0x4, def value: None
 float_t  ____stickVibrationDuration;

/// @brief Field stickHeldDuration, offset: 0x78, size: 0x4, def value: None
 float_t  ___stickHeldDuration;

/// @brief Field scrollSpeed, offset: 0x7c, size: 0x4, def value: None
 float_t  ___scrollSpeed;

/// @brief Field scrollTime, offset: 0x80, size: 0x4, def value: None
 float_t  ___scrollTime;

/// @brief Field legalAgreementsStarted, offset: 0x84, size: 0x1, def value: None
 bool  ___legalAgreementsStarted;

/// @brief Field _accepted, offset: 0x85, size: 0x1, def value: None
 bool  ____accepted;

/// @brief Field cachedText, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___cachedText;

/// @brief Field state, offset: 0x90, size: 0x4, def value: None
 int32_t  ___state;

/// @brief Field optIn, offset: 0x94, size: 0x1, def value: None
 bool  ___optIn;

/// @brief Field optional, offset: 0x95, size: 0x1, def value: None
 bool  ___optional;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LegalAgreements, ____minScrollSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ____maxScrollSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ____scrollInterpTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ____scrollInterpCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ___uiParent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ___tmpBody) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ___tmpTitle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ___scrollBar) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ___legalAgreementScreens) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ____pressAndHoldToConfirmButton) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ____scrollToBottomText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ____stickVibrationStrength) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ____stickVibrationDuration) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ___stickHeldDuration) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ___scrollSpeed) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ___scrollTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ___legalAgreementsStarted) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ____accepted) == 0x85, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ___cachedText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ___state) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ___optIn) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements, ___optional) == 0x95, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LegalAgreements) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LegalAgreements/<>c__DisplayClass38_0
class CORDL_TYPE LegalAgreements___c__DisplayClass38_0 : public ::System::Object {
public:
// Declarations
/// @brief Field state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) int32_t  state;

static inline ::GlobalNamespace::LegalAgreements___c__DisplayClass38_0* New_ctor() ;

/// @brief Method <SubmitAcceptedAgreements>b__0, addr 0x5a60ab8, size 0xc, virtual false, abstract: false, final false
inline void _SubmitAcceptedAgreements_b__0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result) ;

/// @brief Method <SubmitAcceptedAgreements>b__1, addr 0x5a60ac4, size 0xc, virtual false, abstract: false, final false
inline void _SubmitAcceptedAgreements_b__1(::PlayFab::PlayFabError*  error) ;

constexpr int32_t const& __cordl_internal_get_state() const;

constexpr int32_t& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_state(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a60ab0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegalAgreements___c__DisplayClass38_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegalAgreements___c__DisplayClass38_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LegalAgreements___c__DisplayClass38_0(LegalAgreements___c__DisplayClass38_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegalAgreements___c__DisplayClass38_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegalAgreements___c__DisplayClass38_0(LegalAgreements___c__DisplayClass38_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3062};

/// @brief Field state, offset: 0x10, size: 0x4, def value: None
 int32_t  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LegalAgreements___c__DisplayClass38_0, ___state) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LegalAgreements___c__DisplayClass38_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LegalAgreements/<>c__DisplayClass37_0
class CORDL_TYPE LegalAgreements___c__DisplayClass37_0 : public ::System::Object {
public:
// Declarations
/// @brief Field returnValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_returnValue, put=__cordl_internal_set_returnValue)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  returnValue;

/// @brief Field state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) int32_t  state;

static inline ::GlobalNamespace::LegalAgreements___c__DisplayClass37_0* New_ctor() ;

/// @brief Method <GetAcceptedAgreements>b__1, addr 0x5a60a2c, size 0x10, virtual false, abstract: false, final false
inline void _GetAcceptedAgreements_b__1(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  result) ;

/// @brief Method <GetAcceptedAgreements>b__2, addr 0x5a60a3c, size 0x74, virtual false, abstract: false, final false
inline void _GetAcceptedAgreements_b__2(::PlayFab::PlayFabError*  error) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_returnValue() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_returnValue() ;

constexpr int32_t const& __cordl_internal_get_state() const;

constexpr int32_t& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_returnValue(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_state(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a60a24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegalAgreements___c__DisplayClass37_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegalAgreements___c__DisplayClass37_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LegalAgreements___c__DisplayClass37_0(LegalAgreements___c__DisplayClass37_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegalAgreements___c__DisplayClass37_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegalAgreements___c__DisplayClass37_0(LegalAgreements___c__DisplayClass37_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3061};

/// @brief Field state, offset: 0x10, size: 0x4, def value: None
 int32_t  ___state;

/// @brief Field returnValue, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___returnValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LegalAgreements___c__DisplayClass37_0, ___state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements___c__DisplayClass37_0, ___returnValue) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LegalAgreements___c__DisplayClass37_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LegalAgreements/<>c__DisplayClass36_0
class CORDL_TYPE LegalAgreements___c__DisplayClass36_0 : public ::System::Object {
public:
// Declarations
/// @brief Field result, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::StringW  result;

/// @brief Field state, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) int32_t  state;

static inline ::GlobalNamespace::LegalAgreements___c__DisplayClass36_0* New_ctor() ;

/// @brief Method <GetTitleDataAsync>b__0, addr 0x5a60958, size 0x24, virtual false, abstract: false, final false
inline void _GetTitleDataAsync_b__0(::StringW  res) ;

/// @brief Method <GetTitleDataAsync>b__1, addr 0x5a6097c, size 0xa8, virtual false, abstract: false, final false
inline void _GetTitleDataAsync_b__1(::PlayFab::PlayFabError*  err) ;

constexpr ::StringW const& __cordl_internal_get_result() const;

constexpr ::StringW& __cordl_internal_get_result() ;

constexpr int32_t const& __cordl_internal_get_state() const;

constexpr int32_t& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_result(::StringW  value) ;

constexpr void __cordl_internal_set_state(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a60950, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegalAgreements___c__DisplayClass36_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegalAgreements___c__DisplayClass36_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LegalAgreements___c__DisplayClass36_0(LegalAgreements___c__DisplayClass36_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegalAgreements___c__DisplayClass36_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegalAgreements___c__DisplayClass36_0(LegalAgreements___c__DisplayClass36_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3060};

/// @brief Field result, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___result;

/// @brief Field state, offset: 0x18, size: 0x4, def value: None
 int32_t  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LegalAgreements___c__DisplayClass36_0, ___result) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements___c__DisplayClass36_0, ___state) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LegalAgreements___c__DisplayClass36_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LegalAgreements/<>c
class CORDL_TYPE LegalAgreements___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::LegalAgreements___c*  __9;

/// @brief Field <>9__37_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__37_0, put=setStaticF___9__37_0)) ::System::Func_2<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>,::StringW>*  __9__37_0;

static inline ::GlobalNamespace::LegalAgreements___c* New_ctor() ;

/// @brief Method <GetAcceptedAgreements>b__37_0, addr 0x5a6093c, size 0x14, virtual false, abstract: false, final false
inline ::StringW _GetAcceptedAgreements_b__37_0(::GlobalNamespace::LegalAgreementTextAsset*  x) ;

/// @brief Method .ctor, addr 0x5a60934, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::LegalAgreements___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>,::StringW>* getStaticF___9__37_0() ;

static inline void setStaticF___9(::GlobalNamespace::LegalAgreements___c*  value) ;

static inline void setStaticF___9__37_0(::System::Func_2<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegalAgreements___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegalAgreements___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LegalAgreements___c(LegalAgreements___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegalAgreements___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegalAgreements___c(LegalAgreements___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3059};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LegalAgreements___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
