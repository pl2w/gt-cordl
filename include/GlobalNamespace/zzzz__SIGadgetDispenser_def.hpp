#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetDispenser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameEntityDelayedDestroy_Options_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetDispenser_GadgetDispenserTerminalState_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetDispenser)
namespace GlobalNamespace {
class GameEntityManager;
}
namespace GlobalNamespace {
class ITouchScreenStation;
}
namespace GlobalNamespace {
class SICombinedTerminal;
}
namespace GlobalNamespace {
class SIDispenserGadgetListEntry;
}
namespace GlobalNamespace {
struct SIGadgetDispenser_GadgetDispenserTerminalState;
}
namespace GlobalNamespace {
class SIGadgetListEntry;
}
namespace GlobalNamespace {
class SIPlayer;
}
namespace GlobalNamespace {
class SIScreenRegion;
}
namespace GlobalNamespace {
class SITechTreeNode;
}
namespace GlobalNamespace {
class SITechTreePage;
}
namespace GlobalNamespace {
class SITechTreeSO;
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
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetDispenser;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetDispenser*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetDispenser*, "", "SIGadgetDispenser");
// Dependencies GameEntityDelayedDestroy::Options, SIGadgetDispenser::GadgetDispenserTerminalState, UnityEngine.Color, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetDispenser
class CORDL_TYPE SIGadgetDispenser : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GadgetDispenserTerminalState = ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState;

 __declspec(property(get=get_ActivePlayer)) ::UnityW<::GlobalNamespace::SIPlayer>  ActivePlayer;

 __declspec(property(get=get_ActivePlayerName)) ::StringW  ActivePlayerName;

 __declspec(property(get=get_CurrentNode)) ::GlobalNamespace::SITechTreeNode*  CurrentNode;

 __declspec(property(get=get_CurrentPage)) ::GlobalNamespace::SITechTreePage*  CurrentPage;

 __declspec(property(get=get_GameEntityManager)) ::UnityW<::GlobalNamespace::GameEntityManager>  GameEntityManager;

 __declspec(property(get=get_IsAuthority)) bool  IsAuthority;

 __declspec(property(get=get_SIManager)) ::UnityW<::GlobalNamespace::SuperInfectionManager>  SIManager;

 __declspec(property(get=get_ScreenRegion)) ::UnityW<::GlobalNamespace::SIScreenRegion>  ScreenRegion;

 __declspec(property(get=get_TechTreeSO)) ::UnityW<::GlobalNamespace::SITechTreeSO>  TechTreeSO;

/// @brief Field _currentNode, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentNode, put=__cordl_internal_set__currentNode)) int32_t  _currentNode;

/// @brief Field _nonPopupButtonColliders, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__nonPopupButtonColliders, put=__cordl_internal_set__nonPopupButtonColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  _nonPopupButtonColliders;

/// @brief Field active, offset 0xd8, size 0x10 
 __declspec(property(get=__cordl_internal_get_active, put=__cordl_internal_set_active)) ::UnityEngine::Color  active;

/// @brief Field background, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_background, put=__cordl_internal_set_background)) ::UnityW<::UnityEngine::UI::Image>  background;

/// @brief Field currentState, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  currentState;

/// @brief Field dispenseSoundBankPlayer, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_dispenseSoundBankPlayer, put=__cordl_internal_set_dispenseSoundBankPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  dispenseSoundBankPlayer;

/// @brief Field g_tryOnOptions, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_g_tryOnOptions, put=setStaticF_g_tryOnOptions)) ::GlobalNamespace::GameEntityDelayedDestroy_Options  g_tryOnOptions;

/// @brief Field gadgetDescriptionText, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_gadgetDescriptionText, put=__cordl_internal_set_gadgetDescriptionText)) ::UnityW<::TMPro::TextMeshProUGUI>  gadgetDescriptionText;

/// @brief Field gadgetDispensePosition, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gadgetDispensePosition, put=__cordl_internal_set_gadgetDispensePosition)) ::UnityW<::UnityEngine::Transform>  gadgetDispensePosition;

/// @brief Field gadgetDispensedScreen, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_gadgetDispensedScreen, put=__cordl_internal_set_gadgetDispensedScreen)) ::UnityW<::UnityEngine::GameObject>  gadgetDispensedScreen;

/// @brief Field gadgetDispensedText, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_gadgetDispensedText, put=__cordl_internal_set_gadgetDispensedText)) ::UnityW<::TMPro::TextMeshProUGUI>  gadgetDispensedText;

/// @brief Field gadgetEntries, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_gadgetEntries, put=__cordl_internal_set_gadgetEntries)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIDispenserGadgetListEntry>>*  gadgetEntries;

/// @brief Field gadgetInformationScreen, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_gadgetInformationScreen, put=__cordl_internal_set_gadgetInformationScreen)) ::UnityW<::UnityEngine::GameObject>  gadgetInformationScreen;

/// @brief Field gadgetListEntryPrefab, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_gadgetListEntryPrefab, put=__cordl_internal_set_gadgetListEntryPrefab)) ::UnityW<::GlobalNamespace::SIDispenserGadgetListEntry>  gadgetListEntryPrefab;

/// @brief Field gadgetListParent, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_gadgetListParent, put=__cordl_internal_set_gadgetListParent)) ::UnityW<::UnityEngine::RectTransform>  gadgetListParent;

/// @brief Field gadgetListScreen, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_gadgetListScreen, put=__cordl_internal_set_gadgetListScreen)) ::UnityW<::UnityEngine::GameObject>  gadgetListScreen;

/// @brief Field gadgetPages, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_gadgetPages, put=__cordl_internal_set_gadgetPages)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetListEntry>>*  gadgetPages;

/// @brief Field gadgetTypeScreen, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_gadgetTypeScreen, put=__cordl_internal_set_gadgetTypeScreen)) ::UnityW<::UnityEngine::GameObject>  gadgetTypeScreen;

/// @brief Field gadgetsHelpScreen, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_gadgetsHelpScreen, put=__cordl_internal_set_gadgetsHelpScreen)) ::UnityW<::UnityEngine::GameObject>  gadgetsHelpScreen;

/// @brief Field handScannedState, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_handScannedState, put=__cordl_internal_set_handScannedState)) ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  handScannedState;

/// @brief Field helpPopupScreens, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_helpPopupScreens, put=__cordl_internal_set_helpPopupScreens)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  helpPopupScreens;

/// @brief Field helpScreenIndex, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_helpScreenIndex, put=__cordl_internal_set_helpScreenIndex)) int32_t  helpScreenIndex;

/// @brief Field initialized, offset 0x180, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

 __declspec(property(get=get_isTryOn)) bool  isTryOn;

/// @brief Field lastState, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastState, put=__cordl_internal_set_lastState)) ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  lastState;

/// @brief Field m_isTryOn, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_isTryOn, put=__cordl_internal_set_m_isTryOn)) bool  m_isTryOn;

/// @brief Field m_tryOnOptions, offset 0x50, size 0x40 
 __declspec(property(get=__cordl_internal_get_m_tryOnOptions, put=__cordl_internal_set_m_tryOnOptions)) ::GlobalNamespace::GameEntityDelayedDestroy_Options  m_tryOnOptions;

/// @brief Field noDispensableGadgetsMessage, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_noDispensableGadgetsMessage, put=__cordl_internal_set_noDispensableGadgetsMessage)) ::UnityW<::UnityEngine::GameObject>  noDispensableGadgetsMessage;

/// @brief Field notActive, offset 0xe8, size 0x10 
 __declspec(property(get=__cordl_internal_get_notActive, put=__cordl_internal_set_notActive)) ::UnityEngine::Color  notActive;

/// @brief Field pageListEntryPrefab, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_pageListEntryPrefab, put=__cordl_internal_set_pageListEntryPrefab)) ::UnityW<::GlobalNamespace::SIGadgetListEntry>  pageListEntryPrefab;

/// @brief Field pageListParent, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_pageListParent, put=__cordl_internal_set_pageListParent)) ::UnityW<::UnityEngine::RectTransform>  pageListParent;

/// @brief Field parentTerminal, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentTerminal, put=__cordl_internal_set_parentTerminal)) ::UnityW<::GlobalNamespace::SICombinedTerminal>  parentTerminal;

/// @brief Field popupScreen, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_popupScreen, put=__cordl_internal_set_popupScreen)) ::UnityW<::UnityEngine::GameObject>  popupScreen;

/// @brief Field screenData, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenData, put=__cordl_internal_set_screenData)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState,::UnityW<::UnityEngine::GameObject>>*  screenData;

/// @brief Field screenDescription, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenDescription, put=__cordl_internal_set_screenDescription)) ::UnityW<::TMPro::TextMeshProUGUI>  screenDescription;

/// @brief Field screenRegion, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenRegion, put=__cordl_internal_set_screenRegion)) ::UnityW<::GlobalNamespace::SIScreenRegion>  screenRegion;

/// @brief Field touchSoundBankPlayer, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_touchSoundBankPlayer, put=__cordl_internal_set_touchSoundBankPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  touchSoundBankPlayer;

/// @brief Field uiCenter, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_uiCenter, put=__cordl_internal_set_uiCenter)) ::UnityW<::UnityEngine::Transform>  uiCenter;

/// @brief Field waitingForScanScreen, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_waitingForScanScreen, put=__cordl_internal_set_waitingForScanScreen)) ::UnityW<::UnityEngine::GameObject>  waitingForScanScreen;

/// @brief Convert operator to "::GlobalNamespace::ITouchScreenStation"
constexpr operator  ::GlobalNamespace::ITouchScreenStation*() noexcept;

/// @brief Method AddButton, addr 0x59de204, size 0xf0, virtual true, abstract: false, final true
inline void AddButton(::GlobalNamespace::SITouchscreenButton*  button, bool  isPopupButton) ;

/// @brief Method AuthorityDispenseGadgetForPlayer, addr 0x59de2f4, size 0x554, virtual false, abstract: false, final false
inline void AuthorityDispenseGadgetForPlayer(::GlobalNamespace::SIPlayer*  player) ;

/// @brief Method ITouchScreenStation.get_gameObject, addr 0x59deac0, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::GameObject> ITouchScreenStation_get_gameObject() ;

/// @brief Method Initialize, addr 0x59da300, size 0x640, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method IsPopupState, addr 0x59ddb5c, size 0x10, virtual false, abstract: false, final false
inline bool IsPopupState(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  state) ;

/// @brief Method IsValidPage, addr 0x59dbfe8, size 0x14c, virtual false, abstract: false, final false
inline bool IsValidPage(int32_t  pageId) ;

static inline ::GlobalNamespace::SIGadgetDispenser* New_ctor() ;

/// @brief Method OnEnable, addr 0x59dd18c, size 0xa0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayerHandScanned, addr 0x59db994, size 0x8, virtual false, abstract: false, final false
inline void PlayerHandScanned(int32_t  actorNr) ;

/// @brief Method ReadDataPUN, addr 0x59daf8c, size 0x38c, virtual false, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Reset, addr 0x59da940, size 0x10, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetActivePage, addr 0x59dc134, size 0x100, virtual false, abstract: false, final false
inline void SetActivePage() ;

/// @brief Method SetNonPopupButtonsEnabled, addr 0x59dd3dc, size 0x140, virtual false, abstract: false, final false
inline void SetNonPopupButtonsEnabled(bool  enable) ;

/// @brief Method SetScreenVisibility, addr 0x59dd7ec, size 0x35c, virtual false, abstract: false, final false
inline void SetScreenVisibility(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  currentState, ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  lastState) ;

/// @brief Method TouchscreenButtonPressed, addr 0x59dbc24, size 0x3c4, virtual true, abstract: false, final true
inline void TouchscreenButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr) ;

/// @brief Method TouchscreenToggleButtonPressed, addr 0x59de848, size 0x4, virtual true, abstract: false, final true
inline void TouchscreenToggleButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr, bool  isToggledOn) ;

/// @brief Method UpdateGadgetListVisibility, addr 0x59ddd88, size 0x3a8, virtual false, abstract: false, final false
inline void UpdateGadgetListVisibility() ;

/// @brief Method UpdateHelpButtonPage, addr 0x59de130, size 0x6c, virtual false, abstract: false, final false
inline void UpdateHelpButtonPage(int32_t  helpButtonPageIndex) ;

/// @brief Method UpdateState, addr 0x59ddb6c, size 0x21c, virtual false, abstract: false, final false
inline void UpdateState(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  newState) ;

/// @brief Method UpdateState, addr 0x59ddb48, size 0x14, virtual false, abstract: false, final false
inline void UpdateState(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  newState, ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  newLastState) ;

/// @brief Method WriteDataPUN, addr 0x59dab78, size 0x154, virtual false, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ZoneDataSerializeRead, addr 0x59db484, size 0x2b8, virtual false, abstract: false, final false
inline void ZoneDataSerializeRead(::System::IO::BinaryReader*  reader) ;

/// @brief Method ZoneDataSerializeWrite, addr 0x59db388, size 0x80, virtual false, abstract: false, final false
inline void ZoneDataSerializeWrite(::System::IO::BinaryWriter*  writer) ;

/// @brief Method _RefreshButtonsUsableState, addr 0x59dd22c, size 0x1b0, virtual false, abstract: false, final false
inline void _RefreshButtonsUsableState() ;

constexpr int32_t const& __cordl_internal_get__currentNode() const;

constexpr int32_t& __cordl_internal_get__currentNode() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get__nonPopupButtonColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get__nonPopupButtonColliders() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_active() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_active() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_background() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_background() ;

constexpr ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState& __cordl_internal_get_currentState() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_dispenseSoundBankPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_dispenseSoundBankPlayer() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_gadgetDescriptionText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_gadgetDescriptionText() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_gadgetDispensePosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_gadgetDispensePosition() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gadgetDispensedScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gadgetDispensedScreen() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_gadgetDispensedText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_gadgetDispensedText() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIDispenserGadgetListEntry>>* const& __cordl_internal_get_gadgetEntries() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIDispenserGadgetListEntry>>*& __cordl_internal_get_gadgetEntries() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gadgetInformationScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gadgetInformationScreen() ;

constexpr ::UnityW<::GlobalNamespace::SIDispenserGadgetListEntry> const& __cordl_internal_get_gadgetListEntryPrefab() const;

constexpr ::UnityW<::GlobalNamespace::SIDispenserGadgetListEntry>& __cordl_internal_get_gadgetListEntryPrefab() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_gadgetListParent() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_gadgetListParent() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gadgetListScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gadgetListScreen() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetListEntry>>* const& __cordl_internal_get_gadgetPages() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetListEntry>>*& __cordl_internal_get_gadgetPages() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gadgetTypeScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gadgetTypeScreen() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gadgetsHelpScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gadgetsHelpScreen() ;

constexpr ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState const& __cordl_internal_get_handScannedState() const;

constexpr ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState& __cordl_internal_get_handScannedState() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_helpPopupScreens() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_helpPopupScreens() ;

constexpr int32_t const& __cordl_internal_get_helpScreenIndex() const;

constexpr int32_t& __cordl_internal_get_helpScreenIndex() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState const& __cordl_internal_get_lastState() const;

constexpr ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState& __cordl_internal_get_lastState() ;

constexpr bool const& __cordl_internal_get_m_isTryOn() const;

constexpr bool& __cordl_internal_get_m_isTryOn() ;

constexpr ::GlobalNamespace::GameEntityDelayedDestroy_Options const& __cordl_internal_get_m_tryOnOptions() const;

constexpr ::GlobalNamespace::GameEntityDelayedDestroy_Options& __cordl_internal_get_m_tryOnOptions() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_noDispensableGadgetsMessage() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_noDispensableGadgetsMessage() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_notActive() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_notActive() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetListEntry> const& __cordl_internal_get_pageListEntryPrefab() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetListEntry>& __cordl_internal_get_pageListEntryPrefab() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_pageListParent() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_pageListParent() ;

constexpr ::UnityW<::GlobalNamespace::SICombinedTerminal> const& __cordl_internal_get_parentTerminal() const;

constexpr ::UnityW<::GlobalNamespace::SICombinedTerminal>& __cordl_internal_get_parentTerminal() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_popupScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_popupScreen() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_screenData() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_screenData() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_screenDescription() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_screenDescription() ;

constexpr ::UnityW<::GlobalNamespace::SIScreenRegion> const& __cordl_internal_get_screenRegion() const;

constexpr ::UnityW<::GlobalNamespace::SIScreenRegion>& __cordl_internal_get_screenRegion() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_touchSoundBankPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_touchSoundBankPlayer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_uiCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_uiCenter() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_waitingForScanScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_waitingForScanScreen() ;

constexpr void __cordl_internal_set__currentNode(int32_t  value) ;

constexpr void __cordl_internal_set__nonPopupButtonColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_active(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_background(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  value) ;

constexpr void __cordl_internal_set_dispenseSoundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_gadgetDescriptionText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_gadgetDispensePosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_gadgetDispensedScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_gadgetDispensedText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_gadgetEntries(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIDispenserGadgetListEntry>>*  value) ;

constexpr void __cordl_internal_set_gadgetInformationScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_gadgetListEntryPrefab(::UnityW<::GlobalNamespace::SIDispenserGadgetListEntry>  value) ;

constexpr void __cordl_internal_set_gadgetListParent(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_gadgetListScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_gadgetPages(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetListEntry>>*  value) ;

constexpr void __cordl_internal_set_gadgetTypeScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_gadgetsHelpScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_handScannedState(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  value) ;

constexpr void __cordl_internal_set_helpPopupScreens(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_helpScreenIndex(int32_t  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_lastState(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  value) ;

constexpr void __cordl_internal_set_m_isTryOn(bool  value) ;

constexpr void __cordl_internal_set_m_tryOnOptions(::GlobalNamespace::GameEntityDelayedDestroy_Options  value) ;

constexpr void __cordl_internal_set_noDispensableGadgetsMessage(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_notActive(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_pageListEntryPrefab(::UnityW<::GlobalNamespace::SIGadgetListEntry>  value) ;

constexpr void __cordl_internal_set_pageListParent(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_parentTerminal(::UnityW<::GlobalNamespace::SICombinedTerminal>  value) ;

constexpr void __cordl_internal_set_popupScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_screenData(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_screenDescription(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_screenRegion(::UnityW<::GlobalNamespace::SIScreenRegion>  value) ;

constexpr void __cordl_internal_set_touchSoundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_uiCenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_waitingForScanScreen(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x59de904, size 0x14c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::GameEntityDelayedDestroy_Options getStaticF_g_tryOnOptions() ;

/// @brief Method get_ActivePlayer, addr 0x59dd018, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SIPlayer> get_ActivePlayer() ;

/// @brief Method get_ActivePlayerName, addr 0x59dd030, size 0x44, virtual false, abstract: false, final false
inline ::StringW get_ActivePlayerName() ;

/// @brief Method get_CurrentNode, addr 0x59dd100, size 0x38, virtual false, abstract: false, final false
inline ::GlobalNamespace::SITechTreeNode* get_CurrentNode() ;

/// @brief Method get_CurrentPage, addr 0x59dd138, size 0x30, virtual false, abstract: false, final false
inline ::GlobalNamespace::SITechTreePage* get_CurrentPage() ;

/// @brief Method get_GameEntityManager, addr 0x59dd0d4, size 0x2c, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GameEntityManager> get_GameEntityManager() ;

/// @brief Method get_IsAuthority, addr 0x59dd074, size 0x3c, virtual false, abstract: false, final false
inline bool get_IsAuthority() ;

/// @brief Method get_SIManager, addr 0x59dd0b0, size 0x24, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SuperInfectionManager> get_SIManager() ;

/// @brief Method get_ScreenRegion, addr 0x59dd010, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::SIScreenRegion> get_ScreenRegion() ;

/// @brief Method get_TechTreeSO, addr 0x59dd168, size 0x24, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SITechTreeSO> get_TechTreeSO() ;

/// @brief Method get_isTryOn, addr 0x59dd008, size 0x8, virtual false, abstract: false, final false
inline bool get_isTryOn() ;

/// @brief Convert to "::GlobalNamespace::ITouchScreenStation"
constexpr ::GlobalNamespace::ITouchScreenStation* i___GlobalNamespace__ITouchScreenStation() noexcept;

static inline void setStaticF_g_tryOnOptions(::GlobalNamespace::GameEntityDelayedDestroy_Options  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetDispenser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetDispenser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetDispenser(SIGadgetDispenser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetDispenser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetDispenser(SIGadgetDispenser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{321};

/// @brief Field handScannedState, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  ___handScannedState;

/// @brief Field currentState, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  ___currentState;

/// @brief Field lastState, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  ___lastState;

/// @brief Field gadgetDispensePosition, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___gadgetDispensePosition;

/// @brief Field _currentNode, offset: 0x38, size: 0x4, def value: None
 int32_t  ____currentNode;

/// @brief Field parentTerminal, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SICombinedTerminal>  ___parentTerminal;

/// [Header("TryOn")]
/// [SerializeField]
/// @brief Field m_isTryOn, offset: 0x48, size: 0x1, def value: None
 bool  ___m_isTryOn;

/// [SerializeField]
/// @brief Field m_tryOnOptions, offset: 0x50, size: 0x40, def value: None
 ::GlobalNamespace::GameEntityDelayedDestroy_Options  ___m_tryOnOptions;

/// @brief Field waitingForScanScreen, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___waitingForScanScreen;

/// @brief Field gadgetTypeScreen, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gadgetTypeScreen;

/// @brief Field gadgetListScreen, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gadgetListScreen;

/// @brief Field gadgetInformationScreen, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gadgetInformationScreen;

/// @brief Field gadgetDispensedScreen, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gadgetDispensedScreen;

/// @brief Field gadgetsHelpScreen, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gadgetsHelpScreen;

/// [SerializeField]
/// @brief Field screenRegion, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIScreenRegion>  ___screenRegion;

/// [Header("Main Screen Shared")]
/// @brief Field screenDescription, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___screenDescription;

/// @brief Field background, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___background;

/// @brief Field active, offset: 0xd8, size: 0x10, def value: None
 ::UnityEngine::Color  ___active;

/// @brief Field notActive, offset: 0xe8, size: 0x10, def value: None
 ::UnityEngine::Color  ___notActive;

/// @brief Field uiCenter, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___uiCenter;

/// [Header("Popup Shared")]
/// @brief Field popupScreen, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___popupScreen;

/// [Header("Gadgets Type")]
/// [SerializeField]
/// @brief Field pageListParent, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___pageListParent;

/// [SerializeField]
/// @brief Field pageListEntryPrefab, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetListEntry>  ___pageListEntryPrefab;

/// @brief Field gadgetPages, offset: 0x118, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetListEntry>>*  ___gadgetPages;

/// [FormerlySerializedAs("noDispensableGadgetsNotif")]
/// [Header("Gadgets List")]
/// [SerializeField]
/// @brief Field noDispensableGadgetsMessage, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___noDispensableGadgetsMessage;

/// [SerializeField]
/// @brief Field gadgetListParent, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___gadgetListParent;

/// [SerializeField]
/// @brief Field gadgetListEntryPrefab, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIDispenserGadgetListEntry>  ___gadgetListEntryPrefab;

/// @brief Field gadgetEntries, offset: 0x138, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIDispenserGadgetListEntry>>*  ___gadgetEntries;

/// [Header("Gadgets Description")]
/// @brief Field gadgetDescriptionText, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___gadgetDescriptionText;

/// [Header("Gadget Dispensed")]
/// @brief Field gadgetDispensedText, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___gadgetDispensedText;

/// [Header("Help")]
/// @brief Field helpScreenIndex, offset: 0x150, size: 0x4, def value: None
 int32_t  ___helpScreenIndex;

/// @brief Field helpPopupScreens, offset: 0x158, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___helpPopupScreens;

/// [Header("Audio")]
/// [SerializeField]
/// @brief Field touchSoundBankPlayer, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___touchSoundBankPlayer;

/// [SerializeField]
/// @brief Field dispenseSoundBankPlayer, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___dispenseSoundBankPlayer;

/// [Header("Main Screen Colliders")]
/// [Tooltip("Button colliders to disable while popup screen is shown.  Gets updated live to include page and gadget buttons.")]
/// [SerializeField]
/// @brief Field _nonPopupButtonColliders, offset: 0x170, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ____nonPopupButtonColliders;

/// @brief Field screenData, offset: 0x178, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState,::UnityW<::UnityEngine::GameObject>>*  ___screenData;

/// @brief Field initialized, offset: 0x180, size: 0x1, def value: None
 bool  ___initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___handScannedState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___currentState) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___lastState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___gadgetDispensePosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ____currentNode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___parentTerminal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___m_isTryOn) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___m_tryOnOptions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___waitingForScanScreen) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___gadgetTypeScreen) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___gadgetListScreen) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___gadgetInformationScreen) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___gadgetDispensedScreen) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___gadgetsHelpScreen) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___screenRegion) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___screenDescription) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___background) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___active) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___notActive) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___uiCenter) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___popupScreen) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___pageListParent) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___pageListEntryPrefab) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___gadgetPages) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___noDispensableGadgetsMessage) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___gadgetListParent) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___gadgetListEntryPrefab) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___gadgetEntries) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___gadgetDescriptionText) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___gadgetDispensedText) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___helpScreenIndex) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___helpPopupScreens) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___touchSoundBankPlayer) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___dispenseSoundBankPlayer) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ____nonPopupButtonColliders) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___screenData) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser, ___initialized) == 0x180, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetDispenser) == 0x188, "Size mismatch!");

} // namespace end def GlobalNamespace
