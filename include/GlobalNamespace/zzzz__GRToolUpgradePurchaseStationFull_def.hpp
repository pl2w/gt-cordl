#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUpgradePurchaseStationFull.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRToolUpgradePurchaseStationFull_ShelfMovementState_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolUpgradePurchaseStationFull)
namespace GlobalNamespace {
class GRPlayer;
}
namespace GlobalNamespace {
class GRSelectionWheel;
}
namespace GlobalNamespace {
class GRSpringMovement;
}
namespace GlobalNamespace {
struct GRToolProgressionManager_ToolParts;
}
namespace GlobalNamespace {
class GRToolProgressionManager;
}
namespace GlobalNamespace {
struct GRToolUpgradePurchaseStationFull_ShelfMovementState;
}
namespace GlobalNamespace {
class GRToolUpgradePurchaseStationShelf;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class GhostReactorManager;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace GlobalNamespace {
class GorillaPhysicalButton;
}
namespace GlobalNamespace {
class IDCardScanner;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRToolUpgradePurchaseStationFull;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolUpgradePurchaseStationFull*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolUpgradePurchaseStationFull*, "", "GRToolUpgradePurchaseStationFull");
// Dependencies GRToolUpgradePurchaseStationFull::ShelfMovementState, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolUpgradePurchaseStationFull
class CORDL_TYPE GRToolUpgradePurchaseStationFull : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ShelfMovementState = ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState;

 __declspec(property(get=get_SelectedItem)) int32_t  SelectedItem;

 __declspec(property(get=get_SelectedShelf)) int32_t  SelectedShelf;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x218, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field angleOfLastHandleBroadcast, offset 0x23c, size 0x4 
 __declspec(property(get=__cordl_internal_get_angleOfLastHandleBroadcast, put=__cordl_internal_set_angleOfLastHandleBroadcast)) float_t  angleOfLastHandleBroadcast;

/// @brief Field audioSourceClang, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSourceClang, put=__cordl_internal_set_audioSourceClang)) ::UnityW<::UnityEngine::AudioSource>  audioSourceClang;

/// @brief Field audioSourceLooping, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSourceLooping, put=__cordl_internal_set_audioSourceLooping)) ::UnityW<::UnityEngine::AudioSource>  audioSourceLooping;

/// @brief Field audioSourceLoopingVolume, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_audioSourceLoopingVolume, put=__cordl_internal_set_audioSourceLoopingVolume)) float_t  audioSourceLoopingVolume;

/// @brief Field bGripLeftLastFrame, offset 0x232, size 0x1 
 __declspec(property(get=__cordl_internal_get_bGripLeftLastFrame, put=__cordl_internal_set_bGripLeftLastFrame)) bool  bGripLeftLastFrame;

/// @brief Field bGripRightLastFrame, offset 0x233, size 0x1 
 __declspec(property(get=__cordl_internal_get_bGripRightLastFrame, put=__cordl_internal_set_bGripRightLastFrame)) bool  bGripRightLastFrame;

/// @brief Field bIsGrippingLeft, offset 0x230, size 0x1 
 __declspec(property(get=__cordl_internal_get_bIsGrippingLeft, put=__cordl_internal_set_bIsGrippingLeft)) bool  bIsGrippingLeft;

/// @brief Field bIsGrippingRight, offset 0x231, size 0x1 
 __declspec(property(get=__cordl_internal_get_bIsGrippingRight, put=__cordl_internal_set_bIsGrippingRight)) bool  bIsGrippingRight;

/// @brief Field backlightLocked, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_backlightLocked, put=__cordl_internal_set_backlightLocked)) ::UnityW<::UnityEngine::Material>  backlightLocked;

/// @brief Field backlightPurchase, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_backlightPurchase, put=__cordl_internal_set_backlightPurchase)) ::UnityW<::UnityEngine::Material>  backlightPurchase;

/// @brief Field backlightResearch, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_backlightResearch, put=__cordl_internal_set_backlightResearch)) ::UnityW<::UnityEngine::Material>  backlightResearch;

/// @brief Field cachedRequiredPartsList, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedRequiredPartsList, put=__cordl_internal_set_cachedRequiredPartsList)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionManager_ToolParts>*  cachedRequiredPartsList;

/// @brief Field colorCanBuyCredits, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorCanBuyCredits, put=__cordl_internal_set_colorCanBuyCredits)) ::UnityEngine::Color  colorCanBuyCredits;

/// @brief Field colorCanBuyJuice, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorCanBuyJuice, put=__cordl_internal_set_colorCanBuyJuice)) ::UnityEngine::Color  colorCanBuyJuice;

/// @brief Field colorCantBuy, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorCantBuy, put=__cordl_internal_set_colorCantBuy)) ::UnityEngine::Color  colorCantBuy;

/// @brief Field colorPurchaseButtonCanAfford, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorPurchaseButtonCanAfford, put=__cordl_internal_set_colorPurchaseButtonCanAfford)) ::UnityEngine::Color  colorPurchaseButtonCanAfford;

/// @brief Field colorSelectedItem, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorSelectedItem, put=__cordl_internal_set_colorSelectedItem)) ::UnityEngine::Color  colorSelectedItem;

/// @brief Field colorUnresearchedItem, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorUnresearchedItem, put=__cordl_internal_set_colorUnresearchedItem)) ::UnityEngine::Color  colorUnresearchedItem;

/// @brief Field colorUnselectedItem, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorUnselectedItem, put=__cordl_internal_set_colorUnselectedItem)) ::UnityEngine::Color  colorUnselectedItem;

/// @brief Field colorUnselectedUnresearchedItem, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorUnselectedUnresearchedItem, put=__cordl_internal_set_colorUnselectedUnresearchedItem)) ::UnityEngine::Color  colorUnselectedUnresearchedItem;

/// @brief Field currentActivePlayerActorNumber, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentActivePlayerActorNumber, put=__cordl_internal_set_currentActivePlayerActorNumber)) int32_t  currentActivePlayerActorNumber;

/// @brief Field currentMagnetEntity, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentMagnetEntity, put=__cordl_internal_set_currentMagnetEntity)) ::UnityW<::GlobalNamespace::GameEntity>  currentMagnetEntity;

/// @brief Field currentMagnetEntityTypeId, offset 0x1d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentMagnetEntityTypeId, put=__cordl_internal_set_currentMagnetEntityTypeId)) int32_t  currentMagnetEntityTypeId;

/// @brief Field currentVisibleShelfIndex, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentVisibleShelfIndex, put=__cordl_internal_set_currentVisibleShelfIndex)) int32_t  currentVisibleShelfIndex;

/// @brief Field currentlyShowingText, offset 0x219, size 0x1 
 __declspec(property(get=__cordl_internal_get_currentlyShowingText, put=__cordl_internal_set_currentlyShowingText)) bool  currentlyShowingText;

/// @brief Field desiredMagnetEntityTypeId, offset 0x1dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_desiredMagnetEntityTypeId, put=__cordl_internal_set_desiredMagnetEntityTypeId)) int32_t  desiredMagnetEntityTypeId;

/// @brief Field disablePurchaseButton, offset 0x20c, size 0x1 
 __declspec(property(get=__cordl_internal_get_disablePurchaseButton, put=__cordl_internal_set_disablePurchaseButton)) bool  disablePurchaseButton;

/// @brief Field frontBackShelfMovement, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_frontBackShelfMovement, put=__cordl_internal_set_frontBackShelfMovement)) ::GlobalNamespace::GRSpringMovement*  frontBackShelfMovement;

/// @brief Field gameShelves, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameShelves, put=__cordl_internal_set_gameShelves)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationShelf>>*  gameShelves;

/// @brief Field grManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_grManager, put=__cordl_internal_set_grManager)) ::UnityW<::GlobalNamespace::GhostReactorManager>  grManager;

/// @brief Field interactAudioSource, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactAudioSource, put=__cordl_internal_set_interactAudioSource)) ::UnityW<::UnityEngine::AudioSource>  interactAudioSource;

/// @brief Field itemDescription, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemDescription, put=__cordl_internal_set_itemDescription)) ::UnityW<::TMPro::TMP_Text>  itemDescription;

/// @brief Field itemDescriptionAnnotation, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemDescriptionAnnotation, put=__cordl_internal_set_itemDescriptionAnnotation)) ::UnityW<::TMPro::TMP_Text>  itemDescriptionAnnotation;

/// @brief Field itemDescriptionName, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemDescriptionName, put=__cordl_internal_set_itemDescriptionName)) ::UnityW<::TMPro::TMP_Text>  itemDescriptionName;

/// @brief Field lastHandleAngle, offset 0x248, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastHandleAngle, put=__cordl_internal_set_lastHandleAngle)) float_t  lastHandleAngle;

/// @brief Field lastKnownLocalPlayerCredits, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastKnownLocalPlayerCredits, put=__cordl_internal_set_lastKnownLocalPlayerCredits)) int32_t  lastKnownLocalPlayerCredits;

/// @brief Field lastKnownLocalPlayerJuice, offset 0x1ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastKnownLocalPlayerJuice, put=__cordl_internal_set_lastKnownLocalPlayerJuice)) int32_t  lastKnownLocalPlayerJuice;

/// @brief Field lastRequestedActivePlayerTokenTime, offset 0x228, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastRequestedActivePlayerTokenTime, put=__cordl_internal_set_lastRequestedActivePlayerTokenTime)) float_t  lastRequestedActivePlayerTokenTime;

/// @brief Field magnet, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_magnet, put=__cordl_internal_set_magnet)) ::UnityW<::UnityEngine::Transform>  magnet;

/// @brief Field magnetMovement, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_magnetMovement, put=__cordl_internal_set_magnetMovement)) ::GlobalNamespace::GRSpringMovement*  magnetMovement;

/// @brief Field maxHandleRange, offset 0x234, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHandleRange, put=__cordl_internal_set_maxHandleRange)) float_t  maxHandleRange;

/// @brief Field maxMagnetDistance, offset 0x1e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxMagnetDistance, put=__cordl_internal_set_maxMagnetDistance)) float_t  maxMagnetDistance;

/// @brief Field needsUIRefresh, offset 0x1b0, size 0x1 
 __declspec(property(get=__cordl_internal_get_needsUIRefresh, put=__cordl_internal_set_needsUIRefresh)) bool  needsUIRefresh;

/// @brief Field nextVisibleShelfIndex, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextVisibleShelfIndex, put=__cordl_internal_set_nextVisibleShelfIndex)) int32_t  nextVisibleShelfIndex;

/// @brief Field pageSelectionHandle, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_pageSelectionHandle, put=__cordl_internal_set_pageSelectionHandle)) ::UnityW<::UnityEngine::GameObject>  pageSelectionHandle;

/// @brief Field pageSelectionLever, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_pageSelectionLever, put=__cordl_internal_set_pageSelectionLever)) ::UnityW<::UnityEngine::GameObject>  pageSelectionLever;

/// @brief Field pageSelectionWheel, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pageSelectionWheel, put=__cordl_internal_set_pageSelectionWheel)) ::UnityW<::GlobalNamespace::GRSelectionWheel>  pageSelectionWheel;

/// @brief Field playerInfo, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerInfo, put=__cordl_internal_set_playerInfo)) ::UnityW<::TMPro::TMP_Text>  playerInfo;

/// @brief Field playerQueueTimeLimit, offset 0x208, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerQueueTimeLimit, put=__cordl_internal_set_playerQueueTimeLimit)) float_t  playerQueueTimeLimit;

/// @brief Field prefabMagnetHeightOffset, offset 0x1e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_prefabMagnetHeightOffset, put=__cordl_internal_set_prefabMagnetHeightOffset)) float_t  prefabMagnetHeightOffset;

/// @brief Field purchaseButtonCooldown, offset 0x210, size 0x4 
 __declspec(property(get=__cordl_internal_get_purchaseButtonCooldown, put=__cordl_internal_set_purchaseButtonCooldown)) float_t  purchaseButtonCooldown;

/// @brief Field purchaseButtonPressed, offset 0x214, size 0x4 
 __declspec(property(get=__cordl_internal_get_purchaseButtonPressed, put=__cordl_internal_set_purchaseButtonPressed)) float_t  purchaseButtonPressed;

/// @brief Field purchaseButtonText, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseButtonText, put=__cordl_internal_set_purchaseButtonText)) ::UnityW<::TMPro::TMP_Text>  purchaseButtonText;

/// @brief Field purchaseFailed, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseFailed, put=__cordl_internal_set_purchaseFailed)) ::UnityEngine::Events::UnityEvent*  purchaseFailed;

/// @brief Field purchaseSucceded, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseSucceded, put=__cordl_internal_set_purchaseSucceded)) ::UnityEngine::Events::UnityEvent*  purchaseSucceded;

/// @brief Field quantMult, offset 0x244, size 0x4 
 __declspec(property(get=__cordl_internal_get_quantMult, put=__cordl_internal_set_quantMult)) float_t  quantMult;

/// @brief Field raiseLowerShelfMovement, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_raiseLowerShelfMovement, put=__cordl_internal_set_raiseLowerShelfMovement)) ::GlobalNamespace::GRSpringMovement*  raiseLowerShelfMovement;

/// @brief Field reactor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field requestActivePlayerTokenThrottleTime, offset 0x22c, size 0x4 
 __declspec(property(get=__cordl_internal_get_requestActivePlayerTokenThrottleTime, put=__cordl_internal_set_requestActivePlayerTokenThrottleTime)) float_t  requestActivePlayerTokenThrottleTime;

/// @brief Field ropeEnd, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ropeEnd, put=__cordl_internal_set_ropeEnd)) ::UnityW<::UnityEngine::Transform>  ropeEnd;

/// @brief Field ropeTop, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ropeTop, put=__cordl_internal_set_ropeTop)) ::UnityW<::UnityEngine::Transform>  ropeTop;

/// @brief Field scanner, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_scanner, put=__cordl_internal_set_scanner)) ::UnityW<::GlobalNamespace::IDCardScanner>  scanner;

/// @brief Field select1, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_select1, put=__cordl_internal_set_select1)) ::UnityW<::GlobalNamespace::GorillaPhysicalButton>  select1;

/// @brief Field select2, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_select2, put=__cordl_internal_set_select2)) ::UnityW<::GlobalNamespace::GorillaPhysicalButton>  select2;

/// @brief Field select3, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_select3, put=__cordl_internal_set_select3)) ::UnityW<::GlobalNamespace::GorillaPhysicalButton>  select3;

/// @brief Field select4, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_select4, put=__cordl_internal_set_select4)) ::UnityW<::GlobalNamespace::GorillaPhysicalButton>  select4;

/// @brief Field selectedItem, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_selectedItem, put=__cordl_internal_set_selectedItem)) int32_t  selectedItem;

/// @brief Field selectedShelf, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_selectedShelf, put=__cordl_internal_set_selectedShelf)) int32_t  selectedShelf;

/// @brief Field selectionWheelAngleOfLastBroadcast, offset 0x240, size 0x4 
 __declspec(property(get=__cordl_internal_get_selectionWheelAngleOfLastBroadcast, put=__cordl_internal_set_selectionWheelAngleOfLastBroadcast)) float_t  selectionWheelAngleOfLastBroadcast;

/// @brief Field shelfBackTransform, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_shelfBackTransform, put=__cordl_internal_set_shelfBackTransform)) ::UnityW<::UnityEngine::Transform>  shelfBackTransform;

/// @brief Field shelfLowerTransform, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_shelfLowerTransform, put=__cordl_internal_set_shelfLowerTransform)) ::UnityW<::UnityEngine::Transform>  shelfLowerTransform;

/// @brief Field shelfMovementState, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_shelfMovementState, put=__cordl_internal_set_shelfMovementState)) ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState  shelfMovementState;

/// @brief Field shelfRootTransform, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_shelfRootTransform, put=__cordl_internal_set_shelfRootTransform)) ::UnityW<::UnityEngine::Transform>  shelfRootTransform;

/// @brief Field shelfSelectionText, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_shelfSelectionText, put=__cordl_internal_set_shelfSelectionText)) ::UnityW<::TMPro::TMP_Text>  shelfSelectionText;

/// @brief Field timeSinceLastHandleBroadcast, offset 0x238, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeSinceLastHandleBroadcast, put=__cordl_internal_set_timeSinceLastHandleBroadcast)) float_t  timeSinceLastHandleBroadcast;

/// @brief Field toolProgressionManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolProgressionManager, put=__cordl_internal_set_toolProgressionManager)) ::UnityW<::GlobalNamespace::GRToolProgressionManager>  toolProgressionManager;

/// @brief Field unresearchedItemMaterial, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_unresearchedItemMaterial, put=__cordl_internal_set_unresearchedItemMaterial)) ::UnityW<::UnityEngine::Material>  unresearchedItemMaterial;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method AttachEntityToMagnet_DockGoesToLocation, addr 0x58ce450, size 0x2d4, virtual false, abstract: false, final false
static inline void AttachEntityToMagnet_DockGoesToLocation(::UnityEngine::Transform*  magnet, ::UnityEngine::Transform*  entity, ::UnityEngine::Transform*  dock, ::UnityEngine::Vector3  magnetDockOffset) ;

/// @brief Method CanLocalPlayerPurchaseItem, addr 0x58cd9ac, size 0x124, virtual false, abstract: false, final false
inline bool CanLocalPlayerPurchaseItem(int32_t  shelf, int32_t  slotID) ;

/// @brief Method CardSwiped, addr 0x58ce218, size 0x4, virtual false, abstract: false, final false
inline void CardSwiped() ;

/// @brief Method ChangeShelfMovementState, addr 0x58ca208, size 0xa8, virtual false, abstract: false, final false
inline void ChangeShelfMovementState(::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState  newState) ;

/// @brief Method CheckActivePlayer, addr 0x58cdad0, size 0x174, virtual false, abstract: false, final false
inline bool CheckActivePlayer() ;

/// @brief Method ColorFromRGB32, addr 0x58cf060, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Color ColorFromRGB32(int32_t  r, int32_t  g, int32_t  b) ;

/// @brief Method DEBUGSetHackToolStation, addr 0x58ce44c, size 0x4, virtual false, abstract: false, final false
inline void DEBUGSetHackToolStation() ;

/// @brief Method DecomposeTRS, addr 0x58ce874, size 0x1b4, virtual false, abstract: false, final false
static inline void DecomposeTRS(::UnityEngine::Matrix4x4  m, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot, ::by_ref<::UnityEngine::Vector3>  scale) ;

/// @brief Method ExtractLossyScale, addr 0x58ce724, size 0x150, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ExtractLossyScale(::UnityEngine::Matrix4x4  m) ;

/// @brief Method HideOrShowTextBasedOnLocalPlayerDistance, addr 0x58ca53c, size 0x484, virtual false, abstract: false, final false
inline void HideOrShowTextBasedOnLocalPlayerDistance() ;

/// @brief Method Init, addr 0x58c9e5c, size 0x264, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GRToolProgressionManager*  progression, ::GlobalNamespace::GhostReactor*  reactor) ;

/// @brief Method InitLinkedEntity, addr 0x58c97b4, size 0x574, virtual false, abstract: false, final false
inline void InitLinkedEntity(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method InitPageSelectionWheel, addr 0x58ca0c0, size 0x148, virtual false, abstract: false, final false
inline void InitPageSelectionWheel() ;

/// @brief Method IsValidShelfItemIndex, addr 0x58cc5b0, size 0x12c, virtual false, abstract: false, final false
inline bool IsValidShelfItemIndex(int32_t  shelf, int32_t  idx) ;

static inline ::GlobalNamespace::GRToolUpgradePurchaseStationFull* New_ctor() ;

/// @brief Method OnDisable, addr 0x58c9df0, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x58c9d84, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLocalSelectionButtonPressed, addr 0x58cdcc0, size 0x158, virtual false, abstract: false, final false
inline void OnLocalSelectionButtonPressed(int32_t  index) ;

/// @brief Method OnLocalSelectionPageChange, addr 0x58ce18c, size 0x84, virtual false, abstract: false, final false
inline void OnLocalSelectionPageChange(int32_t  delta) ;

/// @brief Method OnShiftCreditChanged, addr 0x58ca530, size 0xc, virtual false, abstract: false, final false
inline void OnShiftCreditChanged(::StringW  targetMothershipId, int32_t  newShiftCredits) ;

/// @brief Method ProgressionUpdated, addr 0x58ceae0, size 0xc, virtual false, abstract: false, final false
inline void ProgressionUpdated() ;

/// @brief Method PurchaseButtonPressed, addr 0x58ce21c, size 0x58, virtual false, abstract: false, final false
inline void PurchaseButtonPressed() ;

/// @brief Method RequestActivePlayerToken, addr 0x58cdc44, size 0x74, virtual false, abstract: false, final false
inline void RequestActivePlayerToken() ;

/// @brief Method RequestPurchaseItem, addr 0x58ce274, size 0x1d8, virtual false, abstract: false, final false
inline void RequestPurchaseItem(int32_t  shelf, int32_t  item) ;

/// @brief Method SelectOption1, addr 0x58cdcb8, size 0x8, virtual false, abstract: false, final false
inline void SelectOption1() ;

/// @brief Method SelectOption2, addr 0x58cde18, size 0x8, virtual false, abstract: false, final false
inline void SelectOption2() ;

/// @brief Method SelectOption3, addr 0x58cde20, size 0x8, virtual false, abstract: false, final false
inline void SelectOption3() ;

/// @brief Method SelectOption4, addr 0x58cde28, size 0x8, virtual false, abstract: false, final false
inline void SelectOption4() ;

/// @brief Method SelectPageDown, addr 0x58ce184, size 0x8, virtual false, abstract: false, final false
inline void SelectPageDown() ;

/// @brief Method SelectPageUp, addr 0x58ce210, size 0x8, virtual false, abstract: false, final false
inline void SelectPageUp() ;

/// @brief Method SetActivePlayer, addr 0x58ca2b0, size 0x280, virtual false, abstract: false, final false
inline void SetActivePlayer(int32_t  actorNum) ;

/// @brief Method SetCurrentShelf, addr 0x58cc8c0, size 0x104, virtual false, abstract: false, final false
inline void SetCurrentShelf(int32_t  idx) ;

/// @brief Method SetHandleAndSelectionWheelPositionRemote, addr 0x58cea28, size 0xb8, virtual false, abstract: false, final false
inline void SetHandleAndSelectionWheelPositionRemote(int32_t  handlePos, int32_t  wheelPos) ;

/// @brief Method SetNextShelf, addr 0x58cc6dc, size 0xe8, virtual false, abstract: false, final false
inline void SetNextShelf(int32_t  idx) ;

/// @brief Method SetSelectedShelfAndItem, addr 0x58cde30, size 0x354, virtual false, abstract: false, final false
inline void SetSelectedShelfAndItem(int32_t  shelf, int32_t  item, bool  fromNetworkRPC) ;

/// @brief Method Tick, addr 0x58ca9c0, size 0x234, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method ToolPurchaseResponseLocal, addr 0x58cecf8, size 0x368, virtual false, abstract: false, final false
inline void ToolPurchaseResponseLocal(::GlobalNamespace::GRPlayer*  player, int32_t  shelf, int32_t  item, bool  success) ;

/// @brief Method TryPurchaseAuthority, addr 0x58ceaec, size 0x20c, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<bool,bool> TryPurchaseAuthority(::GlobalNamespace::GRPlayer*  player, int32_t  shelf, int32_t  item) ;

/// @brief Method UpdateActivePlayer, addr 0x58cabf4, size 0x20c, virtual false, abstract: false, final false
inline void UpdateActivePlayer() ;

/// @brief Method UpdateMagnet, addr 0x58cba44, size 0x450, virtual false, abstract: false, final false
inline void UpdateMagnet() ;

/// @brief Method UpdatePlayerCurrencyUI, addr 0x58cbf54, size 0x46c, virtual false, abstract: false, final false
inline void UpdatePlayerCurrencyUI() ;

/// @brief Method UpdatePurchaseButtonText, addr 0x58cc3c0, size 0x1f0, virtual false, abstract: false, final false
inline void UpdatePurchaseButtonText() ;

/// @brief Method UpdateSelectionLever, addr 0x58cae00, size 0x6f8, virtual false, abstract: false, final false
inline void UpdateSelectionLever() ;

/// @brief Method UpdateShelf, addr 0x58cb4f8, size 0x54c, virtual false, abstract: false, final false
inline void UpdateShelf() ;

/// @brief Method UpdateShelfDisplayElements, addr 0x58cbe94, size 0xc0, virtual false, abstract: false, final false
inline void UpdateShelfDisplayElements(int32_t  shelfID) ;

/// @brief Method UpdateShelfItemDisplayElements, addr 0x58cca78, size 0xaec, virtual false, abstract: false, final false
inline void UpdateShelfItemDisplayElements(int32_t  shelf, int32_t  slotID) ;

/// @brief Method UpdateShelfVisibility, addr 0x58cc9c4, size 0xb4, virtual false, abstract: false, final false
inline void UpdateShelfVisibility(int32_t  shelfID, bool  isVisible) ;

/// @brief Method UpdateSoundsForMovement, addr 0x58cc7c4, size 0xfc, virtual false, abstract: false, final false
inline void UpdateSoundsForMovement(::GlobalNamespace::GRSpringMovement*  movement) ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_angleOfLastHandleBroadcast() const;

constexpr float_t& __cordl_internal_get_angleOfLastHandleBroadcast() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSourceClang() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSourceClang() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSourceLooping() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSourceLooping() ;

constexpr float_t const& __cordl_internal_get_audioSourceLoopingVolume() const;

constexpr float_t& __cordl_internal_get_audioSourceLoopingVolume() ;

constexpr bool const& __cordl_internal_get_bGripLeftLastFrame() const;

constexpr bool& __cordl_internal_get_bGripLeftLastFrame() ;

constexpr bool const& __cordl_internal_get_bGripRightLastFrame() const;

constexpr bool& __cordl_internal_get_bGripRightLastFrame() ;

constexpr bool const& __cordl_internal_get_bIsGrippingLeft() const;

constexpr bool& __cordl_internal_get_bIsGrippingLeft() ;

constexpr bool const& __cordl_internal_get_bIsGrippingRight() const;

constexpr bool& __cordl_internal_get_bIsGrippingRight() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_backlightLocked() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_backlightLocked() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_backlightPurchase() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_backlightPurchase() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_backlightResearch() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_backlightResearch() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionManager_ToolParts>* const& __cordl_internal_get_cachedRequiredPartsList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionManager_ToolParts>*& __cordl_internal_get_cachedRequiredPartsList() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorCanBuyCredits() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorCanBuyCredits() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorCanBuyJuice() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorCanBuyJuice() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorCantBuy() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorCantBuy() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorPurchaseButtonCanAfford() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorPurchaseButtonCanAfford() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorSelectedItem() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorSelectedItem() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorUnresearchedItem() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorUnresearchedItem() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorUnselectedItem() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorUnselectedItem() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorUnselectedUnresearchedItem() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorUnselectedUnresearchedItem() ;

constexpr int32_t const& __cordl_internal_get_currentActivePlayerActorNumber() const;

constexpr int32_t& __cordl_internal_get_currentActivePlayerActorNumber() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_currentMagnetEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_currentMagnetEntity() ;

constexpr int32_t const& __cordl_internal_get_currentMagnetEntityTypeId() const;

constexpr int32_t& __cordl_internal_get_currentMagnetEntityTypeId() ;

constexpr int32_t const& __cordl_internal_get_currentVisibleShelfIndex() const;

constexpr int32_t& __cordl_internal_get_currentVisibleShelfIndex() ;

constexpr bool const& __cordl_internal_get_currentlyShowingText() const;

constexpr bool& __cordl_internal_get_currentlyShowingText() ;

constexpr int32_t const& __cordl_internal_get_desiredMagnetEntityTypeId() const;

constexpr int32_t& __cordl_internal_get_desiredMagnetEntityTypeId() ;

constexpr bool const& __cordl_internal_get_disablePurchaseButton() const;

constexpr bool& __cordl_internal_get_disablePurchaseButton() ;

constexpr ::GlobalNamespace::GRSpringMovement* const& __cordl_internal_get_frontBackShelfMovement() const;

constexpr ::GlobalNamespace::GRSpringMovement*& __cordl_internal_get_frontBackShelfMovement() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationShelf>>* const& __cordl_internal_get_gameShelves() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationShelf>>*& __cordl_internal_get_gameShelves() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& __cordl_internal_get_grManager() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& __cordl_internal_get_grManager() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_interactAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_interactAudioSource() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_itemDescription() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_itemDescription() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_itemDescriptionAnnotation() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_itemDescriptionAnnotation() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_itemDescriptionName() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_itemDescriptionName() ;

constexpr float_t const& __cordl_internal_get_lastHandleAngle() const;

constexpr float_t& __cordl_internal_get_lastHandleAngle() ;

constexpr int32_t const& __cordl_internal_get_lastKnownLocalPlayerCredits() const;

constexpr int32_t& __cordl_internal_get_lastKnownLocalPlayerCredits() ;

constexpr int32_t const& __cordl_internal_get_lastKnownLocalPlayerJuice() const;

constexpr int32_t& __cordl_internal_get_lastKnownLocalPlayerJuice() ;

constexpr float_t const& __cordl_internal_get_lastRequestedActivePlayerTokenTime() const;

constexpr float_t& __cordl_internal_get_lastRequestedActivePlayerTokenTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_magnet() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_magnet() ;

constexpr ::GlobalNamespace::GRSpringMovement* const& __cordl_internal_get_magnetMovement() const;

constexpr ::GlobalNamespace::GRSpringMovement*& __cordl_internal_get_magnetMovement() ;

constexpr float_t const& __cordl_internal_get_maxHandleRange() const;

constexpr float_t& __cordl_internal_get_maxHandleRange() ;

constexpr float_t const& __cordl_internal_get_maxMagnetDistance() const;

constexpr float_t& __cordl_internal_get_maxMagnetDistance() ;

constexpr bool const& __cordl_internal_get_needsUIRefresh() const;

constexpr bool& __cordl_internal_get_needsUIRefresh() ;

constexpr int32_t const& __cordl_internal_get_nextVisibleShelfIndex() const;

constexpr int32_t& __cordl_internal_get_nextVisibleShelfIndex() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_pageSelectionHandle() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_pageSelectionHandle() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_pageSelectionLever() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_pageSelectionLever() ;

constexpr ::UnityW<::GlobalNamespace::GRSelectionWheel> const& __cordl_internal_get_pageSelectionWheel() const;

constexpr ::UnityW<::GlobalNamespace::GRSelectionWheel>& __cordl_internal_get_pageSelectionWheel() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerInfo() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerInfo() ;

constexpr float_t const& __cordl_internal_get_playerQueueTimeLimit() const;

constexpr float_t& __cordl_internal_get_playerQueueTimeLimit() ;

constexpr float_t const& __cordl_internal_get_prefabMagnetHeightOffset() const;

constexpr float_t& __cordl_internal_get_prefabMagnetHeightOffset() ;

constexpr float_t const& __cordl_internal_get_purchaseButtonCooldown() const;

constexpr float_t& __cordl_internal_get_purchaseButtonCooldown() ;

constexpr float_t const& __cordl_internal_get_purchaseButtonPressed() const;

constexpr float_t& __cordl_internal_get_purchaseButtonPressed() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_purchaseButtonText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_purchaseButtonText() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_purchaseFailed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_purchaseFailed() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_purchaseSucceded() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_purchaseSucceded() ;

constexpr float_t const& __cordl_internal_get_quantMult() const;

constexpr float_t& __cordl_internal_get_quantMult() ;

constexpr ::GlobalNamespace::GRSpringMovement* const& __cordl_internal_get_raiseLowerShelfMovement() const;

constexpr ::GlobalNamespace::GRSpringMovement*& __cordl_internal_get_raiseLowerShelfMovement() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr float_t const& __cordl_internal_get_requestActivePlayerTokenThrottleTime() const;

constexpr float_t& __cordl_internal_get_requestActivePlayerTokenThrottleTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ropeEnd() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ropeEnd() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ropeTop() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ropeTop() ;

constexpr ::UnityW<::GlobalNamespace::IDCardScanner> const& __cordl_internal_get_scanner() const;

constexpr ::UnityW<::GlobalNamespace::IDCardScanner>& __cordl_internal_get_scanner() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPhysicalButton> const& __cordl_internal_get_select1() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPhysicalButton>& __cordl_internal_get_select1() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPhysicalButton> const& __cordl_internal_get_select2() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPhysicalButton>& __cordl_internal_get_select2() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPhysicalButton> const& __cordl_internal_get_select3() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPhysicalButton>& __cordl_internal_get_select3() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPhysicalButton> const& __cordl_internal_get_select4() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPhysicalButton>& __cordl_internal_get_select4() ;

constexpr int32_t const& __cordl_internal_get_selectedItem() const;

constexpr int32_t& __cordl_internal_get_selectedItem() ;

constexpr int32_t const& __cordl_internal_get_selectedShelf() const;

constexpr int32_t& __cordl_internal_get_selectedShelf() ;

constexpr float_t const& __cordl_internal_get_selectionWheelAngleOfLastBroadcast() const;

constexpr float_t& __cordl_internal_get_selectionWheelAngleOfLastBroadcast() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_shelfBackTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_shelfBackTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_shelfLowerTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_shelfLowerTransform() ;

constexpr ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState const& __cordl_internal_get_shelfMovementState() const;

constexpr ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState& __cordl_internal_get_shelfMovementState() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_shelfRootTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_shelfRootTransform() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_shelfSelectionText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_shelfSelectionText() ;

constexpr float_t const& __cordl_internal_get_timeSinceLastHandleBroadcast() const;

constexpr float_t& __cordl_internal_get_timeSinceLastHandleBroadcast() ;

constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager> const& __cordl_internal_get_toolProgressionManager() const;

constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager>& __cordl_internal_get_toolProgressionManager() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_unresearchedItemMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_unresearchedItemMaterial() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_angleOfLastHandleBroadcast(float_t  value) ;

constexpr void __cordl_internal_set_audioSourceClang(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_audioSourceLooping(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_audioSourceLoopingVolume(float_t  value) ;

constexpr void __cordl_internal_set_bGripLeftLastFrame(bool  value) ;

constexpr void __cordl_internal_set_bGripRightLastFrame(bool  value) ;

constexpr void __cordl_internal_set_bIsGrippingLeft(bool  value) ;

constexpr void __cordl_internal_set_bIsGrippingRight(bool  value) ;

constexpr void __cordl_internal_set_backlightLocked(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_backlightPurchase(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_backlightResearch(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_cachedRequiredPartsList(::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionManager_ToolParts>*  value) ;

constexpr void __cordl_internal_set_colorCanBuyCredits(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorCanBuyJuice(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorCantBuy(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorPurchaseButtonCanAfford(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorSelectedItem(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorUnresearchedItem(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorUnselectedItem(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorUnselectedUnresearchedItem(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_currentActivePlayerActorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_currentMagnetEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_currentMagnetEntityTypeId(int32_t  value) ;

constexpr void __cordl_internal_set_currentVisibleShelfIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentlyShowingText(bool  value) ;

constexpr void __cordl_internal_set_desiredMagnetEntityTypeId(int32_t  value) ;

constexpr void __cordl_internal_set_disablePurchaseButton(bool  value) ;

constexpr void __cordl_internal_set_frontBackShelfMovement(::GlobalNamespace::GRSpringMovement*  value) ;

constexpr void __cordl_internal_set_gameShelves(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationShelf>>*  value) ;

constexpr void __cordl_internal_set_grManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value) ;

constexpr void __cordl_internal_set_interactAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_itemDescription(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_itemDescriptionAnnotation(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_itemDescriptionName(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_lastHandleAngle(float_t  value) ;

constexpr void __cordl_internal_set_lastKnownLocalPlayerCredits(int32_t  value) ;

constexpr void __cordl_internal_set_lastKnownLocalPlayerJuice(int32_t  value) ;

constexpr void __cordl_internal_set_lastRequestedActivePlayerTokenTime(float_t  value) ;

constexpr void __cordl_internal_set_magnet(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_magnetMovement(::GlobalNamespace::GRSpringMovement*  value) ;

constexpr void __cordl_internal_set_maxHandleRange(float_t  value) ;

constexpr void __cordl_internal_set_maxMagnetDistance(float_t  value) ;

constexpr void __cordl_internal_set_needsUIRefresh(bool  value) ;

constexpr void __cordl_internal_set_nextVisibleShelfIndex(int32_t  value) ;

constexpr void __cordl_internal_set_pageSelectionHandle(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_pageSelectionLever(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_pageSelectionWheel(::UnityW<::GlobalNamespace::GRSelectionWheel>  value) ;

constexpr void __cordl_internal_set_playerInfo(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_playerQueueTimeLimit(float_t  value) ;

constexpr void __cordl_internal_set_prefabMagnetHeightOffset(float_t  value) ;

constexpr void __cordl_internal_set_purchaseButtonCooldown(float_t  value) ;

constexpr void __cordl_internal_set_purchaseButtonPressed(float_t  value) ;

constexpr void __cordl_internal_set_purchaseButtonText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_purchaseFailed(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_purchaseSucceded(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_quantMult(float_t  value) ;

constexpr void __cordl_internal_set_raiseLowerShelfMovement(::GlobalNamespace::GRSpringMovement*  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_requestActivePlayerTokenThrottleTime(float_t  value) ;

constexpr void __cordl_internal_set_ropeEnd(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_ropeTop(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_scanner(::UnityW<::GlobalNamespace::IDCardScanner>  value) ;

constexpr void __cordl_internal_set_select1(::UnityW<::GlobalNamespace::GorillaPhysicalButton>  value) ;

constexpr void __cordl_internal_set_select2(::UnityW<::GlobalNamespace::GorillaPhysicalButton>  value) ;

constexpr void __cordl_internal_set_select3(::UnityW<::GlobalNamespace::GorillaPhysicalButton>  value) ;

constexpr void __cordl_internal_set_select4(::UnityW<::GlobalNamespace::GorillaPhysicalButton>  value) ;

constexpr void __cordl_internal_set_selectedItem(int32_t  value) ;

constexpr void __cordl_internal_set_selectedShelf(int32_t  value) ;

constexpr void __cordl_internal_set_selectionWheelAngleOfLastBroadcast(float_t  value) ;

constexpr void __cordl_internal_set_shelfBackTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_shelfLowerTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_shelfMovementState(::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState  value) ;

constexpr void __cordl_internal_set_shelfRootTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_shelfSelectionText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_timeSinceLastHandleBroadcast(float_t  value) ;

constexpr void __cordl_internal_set_toolProgressionManager(::UnityW<::GlobalNamespace::GRToolProgressionManager>  value) ;

constexpr void __cordl_internal_set_unresearchedItemMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x58cf088, size 0x140, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SelectedItem, addr 0x58c9d6c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SelectedItem() ;

/// @brief Method get_SelectedShelf, addr 0x58c9d64, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SelectedShelf() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x58c9d74, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x58c9d7c, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolUpgradePurchaseStationFull() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolUpgradePurchaseStationFull", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolUpgradePurchaseStationFull(GRToolUpgradePurchaseStationFull && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolUpgradePurchaseStationFull", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolUpgradePurchaseStationFull(GRToolUpgradePurchaseStationFull const& ) = delete;

/// @brief Field ShelfIndex_None offset 0xffffffff size 0x4
static constexpr int32_t  ShelfIndex_None{static_cast<int32_t>(0xffffffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2090};

/// @brief Field reactor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

/// @brief Field grManager, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorManager>  ___grManager;

/// @brief Field gameShelves, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationShelf>>*  ___gameShelves;

/// @brief Field toolProgressionManager, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRToolProgressionManager>  ___toolProgressionManager;

/// @brief Field colorPurchaseButtonCanAfford, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorPurchaseButtonCanAfford;

/// @brief Field colorCanBuyCredits, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorCanBuyCredits;

/// @brief Field colorCanBuyJuice, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorCanBuyJuice;

/// @brief Field colorCantBuy, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorCantBuy;

/// @brief Field colorSelectedItem, offset: 0x80, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorSelectedItem;

/// @brief Field colorUnselectedItem, offset: 0x90, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorUnselectedItem;

/// @brief Field colorUnresearchedItem, offset: 0xa0, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorUnresearchedItem;

/// @brief Field colorUnselectedUnresearchedItem, offset: 0xb0, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorUnselectedUnresearchedItem;

/// @brief Field selectedShelf, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___selectedShelf;

/// @brief Field selectedItem, offset: 0xc4, size: 0x4, def value: None
 int32_t  ___selectedItem;

/// @brief Field currentActivePlayerActorNumber, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___currentActivePlayerActorNumber;

/// @brief Field shelfMovementState, offset: 0xcc, size: 0x4, def value: None
 ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState  ___shelfMovementState;

/// @brief Field currentVisibleShelfIndex, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___currentVisibleShelfIndex;

/// @brief Field nextVisibleShelfIndex, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___nextVisibleShelfIndex;

/// @brief Field frontBackShelfMovement, offset: 0xd8, size: 0x8, def value: None
 ::GlobalNamespace::GRSpringMovement*  ___frontBackShelfMovement;

/// @brief Field raiseLowerShelfMovement, offset: 0xe0, size: 0x8, def value: None
 ::GlobalNamespace::GRSpringMovement*  ___raiseLowerShelfMovement;

/// @brief Field shelfRootTransform, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___shelfRootTransform;

/// @brief Field shelfBackTransform, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___shelfBackTransform;

/// @brief Field shelfLowerTransform, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___shelfLowerTransform;

/// @brief Field shelfSelectionText, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___shelfSelectionText;

/// @brief Field playerInfo, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerInfo;

/// @brief Field itemDescription, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___itemDescription;

/// @brief Field itemDescriptionName, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___itemDescriptionName;

/// @brief Field itemDescriptionAnnotation, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___itemDescriptionAnnotation;

/// @brief Field purchaseButtonText, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___purchaseButtonText;

/// @brief Field select1, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPhysicalButton>  ___select1;

/// @brief Field select2, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPhysicalButton>  ___select2;

/// @brief Field select3, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPhysicalButton>  ___select3;

/// @brief Field select4, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPhysicalButton>  ___select4;

/// @brief Field audioSourceLooping, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSourceLooping;

/// @brief Field audioSourceClang, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSourceClang;

/// @brief Field audioSourceLoopingVolume, offset: 0x160, size: 0x4, def value: None
 float_t  ___audioSourceLoopingVolume;

/// @brief Field unresearchedItemMaterial, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___unresearchedItemMaterial;

/// @brief Field interactAudioSource, offset: 0x170, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___interactAudioSource;

/// @brief Field scanner, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::IDCardScanner>  ___scanner;

/// @brief Field purchaseSucceded, offset: 0x180, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___purchaseSucceded;

/// @brief Field purchaseFailed, offset: 0x188, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___purchaseFailed;

/// @brief Field backlightPurchase, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___backlightPurchase;

/// @brief Field backlightResearch, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___backlightResearch;

/// @brief Field backlightLocked, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___backlightLocked;

/// @brief Field lastKnownLocalPlayerCredits, offset: 0x1a8, size: 0x4, def value: None
 int32_t  ___lastKnownLocalPlayerCredits;

/// @brief Field lastKnownLocalPlayerJuice, offset: 0x1ac, size: 0x4, def value: None
 int32_t  ___lastKnownLocalPlayerJuice;

/// @brief Field needsUIRefresh, offset: 0x1b0, size: 0x1, def value: None
 bool  ___needsUIRefresh;

/// @brief Field ropeTop, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___ropeTop;

/// @brief Field ropeEnd, offset: 0x1c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___ropeEnd;

/// @brief Field magnet, offset: 0x1c8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___magnet;

/// @brief Field currentMagnetEntity, offset: 0x1d0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___currentMagnetEntity;

/// @brief Field currentMagnetEntityTypeId, offset: 0x1d8, size: 0x4, def value: None
 int32_t  ___currentMagnetEntityTypeId;

/// @brief Field desiredMagnetEntityTypeId, offset: 0x1dc, size: 0x4, def value: None
 int32_t  ___desiredMagnetEntityTypeId;

/// @brief Field prefabMagnetHeightOffset, offset: 0x1e0, size: 0x4, def value: None
 float_t  ___prefabMagnetHeightOffset;

/// @brief Field maxMagnetDistance, offset: 0x1e4, size: 0x4, def value: None
 float_t  ___maxMagnetDistance;

/// @brief Field magnetMovement, offset: 0x1e8, size: 0x8, def value: None
 ::GlobalNamespace::GRSpringMovement*  ___magnetMovement;

/// @brief Field pageSelectionWheel, offset: 0x1f0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRSelectionWheel>  ___pageSelectionWheel;

/// @brief Field pageSelectionHandle, offset: 0x1f8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___pageSelectionHandle;

/// @brief Field pageSelectionLever, offset: 0x200, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___pageSelectionLever;

/// @brief Field playerQueueTimeLimit, offset: 0x208, size: 0x4, def value: None
 float_t  ___playerQueueTimeLimit;

/// @brief Field disablePurchaseButton, offset: 0x20c, size: 0x1, def value: None
 bool  ___disablePurchaseButton;

/// @brief Field purchaseButtonCooldown, offset: 0x210, size: 0x4, def value: None
 float_t  ___purchaseButtonCooldown;

/// @brief Field purchaseButtonPressed, offset: 0x214, size: 0x4, def value: None
 float_t  ___purchaseButtonPressed;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x218, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// @brief Field currentlyShowingText, offset: 0x219, size: 0x1, def value: None
 bool  ___currentlyShowingText;

/// @brief Field cachedRequiredPartsList, offset: 0x220, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionManager_ToolParts>*  ___cachedRequiredPartsList;

/// @brief Field lastRequestedActivePlayerTokenTime, offset: 0x228, size: 0x4, def value: None
 float_t  ___lastRequestedActivePlayerTokenTime;

/// @brief Field requestActivePlayerTokenThrottleTime, offset: 0x22c, size: 0x4, def value: None
 float_t  ___requestActivePlayerTokenThrottleTime;

/// @brief Field bIsGrippingLeft, offset: 0x230, size: 0x1, def value: None
 bool  ___bIsGrippingLeft;

/// @brief Field bIsGrippingRight, offset: 0x231, size: 0x1, def value: None
 bool  ___bIsGrippingRight;

/// @brief Field bGripLeftLastFrame, offset: 0x232, size: 0x1, def value: None
 bool  ___bGripLeftLastFrame;

/// @brief Field bGripRightLastFrame, offset: 0x233, size: 0x1, def value: None
 bool  ___bGripRightLastFrame;

/// @brief Field maxHandleRange, offset: 0x234, size: 0x4, def value: None
 float_t  ___maxHandleRange;

/// @brief Field timeSinceLastHandleBroadcast, offset: 0x238, size: 0x4, def value: None
 float_t  ___timeSinceLastHandleBroadcast;

/// @brief Field angleOfLastHandleBroadcast, offset: 0x23c, size: 0x4, def value: None
 float_t  ___angleOfLastHandleBroadcast;

/// @brief Field selectionWheelAngleOfLastBroadcast, offset: 0x240, size: 0x4, def value: None
 float_t  ___selectionWheelAngleOfLastBroadcast;

/// @brief Field quantMult, offset: 0x244, size: 0x4, def value: None
 float_t  ___quantMult;

/// @brief Field lastHandleAngle, offset: 0x248, size: 0x4, def value: None
 float_t  ___lastHandleAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___reactor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___grManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___gameShelves) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___toolProgressionManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___colorPurchaseButtonCanAfford) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___colorCanBuyCredits) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___colorCanBuyJuice) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___colorCantBuy) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___colorSelectedItem) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___colorUnselectedItem) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___colorUnresearchedItem) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___colorUnselectedUnresearchedItem) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___selectedShelf) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___selectedItem) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___currentActivePlayerActorNumber) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___shelfMovementState) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___currentVisibleShelfIndex) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___nextVisibleShelfIndex) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___frontBackShelfMovement) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___raiseLowerShelfMovement) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___shelfRootTransform) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___shelfBackTransform) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___shelfLowerTransform) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___shelfSelectionText) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___playerInfo) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___itemDescription) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___itemDescriptionName) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___itemDescriptionAnnotation) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___purchaseButtonText) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___select1) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___select2) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___select3) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___select4) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___audioSourceLooping) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___audioSourceClang) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___audioSourceLoopingVolume) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___unresearchedItemMaterial) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___interactAudioSource) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___scanner) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___purchaseSucceded) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___purchaseFailed) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___backlightPurchase) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___backlightResearch) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___backlightLocked) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___lastKnownLocalPlayerCredits) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___lastKnownLocalPlayerJuice) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___needsUIRefresh) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___ropeTop) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___ropeEnd) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___magnet) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___currentMagnetEntity) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___currentMagnetEntityTypeId) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___desiredMagnetEntityTypeId) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___prefabMagnetHeightOffset) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___maxMagnetDistance) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___magnetMovement) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___pageSelectionWheel) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___pageSelectionHandle) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___pageSelectionLever) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___playerQueueTimeLimit) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___disablePurchaseButton) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___purchaseButtonCooldown) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___purchaseButtonPressed) == 0x214, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ____TickRunning_k__BackingField) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___currentlyShowingText) == 0x219, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___cachedRequiredPartsList) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___lastRequestedActivePlayerTokenTime) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___requestActivePlayerTokenThrottleTime) == 0x22c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___bIsGrippingLeft) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___bIsGrippingRight) == 0x231, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___bGripLeftLastFrame) == 0x232, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___bGripRightLastFrame) == 0x233, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___maxHandleRange) == 0x234, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___timeSinceLastHandleBroadcast) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___angleOfLastHandleBroadcast) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___selectionWheelAngleOfLastBroadcast) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___quantMult) == 0x244, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationFull, ___lastHandleAngle) == 0x248, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolUpgradePurchaseStationFull) == 0x250, "Size mismatch!");

} // namespace end def GlobalNamespace
