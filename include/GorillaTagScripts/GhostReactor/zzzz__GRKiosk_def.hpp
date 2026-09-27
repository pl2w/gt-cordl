#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/GRKiosk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GRKiosk_PurchaseState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GRKiosk)
namespace GlobalNamespace {
struct CosmeticsController_CosmeticItem;
}
namespace GlobalNamespace {
struct GRKiosk_ButtonSide;
}
namespace GlobalNamespace {
struct GRKiosk_PurchaseState;
}
namespace GlobalNamespace {
struct GRKiosk__Start_d__16;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GlobalNamespace {
class LocalizedText;
}
namespace GorillaTagScripts::GhostReactor {
class GRKiosk___c;
}
namespace PlayFab::ClientModels {
class PurchaseItemResult;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IntVariable;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class StringVariable;
}
namespace UnityEngine::Localization {
class LocalizedString;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GorillaTagScripts::GhostReactor {
class GRKiosk;
}
namespace GorillaTagScripts::GhostReactor {
class GRKiosk___c;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GhostReactor::GRKiosk*);
MARK_REF_T(::GorillaTagScripts::GhostReactor::GRKiosk___c*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GhostReactor::GRKiosk*, "GorillaTagScripts.GhostReactor", "GRKiosk");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GhostReactor::GRKiosk___c*, "GorillaTagScripts.GhostReactor", "GRKiosk/<>c");
// Dependencies GorillaNetworking.CosmeticsController::CosmeticItem, GorillaTagScripts.GhostReactor.GRKiosk::PurchaseState, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::GhostReactor {
// Is value type: false
// CS Name: GorillaTagScripts.GhostReactor.GRKiosk
class CORDL_TYPE GRKiosk : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ButtonSide = ::GlobalNamespace::GRKiosk_ButtonSide;

using PurchaseState = ::GlobalNamespace::GRKiosk_PurchaseState;

using _Start_d__16 = ::GlobalNamespace::GRKiosk__Start_d__16;

using __c = ::GorillaTagScripts::GhostReactor::GRKiosk___c;

/// @brief Field CosmeticNameForPurchase, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CosmeticNameForPurchase, put=__cordl_internal_set_CosmeticNameForPurchase)) ::StringW  CosmeticNameForPurchase;

/// @brief Field LeftPurchaseButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_LeftPurchaseButton, put=__cordl_internal_set_LeftPurchaseButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  LeftPurchaseButton;

/// @brief Field PurchaseText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PurchaseText, put=__cordl_internal_set_PurchaseText)) ::UnityW<::TMPro::TMP_Text>  PurchaseText;

/// @brief Field RightPurchaseButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_RightPurchaseButton, put=__cordl_internal_set_RightPurchaseButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  RightPurchaseButton;

/// @brief Field _audioSource, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioSource, put=__cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource>  _audioSource;

/// @brief Field _cosmeticForPurchase, offset 0x40, size 0x98 
 __declspec(property(get=__cordl_internal_get__cosmeticForPurchase, put=__cordl_internal_set__cosmeticForPurchase)) ::GlobalNamespace::CosmeticsController_CosmeticItem  _cosmeticForPurchase;

/// @brief Field _currencyBalanceVar, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__currencyBalanceVar, put=__cordl_internal_set__currencyBalanceVar)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  _currencyBalanceVar;

/// @brief Field _itemCostVar, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__itemCostVar, put=__cordl_internal_set__itemCostVar)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  _itemCostVar;

/// @brief Field _itemNameVar, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__itemNameVar, put=__cordl_internal_set__itemNameVar)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable*  _itemNameVar;

/// @brief Field _purchaseAudioClip, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__purchaseAudioClip, put=__cordl_internal_set__purchaseAudioClip)) ::UnityW<::UnityEngine::AudioClip>  _purchaseAudioClip;

/// @brief Field _purchaseParticles, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__purchaseParticles, put=__cordl_internal_set__purchaseParticles)) ::UnityW<::UnityEngine::ParticleSystem>  _purchaseParticles;

/// @brief Field _purchaseState, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get__purchaseState, put=__cordl_internal_set__purchaseState)) ::GlobalNamespace::GRKiosk_PurchaseState  _purchaseState;

/// @brief Field _purchaseTextLoc, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__purchaseTextLoc, put=__cordl_internal_set__purchaseTextLoc)) ::UnityW<::GlobalNamespace::LocalizedText>  _purchaseTextLoc;

/// @brief Field _purchaseTextLocStr, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__purchaseTextLocStr, put=__cordl_internal_set__purchaseTextLocStr)) ::UnityEngine::Localization::LocalizedString*  _purchaseTextLocStr;

/// @brief Method ConfirmCheckout, addr 0x5c1a388, size 0x7c, virtual false, abstract: false, final false
inline void ConfirmCheckout(::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>  button) ;

/// @brief Method FormattedPurchaseText, addr 0x5c1a404, size 0x310, virtual false, abstract: false, final false
inline void FormattedPurchaseText() ;

/// @brief Method MatchesCosmeticForPurchase, addr 0x5c1a9c4, size 0x60, virtual false, abstract: false, final false
inline bool MatchesCosmeticForPurchase(::GlobalNamespace::CosmeticsController_CosmeticItem  item) ;

static inline ::GorillaTagScripts::GhostReactor::GRKiosk* New_ctor() ;

/// @brief Method OnGetCurrency, addr 0x5c1a7ec, size 0xc, virtual false, abstract: false, final false
inline void OnGetCurrency() ;

/// @brief Method OnLeftPurchaseButtonPressed, addr 0x5c1aa24, size 0x6c, virtual false, abstract: false, final false
inline void OnLeftPurchaseButtonPressed(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeftHand) ;

/// @brief Method OnRightPurchaseButtonPressed, addr 0x5c1aa90, size 0x6c, virtual false, abstract: false, final false
inline void OnRightPurchaseButtonPressed(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeftHand) ;

/// @brief Method PlayerOwnsItem, addr 0x5c1a714, size 0xd8, virtual false, abstract: false, final false
inline bool PlayerOwnsItem() ;

/// @brief Method ProcessPurchaseItemState, addr 0x5c19d4c, size 0x194, virtual false, abstract: false, final false
inline void ProcessPurchaseItemState(::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>  button, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GRKiosk_PurchaseState>*  recentStates) ;

/// @brief Method PurchaseItem, addr 0x5c1a7f8, size 0x1cc, virtual false, abstract: false, final false
inline void PurchaseItem() ;

/// @brief Method ResetButtons, addr 0x5c19ee0, size 0xc0, virtual false, abstract: false, final false
inline void ResetButtons() ;

/// @brief Method SetAvailableForPurchaseDisplays, addr 0x5c19fa0, size 0x280, virtual false, abstract: false, final false
inline void SetAvailableForPurchaseDisplays(::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>  button) ;

/// @brief Method SetCheckoutConfirmationDisplays, addr 0x5c1a220, size 0x168, virtual false, abstract: false, final false
inline void SetCheckoutConfirmationDisplays(::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>  button) ;

/// [AsyncStateMachine(typeof(GorillaTagScripts.GhostReactor.GRKiosk::<Start>d__16))]
/// @brief Method Start, addr 0x5c19ca4, size 0xa8, virtual false, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <PurchaseItem>b__24_0, addr 0x5c1ab04, size 0x138, virtual false, abstract: false, final false
inline void _PurchaseItem_b__24_0(::PlayFab::ClientModels::PurchaseItemResult*  result) ;

constexpr ::StringW const& __cordl_internal_get_CosmeticNameForPurchase() const;

constexpr ::StringW& __cordl_internal_get_CosmeticNameForPurchase() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_LeftPurchaseButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_LeftPurchaseButton() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_PurchaseText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_PurchaseText() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_RightPurchaseButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_RightPurchaseButton() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get__cosmeticForPurchase() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get__cosmeticForPurchase() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& __cordl_internal_get__currencyBalanceVar() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& __cordl_internal_get__currencyBalanceVar() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& __cordl_internal_get__itemCostVar() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& __cordl_internal_get__itemCostVar() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable* const& __cordl_internal_get__itemNameVar() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable*& __cordl_internal_get__itemNameVar() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__purchaseAudioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__purchaseAudioClip() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__purchaseParticles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__purchaseParticles() ;

constexpr ::GlobalNamespace::GRKiosk_PurchaseState const& __cordl_internal_get__purchaseState() const;

constexpr ::GlobalNamespace::GRKiosk_PurchaseState& __cordl_internal_get__purchaseState() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get__purchaseTextLoc() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get__purchaseTextLoc() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get__purchaseTextLocStr() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get__purchaseTextLocStr() ;

constexpr void __cordl_internal_set_CosmeticNameForPurchase(::StringW  value) ;

constexpr void __cordl_internal_set_LeftPurchaseButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_PurchaseText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_RightPurchaseButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__cosmeticForPurchase(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

constexpr void __cordl_internal_set__currencyBalanceVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value) ;

constexpr void __cordl_internal_set__itemCostVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value) ;

constexpr void __cordl_internal_set__itemNameVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable*  value) ;

constexpr void __cordl_internal_set__purchaseAudioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__purchaseParticles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set__purchaseState(::GlobalNamespace::GRKiosk_PurchaseState  value) ;

constexpr void __cordl_internal_set__purchaseTextLoc(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set__purchaseTextLocStr(::UnityEngine::Localization::LocalizedString*  value) ;

/// @brief Method .ctor, addr 0x5c1aafc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRKiosk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRKiosk", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRKiosk(GRKiosk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRKiosk", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRKiosk(GRKiosk const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4131};

/// [SerializeField]
/// @brief Field CosmeticNameForPurchase, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CosmeticNameForPurchase;

/// [SerializeField]
/// @brief Field LeftPurchaseButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___LeftPurchaseButton;

/// [SerializeField]
/// @brief Field RightPurchaseButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___RightPurchaseButton;

/// [SerializeField]
/// @brief Field PurchaseText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___PurchaseText;

/// @brief Field _cosmeticForPurchase, offset: 0x40, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ____cosmeticForPurchase;

/// [SerializeField]
/// @brief Field _audioSource, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____audioSource;

/// [SerializeField]
/// @brief Field _purchaseAudioClip, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____purchaseAudioClip;

/// [SerializeField]
/// @brief Field _purchaseParticles, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ____purchaseParticles;

/// [SerializeField]
/// @brief Field _purchaseTextLoc, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ____purchaseTextLoc;

/// @brief Field _purchaseTextLocStr, offset: 0xf8, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ____purchaseTextLocStr;

/// @brief Field _itemNameVar, offset: 0x100, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable*  ____itemNameVar;

/// @brief Field _itemCostVar, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  ____itemCostVar;

/// @brief Field _currencyBalanceVar, offset: 0x110, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  ____currencyBalanceVar;

/// @brief Field _purchaseState, offset: 0x118, size: 0x4, def value: None
 ::GlobalNamespace::GRKiosk_PurchaseState  ____purchaseState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRKiosk, ___CosmeticNameForPurchase) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRKiosk, ___LeftPurchaseButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRKiosk, ___RightPurchaseButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRKiosk, ___PurchaseText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRKiosk, ____cosmeticForPurchase) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRKiosk, ____audioSource) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRKiosk, ____purchaseAudioClip) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRKiosk, ____purchaseParticles) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRKiosk, ____purchaseTextLoc) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRKiosk, ____purchaseTextLocStr) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRKiosk, ____itemNameVar) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRKiosk, ____itemCostVar) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRKiosk, ____currencyBalanceVar) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRKiosk, ____purchaseState) == 0x118, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GhostReactor::GRKiosk) == 0x120, "Size mismatch!");

} // namespace end def GorillaTagScripts::GhostReactor
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::GhostReactor {
// Is value type: false
// CS Name: GorillaTagScripts.GhostReactor.GRKiosk/<>c
class CORDL_TYPE GRKiosk___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaTagScripts::GhostReactor::GRKiosk___c*  __9;

/// @brief Field <>9__24_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_1, put=setStaticF___9__24_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__24_1;

static inline ::GorillaTagScripts::GhostReactor::GRKiosk___c* New_ctor() ;

/// @brief Method <PurchaseItem>b__24_1, addr 0x5c1acac, size 0x78, virtual false, abstract: false, final false
inline void _PurchaseItem_b__24_1(::PlayFab::PlayFabError*  error) ;

/// @brief Method .ctor, addr 0x5c1aca4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaTagScripts::GhostReactor::GRKiosk___c* getStaticF___9() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__24_1() ;

static inline void setStaticF___9(::GorillaTagScripts::GhostReactor::GRKiosk___c*  value) ;

static inline void setStaticF___9__24_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRKiosk___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRKiosk___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRKiosk___c(GRKiosk___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRKiosk___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRKiosk___c(GRKiosk___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4129};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::GhostReactor::GRKiosk___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaTagScripts::GhostReactor
