#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderSetManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderSetManager_BuilderSetStoreItem_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderSetManager)
namespace GlobalNamespace {
class BuilderPieceSet_BuilderDisplayGroup;
}
namespace GlobalNamespace {
class BuilderPieceSet;
}
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
struct BuilderSetManager_BuilderPieceSetInfo;
}
namespace GlobalNamespace {
struct BuilderSetManager_BuilderSetStoreItem;
}
namespace GlobalNamespace {
class BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72;
}
namespace GlobalNamespace {
class BuilderSetManager__MonitorTime_d__50;
}
namespace GlobalNamespace {
class BuilderSetManager___c__DisplayClass63_0;
}
namespace GlobalNamespace {
class BuilderSetManager___c__DisplayClass69_0;
}
namespace GlobalNamespace {
class BuilderSetManager___c__DisplayClass70_0;
}
namespace GlobalNamespace {
class BuilderSetManager___c__DisplayClass71_0;
}
namespace GlobalNamespace {
class BuilderSetManager___c__DisplayClass72_0;
}
namespace Photon::Realtime {
class Player;
}
namespace PlayFab::ClientModels {
class GetCatalogItemsResult;
}
namespace PlayFab::ClientModels {
class GetSharedGroupDataResult;
}
namespace PlayFab::ClientModels {
class GetUserInventoryResult;
}
namespace PlayFab::ClientModels {
class PurchaseItemResult;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderSetManager;
}
namespace GlobalNamespace {
class BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72;
}
namespace GlobalNamespace {
class BuilderSetManager__MonitorTime_d__50;
}
namespace GlobalNamespace {
class BuilderSetManager___c__DisplayClass63_0;
}
namespace GlobalNamespace {
class BuilderSetManager___c__DisplayClass69_0;
}
namespace GlobalNamespace {
class BuilderSetManager___c__DisplayClass70_0;
}
namespace GlobalNamespace {
class BuilderSetManager___c__DisplayClass71_0;
}
namespace GlobalNamespace {
class BuilderSetManager___c__DisplayClass72_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderSetManager*);
MARK_REF_T(::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72*);
MARK_REF_T(::GlobalNamespace::BuilderSetManager__MonitorTime_d__50*);
MARK_REF_T(::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0*);
MARK_REF_T(::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0*);
MARK_REF_T(::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0*);
MARK_REF_T(::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0*);
MARK_REF_T(::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderSetManager*, "", "BuilderSetManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72*, "", "BuilderSetManager/<CheckIfMyCosmeticsUpdated>d__72");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderSetManager__MonitorTime_d__50*, "", "BuilderSetManager/<MonitorTime>d__50");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0*, "", "BuilderSetManager/<>c__DisplayClass63_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0*, "", "BuilderSetManager/<>c__DisplayClass69_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0*, "", "BuilderSetManager/<>c__DisplayClass70_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0*, "", "BuilderSetManager/<>c__DisplayClass71_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0*, "", "BuilderSetManager/<>c__DisplayClass72_0");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderSetManager
class CORDL_TYPE BuilderSetManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BuilderPieceSetInfo = ::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo;

using BuilderSetStoreItem = ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem;

using _CheckIfMyCosmeticsUpdated_d__72 = ::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72;

using _MonitorTime_d__50 = ::GlobalNamespace::BuilderSetManager__MonitorTime_d__50;

using __c__DisplayClass63_0 = ::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0;

using __c__DisplayClass69_0 = ::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0;

using __c__DisplayClass70_0 = ::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0;

using __c__DisplayClass71_0 = ::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0;

using __c__DisplayClass72_0 = ::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0;

/// @brief Field OnLiveSetsUpdated, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLiveSetsUpdated, put=__cordl_internal_set_OnLiveSetsUpdated)) ::UnityEngine::Events::UnityEvent*  OnLiveSetsUpdated;

/// @brief Field OnOwnedSetsUpdated, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnOwnedSetsUpdated, put=__cordl_internal_set_OnOwnedSetsUpdated)) ::UnityEngine::Events::UnityEvent*  OnOwnedSetsUpdated;

 __declspec(property(get=get_StartPieceSets)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  StartPieceSets;

/// @brief Field _allPieceSets, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__allPieceSets, put=__cordl_internal_set__allPieceSets)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  _allPieceSets;

/// @brief Field _allStoreItems, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__allStoreItems, put=__cordl_internal_set__allStoreItems)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*  _allStoreItems;

/// @brief Field <hasInstance>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__hasInstance_k__BackingField, put=setStaticF__hasInstance_k__BackingField)) bool  _hasInstance_k__BackingField;

/// @brief Field _seasonalSetsForSale, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__seasonalSetsForSale, put=__cordl_internal_set__seasonalSetsForSale)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  _seasonalSetsForSale;

/// @brief Field _setIdToStoreItem, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__setIdToStoreItem, put=setStaticF__setIdToStoreItem)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*  _setIdToStoreItem;

/// @brief Field _setsAlwaysForSale, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__setsAlwaysForSale, put=__cordl_internal_set__setsAlwaysForSale)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  _setsAlwaysForSale;

/// @brief Field _starterPieceSets, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__starterPieceSets, put=__cordl_internal_set__starterPieceSets)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  _starterPieceSets;

/// @brief Field _unlockedPieceSets, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__unlockedPieceSets, put=__cordl_internal_set__unlockedPieceSets)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  _unlockedPieceSets;

/// @brief Field attempts, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_attempts, put=__cordl_internal_set_attempts)) int32_t  attempts;

/// @brief Field catalog, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_catalog, put=__cordl_internal_set_catalog)) ::StringW  catalog;

/// @brief Field concatAllSets, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_concatAllSets, put=setStaticF_concatAllSets)) ::StringW  concatAllSets;

/// @brief Field concatStarterSets, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_concatStarterSets, put=setStaticF_concatStarterSets)) ::StringW  concatStarterSets;

/// @brief Field currencyName, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_currencyName, put=__cordl_internal_set_currencyName)) ::StringW  currencyName;

/// @brief Field displayGroupMap, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayGroupMap, put=__cordl_internal_set_displayGroupMap)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  displayGroupMap;

/// @brief Field displayGroups, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayGroups, put=__cordl_internal_set_displayGroups)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*  displayGroups;

/// @brief Field foundCosmetic, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get_foundCosmetic, put=__cordl_internal_set_foundCosmetic)) bool  foundCosmetic;

/// @brief Field hasPieceDictionary, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasPieceDictionary, put=__cordl_internal_set_hasPieceDictionary)) bool  hasPieceDictionary;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::BuilderSetManager>  instance;

/// @brief Field liveDisplayGroups, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_liveDisplayGroups, put=__cordl_internal_set_liveDisplayGroups)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*  liveDisplayGroups;

/// @brief Field livePieceSets, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_livePieceSets, put=__cordl_internal_set_livePieceSets)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  livePieceSets;

/// @brief Field monitor, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_monitor, put=__cordl_internal_set_monitor)) ::UnityEngine::Coroutine*  monitor;

/// @brief Field pieceList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pieceList, put=setStaticF_pieceList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  pieceList;

/// @brief Field pieceSetInfoMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pieceSetInfoMap, put=setStaticF_pieceSetInfoMap)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  pieceSetInfoMap;

/// @brief Field pieceSetInfos, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pieceSetInfos, put=setStaticF_pieceSetInfos)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo>*  pieceSetInfos;

/// @brief Field pieceTypeToIndex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pieceTypeToIndex, put=setStaticF_pieceTypeToIndex)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  pieceTypeToIndex;

/// @brief Field pieceTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pieceTypes, put=setStaticF_pieceTypes)) ::System::Collections::Generic::List_1<int32_t>*  pieceTypes;

/// @brief Field pulledStoreItems, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_pulledStoreItems, put=__cordl_internal_set_pulledStoreItems)) bool  pulledStoreItems;

/// @brief Field scheduledPieceSets, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_scheduledPieceSets, put=__cordl_internal_set_scheduledPieceSets)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  scheduledPieceSets;

/// @brief Field tempStringArray, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempStringArray, put=__cordl_internal_set_tempStringArray)) ::ArrayW<::StringW>  tempStringArray;

/// @brief Method AddPieceToInfoMap, addr 0x57dc21c, size 0x3f8, virtual false, abstract: false, final false
inline void AddPieceToInfoMap(int32_t  pieceType, int32_t  pieceMaterial, int32_t  setID) ;

/// @brief Method Awake, addr 0x57da798, size 0x1d0, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(BuilderSetManager::<CheckIfMyCosmeticsUpdated>d__72))]
/// @brief Method CheckIfMyCosmeticsUpdated, addr 0x57de4a4, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CheckIfMyCosmeticsUpdated(::StringW  itemToBuyID) ;

/// @brief Method DoesAnyPlayerInRoomOwnPieceSet, addr 0x57dd750, size 0x2dc, virtual false, abstract: false, final false
inline bool DoesAnyPlayerInRoomOwnPieceSet(int32_t  setID) ;

/// @brief Method DoesPlayerOwnDisplayGroup, addr 0x57dd338, size 0xd8, virtual false, abstract: false, final false
inline bool DoesPlayerOwnDisplayGroup(::Photon::Realtime::Player*  player, int32_t  groupID) ;

/// @brief Method DoesPlayerOwnPieceSet, addr 0x57dd410, size 0x340, virtual false, abstract: false, final false
inline bool DoesPlayerOwnPieceSet(::Photon::Realtime::Player*  player, int32_t  setID) ;

/// @brief Method GetAllPieceSets, addr 0x57dd1cc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* GetAllPieceSets() ;

/// @brief Method GetAllSetsConcat, addr 0x57da584, size 0x214, virtual false, abstract: false, final false
inline ::StringW GetAllSetsConcat() ;

/// @brief Method GetDisplayGroupFromIndex, addr 0x57dd12c, size 0xa0, virtual false, abstract: false, final false
inline ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* GetDisplayGroupFromIndex(int32_t  groupID) ;

/// @brief Method GetGroupUniqueID, addr 0x57dc1a8, size 0x74, virtual false, abstract: false, final false
inline ::StringW GetGroupUniqueID(::StringW  setPlayfabID, int32_t  groupNumber) ;

/// @brief Method GetLiveDisplayGroups, addr 0x57dd1dc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>* GetLiveDisplayGroups() ;

/// @brief Method GetLivePieceSets, addr 0x57dd1d4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* GetLivePieceSets() ;

/// @brief Method GetPermanentSetsForSale, addr 0x57dd1ec, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* GetPermanentSetsForSale() ;

/// @brief Method GetPiecePrefab, addr 0x57dc614, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::BuilderPiece> GetPiecePrefab(int32_t  pieceType) ;

/// @brief Method GetPieceSetFromID, addr 0x57dd080, size 0xac, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::BuilderPieceSet> GetPieceSetFromID(int32_t  setID) ;

/// @brief Method GetSeasonalSetsForSale, addr 0x57dd1f4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* GetSeasonalSetsForSale() ;

/// @brief Method GetStarterSetsConcat, addr 0x57da370, size 0x214, virtual false, abstract: false, final false
inline ::StringW GetStarterSetsConcat() ;

/// @brief Method GetStoreItemFromSetID, addr 0x57dcf8c, size 0xf4, virtual false, abstract: false, final false
inline ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem GetStoreItemFromSetID(int32_t  setID) ;

/// @brief Method GetUnlockedPieceSets, addr 0x57dd1e4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* GetUnlockedPieceSets() ;

/// @brief Method Init, addr 0x57da968, size 0x12f8, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method InitPieceDictionary, addr 0x57dbccc, size 0x4dc, virtual false, abstract: false, final false
inline void InitPieceDictionary() ;

/// @brief Method IsItemIDBuilderItem, addr 0x57dc8a0, size 0x7c, virtual false, abstract: false, final false
static inline bool IsItemIDBuilderItem(::StringW  playfabID) ;

/// @brief Method IsPieceOwnedByRoom, addr 0x57dda2c, size 0x24c, virtual false, abstract: false, final false
inline bool IsPieceOwnedByRoom(int32_t  pieceType, int32_t  materialType) ;

/// @brief Method IsPieceOwnedLocally, addr 0x57ddc78, size 0x24c, virtual false, abstract: false, final false
inline bool IsPieceOwnedLocally(int32_t  pieceType, int32_t  materialType) ;

/// @brief Method IsPieceSetOwnedLocally, addr 0x57ddec4, size 0xe4, virtual false, abstract: false, final false
inline bool IsPieceSetOwnedLocally(int32_t  setID) ;

/// @brief Method IsSetSeasonal, addr 0x57dd1fc, size 0x134, virtual false, abstract: false, final false
inline bool IsSetSeasonal(::StringW  playfabID) ;

/// [IteratorStateMachine(typeof(BuilderSetManager::<MonitorTime>d__50))]
/// @brief Method MonitorTime, addr 0x57dbc60, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* MonitorTime() ;

static inline ::GlobalNamespace::BuilderSetManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x57dc84c, size 0x2c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57dc7c0, size 0x8c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGotInventoryItems, addr 0x57dc91c, size 0x670, virtual false, abstract: false, final false
inline void OnGotInventoryItems(::PlayFab::ClientModels::GetUserInventoryResult*  inventoryResult, ::PlayFab::ClientModels::GetCatalogItemsResult*  catalogResult) ;

/// @brief Method TryPurchaseItem, addr 0x57de198, size 0x304, virtual false, abstract: false, final false
inline void TryPurchaseItem(int32_t  setID, ::System::Action_1<bool>*  resultCallback) ;

/// @brief Method UnlockSet, addr 0x57ddfb0, size 0x1e0, virtual false, abstract: false, final false
inline void UnlockSet(int32_t  setID) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnLiveSetsUpdated() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnLiveSetsUpdated() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnOwnedSetsUpdated() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnOwnedSetsUpdated() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* const& __cordl_internal_get__allPieceSets() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*& __cordl_internal_get__allPieceSets() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>* const& __cordl_internal_get__allStoreItems() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*& __cordl_internal_get__allStoreItems() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* const& __cordl_internal_get__seasonalSetsForSale() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*& __cordl_internal_get__seasonalSetsForSale() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* const& __cordl_internal_get__setsAlwaysForSale() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*& __cordl_internal_get__setsAlwaysForSale() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* const& __cordl_internal_get__starterPieceSets() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*& __cordl_internal_get__starterPieceSets() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* const& __cordl_internal_get__unlockedPieceSets() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*& __cordl_internal_get__unlockedPieceSets() ;

constexpr int32_t const& __cordl_internal_get_attempts() const;

constexpr int32_t& __cordl_internal_get_attempts() ;

constexpr ::StringW const& __cordl_internal_get_catalog() const;

constexpr ::StringW& __cordl_internal_get_catalog() ;

constexpr ::StringW const& __cordl_internal_get_currencyName() const;

constexpr ::StringW& __cordl_internal_get_currencyName() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_displayGroupMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_displayGroupMap() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>* const& __cordl_internal_get_displayGroups() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*& __cordl_internal_get_displayGroups() ;

constexpr bool const& __cordl_internal_get_foundCosmetic() const;

constexpr bool& __cordl_internal_get_foundCosmetic() ;

constexpr bool const& __cordl_internal_get_hasPieceDictionary() const;

constexpr bool& __cordl_internal_get_hasPieceDictionary() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>* const& __cordl_internal_get_liveDisplayGroups() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*& __cordl_internal_get_liveDisplayGroups() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* const& __cordl_internal_get_livePieceSets() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*& __cordl_internal_get_livePieceSets() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_monitor() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_monitor() ;

constexpr bool const& __cordl_internal_get_pulledStoreItems() const;

constexpr bool& __cordl_internal_get_pulledStoreItems() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* const& __cordl_internal_get_scheduledPieceSets() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*& __cordl_internal_get_scheduledPieceSets() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_tempStringArray() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_tempStringArray() ;

constexpr void __cordl_internal_set_OnLiveSetsUpdated(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnOwnedSetsUpdated(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__allPieceSets(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  value) ;

constexpr void __cordl_internal_set__allStoreItems(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*  value) ;

constexpr void __cordl_internal_set__seasonalSetsForSale(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  value) ;

constexpr void __cordl_internal_set__setsAlwaysForSale(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  value) ;

constexpr void __cordl_internal_set__starterPieceSets(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  value) ;

constexpr void __cordl_internal_set__unlockedPieceSets(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  value) ;

constexpr void __cordl_internal_set_attempts(int32_t  value) ;

constexpr void __cordl_internal_set_catalog(::StringW  value) ;

constexpr void __cordl_internal_set_currencyName(::StringW  value) ;

constexpr void __cordl_internal_set_displayGroupMap(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_displayGroups(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*  value) ;

constexpr void __cordl_internal_set_foundCosmetic(bool  value) ;

constexpr void __cordl_internal_set_hasPieceDictionary(bool  value) ;

constexpr void __cordl_internal_set_liveDisplayGroups(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*  value) ;

constexpr void __cordl_internal_set_livePieceSets(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  value) ;

constexpr void __cordl_internal_set_monitor(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_pulledStoreItems(bool  value) ;

constexpr void __cordl_internal_set_scheduledPieceSets(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  value) ;

constexpr void __cordl_internal_set_tempStringArray(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x57de554, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__hasInstance_k__BackingField() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>* getStaticF__setIdToStoreItem() ;

static inline ::StringW getStaticF_concatAllSets() ;

static inline ::StringW getStaticF_concatStarterSets() ;

static inline ::UnityW<::GlobalNamespace::BuilderSetManager> getStaticF_instance() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* getStaticF_pieceList() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* getStaticF_pieceSetInfoMap() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo>* getStaticF_pieceSetInfos() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* getStaticF_pieceTypeToIndex() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_pieceTypes() ;

/// @brief Method get_StartPieceSets, addr 0x57da2b0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* get_StartPieceSets() ;

/// [CompilerGenerated]
/// @brief Method get_hasInstance, addr 0x57da2b8, size 0x58, virtual false, abstract: false, final false
static inline bool get_hasInstance() ;

static inline void setStaticF__hasInstance_k__BackingField(bool  value) ;

static inline void setStaticF__setIdToStoreItem(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*  value) ;

static inline void setStaticF_concatAllSets(::StringW  value) ;

static inline void setStaticF_concatStarterSets(::StringW  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::BuilderSetManager>  value) ;

static inline void setStaticF_pieceList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value) ;

static inline void setStaticF_pieceSetInfoMap(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

static inline void setStaticF_pieceSetInfos(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo>*  value) ;

static inline void setStaticF_pieceTypeToIndex(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

static inline void setStaticF_pieceTypes(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_hasInstance, addr 0x57da310, size 0x60, virtual false, abstract: false, final false
static inline void set_hasInstance(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderSetManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderSetManager(BuilderSetManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderSetManager(BuilderSetManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1643};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[GT/MonkeBlocks/BuilderSetManager]  ERROR!!!  "};

/// @brief Field preErrBeta offset 0xffffffff size 0x8
static constexpr ::ConstString  preErrBeta{u"[GT/MonkeBlocks/BuilderSetManager]  ERROR!!!  (beta only log)  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[GT/MonkeBlocks/BuilderSetManager]  "};

/// [SerializeField]
/// @brief Field _allPieceSets, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  ____allPieceSets;

/// [SerializeField]
/// @brief Field _starterPieceSets, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  ____starterPieceSets;

/// [SerializeField]
/// @brief Field _setsAlwaysForSale, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  ____setsAlwaysForSale;

/// [SerializeField]
/// @brief Field _seasonalSetsForSale, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  ____seasonalSetsForSale;

/// @brief Field livePieceSets, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  ___livePieceSets;

/// @brief Field scheduledPieceSets, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  ___scheduledPieceSets;

/// @brief Field liveDisplayGroups, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*  ___liveDisplayGroups;

/// @brief Field monitor, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___monitor;

/// @brief Field _allStoreItems, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*  ____allStoreItems;

/// @brief Field _unlockedPieceSets, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  ____unlockedPieceSets;

/// @brief Field displayGroups, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*  ___displayGroups;

/// @brief Field displayGroupMap, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___displayGroupMap;

/// [HideInInspector]
/// @brief Field catalog, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___catalog;

/// [HideInInspector]
/// @brief Field currencyName, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___currencyName;

/// @brief Field tempStringArray, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___tempStringArray;

/// [HideInInspector]
/// @brief Field OnLiveSetsUpdated, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnLiveSetsUpdated;

/// [HideInInspector]
/// @brief Field OnOwnedSetsUpdated, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnOwnedSetsUpdated;

/// [HideInInspector]
/// @brief Field pulledStoreItems, offset: 0xa8, size: 0x1, def value: None
 bool  ___pulledStoreItems;

/// @brief Field foundCosmetic, offset: 0xa9, size: 0x1, def value: None
 bool  ___foundCosmetic;

/// @brief Field attempts, offset: 0xac, size: 0x4, def value: None
 int32_t  ___attempts;

/// @brief Field hasPieceDictionary, offset: 0xb0, size: 0x1, def value: None
 bool  ___hasPieceDictionary;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ____allPieceSets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ____starterPieceSets) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ____setsAlwaysForSale) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ____seasonalSetsForSale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ___livePieceSets) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ___scheduledPieceSets) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ___liveDisplayGroups) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ___monitor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ____allStoreItems) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ____unlockedPieceSets) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ___displayGroups) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ___displayGroupMap) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ___catalog) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ___currencyName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ___tempStringArray) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ___OnLiveSetsUpdated) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ___OnOwnedSetsUpdated) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ___pulledStoreItems) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ___foundCosmetic) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ___attempts) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager, ___hasPieceDictionary) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderSetManager) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderSetManager/<MonitorTime>d__50
class CORDL_TYPE BuilderSetManager__MonitorTime_d__50 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::BuilderSetManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x57df224, size 0x538, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::BuilderSetManager__MonitorTime_d__50* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x57df75c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x57df764, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x57df79c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x57df220, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::BuilderSetManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::BuilderSetManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BuilderSetManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x57dc878, size 0x28, virtual false, abstract: false, final false
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
constexpr BuilderSetManager__MonitorTime_d__50() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetManager__MonitorTime_d__50", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderSetManager__MonitorTime_d__50(BuilderSetManager__MonitorTime_d__50 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetManager__MonitorTime_d__50", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderSetManager__MonitorTime_d__50(BuilderSetManager__MonitorTime_d__50 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1642};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderSetManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderSetManager__MonitorTime_d__50, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager__MonitorTime_d__50, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager__MonitorTime_d__50, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderSetManager__MonitorTime_d__50) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderSetManager/<CheckIfMyCosmeticsUpdated>d__72
class CORDL_TYPE BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::BuilderSetManager>  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0*  __8__1;

/// @brief Field itemToBuyID, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemToBuyID, put=__cordl_internal_set_itemToBuyID)) ::StringW  itemToBuyID;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x57dedd8, size 0x400, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x57df1d8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x57df1e0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x57df218, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x57dedd4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::BuilderSetManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::BuilderSetManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0*& __cordl_internal_get___8__1() ;

constexpr ::StringW const& __cordl_internal_get_itemToBuyID() const;

constexpr ::StringW& __cordl_internal_get_itemToBuyID() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BuilderSetManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0*  value) ;

constexpr void __cordl_internal_set_itemToBuyID(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x57de52c, size 0x28, virtual false, abstract: false, final false
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
constexpr BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72(BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72(BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1641};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderSetManager>  _____4__this;

/// @brief Field itemToBuyID, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___itemToBuyID;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72, ___itemToBuyID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72, _____8__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderSetManager/<>c__DisplayClass72_0
class CORDL_TYPE BuilderSetManager___c__DisplayClass72_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::BuilderSetManager>  __4__this;

/// @brief Field itemToBuyID, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemToBuyID, put=__cordl_internal_set_itemToBuyID)) ::StringW  itemToBuyID;

static inline ::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0* New_ctor() ;

/// @brief Method <CheckIfMyCosmeticsUpdated>b__0, addr 0x57dead8, size 0x270, virtual false, abstract: false, final false
inline void _CheckIfMyCosmeticsUpdated_b__0(::PlayFab::ClientModels::GetSharedGroupDataResult*  result) ;

/// @brief Method <CheckIfMyCosmeticsUpdated>b__1, addr 0x57ded48, size 0x8c, virtual false, abstract: false, final false
inline void _CheckIfMyCosmeticsUpdated_b__1(::PlayFab::PlayFabError*  error) ;

constexpr ::UnityW<::GlobalNamespace::BuilderSetManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::BuilderSetManager>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_itemToBuyID() const;

constexpr ::StringW& __cordl_internal_get_itemToBuyID() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BuilderSetManager>  value) ;

constexpr void __cordl_internal_set_itemToBuyID(::StringW  value) ;

/// @brief Method .ctor, addr 0x57dead0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderSetManager___c__DisplayClass72_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetManager___c__DisplayClass72_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderSetManager___c__DisplayClass72_0(BuilderSetManager___c__DisplayClass72_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetManager___c__DisplayClass72_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderSetManager___c__DisplayClass72_0(BuilderSetManager___c__DisplayClass72_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1640};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderSetManager>  _____4__this;

/// @brief Field itemToBuyID, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___itemToBuyID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0, ___itemToBuyID) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies BuilderSetManager::BuilderSetStoreItem, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderSetManager/<>c__DisplayClass71_0
class CORDL_TYPE BuilderSetManager___c__DisplayClass71_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::BuilderSetManager>  __4__this;

/// @brief Field resultCallback, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultCallback, put=__cordl_internal_set_resultCallback)) ::System::Action_1<bool>*  resultCallback;

/// @brief Field setID, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_setID, put=__cordl_internal_set_setID)) int32_t  setID;

/// @brief Field storeItem, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_storeItem, put=__cordl_internal_set_storeItem)) ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem  storeItem;

static inline ::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0* New_ctor() ;

/// @brief Method <TryPurchaseItem>b__0, addr 0x57de654, size 0x310, virtual false, abstract: false, final false
inline void _TryPurchaseItem_b__0(::PlayFab::ClientModels::PurchaseItemResult*  result) ;

/// @brief Method <TryPurchaseItem>b__1, addr 0x57de964, size 0x16c, virtual false, abstract: false, final false
inline void _TryPurchaseItem_b__1(::PlayFab::PlayFabError*  error) ;

constexpr ::UnityW<::GlobalNamespace::BuilderSetManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::BuilderSetManager>& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_resultCallback() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_resultCallback() ;

constexpr int32_t const& __cordl_internal_get_setID() const;

constexpr int32_t& __cordl_internal_get_setID() ;

constexpr ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem const& __cordl_internal_get_storeItem() const;

constexpr ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem& __cordl_internal_get_storeItem() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BuilderSetManager>  value) ;

constexpr void __cordl_internal_set_resultCallback(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_setID(int32_t  value) ;

constexpr void __cordl_internal_set_storeItem(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem  value) ;

/// @brief Method .ctor, addr 0x57de49c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderSetManager___c__DisplayClass71_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetManager___c__DisplayClass71_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderSetManager___c__DisplayClass71_0(BuilderSetManager___c__DisplayClass71_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetManager___c__DisplayClass71_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderSetManager___c__DisplayClass71_0(BuilderSetManager___c__DisplayClass71_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1639};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderSetManager>  _____4__this;

/// @brief Field storeItem, offset: 0x18, size: 0x38, def value: None
 ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem  ___storeItem;

/// @brief Field resultCallback, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___resultCallback;

/// @brief Field setID, offset: 0x58, size: 0x4, def value: None
 int32_t  ___setID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0, ___storeItem) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0, ___resultCallback) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0, ___setID) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderSetManager/<>c__DisplayClass70_0
class CORDL_TYPE BuilderSetManager___c__DisplayClass70_0 : public ::System::Object {
public:
// Declarations
/// @brief Field setID, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_setID, put=__cordl_internal_set_setID)) int32_t  setID;

static inline ::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0* New_ctor() ;

/// @brief Method <UnlockSet>b__0, addr 0x57de628, size 0x2c, virtual false, abstract: false, final false
inline bool _UnlockSet_b__0(::GlobalNamespace::BuilderPieceSet*  x) ;

constexpr int32_t const& __cordl_internal_get_setID() const;

constexpr int32_t& __cordl_internal_get_setID() ;

constexpr void __cordl_internal_set_setID(int32_t  value) ;

/// @brief Method .ctor, addr 0x57de190, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderSetManager___c__DisplayClass70_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetManager___c__DisplayClass70_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderSetManager___c__DisplayClass70_0(BuilderSetManager___c__DisplayClass70_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetManager___c__DisplayClass70_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderSetManager___c__DisplayClass70_0(BuilderSetManager___c__DisplayClass70_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1638};

/// @brief Field setID, offset: 0x10, size: 0x4, def value: None
 int32_t  ___setID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0, ___setID) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderSetManager/<>c__DisplayClass69_0
class CORDL_TYPE BuilderSetManager___c__DisplayClass69_0 : public ::System::Object {
public:
// Declarations
/// @brief Field setID, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_setID, put=__cordl_internal_set_setID)) int32_t  setID;

static inline ::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0* New_ctor() ;

/// @brief Method <IsPieceSetOwnedLocally>b__0, addr 0x57de5fc, size 0x2c, virtual false, abstract: false, final false
inline bool _IsPieceSetOwnedLocally_b__0(::GlobalNamespace::BuilderPieceSet*  x) ;

constexpr int32_t const& __cordl_internal_get_setID() const;

constexpr int32_t& __cordl_internal_get_setID() ;

constexpr void __cordl_internal_set_setID(int32_t  value) ;

/// @brief Method .ctor, addr 0x57ddfa8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderSetManager___c__DisplayClass69_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetManager___c__DisplayClass69_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderSetManager___c__DisplayClass69_0(BuilderSetManager___c__DisplayClass69_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetManager___c__DisplayClass69_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderSetManager___c__DisplayClass69_0(BuilderSetManager___c__DisplayClass69_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1637};

/// @brief Field setID, offset: 0x10, size: 0x4, def value: None
 int32_t  ___setID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0, ___setID) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderSetManager/<>c__DisplayClass63_0
class CORDL_TYPE BuilderSetManager___c__DisplayClass63_0 : public ::System::Object {
public:
// Declarations
/// @brief Field playfabID, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_playfabID, put=__cordl_internal_set_playfabID)) ::StringW  playfabID;

static inline ::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0* New_ctor() ;

/// @brief Method <IsSetSeasonal>b__0, addr 0x57de5d4, size 0x28, virtual false, abstract: false, final false
inline bool _IsSetSeasonal_b__0(::GlobalNamespace::BuilderPieceSet*  x) ;

constexpr ::StringW const& __cordl_internal_get_playfabID() const;

constexpr ::StringW& __cordl_internal_get_playfabID() ;

constexpr void __cordl_internal_set_playfabID(::StringW  value) ;

/// @brief Method .ctor, addr 0x57dd330, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderSetManager___c__DisplayClass63_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetManager___c__DisplayClass63_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderSetManager___c__DisplayClass63_0(BuilderSetManager___c__DisplayClass63_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetManager___c__DisplayClass63_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderSetManager___c__DisplayClass63_0(BuilderSetManager___c__DisplayClass63_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1636};

/// @brief Field playfabID, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___playfabID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0, ___playfabID) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
