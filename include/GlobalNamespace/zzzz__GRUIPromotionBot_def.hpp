#pragma once
// IWYU pragma private; include "GlobalNamespace/GRUIPromotionBot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRUIPromotionBot_PromotionBotState_def.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRUIPromotionBot)
namespace GlobalNamespace {
struct GRUIPromotionBot_PromotionBotState;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace GlobalNamespace {
class IDCardScanner;
}
namespace System::Text {
class StringBuilder;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GRUIPromotionBot;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRUIPromotionBot*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRUIPromotionBot*, "", "GRUIPromotionBot");
// Dependencies GRUIPromotionBot::PromotionBotState, MonoBehaviourTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRUIPromotionBot
class CORDL_TYPE GRUIPromotionBot : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
using PromotionBotState = ::GlobalNamespace::GRUIPromotionBot_PromotionBotState;

/// @brief Field EVENT_PROMOTED, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EVENT_PROMOTED, put=setStaticF_EVENT_PROMOTED)) ::StringW  EVENT_PROMOTED;

/// @brief Field buttonReturnText, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonReturnText, put=__cordl_internal_set_buttonReturnText)) ::StringW  buttonReturnText;

/// @brief Field cachedStringBuilder, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedStringBuilder, put=__cordl_internal_set_cachedStringBuilder)) ::System::Text::StringBuilder*  cachedStringBuilder;

/// @brief Field currentPlayerActorNumber, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentPlayerActorNumber, put=__cordl_internal_set_currentPlayerActorNumber)) int32_t  currentPlayerActorNumber;

/// @brief Field currentState, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::GRUIPromotionBot_PromotionBotState  currentState;

/// @brief Field defaultText, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultText, put=__cordl_internal_set_defaultText)) ::StringW  defaultText;

/// @brief Field descriptionText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_descriptionText, put=__cordl_internal_set_descriptionText)) ::UnityW<::TMPro::TMP_Text>  descriptionText;

/// @brief Field distanceForAutoLogout, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_distanceForAutoLogout, put=__cordl_internal_set_distanceForAutoLogout)) float_t  distanceForAutoLogout;

/// @brief Field inertButtonText, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_inertButtonText, put=__cordl_internal_set_inertButtonText)) ::StringW  inertButtonText;

/// @brief Field levelUpSound, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_levelUpSound, put=__cordl_internal_set_levelUpSound)) ::UnityW<::UnityEngine::AudioSource>  levelUpSound;

/// @brief Field menuText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_menuText, put=__cordl_internal_set_menuText)) ::UnityW<::TMPro::TMP_Text>  menuText;

/// @brief Field noText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_noText, put=__cordl_internal_set_noText)) ::UnityW<::TMPro::TMP_Text>  noText;

/// @brief Field particlesGO, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_particlesGO, put=__cordl_internal_set_particlesGO)) ::UnityW<::UnityEngine::GameObject>  particlesGO;

/// @brief Field popSound, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_popSound, put=__cordl_internal_set_popSound)) ::UnityW<::UnityEngine::AudioSource>  popSound;

/// @brief Field promotionTextStr1, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_promotionTextStr1, put=__cordl_internal_set_promotionTextStr1)) ::StringW  promotionTextStr1;

/// @brief Field promotionTextStr2, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_promotionTextStr2, put=__cordl_internal_set_promotionTextStr2)) ::StringW  promotionTextStr2;

/// @brief Field promotionTextStr3, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_promotionTextStr3, put=__cordl_internal_set_promotionTextStr3)) ::StringW  promotionTextStr3;

/// @brief Field purchaseSuccessText, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseSuccessText, put=__cordl_internal_set_purchaseSuccessText)) ::UnityW<::TMPro::TMP_Text>  purchaseSuccessText;

/// @brief Field reactor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field requestPromotionText, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestPromotionText, put=__cordl_internal_set_requestPromotionText)) ::StringW  requestPromotionText;

/// @brief Field scanner, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_scanner, put=__cordl_internal_set_scanner)) ::UnityW<::GlobalNamespace::IDCardScanner>  scanner;

/// @brief Field startScreenText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_startScreenText, put=__cordl_internal_set_startScreenText)) ::UnityW<::TMPro::TMP_Text>  startScreenText;

/// @brief Field timeBetweenDistanceChecks, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeBetweenDistanceChecks, put=__cordl_internal_set_timeBetweenDistanceChecks)) float_t  timeBetweenDistanceChecks;

/// @brief Field timeLastDistanceCheck, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeLastDistanceCheck, put=__cordl_internal_set_timeLastDistanceCheck)) float_t  timeLastDistanceCheck;

/// @brief Field timeOutTime, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeOutTime, put=__cordl_internal_set_timeOutTime)) float_t  timeOutTime;

/// @brief Field userInfo, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_userInfo, put=__cordl_internal_set_userInfo)) ::UnityW<::TMPro::TMP_Text>  userInfo;

/// @brief Field yesText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_yesText, put=__cordl_internal_set_yesText)) ::UnityW<::TMPro::TMP_Text>  yesText;

/// @brief Method ActivePlayerEligibleForPromotion, addr 0x58d2734, size 0xd8, virtual false, abstract: false, final false
inline bool ActivePlayerEligibleForPromotion() ;

/// @brief Method AttemptPromotion, addr 0x58d3400, size 0x1d4, virtual false, abstract: false, final false
inline void AttemptPromotion() ;

/// @brief Method AttemptPurchaseShiftCreditIncrease, addr 0x58d3170, size 0x290, virtual false, abstract: false, final false
inline void AttemptPurchaseShiftCreditIncrease() ;

/// @brief Method AttemptPurchaseShiftCreditRefillToMax, addr 0x58d3624, size 0x2d4, virtual false, abstract: false, final false
inline void AttemptPurchaseShiftCreditRefillToMax() ;

/// @brief Method CelebratePromotion, addr 0x58d3b40, size 0x150, virtual false, abstract: false, final false
inline void CelebratePromotion() ;

/// @brief Method CheckIsActivePlayer, addr 0x58d2f58, size 0x10c, virtual false, abstract: false, final false
inline bool CheckIsActivePlayer() ;

/// @brief Method DownPressed, addr 0x58d30ac, size 0x48, virtual false, abstract: false, final false
inline void DownPressed() ;

/// @brief Method FormattedUserInfo, addr 0x58d21c0, size 0x574, virtual false, abstract: false, final false
inline ::StringW FormattedUserInfo() ;

/// @brief Method GetCurrentPlayerActorNumber, addr 0x58d4ac8, size 0x8, virtual false, abstract: false, final false
inline int32_t GetCurrentPlayerActorNumber() ;

/// @brief Method GetPurchaseToCreditCapAmount, addr 0x58d3a90, size 0xb0, virtual false, abstract: false, final false
inline int32_t GetPurchaseToCreditCapAmount() ;

/// @brief Method Init, addr 0x58d280c, size 0x24, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GhostReactor*  _reactor) ;

static inline ::GlobalNamespace::GRUIPromotionBot* New_ctor() ;

/// @brief Method NoPressed, addr 0x58d35d4, size 0x50, virtual false, abstract: false, final false
inline void NoPressed() ;

/// @brief Method OnGetShiftCredit, addr 0x58d3da8, size 0xdc, virtual false, abstract: false, final false
inline void OnGetShiftCredit(::StringW  mothershipId, int32_t  credit) ;

/// @brief Method OnGetShiftCreditCapData, addr 0x58d3f50, size 0xdc, virtual false, abstract: false, final false
inline void OnGetShiftCreditCapData(::StringW  mothershipId, int32_t  creditCap, int32_t  creditCapMax) ;

/// @brief Method OnJuiceUpdated, addr 0x58d3da4, size 0x4, virtual false, abstract: false, final false
inline void OnJuiceUpdated() ;

/// @brief Method OnPurchaseCallback, addr 0x58d3c90, size 0x114, virtual false, abstract: false, final false
inline void OnPurchaseCallback(bool  success) ;

/// @brief Method OnShinyRocksUpdated, addr 0x58d3e84, size 0xcc, virtual false, abstract: false, final false
inline void OnShinyRocksUpdated() ;

/// @brief Method PlayerSwipedID, addr 0x58d4180, size 0x190, virtual false, abstract: false, final false
inline void PlayerSwipedID() ;

/// @brief Method Refresh, addr 0x58d2830, size 0x4, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method RefreshActivePlayerBadge, addr 0x58d402c, size 0x154, virtual false, abstract: false, final false
inline void RefreshActivePlayerBadge() ;

/// @brief Method RefreshPlayerData, addr 0x58d2834, size 0x30, virtual false, abstract: false, final false
inline void RefreshPlayerData() ;

/// @brief Method SetActivePlayerStateChange, addr 0x58d4310, size 0x7b8, virtual false, abstract: false, final false
inline void SetActivePlayerStateChange(int32_t  actorNumber, int32_t  state) ;

/// @brief Method SetMenuText, addr 0x58d39c8, size 0xc8, virtual false, abstract: false, final false
inline void SetMenuText(::GlobalNamespace::GRUIPromotionBot_PromotionBotState  menuState) ;

/// @brief Method SetScreenVisibility, addr 0x58d38f8, size 0xd0, virtual false, abstract: false, final false
inline void SetScreenVisibility() ;

/// @brief Method SwitchState, addr 0x58d2a48, size 0x510, virtual false, abstract: false, final false
inline void SwitchState(::GlobalNamespace::GRUIPromotionBot_PromotionBotState  newState, bool  fromRPC) ;

/// @brief Method Tick, addr 0x58d2864, size 0x1e4, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method UpPressed, addr 0x58d3064, size 0x48, virtual false, abstract: false, final false
inline void UpPressed() ;

/// @brief Method YesPressed, addr 0x58d30f4, size 0x7c, virtual false, abstract: false, final false
inline void YesPressed() ;

constexpr ::StringW const& __cordl_internal_get_buttonReturnText() const;

constexpr ::StringW& __cordl_internal_get_buttonReturnText() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_cachedStringBuilder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_cachedStringBuilder() ;

constexpr int32_t const& __cordl_internal_get_currentPlayerActorNumber() const;

constexpr int32_t& __cordl_internal_get_currentPlayerActorNumber() ;

constexpr ::GlobalNamespace::GRUIPromotionBot_PromotionBotState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::GRUIPromotionBot_PromotionBotState& __cordl_internal_get_currentState() ;

constexpr ::StringW const& __cordl_internal_get_defaultText() const;

constexpr ::StringW& __cordl_internal_get_defaultText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_descriptionText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_descriptionText() ;

constexpr float_t const& __cordl_internal_get_distanceForAutoLogout() const;

constexpr float_t& __cordl_internal_get_distanceForAutoLogout() ;

constexpr ::StringW const& __cordl_internal_get_inertButtonText() const;

constexpr ::StringW& __cordl_internal_get_inertButtonText() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_levelUpSound() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_levelUpSound() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_menuText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_menuText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_noText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_noText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_particlesGO() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_particlesGO() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_popSound() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_popSound() ;

constexpr ::StringW const& __cordl_internal_get_promotionTextStr1() const;

constexpr ::StringW& __cordl_internal_get_promotionTextStr1() ;

constexpr ::StringW const& __cordl_internal_get_promotionTextStr2() const;

constexpr ::StringW& __cordl_internal_get_promotionTextStr2() ;

constexpr ::StringW const& __cordl_internal_get_promotionTextStr3() const;

constexpr ::StringW& __cordl_internal_get_promotionTextStr3() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_purchaseSuccessText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_purchaseSuccessText() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr ::StringW const& __cordl_internal_get_requestPromotionText() const;

constexpr ::StringW& __cordl_internal_get_requestPromotionText() ;

constexpr ::UnityW<::GlobalNamespace::IDCardScanner> const& __cordl_internal_get_scanner() const;

constexpr ::UnityW<::GlobalNamespace::IDCardScanner>& __cordl_internal_get_scanner() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_startScreenText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_startScreenText() ;

constexpr float_t const& __cordl_internal_get_timeBetweenDistanceChecks() const;

constexpr float_t& __cordl_internal_get_timeBetweenDistanceChecks() ;

constexpr float_t const& __cordl_internal_get_timeLastDistanceCheck() const;

constexpr float_t& __cordl_internal_get_timeLastDistanceCheck() ;

constexpr float_t const& __cordl_internal_get_timeOutTime() const;

constexpr float_t& __cordl_internal_get_timeOutTime() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_userInfo() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_userInfo() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_yesText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_yesText() ;

constexpr void __cordl_internal_set_buttonReturnText(::StringW  value) ;

constexpr void __cordl_internal_set_cachedStringBuilder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_currentPlayerActorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::GRUIPromotionBot_PromotionBotState  value) ;

constexpr void __cordl_internal_set_defaultText(::StringW  value) ;

constexpr void __cordl_internal_set_descriptionText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_distanceForAutoLogout(float_t  value) ;

constexpr void __cordl_internal_set_inertButtonText(::StringW  value) ;

constexpr void __cordl_internal_set_levelUpSound(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_menuText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_noText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_particlesGO(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_popSound(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_promotionTextStr1(::StringW  value) ;

constexpr void __cordl_internal_set_promotionTextStr2(::StringW  value) ;

constexpr void __cordl_internal_set_promotionTextStr3(::StringW  value) ;

constexpr void __cordl_internal_set_purchaseSuccessText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_requestPromotionText(::StringW  value) ;

constexpr void __cordl_internal_set_scanner(::UnityW<::GlobalNamespace::IDCardScanner>  value) ;

constexpr void __cordl_internal_set_startScreenText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_timeBetweenDistanceChecks(float_t  value) ;

constexpr void __cordl_internal_set_timeLastDistanceCheck(float_t  value) ;

constexpr void __cordl_internal_set_timeOutTime(float_t  value) ;

constexpr void __cordl_internal_set_userInfo(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_yesText(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x58d4ad0, size 0x19c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_EVENT_PROMOTED() ;

static inline void setStaticF_EVENT_PROMOTED(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRUIPromotionBot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRUIPromotionBot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRUIPromotionBot(GRUIPromotionBot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRUIPromotionBot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRUIPromotionBot(GRUIPromotionBot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2102};

/// @brief Field newLine offset 0xffffffff size 0x8
static constexpr ::ConstString  newLine{u"\n"};

/// @brief Field reactor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

/// @brief Field startScreenText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___startScreenText;

/// @brief Field userInfo, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___userInfo;

/// @brief Field menuText, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___menuText;

/// @brief Field descriptionText, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___descriptionText;

/// @brief Field yesText, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___yesText;

/// @brief Field noText, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___noText;

/// @brief Field purchaseSuccessText, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___purchaseSuccessText;

/// @brief Field scanner, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::IDCardScanner>  ___scanner;

/// @brief Field particlesGO, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___particlesGO;

/// @brief Field levelUpSound, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___levelUpSound;

/// @brief Field popSound, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___popSound;

/// @brief Field defaultText, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___defaultText;

/// @brief Field promotionTextStr1, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___promotionTextStr1;

/// @brief Field promotionTextStr2, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___promotionTextStr2;

/// @brief Field promotionTextStr3, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___promotionTextStr3;

/// @brief Field inertButtonText, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___inertButtonText;

/// @brief Field buttonReturnText, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___buttonReturnText;

/// @brief Field requestPromotionText, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___requestPromotionText;

/// @brief Field currentPlayerActorNumber, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___currentPlayerActorNumber;

/// @brief Field currentState, offset: 0xc4, size: 0x4, def value: None
 ::GlobalNamespace::GRUIPromotionBot_PromotionBotState  ___currentState;

/// @brief Field timeOutTime, offset: 0xc8, size: 0x4, def value: None
 float_t  ___timeOutTime;

/// @brief Field distanceForAutoLogout, offset: 0xcc, size: 0x4, def value: None
 float_t  ___distanceForAutoLogout;

/// @brief Field cachedStringBuilder, offset: 0xd0, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___cachedStringBuilder;

/// @brief Field timeLastDistanceCheck, offset: 0xd8, size: 0x4, def value: None
 float_t  ___timeLastDistanceCheck;

/// @brief Field timeBetweenDistanceChecks, offset: 0xdc, size: 0x4, def value: None
 float_t  ___timeBetweenDistanceChecks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___reactor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___startScreenText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___userInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___menuText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___descriptionText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___yesText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___noText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___purchaseSuccessText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___scanner) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___particlesGO) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___levelUpSound) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___popSound) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___defaultText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___promotionTextStr1) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___promotionTextStr2) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___promotionTextStr3) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___inertButtonText) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___buttonReturnText) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___requestPromotionText) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___currentPlayerActorNumber) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___currentState) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___timeOutTime) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___distanceForAutoLogout) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___cachedStringBuilder) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___timeLastDistanceCheck) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot, ___timeBetweenDistanceChecks) == 0xdc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRUIPromotionBot) == 0xe0, "Size mismatch!");

} // namespace end def GlobalNamespace
