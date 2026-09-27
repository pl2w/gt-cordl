#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderKiosk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderSetManager_BuilderSetStoreItem_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_PurchaseItemStages_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderKiosk)
namespace GameObjectScheduling {
class CountdownText;
}
namespace GlobalNamespace {
class BuilderKiosk__PlaySwapAnimation_d__53;
}
namespace GlobalNamespace {
struct BuilderKiosk__Start_d__43;
}
namespace GlobalNamespace {
class BuilderPieceSet;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GlobalNamespace {
class LocalizedText;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
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
class Animation;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderKiosk;
}
namespace GlobalNamespace {
class BuilderKiosk__PlaySwapAnimation_d__53;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderKiosk*);
MARK_REF_T(::GlobalNamespace::BuilderKiosk__PlaySwapAnimation_d__53*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderKiosk*, "", "BuilderKiosk");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderKiosk__PlaySwapAnimation_d__53*, "", "BuilderKiosk/<PlaySwapAnimation>d__53");
// Dependencies BuilderSetManager::BuilderSetStoreItem, GorillaNetworking.CosmeticsController::PurchaseItemStages, GorillaPressableButton, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderKiosk
class CORDL_TYPE BuilderKiosk : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _PlaySwapAnimation_d__53 = ::GlobalNamespace::BuilderKiosk__PlaySwapAnimation_d__53;

using _Start_d__43 = ::GlobalNamespace::BuilderKiosk__Start_d__43;

/// @brief Field _currencyBalanceVar, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__currencyBalanceVar, put=__cordl_internal_set__currencyBalanceVar)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  _currencyBalanceVar;

/// @brief Field _finalLineVar, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__finalLineVar, put=__cordl_internal_set__finalLineVar)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  _finalLineVar;

/// @brief Field _itemCostVar, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__itemCostVar, put=__cordl_internal_set__itemCostVar)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  _itemCostVar;

/// @brief Field _itemNameVar, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__itemNameVar, put=__cordl_internal_set__itemNameVar)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable*  _itemNameVar;

/// @brief Field _puchaseTextLoc, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__puchaseTextLoc, put=__cordl_internal_set__puchaseTextLoc)) ::UnityW<::GlobalNamespace::LocalizedText>  _puchaseTextLoc;

/// @brief Field _puchaseTextLocStr, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__puchaseTextLocStr, put=__cordl_internal_set__puchaseTextLocStr)) ::UnityEngine::Localization::LocalizedString*  _puchaseTextLocStr;

/// @brief Field animating, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get_animating, put=__cordl_internal_set_animating)) bool  animating;

/// @brief Field audioSource, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field availableItems, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_availableItems, put=__cordl_internal_set_availableItems)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  availableItems;

/// @brief Field countdownOverride, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_countdownOverride, put=__cordl_internal_set_countdownOverride)) ::StringW  countdownOverride;

/// @brief Field countdownText, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_countdownText, put=__cordl_internal_set_countdownText)) ::UnityW<::GameObjectScheduling::CountdownText>  countdownText;

/// @brief Field currentDiorama, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentDiorama, put=__cordl_internal_set_currentDiorama)) ::UnityW<::UnityEngine::GameObject>  currentDiorama;

/// @brief Field currentPurchaseItemStage, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentPurchaseItemStage, put=__cordl_internal_set_currentPurchaseItemStage)) ::GlobalNamespace::CosmeticsController_PurchaseItemStages  currentPurchaseItemStage;

/// @brief Field currentSet, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentSet, put=__cordl_internal_set_currentSet)) ::UnityW<::GlobalNamespace::BuilderPieceSet>  currentSet;

/// @brief Field emptyDisplay, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_emptyDisplay, put=__cordl_internal_set_emptyDisplay)) ::UnityW<::UnityEngine::GameObject>  emptyDisplay;

/// @brief Field finalLine, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_finalLine, put=__cordl_internal_set_finalLine)) ::StringW  finalLine;

/// @brief Field hasInitFromPlayfab, offset 0xa4, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasInitFromPlayfab, put=__cordl_internal_set_hasInitFromPlayfab)) bool  hasInitFromPlayfab;

/// @brief Field isLastHandTouchedLeft, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLastHandTouchedLeft, put=__cordl_internal_set_isLastHandTouchedLeft)) bool  isLastHandTouchedLeft;

/// @brief Field isMiniKiosk, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isMiniKiosk, put=__cordl_internal_set_isMiniKiosk)) bool  isMiniKiosk;

/// @brief Field itemDisplayAnimation, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemDisplayAnimation, put=__cordl_internal_set_itemDisplayAnimation)) ::UnityW<::UnityEngine::Animation>  itemDisplayAnimation;

/// @brief Field itemDisplayPos, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemDisplayPos, put=__cordl_internal_set_itemDisplayPos)) ::UnityW<::UnityEngine::Transform>  itemDisplayPos;

/// @brief Field itemToBuy, offset 0xa8, size 0x38 
 __declspec(property(get=__cordl_internal_get_itemToBuy, put=__cordl_internal_set_itemToBuy)) ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem  itemToBuy;

/// @brief Field leftPurchaseButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftPurchaseButton, put=__cordl_internal_set_leftPurchaseButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  leftPurchaseButton;

/// @brief Field nextDiorama, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextDiorama, put=__cordl_internal_set_nextDiorama)) ::UnityW<::UnityEngine::GameObject>  nextDiorama;

/// @brief Field nextItemDisplayPos, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextItemDisplayPos, put=__cordl_internal_set_nextItemDisplayPos)) ::UnityW<::UnityEngine::Transform>  nextItemDisplayPos;

/// @brief Field nextPageButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextPageButton, put=__cordl_internal_set_nextPageButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  nextPageButton;

/// @brief Field nullItem, offset 0xffffffff, size 0x38 
 __declspec(property(get=getStaticF_nullItem, put=setStaticF_nullItem)) ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem  nullItem;

/// @brief Field pageIndex, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_pageIndex, put=__cordl_internal_set_pageIndex)) int32_t  pageIndex;

/// @brief Field pieceSetForSale, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pieceSetForSale, put=__cordl_internal_set_pieceSetForSale)) ::UnityW<::GlobalNamespace::BuilderPieceSet>  pieceSetForSale;

/// @brief Field previousPageButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_previousPageButton, put=__cordl_internal_set_previousPageButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  previousPageButton;

/// @brief Field purchaseParticles, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseParticles, put=__cordl_internal_set_purchaseParticles)) ::UnityW<::UnityEngine::ParticleSystem>  purchaseParticles;

/// @brief Field purchaseSetAudioClip, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseSetAudioClip, put=__cordl_internal_set_purchaseSetAudioClip)) ::UnityW<::UnityEngine::AudioClip>  purchaseSetAudioClip;

/// @brief Field purchaseText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseText, put=__cordl_internal_set_purchaseText)) ::UnityW<::TMPro::TMP_Text>  purchaseText;

/// @brief Field rightPurchaseButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightPurchaseButton, put=__cordl_internal_set_rightPurchaseButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  rightPurchaseButton;

/// @brief Field setButtons, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_setButtons, put=__cordl_internal_set_setButtons)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  setButtons;

/// @brief Field setsPerPage, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_setsPerPage, put=__cordl_internal_set_setsPerPage)) int32_t  setsPerPage;

/// @brief Field totalPages, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalPages, put=__cordl_internal_set_totalPages)) int32_t  totalPages;

/// @brief Field useTitleCountDown, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_useTitleCountDown, put=__cordl_internal_set_useTitleCountDown)) bool  useTitleCountDown;

/// @brief Method Awake, addr 0x57baf04, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearCheckout, addr 0x57bd2fc, size 0x154, virtual false, abstract: false, final false
inline void ClearCheckout() ;

/// @brief Method FormattedPurchaseText, addr 0x57bd450, size 0x168, virtual false, abstract: false, final false
inline void FormattedPurchaseText(int32_t  finalLineVar) ;

static inline ::GlobalNamespace::BuilderKiosk* New_ctor() ;

/// @brief Method OnDestroy, addr 0x57bb944, size 0x640, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnNextPageClicked, addr 0x57bd15c, size 0x34, virtual false, abstract: false, final false
inline void OnNextPageClicked() ;

/// @brief Method OnOwnedSetsUpdated, addr 0x57bbf84, size 0x2d8, virtual false, abstract: false, final false
inline void OnOwnedSetsUpdated() ;

/// @brief Method OnPreviousPageClicked, addr 0x57bd128, size 0x34, virtual false, abstract: false, final false
inline void OnPreviousPageClicked() ;

/// @brief Method OnSetButtonPressed, addr 0x57bcf1c, size 0x20c, virtual false, abstract: false, final false
inline void OnSetButtonPressed(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft) ;

/// @brief Method OnUpdateCurrencyBalance, addr 0x57bd2dc, size 0x20, virtual false, abstract: false, final false
inline void OnUpdateCurrencyBalance() ;

/// [IteratorStateMachine(typeof(BuilderKiosk::<PlaySwapAnimation>d__53))]
/// @brief Method PlaySwapAnimation, addr 0x57bd190, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PlaySwapAnimation() ;

/// @brief Method PressLeftPurchaseItemButton, addr 0x57bd204, size 0x6c, virtual false, abstract: false, final false
inline void PressLeftPurchaseItemButton(::GlobalNamespace::GorillaPressableButton*  pressedPurchaseItemButton, bool  isLeftHand) ;

/// @brief Method PressRightPurchaseItemButton, addr 0x57bd270, size 0x6c, virtual false, abstract: false, final false
inline void PressRightPurchaseItemButton(::GlobalNamespace::GorillaPressableButton*  pressedPurchaseItemButton, bool  isLeftHand) ;

/// @brief Method ProcessPurchaseItemState, addr 0x57bc574, size 0x9a8, virtual false, abstract: false, final false
inline void ProcessPurchaseItemState(::StringW  buttonSide, bool  isLeftHand) ;

/// @brief Method PurchaseItem, addr 0x57bd5b8, size 0xc8, virtual false, abstract: false, final false
inline void PurchaseItem() ;

/// @brief Method SetupSetButtons, addr 0x57bb194, size 0x268, virtual false, abstract: false, final false
inline void SetupSetButtons() ;

/// [AsyncStateMachine(typeof(BuilderKiosk::<Start>d__43))]
/// @brief Method Start, addr 0x57bafe4, size 0xa8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateCountdown, addr 0x57bb08c, size 0x108, virtual false, abstract: false, final false
inline void UpdateCountdown() ;

/// @brief Method UpdateDiorama, addr 0x57bc25c, size 0x318, virtual false, abstract: false, final false
inline void UpdateDiorama() ;

/// @brief Method UpdateLabels, addr 0x57bb3fc, size 0x548, virtual false, abstract: false, final false
inline void UpdateLabels() ;

/// [CompilerGenerated]
/// @brief Method <PurchaseItem>b__60_0, addr 0x57bd740, size 0x144, virtual false, abstract: false, final false
inline void _PurchaseItem_b__60_0(bool  result) ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& __cordl_internal_get__currencyBalanceVar() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& __cordl_internal_get__currencyBalanceVar() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& __cordl_internal_get__finalLineVar() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& __cordl_internal_get__finalLineVar() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& __cordl_internal_get__itemCostVar() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& __cordl_internal_get__itemCostVar() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable* const& __cordl_internal_get__itemNameVar() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable*& __cordl_internal_get__itemNameVar() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get__puchaseTextLoc() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get__puchaseTextLoc() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get__puchaseTextLocStr() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get__puchaseTextLocStr() ;

constexpr bool const& __cordl_internal_get_animating() const;

constexpr bool& __cordl_internal_get_animating() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* const& __cordl_internal_get_availableItems() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*& __cordl_internal_get_availableItems() ;

constexpr ::StringW const& __cordl_internal_get_countdownOverride() const;

constexpr ::StringW& __cordl_internal_get_countdownOverride() ;

constexpr ::UnityW<::GameObjectScheduling::CountdownText> const& __cordl_internal_get_countdownText() const;

constexpr ::UnityW<::GameObjectScheduling::CountdownText>& __cordl_internal_get_countdownText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_currentDiorama() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_currentDiorama() ;

constexpr ::GlobalNamespace::CosmeticsController_PurchaseItemStages const& __cordl_internal_get_currentPurchaseItemStage() const;

constexpr ::GlobalNamespace::CosmeticsController_PurchaseItemStages& __cordl_internal_get_currentPurchaseItemStage() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPieceSet> const& __cordl_internal_get_currentSet() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPieceSet>& __cordl_internal_get_currentSet() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_emptyDisplay() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_emptyDisplay() ;

constexpr ::StringW const& __cordl_internal_get_finalLine() const;

constexpr ::StringW& __cordl_internal_get_finalLine() ;

constexpr bool const& __cordl_internal_get_hasInitFromPlayfab() const;

constexpr bool& __cordl_internal_get_hasInitFromPlayfab() ;

constexpr bool const& __cordl_internal_get_isLastHandTouchedLeft() const;

constexpr bool& __cordl_internal_get_isLastHandTouchedLeft() ;

constexpr bool const& __cordl_internal_get_isMiniKiosk() const;

constexpr bool& __cordl_internal_get_isMiniKiosk() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_itemDisplayAnimation() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_itemDisplayAnimation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_itemDisplayPos() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_itemDisplayPos() ;

constexpr ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem const& __cordl_internal_get_itemToBuy() const;

constexpr ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem& __cordl_internal_get_itemToBuy() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_leftPurchaseButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_leftPurchaseButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_nextDiorama() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_nextDiorama() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_nextItemDisplayPos() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_nextItemDisplayPos() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_nextPageButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_nextPageButton() ;

constexpr int32_t const& __cordl_internal_get_pageIndex() const;

constexpr int32_t& __cordl_internal_get_pageIndex() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPieceSet> const& __cordl_internal_get_pieceSetForSale() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPieceSet>& __cordl_internal_get_pieceSetForSale() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_previousPageButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_previousPageButton() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_purchaseParticles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_purchaseParticles() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_purchaseSetAudioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_purchaseSetAudioClip() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_purchaseText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_purchaseText() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_rightPurchaseButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_rightPurchaseButton() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>> const& __cordl_internal_get_setButtons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>& __cordl_internal_get_setButtons() ;

constexpr int32_t const& __cordl_internal_get_setsPerPage() const;

constexpr int32_t& __cordl_internal_get_setsPerPage() ;

constexpr int32_t const& __cordl_internal_get_totalPages() const;

constexpr int32_t& __cordl_internal_get_totalPages() ;

constexpr bool const& __cordl_internal_get_useTitleCountDown() const;

constexpr bool& __cordl_internal_get_useTitleCountDown() ;

constexpr void __cordl_internal_set__currencyBalanceVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value) ;

constexpr void __cordl_internal_set__finalLineVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value) ;

constexpr void __cordl_internal_set__itemCostVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value) ;

constexpr void __cordl_internal_set__itemNameVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable*  value) ;

constexpr void __cordl_internal_set__puchaseTextLoc(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set__puchaseTextLocStr(::UnityEngine::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set_animating(bool  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_availableItems(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  value) ;

constexpr void __cordl_internal_set_countdownOverride(::StringW  value) ;

constexpr void __cordl_internal_set_countdownText(::UnityW<::GameObjectScheduling::CountdownText>  value) ;

constexpr void __cordl_internal_set_currentDiorama(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_currentPurchaseItemStage(::GlobalNamespace::CosmeticsController_PurchaseItemStages  value) ;

constexpr void __cordl_internal_set_currentSet(::UnityW<::GlobalNamespace::BuilderPieceSet>  value) ;

constexpr void __cordl_internal_set_emptyDisplay(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_finalLine(::StringW  value) ;

constexpr void __cordl_internal_set_hasInitFromPlayfab(bool  value) ;

constexpr void __cordl_internal_set_isLastHandTouchedLeft(bool  value) ;

constexpr void __cordl_internal_set_isMiniKiosk(bool  value) ;

constexpr void __cordl_internal_set_itemDisplayAnimation(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_itemDisplayPos(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_itemToBuy(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem  value) ;

constexpr void __cordl_internal_set_leftPurchaseButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_nextDiorama(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_nextItemDisplayPos(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_nextPageButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_pageIndex(int32_t  value) ;

constexpr void __cordl_internal_set_pieceSetForSale(::UnityW<::GlobalNamespace::BuilderPieceSet>  value) ;

constexpr void __cordl_internal_set_previousPageButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_purchaseParticles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_purchaseSetAudioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_purchaseText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_rightPurchaseButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_setButtons(::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  value) ;

constexpr void __cordl_internal_set_setsPerPage(int32_t  value) ;

constexpr void __cordl_internal_set_totalPages(int32_t  value) ;

constexpr void __cordl_internal_set_useTitleCountDown(bool  value) ;

/// @brief Method .ctor, addr 0x57bd680, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem getStaticF_nullItem() ;

static inline void setStaticF_nullItem(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderKiosk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderKiosk", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderKiosk(BuilderKiosk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderKiosk", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderKiosk(BuilderKiosk const& ) = delete;

/// @brief Field MONKE_BLOCKS_PURCHASE_BUTTON_CONFIRMATION_CANCEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_PURCHASE_BUTTON_CONFIRMATION_CANCEL_KEY{u"MONKE_BLOCKS_PURCHASE_BUTTON_CONFIRMATION_CANCEL"};

/// @brief Field MONKE_BLOCKS_PURCHASE_BUTTON_CONFIRMATION_CONFIRM_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_PURCHASE_BUTTON_CONFIRMATION_CONFIRM_KEY{u"MONKE_BLOCKS_PURCHASE_BUTTON_CONFIRMATION_CONFIRM"};

/// @brief Field MONKE_BLOCKS_PURCHASE_BUTTON_WANT_TO_BUY_CANCEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_PURCHASE_BUTTON_WANT_TO_BUY_CANCEL_KEY{u"MONKE_BLOCKS_PURCHASE_BUTTON_WANT_TO_BUY_CANCEL"};

/// @brief Field MONKE_BLOCKS_PURCHASE_BUTTON_WANT_TO_BUY_CONFIRM_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_PURCHASE_BUTTON_WANT_TO_BUY_CONFIRM_KEY{u"MONKE_BLOCKS_PURCHASE_BUTTON_WANT_TO_BUY_CONFIRM"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1592};

/// @brief Field pieceSetForSale, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPieceSet>  ___pieceSetForSale;

/// @brief Field leftPurchaseButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___leftPurchaseButton;

/// @brief Field rightPurchaseButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___rightPurchaseButton;

/// @brief Field purchaseText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___purchaseText;

/// [SerializeField]
/// @brief Field isMiniKiosk, offset: 0x40, size: 0x1, def value: None
 bool  ___isMiniKiosk;

/// [SerializeField]
/// @brief Field useTitleCountDown, offset: 0x41, size: 0x1, def value: None
 bool  ___useTitleCountDown;

/// [Header("Buttons")]
/// [SerializeField]
/// @brief Field setButtons, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  ___setButtons;

/// [SerializeField]
/// @brief Field previousPageButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___previousPageButton;

/// [SerializeField]
/// @brief Field nextPageButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___nextPageButton;

/// @brief Field currentSet, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPieceSet>  ___currentSet;

/// @brief Field pageIndex, offset: 0x68, size: 0x4, def value: None
 int32_t  ___pageIndex;

/// @brief Field setsPerPage, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___setsPerPage;

/// @brief Field totalPages, offset: 0x70, size: 0x4, def value: None
 int32_t  ___totalPages;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field purchaseSetAudioClip, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___purchaseSetAudioClip;

/// [SerializeField]
/// @brief Field purchaseParticles, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___purchaseParticles;

/// [SerializeField]
/// @brief Field emptyDisplay, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___emptyDisplay;

/// @brief Field availableItems, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  ___availableItems;

/// @brief Field currentPurchaseItemStage, offset: 0xa0, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticsController_PurchaseItemStages  ___currentPurchaseItemStage;

/// @brief Field hasInitFromPlayfab, offset: 0xa4, size: 0x1, def value: None
 bool  ___hasInitFromPlayfab;

/// @brief Field itemToBuy, offset: 0xa8, size: 0x38, def value: None
 ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem  ___itemToBuy;

/// @brief Field currentDiorama, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___currentDiorama;

/// @brief Field nextDiorama, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___nextDiorama;

/// @brief Field animating, offset: 0xf0, size: 0x1, def value: None
 bool  ___animating;

/// [SerializeField]
/// @brief Field itemDisplayPos, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___itemDisplayPos;

/// [SerializeField]
/// @brief Field nextItemDisplayPos, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___nextItemDisplayPos;

/// [SerializeField]
/// @brief Field itemDisplayAnimation, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___itemDisplayAnimation;

/// [SerializeField]
/// @brief Field countdownText, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GameObjectScheduling::CountdownText>  ___countdownText;

/// @brief Field countdownOverride, offset: 0x118, size: 0x8, def value: None
 ::StringW  ___countdownOverride;

/// @brief Field isLastHandTouchedLeft, offset: 0x120, size: 0x1, def value: None
 bool  ___isLastHandTouchedLeft;

/// @brief Field finalLine, offset: 0x128, size: 0x8, def value: None
 ::StringW  ___finalLine;

/// [Header("Localization")]
/// [SerializeField]
/// @brief Field _puchaseTextLoc, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ____puchaseTextLoc;

/// @brief Field _puchaseTextLocStr, offset: 0x138, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ____puchaseTextLocStr;

/// @brief Field _itemNameVar, offset: 0x140, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable*  ____itemNameVar;

/// @brief Field _finalLineVar, offset: 0x148, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  ____finalLineVar;

/// @brief Field _itemCostVar, offset: 0x150, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  ____itemCostVar;

/// @brief Field _currencyBalanceVar, offset: 0x158, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  ____currencyBalanceVar;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___pieceSetForSale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___leftPurchaseButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___rightPurchaseButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___purchaseText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___isMiniKiosk) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___useTitleCountDown) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___setButtons) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___previousPageButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___nextPageButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___currentSet) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___pageIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___setsPerPage) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___totalPages) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___audioSource) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___purchaseSetAudioClip) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___purchaseParticles) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___emptyDisplay) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___availableItems) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___currentPurchaseItemStage) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___hasInitFromPlayfab) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___itemToBuy) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___currentDiorama) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___nextDiorama) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___animating) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___itemDisplayPos) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___nextItemDisplayPos) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___itemDisplayAnimation) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___countdownText) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___countdownOverride) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___isLastHandTouchedLeft) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ___finalLine) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ____puchaseTextLoc) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ____puchaseTextLocStr) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ____itemNameVar) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ____finalLineVar) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ____itemCostVar) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk, ____currencyBalanceVar) == 0x158, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderKiosk) == 0x160, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderKiosk/<PlaySwapAnimation>d__53
class CORDL_TYPE BuilderKiosk__PlaySwapAnimation_d__53 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::BuilderKiosk>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x57bd8b0, size 0x180, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::BuilderKiosk__PlaySwapAnimation_d__53* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x57bda30, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x57bda38, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x57bda70, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x57bd8ac, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::BuilderKiosk> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::BuilderKiosk>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BuilderKiosk>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x57bd884, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderKiosk__PlaySwapAnimation_d__53() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderKiosk__PlaySwapAnimation_d__53", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderKiosk__PlaySwapAnimation_d__53(BuilderKiosk__PlaySwapAnimation_d__53 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderKiosk__PlaySwapAnimation_d__53", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderKiosk__PlaySwapAnimation_d__53(BuilderKiosk__PlaySwapAnimation_d__53 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1590};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderKiosk>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderKiosk__PlaySwapAnimation_d__53, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk__PlaySwapAnimation_d__53, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKiosk__PlaySwapAnimation_d__53, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderKiosk__PlaySwapAnimation_d__53) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
