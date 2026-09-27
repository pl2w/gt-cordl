#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIResourceCollection_FailReason_def.hpp"
#include "GlobalNamespace/zzzz__SIResourceCollection_ResourceCollectorTerminalState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SIResourceCollection)
namespace GlobalNamespace {
class DestroyIfNotBeta;
}
namespace GlobalNamespace {
class ITouchScreenStation;
}
namespace GlobalNamespace {
class ProgressionManager_UserInventory;
}
namespace GlobalNamespace {
class SICombinedTerminal;
}
namespace GlobalNamespace {
class SIPlayer;
}
namespace GlobalNamespace {
struct SIResourceCollection_FailReason;
}
namespace GlobalNamespace {
struct SIResourceCollection_ResourceCollectorTerminalState;
}
namespace GlobalNamespace {
class SIResourceCollection___c;
}
namespace GlobalNamespace {
struct SIResourceCollection___c__DisplayClass45_0;
}
namespace GlobalNamespace {
struct SIResource_ResourceType;
}
namespace GlobalNamespace {
class SIScreenRegion;
}
namespace GlobalNamespace {
struct SITouchscreenButton_SITouchscreenButtonType;
}
namespace GlobalNamespace {
class SITouchscreenButton;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class SuperInfectionManager;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SIResourceCollection;
}
namespace GlobalNamespace {
class SIResourceCollection___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIResourceCollection*);
MARK_REF_T(::GlobalNamespace::SIResourceCollection___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIResourceCollection*, "", "SIResourceCollection");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIResourceCollection___c*, "", "SIResourceCollection/<>c");
// Dependencies SIResourceCollection::FailReason, SIResourceCollection::ResourceCollectorTerminalState, UnityEngine.Color, UnityEngine.GameObject, UnityEngine.MonoBehaviour, UnityEngine.Sprite
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIResourceCollection
class CORDL_TYPE SIResourceCollection : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FailReason = ::GlobalNamespace::SIResourceCollection_FailReason;

using ResourceCollectorTerminalState = ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState;

using __c = ::GlobalNamespace::SIResourceCollection___c;

using __c__DisplayClass45_0 = ::GlobalNamespace::SIResourceCollection___c__DisplayClass45_0;

 __declspec(property(get=get_ActivePlayer)) ::UnityW<::GlobalNamespace::SIPlayer>  ActivePlayer;

 __declspec(property(get=get_IsAuthority)) bool  IsAuthority;

 __declspec(property(get=get_SIManager)) ::UnityW<::GlobalNamespace::SuperInfectionManager>  SIManager;

 __declspec(property(get=get_ScreenRegion)) ::UnityW<::GlobalNamespace::SIScreenRegion>  ScreenRegion;

/// @brief Field _nonPopupButtonColliders, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__nonPopupButtonColliders, put=__cordl_internal_set__nonPopupButtonColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  _nonPopupButtonColliders;

/// @brief Field active, offset 0xd0, size 0x10 
 __declspec(property(get=__cordl_internal_get_active, put=__cordl_internal_set_active)) ::UnityEngine::Color  active;

/// @brief Field background, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_background, put=__cordl_internal_set_background)) ::UnityW<::UnityEngine::UI::Image>  background;

/// @brief Field currentHelpButtonPageIndex, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentHelpButtonPageIndex, put=__cordl_internal_set_currentHelpButtonPageIndex)) int32_t  currentHelpButtonPageIndex;

/// @brief Field currentResourceCountsLocal, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentResourceCountsLocal, put=__cordl_internal_set_currentResourceCountsLocal)) ::UnityW<::TMPro::TextMeshProUGUI>  currentResourceCountsLocal;

/// @brief Field currentResourceCountsRemote, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentResourceCountsRemote, put=__cordl_internal_set_currentResourceCountsRemote)) ::UnityW<::TMPro::TextMeshProUGUI>  currentResourceCountsRemote;

/// @brief Field currentResourcesResourceCounts, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentResourcesResourceCounts, put=__cordl_internal_set_currentResourcesResourceCounts)) ::UnityW<::TMPro::TextMeshProUGUI>  currentResourcesResourceCounts;

/// @brief Field currentResourcesScreen, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentResourcesScreen, put=__cordl_internal_set_currentResourcesScreen)) ::UnityW<::UnityEngine::GameObject>  currentResourcesScreen;

/// @brief Field currentState, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  currentState;

/// @brief Field failureReason, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_failureReason, put=__cordl_internal_set_failureReason)) ::GlobalNamespace::SIResourceCollection_FailReason  failureReason;

/// @brief Field failureReasonText, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_failureReasonText, put=__cordl_internal_set_failureReasonText)) ::UnityW<::TMPro::TextMeshProUGUI>  failureReasonText;

/// @brief Field helpPopupScreens, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_helpPopupScreens, put=__cordl_internal_set_helpPopupScreens)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  helpPopupScreens;

/// @brief Field helpScreen, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_helpScreen, put=__cordl_internal_set_helpScreen)) ::UnityW<::UnityEngine::GameObject>  helpScreen;

/// @brief Field initialized, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field lastState, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastState, put=__cordl_internal_set_lastState)) ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  lastState;

/// @brief Field notActive, offset 0xe0, size 0x10 
 __declspec(property(get=__cordl_internal_get_notActive, put=__cordl_internal_set_notActive)) ::UnityEngine::Color  notActive;

/// @brief Field parentTerminal, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentTerminal, put=__cordl_internal_set_parentTerminal)) ::UnityW<::GlobalNamespace::SICombinedTerminal>  parentTerminal;

/// @brief Field popupScreen, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_popupScreen, put=__cordl_internal_set_popupScreen)) ::UnityW<::UnityEngine::GameObject>  popupScreen;

/// @brief Field purchaseInProgress, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseInProgress, put=__cordl_internal_set_purchaseInProgress)) ::UnityW<::UnityEngine::GameObject>  purchaseInProgress;

/// @brief Field purchasingFailure, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchasingFailure, put=__cordl_internal_set_purchasingFailure)) ::UnityW<::UnityEngine::GameObject>  purchasingFailure;

/// @brief Field purchasingRemote, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchasingRemote, put=__cordl_internal_set_purchasingRemote)) ::UnityW<::UnityEngine::GameObject>  purchasingRemote;

/// @brief Field purchasingStart, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchasingStart, put=__cordl_internal_set_purchasingStart)) ::UnityW<::UnityEngine::GameObject>  purchasingStart;

/// @brief Field purchasingSuccess, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchasingSuccess, put=__cordl_internal_set_purchasingSuccess)) ::UnityW<::UnityEngine::GameObject>  purchasingSuccess;

/// @brief Field resourceDepositedCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_resourceDepositedCount, put=__cordl_internal_set_resourceDepositedCount)) int32_t  resourceDepositedCount;

/// @brief Field resourceImageSprites, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceImageSprites, put=__cordl_internal_set_resourceImageSprites)) ::ArrayW<::UnityW<::UnityEngine::Sprite>>  resourceImageSprites;

/// @brief Field screenData, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenData, put=__cordl_internal_set_screenData)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState,::UnityW<::UnityEngine::GameObject>>*  screenData;

/// @brief Field screenRegion, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenRegion, put=__cordl_internal_set_screenRegion)) ::UnityW<::GlobalNamespace::SIScreenRegion>  screenRegion;

/// @brief Field shinyRockInfo, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_shinyRockInfo, put=__cordl_internal_set_shinyRockInfo)) ::UnityW<::TMPro::TextMeshProUGUI>  shinyRockInfo;

/// @brief Field soundBankPlayer, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundBankPlayer, put=__cordl_internal_set_soundBankPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  soundBankPlayer;

/// @brief Field uiCenter, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_uiCenter, put=__cordl_internal_set_uiCenter)) ::UnityW<::UnityEngine::Transform>  uiCenter;

/// @brief Field waitingForScanScreen, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_waitingForScanScreen, put=__cordl_internal_set_waitingForScanScreen)) ::UnityW<::UnityEngine::GameObject>  waitingForScanScreen;

/// @brief Convert operator to "::GlobalNamespace::ITouchScreenStation"
constexpr operator  ::GlobalNamespace::ITouchScreenStation*() noexcept;

/// @brief Method AddButton, addr 0x5aebec0, size 0x4, virtual true, abstract: false, final true
inline void AddButton(::GlobalNamespace::SITouchscreenButton*  button, bool  isPopupButton) ;

/// @brief Method CollectButtonColliders, addr 0x5ae9d28, size 0x2e8, virtual false, abstract: false, final false
inline void CollectButtonColliders() ;

/// @brief Method FormattedPlayerResourceCount, addr 0x5aeb41c, size 0x220, virtual false, abstract: false, final false
inline ::StringW FormattedPlayerResourceCount(::GlobalNamespace::SIPlayer*  player) ;

/// @brief Method FormattedPlayerResourceCountWithMax, addr 0x5aeb63c, size 0x208, virtual false, abstract: false, final false
inline ::StringW FormattedPlayerResourceCountWithMax(::GlobalNamespace::SIPlayer*  player) ;

/// @brief Method GetFormattedResource, addr 0x5aeb844, size 0x140, virtual false, abstract: false, final false
inline ::StringW GetFormattedResource(::GlobalNamespace::SIPlayer*  player, ::GlobalNamespace::SIResource_ResourceType  resource) ;

/// @brief Method HasHelpButton, addr 0x5aeb038, size 0xc, virtual false, abstract: false, final false
inline bool HasHelpButton(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  state) ;

/// @brief Method ITouchScreenStation.get_gameObject, addr 0x5aebecc, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::GameObject> ITouchScreenStation_get_gameObject() ;

/// @brief Method Initialize, addr 0x5aea258, size 0x1f0, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method IsPopupState, addr 0x5aeb028, size 0x10, virtual false, abstract: false, final false
inline bool IsPopupState(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  state) ;

static inline ::GlobalNamespace::SIResourceCollection* New_ctor() ;

/// @brief Method PlayerHandScanned, addr 0x5aeb984, size 0x8, virtual false, abstract: false, final false
inline void PlayerHandScanned(int32_t  actorNr) ;

/// @brief Method PopupActive, addr 0x5aeb014, size 0x14, virtual false, abstract: false, final false
inline bool PopupActive() ;

/// @brief Method ReadDataPUN, addr 0x5aea8d0, size 0x360, virtual false, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Reset, addr 0x5aea448, size 0x10, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetNonPopupButtonsEnabled, addr 0x5aea118, size 0x140, virtual false, abstract: false, final false
inline void SetNonPopupButtonsEnabled(bool  enable) ;

/// @brief Method SetScreenVisibility, addr 0x5aea458, size 0x334, virtual false, abstract: false, final false
inline void SetScreenVisibility(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  currentState, ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  lastState) ;

/// @brief Method TouchscreenButtonPressed, addr 0x5aeb98c, size 0x530, virtual true, abstract: false, final true
inline void TouchscreenButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr) ;

/// @brief Method TouchscreenToggleButtonPressed, addr 0x5aebebc, size 0x4, virtual true, abstract: false, final true
inline void TouchscreenToggleButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr, bool  isToggledOn) ;

/// @brief Method UpdateHelpButtonPage, addr 0x5aeac30, size 0x6c, virtual false, abstract: false, final false
inline void UpdateHelpButtonPage(int32_t  helpButtonPageIndex) ;

/// @brief Method UpdateState, addr 0x5aeb044, size 0x3d8, virtual false, abstract: false, final false
inline void UpdateState(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  newState) ;

/// @brief Method UpdateState, addr 0x5aea8bc, size 0x14, virtual false, abstract: false, final false
inline void UpdateState(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  newState, ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  newLastState) ;

/// @brief Method WriteDataPUN, addr 0x5aea78c, size 0x130, virtual false, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ZoneDataSerializeRead, addr 0x5aead04, size 0x310, virtual false, abstract: false, final false
inline void ZoneDataSerializeRead(::System::IO::BinaryReader*  reader) ;

/// @brief Method ZoneDataSerializeWrite, addr 0x5aeac9c, size 0x68, virtual false, abstract: false, final false
inline void ZoneDataSerializeWrite(::System::IO::BinaryWriter*  writer) ;

/// [CompilerGenerated]
/// @brief Method <CollectButtonColliders>g__RemoveButtonsInside|45_2, addr 0x5aea010, size 0x108, virtual false, abstract: false, final false
static inline void _CollectButtonColliders_g__RemoveButtonsInside_45_2(::ArrayW<::UnityEngine::GameObject*>  roots, ::by_ref<::GlobalNamespace::SIResourceCollection___c__DisplayClass45_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <TouchscreenButtonPressed>b__66_0, addr 0x5aebed4, size 0xf8, virtual false, abstract: false, final false
inline void _TouchscreenButtonPressed_b__66_0(::GlobalNamespace::ProgressionManager_UserInventory*  userInventoryResponse) ;

/// [CompilerGenerated]
/// @brief Method <TouchscreenButtonPressed>b__66_1, addr 0x5aebfcc, size 0xe4, virtual false, abstract: false, final false
inline void _TouchscreenButtonPressed_b__66_1(::StringW  error) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get__nonPopupButtonColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get__nonPopupButtonColliders() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_active() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_active() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_background() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_background() ;

constexpr int32_t const& __cordl_internal_get_currentHelpButtonPageIndex() const;

constexpr int32_t& __cordl_internal_get_currentHelpButtonPageIndex() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_currentResourceCountsLocal() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_currentResourceCountsLocal() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_currentResourceCountsRemote() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_currentResourceCountsRemote() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_currentResourcesResourceCounts() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_currentResourcesResourceCounts() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_currentResourcesScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_currentResourcesScreen() ;

constexpr ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState& __cordl_internal_get_currentState() ;

constexpr ::GlobalNamespace::SIResourceCollection_FailReason const& __cordl_internal_get_failureReason() const;

constexpr ::GlobalNamespace::SIResourceCollection_FailReason& __cordl_internal_get_failureReason() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_failureReasonText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_failureReasonText() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_helpPopupScreens() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_helpPopupScreens() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_helpScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_helpScreen() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState const& __cordl_internal_get_lastState() const;

constexpr ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState& __cordl_internal_get_lastState() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_notActive() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_notActive() ;

constexpr ::UnityW<::GlobalNamespace::SICombinedTerminal> const& __cordl_internal_get_parentTerminal() const;

constexpr ::UnityW<::GlobalNamespace::SICombinedTerminal>& __cordl_internal_get_parentTerminal() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_popupScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_popupScreen() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_purchaseInProgress() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_purchaseInProgress() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_purchasingFailure() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_purchasingFailure() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_purchasingRemote() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_purchasingRemote() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_purchasingStart() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_purchasingStart() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_purchasingSuccess() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_purchasingSuccess() ;

constexpr int32_t const& __cordl_internal_get_resourceDepositedCount() const;

constexpr int32_t& __cordl_internal_get_resourceDepositedCount() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>> const& __cordl_internal_get_resourceImageSprites() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>>& __cordl_internal_get_resourceImageSprites() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_screenData() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_screenData() ;

constexpr ::UnityW<::GlobalNamespace::SIScreenRegion> const& __cordl_internal_get_screenRegion() const;

constexpr ::UnityW<::GlobalNamespace::SIScreenRegion>& __cordl_internal_get_screenRegion() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_shinyRockInfo() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_shinyRockInfo() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_soundBankPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_soundBankPlayer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_uiCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_uiCenter() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_waitingForScanScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_waitingForScanScreen() ;

constexpr void __cordl_internal_set__nonPopupButtonColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_active(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_background(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_currentHelpButtonPageIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentResourceCountsLocal(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_currentResourceCountsRemote(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_currentResourcesResourceCounts(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_currentResourcesScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  value) ;

constexpr void __cordl_internal_set_failureReason(::GlobalNamespace::SIResourceCollection_FailReason  value) ;

constexpr void __cordl_internal_set_failureReasonText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_helpPopupScreens(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_helpScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_lastState(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  value) ;

constexpr void __cordl_internal_set_notActive(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_parentTerminal(::UnityW<::GlobalNamespace::SICombinedTerminal>  value) ;

constexpr void __cordl_internal_set_popupScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_purchaseInProgress(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_purchasingFailure(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_purchasingRemote(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_purchasingStart(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_purchasingSuccess(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_resourceDepositedCount(int32_t  value) ;

constexpr void __cordl_internal_set_resourceImageSprites(::ArrayW<::UnityW<::UnityEngine::Sprite>>  value) ;

constexpr void __cordl_internal_set_screenData(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_screenRegion(::UnityW<::GlobalNamespace::SIScreenRegion>  value) ;

constexpr void __cordl_internal_set_shinyRockInfo(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_soundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_uiCenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_waitingForScanScreen(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5aebec4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActivePlayer, addr 0x5ae9d10, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SIPlayer> get_ActivePlayer() ;

/// @brief Method get_IsAuthority, addr 0x5ae9cc0, size 0x2c, virtual false, abstract: false, final false
inline bool get_IsAuthority() ;

/// @brief Method get_SIManager, addr 0x5ae9cec, size 0x24, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SuperInfectionManager> get_SIManager() ;

/// @brief Method get_ScreenRegion, addr 0x5ae9cb8, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::SIScreenRegion> get_ScreenRegion() ;

/// @brief Convert to "::GlobalNamespace::ITouchScreenStation"
constexpr ::GlobalNamespace::ITouchScreenStation* i___GlobalNamespace__ITouchScreenStation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIResourceCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIResourceCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIResourceCollection(SIResourceCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIResourceCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIResourceCollection(SIResourceCollection const& ) = delete;

/// @brief Field REFILL_PURCHASE_SHINY_ROCK_COST offset 0xffffffff size 0x4
static constexpr int32_t  REFILL_PURCHASE_SHINY_ROCK_COST{static_cast<int32_t>(0x1f4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{348};

/// @brief Field appendToMax offset 0xffffffff size 0x8
static constexpr ::ConstString  appendToMax{u" -> 20"};

/// @brief Field failureFull offset 0xffffffff size 0x8
static constexpr ::ConstString  failureFull{u"YOU ARE ALREADY AT MAX RESOURCES! DONATE YOUR SHINY ROCKS TO A GOOD CAUSE INSTEAD OF US, KNUCKLEHEAD!"};

/// @brief Field failureNotEnoughRocks offset 0xffffffff size 0x8
static constexpr ::ConstString  failureNotEnoughRocks{u"NOT ENOUGH SHINY ROCKS! PLEASE TRY AGAIN LATER, OR PURCHASE MORE SHINY ROCKS!"};

/// @brief Field failureUnknown offset 0xffffffff size 0x8
static constexpr ::ConstString  failureUnknown{u"UHHHHH SOMETHING WENT WRONG, I\'M NOT SURE WHAT, SORRY TRY AGAIN LATER MAYBE!"};

/// @brief Field lineBreak offset 0xffffffff size 0x8
static constexpr ::ConstString  lineBreak{u"\n"};

/// @brief Field currentState, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  ___currentState;

/// @brief Field lastState, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  ___lastState;

/// @brief Field resourceDepositedCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ___resourceDepositedCount;

/// @brief Field currentHelpButtonPageIndex, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___currentHelpButtonPageIndex;

/// @brief Field waitingForScanScreen, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___waitingForScanScreen;

/// @brief Field currentResourcesScreen, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___currentResourcesScreen;

/// @brief Field helpScreen, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___helpScreen;

/// @brief Field parentTerminal, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SICombinedTerminal>  ___parentTerminal;

/// @brief Field resourceImageSprites, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Sprite>>  ___resourceImageSprites;

/// [SerializeField]
/// @brief Field screenRegion, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIScreenRegion>  ___screenRegion;

/// @brief Field helpPopupScreens, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___helpPopupScreens;

/// @brief Field purchasingRemote, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___purchasingRemote;

/// @brief Field purchasingStart, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___purchasingStart;

/// @brief Field purchaseInProgress, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___purchaseInProgress;

/// @brief Field purchasingSuccess, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___purchasingSuccess;

/// @brief Field purchasingFailure, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___purchasingFailure;

/// @brief Field popupScreen, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___popupScreen;

/// @brief Field uiCenter, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___uiCenter;

/// [Header("Purchasing Pages")]
/// @brief Field shinyRockInfo, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___shinyRockInfo;

/// @brief Field currentResourceCountsLocal, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___currentResourceCountsLocal;

/// @brief Field currentResourceCountsRemote, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___currentResourceCountsRemote;

/// @brief Field failureReasonText, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___failureReasonText;

/// @brief Field failureReason, offset: 0xc0, size: 0x4, def value: None
 ::GlobalNamespace::SIResourceCollection_FailReason  ___failureReason;

/// @brief Field background, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___background;

/// @brief Field active, offset: 0xd0, size: 0x10, def value: None
 ::UnityEngine::Color  ___active;

/// @brief Field notActive, offset: 0xe0, size: 0x10, def value: None
 ::UnityEngine::Color  ___notActive;

/// @brief Field currentResourcesResourceCounts, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___currentResourcesResourceCounts;

/// @brief Field screenData, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState,::UnityW<::UnityEngine::GameObject>>*  ___screenData;

/// @brief Field initialized, offset: 0x100, size: 0x1, def value: None
 bool  ___initialized;

/// [SerializeField]
/// @brief Field soundBankPlayer, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___soundBankPlayer;

/// [Tooltip("Button colliders to disable while popup screen is shown.")]
/// [SerializeField]
/// @brief Field _nonPopupButtonColliders, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ____nonPopupButtonColliders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___currentState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___lastState) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___resourceDepositedCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___currentHelpButtonPageIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___waitingForScanScreen) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___currentResourcesScreen) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___helpScreen) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___parentTerminal) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___resourceImageSprites) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___screenRegion) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___helpPopupScreens) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___purchasingRemote) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___purchasingStart) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___purchaseInProgress) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___purchasingSuccess) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___purchasingFailure) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___popupScreen) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___uiCenter) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___shinyRockInfo) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___currentResourceCountsLocal) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___currentResourceCountsRemote) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___failureReasonText) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___failureReason) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___background) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___active) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___notActive) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___currentResourcesResourceCounts) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___screenData) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___initialized) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ___soundBankPlayer) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollection, ____nonPopupButtonColliders) == 0x110, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIResourceCollection) == 0x118, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIResourceCollection/<>c
class CORDL_TYPE SIResourceCollection___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::SIResourceCollection___c*  __9;

/// @brief Field <>9__45_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__45_0, put=setStaticF___9__45_0)) ::System::Func_2<::UnityW<::GlobalNamespace::DestroyIfNotBeta>,::UnityW<::UnityEngine::GameObject>>*  __9__45_0;

/// @brief Field <>9__45_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__45_1, put=setStaticF___9__45_1)) ::System::Func_2<::UnityW<::GlobalNamespace::SITouchscreenButton>,::UnityW<::UnityEngine::Collider>>*  __9__45_1;

static inline ::GlobalNamespace::SIResourceCollection___c* New_ctor() ;

/// @brief Method <CollectButtonColliders>b__45_0, addr 0x5aec120, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> _CollectButtonColliders_b__45_0(::GlobalNamespace::DestroyIfNotBeta*  d) ;

/// @brief Method <CollectButtonColliders>b__45_1, addr 0x5aec138, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> _CollectButtonColliders_b__45_1(::GlobalNamespace::SITouchscreenButton*  b) ;

/// @brief Method .ctor, addr 0x5aec118, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::SIResourceCollection___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::GlobalNamespace::DestroyIfNotBeta>,::UnityW<::UnityEngine::GameObject>>* getStaticF___9__45_0() ;

static inline ::System::Func_2<::UnityW<::GlobalNamespace::SITouchscreenButton>,::UnityW<::UnityEngine::Collider>>* getStaticF___9__45_1() ;

static inline void setStaticF___9(::GlobalNamespace::SIResourceCollection___c*  value) ;

static inline void setStaticF___9__45_0(::System::Func_2<::UnityW<::GlobalNamespace::DestroyIfNotBeta>,::UnityW<::UnityEngine::GameObject>>*  value) ;

static inline void setStaticF___9__45_1(::System::Func_2<::UnityW<::GlobalNamespace::SITouchscreenButton>,::UnityW<::UnityEngine::Collider>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIResourceCollection___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIResourceCollection___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIResourceCollection___c(SIResourceCollection___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIResourceCollection___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIResourceCollection___c(SIResourceCollection___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{346};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SIResourceCollection___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
