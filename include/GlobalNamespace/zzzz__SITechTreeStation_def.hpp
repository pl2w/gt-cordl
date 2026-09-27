#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreeStation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SITechTreeStation_NodePopupState_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeStation_TechTreeStationTerminalState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SITechTreeStation)
namespace GlobalNamespace {
class DestroyIfNotBeta;
}
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
class SIGadgetListEntry;
}
namespace GlobalNamespace {
class SIPlayer;
}
namespace GlobalNamespace {
struct SIResource_ResourceCost;
}
namespace GlobalNamespace {
struct SIResource_ResourceType;
}
namespace GlobalNamespace {
class SIScreenRegion;
}
namespace GlobalNamespace {
class SITechTreeNode;
}
namespace GlobalNamespace {
struct SITechTreePageId;
}
namespace GlobalNamespace {
class SITechTreePage;
}
namespace GlobalNamespace {
class SITechTreeSO;
}
namespace GlobalNamespace {
struct SITechTreeStation_NodePopupState;
}
namespace GlobalNamespace {
struct SITechTreeStation_TechTreeStationTerminalState;
}
namespace GlobalNamespace {
class SITechTreeStation___c;
}
namespace GlobalNamespace {
struct SITechTreeStation___c__DisplayClass75_0;
}
namespace GlobalNamespace {
class SITechTreeUIPage;
}
namespace GlobalNamespace {
struct SITouchscreenButton_SITouchscreenButtonType;
}
namespace GlobalNamespace {
class SITouchscreenButton;
}
namespace GlobalNamespace {
struct SIUpgradeType;
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
class SpriteRenderer;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SITechTreeStation;
}
namespace GlobalNamespace {
class SITechTreeStation___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SITechTreeStation*);
MARK_REF_T(::GlobalNamespace::SITechTreeStation___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITechTreeStation*, "", "SITechTreeStation");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITechTreeStation___c*, "", "SITechTreeStation/<>c");
// [DefaultExecutionOrder(100)]
// Dependencies SITechTreeStation::NodePopupState, SITechTreeStation::TechTreeStationTerminalState, UnityEngine.Color, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SITechTreeStation
class CORDL_TYPE SITechTreeStation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using NodePopupState = ::GlobalNamespace::SITechTreeStation_NodePopupState;

using TechTreeStationTerminalState = ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState;

using __c = ::GlobalNamespace::SITechTreeStation___c;

using __c__DisplayClass75_0 = ::GlobalNamespace::SITechTreeStation___c__DisplayClass75_0;

 __declspec(property(get=get_ActivePlayer)) ::UnityW<::GlobalNamespace::SIPlayer>  ActivePlayer;

 __declspec(property(get=get_ActivePlayerName)) ::StringW  ActivePlayerName;

 __declspec(property(get=get_CurrentNode)) ::GlobalNamespace::SITechTreeNode*  CurrentNode;

 __declspec(property(get=get_CurrentPage)) ::GlobalNamespace::SITechTreePage*  CurrentPage;

 __declspec(property(get=get_GameEntityManager)) ::UnityW<::GlobalNamespace::GameEntityManager>  GameEntityManager;

 __declspec(property(get=get_IsAuthority)) bool  IsAuthority;

 __declspec(property(get=get_SIManager)) ::UnityW<::GlobalNamespace::SuperInfectionManager>  SIManager;

 __declspec(property(get=get_ScreenRegion)) ::UnityW<::GlobalNamespace::SIScreenRegion>  ScreenRegion;

/// @brief Field _nonPopupButtonColliders, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__nonPopupButtonColliders, put=__cordl_internal_set__nonPopupButtonColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  _nonPopupButtonColliders;

/// @brief Field active, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get_active, put=__cordl_internal_set_active)) ::UnityEngine::Color  active;

/// @brief Field background, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_background, put=__cordl_internal_set_background)) ::UnityW<::UnityEngine::UI::Image>  background;

/// @brief Field bouncySandSprite, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_bouncySandSprite, put=__cordl_internal_set_bouncySandSprite)) ::UnityW<::UnityEngine::Sprite>  bouncySandSprite;

/// @brief Field canAffordNode, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_canAffordNode, put=__cordl_internal_set_canAffordNode)) ::UnityW<::UnityEngine::GameObject>  canAffordNode;

/// @brief Field cantAffordNode, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_cantAffordNode, put=__cordl_internal_set_cantAffordNode)) ::UnityW<::UnityEngine::GameObject>  cantAffordNode;

/// @brief Field currentNodeId, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentNodeId, put=__cordl_internal_set_currentNodeId)) int32_t  currentNodeId;

/// @brief Field currentState, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  currentState;

/// @brief Field floppyMetalSprite, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_floppyMetalSprite, put=__cordl_internal_set_floppyMetalSprite)) ::UnityW<::UnityEngine::Sprite>  floppyMetalSprite;

/// @brief Field helpPopupScreens, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_helpPopupScreens, put=__cordl_internal_set_helpPopupScreens)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  helpPopupScreens;

/// @brief Field helpScreenIndex, offset 0x1a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_helpScreenIndex, put=__cordl_internal_set_helpScreenIndex)) int32_t  helpScreenIndex;

/// @brief Field initialized, offset 0x1d0, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field lastState, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastState, put=__cordl_internal_set_lastState)) ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  lastState;

/// @brief Field nodeAvailable, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeAvailable, put=__cordl_internal_set_nodeAvailable)) ::UnityW<::UnityEngine::GameObject>  nodeAvailable;

/// @brief Field nodeDescriptionText, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeDescriptionText, put=__cordl_internal_set_nodeDescriptionText)) ::UnityW<::TMPro::TextMeshProUGUI>  nodeDescriptionText;

/// @brief Field nodeLocked, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeLocked, put=__cordl_internal_set_nodeLocked)) ::UnityW<::UnityEngine::GameObject>  nodeLocked;

/// @brief Field nodeNameResearchMessageText, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeNameResearchMessageText, put=__cordl_internal_set_nodeNameResearchMessageText)) ::UnityW<::TMPro::TextMeshProUGUI>  nodeNameResearchMessageText;

/// @brief Field nodeNameText, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeNameText, put=__cordl_internal_set_nodeNameText)) ::UnityW<::TMPro::TextMeshProUGUI>  nodeNameText;

/// @brief Field nodePopupScreen, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodePopupScreen, put=__cordl_internal_set_nodePopupScreen)) ::UnityW<::UnityEngine::GameObject>  nodePopupScreen;

/// @brief Field nodePopupScreens, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodePopupScreens, put=__cordl_internal_set_nodePopupScreens)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  nodePopupScreens;

/// @brief Field nodePopupState, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_nodePopupState, put=__cordl_internal_set_nodePopupState)) ::GlobalNamespace::SITechTreeStation_NodePopupState  nodePopupState;

/// @brief Field nodeResearchButton, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeResearchButton, put=__cordl_internal_set_nodeResearchButton)) ::UnityW<::UnityEngine::GameObject>  nodeResearchButton;

/// @brief Field nodeResearched, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeResearched, put=__cordl_internal_set_nodeResearched)) ::UnityW<::UnityEngine::GameObject>  nodeResearched;

/// @brief Field nodeResourceCostText, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeResourceCostText, put=__cordl_internal_set_nodeResourceCostText)) ::UnityW<::TMPro::TextMeshProUGUI>  nodeResourceCostText;

/// @brief Field nodeResourceTypeText, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeResourceTypeText, put=__cordl_internal_set_nodeResourceTypeText)) ::UnityW<::TMPro::TextMeshProUGUI>  nodeResourceTypeText;

/// @brief Field notActive, offset 0xb8, size 0x10 
 __declspec(property(get=__cordl_internal_get_notActive, put=__cordl_internal_set_notActive)) ::UnityEngine::Color  notActive;

/// @brief Field pageButtons, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_pageButtons, put=__cordl_internal_set_pageButtons)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetListEntry>>*  pageButtons;

/// @brief Field pageListEntryPrefab, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_pageListEntryPrefab, put=__cordl_internal_set_pageListEntryPrefab)) ::UnityW<::GlobalNamespace::SIGadgetListEntry>  pageListEntryPrefab;

/// @brief Field pageListParent, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pageListParent, put=__cordl_internal_set_pageListParent)) ::UnityW<::UnityEngine::Transform>  pageListParent;

/// @brief Field pageParent, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_pageParent, put=__cordl_internal_set_pageParent)) ::UnityW<::UnityEngine::Transform>  pageParent;

/// @brief Field pagePrefab, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_pagePrefab, put=__cordl_internal_set_pagePrefab)) ::UnityW<::GlobalNamespace::SITechTreeUIPage>  pagePrefab;

/// @brief Field pageScreen, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_pageScreen, put=__cordl_internal_set_pageScreen)) ::UnityW<::UnityEngine::GameObject>  pageScreen;

/// @brief Field pagesListScreen, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_pagesListScreen, put=__cordl_internal_set_pagesListScreen)) ::UnityW<::UnityEngine::GameObject>  pagesListScreen;

/// @brief Field parentTerminal, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentTerminal, put=__cordl_internal_set_parentTerminal)) ::UnityW<::GlobalNamespace::SICombinedTerminal>  parentTerminal;

/// @brief Field playerCurrentResourceAmountsText, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCurrentResourceAmountsText, put=__cordl_internal_set_playerCurrentResourceAmountsText)) ::UnityW<::TMPro::TextMeshProUGUI>  playerCurrentResourceAmountsText;

/// @brief Field playerNameText, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerNameText, put=__cordl_internal_set_playerNameText)) ::UnityW<::TMPro::TextMeshProUGUI>  playerNameText;

/// @brief Field popupScreen, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_popupScreen, put=__cordl_internal_set_popupScreen)) ::UnityW<::UnityEngine::GameObject>  popupScreen;

/// @brief Field resourceCost, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceCost, put=__cordl_internal_set_resourceCost)) ::UnityW<::UnityEngine::SpriteRenderer>  resourceCost;

/// @brief Field screenData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenData, put=__cordl_internal_set_screenData)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState,::UnityW<::UnityEngine::GameObject>>*  screenData;

/// @brief Field screenDescriptionText, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenDescriptionText, put=__cordl_internal_set_screenDescriptionText)) ::UnityW<::TMPro::TextMeshProUGUI>  screenDescriptionText;

/// @brief Field screenRegion, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenRegion, put=__cordl_internal_set_screenRegion)) ::UnityW<::GlobalNamespace::SIScreenRegion>  screenRegion;

/// @brief Field soundBankPlayer, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundBankPlayer, put=__cordl_internal_set_soundBankPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  soundBankPlayer;

/// @brief Field spriteByType, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_spriteByType, put=__cordl_internal_set_spriteByType)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,::UnityW<::UnityEngine::Sprite>>*  spriteByType;

/// @brief Field strangeWoodSprite, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_strangeWoodSprite, put=__cordl_internal_set_strangeWoodSprite)) ::UnityW<::UnityEngine::Sprite>  strangeWoodSprite;

/// @brief Field techPointCost, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_techPointCost, put=__cordl_internal_set_techPointCost)) ::UnityW<::UnityEngine::SpriteRenderer>  techPointCost;

/// @brief Field techPointSprite, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_techPointSprite, put=__cordl_internal_set_techPointSprite)) ::UnityW<::UnityEngine::Sprite>  techPointSprite;

/// @brief Field techTreeHelpScreen, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_techTreeHelpScreen, put=__cordl_internal_set_techTreeHelpScreen)) ::UnityW<::UnityEngine::GameObject>  techTreeHelpScreen;

/// @brief Field techTreeIcon, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_techTreeIcon, put=__cordl_internal_set_techTreeIcon)) ::UnityW<::UnityEngine::SpriteRenderer>  techTreeIcon;

/// @brief Field techTreeIconById, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_techTreeIconById, put=__cordl_internal_set_techTreeIconById)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,::UnityW<::UnityEngine::Sprite>>*  techTreeIconById;

/// @brief Field techTreePages, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_techTreePages, put=__cordl_internal_set_techTreePages)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUIPage>>*  techTreePages;

/// @brief Field techTreeSO, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_techTreeSO, put=__cordl_internal_set_techTreeSO)) ::UnityW<::GlobalNamespace::SITechTreeSO>  techTreeSO;

/// @brief Field uiCenter, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_uiCenter, put=__cordl_internal_set_uiCenter)) ::UnityW<::UnityEngine::Transform>  uiCenter;

/// @brief Field vibratingSpringSprite, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_vibratingSpringSprite, put=__cordl_internal_set_vibratingSpringSprite)) ::UnityW<::UnityEngine::Sprite>  vibratingSpringSprite;

/// @brief Field waitingForScanScreen, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_waitingForScanScreen, put=__cordl_internal_set_waitingForScanScreen)) ::UnityW<::UnityEngine::GameObject>  waitingForScanScreen;

/// @brief Field weirdGearSprite, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_weirdGearSprite, put=__cordl_internal_set_weirdGearSprite)) ::UnityW<::UnityEngine::Sprite>  weirdGearSprite;

/// @brief Convert operator to "::GlobalNamespace::ITouchScreenStation"
constexpr operator  ::GlobalNamespace::ITouchScreenStation*() noexcept;

/// @brief Method AddButton, addr 0x5af3be0, size 0xf0, virtual true, abstract: false, final true
inline void AddButton(::GlobalNamespace::SITouchscreenButton*  button, bool  isPopupButton) ;

/// @brief Method CollectButtonColliders, addr 0x5af0260, size 0x308, virtual false, abstract: false, final false
inline void CollectButtonColliders() ;

/// @brief Method FormattedCurrentResourceAmountsForNode, addr 0x5af3720, size 0x314, virtual false, abstract: false, final false
inline ::StringW FormattedCurrentResourceAmountsForNode(::GlobalNamespace::SITechTreeNode*  node) ;

/// @brief Method FormattedCurrentResourceTypesForNode, addr 0x5af3044, size 0x374, virtual false, abstract: false, final false
inline ::StringW FormattedCurrentResourceTypesForNode(::GlobalNamespace::SITechTreeNode*  node) ;

/// @brief Method FormattedResearchCost, addr 0x5af33b8, size 0x368, virtual false, abstract: false, final false
inline ::StringW FormattedResearchCost(::GlobalNamespace::SITechTreeNode*  node) ;

/// @brief Method ITouchScreenStation.get_gameObject, addr 0x5af48c4, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::GameObject> ITouchScreenStation_get_gameObject() ;

/// @brief Method Initialize, addr 0x5af0e50, size 0x604, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method IsPopupState, addr 0x5af2720, size 0x10, virtual false, abstract: false, final false
inline bool IsPopupState(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  state) ;

/// @brief Method IsValidPage, addr 0x5af45ec, size 0x14c, virtual false, abstract: false, final false
inline bool IsValidPage(int32_t  pageId) ;

static inline ::GlobalNamespace::SITechTreeStation* New_ctor() ;

/// @brief Method OnDisable, addr 0x5af0bd0, size 0x280, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5af07b0, size 0x288, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnProgressionUpdate, addr 0x5af44d4, size 0x2c, virtual false, abstract: false, final false
inline void OnProgressionUpdate() ;

/// @brief Method OnProgressionUpdateNode, addr 0x5af4500, size 0x4, virtual false, abstract: false, final false
inline void OnProgressionUpdateNode(::GlobalNamespace::SIUpgradeType  type) ;

/// @brief Method PlayerHandScanned, addr 0x5af3b94, size 0x4c, virtual false, abstract: false, final false
inline void PlayerHandScanned(int32_t  actorNr) ;

/// @brief Method ReadDataPUN, addr 0x5af1dec, size 0x3f4, virtual false, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Reset, addr 0x5af17d4, size 0x14, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetActivePage, addr 0x5af4504, size 0xe8, virtual false, abstract: false, final false
inline void SetActivePage() ;

/// @brief Method SetNonPopupButtonsEnabled, addr 0x5af0670, size 0x140, virtual false, abstract: false, final false
inline void SetNonPopupButtonsEnabled(bool  enable) ;

/// @brief Method SetScreenVisibility, addr 0x5af1894, size 0x3cc, virtual false, abstract: false, final false
inline void SetScreenVisibility(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  currentState, ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  lastState) ;

/// @brief Method TouchscreenButtonPressed, addr 0x5af3cd0, size 0x528, virtual true, abstract: false, final true
inline void TouchscreenButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr) ;

/// @brief Method TouchscreenToggleButtonPressed, addr 0x5af41f8, size 0x4, virtual true, abstract: false, final true
inline void TouchscreenToggleButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr, bool  isToggledOn) ;

/// @brief Method UpdateHelpButtonPage, addr 0x5af3b28, size 0x6c, virtual false, abstract: false, final false
inline void UpdateHelpButtonPage(int32_t  helpButtonPageIndex) ;

/// @brief Method UpdateNodeData, addr 0x5af2f30, size 0x114, virtual false, abstract: false, final false
inline void UpdateNodeData(::GlobalNamespace::SIPlayer*  player) ;

/// @brief Method UpdateNodePopupPage, addr 0x5af3a34, size 0xf4, virtual false, abstract: false, final false
inline void UpdateNodePopupPage() ;

/// @brief Method UpdateState, addr 0x5af2730, size 0x800, virtual false, abstract: false, final false
inline void UpdateState(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  newState) ;

/// @brief Method UpdateState, addr 0x5af1dd8, size 0x14, virtual false, abstract: false, final false
inline void UpdateState(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  newState, ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  newLastState) ;

/// @brief Method WriteDataPUN, addr 0x5af1c60, size 0x178, virtual false, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ZoneDataSerializeRead, addr 0x5af2278, size 0x4a8, virtual false, abstract: false, final false
inline void ZoneDataSerializeRead(::System::IO::BinaryReader*  reader) ;

/// @brief Method ZoneDataSerializeWrite, addr 0x5af21e0, size 0x98, virtual false, abstract: false, final false
inline void ZoneDataSerializeWrite(::System::IO::BinaryWriter*  writer) ;

/// [CompilerGenerated]
/// @brief Method <CollectButtonColliders>g__RemoveButtonsInside|75_2, addr 0x5af0568, size 0x108, virtual false, abstract: false, final false
static inline void _CollectButtonColliders_g__RemoveButtonsInside_75_2(::ArrayW<::UnityEngine::GameObject*>  roots, ::by_ref<::GlobalNamespace::SITechTreeStation___c__DisplayClass75_0>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method _RefreshButtonsUsableState, addr 0x5af0a38, size 0x198, virtual false, abstract: false, final false
inline void _RefreshButtonsUsableState() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get__nonPopupButtonColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get__nonPopupButtonColliders() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_active() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_active() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_background() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_background() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_bouncySandSprite() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_bouncySandSprite() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_canAffordNode() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_canAffordNode() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_cantAffordNode() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_cantAffordNode() ;

constexpr int32_t const& __cordl_internal_get_currentNodeId() const;

constexpr int32_t& __cordl_internal_get_currentNodeId() ;

constexpr ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState& __cordl_internal_get_currentState() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_floppyMetalSprite() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_floppyMetalSprite() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_helpPopupScreens() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_helpPopupScreens() ;

constexpr int32_t const& __cordl_internal_get_helpScreenIndex() const;

constexpr int32_t& __cordl_internal_get_helpScreenIndex() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState const& __cordl_internal_get_lastState() const;

constexpr ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState& __cordl_internal_get_lastState() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_nodeAvailable() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_nodeAvailable() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_nodeDescriptionText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_nodeDescriptionText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_nodeLocked() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_nodeLocked() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_nodeNameResearchMessageText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_nodeNameResearchMessageText() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_nodeNameText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_nodeNameText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_nodePopupScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_nodePopupScreen() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_nodePopupScreens() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_nodePopupScreens() ;

constexpr ::GlobalNamespace::SITechTreeStation_NodePopupState const& __cordl_internal_get_nodePopupState() const;

constexpr ::GlobalNamespace::SITechTreeStation_NodePopupState& __cordl_internal_get_nodePopupState() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_nodeResearchButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_nodeResearchButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_nodeResearched() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_nodeResearched() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_nodeResourceCostText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_nodeResourceCostText() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_nodeResourceTypeText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_nodeResourceTypeText() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_notActive() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_notActive() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetListEntry>>* const& __cordl_internal_get_pageButtons() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetListEntry>>*& __cordl_internal_get_pageButtons() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetListEntry> const& __cordl_internal_get_pageListEntryPrefab() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetListEntry>& __cordl_internal_get_pageListEntryPrefab() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pageListParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pageListParent() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pageParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pageParent() ;

constexpr ::UnityW<::GlobalNamespace::SITechTreeUIPage> const& __cordl_internal_get_pagePrefab() const;

constexpr ::UnityW<::GlobalNamespace::SITechTreeUIPage>& __cordl_internal_get_pagePrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_pageScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_pageScreen() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_pagesListScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_pagesListScreen() ;

constexpr ::UnityW<::GlobalNamespace::SICombinedTerminal> const& __cordl_internal_get_parentTerminal() const;

constexpr ::UnityW<::GlobalNamespace::SICombinedTerminal>& __cordl_internal_get_parentTerminal() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_playerCurrentResourceAmountsText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_playerCurrentResourceAmountsText() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_playerNameText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_playerNameText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_popupScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_popupScreen() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_resourceCost() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_resourceCost() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_screenData() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_screenData() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_screenDescriptionText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_screenDescriptionText() ;

constexpr ::UnityW<::GlobalNamespace::SIScreenRegion> const& __cordl_internal_get_screenRegion() const;

constexpr ::UnityW<::GlobalNamespace::SIScreenRegion>& __cordl_internal_get_screenRegion() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_soundBankPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_soundBankPlayer() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,::UnityW<::UnityEngine::Sprite>>* const& __cordl_internal_get_spriteByType() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,::UnityW<::UnityEngine::Sprite>>*& __cordl_internal_get_spriteByType() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_strangeWoodSprite() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_strangeWoodSprite() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_techPointCost() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_techPointCost() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_techPointSprite() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_techPointSprite() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_techTreeHelpScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_techTreeHelpScreen() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_techTreeIcon() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_techTreeIcon() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,::UnityW<::UnityEngine::Sprite>>* const& __cordl_internal_get_techTreeIconById() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,::UnityW<::UnityEngine::Sprite>>*& __cordl_internal_get_techTreeIconById() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUIPage>>* const& __cordl_internal_get_techTreePages() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUIPage>>*& __cordl_internal_get_techTreePages() ;

constexpr ::UnityW<::GlobalNamespace::SITechTreeSO> const& __cordl_internal_get_techTreeSO() const;

constexpr ::UnityW<::GlobalNamespace::SITechTreeSO>& __cordl_internal_get_techTreeSO() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_uiCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_uiCenter() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_vibratingSpringSprite() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_vibratingSpringSprite() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_waitingForScanScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_waitingForScanScreen() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_weirdGearSprite() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_weirdGearSprite() ;

constexpr void __cordl_internal_set__nonPopupButtonColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_active(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_background(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_bouncySandSprite(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_canAffordNode(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_cantAffordNode(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_currentNodeId(int32_t  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  value) ;

constexpr void __cordl_internal_set_floppyMetalSprite(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_helpPopupScreens(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_helpScreenIndex(int32_t  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_lastState(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  value) ;

constexpr void __cordl_internal_set_nodeAvailable(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_nodeDescriptionText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_nodeLocked(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_nodeNameResearchMessageText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_nodeNameText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_nodePopupScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_nodePopupScreens(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_nodePopupState(::GlobalNamespace::SITechTreeStation_NodePopupState  value) ;

constexpr void __cordl_internal_set_nodeResearchButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_nodeResearched(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_nodeResourceCostText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_nodeResourceTypeText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_notActive(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_pageButtons(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetListEntry>>*  value) ;

constexpr void __cordl_internal_set_pageListEntryPrefab(::UnityW<::GlobalNamespace::SIGadgetListEntry>  value) ;

constexpr void __cordl_internal_set_pageListParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_pageParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_pagePrefab(::UnityW<::GlobalNamespace::SITechTreeUIPage>  value) ;

constexpr void __cordl_internal_set_pageScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_pagesListScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_parentTerminal(::UnityW<::GlobalNamespace::SICombinedTerminal>  value) ;

constexpr void __cordl_internal_set_playerCurrentResourceAmountsText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_playerNameText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_popupScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_resourceCost(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set_screenData(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_screenDescriptionText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_screenRegion(::UnityW<::GlobalNamespace::SIScreenRegion>  value) ;

constexpr void __cordl_internal_set_soundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_spriteByType(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,::UnityW<::UnityEngine::Sprite>>*  value) ;

constexpr void __cordl_internal_set_strangeWoodSprite(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_techPointCost(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set_techPointSprite(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_techTreeHelpScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_techTreeIcon(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set_techTreeIconById(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,::UnityW<::UnityEngine::Sprite>>*  value) ;

constexpr void __cordl_internal_set_techTreePages(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUIPage>>*  value) ;

constexpr void __cordl_internal_set_techTreeSO(::UnityW<::GlobalNamespace::SITechTreeSO>  value) ;

constexpr void __cordl_internal_set_uiCenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_vibratingSpringSprite(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_waitingForScanScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_weirdGearSprite(::UnityW<::UnityEngine::Sprite>  value) ;

/// @brief Method .ctor, addr 0x5af4738, size 0x18c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActivePlayer, addr 0x5af0170, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SIPlayer> get_ActivePlayer() ;

/// @brief Method get_ActivePlayerName, addr 0x5af0188, size 0x4c, virtual false, abstract: false, final false
inline ::StringW get_ActivePlayerName() ;

/// @brief Method get_CurrentNode, addr 0x5af00f4, size 0x38, virtual false, abstract: false, final false
inline ::GlobalNamespace::SITechTreeNode* get_CurrentNode() ;

/// @brief Method get_CurrentPage, addr 0x5af012c, size 0x44, virtual false, abstract: false, final false
inline ::GlobalNamespace::SITechTreePage* get_CurrentPage() ;

/// @brief Method get_GameEntityManager, addr 0x5af0210, size 0x2c, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GameEntityManager> get_GameEntityManager() ;

/// @brief Method get_IsAuthority, addr 0x5af01d4, size 0x3c, virtual false, abstract: false, final false
inline bool get_IsAuthority() ;

/// @brief Method get_SIManager, addr 0x5af023c, size 0x24, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SuperInfectionManager> get_SIManager() ;

/// @brief Method get_ScreenRegion, addr 0x5af00ec, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::SIScreenRegion> get_ScreenRegion() ;

/// @brief Convert to "::GlobalNamespace::ITouchScreenStation"
constexpr ::GlobalNamespace::ITouchScreenStation* i___GlobalNamespace__ITouchScreenStation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SITechTreeStation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SITechTreeStation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SITechTreeStation(SITechTreeStation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SITechTreeStation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SITechTreeStation(SITechTreeStation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{367};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[GT/SITechTreeStation]  "};

/// @brief Field screenData, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState,::UnityW<::UnityEngine::GameObject>>*  ___screenData;

/// @brief Field currentState, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  ___currentState;

/// @brief Field lastState, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  ___lastState;

/// @brief Field parentTerminal, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SICombinedTerminal>  ___parentTerminal;

/// @brief Field techPointSprite, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___techPointSprite;

/// @brief Field strangeWoodSprite, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___strangeWoodSprite;

/// @brief Field weirdGearSprite, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___weirdGearSprite;

/// @brief Field vibratingSpringSprite, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___vibratingSpringSprite;

/// @brief Field bouncySandSprite, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___bouncySandSprite;

/// @brief Field floppyMetalSprite, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___floppyMetalSprite;

/// @brief Field currentNodeId, offset: 0x68, size: 0x4, def value: None
 int32_t  ___currentNodeId;

/// @brief Field techTreeSO, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITechTreeSO>  ___techTreeSO;

/// @brief Field waitingForScanScreen, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___waitingForScanScreen;

/// @brief Field pagesListScreen, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___pagesListScreen;

/// @brief Field pageScreen, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___pageScreen;

/// @brief Field nodePopupScreen, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___nodePopupScreen;

/// @brief Field techTreeHelpScreen, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___techTreeHelpScreen;

/// [SerializeField]
/// @brief Field screenRegion, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIScreenRegion>  ___screenRegion;

/// @brief Field active, offset: 0xa8, size: 0x10, def value: None
 ::UnityEngine::Color  ___active;

/// @brief Field notActive, offset: 0xb8, size: 0x10, def value: None
 ::UnityEngine::Color  ___notActive;

/// [Header("Main Screen Shared")]
/// @brief Field screenDescriptionText, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___screenDescriptionText;

/// @brief Field playerNameText, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___playerNameText;

/// @brief Field background, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___background;

/// @brief Field uiCenter, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___uiCenter;

/// [Header("Popup Shared")]
/// @brief Field popupScreen, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___popupScreen;

/// [Header("Pages List")]
/// [SerializeField]
/// @brief Field pageListParent, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pageListParent;

/// [SerializeField]
/// @brief Field pageListEntryPrefab, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetListEntry>  ___pageListEntryPrefab;

/// @brief Field pageButtons, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetListEntry>>*  ___pageButtons;

/// [Header("Tree Page")]
/// [SerializeField]
/// @brief Field pageParent, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pageParent;

/// [SerializeField]
/// @brief Field pagePrefab, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITechTreeUIPage>  ___pagePrefab;

/// @brief Field techTreePages, offset: 0x118, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUIPage>>*  ___techTreePages;

/// [SerializeField]
/// @brief Field techTreeIcon, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___techTreeIcon;

/// [Header("Node Popup")]
/// @brief Field nodePopupScreens, offset: 0x128, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___nodePopupScreens;

/// [Header("Research Node Description")]
/// @brief Field nodeNameText, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___nodeNameText;

/// @brief Field nodeDescriptionText, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___nodeDescriptionText;

/// @brief Field nodeResourceTypeText, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___nodeResourceTypeText;

/// @brief Field nodeResourceCostText, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___nodeResourceCostText;

/// @brief Field playerCurrentResourceAmountsText, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___playerCurrentResourceAmountsText;

/// @brief Field nodeAvailable, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___nodeAvailable;

/// @brief Field nodeLocked, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___nodeLocked;

/// @brief Field nodeResearched, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___nodeResearched;

/// @brief Field canAffordNode, offset: 0x170, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___canAffordNode;

/// @brief Field cantAffordNode, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___cantAffordNode;

/// @brief Field nodeResearchButton, offset: 0x180, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___nodeResearchButton;

/// @brief Field techPointCost, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___techPointCost;

/// @brief Field resourceCost, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___resourceCost;

/// [Header("Research Attempt")]
/// @brief Field nodeNameResearchMessageText, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___nodeNameResearchMessageText;

/// @brief Field nodePopupState, offset: 0x1a0, size: 0x4, def value: None
 ::GlobalNamespace::SITechTreeStation_NodePopupState  ___nodePopupState;

/// [Header("Help")]
/// @brief Field helpScreenIndex, offset: 0x1a4, size: 0x4, def value: None
 int32_t  ___helpScreenIndex;

/// @brief Field helpPopupScreens, offset: 0x1a8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___helpPopupScreens;

/// [Header("Audio")]
/// [SerializeField]
/// @brief Field soundBankPlayer, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___soundBankPlayer;

/// [Header("Main Screen Colliders")]
/// [Tooltip("Button colliders to disable while popup screen is shown.  Gets updated live to include page and gadget node buttons.")]
/// [SerializeField]
/// @brief Field _nonPopupButtonColliders, offset: 0x1b8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ____nonPopupButtonColliders;

/// @brief Field spriteByType, offset: 0x1c0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,::UnityW<::UnityEngine::Sprite>>*  ___spriteByType;

/// @brief Field techTreeIconById, offset: 0x1c8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,::UnityW<::UnityEngine::Sprite>>*  ___techTreeIconById;

/// @brief Field initialized, offset: 0x1d0, size: 0x1, def value: None
 bool  ___initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___screenData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___currentState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___lastState) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___parentTerminal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___techPointSprite) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___strangeWoodSprite) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___weirdGearSprite) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___vibratingSpringSprite) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___bouncySandSprite) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___floppyMetalSprite) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___currentNodeId) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___techTreeSO) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___waitingForScanScreen) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___pagesListScreen) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___pageScreen) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___nodePopupScreen) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___techTreeHelpScreen) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___screenRegion) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___active) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___notActive) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___screenDescriptionText) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___playerNameText) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___background) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___uiCenter) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___popupScreen) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___pageListParent) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___pageListEntryPrefab) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___pageButtons) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___pageParent) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___pagePrefab) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___techTreePages) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___techTreeIcon) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___nodePopupScreens) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___nodeNameText) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___nodeDescriptionText) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___nodeResourceTypeText) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___nodeResourceCostText) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___playerCurrentResourceAmountsText) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___nodeAvailable) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___nodeLocked) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___nodeResearched) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___canAffordNode) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___cantAffordNode) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___nodeResearchButton) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___techPointCost) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___resourceCost) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___nodeNameResearchMessageText) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___nodePopupState) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___helpScreenIndex) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___helpPopupScreens) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___soundBankPlayer) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ____nonPopupButtonColliders) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___spriteByType) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___techTreeIconById) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeStation, ___initialized) == 0x1d0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SITechTreeStation) == 0x1d8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SITechTreeStation/<>c
class CORDL_TYPE SITechTreeStation___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::SITechTreeStation___c*  __9;

/// @brief Field <>9__75_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__75_0, put=setStaticF___9__75_0)) ::System::Func_2<::UnityW<::GlobalNamespace::DestroyIfNotBeta>,::UnityW<::UnityEngine::GameObject>>*  __9__75_0;

/// @brief Field <>9__75_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__75_1, put=setStaticF___9__75_1)) ::System::Func_2<::UnityW<::GlobalNamespace::SITouchscreenButton>,::UnityW<::UnityEngine::Collider>>*  __9__75_1;

/// @brief Field <>9__97_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__97_0, put=setStaticF___9__97_0)) ::System::Func_2<::GlobalNamespace::SIResource_ResourceCost,int32_t>*  __9__97_0;

static inline ::GlobalNamespace::SITechTreeStation___c* New_ctor() ;

/// @brief Method <CollectButtonColliders>b__75_0, addr 0x5af493c, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> _CollectButtonColliders_b__75_0(::GlobalNamespace::DestroyIfNotBeta*  d) ;

/// @brief Method <CollectButtonColliders>b__75_1, addr 0x5af4954, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> _CollectButtonColliders_b__75_1(::GlobalNamespace::SITouchscreenButton*  b) ;

/// @brief Method <FormattedResearchCost>b__97_0, addr 0x5af49a4, size 0x8, virtual false, abstract: false, final false
inline int32_t _FormattedResearchCost_b__97_0(::GlobalNamespace::SIResource_ResourceCost  c) ;

/// @brief Method .ctor, addr 0x5af4934, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::SITechTreeStation___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::GlobalNamespace::DestroyIfNotBeta>,::UnityW<::UnityEngine::GameObject>>* getStaticF___9__75_0() ;

static inline ::System::Func_2<::UnityW<::GlobalNamespace::SITouchscreenButton>,::UnityW<::UnityEngine::Collider>>* getStaticF___9__75_1() ;

static inline ::System::Func_2<::GlobalNamespace::SIResource_ResourceCost,int32_t>* getStaticF___9__97_0() ;

static inline void setStaticF___9(::GlobalNamespace::SITechTreeStation___c*  value) ;

static inline void setStaticF___9__75_0(::System::Func_2<::UnityW<::GlobalNamespace::DestroyIfNotBeta>,::UnityW<::UnityEngine::GameObject>>*  value) ;

static inline void setStaticF___9__75_1(::System::Func_2<::UnityW<::GlobalNamespace::SITouchscreenButton>,::UnityW<::UnityEngine::Collider>>*  value) ;

static inline void setStaticF___9__97_0(::System::Func_2<::GlobalNamespace::SIResource_ResourceCost,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SITechTreeStation___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SITechTreeStation___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SITechTreeStation___c(SITechTreeStation___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SITechTreeStation___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SITechTreeStation___c(SITechTreeStation___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{365};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SITechTreeStation___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
