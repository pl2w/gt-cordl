#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticsController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BundleData_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticStand_def.hpp"
#include "GlobalNamespace/zzzz__EarlyAccessButton_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_PurchaseItemStages_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticInfoV2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsController)
namespace CosmeticRoom {
class CurrencyBoard;
}
namespace CosmeticRoom {
class FittingRoom;
}
namespace CosmeticRoom {
class ItemCheckout;
}
namespace Cosmetics {
class ICreatorCodeProvider;
}
namespace GlobalNamespace {
struct BodyDockPositions_DropPositions;
}
namespace GlobalNamespace {
class BodyDockPositions;
}
namespace GlobalNamespace {
struct BundleData;
}
namespace GlobalNamespace {
class BundleList;
}
namespace GlobalNamespace {
class CheckoutCartButton;
}
namespace GlobalNamespace {
class CosmeticOutfitSystemConfig;
}
namespace GlobalNamespace {
class CosmeticStand;
}
namespace GlobalNamespace {
struct CosmeticsController_CollectionState;
}
namespace GlobalNamespace {
struct CosmeticsController_CosmeticCategory;
}
namespace GlobalNamespace {
struct CosmeticsController_CosmeticItem;
}
namespace GlobalNamespace {
struct CosmeticsController_CosmeticSlots;
}
namespace GlobalNamespace {
struct CosmeticsController_EWearingCosmeticSet;
}
namespace GlobalNamespace {
struct CosmeticsController_PurchaseItemStages;
}
namespace GlobalNamespace {
struct CosmeticsController__LoadSavedOutfits_d__296;
}
namespace GlobalNamespace {
struct CosmeticsController__PurchaseBundle_d__207;
}
namespace GlobalNamespace {
struct CosmeticsController__RepressButton_d__192;
}
namespace GlobalNamespace {
class FittingRoomButton;
}
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
class MothershipUserData;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class PurchaseItemButton;
}
namespace GlobalNamespace {
class SetUserDataResponse;
}
namespace GlobalNamespace {
class VRRigAnchorOverrides;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
class WardrobeInstance;
}
namespace GorillaNetworking::Store {
class StoreBundle;
}
namespace GorillaNetworking {
class CosmeticCollectionDisplay;
}
namespace GorillaNetworking {
class CosmeticItemInstance;
}
namespace GorillaNetworking {
class CosmeticItemRegistry;
}
namespace GorillaNetworking {
class CosmeticSet_CosmeticsController_OnSetActivatedHandler;
}
namespace GorillaNetworking {
class CosmeticSet_CosmeticsController___c__DisplayClass37_0;
}
namespace GorillaNetworking {
class CosmeticSet_CosmeticsController___c__DisplayClass38_0;
}
namespace GorillaNetworking {
class CosmeticsController_CosmeticSet;
}
namespace GorillaNetworking {
class CosmeticsController_IAPRequestBody;
}
namespace GorillaNetworking {
class CosmeticsController_OutfitData;
}
namespace GorillaNetworking {
class CosmeticsController_ValidatedCreatorCode;
}
namespace GorillaNetworking {
class CosmeticsController__CheckCanGetDaily_d__238;
}
namespace GorillaNetworking {
class CosmeticsController__CheckIfMyCosmeticsUpdated_d__215;
}
namespace GorillaNetworking {
class CosmeticsController__GetMyDaily_d__239;
}
namespace GorillaNetworking {
class CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16;
}
namespace GorillaNetworking {
class CosmeticsController__WaitForNextCosmeticsAttempt_d__264;
}
namespace GorillaNetworking {
class CosmeticsController___c;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass118_0;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass122_0;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass213_0;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass215_0;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass230_0;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass243_0;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass243_1;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass243_2;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass243_3;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass243_4;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass243_5;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass243_6;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass265_0;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass268_0;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass269_0;
}
namespace GorillaNetworking {
class GorillaServer_ReconcileBundleRewardsResponse;
}
namespace GorillaTag::CosmeticSystem {
class AllCosmeticsArraySO;
}
namespace GorillaTag::CosmeticSystem {
struct CosmeticAnchorAntiIntersectOffsets;
}
namespace GorillaTag::CosmeticSystem {
struct CosmeticInfoV2;
}
namespace GorillaTag::CosmeticSystem {
class CosmeticSO;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CustomMapCosmeticsData;
}
namespace GorillaTag {
template<typename TObject>
class GTAssetRef_1;
}
namespace PlayFab::ClientModels {
class CatalogItem;
}
namespace PlayFab::ClientModels {
class ConfirmPurchaseRequest;
}
namespace PlayFab::ClientModels {
class ConfirmPurchaseResult;
}
namespace PlayFab::ClientModels {
class GetCatalogItemsResult;
}
namespace PlayFab::ClientModels {
class GetSharedGroupDataResult;
}
namespace PlayFab::ClientModels {
class GetUserDataResult;
}
namespace PlayFab::ClientModels {
class GetUserInventoryResult;
}
namespace PlayFab::ClientModels {
class ItemInstance;
}
namespace PlayFab::ClientModels {
class PayForPurchaseRequest;
}
namespace PlayFab::ClientModels {
class PayForPurchaseResult;
}
namespace PlayFab::ClientModels {
class PurchaseItemResult;
}
namespace PlayFab::ClientModels {
class StartPurchaseRequest;
}
namespace PlayFab::ClientModels {
class StartPurchaseResult;
}
namespace PlayFab::ClientModels {
class UserDataRecord;
}
namespace PlayFab::CloudScriptModels {
class ExecuteFunctionResult;
}
namespace PlayFab {
class PlayFabError;
}
namespace Steamworks {
template<typename T>
class Callback_1;
}
namespace Steamworks {
struct MicroTxnAuthorizationResponse_t;
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
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaNetworking {
class CosmeticSet_CosmeticsController_OnSetActivatedHandler;
}
namespace GorillaNetworking {
class CosmeticSet_CosmeticsController___c__DisplayClass37_0;
}
namespace GorillaNetworking {
class CosmeticSet_CosmeticsController___c__DisplayClass38_0;
}
namespace GorillaNetworking {
class CosmeticsController;
}
namespace GorillaNetworking {
class CosmeticsController_CosmeticSet;
}
namespace GorillaNetworking {
class CosmeticsController_IAPRequestBody;
}
namespace GorillaNetworking {
class CosmeticsController_OutfitData;
}
namespace GorillaNetworking {
class CosmeticsController_ValidatedCreatorCode;
}
namespace GorillaNetworking {
class CosmeticsController__CheckCanGetDaily_d__238;
}
namespace GorillaNetworking {
class CosmeticsController__CheckIfMyCosmeticsUpdated_d__215;
}
namespace GorillaNetworking {
class CosmeticsController__GetMyDaily_d__239;
}
namespace GorillaNetworking {
class CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16;
}
namespace GorillaNetworking {
class CosmeticsController__WaitForNextCosmeticsAttempt_d__264;
}
namespace GorillaNetworking {
class CosmeticsController___c;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass118_0;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass122_0;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass213_0;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass215_0;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass230_0;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass243_0;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass243_1;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass243_2;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass243_3;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass243_4;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass243_5;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass243_6;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass265_0;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass268_0;
}
namespace GorillaNetworking {
class CosmeticsController___c__DisplayClass269_0;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*);
MARK_REF_T(::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0*);
MARK_REF_T(::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0*);
MARK_REF_T(::GorillaNetworking::CosmeticsController*);
MARK_REF_T(::GorillaNetworking::CosmeticsController_CosmeticSet*);
MARK_REF_T(::GorillaNetworking::CosmeticsController_IAPRequestBody*);
MARK_REF_T(::GorillaNetworking::CosmeticsController_OutfitData*);
MARK_REF_T(::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*);
MARK_REF_T(::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238*);
MARK_REF_T(::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215*);
MARK_REF_T(::GorillaNetworking::CosmeticsController__GetMyDaily_d__239*);
MARK_REF_T(::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16*);
MARK_REF_T(::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264*);
MARK_REF_T(::GorillaNetworking::CosmeticsController___c*);
MARK_REF_T(::GorillaNetworking::CosmeticsController___c__DisplayClass118_0*);
MARK_REF_T(::GorillaNetworking::CosmeticsController___c__DisplayClass122_0*);
MARK_REF_T(::GorillaNetworking::CosmeticsController___c__DisplayClass213_0*);
MARK_REF_T(::GorillaNetworking::CosmeticsController___c__DisplayClass215_0*);
MARK_REF_T(::GorillaNetworking::CosmeticsController___c__DisplayClass230_0*);
MARK_REF_T(::GorillaNetworking::CosmeticsController___c__DisplayClass243_0*);
MARK_REF_T(::GorillaNetworking::CosmeticsController___c__DisplayClass243_1*);
MARK_REF_T(::GorillaNetworking::CosmeticsController___c__DisplayClass243_2*);
MARK_REF_T(::GorillaNetworking::CosmeticsController___c__DisplayClass243_3*);
MARK_REF_T(::GorillaNetworking::CosmeticsController___c__DisplayClass243_4*);
MARK_REF_T(::GorillaNetworking::CosmeticsController___c__DisplayClass243_5*);
MARK_REF_T(::GorillaNetworking::CosmeticsController___c__DisplayClass243_6*);
MARK_REF_T(::GorillaNetworking::CosmeticsController___c__DisplayClass265_0*);
MARK_REF_T(::GorillaNetworking::CosmeticsController___c__DisplayClass268_0*);
MARK_REF_T(::GorillaNetworking::CosmeticsController___c__DisplayClass269_0*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*, "GorillaNetworking", "CosmeticsController/CosmeticSet/OnSetActivatedHandler");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0*, "GorillaNetworking", "CosmeticsController/CosmeticSet/<>c__DisplayClass37_0");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0*, "GorillaNetworking", "CosmeticsController/CosmeticSet/<>c__DisplayClass38_0");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController*, "GorillaNetworking", "CosmeticsController");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController_CosmeticSet*, "GorillaNetworking", "CosmeticsController/CosmeticSet");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController_IAPRequestBody*, "GorillaNetworking", "CosmeticsController/IAPRequestBody");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController_OutfitData*, "GorillaNetworking", "CosmeticsController/OutfitData");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*, "GorillaNetworking", "CosmeticsController/ValidatedCreatorCode");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238*, "GorillaNetworking", "CosmeticsController/<CheckCanGetDaily>d__238");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215*, "GorillaNetworking", "CosmeticsController/<CheckIfMyCosmeticsUpdated>d__215");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController__GetMyDaily_d__239*, "GorillaNetworking", "CosmeticsController/<GetMyDaily>d__239");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16*, "GorillaNetworking", "CosmeticsController/<V2_allCosmeticsInfoAssetRefSO_LoadCoroutine>d__16");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264*, "GorillaNetworking", "CosmeticsController/<WaitForNextCosmeticsAttempt>d__264");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController___c*, "GorillaNetworking", "CosmeticsController/<>c");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController___c__DisplayClass118_0*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass118_0");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController___c__DisplayClass122_0*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass122_0");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController___c__DisplayClass213_0*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass213_0");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController___c__DisplayClass215_0*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass215_0");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController___c__DisplayClass230_0*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass230_0");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController___c__DisplayClass243_0*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass243_0");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController___c__DisplayClass243_1*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass243_1");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController___c__DisplayClass243_2*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass243_2");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController___c__DisplayClass243_3*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass243_3");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController___c__DisplayClass243_4*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass243_4");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController___c__DisplayClass243_5*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass243_5");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController___c__DisplayClass243_6*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass243_6");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController___c__DisplayClass265_0*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass265_0");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController___c__DisplayClass268_0*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass268_0");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsController___c__DisplayClass269_0*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass269_0");
// Dependencies CosmeticStand, EarlyAccessButton, GorillaNetworking.CosmeticsController::CosmeticItem, GorillaNetworking.CosmeticsController::CosmeticSet, GorillaNetworking.CosmeticsController::PurchaseItemStages, GorillaTag.CosmeticSystem.CosmeticInfoV2, System.Collections.Generic.List`1<T>, System.DateTime, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController
class CORDL_TYPE CosmeticsController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CollectionState = ::GlobalNamespace::CosmeticsController_CollectionState;

using CosmeticCategory = ::GlobalNamespace::CosmeticsController_CosmeticCategory;

using CosmeticItem = ::GlobalNamespace::CosmeticsController_CosmeticItem;

using CosmeticSlots = ::GlobalNamespace::CosmeticsController_CosmeticSlots;

using EWearingCosmeticSet = ::GlobalNamespace::CosmeticsController_EWearingCosmeticSet;

using PurchaseItemStages = ::GlobalNamespace::CosmeticsController_PurchaseItemStages;

using _LoadSavedOutfits_d__296 = ::GlobalNamespace::CosmeticsController__LoadSavedOutfits_d__296;

using _PurchaseBundle_d__207 = ::GlobalNamespace::CosmeticsController__PurchaseBundle_d__207;

using _RepressButton_d__192 = ::GlobalNamespace::CosmeticsController__RepressButton_d__192;

using CosmeticSet = ::GorillaNetworking::CosmeticsController_CosmeticSet;

using IAPRequestBody = ::GorillaNetworking::CosmeticsController_IAPRequestBody;

using OutfitData = ::GorillaNetworking::CosmeticsController_OutfitData;

using ValidatedCreatorCode = ::GorillaNetworking::CosmeticsController_ValidatedCreatorCode;

using _CheckCanGetDaily_d__238 = ::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238;

using _CheckIfMyCosmeticsUpdated_d__215 = ::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215;

using _GetMyDaily_d__239 = ::GorillaNetworking::CosmeticsController__GetMyDaily_d__239;

using _V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16 = ::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16;

using _WaitForNextCosmeticsAttempt_d__264 = ::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264;

using __c = ::GorillaNetworking::CosmeticsController___c;

using __c__DisplayClass118_0 = ::GorillaNetworking::CosmeticsController___c__DisplayClass118_0;

using __c__DisplayClass122_0 = ::GorillaNetworking::CosmeticsController___c__DisplayClass122_0;

using __c__DisplayClass213_0 = ::GorillaNetworking::CosmeticsController___c__DisplayClass213_0;

using __c__DisplayClass215_0 = ::GorillaNetworking::CosmeticsController___c__DisplayClass215_0;

using __c__DisplayClass230_0 = ::GorillaNetworking::CosmeticsController___c__DisplayClass230_0;

using __c__DisplayClass243_0 = ::GorillaNetworking::CosmeticsController___c__DisplayClass243_0;

using __c__DisplayClass243_1 = ::GorillaNetworking::CosmeticsController___c__DisplayClass243_1;

using __c__DisplayClass243_2 = ::GorillaNetworking::CosmeticsController___c__DisplayClass243_2;

using __c__DisplayClass243_3 = ::GorillaNetworking::CosmeticsController___c__DisplayClass243_3;

using __c__DisplayClass243_4 = ::GorillaNetworking::CosmeticsController___c__DisplayClass243_4;

using __c__DisplayClass243_5 = ::GorillaNetworking::CosmeticsController___c__DisplayClass243_5;

using __c__DisplayClass243_6 = ::GorillaNetworking::CosmeticsController___c__DisplayClass243_6;

using __c__DisplayClass265_0 = ::GorillaNetworking::CosmeticsController___c__DisplayClass265_0;

using __c__DisplayClass268_0 = ::GorillaNetworking::CosmeticsController___c__DisplayClass268_0;

using __c__DisplayClass269_0 = ::GorillaNetworking::CosmeticsController___c__DisplayClass269_0;

/// @brief Field BundlePlayfabItemName, offset 0x540, size 0x8 
 __declspec(property(get=__cordl_internal_get_BundlePlayfabItemName, put=__cordl_internal_set_BundlePlayfabItemName)) ::StringW  BundlePlayfabItemName;

/// @brief Field BundleShinyRocks, offset 0x548, size 0x4 
 __declspec(property(get=__cordl_internal_get_BundleShinyRocks, put=__cordl_internal_set_BundleShinyRocks)) int32_t  BundleShinyRocks;

/// @brief Field BundleSkuName, offset 0x538, size 0x8 
 __declspec(property(get=__cordl_internal_get_BundleSkuName, put=__cordl_internal_set_BundleSkuName)) ::StringW  BundleSkuName;

 __declspec(property(get=get_CurrencyBalance)) int32_t  CurrencyBalance;

 __declspec(property(get=get_EarlyAccessSupporterPackCosmeticSO)) ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  EarlyAccessSupporterPackCosmeticSO;

/// @brief Field OnCosmeticsUpdated, offset 0x430, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCosmeticsUpdated, put=__cordl_internal_set_OnCosmeticsUpdated)) ::System::Action*  OnCosmeticsUpdated;

/// @brief Field OnGetCurrency, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGetCurrency, put=__cordl_internal_set_OnGetCurrency)) ::System::Action*  OnGetCurrency;

/// @brief Field OnOutfitsUpdated, offset 0x5c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnOutfitsUpdated, put=__cordl_internal_set_OnOutfitsUpdated)) ::System::Action*  OnOutfitsUpdated;

/// @brief Field OnPlayerColorSet, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPlayerColorSet, put=setStaticF_OnPlayerColorSet)) ::System::Action_3<float_t,float_t,float_t>*  OnPlayerColorSet;

 __declspec(property(get=get_PurchaseLocation, put=set_PurchaseLocation)) ::StringW  PurchaseLocation;

/// @brief Field PushTerminalMessage, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PushTerminalMessage, put=setStaticF_PushTerminalMessage)) ::System::Action_2<::StringW,::StringW>*  PushTerminalMessage;

/// @brief Field V2_OnGetCosmeticsPlayFabCatalogData_PostSuccess, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_V2_OnGetCosmeticsPlayFabCatalogData_PostSuccess, put=__cordl_internal_set_V2_OnGetCosmeticsPlayFabCatalogData_PostSuccess)) ::System::Action*  V2_OnGetCosmeticsPlayFabCatalogData_PostSuccess;

/// @brief Field V2_allCosmeticsInfoAssetRef_OnPostLoad, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_V2_allCosmeticsInfoAssetRef_OnPostLoad, put=__cordl_internal_set_V2_allCosmeticsInfoAssetRef_OnPostLoad)) ::System::Action*  V2_allCosmeticsInfoAssetRef_OnPostLoad;

/// @brief Field _allCosmetics, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__allCosmetics, put=__cordl_internal_set__allCosmetics)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  _allCosmetics;

/// @brief Field _allCosmeticsDict, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__allCosmeticsDict, put=__cordl_internal_set__allCosmeticsDict)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CosmeticsController_CosmeticItem>*  _allCosmeticsDict;

/// @brief Field _allCosmeticsDictV2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__allCosmeticsDictV2, put=__cordl_internal_set__allCosmeticsDictV2)) ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaTag::CosmeticSystem::CosmeticInfoV2>*  _allCosmeticsDictV2;

/// @brief Field <allCosmeticsDict_isInitialized>k__BackingField, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__allCosmeticsDict_isInitialized_k__BackingField, put=__cordl_internal_set__allCosmeticsDict_isInitialized_k__BackingField)) bool  _allCosmeticsDict_isInitialized_k__BackingField;

/// @brief Field _allCosmeticsItemIDsfromDisplayNamesDict, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__allCosmeticsItemIDsfromDisplayNamesDict, put=__cordl_internal_set__allCosmeticsItemIDsfromDisplayNamesDict)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _allCosmeticsItemIDsfromDisplayNamesDict;

/// @brief Field <allCosmeticsItemIDsfromDisplayNamesDict_isInitialized>k__BackingField, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__allCosmeticsItemIDsfromDisplayNamesDict_isInitialized_k__BackingField, put=__cordl_internal_set__allCosmeticsItemIDsfromDisplayNamesDict_isInitialized_k__BackingField)) bool  _allCosmeticsItemIDsfromDisplayNamesDict_isInitialized_k__BackingField;

/// @brief Field _g_default_outAppliedSlotsList_for_applyCosmeticItemToSet, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__g_default_outAppliedSlotsList_for_applyCosmeticItemToSet, put=setStaticF__g_default_outAppliedSlotsList_for_applyCosmeticItemToSet)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*  _g_default_outAppliedSlotsList_for_applyCosmeticItemToSet;

/// @brief Field <hasInstance>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__hasInstance_k__BackingField, put=setStaticF__hasInstance_k__BackingField)) bool  _hasInstance_k__BackingField;

/// @brief Field <isHidingCosmeticsFromRemotePlayers>k__BackingField, offset 0x2e8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHidingCosmeticsFromRemotePlayers_k__BackingField, put=__cordl_internal_set__isHidingCosmeticsFromRemotePlayers_k__BackingField)) bool  _isHidingCosmeticsFromRemotePlayers_k__BackingField;

/// @brief Field _steamMicroTransactionAuthorizationResponse, offset 0x598, size 0x8 
 __declspec(property(get=__cordl_internal_get__steamMicroTransactionAuthorizationResponse, put=__cordl_internal_set__steamMicroTransactionAuthorizationResponse)) ::Steamworks::Callback_1<::Steamworks::MicroTxnAuthorizationResponse_t>*  _steamMicroTransactionAuthorizationResponse;

/// @brief Field <v2_allCosmeticsInfoAssetRef_isLoaded>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__v2_allCosmeticsInfoAssetRef_isLoaded_k__BackingField, put=__cordl_internal_set__v2_allCosmeticsInfoAssetRef_isLoaded_k__BackingField)) bool  _v2_allCosmeticsInfoAssetRef_isLoaded_k__BackingField;

/// @brief Field <v2_allCosmetics>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__v2_allCosmetics_k__BackingField, put=__cordl_internal_set__v2_allCosmetics_k__BackingField)) ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticInfoV2>  _v2_allCosmetics_k__BackingField;

/// @brief Field <v2_isCosmeticPlayFabCatalogDataLoaded>k__BackingField, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__v2_isCosmeticPlayFabCatalogDataLoaded_k__BackingField, put=__cordl_internal_set__v2_isCosmeticPlayFabCatalogDataLoaded_k__BackingField)) bool  _v2_isCosmeticPlayFabCatalogDataLoaded_k__BackingField;

/// @brief Field activeMergedSet, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeMergedSet, put=__cordl_internal_set_activeMergedSet)) ::GorillaNetworking::CosmeticsController_CosmeticSet*  activeMergedSet;

 __declspec(property(get=get_allCosmetics, put=set_allCosmetics)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  allCosmetics;

 __declspec(property(get=get_allCosmeticsDict)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CosmeticsController_CosmeticItem>*  allCosmeticsDict;

 __declspec(property(get=get_allCosmeticsDict_isInitialized, put=set_allCosmeticsDict_isInitialized)) bool  allCosmeticsDict_isInitialized;

 __declspec(property(get=get_allCosmeticsItemIDsfromDisplayNamesDict)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  allCosmeticsItemIDsfromDisplayNamesDict;

 __declspec(property(get=get_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized, put=set_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized)) bool  allCosmeticsItemIDsfromDisplayNamesDict_isInitialized;

/// @brief Field anchorOverrides, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchorOverrides, put=__cordl_internal_set_anchorOverrides)) ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  anchorOverrides;

/// @brief Field attempts, offset 0x2bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_attempts, put=__cordl_internal_set_attempts)) int32_t  attempts;

/// @brief Field bundleList, offset 0x530, size 0x8 
 __declspec(property(get=__cordl_internal_get_bundleList, put=__cordl_internal_set_bundleList)) ::GlobalNamespace::BundleList*  bundleList;

/// @brief Field buyingBundle, offset 0x468, size 0x1 
 __declspec(property(get=__cordl_internal_get_buyingBundle, put=__cordl_internal_set_buyingBundle)) bool  buyingBundle;

/// @brief Field cachedSet, offset 0x2e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedSet, put=__cordl_internal_set_cachedSet)) ::GorillaNetworking::CosmeticsController_CosmeticSet*  cachedSet;

/// @brief Field catalog, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_catalog, put=__cordl_internal_set_catalog)) ::StringW  catalog;

/// @brief Field catalogItems, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_catalogItems, put=__cordl_internal_set_catalogItems)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CatalogItem*>*  catalogItems;

/// @brief Field catalogRequestInFlight, offset 0x1d9, size 0x1 
 __declspec(property(get=__cordl_internal_get_catalogRequestInFlight, put=__cordl_internal_set_catalogRequestInFlight)) bool  catalogRequestInFlight;

/// @brief Field catalogRequestRerunQueued, offset 0x1da, size 0x1 
 __declspec(property(get=__cordl_internal_get_catalogRequestRerunQueued, put=__cordl_internal_set_catalogRequestRerunQueued)) bool  catalogRequestRerunQueued;

/// @brief Field checkedDaily, offset 0x46c, size 0x1 
 __declspec(property(get=__cordl_internal_get_checkedDaily, put=__cordl_internal_set_checkedDaily)) bool  checkedDaily;

/// @brief Field checkoutCartButtonPressedWithLeft, offset 0x588, size 0x1 
 __declspec(property(get=__cordl_internal_get_checkoutCartButtonPressedWithLeft, put=__cordl_internal_set_checkoutCartButtonPressedWithLeft)) bool  checkoutCartButtonPressedWithLeft;

/// @brief Field collectablesByParentID, offset 0x438, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectablesByParentID, put=__cordl_internal_set_collectablesByParentID)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>*  collectablesByParentID;

/// @brief Field concatStringCosmeticsAllowed, offset 0x428, size 0x8 
 __declspec(property(get=__cordl_internal_get_concatStringCosmeticsAllowed, put=__cordl_internal_set_concatStringCosmeticsAllowed)) ::StringW  concatStringCosmeticsAllowed;

/// @brief Field confirmedDidntPlayInBeta, offset 0x469, size 0x1 
 __declspec(property(get=__cordl_internal_get_confirmedDidntPlayInBeta, put=__cordl_internal_set_confirmedDidntPlayInBeta)) bool  confirmedDidntPlayInBeta;

/// @brief Field cosmeticItemVar, offset 0x488, size 0x98 
 __declspec(property(get=__cordl_internal_get_cosmeticItemVar, put=__cordl_internal_set_cosmeticItemVar)) ::GlobalNamespace::CosmeticsController_CosmeticItem  cosmeticItemVar;

/// @brief Field cosmeticStands, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticStands, put=__cordl_internal_set_cosmeticStands)) ::ArrayW<::UnityW<::GlobalNamespace::CosmeticStand>>  cosmeticStands;

/// @brief Field cosmeticsPages, offset 0x360, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticsPages, put=__cordl_internal_set_cosmeticsPages)) ::ArrayW<int32_t>  cosmeticsPages;

/// @brief Field currencyBalance, offset 0x448, size 0x4 
 __declspec(property(get=__cordl_internal_get_currencyBalance, put=__cordl_internal_set_currencyBalance)) int32_t  currencyBalance;

/// @brief Field currencyBoards, offset 0x458, size 0x8 
 __declspec(property(get=__cordl_internal_get_currencyBoards, put=__cordl_internal_set_currencyBoards)) ::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::CurrencyBoard>>*  currencyBoards;

/// @brief Field currencyName, offset 0x450, size 0x8 
 __declspec(property(get=__cordl_internal_get_currencyName, put=__cordl_internal_set_currencyName)) ::StringW  currencyName;

/// @brief Field currentCart, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentCart, put=__cordl_internal_set_currentCart)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  currentCart;

/// @brief Field currentPurchaseID, offset 0x470, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentPurchaseID, put=__cordl_internal_set_currentPurchaseID)) ::StringW  currentPurchaseID;

/// @brief Field currentPurchaseItemStage, offset 0x210, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentPurchaseItemStage, put=__cordl_internal_set_currentPurchaseItemStage)) ::GlobalNamespace::CosmeticsController_PurchaseItemStages  currentPurchaseItemStage;

/// @brief Field currentTime, offset 0x550, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentTime, put=__cordl_internal_set_currentTime)) ::System::DateTime  currentTime;

/// @brief Field currentWornSet, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentWornSet, put=__cordl_internal_set_currentWornSet)) ::GorillaNetworking::CosmeticsController_CosmeticSet*  currentWornSet;

/// @brief Field customMapCosmeticsData, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_customMapCosmeticsData, put=__cordl_internal_set_customMapCosmeticsData)) ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData>  customMapCosmeticsData;

/// @brief Field cycleStatesArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cycleStatesArray, put=setStaticF_cycleStatesArray)) ::ArrayW<int32_t>  cycleStatesArray;

 __declspec(property(get=get_defaultClipOffsets)) ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets  defaultClipOffsets;

/// @brief Field defaultColor, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_defaultColor, put=setStaticF_defaultColor)) ::UnityEngine::Vector3  defaultColor;

/// @brief Field earlyAccessButtons, offset 0x528, size 0x8 
 __declspec(property(get=__cordl_internal_get_earlyAccessButtons, put=__cordl_internal_set_earlyAccessButtons)) ::ArrayW<::UnityW<::GlobalNamespace::EarlyAccessButton>>  earlyAccessButtons;

/// @brief Field finalLine, offset 0x2c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_finalLine, put=__cordl_internal_set_finalLine)) ::StringW  finalLine;

/// @brief Field fittingRooms, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_fittingRooms, put=__cordl_internal_set_fittingRooms)) ::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::FittingRoom>>*  fittingRooms;

/// @brief Field foundCosmetic, offset 0x2b8, size 0x1 
 __declspec(property(get=__cordl_internal_get_foundCosmetic, put=__cordl_internal_set_foundCosmetic)) bool  foundCosmetic;

/// @brief Field gotMyDaily, offset 0x46b, size 0x1 
 __declspec(property(get=__cordl_internal_get_gotMyDaily, put=__cordl_internal_set_gotMyDaily)) bool  gotMyDaily;

/// @brief Field hasPrice, offset 0x478, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasPrice, put=__cordl_internal_set_hasPrice)) bool  hasPrice;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaNetworking::CosmeticsController>  instance;

 __declspec(property(get=get_isHidingCosmeticsFromRemotePlayers, put=set_isHidingCosmeticsFromRemotePlayers)) bool  isHidingCosmeticsFromRemotePlayers;

/// @brief Field isLastHandTouchedLeft, offset 0x2da, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLastHandTouchedLeft, put=__cordl_internal_set_isLastHandTouchedLeft)) bool  isLastHandTouchedLeft;

/// @brief Field itemCheckouts, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemCheckouts, put=__cordl_internal_set_itemCheckouts)) ::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::ItemCheckout>>*  itemCheckouts;

/// @brief Field itemLists, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemLists, put=__cordl_internal_set_itemLists)) ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>  itemLists;

/// @brief Field itemToBuy, offset 0x220, size 0x98 
 __declspec(property(get=__cordl_internal_get_itemToBuy, put=__cordl_internal_set_itemToBuy)) ::GlobalNamespace::CosmeticsController_CosmeticItem  itemToBuy;

/// @brief Field itemToPurchase, offset 0x460, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemToPurchase, put=__cordl_internal_set_itemToPurchase)) ::StringW  itemToPurchase;

/// @brief Field iterator, offset 0x480, size 0x4 
 __declspec(property(get=__cordl_internal_get_iterator, put=__cordl_internal_set_iterator)) int32_t  iterator;

/// @brief Field lastDailyLogin, offset 0x558, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastDailyLogin, put=__cordl_internal_set_lastDailyLogin)) ::StringW  lastDailyLogin;

/// @brief Field latestInventory, offset 0x578, size 0x8 
 __declspec(property(get=__cordl_internal_get_latestInventory, put=__cordl_internal_set_latestInventory)) ::PlayFab::ClientModels::GetUserInventoryResult*  latestInventory;

/// @brief Field leftCheckoutPurchaseButtonOn, offset 0x2d8, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftCheckoutPurchaseButtonOn, put=__cordl_internal_set_leftCheckoutPurchaseButtonOn)) bool  leftCheckoutPurchaseButtonOn;

/// @brief Field leftCheckoutPurchaseButtonString, offset 0x2c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftCheckoutPurchaseButtonString, put=__cordl_internal_set_leftCheckoutPurchaseButtonString)) ::StringW  leftCheckoutPurchaseButtonString;

/// @brief Field loadOutfitsInProgress, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_loadOutfitsInProgress, put=setStaticF_loadOutfitsInProgress)) bool  loadOutfitsInProgress;

/// @brief Field loadedSavedOutfits, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_loadedSavedOutfits, put=setStaticF_loadedSavedOutfits)) bool  loadedSavedOutfits;

/// @brief Field localCycleStates, offset 0x440, size 0x8 
 __declspec(property(get=__cordl_internal_get_localCycleStates, put=__cordl_internal_set_localCycleStates)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::StringW>,::GlobalNamespace::CosmeticsController_CollectionState>*  localCycleStates;

/// @brief Field m_earlyAccessSupporterPackCosmeticSO, offset 0x520, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_earlyAccessSupporterPackCosmeticSO, put=__cordl_internal_set_m_earlyAccessSupporterPackCosmeticSO)) ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  m_earlyAccessSupporterPackCosmeticSO;

/// @brief Field maxOutfits, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_maxOutfits, put=setStaticF_maxOutfits)) int32_t  maxOutfits;

/// @brief Field maxUpdateCosmeticsRetries, offset 0x574, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxUpdateCosmeticsRetries, put=__cordl_internal_set_maxUpdateCosmeticsRetries)) int32_t  maxUpdateCosmeticsRetries;

/// @brief Field nullItem, offset 0x88, size 0x98 
 __declspec(property(get=__cordl_internal_get_nullItem, put=__cordl_internal_set_nullItem)) ::GlobalNamespace::CosmeticsController_CosmeticItem  nullItem;

/// @brief Field numFittingRoomButtons, offset 0x1f0, size 0x4 
 __declspec(property(get=__cordl_internal_get_numFittingRoomButtons, put=__cordl_internal_set_numFittingRoomButtons)) int32_t  numFittingRoomButtons;

/// @brief Field outfitDataTemp, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_outfitDataTemp, put=setStaticF_outfitDataTemp)) ::GorillaNetworking::CosmeticsController_OutfitData*  outfitDataTemp;

/// @brief Field outfitStringMothership, offset 0x5b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_outfitStringMothership, put=__cordl_internal_set_outfitStringMothership)) ::StringW  outfitStringMothership;

/// @brief Field outfitStringPendingSave, offset 0x5c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_outfitStringPendingSave, put=__cordl_internal_set_outfitStringPendingSave)) ::StringW  outfitStringPendingSave;

/// @brief Field outfitSystemConfig, offset 0x5a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_outfitSystemConfig, put=__cordl_internal_set_outfitSystemConfig)) ::UnityW<::GlobalNamespace::CosmeticOutfitSystemConfig>  outfitSystemConfig;

/// @brief Field playedInBeta, offset 0x46a, size 0x1 
 __declspec(property(get=__cordl_internal_get_playedInBeta, put=__cordl_internal_set_playedInBeta)) bool  playedInBeta;

/// @brief Field purchaseLocation, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseLocation, put=__cordl_internal_set_purchaseLocation)) ::StringW  purchaseLocation;

/// @brief Field returnString, offset 0x580, size 0x8 
 __declspec(property(get=__cordl_internal_get_returnString, put=__cordl_internal_set_returnString)) ::StringW  returnString;

/// @brief Field rightCheckoutPurchaseButtonOn, offset 0x2d9, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightCheckoutPurchaseButtonOn, put=__cordl_internal_set_rightCheckoutPurchaseButtonOn)) bool  rightCheckoutPurchaseButtonOn;

/// @brief Field rightCheckoutPurchaseButtonString, offset 0x2d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightCheckoutPurchaseButtonString, put=__cordl_internal_set_rightCheckoutPurchaseButtonString)) ::StringW  rightCheckoutPurchaseButtonString;

/// @brief Field saveOutfitInProgress, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_saveOutfitInProgress, put=setStaticF_saveOutfitInProgress)) bool  saveOutfitInProgress;

/// @brief Field savedColors, offset 0x5b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_savedColors, put=__cordl_internal_set_savedColors)) ::ArrayW<::UnityEngine::Vector3>  savedColors;

/// @brief Field savedOutfits, offset 0x5a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_savedOutfits, put=__cordl_internal_set_savedOutfits)) ::ArrayW<::GorillaNetworking::CosmeticsController_CosmeticSet*>  savedOutfits;

/// @brief Field sb, offset 0x5d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sb, put=__cordl_internal_set_sb)) ::System::Text::StringBuilder*  sb;

/// @brief Field scratchCanonicalCollectables, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_scratchCanonicalCollectables, put=setStaticF_scratchCanonicalCollectables)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  scratchCanonicalCollectables;

/// @brief Field scratchCanonicalIndexList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_scratchCanonicalIndexList, put=setStaticF_scratchCanonicalIndexList)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  scratchCanonicalIndexList;

/// @brief Field scratchDisplayList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_scratchDisplayList, put=setStaticF_scratchDisplayList)) ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*  scratchDisplayList;

/// @brief Field searchIndex, offset 0x47c, size 0x4 
 __declspec(property(get=__cordl_internal_get_searchIndex, put=__cordl_internal_set_searchIndex)) int32_t  searchIndex;

/// @brief Field secondsToWaitToCheckDaily, offset 0x56c, size 0x4 
 __declspec(property(get=__cordl_internal_get_secondsToWaitToCheckDaily, put=__cordl_internal_set_secondsToWaitToCheckDaily)) float_t  secondsToWaitToCheckDaily;

/// @brief Field secondsUntilTomorrow, offset 0x568, size 0x4 
 __declspec(property(get=__cordl_internal_get_secondsUntilTomorrow, put=__cordl_internal_set_secondsUntilTomorrow)) int32_t  secondsUntilTomorrow;

/// @brief Field selectedOutfit, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_selectedOutfit, put=setStaticF_selectedOutfit)) int32_t  selectedOutfit;

/// @brief Field tempItem, offset 0x130, size 0x98 
 __declspec(property(get=__cordl_internal_get_tempItem, put=__cordl_internal_set_tempItem)) ::GlobalNamespace::CosmeticsController_CosmeticItem  tempItem;

/// @brief Field tempStringArray, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempStringArray, put=__cordl_internal_set_tempStringArray)) ::ArrayW<::StringW>  tempStringArray;

/// @brief Field tempUnlockedSet, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempUnlockedSet, put=__cordl_internal_set_tempUnlockedSet)) ::GorillaNetworking::CosmeticsController_CosmeticSet*  tempUnlockedSet;

/// @brief Field tryGetCatalogTwice, offset 0x1d8, size 0x1 
 __declspec(property(get=__cordl_internal_get_tryGetCatalogTwice, put=__cordl_internal_set_tryGetCatalogTwice)) bool  tryGetCatalogTwice;

/// @brief Field tryOnCollectableItem, offset 0x390, size 0x98 
 __declspec(property(get=__cordl_internal_get_tryOnCollectableItem, put=__cordl_internal_set_tryOnCollectableItem)) ::GlobalNamespace::CosmeticsController_CosmeticItem  tryOnCollectableItem;

/// @brief Field tryOnSet, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tryOnSet, put=__cordl_internal_set_tryOnSet)) ::GorillaNetworking::CosmeticsController_CosmeticSet*  tryOnSet;

/// @brief Field unlockedArms, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockedArms, put=__cordl_internal_set_unlockedArms)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  unlockedArms;

/// @brief Field unlockedBacks, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockedBacks, put=__cordl_internal_set_unlockedBacks)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  unlockedBacks;

/// @brief Field unlockedBadges, offset 0x310, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockedBadges, put=__cordl_internal_set_unlockedBadges)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  unlockedBadges;

/// @brief Field unlockedChests, offset 0x320, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockedChests, put=__cordl_internal_set_unlockedChests)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  unlockedChests;

/// @brief Field unlockedCosmetics, offset 0x2f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockedCosmetics, put=__cordl_internal_set_unlockedCosmetics)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  unlockedCosmetics;

/// @brief Field unlockedFaces, offset 0x308, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockedFaces, put=__cordl_internal_set_unlockedFaces)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  unlockedFaces;

/// @brief Field unlockedFurs, offset 0x328, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockedFurs, put=__cordl_internal_set_unlockedFurs)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  unlockedFurs;

/// @brief Field unlockedHats, offset 0x300, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockedHats, put=__cordl_internal_set_unlockedHats)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  unlockedHats;

/// @brief Field unlockedPants, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockedPants, put=__cordl_internal_set_unlockedPants)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  unlockedPants;

/// @brief Field unlockedPaws, offset 0x318, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockedPaws, put=__cordl_internal_set_unlockedPaws)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  unlockedPaws;

/// @brief Field unlockedShirts, offset 0x330, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockedShirts, put=__cordl_internal_set_unlockedShirts)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  unlockedShirts;

/// @brief Field unlockedTagFX, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockedTagFX, put=__cordl_internal_set_unlockedTagFX)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  unlockedTagFX;

/// @brief Field unlockedThrowables, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockedThrowables, put=__cordl_internal_set_unlockedThrowables)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  unlockedThrowables;

/// @brief Field updateCosmeticsRetries, offset 0x570, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateCosmeticsRetries, put=__cordl_internal_set_updateCosmeticsRetries)) int32_t  updateCosmeticsRetries;

/// @brief Field userDataRecord, offset 0x560, size 0x8 
 __declspec(property(get=__cordl_internal_get_userDataRecord, put=__cordl_internal_set_userDataRecord)) ::PlayFab::ClientModels::UserDataRecord*  userDataRecord;

 __declspec(property(get=get_v2_allCosmetics, put=set_v2_allCosmetics)) ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticInfoV2>  v2_allCosmetics;

/// @brief Field v2_allCosmeticsInfoAssetRef, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_v2_allCosmeticsInfoAssetRef, put=__cordl_internal_set_v2_allCosmeticsInfoAssetRef)) ::GorillaTag::GTAssetRef_1<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>>*  v2_allCosmeticsInfoAssetRef;

 __declspec(property(get=get_v2_allCosmeticsInfoAssetRef_isLoaded, put=set_v2_allCosmeticsInfoAssetRef_isLoaded)) bool  v2_allCosmeticsInfoAssetRef_isLoaded;

 __declspec(property(get=get_v2_isCosmeticPlayFabCatalogDataLoaded, put=set_v2_isCosmeticPlayFabCatalogDataLoaded)) bool  v2_isCosmeticPlayFabCatalogDataLoaded;

/// @brief Field validatedCreatorCode, offset 0x590, size 0x8 
 __declspec(property(get=__cordl_internal_get_validatedCreatorCode, put=__cordl_internal_set_validatedCreatorCode)) ::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*  validatedCreatorCode;

/// @brief Field wardrobeType, offset 0x370, size 0x4 
 __declspec(property(get=__cordl_internal_get_wardrobeType, put=__cordl_internal_set_wardrobeType)) int32_t  wardrobeType;

/// @brief Field wardrobes, offset 0x2f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_wardrobes, put=__cordl_internal_set_wardrobes)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WardrobeInstance>>*  wardrobes;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method AddCurrencyBoard, addr 0x5c5e7ec, size 0x100, virtual false, abstract: false, final false
inline void AddCurrencyBoard(::CosmeticRoom::CurrencyBoard*  newCurrencyBoard) ;

/// @brief Method AddFittingRoom, addr 0x5c4ddd0, size 0xe8, virtual false, abstract: false, final false
inline void AddFittingRoom(::CosmeticRoom::FittingRoom*  newFittingRoom) ;

/// @brief Method AddItemCheckout, addr 0x5c4e4a0, size 0x114, virtual false, abstract: false, final false
inline void AddItemCheckout(::CosmeticRoom::ItemCheckout*  newItemCheckout) ;

/// @brief Method AddTempUnlockToWardrobe, addr 0x5c5f38c, size 0x294, virtual false, abstract: false, final false
inline void AddTempUnlockToWardrobe(::StringW  cosmeticID) ;

/// @brief Method AddWardrobeInstance, addr 0x5c5512c, size 0xb0, virtual false, abstract: false, final false
inline void AddWardrobeInstance(::GlobalNamespace::WardrobeInstance*  instance) ;

/// @brief Method AlreadyOwnAllBundleButtons, addr 0x5c5e944, size 0x60, virtual false, abstract: false, final false
inline void AlreadyOwnAllBundleButtons() ;

/// @brief Method AnyMatch, addr 0x5c4e270, size 0x1a4, virtual false, abstract: false, final false
inline bool AnyMatch(::GorillaNetworking::CosmeticsController_CosmeticSet*  set, ::GlobalNamespace::CosmeticsController_CosmeticItem  item) ;

/// @brief Method ApplyCosmeticItemToSet, addr 0x5c58850, size 0xac, virtual false, abstract: false, final false
inline void ApplyCosmeticItemToSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  set, ::GlobalNamespace::CosmeticsController_CosmeticItem  newItem, bool  isLeftHand, bool  applyToPlayerPrefs) ;

/// @brief Method ApplyCosmeticItemToSet, addr 0x5c588fc, size 0x374, virtual false, abstract: false, final false
inline void ApplyCosmeticItemToSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  set, ::GlobalNamespace::CosmeticsController_CosmeticItem  newItem, bool  isLeftHand, bool  applyToPlayerPrefs, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*  outAppliedSlotsList) ;

/// @brief Method ApplyCosmeticToSet, addr 0x5c57dd4, size 0x1a0, virtual false, abstract: false, final false
inline void ApplyCosmeticToSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  set, ::GlobalNamespace::CosmeticsController_CosmeticItem  newItem, int32_t  slotIdx, ::GlobalNamespace::CosmeticsController_CosmeticSlots  slot, bool  applyToPlayerPrefs, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*  appliedSlots) ;

/// @brief Method ApplyNewItem, addr 0x5c60778, size 0x104, virtual false, abstract: false, final false
inline void ApplyNewItem(::GorillaNetworking::CosmeticsController_CosmeticSet*  outfit, int32_t  i) ;

/// @brief Method Awake, addr 0x5c566d4, size 0x80c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BuildCanonicalCollectableOrder, addr 0x5c55cd0, size 0x1d4, virtual false, abstract: false, final false
inline void BuildCanonicalCollectableOrder(::StringW  parentPlayFabID, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  result) ;

/// @brief Method BuildValidationCheck, addr 0x5c5f8b4, size 0xb8, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

/// @brief Method CanPurchaseCollectable, addr 0x5c55bb8, size 0x118, virtual false, abstract: false, final false
inline bool CanPurchaseCollectable(::StringW  collectablePlayFabID) ;

/// @brief Method CanScrollOutfits, addr 0x5c600b8, size 0x84, virtual false, abstract: false, final false
static inline bool CanScrollOutfits() ;

/// @brief Method CategoryToNonTransferrableSlot, addr 0x5c57384, size 0x24, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CosmeticsController_CosmeticSlots CategoryToNonTransferrableSlot(::GlobalNamespace::CosmeticsController_CosmeticCategory  category) ;

/// [IteratorStateMachine(typeof(GorillaNetworking.CosmeticsController::<CheckCanGetDaily>d__238))]
/// @brief Method CheckCanGetDaily, addr 0x5c56ee0, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CheckCanGetDaily() ;

/// @brief Method CheckCosmeticsSharedGroup, addr 0x5c5e9a4, size 0x3c, virtual false, abstract: false, final false
inline void CheckCosmeticsSharedGroup() ;

/// @brief Method CheckIfCosmeticSetMatchesItemSet, addr 0x5c5922c, size 0x13c, virtual false, abstract: false, final false
inline ::GlobalNamespace::CosmeticsController_EWearingCosmeticSet CheckIfCosmeticSetMatchesItemSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  set, ::StringW  itemName) ;

/// [IteratorStateMachine(typeof(GorillaNetworking.CosmeticsController::<CheckIfMyCosmeticsUpdated>d__215))]
/// @brief Method CheckIfMyCosmeticsUpdated, addr 0x5c5b7c0, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CheckIfMyCosmeticsUpdated(::StringW  itemToBuyID) ;

/// @brief Method ClearCheckout, addr 0x5c5a0bc, size 0x110, virtual false, abstract: false, final false
inline void ClearCheckout(bool  sendEvent) ;

/// @brief Method ClearCheckoutAndCart, addr 0x5c5ab08, size 0xd8, virtual false, abstract: false, final false
inline void ClearCheckoutAndCart(bool  sendEvent) ;

/// @brief Method ClearOutfits, addr 0x5c613c4, size 0x180, virtual false, abstract: false, final false
inline void ClearOutfits() ;

/// @brief Method ClearTryOnCollectable, addr 0x5c57f74, size 0xe8, virtual false, abstract: false, final false
static inline void ClearTryOnCollectable() ;

/// @brief Method CompareCategoryToSavedCosmeticSlots, addr 0x5c572a8, size 0xdc, virtual false, abstract: false, final false
static inline bool CompareCategoryToSavedCosmeticSlots(::GlobalNamespace::CosmeticsController_CosmeticCategory  category, ::GlobalNamespace::CosmeticsController_CosmeticSlots  slot) ;

/// @brief Method CompleteGetCosmeticsPlayFabCatalogData, addr 0x5c5d3d8, size 0x18, virtual false, abstract: false, final false
inline void CompleteGetCosmeticsPlayFabCatalogData() ;

/// @brief Method ConfirmIndividualCosmeticsSharedGroup, addr 0x5c5ea54, size 0x30c, virtual false, abstract: false, final false
inline void ConfirmIndividualCosmeticsSharedGroup(::PlayFab::ClientModels::GetUserInventoryResult*  inventory) ;

/// @brief Method ConsumePurchaseLocation, addr 0x5c54f68, size 0x114, virtual false, abstract: false, final false
inline ::StringW ConsumePurchaseLocation() ;

/// @brief Method CosmeticSlotToDropPosition, addr 0x5c573e4, size 0x24, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BodyDockPositions_DropPositions CosmeticSlotToDropPosition(::GlobalNamespace::CosmeticsController_CosmeticSlots  slot) ;

/// @brief Method DropPositionToCosmeticSlot, addr 0x5c573a8, size 0x3c, virtual false, abstract: false, final false
inline ::GlobalNamespace::CosmeticsController_CosmeticSlots DropPositionToCosmeticSlot(::GlobalNamespace::BodyDockPositions_DropPositions  pos) ;

/// @brief Method FormattedPurchaseText, addr 0x5c575d0, size 0x324, virtual false, abstract: false, final false
inline void FormattedPurchaseText(::StringW  finalLineVar, ::StringW  leftPurchaseButtonText, ::StringW  rightPurchaseButtonText, bool  leftButtonOn, bool  rightButtonOn) ;

/// @brief Method GetCanonicalCollectableIndex, addr 0x5c51b64, size 0x128, virtual false, abstract: false, final false
inline int32_t GetCanonicalCollectableIndex(::StringW  parentPlayFabID, ::StringW  itemName) ;

/// @brief Method GetCategorySize, addr 0x5c5b850, size 0x70, virtual false, abstract: false, final false
inline int32_t GetCategorySize(::GlobalNamespace::CosmeticsController_CosmeticCategory  category) ;

/// @brief Method GetClipOffsetsFromDisplayName, addr 0x5c5c634, size 0x26c, virtual false, abstract: false, final false
inline ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets GetClipOffsetsFromDisplayName(::StringW  displayName) ;

/// @brief Method GetConfirmATMPurchaseRequest, addr 0x5c5dc58, size 0x1cc, virtual false, abstract: false, final false
inline ::PlayFab::ClientModels::ConfirmPurchaseRequest* GetConfirmATMPurchaseRequest() ;

/// @brief Method GetConfirmBundlePurchaseRequest, addr 0x5c5da8c, size 0x1cc, virtual false, abstract: false, final false
inline ::PlayFab::ClientModels::ConfirmPurchaseRequest* GetConfirmBundlePurchaseRequest() ;

/// @brief Method GetCosmetic, addr 0x5c5b9c4, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::CosmeticsController_CosmeticItem GetCosmetic(::GlobalNamespace::CosmeticsController_CosmeticCategory  category, int32_t  cosmeticIndex) ;

/// @brief Method GetCosmetic, addr 0x5c5b8e4, size 0xe0, virtual false, abstract: false, final false
inline ::GlobalNamespace::CosmeticsController_CosmeticItem GetCosmetic(int32_t  category, int32_t  cosmeticIndex) ;

/// @brief Method GetCosmeticSOFromDisplayName, addr 0x5c536a4, size 0x218, virtual false, abstract: false, final false
inline ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> GetCosmeticSOFromDisplayName(::StringW  displayName) ;

/// @brief Method GetCosmeticsPlayFabCatalogData, addr 0x5c5cbb0, size 0x128, virtual false, abstract: false, final false
inline void GetCosmeticsPlayFabCatalogData() ;

/// @brief Method GetCosmeticsPlayFabCatalogDataInternal, addr 0x5c5ce7c, size 0x130, virtual false, abstract: false, final false
inline void GetCosmeticsPlayFabCatalogDataInternal() ;

/// @brief Method GetCurrencyBalance, addr 0x5c5e0e0, size 0x188, virtual false, abstract: false, final false
inline void GetCurrencyBalance() ;

/// @brief Method GetCurrentRightEquippedSided, addr 0x5c5bbe4, size 0x28, virtual false, abstract: false, final false
inline ::ArrayW<bool> GetCurrentRightEquippedSided(bool  tempSet) ;

/// @brief Method GetCurrentlyWornCosmetics, addr 0x5c5bbbc, size 0x28, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetCurrentlyWornCosmetics(bool  tempSet) ;

/// @brief Method GetIndexForCategory, addr 0x5c5b8c0, size 0x24, virtual false, abstract: false, final false
inline int32_t GetIndexForCategory(::GlobalNamespace::CosmeticsController_CosmeticCategory  category) ;

/// @brief Method GetItemDisplayName, addr 0x5c5b210, size 0x64, virtual false, abstract: false, final false
inline ::StringW GetItemDisplayName(::GlobalNamespace::CosmeticsController_CosmeticItem  item) ;

/// @brief Method GetItemFromDict, addr 0x5c58c70, size 0x84, virtual false, abstract: false, final false
inline ::GlobalNamespace::CosmeticsController_CosmeticItem GetItemFromDict(::StringW  itemID) ;

/// @brief Method GetItemNameFromDisplayName, addr 0x5c5c57c, size 0xb8, virtual false, abstract: false, final false
inline ::StringW GetItemNameFromDisplayName(::StringW  displayName) ;

/// @brief Method GetLastDailyLogin, addr 0x5c5ccd8, size 0x130, virtual false, abstract: false, final false
inline void GetLastDailyLogin() ;

/// [IteratorStateMachine(typeof(GorillaNetworking.CosmeticsController::<GetMyDaily>d__239))]
/// @brief Method GetMyDaily, addr 0x5c5ce08, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GetMyDaily() ;

/// @brief Method GetOwnedCollectableCount, addr 0x5c559d8, size 0xe4, virtual false, abstract: false, final false
inline int32_t GetOwnedCollectableCount(::StringW  parentPlayFabID) ;

/// @brief Method GetPayForPurchaseRequest, addr 0x5c5d730, size 0xc0, virtual false, abstract: false, final false
static inline ::PlayFab::ClientModels::PayForPurchaseRequest* GetPayForPurchaseRequest(::StringW  orderId) ;

/// @brief Method GetRemainingCollectableSlots, addr 0x5c55abc, size 0xfc, virtual false, abstract: false, final false
inline int32_t GetRemainingCollectableSlots(::StringW  parentPlayFabID) ;

/// @brief Method GetSavedOutfitsComplete, addr 0x5c61544, size 0x284, virtual false, abstract: false, final false
inline void GetSavedOutfitsComplete() ;

/// @brief Method GetSavedOutfitsFail, addr 0x5c617c8, size 0x100, virtual false, abstract: false, final false
inline void GetSavedOutfitsFail(::GlobalNamespace::MothershipError*  error, int32_t  status) ;

/// @brief Method GetSavedOutfitsSuccess, addr 0x5c60d4c, size 0x1e4, virtual false, abstract: false, final false
inline void GetSavedOutfitsSuccess(::GlobalNamespace::MothershipUserData*  response) ;

/// @brief Method GetSlotItem, addr 0x5c5bae8, size 0xd4, virtual false, abstract: false, final false
inline ::GlobalNamespace::CosmeticsController_CosmeticItem GetSlotItem(::GlobalNamespace::CosmeticsController_CosmeticSlots  slot, bool  checkOpposite, bool  tempSet) ;

/// @brief Method GetStartPurchaseRequest, addr 0x5c5d3f0, size 0x1a0, virtual false, abstract: false, final false
inline ::PlayFab::ClientModels::StartPurchaseRequest* GetStartPurchaseRequest() ;

/// @brief Method Initialize, addr 0x5c5c8a0, size 0x310, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method InitializeCosmeticStands, addr 0x5c54de0, size 0xc0, virtual false, abstract: false, final false
inline void InitializeCosmeticStands() ;

/// @brief Method IsCosmeticEquipped, addr 0x5c5ba14, size 0x44, virtual false, abstract: false, final false
inline bool IsCosmeticEquipped(::GlobalNamespace::CosmeticsController_CosmeticItem  cosmetic) ;

/// @brief Method IsCosmeticEquipped, addr 0x5c5ba58, size 0x4c, virtual false, abstract: false, final false
inline bool IsCosmeticEquipped(::GlobalNamespace::CosmeticsController_CosmeticItem  cosmetic, bool  tempSet) ;

/// @brief Method IsOwnedByPlayFabID, addr 0x5c558e8, size 0xf0, virtual false, abstract: false, final false
inline bool IsOwnedByPlayFabID(::StringW  playFabID) ;

/// @brief Method IsTemporaryCosmeticEquipped, addr 0x5c5baa4, size 0x44, virtual false, abstract: false, final false
inline bool IsTemporaryCosmeticEquipped(::GlobalNamespace::CosmeticsController_CosmeticItem  cosmetic) ;

/// @brief Method LoadSavedOutfit, addr 0x5c601f8, size 0x338, virtual false, abstract: false, final false
inline void LoadSavedOutfit(int32_t  newOutfitIndex) ;

/// [AsyncStateMachine(typeof(GorillaNetworking.CosmeticsController::<LoadSavedOutfits>d__296))]
/// @brief Method LoadSavedOutfits, addr 0x5c60ca4, size 0xa8, virtual false, abstract: false, final false
inline void LoadSavedOutfits() ;

/// @brief Method ModifyUnlockList, addr 0x5c5b5b4, size 0x20c, virtual false, abstract: false, final false
inline void ModifyUnlockList(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  list, int32_t  index, bool  relock) ;

static inline ::GorillaNetworking::CosmeticsController* New_ctor() ;

/// @brief Method OnCreatorCodeFailure, addr 0x5c5adf8, size 0x8, virtual false, abstract: false, final false
inline void OnCreatorCodeFailure() ;

/// @brief Method OnDisable, addr 0x5c57248, size 0x5c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c5717c, size 0xcc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OutfitsToString, addr 0x5c618c8, size 0x3f4, virtual false, abstract: false, final false
inline ::StringW OutfitsToString() ;

/// @brief Method PackCollectableItems, addr 0x5c5facc, size 0x204, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t> PackCollectableItems(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  items) ;

/// @brief Method PopulateCollectionDisplayOnRoot, addr 0x5c55ea4, size 0x820, virtual false, abstract: false, final false
static inline void PopulateCollectionDisplayOnRoot(::UnityEngine::GameObject*  rootObj, ::GlobalNamespace::CosmeticsController_CosmeticItem  parentItem, ::GlobalNamespace::VRRig*  rig) ;

/// @brief Method PressCheckoutCartButton, addr 0x5c5abe0, size 0x128, virtual false, abstract: false, final false
inline void PressCheckoutCartButton(::GlobalNamespace::CheckoutCartButton*  pressedCheckoutCartButton, bool  isLeftHand) ;

/// @brief Method PressCosmeticStandButton, addr 0x5c59368, size 0x418, virtual false, abstract: false, final false
inline void PressCosmeticStandButton(::GlobalNamespace::CosmeticStand*  pressedStand) ;

/// @brief Method PressEarlyAccessButton, addr 0x5c5ae00, size 0xb0, virtual false, abstract: false, final false
inline void PressEarlyAccessButton() ;

/// @brief Method PressFittingRoomButton, addr 0x5c58f80, size 0x2a4, virtual false, abstract: false, final false
inline void PressFittingRoomButton(::GlobalNamespace::FittingRoomButton*  pressedFittingRoomButton, bool  isLeftHand) ;

/// @brief Method PressPurchaseItemButton, addr 0x5c5ad08, size 0x18, virtual false, abstract: false, final false
inline void PressPurchaseItemButton(::GlobalNamespace::PurchaseItemButton*  pressedPurchaseItemButton, bool  isLeftHand) ;

/// @brief Method PressTemporaryWardrobeItemButton, addr 0x5c59864, size 0x4c, virtual false, abstract: false, final false
inline void PressTemporaryWardrobeItemButton(::GlobalNamespace::CosmeticsController_CosmeticItem  item, bool  isLeftHand) ;

/// @brief Method PressWardrobeFunctionButton, addr 0x5c59b40, size 0x57c, virtual false, abstract: false, final false
inline void PressWardrobeFunctionButton(::StringW  function) ;

/// @brief Method PressWardrobeItemButton, addr 0x5c59780, size 0xe4, virtual false, abstract: false, final false
inline void PressWardrobeItemButton(::GlobalNamespace::CosmeticsController_CosmeticItem  cosmeticItem, bool  isLeftHand, bool  isTempCosm) ;

/// @brief Method PressWardrobeItemButton, addr 0x5c598b0, size 0x290, virtual false, abstract: false, final false
inline void PressWardrobeItemButton(::GlobalNamespace::CosmeticsController_CosmeticItem  item, bool  isLeftHand) ;

/// @brief Method PressWardrobeScrollOutfit, addr 0x5c6013c, size 0xbc, virtual false, abstract: false, final false
inline void PressWardrobeScrollOutfit(bool  forward) ;

/// @brief Method PrivApplyCosmeticItemToSet, addr 0x5c5805c, size 0x7f4, virtual false, abstract: false, final false
inline void PrivApplyCosmeticItemToSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  set, ::GlobalNamespace::CosmeticsController_CosmeticItem  newItem, bool  isLeftHand, bool  applyToPlayerPrefs, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*  appliedSlots) ;

/// @brief Method ProcessConfirmPurchaseError, addr 0x5c5e380, size 0x84, virtual false, abstract: false, final false
inline void ProcessConfirmPurchaseError(::PlayFab::PlayFabError*  error) ;

/// @brief Method ProcessConfirmPurchaseSuccess, addr 0x5c5de24, size 0x20c, virtual false, abstract: false, final false
inline void ProcessConfirmPurchaseSuccess() ;

/// @brief Method ProcessExternalUnlock, addr 0x5c5ef80, size 0x40c, virtual false, abstract: false, final false
inline void ProcessExternalUnlock(::StringW  itemID, bool  autoEquip, bool  isLeftHand) ;

/// @brief Method ProcessPayForPurchaseResult, addr 0x5c5d7f0, size 0x68, virtual false, abstract: false, final false
static inline void ProcessPayForPurchaseResult(::PlayFab::ClientModels::PayForPurchaseResult*  result) ;

/// @brief Method ProcessPurchaseItemState, addr 0x5c5a1cc, size 0x7f0, virtual false, abstract: false, final false
inline void ProcessPurchaseItemState(::StringW  buttonSide, bool  isLeftHand) ;

/// @brief Method ProcessStartPurchaseResponse, addr 0x5c5d590, size 0x1a0, virtual false, abstract: false, final false
inline void ProcessStartPurchaseResponse(::PlayFab::ClientModels::StartPurchaseResult*  result) ;

/// @brief Method ProcessSteamCallback, addr 0x5c5d858, size 0x234, virtual false, abstract: false, final false
inline void ProcessSteamCallback(::Steamworks::MicroTxnAuthorizationResponse_t  callBackResponse) ;

/// @brief Method ProcessSteamPurchaseError, addr 0x5c5e404, size 0x3e8, virtual false, abstract: false, final false
inline void ProcessSteamPurchaseError(::PlayFab::PlayFabError*  error) ;

/// [AsyncStateMachine(typeof(GorillaNetworking.CosmeticsController::<PurchaseBundle>d__207))]
/// @brief Method PurchaseBundle, addr 0x5c5ad20, size 0xd8, virtual false, abstract: false, final false
inline void PurchaseBundle(::GorillaNetworking::Store::StoreBundle*  bundleToPurchase, ::Cosmetics::ICreatorCodeProvider*  ccp) ;

/// @brief Method PurchaseItem, addr 0x5c5b09c, size 0x168, virtual false, abstract: false, final false
inline void PurchaseItem() ;

/// @brief Method ReauthOrBan, addr 0x5c5ed60, size 0x220, virtual false, abstract: false, final false
inline void ReauthOrBan(::PlayFab::PlayFabError*  error) ;

/// @brief Method ReconcileBundleRewardsIfNeeded, addr 0x5c5cfc4, size 0x414, virtual false, abstract: false, final false
inline void ReconcileBundleRewardsIfNeeded(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  inventory) ;

/// @brief Method RefreshItemToBuyPreview, addr 0x5c578f4, size 0x360, virtual false, abstract: false, final false
inline void RefreshItemToBuyPreview() ;

/// @brief Method RemoveCosmeticItemFromSet, addr 0x5c58cf4, size 0x1b4, virtual false, abstract: false, final false
inline void RemoveCosmeticItemFromSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  set, ::StringW  itemName, bool  applyToPlayerPrefs) ;

/// @brief Method RemoveCurrencyBoard, addr 0x5c5e8ec, size 0x58, virtual false, abstract: false, final false
inline void RemoveCurrencyBoard(::CosmeticRoom::CurrencyBoard*  currencyBoardToRemove) ;

/// @brief Method RemoveFittingRoom, addr 0x5c4dfc0, size 0x80, virtual false, abstract: false, final false
inline void RemoveFittingRoom(::CosmeticRoom::FittingRoom*  fittingRoomToRemove) ;

/// @brief Method RemoveItemCheckout, addr 0x5c4e638, size 0x80, virtual false, abstract: false, final false
inline void RemoveItemCheckout(::CosmeticRoom::ItemCheckout*  checkoutToRemove) ;

/// @brief Method RemoveItemFromCart, addr 0x5c5a9bc, size 0x14c, virtual false, abstract: false, final false
inline bool RemoveItemFromCart(::GlobalNamespace::CosmeticsController_CosmeticItem  cosmeticItem) ;

/// @brief Method RemoveTempUnlockFromWardrobe, addr 0x5c5f620, size 0x294, virtual false, abstract: false, final false
inline void RemoveTempUnlockFromWardrobe(::StringW  cosmeticID) ;

/// @brief Method RemoveWardrobeInstance, addr 0x5c55890, size 0x58, virtual false, abstract: false, final false
inline void RemoveWardrobeInstance(::GlobalNamespace::WardrobeInstance*  instance) ;

/// [AsyncStateMachine(typeof(GorillaNetworking.CosmeticsController::<RepressButton>d__192))]
/// @brief Method RepressButton, addr 0x5c58ea8, size 0xd8, virtual false, abstract: false, final false
inline void RepressButton(::GlobalNamespace::FittingRoomButton*  pressedButton, bool  isLeftHand) ;

/// @brief Method SaveCurrentItemPreferences, addr 0x5c57ccc, size 0x108, virtual false, abstract: false, final false
inline void SaveCurrentItemPreferences() ;

/// @brief Method SaveItemPreference, addr 0x5c57c54, size 0x78, virtual false, abstract: false, final false
inline void SaveItemPreference(::GlobalNamespace::CosmeticsController_CosmeticSlots  slot, int32_t  slotIdx, ::GlobalNamespace::CosmeticsController_CosmeticItem  newItem) ;

/// @brief Method SaveOutfitsToMothership, addr 0x5c60530, size 0x248, virtual false, abstract: false, final false
inline void SaveOutfitsToMothership() ;

/// @brief Method SaveOutfitsToMothershipFail, addr 0x5c61d5c, size 0x128, virtual false, abstract: false, final false
inline void SaveOutfitsToMothershipFail(::GlobalNamespace::MothershipError*  error, int32_t  status) ;

/// @brief Method SaveOutfitsToMothershipSuccess, addr 0x5c61cbc, size 0xa0, virtual false, abstract: false, final false
inline void SaveOutfitsToMothershipSuccess(::GlobalNamespace::SetUserDataResponse*  response) ;

/// @brief Method SetHideCosmeticsFromRemotePlayers, addr 0x5c5f96c, size 0xe4, virtual false, abstract: false, final false
inline void SetHideCosmeticsFromRemotePlayers(bool  hideCosmetics) ;

/// @brief Method SetValidatedCreatorCode, addr 0x5c5ffa0, size 0xc0, virtual false, abstract: false, final false
inline void SetValidatedCreatorCode(::StringW  memberCode, ::StringW  groupCode, ::StringW  terminalId) ;

/// @brief Method SliceUpdate, addr 0x5c572a4, size 0x4, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x5c56f54, size 0x228, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SteamPurchase, addr 0x5c5aeb0, size 0x1ec, virtual false, abstract: false, final false
inline void SteamPurchase() ;

/// @brief Method StringToOutfits, addr 0x5c60f30, size 0x494, virtual false, abstract: false, final false
inline void StringToOutfits(::StringW  response) ;

/// @brief Method TryGetBundleMapping, addr 0x5c5cfac, size 0x18, virtual false, abstract: false, final false
inline bool TryGetBundleMapping(::StringW  idOrSku, ::by_ref<::GlobalNamespace::BundleData>  bundleMapping) ;

/// @brief Method TryGetCosmeticInfoV2, addr 0x5c5218c, size 0x68, virtual false, abstract: false, final false
inline bool TryGetCosmeticInfoV2(::StringW  playFabId, ::by_ref<::GorillaTag::CosmeticSystem::CosmeticInfoV2>  cosmeticInfo) ;

/// @brief Method UnlockItem, addr 0x5c5b274, size 0x340, virtual false, abstract: false, final false
inline void UnlockItem(::StringW  itemIdToUnlock, bool  relock) ;

/// @brief Method UnpackCollectableItems, addr 0x5c5fcd0, size 0x2d0, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem> UnpackCollectableItems(::ArrayW<int32_t>  packed) ;

/// @brief Method UpdateCurrencyBoards, addr 0x5c5e268, size 0x118, virtual false, abstract: false, final false
inline void UpdateCurrencyBoards() ;

/// @brief Method UpdateMonkeColor, addr 0x5c6087c, size 0x428, virtual false, abstract: false, final false
inline void UpdateMonkeColor(::UnityEngine::Vector3  col, bool  saveToPrefs) ;

/// @brief Method UpdateMyCosmetics, addr 0x5c5e030, size 0xb0, virtual false, abstract: false, final false
inline void UpdateMyCosmetics() ;

/// @brief Method UpdateShoppingCart, addr 0x5c57408, size 0x1c8, virtual false, abstract: false, final false
inline void UpdateShoppingCart() ;

/// @brief Method UpdateWardrobeModelsAndButtons, addr 0x5c551dc, size 0x6b4, virtual false, abstract: false, final false
inline void UpdateWardrobeModelsAndButtons() ;

/// @brief Method UpdateWornCosmetics, addr 0x5c5b204, size 0xc, virtual false, abstract: false, final false
inline void UpdateWornCosmetics() ;

/// @brief Method UpdateWornCosmetics, addr 0x5c59224, size 0x8, virtual false, abstract: false, final false
inline void UpdateWornCosmetics(bool  sync) ;

/// @brief Method UpdateWornCosmetics, addr 0x5c5bc0c, size 0x970, virtual false, abstract: false, final false
inline void UpdateWornCosmetics(bool  sync, bool  playfx) ;

/// @brief Method V2Awake, addr 0x5c546b8, size 0x30, virtual false, abstract: false, final false
inline void V2Awake() ;

/// @brief Method V2_ConformCosmeticItemV1DisplayName, addr 0x5c54d88, size 0x58, virtual false, abstract: false, final false
inline void V2_ConformCosmeticItemV1DisplayName(::by_ref<::GlobalNamespace::CosmeticsController_CosmeticItem>  cosmetic) ;

/// [IteratorStateMachine(typeof(GorillaNetworking.CosmeticsController::<V2_allCosmeticsInfoAssetRefSO_LoadCoroutine>d__16))]
/// @brief Method V2_allCosmeticsInfoAssetRefSO_LoadCoroutine, addr 0x5c546e8, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* V2_allCosmeticsInfoAssetRefSO_LoadCoroutine() ;

/// @brief Method V2_allCosmeticsInfoAssetRef_LoadSucceeded, addr 0x5c5475c, size 0x62c, virtual false, abstract: false, final false
inline void V2_allCosmeticsInfoAssetRef_LoadSucceeded(::GorillaTag::CosmeticSystem::AllCosmeticsArraySO*  allCosmeticsSO) ;

/// @brief Method ValidatePackedItems, addr 0x5c5fa50, size 0x7c, virtual false, abstract: false, final false
inline bool ValidatePackedItems(::ArrayW<int32_t>  packed) ;

/// [IteratorStateMachine(typeof(GorillaNetworking.CosmeticsController::<WaitForNextCosmeticsAttempt>d__264))]
/// @brief Method WaitForNextCosmeticsAttempt, addr 0x5c5e9e0, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitForNextCosmeticsAttempt() ;

/// [CompilerGenerated]
/// @brief Method <GetCosmeticsPlayFabCatalogDataInternal>b__243_0, addr 0x5c62fb0, size 0x1b0, virtual false, abstract: false, final false
inline void _GetCosmeticsPlayFabCatalogDataInternal_b__243_0(::PlayFab::ClientModels::GetUserInventoryResult*  result) ;

/// [CompilerGenerated]
/// @brief Method <GetCosmeticsPlayFabCatalogDataInternal>b__243_1, addr 0x5c633ec, size 0x28c, virtual false, abstract: false, final false
inline void _GetCosmeticsPlayFabCatalogDataInternal_b__243_1(::PlayFab::PlayFabError*  error) ;

/// [CompilerGenerated]
/// @brief Method <GetCosmeticsPlayFabCatalogDataInternal>b__243_3, addr 0x5c63160, size 0x28c, virtual false, abstract: false, final false
inline void _GetCosmeticsPlayFabCatalogDataInternal_b__243_3(::PlayFab::PlayFabError*  error) ;

/// [CompilerGenerated]
/// @brief Method <GetCurrencyBalance>b__259_0, addr 0x5c63680, size 0x418, virtual false, abstract: false, final false
inline void _GetCurrencyBalance_b__259_0(::PlayFab::ClientModels::GetUserInventoryResult*  result) ;

/// [CompilerGenerated]
/// @brief Method <GetLastDailyLogin>b__237_0, addr 0x5c62b20, size 0xd8, virtual false, abstract: false, final false
inline void _GetLastDailyLogin_b__237_0(::PlayFab::ClientModels::GetUserDataResult*  result) ;

/// [CompilerGenerated]
/// @brief Method <GetLastDailyLogin>b__237_1, addr 0x5c62bf8, size 0x2b8, virtual false, abstract: false, final false
inline void _GetLastDailyLogin_b__237_1(::PlayFab::PlayFabError*  error) ;

/// [CompilerGenerated]
/// @brief Method <GetMyDaily>b__239_0, addr 0x5c62eb0, size 0x18, virtual false, abstract: false, final false
inline void _GetMyDaily_b__239_0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result) ;

/// [CompilerGenerated]
/// @brief Method <ProcessPurchaseItemState>b__210_0, addr 0x5c6281c, size 0x10, virtual false, abstract: false, final false
inline bool _ProcessPurchaseItemState_b__210_0(::GlobalNamespace::CosmeticsController_CosmeticItem  x) ;

/// [CompilerGenerated]
/// @brief Method <ProcessSteamCallback>b__250_0, addr 0x5c63678, size 0x4, virtual false, abstract: false, final false
inline void _ProcessSteamCallback_b__250_0(::PlayFab::ClientModels::ConfirmPurchaseResult*  _) ;

/// [CompilerGenerated]
/// @brief Method <ProcessSteamCallback>b__250_1, addr 0x5c6367c, size 0x4, virtual false, abstract: false, final false
inline void _ProcessSteamCallback_b__250_1(::PlayFab::ClientModels::ConfirmPurchaseResult*  _) ;

/// [CompilerGenerated]
/// @brief Method <PurchaseItem>b__212_0, addr 0x5c6282c, size 0x2e0, virtual false, abstract: false, final false
inline void _PurchaseItem_b__212_0(::PlayFab::ClientModels::PurchaseItemResult*  result) ;

/// [CompilerGenerated]
/// @brief Method <PurchaseItem>b__212_1, addr 0x5c62b0c, size 0x14, virtual false, abstract: false, final false
inline void _PurchaseItem_b__212_1(::PlayFab::PlayFabError*  error) ;

/// [CompilerGenerated]
/// @brief Method <ReconcileBundleRewardsIfNeeded>b__242_0, addr 0x5c62ec8, size 0xe8, virtual false, abstract: false, final false
inline void _ReconcileBundleRewardsIfNeeded_b__242_0(::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*  response) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__170_0, addr 0x5c62804, size 0x18, virtual false, abstract: false, final false
inline void _Start_b__170_0(::StringW  data) ;

constexpr ::StringW const& __cordl_internal_get_BundlePlayfabItemName() const;

constexpr ::StringW& __cordl_internal_get_BundlePlayfabItemName() ;

constexpr int32_t const& __cordl_internal_get_BundleShinyRocks() const;

constexpr int32_t& __cordl_internal_get_BundleShinyRocks() ;

constexpr ::StringW const& __cordl_internal_get_BundleSkuName() const;

constexpr ::StringW& __cordl_internal_get_BundleSkuName() ;

constexpr ::System::Action* const& __cordl_internal_get_OnCosmeticsUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_OnCosmeticsUpdated() ;

constexpr ::System::Action* const& __cordl_internal_get_OnGetCurrency() const;

constexpr ::System::Action*& __cordl_internal_get_OnGetCurrency() ;

constexpr ::System::Action* const& __cordl_internal_get_OnOutfitsUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_OnOutfitsUpdated() ;

constexpr ::System::Action* const& __cordl_internal_get_V2_OnGetCosmeticsPlayFabCatalogData_PostSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_V2_OnGetCosmeticsPlayFabCatalogData_PostSuccess() ;

constexpr ::System::Action* const& __cordl_internal_get_V2_allCosmeticsInfoAssetRef_OnPostLoad() const;

constexpr ::System::Action*& __cordl_internal_get_V2_allCosmeticsInfoAssetRef_OnPostLoad() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& __cordl_internal_get__allCosmetics() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& __cordl_internal_get__allCosmetics() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CosmeticsController_CosmeticItem>* const& __cordl_internal_get__allCosmeticsDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CosmeticsController_CosmeticItem>*& __cordl_internal_get__allCosmeticsDict() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaTag::CosmeticSystem::CosmeticInfoV2>* const& __cordl_internal_get__allCosmeticsDictV2() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaTag::CosmeticSystem::CosmeticInfoV2>*& __cordl_internal_get__allCosmeticsDictV2() ;

constexpr bool const& __cordl_internal_get__allCosmeticsDict_isInitialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__allCosmeticsDict_isInitialized_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__allCosmeticsItemIDsfromDisplayNamesDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__allCosmeticsItemIDsfromDisplayNamesDict() ;

constexpr bool const& __cordl_internal_get__allCosmeticsItemIDsfromDisplayNamesDict_isInitialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__allCosmeticsItemIDsfromDisplayNamesDict_isInitialized_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isHidingCosmeticsFromRemotePlayers_k__BackingField() const;

constexpr bool& __cordl_internal_get__isHidingCosmeticsFromRemotePlayers_k__BackingField() ;

constexpr ::Steamworks::Callback_1<::Steamworks::MicroTxnAuthorizationResponse_t>* const& __cordl_internal_get__steamMicroTransactionAuthorizationResponse() const;

constexpr ::Steamworks::Callback_1<::Steamworks::MicroTxnAuthorizationResponse_t>*& __cordl_internal_get__steamMicroTransactionAuthorizationResponse() ;

constexpr bool const& __cordl_internal_get__v2_allCosmeticsInfoAssetRef_isLoaded_k__BackingField() const;

constexpr bool& __cordl_internal_get__v2_allCosmeticsInfoAssetRef_isLoaded_k__BackingField() ;

constexpr ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticInfoV2> const& __cordl_internal_get__v2_allCosmetics_k__BackingField() const;

constexpr ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticInfoV2>& __cordl_internal_get__v2_allCosmetics_k__BackingField() ;

constexpr bool const& __cordl_internal_get__v2_isCosmeticPlayFabCatalogDataLoaded_k__BackingField() const;

constexpr bool& __cordl_internal_get__v2_isCosmeticPlayFabCatalogDataLoaded_k__BackingField() ;

constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet* const& __cordl_internal_get_activeMergedSet() const;

constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet*& __cordl_internal_get_activeMergedSet() ;

constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides> const& __cordl_internal_get_anchorOverrides() const;

constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>& __cordl_internal_get_anchorOverrides() ;

constexpr int32_t const& __cordl_internal_get_attempts() const;

constexpr int32_t& __cordl_internal_get_attempts() ;

constexpr ::GlobalNamespace::BundleList* const& __cordl_internal_get_bundleList() const;

constexpr ::GlobalNamespace::BundleList*& __cordl_internal_get_bundleList() ;

constexpr bool const& __cordl_internal_get_buyingBundle() const;

constexpr bool& __cordl_internal_get_buyingBundle() ;

constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet* const& __cordl_internal_get_cachedSet() const;

constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet*& __cordl_internal_get_cachedSet() ;

constexpr ::StringW const& __cordl_internal_get_catalog() const;

constexpr ::StringW& __cordl_internal_get_catalog() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CatalogItem*>* const& __cordl_internal_get_catalogItems() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CatalogItem*>*& __cordl_internal_get_catalogItems() ;

constexpr bool const& __cordl_internal_get_catalogRequestInFlight() const;

constexpr bool& __cordl_internal_get_catalogRequestInFlight() ;

constexpr bool const& __cordl_internal_get_catalogRequestRerunQueued() const;

constexpr bool& __cordl_internal_get_catalogRequestRerunQueued() ;

constexpr bool const& __cordl_internal_get_checkedDaily() const;

constexpr bool& __cordl_internal_get_checkedDaily() ;

constexpr bool const& __cordl_internal_get_checkoutCartButtonPressedWithLeft() const;

constexpr bool& __cordl_internal_get_checkoutCartButtonPressedWithLeft() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>* const& __cordl_internal_get_collectablesByParentID() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>*& __cordl_internal_get_collectablesByParentID() ;

constexpr ::StringW const& __cordl_internal_get_concatStringCosmeticsAllowed() const;

constexpr ::StringW& __cordl_internal_get_concatStringCosmeticsAllowed() ;

constexpr bool const& __cordl_internal_get_confirmedDidntPlayInBeta() const;

constexpr bool& __cordl_internal_get_confirmedDidntPlayInBeta() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get_cosmeticItemVar() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get_cosmeticItemVar() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticStand>> const& __cordl_internal_get_cosmeticStands() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticStand>>& __cordl_internal_get_cosmeticStands() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_cosmeticsPages() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_cosmeticsPages() ;

constexpr int32_t const& __cordl_internal_get_currencyBalance() const;

constexpr int32_t& __cordl_internal_get_currencyBalance() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::CurrencyBoard>>* const& __cordl_internal_get_currencyBoards() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::CurrencyBoard>>*& __cordl_internal_get_currencyBoards() ;

constexpr ::StringW const& __cordl_internal_get_currencyName() const;

constexpr ::StringW& __cordl_internal_get_currencyName() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& __cordl_internal_get_currentCart() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& __cordl_internal_get_currentCart() ;

constexpr ::StringW const& __cordl_internal_get_currentPurchaseID() const;

constexpr ::StringW& __cordl_internal_get_currentPurchaseID() ;

constexpr ::GlobalNamespace::CosmeticsController_PurchaseItemStages const& __cordl_internal_get_currentPurchaseItemStage() const;

constexpr ::GlobalNamespace::CosmeticsController_PurchaseItemStages& __cordl_internal_get_currentPurchaseItemStage() ;

constexpr ::System::DateTime const& __cordl_internal_get_currentTime() const;

constexpr ::System::DateTime& __cordl_internal_get_currentTime() ;

constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet* const& __cordl_internal_get_currentWornSet() const;

constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet*& __cordl_internal_get_currentWornSet() ;

constexpr ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData> const& __cordl_internal_get_customMapCosmeticsData() const;

constexpr ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData>& __cordl_internal_get_customMapCosmeticsData() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::EarlyAccessButton>> const& __cordl_internal_get_earlyAccessButtons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::EarlyAccessButton>>& __cordl_internal_get_earlyAccessButtons() ;

constexpr ::StringW const& __cordl_internal_get_finalLine() const;

constexpr ::StringW& __cordl_internal_get_finalLine() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::FittingRoom>>* const& __cordl_internal_get_fittingRooms() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::FittingRoom>>*& __cordl_internal_get_fittingRooms() ;

constexpr bool const& __cordl_internal_get_foundCosmetic() const;

constexpr bool& __cordl_internal_get_foundCosmetic() ;

constexpr bool const& __cordl_internal_get_gotMyDaily() const;

constexpr bool& __cordl_internal_get_gotMyDaily() ;

constexpr bool const& __cordl_internal_get_hasPrice() const;

constexpr bool& __cordl_internal_get_hasPrice() ;

constexpr bool const& __cordl_internal_get_isLastHandTouchedLeft() const;

constexpr bool& __cordl_internal_get_isLastHandTouchedLeft() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::ItemCheckout>>* const& __cordl_internal_get_itemCheckouts() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::ItemCheckout>>*& __cordl_internal_get_itemCheckouts() ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*> const& __cordl_internal_get_itemLists() const;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>& __cordl_internal_get_itemLists() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get_itemToBuy() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get_itemToBuy() ;

constexpr ::StringW const& __cordl_internal_get_itemToPurchase() const;

constexpr ::StringW& __cordl_internal_get_itemToPurchase() ;

constexpr int32_t const& __cordl_internal_get_iterator() const;

constexpr int32_t& __cordl_internal_get_iterator() ;

constexpr ::StringW const& __cordl_internal_get_lastDailyLogin() const;

constexpr ::StringW& __cordl_internal_get_lastDailyLogin() ;

constexpr ::PlayFab::ClientModels::GetUserInventoryResult* const& __cordl_internal_get_latestInventory() const;

constexpr ::PlayFab::ClientModels::GetUserInventoryResult*& __cordl_internal_get_latestInventory() ;

constexpr bool const& __cordl_internal_get_leftCheckoutPurchaseButtonOn() const;

constexpr bool& __cordl_internal_get_leftCheckoutPurchaseButtonOn() ;

constexpr ::StringW const& __cordl_internal_get_leftCheckoutPurchaseButtonString() const;

constexpr ::StringW& __cordl_internal_get_leftCheckoutPurchaseButtonString() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::StringW>,::GlobalNamespace::CosmeticsController_CollectionState>* const& __cordl_internal_get_localCycleStates() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::StringW>,::GlobalNamespace::CosmeticsController_CollectionState>*& __cordl_internal_get_localCycleStates() ;

constexpr ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> const& __cordl_internal_get_m_earlyAccessSupporterPackCosmeticSO() const;

constexpr ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>& __cordl_internal_get_m_earlyAccessSupporterPackCosmeticSO() ;

constexpr int32_t const& __cordl_internal_get_maxUpdateCosmeticsRetries() const;

constexpr int32_t& __cordl_internal_get_maxUpdateCosmeticsRetries() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get_nullItem() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get_nullItem() ;

constexpr int32_t const& __cordl_internal_get_numFittingRoomButtons() const;

constexpr int32_t& __cordl_internal_get_numFittingRoomButtons() ;

constexpr ::StringW const& __cordl_internal_get_outfitStringMothership() const;

constexpr ::StringW& __cordl_internal_get_outfitStringMothership() ;

constexpr ::StringW const& __cordl_internal_get_outfitStringPendingSave() const;

constexpr ::StringW& __cordl_internal_get_outfitStringPendingSave() ;

constexpr ::UnityW<::GlobalNamespace::CosmeticOutfitSystemConfig> const& __cordl_internal_get_outfitSystemConfig() const;

constexpr ::UnityW<::GlobalNamespace::CosmeticOutfitSystemConfig>& __cordl_internal_get_outfitSystemConfig() ;

constexpr bool const& __cordl_internal_get_playedInBeta() const;

constexpr bool& __cordl_internal_get_playedInBeta() ;

constexpr ::StringW const& __cordl_internal_get_purchaseLocation() const;

constexpr ::StringW& __cordl_internal_get_purchaseLocation() ;

constexpr ::StringW const& __cordl_internal_get_returnString() const;

constexpr ::StringW& __cordl_internal_get_returnString() ;

constexpr bool const& __cordl_internal_get_rightCheckoutPurchaseButtonOn() const;

constexpr bool& __cordl_internal_get_rightCheckoutPurchaseButtonOn() ;

constexpr ::StringW const& __cordl_internal_get_rightCheckoutPurchaseButtonString() const;

constexpr ::StringW& __cordl_internal_get_rightCheckoutPurchaseButtonString() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_savedColors() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_savedColors() ;

constexpr ::ArrayW<::GorillaNetworking::CosmeticsController_CosmeticSet*> const& __cordl_internal_get_savedOutfits() const;

constexpr ::ArrayW<::GorillaNetworking::CosmeticsController_CosmeticSet*>& __cordl_internal_get_savedOutfits() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_sb() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_sb() ;

constexpr int32_t const& __cordl_internal_get_searchIndex() const;

constexpr int32_t& __cordl_internal_get_searchIndex() ;

constexpr float_t const& __cordl_internal_get_secondsToWaitToCheckDaily() const;

constexpr float_t& __cordl_internal_get_secondsToWaitToCheckDaily() ;

constexpr int32_t const& __cordl_internal_get_secondsUntilTomorrow() const;

constexpr int32_t& __cordl_internal_get_secondsUntilTomorrow() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get_tempItem() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get_tempItem() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_tempStringArray() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_tempStringArray() ;

constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet* const& __cordl_internal_get_tempUnlockedSet() const;

constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet*& __cordl_internal_get_tempUnlockedSet() ;

constexpr bool const& __cordl_internal_get_tryGetCatalogTwice() const;

constexpr bool& __cordl_internal_get_tryGetCatalogTwice() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get_tryOnCollectableItem() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get_tryOnCollectableItem() ;

constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet* const& __cordl_internal_get_tryOnSet() const;

constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet*& __cordl_internal_get_tryOnSet() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& __cordl_internal_get_unlockedArms() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& __cordl_internal_get_unlockedArms() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& __cordl_internal_get_unlockedBacks() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& __cordl_internal_get_unlockedBacks() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& __cordl_internal_get_unlockedBadges() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& __cordl_internal_get_unlockedBadges() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& __cordl_internal_get_unlockedChests() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& __cordl_internal_get_unlockedChests() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& __cordl_internal_get_unlockedCosmetics() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& __cordl_internal_get_unlockedCosmetics() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& __cordl_internal_get_unlockedFaces() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& __cordl_internal_get_unlockedFaces() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& __cordl_internal_get_unlockedFurs() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& __cordl_internal_get_unlockedFurs() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& __cordl_internal_get_unlockedHats() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& __cordl_internal_get_unlockedHats() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& __cordl_internal_get_unlockedPants() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& __cordl_internal_get_unlockedPants() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& __cordl_internal_get_unlockedPaws() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& __cordl_internal_get_unlockedPaws() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& __cordl_internal_get_unlockedShirts() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& __cordl_internal_get_unlockedShirts() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& __cordl_internal_get_unlockedTagFX() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& __cordl_internal_get_unlockedTagFX() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& __cordl_internal_get_unlockedThrowables() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& __cordl_internal_get_unlockedThrowables() ;

constexpr int32_t const& __cordl_internal_get_updateCosmeticsRetries() const;

constexpr int32_t& __cordl_internal_get_updateCosmeticsRetries() ;

constexpr ::PlayFab::ClientModels::UserDataRecord* const& __cordl_internal_get_userDataRecord() const;

constexpr ::PlayFab::ClientModels::UserDataRecord*& __cordl_internal_get_userDataRecord() ;

constexpr ::GorillaTag::GTAssetRef_1<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>>* const& __cordl_internal_get_v2_allCosmeticsInfoAssetRef() const;

constexpr ::GorillaTag::GTAssetRef_1<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>>*& __cordl_internal_get_v2_allCosmeticsInfoAssetRef() ;

constexpr ::GorillaNetworking::CosmeticsController_ValidatedCreatorCode* const& __cordl_internal_get_validatedCreatorCode() const;

constexpr ::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*& __cordl_internal_get_validatedCreatorCode() ;

constexpr int32_t const& __cordl_internal_get_wardrobeType() const;

constexpr int32_t& __cordl_internal_get_wardrobeType() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WardrobeInstance>>* const& __cordl_internal_get_wardrobes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WardrobeInstance>>*& __cordl_internal_get_wardrobes() ;

constexpr void __cordl_internal_set_BundlePlayfabItemName(::StringW  value) ;

constexpr void __cordl_internal_set_BundleShinyRocks(int32_t  value) ;

constexpr void __cordl_internal_set_BundleSkuName(::StringW  value) ;

constexpr void __cordl_internal_set_OnCosmeticsUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnGetCurrency(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnOutfitsUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set_V2_OnGetCosmeticsPlayFabCatalogData_PostSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set_V2_allCosmeticsInfoAssetRef_OnPostLoad(::System::Action*  value) ;

constexpr void __cordl_internal_set__allCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

constexpr void __cordl_internal_set__allCosmeticsDict(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

constexpr void __cordl_internal_set__allCosmeticsDictV2(::System::Collections::Generic::Dictionary_2<::StringW,::GorillaTag::CosmeticSystem::CosmeticInfoV2>*  value) ;

constexpr void __cordl_internal_set__allCosmeticsDict_isInitialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__allCosmeticsItemIDsfromDisplayNamesDict(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__allCosmeticsItemIDsfromDisplayNamesDict_isInitialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isHidingCosmeticsFromRemotePlayers_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__steamMicroTransactionAuthorizationResponse(::Steamworks::Callback_1<::Steamworks::MicroTxnAuthorizationResponse_t>*  value) ;

constexpr void __cordl_internal_set__v2_allCosmeticsInfoAssetRef_isLoaded_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__v2_allCosmetics_k__BackingField(::ArrayW<::GorillaTag::CosmeticSystem::CosmeticInfoV2>  value) ;

constexpr void __cordl_internal_set__v2_isCosmeticPlayFabCatalogDataLoaded_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_activeMergedSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  value) ;

constexpr void __cordl_internal_set_anchorOverrides(::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  value) ;

constexpr void __cordl_internal_set_attempts(int32_t  value) ;

constexpr void __cordl_internal_set_bundleList(::GlobalNamespace::BundleList*  value) ;

constexpr void __cordl_internal_set_buyingBundle(bool  value) ;

constexpr void __cordl_internal_set_cachedSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  value) ;

constexpr void __cordl_internal_set_catalog(::StringW  value) ;

constexpr void __cordl_internal_set_catalogItems(::System::Collections::Generic::List_1<::PlayFab::ClientModels::CatalogItem*>*  value) ;

constexpr void __cordl_internal_set_catalogRequestInFlight(bool  value) ;

constexpr void __cordl_internal_set_catalogRequestRerunQueued(bool  value) ;

constexpr void __cordl_internal_set_checkedDaily(bool  value) ;

constexpr void __cordl_internal_set_checkoutCartButtonPressedWithLeft(bool  value) ;

constexpr void __cordl_internal_set_collectablesByParentID(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>*  value) ;

constexpr void __cordl_internal_set_concatStringCosmeticsAllowed(::StringW  value) ;

constexpr void __cordl_internal_set_confirmedDidntPlayInBeta(bool  value) ;

constexpr void __cordl_internal_set_cosmeticItemVar(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

constexpr void __cordl_internal_set_cosmeticStands(::ArrayW<::UnityW<::GlobalNamespace::CosmeticStand>>  value) ;

constexpr void __cordl_internal_set_cosmeticsPages(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_currencyBalance(int32_t  value) ;

constexpr void __cordl_internal_set_currencyBoards(::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::CurrencyBoard>>*  value) ;

constexpr void __cordl_internal_set_currencyName(::StringW  value) ;

constexpr void __cordl_internal_set_currentCart(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

constexpr void __cordl_internal_set_currentPurchaseID(::StringW  value) ;

constexpr void __cordl_internal_set_currentPurchaseItemStage(::GlobalNamespace::CosmeticsController_PurchaseItemStages  value) ;

constexpr void __cordl_internal_set_currentTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_currentWornSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  value) ;

constexpr void __cordl_internal_set_customMapCosmeticsData(::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData>  value) ;

constexpr void __cordl_internal_set_earlyAccessButtons(::ArrayW<::UnityW<::GlobalNamespace::EarlyAccessButton>>  value) ;

constexpr void __cordl_internal_set_finalLine(::StringW  value) ;

constexpr void __cordl_internal_set_fittingRooms(::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::FittingRoom>>*  value) ;

constexpr void __cordl_internal_set_foundCosmetic(bool  value) ;

constexpr void __cordl_internal_set_gotMyDaily(bool  value) ;

constexpr void __cordl_internal_set_hasPrice(bool  value) ;

constexpr void __cordl_internal_set_isLastHandTouchedLeft(bool  value) ;

constexpr void __cordl_internal_set_itemCheckouts(::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::ItemCheckout>>*  value) ;

constexpr void __cordl_internal_set_itemLists(::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>  value) ;

constexpr void __cordl_internal_set_itemToBuy(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

constexpr void __cordl_internal_set_itemToPurchase(::StringW  value) ;

constexpr void __cordl_internal_set_iterator(int32_t  value) ;

constexpr void __cordl_internal_set_lastDailyLogin(::StringW  value) ;

constexpr void __cordl_internal_set_latestInventory(::PlayFab::ClientModels::GetUserInventoryResult*  value) ;

constexpr void __cordl_internal_set_leftCheckoutPurchaseButtonOn(bool  value) ;

constexpr void __cordl_internal_set_leftCheckoutPurchaseButtonString(::StringW  value) ;

constexpr void __cordl_internal_set_localCycleStates(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::StringW>,::GlobalNamespace::CosmeticsController_CollectionState>*  value) ;

constexpr void __cordl_internal_set_m_earlyAccessSupporterPackCosmeticSO(::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  value) ;

constexpr void __cordl_internal_set_maxUpdateCosmeticsRetries(int32_t  value) ;

constexpr void __cordl_internal_set_nullItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

constexpr void __cordl_internal_set_numFittingRoomButtons(int32_t  value) ;

constexpr void __cordl_internal_set_outfitStringMothership(::StringW  value) ;

constexpr void __cordl_internal_set_outfitStringPendingSave(::StringW  value) ;

constexpr void __cordl_internal_set_outfitSystemConfig(::UnityW<::GlobalNamespace::CosmeticOutfitSystemConfig>  value) ;

constexpr void __cordl_internal_set_playedInBeta(bool  value) ;

constexpr void __cordl_internal_set_purchaseLocation(::StringW  value) ;

constexpr void __cordl_internal_set_returnString(::StringW  value) ;

constexpr void __cordl_internal_set_rightCheckoutPurchaseButtonOn(bool  value) ;

constexpr void __cordl_internal_set_rightCheckoutPurchaseButtonString(::StringW  value) ;

constexpr void __cordl_internal_set_savedColors(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_savedOutfits(::ArrayW<::GorillaNetworking::CosmeticsController_CosmeticSet*>  value) ;

constexpr void __cordl_internal_set_sb(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_searchIndex(int32_t  value) ;

constexpr void __cordl_internal_set_secondsToWaitToCheckDaily(float_t  value) ;

constexpr void __cordl_internal_set_secondsUntilTomorrow(int32_t  value) ;

constexpr void __cordl_internal_set_tempItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

constexpr void __cordl_internal_set_tempStringArray(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_tempUnlockedSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  value) ;

constexpr void __cordl_internal_set_tryGetCatalogTwice(bool  value) ;

constexpr void __cordl_internal_set_tryOnCollectableItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

constexpr void __cordl_internal_set_tryOnSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  value) ;

constexpr void __cordl_internal_set_unlockedArms(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

constexpr void __cordl_internal_set_unlockedBacks(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

constexpr void __cordl_internal_set_unlockedBadges(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

constexpr void __cordl_internal_set_unlockedChests(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

constexpr void __cordl_internal_set_unlockedCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

constexpr void __cordl_internal_set_unlockedFaces(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

constexpr void __cordl_internal_set_unlockedFurs(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

constexpr void __cordl_internal_set_unlockedHats(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

constexpr void __cordl_internal_set_unlockedPants(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

constexpr void __cordl_internal_set_unlockedPaws(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

constexpr void __cordl_internal_set_unlockedShirts(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

constexpr void __cordl_internal_set_unlockedTagFX(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

constexpr void __cordl_internal_set_unlockedThrowables(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

constexpr void __cordl_internal_set_updateCosmeticsRetries(int32_t  value) ;

constexpr void __cordl_internal_set_userDataRecord(::PlayFab::ClientModels::UserDataRecord*  value) ;

constexpr void __cordl_internal_set_v2_allCosmeticsInfoAssetRef(::GorillaTag::GTAssetRef_1<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>>*  value) ;

constexpr void __cordl_internal_set_validatedCreatorCode(::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*  value) ;

constexpr void __cordl_internal_set_wardrobeType(int32_t  value) ;

constexpr void __cordl_internal_set_wardrobes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WardrobeInstance>>*  value) ;

/// @brief Method .ctor, addr 0x5c61e84, size 0x77c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_3<float_t,float_t,float_t>* getStaticF_OnPlayerColorSet() ;

static inline ::System::Action_2<::StringW,::StringW>* getStaticF_PushTerminalMessage() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>* getStaticF__g_default_outAppliedSlotsList_for_applyCosmeticItemToSet() ;

static inline bool getStaticF__hasInstance_k__BackingField() ;

static inline ::ArrayW<int32_t> getStaticF_cycleStatesArray() ;

static inline ::UnityEngine::Vector3 getStaticF_defaultColor() ;

static inline ::UnityW<::GorillaNetworking::CosmeticsController> getStaticF_instance() ;

static inline bool getStaticF_loadOutfitsInProgress() ;

static inline bool getStaticF_loadedSavedOutfits() ;

static inline int32_t getStaticF_maxOutfits() ;

static inline ::GorillaNetworking::CosmeticsController_OutfitData* getStaticF_outfitDataTemp() ;

static inline bool getStaticF_saveOutfitInProgress() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* getStaticF_scratchCanonicalCollectables() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* getStaticF_scratchCanonicalIndexList() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>* getStaticF_scratchDisplayList() ;

static inline int32_t getStaticF_selectedOutfit() ;

/// @brief Method get_CurrencyBalance, addr 0x5c566c4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrencyBalance() ;

/// @brief Method get_EarlyAccessSupporterPackCosmeticSO, addr 0x5c566cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> get_EarlyAccessSupporterPackCosmeticSO() ;

/// @brief Method get_PurchaseLocation, addr 0x5c54f58, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PurchaseLocation() ;

/// @brief Method get_SelectedOutfit, addr 0x5c60060, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_SelectedOutfit() ;

/// @brief Method get_allCosmetics, addr 0x5c5507c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* get_allCosmetics() ;

/// @brief Method get_allCosmeticsDict, addr 0x5c5509c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CosmeticsController_CosmeticItem>* get_allCosmeticsDict() ;

/// [CompilerGenerated]
/// @brief Method get_allCosmeticsDict_isInitialized, addr 0x5c5508c, size 0x8, virtual false, abstract: false, final false
inline bool get_allCosmeticsDict_isInitialized() ;

/// @brief Method get_allCosmeticsItemIDsfromDisplayNamesDict, addr 0x5c550b4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_allCosmeticsItemIDsfromDisplayNamesDict() ;

/// [CompilerGenerated]
/// @brief Method get_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized, addr 0x5c550a4, size 0x8, virtual false, abstract: false, final false
inline bool get_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized() ;

/// @brief Method get_defaultClipOffsets, addr 0x5c550bc, size 0x60, virtual false, abstract: false, final false
inline ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets get_defaultClipOffsets() ;

/// [CompilerGenerated]
/// @brief Method get_hasInstance, addr 0x5c54ea0, size 0x58, virtual false, abstract: false, final false
static inline bool get_hasInstance() ;

/// [CompilerGenerated]
/// @brief Method get_isHidingCosmeticsFromRemotePlayers, addr 0x5c5511c, size 0x8, virtual false, abstract: false, final false
inline bool get_isHidingCosmeticsFromRemotePlayers() ;

/// [CompilerGenerated]
/// @brief Method get_v2_allCosmetics, addr 0x5c54688, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticInfoV2> get_v2_allCosmetics() ;

/// [CompilerGenerated]
/// @brief Method get_v2_allCosmeticsInfoAssetRef_isLoaded, addr 0x5c54698, size 0x8, virtual false, abstract: false, final false
inline bool get_v2_allCosmeticsInfoAssetRef_isLoaded() ;

/// [CompilerGenerated]
/// @brief Method get_v2_isCosmeticPlayFabCatalogDataLoaded, addr 0x5c546a8, size 0x8, virtual false, abstract: false, final false
inline bool get_v2_isCosmeticPlayFabCatalogDataLoaded() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

static inline void setStaticF_OnPlayerColorSet(::System::Action_3<float_t,float_t,float_t>*  value) ;

static inline void setStaticF_PushTerminalMessage(::System::Action_2<::StringW,::StringW>*  value) ;

static inline void setStaticF__g_default_outAppliedSlotsList_for_applyCosmeticItemToSet(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*  value) ;

static inline void setStaticF__hasInstance_k__BackingField(bool  value) ;

static inline void setStaticF_cycleStatesArray(::ArrayW<int32_t>  value) ;

static inline void setStaticF_defaultColor(::UnityEngine::Vector3  value) ;

static inline void setStaticF_instance(::UnityW<::GorillaNetworking::CosmeticsController>  value) ;

static inline void setStaticF_loadOutfitsInProgress(bool  value) ;

static inline void setStaticF_loadedSavedOutfits(bool  value) ;

static inline void setStaticF_maxOutfits(int32_t  value) ;

static inline void setStaticF_outfitDataTemp(::GorillaNetworking::CosmeticsController_OutfitData*  value) ;

static inline void setStaticF_saveOutfitInProgress(bool  value) ;

static inline void setStaticF_scratchCanonicalCollectables(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

static inline void setStaticF_scratchCanonicalIndexList(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

static inline void setStaticF_scratchDisplayList(::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*  value) ;

static inline void setStaticF_selectedOutfit(int32_t  value) ;

/// @brief Method set_PurchaseLocation, addr 0x5c54f60, size 0x8, virtual false, abstract: false, final false
inline void set_PurchaseLocation(::StringW  value) ;

/// @brief Method set_allCosmetics, addr 0x5c55084, size 0x8, virtual false, abstract: false, final false
inline void set_allCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_allCosmeticsDict_isInitialized, addr 0x5c55094, size 0x8, virtual false, abstract: false, final false
inline void set_allCosmeticsDict_isInitialized(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized, addr 0x5c550ac, size 0x8, virtual false, abstract: false, final false
inline void set_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_hasInstance, addr 0x5c54ef8, size 0x60, virtual false, abstract: false, final false
static inline void set_hasInstance(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isHidingCosmeticsFromRemotePlayers, addr 0x5c55124, size 0x8, virtual false, abstract: false, final false
inline void set_isHidingCosmeticsFromRemotePlayers(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_v2_allCosmetics, addr 0x5c54690, size 0x8, virtual false, abstract: false, final false
inline void set_v2_allCosmetics(::ArrayW<::GorillaTag::CosmeticSystem::CosmeticInfoV2>  value) ;

/// [CompilerGenerated]
/// @brief Method set_v2_allCosmeticsInfoAssetRef_isLoaded, addr 0x5c546a0, size 0x8, virtual false, abstract: false, final false
inline void set_v2_allCosmeticsInfoAssetRef_isLoaded(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_v2_isCosmeticPlayFabCatalogDataLoaded, addr 0x5c546b0, size 0x8, virtual false, abstract: false, final false
inline void set_v2_isCosmeticPlayFabCatalogDataLoaded(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController(CosmeticsController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController(CosmeticsController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4307};

/// @brief Field gtfcBundleGrantedKey offset 0xffffffff size 0x8
static constexpr ::ConstString  gtfcBundleGrantedKey{u"gtfcBundleGranted"};

/// @brief Field maximumTransferrableItems offset 0xffffffff size 0x4
static constexpr int32_t  maximumTransferrableItems{static_cast<int32_t>(0x5)};

/// @brief Field mothershipRewardsGrantedKey offset 0xffffffff size 0x8
static constexpr ::ConstString  mothershipRewardsGrantedKey{u"mshipRewardsGranted"};

/// [FormerlySerializedAs("v2AllCosmeticsInfoAssetRef")]
/// [FormerlySerializedAs("newSysAllCosmeticsAssetRef")]
/// [SerializeField]
/// @brief Field v2_allCosmeticsInfoAssetRef, offset: 0x20, size: 0x8, def value: None
 ::GorillaTag::GTAssetRef_1<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>>*  ___v2_allCosmeticsInfoAssetRef;

/// [CompilerGenerated]
/// @brief Field <v2_allCosmetics>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticInfoV2>  ____v2_allCosmetics_k__BackingField;

/// @brief Field _allCosmeticsDictV2, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaTag::CosmeticSystem::CosmeticInfoV2>*  ____allCosmeticsDictV2;

/// @brief Field V2_allCosmeticsInfoAssetRef_OnPostLoad, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___V2_allCosmeticsInfoAssetRef_OnPostLoad;

/// [CompilerGenerated]
/// @brief Field <v2_allCosmeticsInfoAssetRef_isLoaded>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____v2_allCosmeticsInfoAssetRef_isLoaded_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <v2_isCosmeticPlayFabCatalogDataLoaded>k__BackingField, offset: 0x41, size: 0x1, def value: None
 bool  ____v2_isCosmeticPlayFabCatalogDataLoaded_k__BackingField;

/// @brief Field V2_OnGetCosmeticsPlayFabCatalogData_PostSuccess, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___V2_OnGetCosmeticsPlayFabCatalogData_PostSuccess;

/// @brief Field OnGetCurrency, offset: 0x50, size: 0x8, def value: None
 ::System::Action*  ___OnGetCurrency;

/// @brief Field purchaseLocation, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___purchaseLocation;

/// [FormerlySerializedAs("allCosmetics")]
/// [SerializeField]
/// @brief Field _allCosmetics, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  ____allCosmetics;

/// [CompilerGenerated]
/// @brief Field <allCosmeticsDict_isInitialized>k__BackingField, offset: 0x68, size: 0x1, def value: None
 bool  ____allCosmeticsDict_isInitialized_k__BackingField;

/// @brief Field _allCosmeticsDict, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CosmeticsController_CosmeticItem>*  ____allCosmeticsDict;

/// [CompilerGenerated]
/// @brief Field <allCosmeticsItemIDsfromDisplayNamesDict_isInitialized>k__BackingField, offset: 0x78, size: 0x1, def value: None
 bool  ____allCosmeticsItemIDsfromDisplayNamesDict_isInitialized_k__BackingField;

/// @brief Field _allCosmeticsItemIDsfromDisplayNamesDict, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____allCosmeticsItemIDsfromDisplayNamesDict;

/// @brief Field nullItem, offset: 0x88, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ___nullItem;

/// @brief Field catalog, offset: 0x120, size: 0x8, def value: None
 ::StringW  ___catalog;

/// @brief Field tempStringArray, offset: 0x128, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___tempStringArray;

/// @brief Field tempItem, offset: 0x130, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ___tempItem;

/// @brief Field anchorOverrides, offset: 0x1c8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  ___anchorOverrides;

/// @brief Field catalogItems, offset: 0x1d0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CatalogItem*>*  ___catalogItems;

/// @brief Field tryGetCatalogTwice, offset: 0x1d8, size: 0x1, def value: None
 bool  ___tryGetCatalogTwice;

/// @brief Field catalogRequestInFlight, offset: 0x1d9, size: 0x1, def value: None
 bool  ___catalogRequestInFlight;

/// @brief Field catalogRequestRerunQueued, offset: 0x1da, size: 0x1, def value: None
 bool  ___catalogRequestRerunQueued;

/// @brief Field customMapCosmeticsData, offset: 0x1e0, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData>  ___customMapCosmeticsData;

/// @brief Field tryOnSet, offset: 0x1e8, size: 0x8, def value: None
 ::GorillaNetworking::CosmeticsController_CosmeticSet*  ___tryOnSet;

/// @brief Field numFittingRoomButtons, offset: 0x1f0, size: 0x4, def value: None
 int32_t  ___numFittingRoomButtons;

/// @brief Field fittingRooms, offset: 0x1f8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::FittingRoom>>*  ___fittingRooms;

/// @brief Field cosmeticStands, offset: 0x200, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::CosmeticStand>>  ___cosmeticStands;

/// @brief Field currentCart, offset: 0x208, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  ___currentCart;

/// @brief Field currentPurchaseItemStage, offset: 0x210, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticsController_PurchaseItemStages  ___currentPurchaseItemStage;

/// @brief Field itemCheckouts, offset: 0x218, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::ItemCheckout>>*  ___itemCheckouts;

/// @brief Field itemToBuy, offset: 0x220, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ___itemToBuy;

/// @brief Field foundCosmetic, offset: 0x2b8, size: 0x1, def value: None
 bool  ___foundCosmetic;

/// @brief Field attempts, offset: 0x2bc, size: 0x4, def value: None
 int32_t  ___attempts;

/// @brief Field finalLine, offset: 0x2c0, size: 0x8, def value: None
 ::StringW  ___finalLine;

/// @brief Field leftCheckoutPurchaseButtonString, offset: 0x2c8, size: 0x8, def value: None
 ::StringW  ___leftCheckoutPurchaseButtonString;

/// @brief Field rightCheckoutPurchaseButtonString, offset: 0x2d0, size: 0x8, def value: None
 ::StringW  ___rightCheckoutPurchaseButtonString;

/// @brief Field leftCheckoutPurchaseButtonOn, offset: 0x2d8, size: 0x1, def value: None
 bool  ___leftCheckoutPurchaseButtonOn;

/// @brief Field rightCheckoutPurchaseButtonOn, offset: 0x2d9, size: 0x1, def value: None
 bool  ___rightCheckoutPurchaseButtonOn;

/// @brief Field isLastHandTouchedLeft, offset: 0x2da, size: 0x1, def value: None
 bool  ___isLastHandTouchedLeft;

/// @brief Field cachedSet, offset: 0x2e0, size: 0x8, def value: None
 ::GorillaNetworking::CosmeticsController_CosmeticSet*  ___cachedSet;

/// [CompilerGenerated]
/// @brief Field <isHidingCosmeticsFromRemotePlayers>k__BackingField, offset: 0x2e8, size: 0x1, def value: None
 bool  ____isHidingCosmeticsFromRemotePlayers_k__BackingField;

/// @brief Field wardrobes, offset: 0x2f0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WardrobeInstance>>*  ___wardrobes;

/// @brief Field unlockedCosmetics, offset: 0x2f8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  ___unlockedCosmetics;

/// @brief Field unlockedHats, offset: 0x300, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  ___unlockedHats;

/// @brief Field unlockedFaces, offset: 0x308, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  ___unlockedFaces;

/// @brief Field unlockedBadges, offset: 0x310, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  ___unlockedBadges;

/// @brief Field unlockedPaws, offset: 0x318, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  ___unlockedPaws;

/// @brief Field unlockedChests, offset: 0x320, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  ___unlockedChests;

/// @brief Field unlockedFurs, offset: 0x328, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  ___unlockedFurs;

/// @brief Field unlockedShirts, offset: 0x330, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  ___unlockedShirts;

/// @brief Field unlockedPants, offset: 0x338, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  ___unlockedPants;

/// @brief Field unlockedBacks, offset: 0x340, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  ___unlockedBacks;

/// @brief Field unlockedArms, offset: 0x348, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  ___unlockedArms;

/// @brief Field unlockedTagFX, offset: 0x350, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  ___unlockedTagFX;

/// @brief Field unlockedThrowables, offset: 0x358, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  ___unlockedThrowables;

/// @brief Field cosmeticsPages, offset: 0x360, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___cosmeticsPages;

/// @brief Field itemLists, offset: 0x368, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>  ___itemLists;

/// @brief Field wardrobeType, offset: 0x370, size: 0x4, def value: None
 int32_t  ___wardrobeType;

/// @brief Field currentWornSet, offset: 0x378, size: 0x8, def value: None
 ::GorillaNetworking::CosmeticsController_CosmeticSet*  ___currentWornSet;

/// @brief Field tempUnlockedSet, offset: 0x380, size: 0x8, def value: None
 ::GorillaNetworking::CosmeticsController_CosmeticSet*  ___tempUnlockedSet;

/// @brief Field activeMergedSet, offset: 0x388, size: 0x8, def value: None
 ::GorillaNetworking::CosmeticsController_CosmeticSet*  ___activeMergedSet;

/// @brief Field tryOnCollectableItem, offset: 0x390, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ___tryOnCollectableItem;

/// @brief Field concatStringCosmeticsAllowed, offset: 0x428, size: 0x8, def value: None
 ::StringW  ___concatStringCosmeticsAllowed;

/// @brief Field OnCosmeticsUpdated, offset: 0x430, size: 0x8, def value: None
 ::System::Action*  ___OnCosmeticsUpdated;

/// @brief Field collectablesByParentID, offset: 0x438, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>*  ___collectablesByParentID;

/// [TupleElementNames(new[] { "rig", "parentID" })]
/// @brief Field localCycleStates, offset: 0x440, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::StringW>,::GlobalNamespace::CosmeticsController_CollectionState>*  ___localCycleStates;

/// @brief Field currencyBalance, offset: 0x448, size: 0x4, def value: None
 int32_t  ___currencyBalance;

/// @brief Field currencyName, offset: 0x450, size: 0x8, def value: None
 ::StringW  ___currencyName;

/// @brief Field currencyBoards, offset: 0x458, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::CurrencyBoard>>*  ___currencyBoards;

/// @brief Field itemToPurchase, offset: 0x460, size: 0x8, def value: None
 ::StringW  ___itemToPurchase;

/// @brief Field buyingBundle, offset: 0x468, size: 0x1, def value: None
 bool  ___buyingBundle;

/// @brief Field confirmedDidntPlayInBeta, offset: 0x469, size: 0x1, def value: None
 bool  ___confirmedDidntPlayInBeta;

/// @brief Field playedInBeta, offset: 0x46a, size: 0x1, def value: None
 bool  ___playedInBeta;

/// @brief Field gotMyDaily, offset: 0x46b, size: 0x1, def value: None
 bool  ___gotMyDaily;

/// @brief Field checkedDaily, offset: 0x46c, size: 0x1, def value: None
 bool  ___checkedDaily;

/// @brief Field currentPurchaseID, offset: 0x470, size: 0x8, def value: None
 ::StringW  ___currentPurchaseID;

/// @brief Field hasPrice, offset: 0x478, size: 0x1, def value: None
 bool  ___hasPrice;

/// @brief Field searchIndex, offset: 0x47c, size: 0x4, def value: None
 int32_t  ___searchIndex;

/// @brief Field iterator, offset: 0x480, size: 0x4, def value: None
 int32_t  ___iterator;

/// @brief Field cosmeticItemVar, offset: 0x488, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ___cosmeticItemVar;

/// [SerializeField]
/// @brief Field m_earlyAccessSupporterPackCosmeticSO, offset: 0x520, size: 0x8, def value: None
 ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  ___m_earlyAccessSupporterPackCosmeticSO;

/// @brief Field earlyAccessButtons, offset: 0x528, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::EarlyAccessButton>>  ___earlyAccessButtons;

/// @brief Field bundleList, offset: 0x530, size: 0x8, def value: None
 ::GlobalNamespace::BundleList*  ___bundleList;

/// @brief Field BundleSkuName, offset: 0x538, size: 0x8, def value: None
 ::StringW  ___BundleSkuName;

/// @brief Field BundlePlayfabItemName, offset: 0x540, size: 0x8, def value: None
 ::StringW  ___BundlePlayfabItemName;

/// @brief Field BundleShinyRocks, offset: 0x548, size: 0x4, def value: None
 int32_t  ___BundleShinyRocks;

/// @brief Field currentTime, offset: 0x550, size: 0x8, def value: None
 ::System::DateTime  ___currentTime;

/// @brief Field lastDailyLogin, offset: 0x558, size: 0x8, def value: None
 ::StringW  ___lastDailyLogin;

/// @brief Field userDataRecord, offset: 0x560, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserDataRecord*  ___userDataRecord;

/// @brief Field secondsUntilTomorrow, offset: 0x568, size: 0x4, def value: None
 int32_t  ___secondsUntilTomorrow;

/// @brief Field secondsToWaitToCheckDaily, offset: 0x56c, size: 0x4, def value: None
 float_t  ___secondsToWaitToCheckDaily;

/// @brief Field updateCosmeticsRetries, offset: 0x570, size: 0x4, def value: None
 int32_t  ___updateCosmeticsRetries;

/// @brief Field maxUpdateCosmeticsRetries, offset: 0x574, size: 0x4, def value: None
 int32_t  ___maxUpdateCosmeticsRetries;

/// @brief Field latestInventory, offset: 0x578, size: 0x8, def value: None
 ::PlayFab::ClientModels::GetUserInventoryResult*  ___latestInventory;

/// @brief Field returnString, offset: 0x580, size: 0x8, def value: None
 ::StringW  ___returnString;

/// @brief Field checkoutCartButtonPressedWithLeft, offset: 0x588, size: 0x1, def value: None
 bool  ___checkoutCartButtonPressedWithLeft;

/// @brief Field validatedCreatorCode, offset: 0x590, size: 0x8, def value: None
 ::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*  ___validatedCreatorCode;

/// @brief Field _steamMicroTransactionAuthorizationResponse, offset: 0x598, size: 0x8, def value: None
 ::Steamworks::Callback_1<::Steamworks::MicroTxnAuthorizationResponse_t>*  ____steamMicroTransactionAuthorizationResponse;

/// [SerializeField]
/// @brief Field outfitSystemConfig, offset: 0x5a0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CosmeticOutfitSystemConfig>  ___outfitSystemConfig;

/// @brief Field savedOutfits, offset: 0x5a8, size: 0x8, def value: None
 ::ArrayW<::GorillaNetworking::CosmeticsController_CosmeticSet*>  ___savedOutfits;

/// @brief Field savedColors, offset: 0x5b0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___savedColors;

/// @brief Field outfitStringMothership, offset: 0x5b8, size: 0x8, def value: None
 ::StringW  ___outfitStringMothership;

/// @brief Field outfitStringPendingSave, offset: 0x5c0, size: 0x8, def value: None
 ::StringW  ___outfitStringPendingSave;

/// @brief Field OnOutfitsUpdated, offset: 0x5c8, size: 0x8, def value: None
 ::System::Action*  ___OnOutfitsUpdated;

/// @brief Field sb, offset: 0x5d0, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___sb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___v2_allCosmeticsInfoAssetRef) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ____v2_allCosmetics_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ____allCosmeticsDictV2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___V2_allCosmeticsInfoAssetRef_OnPostLoad) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ____v2_allCosmeticsInfoAssetRef_isLoaded_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ____v2_isCosmeticPlayFabCatalogDataLoaded_k__BackingField) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___V2_OnGetCosmeticsPlayFabCatalogData_PostSuccess) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___OnGetCurrency) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___purchaseLocation) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ____allCosmetics) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ____allCosmeticsDict_isInitialized_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ____allCosmeticsDict) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ____allCosmeticsItemIDsfromDisplayNamesDict_isInitialized_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ____allCosmeticsItemIDsfromDisplayNamesDict) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___nullItem) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___catalog) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___tempStringArray) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___tempItem) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___anchorOverrides) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___catalogItems) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___tryGetCatalogTwice) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___catalogRequestInFlight) == 0x1d9, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___catalogRequestRerunQueued) == 0x1da, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___customMapCosmeticsData) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___tryOnSet) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___numFittingRoomButtons) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___fittingRooms) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___cosmeticStands) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___currentCart) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___currentPurchaseItemStage) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___itemCheckouts) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___itemToBuy) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___foundCosmetic) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___attempts) == 0x2bc, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___finalLine) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___leftCheckoutPurchaseButtonString) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___rightCheckoutPurchaseButtonString) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___leftCheckoutPurchaseButtonOn) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___rightCheckoutPurchaseButtonOn) == 0x2d9, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___isLastHandTouchedLeft) == 0x2da, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___cachedSet) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ____isHidingCosmeticsFromRemotePlayers_k__BackingField) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___wardrobes) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___unlockedCosmetics) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___unlockedHats) == 0x300, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___unlockedFaces) == 0x308, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___unlockedBadges) == 0x310, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___unlockedPaws) == 0x318, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___unlockedChests) == 0x320, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___unlockedFurs) == 0x328, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___unlockedShirts) == 0x330, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___unlockedPants) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___unlockedBacks) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___unlockedArms) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___unlockedTagFX) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___unlockedThrowables) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___cosmeticsPages) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___itemLists) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___wardrobeType) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___currentWornSet) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___tempUnlockedSet) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___activeMergedSet) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___tryOnCollectableItem) == 0x390, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___concatStringCosmeticsAllowed) == 0x428, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___OnCosmeticsUpdated) == 0x430, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___collectablesByParentID) == 0x438, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___localCycleStates) == 0x440, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___currencyBalance) == 0x448, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___currencyName) == 0x450, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___currencyBoards) == 0x458, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___itemToPurchase) == 0x460, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___buyingBundle) == 0x468, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___confirmedDidntPlayInBeta) == 0x469, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___playedInBeta) == 0x46a, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___gotMyDaily) == 0x46b, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___checkedDaily) == 0x46c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___currentPurchaseID) == 0x470, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___hasPrice) == 0x478, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___searchIndex) == 0x47c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___iterator) == 0x480, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___cosmeticItemVar) == 0x488, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___m_earlyAccessSupporterPackCosmeticSO) == 0x520, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___earlyAccessButtons) == 0x528, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___bundleList) == 0x530, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___BundleSkuName) == 0x538, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___BundlePlayfabItemName) == 0x540, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___BundleShinyRocks) == 0x548, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___currentTime) == 0x550, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___lastDailyLogin) == 0x558, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___userDataRecord) == 0x560, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___secondsUntilTomorrow) == 0x568, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___secondsToWaitToCheckDaily) == 0x56c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___updateCosmeticsRetries) == 0x570, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___maxUpdateCosmeticsRetries) == 0x574, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___latestInventory) == 0x578, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___returnString) == 0x580, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___checkoutCartButtonPressedWithLeft) == 0x588, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___validatedCreatorCode) == 0x590, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ____steamMicroTransactionAuthorizationResponse) == 0x598, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___outfitSystemConfig) == 0x5a0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___savedOutfits) == 0x5a8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___savedColors) == 0x5b0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___outfitStringMothership) == 0x5b8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___outfitStringPendingSave) == 0x5c0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___OnOutfitsUpdated) == 0x5c8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController, ___sb) == 0x5d0, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController) == 0x5d8, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<WaitForNextCosmeticsAttempt>d__264
class CORDL_TYPE CosmeticsController__WaitForNextCosmeticsAttempt_d__264 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::CosmeticsController>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c6fe0c, size 0xf0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c6fefc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c6ff04, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c6ff3c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c6fe08, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::CosmeticsController>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c6fde0, size 0x28, virtual false, abstract: false, final false
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
constexpr CosmeticsController__WaitForNextCosmeticsAttempt_d__264() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController__WaitForNextCosmeticsAttempt_d__264", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController__WaitForNextCosmeticsAttempt_d__264(CosmeticsController__WaitForNextCosmeticsAttempt_d__264 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController__WaitForNextCosmeticsAttempt_d__264", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController__WaitForNextCosmeticsAttempt_d__264(CosmeticsController__WaitForNextCosmeticsAttempt_d__264 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4306};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::CosmeticsController>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<V2_allCosmeticsInfoAssetRefSO_LoadCoroutine>d__16
class CORDL_TYPE CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::CosmeticsController>  __4__this;

/// @brief Field <newSysAllCosmeticsAsyncOp>5__4, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get__newSysAllCosmeticsAsyncOp_5__4, put=__cordl_internal_set__newSysAllCosmeticsAsyncOp_5__4)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>>  _newSysAllCosmeticsAsyncOp_5__4;

/// @brief Field <retryCount>5__3, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__retryCount_5__3, put=__cordl_internal_set__retryCount_5__3)) int32_t  _retryCount_5__3;

/// @brief Field <retryWaitTimes>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__retryWaitTimes_5__2, put=__cordl_internal_set__retryWaitTimes_5__2)) ::ArrayW<float_t>  _retryWaitTimes_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c6f888, size 0x510, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c6fd98, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c6fda0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c6fdd8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c6f884, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>> const& __cordl_internal_get__newSysAllCosmeticsAsyncOp_5__4() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>>& __cordl_internal_get__newSysAllCosmeticsAsyncOp_5__4() ;

constexpr int32_t const& __cordl_internal_get__retryCount_5__3() const;

constexpr int32_t& __cordl_internal_get__retryCount_5__3() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__retryWaitTimes_5__2() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__retryWaitTimes_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::CosmeticsController>  value) ;

constexpr void __cordl_internal_set__newSysAllCosmeticsAsyncOp_5__4(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>>  value) ;

constexpr void __cordl_internal_set__retryCount_5__3(int32_t  value) ;

constexpr void __cordl_internal_set__retryWaitTimes_5__2(::ArrayW<float_t>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c6f85c, size 0x28, virtual false, abstract: false, final false
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
constexpr CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16(CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16(CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4305};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::CosmeticsController>  _____4__this;

/// @brief Field <retryWaitTimes>5__2, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<float_t>  ____retryWaitTimes_5__2;

/// @brief Field <retryCount>5__3, offset: 0x30, size: 0x4, def value: None
 int32_t  ____retryCount_5__3;

/// @brief Field <newSysAllCosmeticsAsyncOp>5__4, offset: 0x38, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>>  ____newSysAllCosmeticsAsyncOp_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16, ____retryWaitTimes_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16, ____retryCount_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16, ____newSysAllCosmeticsAsyncOp_5__4) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16) == 0x50, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<GetMyDaily>d__239
class CORDL_TYPE CosmeticsController__GetMyDaily_d__239 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::CosmeticsController>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c6e3c4, size 0x1d8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::CosmeticsController__GetMyDaily_d__239* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c6e59c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c6e5a4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c6e5dc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c6e3c0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::CosmeticsController>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c6e398, size 0x28, virtual false, abstract: false, final false
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
constexpr CosmeticsController__GetMyDaily_d__239() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController__GetMyDaily_d__239", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController__GetMyDaily_d__239(CosmeticsController__GetMyDaily_d__239 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController__GetMyDaily_d__239", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController__GetMyDaily_d__239(CosmeticsController__GetMyDaily_d__239 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4301};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::CosmeticsController>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController__GetMyDaily_d__239, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController__GetMyDaily_d__239, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController__GetMyDaily_d__239, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController__GetMyDaily_d__239) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<CheckIfMyCosmeticsUpdated>d__215
class CORDL_TYPE CosmeticsController__CheckIfMyCosmeticsUpdated_d__215 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::CosmeticsController>  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GorillaNetworking::CosmeticsController___c__DisplayClass215_0*  __8__1;

/// @brief Field itemToBuyID, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemToBuyID, put=__cordl_internal_set_itemToBuyID)) ::StringW  itemToBuyID;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c6dee8, size 0x468, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c6e350, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c6e358, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c6e390, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c6dee4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& __cordl_internal_get___4__this() ;

constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass215_0* const& __cordl_internal_get___8__1() const;

constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass215_0*& __cordl_internal_get___8__1() ;

constexpr ::StringW const& __cordl_internal_get_itemToBuyID() const;

constexpr ::StringW& __cordl_internal_get_itemToBuyID() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::CosmeticsController>  value) ;

constexpr void __cordl_internal_set___8__1(::GorillaNetworking::CosmeticsController___c__DisplayClass215_0*  value) ;

constexpr void __cordl_internal_set_itemToBuyID(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c6debc, size 0x28, virtual false, abstract: false, final false
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
constexpr CosmeticsController__CheckIfMyCosmeticsUpdated_d__215() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController__CheckIfMyCosmeticsUpdated_d__215", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController__CheckIfMyCosmeticsUpdated_d__215(CosmeticsController__CheckIfMyCosmeticsUpdated_d__215 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController__CheckIfMyCosmeticsUpdated_d__215", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController__CheckIfMyCosmeticsUpdated_d__215(CosmeticsController__CheckIfMyCosmeticsUpdated_d__215 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4300};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::CosmeticsController>  _____4__this;

/// @brief Field itemToBuyID, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___itemToBuyID;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::GorillaNetworking::CosmeticsController___c__DisplayClass215_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215, ___itemToBuyID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215, _____8__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215) == 0x38, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<CheckCanGetDaily>d__238
class CORDL_TYPE CosmeticsController__CheckCanGetDaily_d__238 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::CosmeticsController>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c6d97c, size 0x4f8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c6de74, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c6de7c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c6deb4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c6d978, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::CosmeticsController>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c6d950, size 0x28, virtual false, abstract: false, final false
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
constexpr CosmeticsController__CheckCanGetDaily_d__238() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController__CheckCanGetDaily_d__238", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController__CheckCanGetDaily_d__238(CosmeticsController__CheckCanGetDaily_d__238 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController__CheckCanGetDaily_d__238", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController__CheckCanGetDaily_d__238(CosmeticsController__CheckCanGetDaily_d__238 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4299};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::CosmeticsController>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<>c__DisplayClass269_0
class CORDL_TYPE CosmeticsController___c__DisplayClass269_0 : public ::System::Object {
public:
// Declarations
/// @brief Field cosmeticID, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticID, put=__cordl_internal_set_cosmeticID)) ::StringW  cosmeticID;

static inline ::GorillaNetworking::CosmeticsController___c__DisplayClass269_0* New_ctor() ;

/// @brief Method <RemoveTempUnlockFromWardrobe>b__0, addr 0x5c6d940, size 0x10, virtual false, abstract: false, final false
inline bool _RemoveTempUnlockFromWardrobe_b__0(::GlobalNamespace::CosmeticsController_CosmeticItem  x) ;

constexpr ::StringW const& __cordl_internal_get_cosmeticID() const;

constexpr ::StringW& __cordl_internal_get_cosmeticID() ;

constexpr void __cordl_internal_set_cosmeticID(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c6d938, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController___c__DisplayClass269_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass269_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController___c__DisplayClass269_0(CosmeticsController___c__DisplayClass269_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass269_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController___c__DisplayClass269_0(CosmeticsController___c__DisplayClass269_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4298};

/// @brief Field cosmeticID, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___cosmeticID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass269_0, ___cosmeticID) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController___c__DisplayClass269_0) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<>c__DisplayClass268_0
class CORDL_TYPE CosmeticsController___c__DisplayClass268_0 : public ::System::Object {
public:
// Declarations
/// @brief Field cosmeticID, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticID, put=__cordl_internal_set_cosmeticID)) ::StringW  cosmeticID;

static inline ::GorillaNetworking::CosmeticsController___c__DisplayClass268_0* New_ctor() ;

/// @brief Method <AddTempUnlockToWardrobe>b__0, addr 0x5c6d928, size 0x10, virtual false, abstract: false, final false
inline bool _AddTempUnlockToWardrobe_b__0(::GlobalNamespace::CosmeticsController_CosmeticItem  x) ;

constexpr ::StringW const& __cordl_internal_get_cosmeticID() const;

constexpr ::StringW& __cordl_internal_get_cosmeticID() ;

constexpr void __cordl_internal_set_cosmeticID(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c6d920, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController___c__DisplayClass268_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass268_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController___c__DisplayClass268_0(CosmeticsController___c__DisplayClass268_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass268_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController___c__DisplayClass268_0(CosmeticsController___c__DisplayClass268_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4297};

/// @brief Field cosmeticID, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___cosmeticID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass268_0, ___cosmeticID) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController___c__DisplayClass268_0) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<>c__DisplayClass265_0
class CORDL_TYPE CosmeticsController___c__DisplayClass265_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::CosmeticsController>  __4__this;

/// @brief Field inventory, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_inventory, put=__cordl_internal_set_inventory)) ::PlayFab::ClientModels::GetUserInventoryResult*  inventory;

static inline ::GorillaNetworking::CosmeticsController___c__DisplayClass265_0* New_ctor() ;

/// @brief Method <ConfirmIndividualCosmeticsSharedGroup>b__0, addr 0x5c6d544, size 0x3ac, virtual false, abstract: false, final false
inline void _ConfirmIndividualCosmeticsSharedGroup_b__0(::PlayFab::ClientModels::GetSharedGroupDataResult*  result) ;

/// @brief Method <ConfirmIndividualCosmeticsSharedGroup>b__1, addr 0x5c6d8f0, size 0x30, virtual false, abstract: false, final false
inline void _ConfirmIndividualCosmeticsSharedGroup_b__1(::PlayFab::PlayFabError*  error) ;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& __cordl_internal_get___4__this() ;

constexpr ::PlayFab::ClientModels::GetUserInventoryResult* const& __cordl_internal_get_inventory() const;

constexpr ::PlayFab::ClientModels::GetUserInventoryResult*& __cordl_internal_get_inventory() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::CosmeticsController>  value) ;

constexpr void __cordl_internal_set_inventory(::PlayFab::ClientModels::GetUserInventoryResult*  value) ;

/// @brief Method .ctor, addr 0x5c6d53c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController___c__DisplayClass265_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass265_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController___c__DisplayClass265_0(CosmeticsController___c__DisplayClass265_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass265_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController___c__DisplayClass265_0(CosmeticsController___c__DisplayClass265_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4296};

/// @brief Field inventory, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::ClientModels::GetUserInventoryResult*  ___inventory;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::CosmeticsController>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass265_0, ___inventory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass265_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController___c__DisplayClass265_0) == 0x20, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<>c__DisplayClass243_6
class CORDL_TYPE CosmeticsController___c__DisplayClass243_6 : public ::System::Object {
public:
// Declarations
/// @brief Field item, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_item, put=__cordl_internal_set_item)) ::PlayFab::ClientModels::ItemInstance*  item;

static inline ::GorillaNetworking::CosmeticsController___c__DisplayClass243_6* New_ctor() ;

/// @brief Method <GetCosmeticsPlayFabCatalogDataInternal>b__11, addr 0x5c6d51c, size 0x20, virtual false, abstract: false, final false
inline bool _GetCosmeticsPlayFabCatalogDataInternal_b__11(::GlobalNamespace::CosmeticsController_CosmeticItem  x) ;

constexpr ::PlayFab::ClientModels::ItemInstance* const& __cordl_internal_get_item() const;

constexpr ::PlayFab::ClientModels::ItemInstance*& __cordl_internal_get_item() ;

constexpr void __cordl_internal_set_item(::PlayFab::ClientModels::ItemInstance*  value) ;

/// @brief Method .ctor, addr 0x5c6d440, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController___c__DisplayClass243_6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass243_6", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController___c__DisplayClass243_6(CosmeticsController___c__DisplayClass243_6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass243_6", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController___c__DisplayClass243_6(CosmeticsController___c__DisplayClass243_6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4295};

/// @brief Field item, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::ClientModels::ItemInstance*  ___item;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass243_6, ___item) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController___c__DisplayClass243_6) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies BundleData, System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<>c__DisplayClass243_5
class CORDL_TYPE CosmeticsController___c__DisplayClass243_5 : public ::System::Object {
public:
// Declarations
/// @brief Field bundleMapping, offset 0x10, size 0x48 
 __declspec(property(get=__cordl_internal_get_bundleMapping, put=__cordl_internal_set_bundleMapping)) ::GlobalNamespace::BundleData  bundleMapping;

static inline ::GorillaNetworking::CosmeticsController___c__DisplayClass243_5* New_ctor() ;

/// @brief Method <GetCosmeticsPlayFabCatalogDataInternal>b__10, addr 0x5c6d4fc, size 0x20, virtual false, abstract: false, final false
inline bool _GetCosmeticsPlayFabCatalogDataInternal_b__10(::PlayFab::ClientModels::CatalogItem*  ci) ;

constexpr ::GlobalNamespace::BundleData const& __cordl_internal_get_bundleMapping() const;

constexpr ::GlobalNamespace::BundleData& __cordl_internal_get_bundleMapping() ;

constexpr void __cordl_internal_set_bundleMapping(::GlobalNamespace::BundleData  value) ;

/// @brief Method .ctor, addr 0x5c6d438, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController___c__DisplayClass243_5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass243_5", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController___c__DisplayClass243_5(CosmeticsController___c__DisplayClass243_5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass243_5", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController___c__DisplayClass243_5(CosmeticsController___c__DisplayClass243_5 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4294};

/// @brief Field bundleMapping, offset: 0x10, size: 0x48, def value: None
 ::GlobalNamespace::BundleData  ___bundleMapping;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass243_5, ___bundleMapping) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController___c__DisplayClass243_5) == 0x58, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<>c__DisplayClass243_4
class CORDL_TYPE CosmeticsController___c__DisplayClass243_4 : public ::System::Object {
public:
// Declarations
/// @brief Field setItemName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_setItemName, put=__cordl_internal_set_setItemName)) ::StringW  setItemName;

static inline ::GorillaNetworking::CosmeticsController___c__DisplayClass243_4* New_ctor() ;

/// @brief Method <GetCosmeticsPlayFabCatalogDataInternal>b__8, addr 0x5c6d4ec, size 0x10, virtual false, abstract: false, final false
inline bool _GetCosmeticsPlayFabCatalogDataInternal_b__8(::GlobalNamespace::CosmeticsController_CosmeticItem  x) ;

constexpr ::StringW const& __cordl_internal_get_setItemName() const;

constexpr ::StringW& __cordl_internal_get_setItemName() ;

constexpr void __cordl_internal_set_setItemName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c6d430, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController___c__DisplayClass243_4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass243_4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController___c__DisplayClass243_4(CosmeticsController___c__DisplayClass243_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass243_4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController___c__DisplayClass243_4(CosmeticsController___c__DisplayClass243_4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4293};

/// @brief Field setItemName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___setItemName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass243_4, ___setItemName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController___c__DisplayClass243_4) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<>c__DisplayClass243_3
class CORDL_TYPE CosmeticsController___c__DisplayClass243_3 : public ::System::Object {
public:
// Declarations
/// @brief Field bundleData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_bundleData, put=__cordl_internal_set_bundleData)) ::GorillaNetworking::Store::StoreBundle*  bundleData;

static inline ::GorillaNetworking::CosmeticsController___c__DisplayClass243_3* New_ctor() ;

/// @brief Method <GetCosmeticsPlayFabCatalogDataInternal>b__7, addr 0x5c6d478, size 0x2c, virtual false, abstract: false, final false
inline bool _GetCosmeticsPlayFabCatalogDataInternal_b__7(::GlobalNamespace::CosmeticsController_CosmeticItem  x) ;

/// @brief Method <GetCosmeticsPlayFabCatalogDataInternal>b__9, addr 0x5c6d4a4, size 0x48, virtual false, abstract: false, final false
inline bool _GetCosmeticsPlayFabCatalogDataInternal_b__9(::PlayFab::ClientModels::CatalogItem*  ci) ;

constexpr ::GorillaNetworking::Store::StoreBundle* const& __cordl_internal_get_bundleData() const;

constexpr ::GorillaNetworking::Store::StoreBundle*& __cordl_internal_get_bundleData() ;

constexpr void __cordl_internal_set_bundleData(::GorillaNetworking::Store::StoreBundle*  value) ;

/// @brief Method .ctor, addr 0x5c6d428, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController___c__DisplayClass243_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass243_3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController___c__DisplayClass243_3(CosmeticsController___c__DisplayClass243_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass243_3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController___c__DisplayClass243_3(CosmeticsController___c__DisplayClass243_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4292};

/// @brief Field bundleData, offset: 0x10, size: 0x8, def value: None
 ::GorillaNetworking::Store::StoreBundle*  ___bundleData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass243_3, ___bundleData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController___c__DisplayClass243_3) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<>c__DisplayClass243_2
class CORDL_TYPE CosmeticsController___c__DisplayClass243_2 : public ::System::Object {
public:
// Declarations
/// @brief Field setItemName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_setItemName, put=__cordl_internal_set_setItemName)) ::StringW  setItemName;

static inline ::GorillaNetworking::CosmeticsController___c__DisplayClass243_2* New_ctor() ;

/// @brief Method <GetCosmeticsPlayFabCatalogDataInternal>b__6, addr 0x5c6d468, size 0x10, virtual false, abstract: false, final false
inline bool _GetCosmeticsPlayFabCatalogDataInternal_b__6(::GlobalNamespace::CosmeticsController_CosmeticItem  x) ;

constexpr ::StringW const& __cordl_internal_get_setItemName() const;

constexpr ::StringW& __cordl_internal_get_setItemName() ;

constexpr void __cordl_internal_set_setItemName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c6d420, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController___c__DisplayClass243_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass243_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController___c__DisplayClass243_2(CosmeticsController___c__DisplayClass243_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass243_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController___c__DisplayClass243_2(CosmeticsController___c__DisplayClass243_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4291};

/// @brief Field setItemName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___setItemName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass243_2, ___setItemName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController___c__DisplayClass243_2) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<>c__DisplayClass243_1
class CORDL_TYPE CosmeticsController___c__DisplayClass243_1 : public ::System::Object {
public:
// Declarations
/// @brief Field catalogItem, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_catalogItem, put=__cordl_internal_set_catalogItem)) ::PlayFab::ClientModels::CatalogItem*  catalogItem;

static inline ::GorillaNetworking::CosmeticsController___c__DisplayClass243_1* New_ctor() ;

/// @brief Method <GetCosmeticsPlayFabCatalogDataInternal>b__5, addr 0x5c6d448, size 0x20, virtual false, abstract: false, final false
inline bool _GetCosmeticsPlayFabCatalogDataInternal_b__5(::GlobalNamespace::CosmeticsController_CosmeticItem  x) ;

constexpr ::PlayFab::ClientModels::CatalogItem* const& __cordl_internal_get_catalogItem() const;

constexpr ::PlayFab::ClientModels::CatalogItem*& __cordl_internal_get_catalogItem() ;

constexpr void __cordl_internal_set_catalogItem(::PlayFab::ClientModels::CatalogItem*  value) ;

/// @brief Method .ctor, addr 0x5c6d418, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController___c__DisplayClass243_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass243_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController___c__DisplayClass243_1(CosmeticsController___c__DisplayClass243_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass243_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController___c__DisplayClass243_1(CosmeticsController___c__DisplayClass243_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4290};

/// @brief Field catalogItem, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::ClientModels::CatalogItem*  ___catalogItem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass243_1, ___catalogItem) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController___c__DisplayClass243_1) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<>c__DisplayClass243_0
class CORDL_TYPE CosmeticsController___c__DisplayClass243_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::CosmeticsController>  __4__this;

/// @brief Field result, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::PlayFab::ClientModels::GetUserInventoryResult*  result;

static inline ::GorillaNetworking::CosmeticsController___c__DisplayClass243_0* New_ctor() ;

/// @brief Method <GetCosmeticsPlayFabCatalogDataInternal>b__2, addr 0x5c683ec, size 0x502c, virtual false, abstract: false, final false
inline void _GetCosmeticsPlayFabCatalogDataInternal_b__2(::PlayFab::ClientModels::GetCatalogItemsResult*  result2) ;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& __cordl_internal_get___4__this() ;

constexpr ::PlayFab::ClientModels::GetUserInventoryResult* const& __cordl_internal_get_result() const;

constexpr ::PlayFab::ClientModels::GetUserInventoryResult*& __cordl_internal_get_result() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::CosmeticsController>  value) ;

constexpr void __cordl_internal_set_result(::PlayFab::ClientModels::GetUserInventoryResult*  value) ;

/// @brief Method .ctor, addr 0x5c683e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController___c__DisplayClass243_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass243_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController___c__DisplayClass243_0(CosmeticsController___c__DisplayClass243_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass243_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController___c__DisplayClass243_0(CosmeticsController___c__DisplayClass243_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4289};

/// @brief Field result, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::ClientModels::GetUserInventoryResult*  ___result;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::CosmeticsController>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass243_0, ___result) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass243_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController___c__DisplayClass243_0) == 0x20, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<>c__DisplayClass230_0
class CORDL_TYPE CosmeticsController___c__DisplayClass230_0 : public ::System::Object {
public:
// Declarations
/// @brief Field localRig, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_localRig, put=__cordl_internal_set_localRig)) ::UnityW<::GlobalNamespace::VRRig>  localRig;

static inline ::GorillaNetworking::CosmeticsController___c__DisplayClass230_0* New_ctor() ;

/// @brief Method <UpdateWornCosmetics>b__0, addr 0x5c68348, size 0x9c, virtual false, abstract: false, final false
inline bool _UpdateWornCosmetics_b__0(::StringW  id) ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_localRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_localRig() ;

constexpr void __cordl_internal_set_localRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x5c68340, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController___c__DisplayClass230_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass230_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController___c__DisplayClass230_0(CosmeticsController___c__DisplayClass230_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass230_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController___c__DisplayClass230_0(CosmeticsController___c__DisplayClass230_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4288};

/// @brief Field localRig, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___localRig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass230_0, ___localRig) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController___c__DisplayClass230_0) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<>c__DisplayClass215_0
class CORDL_TYPE CosmeticsController___c__DisplayClass215_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::CosmeticsController>  __4__this;

/// @brief Field itemToBuyID, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemToBuyID, put=__cordl_internal_set_itemToBuyID)) ::StringW  itemToBuyID;

static inline ::GorillaNetworking::CosmeticsController___c__DisplayClass215_0* New_ctor() ;

/// @brief Method <CheckIfMyCosmeticsUpdated>b__0, addr 0x5c68098, size 0x284, virtual false, abstract: false, final false
inline void _CheckIfMyCosmeticsUpdated_b__0(::PlayFab::ClientModels::GetSharedGroupDataResult*  result) ;

/// @brief Method <CheckIfMyCosmeticsUpdated>b__1, addr 0x5c6831c, size 0x24, virtual false, abstract: false, final false
inline void _CheckIfMyCosmeticsUpdated_b__1(::PlayFab::PlayFabError*  error) ;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_itemToBuyID() const;

constexpr ::StringW& __cordl_internal_get_itemToBuyID() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::CosmeticsController>  value) ;

constexpr void __cordl_internal_set_itemToBuyID(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c68090, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController___c__DisplayClass215_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass215_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController___c__DisplayClass215_0(CosmeticsController___c__DisplayClass215_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass215_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController___c__DisplayClass215_0(CosmeticsController___c__DisplayClass215_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4287};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::CosmeticsController>  _____4__this;

/// @brief Field itemToBuyID, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___itemToBuyID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass215_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass215_0, ___itemToBuyID) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController___c__DisplayClass215_0) == 0x20, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<>c__DisplayClass213_0
class CORDL_TYPE CosmeticsController___c__DisplayClass213_0 : public ::System::Object {
public:
// Declarations
/// @brief Field itemIdToUnlock, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemIdToUnlock, put=__cordl_internal_set_itemIdToUnlock)) ::StringW  itemIdToUnlock;

static inline ::GorillaNetworking::CosmeticsController___c__DisplayClass213_0* New_ctor() ;

/// @brief Method <UnlockItem>b__0, addr 0x5c68080, size 0x10, virtual false, abstract: false, final false
inline bool _UnlockItem_b__0(::GlobalNamespace::CosmeticsController_CosmeticItem  x) ;

constexpr ::StringW const& __cordl_internal_get_itemIdToUnlock() const;

constexpr ::StringW& __cordl_internal_get_itemIdToUnlock() ;

constexpr void __cordl_internal_set_itemIdToUnlock(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c68078, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController___c__DisplayClass213_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass213_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController___c__DisplayClass213_0(CosmeticsController___c__DisplayClass213_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass213_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController___c__DisplayClass213_0(CosmeticsController___c__DisplayClass213_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4286};

/// @brief Field itemIdToUnlock, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___itemIdToUnlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass213_0, ___itemIdToUnlock) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController___c__DisplayClass213_0) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<>c__DisplayClass122_0
class CORDL_TYPE CosmeticsController___c__DisplayClass122_0 : public ::System::Object {
public:
// Declarations
/// @brief Field parentPlayFabID, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentPlayFabID, put=__cordl_internal_set_parentPlayFabID)) ::StringW  parentPlayFabID;

/// @brief Field seriesOrder, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_seriesOrder, put=__cordl_internal_set_seriesOrder)) bool  seriesOrder;

static inline ::GorillaNetworking::CosmeticsController___c__DisplayClass122_0* New_ctor() ;

/// @brief Method <BuildCanonicalCollectableOrder>b__0, addr 0x5c67fdc, size 0x9c, virtual false, abstract: false, final false
inline int32_t _BuildCanonicalCollectableOrder_b__0(::GlobalNamespace::CosmeticsController_CosmeticItem  a, ::GlobalNamespace::CosmeticsController_CosmeticItem  b) ;

constexpr ::StringW const& __cordl_internal_get_parentPlayFabID() const;

constexpr ::StringW& __cordl_internal_get_parentPlayFabID() ;

constexpr bool const& __cordl_internal_get_seriesOrder() const;

constexpr bool& __cordl_internal_get_seriesOrder() ;

constexpr void __cordl_internal_set_parentPlayFabID(::StringW  value) ;

constexpr void __cordl_internal_set_seriesOrder(bool  value) ;

/// @brief Method .ctor, addr 0x5c67fd4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController___c__DisplayClass122_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass122_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController___c__DisplayClass122_0(CosmeticsController___c__DisplayClass122_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass122_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController___c__DisplayClass122_0(CosmeticsController___c__DisplayClass122_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4285};

/// @brief Field seriesOrder, offset: 0x10, size: 0x1, def value: None
 bool  ___seriesOrder;

/// @brief Field parentPlayFabID, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___parentPlayFabID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass122_0, ___seriesOrder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass122_0, ___parentPlayFabID) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController___c__DisplayClass122_0) == 0x20, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<>c__DisplayClass118_0
class CORDL_TYPE CosmeticsController___c__DisplayClass118_0 : public ::System::Object {
public:
// Declarations
/// @brief Field playFabID, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_playFabID, put=__cordl_internal_set_playFabID)) ::StringW  playFabID;

static inline ::GorillaNetworking::CosmeticsController___c__DisplayClass118_0* New_ctor() ;

/// @brief Method <IsOwnedByPlayFabID>b__0, addr 0x5c67fc0, size 0x14, virtual false, abstract: false, final false
inline bool _IsOwnedByPlayFabID_b__0(::GlobalNamespace::CosmeticsController_CosmeticItem  x) ;

constexpr ::StringW const& __cordl_internal_get_playFabID() const;

constexpr ::StringW& __cordl_internal_get_playFabID() ;

constexpr void __cordl_internal_set_playFabID(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c67fb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController___c__DisplayClass118_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass118_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController___c__DisplayClass118_0(CosmeticsController___c__DisplayClass118_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c__DisplayClass118_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController___c__DisplayClass118_0(CosmeticsController___c__DisplayClass118_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4284};

/// @brief Field playFabID, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___playFabID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController___c__DisplayClass118_0, ___playFabID) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController___c__DisplayClass118_0) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/<>c
class CORDL_TYPE CosmeticsController___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaNetworking::CosmeticsController___c*  __9;

/// @brief Field <>9__170_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__170_1, put=setStaticF___9__170_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__170_1;

/// @brief Field <>9__239_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__239_1, put=setStaticF___9__239_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__239_1;

/// @brief Field <>9__242_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__242_1, put=setStaticF___9__242_1)) ::System::Action_1<::StringW>*  __9__242_1;

/// @brief Field <>9__243_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__243_4, put=setStaticF___9__243_4)) ::System::Predicate_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  __9__243_4;

/// @brief Field <>9__259_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__259_1, put=setStaticF___9__259_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__259_1;

static inline ::GorillaNetworking::CosmeticsController___c* New_ctor() ;

/// @brief Method <GetCosmeticsPlayFabCatalogDataInternal>b__243_4, addr 0x5c67d34, size 0x4c, virtual false, abstract: false, final false
inline bool _GetCosmeticsPlayFabCatalogDataInternal_b__243_4(::GlobalNamespace::CosmeticsController_CosmeticItem  x) ;

/// @brief Method <GetCurrencyBalance>b__259_1, addr 0x5c67d80, size 0x238, virtual false, abstract: false, final false
inline void _GetCurrencyBalance_b__259_1(::PlayFab::PlayFabError*  error) ;

/// @brief Method <GetMyDaily>b__239_1, addr 0x5c67a70, size 0x238, virtual false, abstract: false, final false
inline void _GetMyDaily_b__239_1(::PlayFab::PlayFabError*  error) ;

/// @brief Method <ReconcileBundleRewardsIfNeeded>b__242_1, addr 0x5c67ca8, size 0x8c, virtual false, abstract: false, final false
inline void _ReconcileBundleRewardsIfNeeded_b__242_1(::StringW  error) ;

/// @brief Method <Start>b__170_1, addr 0x5c679e4, size 0x8c, virtual false, abstract: false, final false
inline void _Start_b__170_1(::PlayFab::PlayFabError*  e) ;

/// @brief Method .ctor, addr 0x5c679dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaNetworking::CosmeticsController___c* getStaticF___9() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__170_1() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__239_1() ;

static inline ::System::Action_1<::StringW>* getStaticF___9__242_1() ;

static inline ::System::Predicate_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* getStaticF___9__243_4() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__259_1() ;

static inline void setStaticF___9(::GorillaNetworking::CosmeticsController___c*  value) ;

static inline void setStaticF___9__170_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

static inline void setStaticF___9__239_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

static inline void setStaticF___9__242_1(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF___9__243_4(::System::Predicate_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

static inline void setStaticF___9__259_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController___c(CosmeticsController___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController___c(CosmeticsController___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4283};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::CosmeticsController___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaNetworking
// Dependencies System.Object, UnityEngine.Vector3
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/OutfitData
class CORDL_TYPE CosmeticsController_OutfitData : public ::System::Object {
public:
// Declarations
/// @brief Field color, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Vector3  color;

/// @brief Field itemIDs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemIDs, put=__cordl_internal_set_itemIDs)) ::System::Collections::Generic::List_1<::StringW>*  itemIDs;

/// @brief Field version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int32_t  version;

/// @brief Method Clear, addr 0x5c669d0, size 0xa4, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::GorillaNetworking::CosmeticsController_OutfitData* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_color() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_itemIDs() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_itemIDs() ;

constexpr int32_t const& __cordl_internal_get_version() const;

constexpr int32_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_color(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_itemIDs(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_version(int32_t  value) ;

/// @brief Method .ctor, addr 0x5c668fc, size 0xd4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController_OutfitData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController_OutfitData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController_OutfitData(CosmeticsController_OutfitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController_OutfitData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController_OutfitData(CosmeticsController_OutfitData const& ) = delete;

/// @brief Field OUTFIT_DATA_VERSION offset 0xffffffff size 0x4
static constexpr int32_t  OUTFIT_DATA_VERSION{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4282};

/// @brief Field version, offset: 0x10, size: 0x4, def value: None
 int32_t  ___version;

/// @brief Field itemIDs, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___itemIDs;

/// @brief Field color, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController_OutfitData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController_OutfitData, ___itemIDs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController_OutfitData, ___color) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController_OutfitData) == 0x30, "Size mismatch!");

} // namespace end def GorillaNetworking
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/ValidatedCreatorCode
class CORDL_TYPE CosmeticsController_ValidatedCreatorCode : public ::System::Object {
public:
// Declarations
/// @brief Field <groupId>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__groupId_k__BackingField, put=__cordl_internal_set__groupId_k__BackingField)) ::StringW  _groupId_k__BackingField;

/// @brief Field <memberCode>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__memberCode_k__BackingField, put=__cordl_internal_set__memberCode_k__BackingField)) ::StringW  _memberCode_k__BackingField;

/// @brief Field <terminalId>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__terminalId_k__BackingField, put=__cordl_internal_set__terminalId_k__BackingField)) ::StringW  _terminalId_k__BackingField;

 __declspec(property(get=get_groupId, put=set_groupId)) ::StringW  groupId;

 __declspec(property(get=get_memberCode, put=set_memberCode)) ::StringW  memberCode;

 __declspec(property(get=get_terminalId, put=set_terminalId)) ::StringW  terminalId;

static inline ::GorillaNetworking::CosmeticsController_ValidatedCreatorCode* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__groupId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__groupId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__memberCode_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__memberCode_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__terminalId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__terminalId_k__BackingField() ;

constexpr void __cordl_internal_set__groupId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__memberCode_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__terminalId_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c6796c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_groupId, addr 0x5c6795c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_groupId() ;

/// [CompilerGenerated]
/// @brief Method get_memberCode, addr 0x5c6794c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_memberCode() ;

/// [CompilerGenerated]
/// @brief Method get_terminalId, addr 0x5c6793c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_terminalId() ;

/// [CompilerGenerated]
/// @brief Method set_groupId, addr 0x5c67964, size 0x8, virtual false, abstract: false, final false
inline void set_groupId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_memberCode, addr 0x5c67954, size 0x8, virtual false, abstract: false, final false
inline void set_memberCode(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_terminalId, addr 0x5c67944, size 0x8, virtual false, abstract: false, final false
inline void set_terminalId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController_ValidatedCreatorCode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController_ValidatedCreatorCode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController_ValidatedCreatorCode(CosmeticsController_ValidatedCreatorCode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController_ValidatedCreatorCode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController_ValidatedCreatorCode(CosmeticsController_ValidatedCreatorCode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4280};

/// [CompilerGenerated]
/// @brief Field <terminalId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____terminalId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <memberCode>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____memberCode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <groupId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____groupId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController_ValidatedCreatorCode, ____terminalId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController_ValidatedCreatorCode, ____memberCode_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController_ValidatedCreatorCode, ____groupId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController_ValidatedCreatorCode) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/IAPRequestBody
class CORDL_TYPE CosmeticsController_IAPRequestBody : public ::System::Object {
public:
// Declarations
/// @brief Field customTags, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_customTags, put=__cordl_internal_set_customTags)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  customTags;

/// @brief Field mothershipDeploymentId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipDeploymentId, put=__cordl_internal_set_mothershipDeploymentId)) ::StringW  mothershipDeploymentId;

/// @brief Field mothershipEnvId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipEnvId, put=__cordl_internal_set_mothershipEnvId)) ::StringW  mothershipEnvId;

/// @brief Field mothershipId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipId, put=__cordl_internal_set_mothershipId)) ::StringW  mothershipId;

/// @brief Field mothershipToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipToken, put=__cordl_internal_set_mothershipToken)) ::StringW  mothershipToken;

/// @brief Field sku, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sku, put=__cordl_internal_set_sku)) ::StringW  sku;

static inline ::GorillaNetworking::CosmeticsController_IAPRequestBody* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_customTags() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_customTags() ;

constexpr ::StringW const& __cordl_internal_get_mothershipDeploymentId() const;

constexpr ::StringW& __cordl_internal_get_mothershipDeploymentId() ;

constexpr ::StringW const& __cordl_internal_get_mothershipEnvId() const;

constexpr ::StringW& __cordl_internal_get_mothershipEnvId() ;

constexpr ::StringW const& __cordl_internal_get_mothershipId() const;

constexpr ::StringW& __cordl_internal_get_mothershipId() ;

constexpr ::StringW const& __cordl_internal_get_mothershipToken() const;

constexpr ::StringW& __cordl_internal_get_mothershipToken() ;

constexpr ::StringW const& __cordl_internal_get_sku() const;

constexpr ::StringW& __cordl_internal_get_sku() ;

constexpr void __cordl_internal_set_customTags(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_mothershipDeploymentId(::StringW  value) ;

constexpr void __cordl_internal_set_mothershipEnvId(::StringW  value) ;

constexpr void __cordl_internal_set_mothershipId(::StringW  value) ;

constexpr void __cordl_internal_set_mothershipToken(::StringW  value) ;

constexpr void __cordl_internal_set_sku(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c67934, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController_IAPRequestBody() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController_IAPRequestBody", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController_IAPRequestBody(CosmeticsController_IAPRequestBody && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController_IAPRequestBody", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController_IAPRequestBody(CosmeticsController_IAPRequestBody const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4279};

/// @brief Field sku, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___sku;

/// @brief Field mothershipId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___mothershipId;

/// @brief Field mothershipToken, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___mothershipToken;

/// @brief Field mothershipEnvId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___mothershipEnvId;

/// @brief Field mothershipDeploymentId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___mothershipDeploymentId;

/// @brief Field customTags, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___customTags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController_IAPRequestBody, ___sku) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController_IAPRequestBody, ___mothershipId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController_IAPRequestBody, ___mothershipToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController_IAPRequestBody, ___mothershipEnvId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController_IAPRequestBody, ___mothershipDeploymentId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController_IAPRequestBody, ___customTags) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController_IAPRequestBody) == 0x40, "Size mismatch!");

} // namespace end def GorillaNetworking
// Dependencies GorillaNetworking.CosmeticsController::CosmeticItem, System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/CosmeticSet
class CORDL_TYPE CosmeticsController_CosmeticSet : public ::System::Object {
public:
// Declarations
using OnSetActivatedHandler = ::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler;

using __c__DisplayClass37_0 = ::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0;

using __c__DisplayClass38_0 = ::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0;

/// @brief Field _emptySet, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__emptySet, put=setStaticF__emptySet)) ::GorillaNetworking::CosmeticsController_CosmeticSet*  _emptySet;

/// @brief Field intArrays, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_intArrays, put=setStaticF_intArrays)) ::ArrayW<::ArrayW<int32_t>>  intArrays;

/// @brief Field items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_items, put=__cordl_internal_set_items)) ::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem>  items;

/// @brief Field nameScratchSpace, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nameScratchSpace, put=setStaticF_nameScratchSpace)) ::ArrayW<char16_t>  nameScratchSpace;

/// @brief Field onSetActivatedEvent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSetActivatedEvent, put=__cordl_internal_set_onSetActivatedEvent)) ::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*  onSetActivatedEvent;

/// @brief Field returnArray, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_returnArray, put=__cordl_internal_set_returnArray)) ::ArrayW<::StringW>  returnArray;

/// @brief Method ActivateCosmetic, addr 0x5c6494c, size 0x7e8, virtual false, abstract: false, final false
inline void ActivateCosmetic(::GorillaNetworking::CosmeticsController_CosmeticSet*  prevSet, ::GlobalNamespace::VRRig*  rig, int32_t  slotIndex, ::GorillaNetworking::CosmeticItemRegistry*  cosmeticsObjectRegistry, ::GlobalNamespace::BodyDockPositions*  bDock) ;

/// @brief Method ActivateCosmetics, addr 0x5c65568, size 0xa0, virtual false, abstract: false, final false
inline void ActivateCosmetics(::GorillaNetworking::CosmeticsController_CosmeticSet*  prevSet, ::GlobalNamespace::VRRig*  rig, ::GlobalNamespace::BodyDockPositions*  bDock, ::GorillaNetworking::CosmeticItemRegistry*  cosmeticsObjectRegistry) ;

/// @brief Method ClearSet, addr 0x5c64640, size 0x74, virtual false, abstract: false, final false
inline void ClearSet(::GlobalNamespace::CosmeticsController_CosmeticItem  nullItem) ;

/// @brief Method CopyItems, addr 0x5c642c0, size 0xa0, virtual false, abstract: false, final false
inline void CopyItems(::GorillaNetworking::CosmeticsController_CosmeticSet*  other) ;

/// @brief Method CopyItemsIntoEmpty, addr 0x5c64360, size 0xa8, virtual false, abstract: false, final false
inline void CopyItemsIntoEmpty(::GorillaNetworking::CosmeticsController_CosmeticSet*  other) ;

/// @brief Method DeactivateAllCosmetcs, addr 0x5c65b64, size 0xd8, virtual false, abstract: false, final false
inline void DeactivateAllCosmetcs(::GlobalNamespace::BodyDockPositions*  bDock, ::GlobalNamespace::CosmeticsController_CosmeticItem  nullItem, ::GorillaNetworking::CosmeticItemRegistry*  cosmeticObjectRegistry) ;

/// @brief Method FindFirstNonNull, addr 0x5c657f4, size 0x1e0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> FindFirstNonNull(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::GameObject>>*  roots) ;

/// @brief Method FindFirstPickupableVariantRoot, addr 0x5c65608, size 0x1ec, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> FindFirstPickupableVariantRoot(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::GameObject>>*  roots) ;

/// @brief Method HasAnyItems, addr 0x5c6481c, size 0x40, virtual false, abstract: false, final false
inline bool HasAnyItems() ;

/// @brief Method HasItem, addr 0x5c64794, size 0x88, virtual false, abstract: false, final false
inline bool HasItem(::StringW  name) ;

/// @brief Method HasItemOfCategory, addr 0x5c64730, size 0x64, virtual false, abstract: false, final false
inline bool HasItemOfCategory(::GlobalNamespace::CosmeticsController_CosmeticCategory  category) ;

/// @brief Method HoldableDisplayNames, addr 0x5c66e20, size 0x208, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> HoldableDisplayNames(bool  leftHoldables) ;

/// @brief Method IsActive, addr 0x5c646b4, size 0x7c, virtual false, abstract: false, final false
inline bool IsActive(::StringW  name) ;

/// @brief Method IsHoldable, addr 0x5c6488c, size 0xc, virtual false, abstract: false, final false
static inline bool IsHoldable(::GlobalNamespace::CosmeticsController_CosmeticItem  item) ;

/// @brief Method IsSlotLeftHanded, addr 0x5c6485c, size 0x18, virtual false, abstract: false, final false
static inline bool IsSlotLeftHanded(::GlobalNamespace::CosmeticsController_CosmeticSlots  slot) ;

/// @brief Method IsSlotRightHanded, addr 0x5c64874, size 0x18, virtual false, abstract: false, final false
static inline bool IsSlotRightHanded(::GlobalNamespace::CosmeticsController_CosmeticSlots  slot) ;

/// @brief Method LoadFromPlayerPreferences, addr 0x5c65c3c, size 0x3d0, virtual false, abstract: false, final false
inline void LoadFromPlayerPreferences(::GorillaNetworking::CosmeticsController*  controller) ;

/// @brief Method MergeInSets, addr 0x5c6453c, size 0x104, virtual false, abstract: false, final false
inline void MergeInSets(::GorillaNetworking::CosmeticsController_CosmeticSet*  playerPref, ::GorillaNetworking::CosmeticsController_CosmeticSet*  tempOverrideSet, ::System::Predicate_1<::StringW>*  predicate) ;

/// @brief Method MergeSets, addr 0x5c64408, size 0x134, virtual false, abstract: false, final false
inline void MergeSets(::GorillaNetworking::CosmeticsController_CosmeticSet*  tryOn, ::GorillaNetworking::CosmeticsController_CosmeticSet*  current) ;

static inline ::GorillaNetworking::CosmeticsController_CosmeticSet* New_ctor() ;

static inline ::GorillaNetworking::CosmeticsController_CosmeticSet* New_ctor(::ArrayW<::StringW>  itemNames, ::GorillaNetworking::CosmeticsController*  controller) ;

static inline ::GorillaNetworking::CosmeticsController_CosmeticSet* New_ctor(::ArrayW<int32_t>  itemNamesPacked, ::GorillaNetworking::CosmeticsController*  controller) ;

/// @brief Method OnSetActivated, addr 0x5c63bd0, size 0x1c, virtual false, abstract: false, final false
inline void OnSetActivated(::GorillaNetworking::CosmeticsController_CosmeticSet*  prevSet, ::GorillaNetworking::CosmeticsController_CosmeticSet*  currentSet, ::GlobalNamespace::NetPlayer*  netPlayer) ;

/// @brief Method OppositeSlot, addr 0x5c64898, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CosmeticsController_CosmeticSlots OppositeSlot(::GlobalNamespace::CosmeticsController_CosmeticSlots  slot) ;

/// @brief Method ParseSetFromString, addr 0x5c66014, size 0x8e8, virtual false, abstract: false, final false
inline void ParseSetFromString(::GorillaNetworking::CosmeticsController*  controller, ::StringW  setString, ::by_ref<::UnityEngine::Vector3>  color) ;

/// @brief Method PopulateCollectionDisplay, addr 0x5c65134, size 0x434, virtual false, abstract: false, final false
static inline void PopulateCollectionDisplay(::GorillaNetworking::CosmeticItemInstance*  instance, ::GlobalNamespace::CosmeticsController_CosmeticItem  parentItem, ::GlobalNamespace::VRRig*  rig) ;

/// @brief Method RemoveStaleDisplaysForParent, addr 0x5c659d4, size 0x190, virtual false, abstract: false, final false
static inline void RemoveStaleDisplaysForParent(::GlobalNamespace::VRRig*  rig, ::StringW  parentPlayFabID, ::UnityEngine::GameObject*  host) ;

/// @brief Method SlotPlayerPreferenceName, addr 0x5c648b8, size 0x94, virtual false, abstract: false, final false
static inline ::StringW SlotPlayerPreferenceName(::GlobalNamespace::CosmeticsController_CosmeticSlots  slot) ;

/// @brief Method ToDisplayNameArray, addr 0x5c66a7c, size 0xe0, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> ToDisplayNameArray() ;

/// @brief Method ToOnRightSideArray, addr 0x5c67028, size 0x120, virtual false, abstract: false, final false
inline ::ArrayW<bool> ToOnRightSideArray() ;

/// @brief Method ToPackedIDArray, addr 0x5c66b5c, size 0x2c4, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> ToPackedIDArray() ;

constexpr ::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem> const& __cordl_internal_get_items() const;

constexpr ::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem>& __cordl_internal_get_items() ;

constexpr ::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler* const& __cordl_internal_get_onSetActivatedEvent() const;

constexpr ::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*& __cordl_internal_get_onSetActivatedEvent() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_returnArray() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_returnArray() ;

constexpr void __cordl_internal_set_items(::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem>  value) ;

constexpr void __cordl_internal_set_onSetActivatedEvent(::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*  value) ;

constexpr void __cordl_internal_set_returnArray(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x5c63eb8, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5c63d64, size 0x154, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::StringW>  itemNames, ::GorillaNetworking::CosmeticsController*  controller) ;

/// @brief Method .ctor, addr 0x5c63f54, size 0x36c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<int32_t>  itemNamesPacked, ::GorillaNetworking::CosmeticsController*  controller) ;

/// [CompilerGenerated]
/// @brief Method add_onSetActivatedEvent, addr 0x5c63a98, size 0x9c, virtual false, abstract: false, final false
inline void add_onSetActivatedEvent(::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*  value) ;

static inline ::GorillaNetworking::CosmeticsController_CosmeticSet* getStaticF__emptySet() ;

static inline ::ArrayW<::ArrayW<int32_t>> getStaticF_intArrays() ;

static inline ::ArrayW<char16_t> getStaticF_nameScratchSpace() ;

/// @brief Method get_EmptySet, addr 0x5c63bec, size 0x178, virtual false, abstract: false, final false
static inline ::GorillaNetworking::CosmeticsController_CosmeticSet* get_EmptySet() ;

/// [CompilerGenerated]
/// @brief Method remove_onSetActivatedEvent, addr 0x5c63b34, size 0x9c, virtual false, abstract: false, final false
inline void remove_onSetActivatedEvent(::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*  value) ;

static inline void setStaticF__emptySet(::GorillaNetworking::CosmeticsController_CosmeticSet*  value) ;

static inline void setStaticF_intArrays(::ArrayW<::ArrayW<int32_t>>  value) ;

static inline void setStaticF_nameScratchSpace(::ArrayW<char16_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController_CosmeticSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController_CosmeticSet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsController_CosmeticSet(CosmeticsController_CosmeticSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsController_CosmeticSet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsController_CosmeticSet(CosmeticsController_CosmeticSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4276};

/// @brief Field k_fakePackedSlingshotID offset 0xffffffff size 0x4
static constexpr int32_t  k_fakePackedSlingshotID{static_cast<int32_t>(0xffffffc9)};

/// @brief Field items, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem>  ___items;

/// [CompilerGenerated]
/// @brief Field onSetActivatedEvent, offset: 0x18, size: 0x8, def value: None
 ::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*  ___onSetActivatedEvent;

/// @brief Field returnArray, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___returnArray;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsController_CosmeticSet, ___items) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController_CosmeticSet, ___onSetActivatedEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsController_CosmeticSet, ___returnArray) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsController_CosmeticSet) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies GorillaNetworking.CosmeticsController::CosmeticItem, System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/CosmeticSet/<>c__DisplayClass38_0
class CORDL_TYPE CosmeticSet_CosmeticsController___c__DisplayClass38_0 : public ::System::Object {
public:
// Declarations
/// @brief Field item, offset 0x10, size 0x98 
 __declspec(property(get=__cordl_internal_get_item, put=__cordl_internal_set_item)) ::GlobalNamespace::CosmeticsController_CosmeticItem  item;

static inline ::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0* New_ctor() ;

/// @brief Method <ParseSetFromString>b__0, addr 0x5c6774c, size 0x10, virtual false, abstract: false, final false
inline bool _ParseSetFromString_b__0(::GlobalNamespace::CosmeticsController_CosmeticItem  x) ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get_item() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get_item() ;

constexpr void __cordl_internal_set_item(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

/// @brief Method .ctor, addr 0x5c66a74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticSet_CosmeticsController___c__DisplayClass38_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticSet_CosmeticsController___c__DisplayClass38_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticSet_CosmeticsController___c__DisplayClass38_0(CosmeticSet_CosmeticsController___c__DisplayClass38_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticSet_CosmeticsController___c__DisplayClass38_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticSet_CosmeticsController___c__DisplayClass38_0(CosmeticSet_CosmeticsController___c__DisplayClass38_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4275};

/// @brief Field item, offset: 0x10, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ___item;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0, ___item) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0) == 0xa8, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies GorillaNetworking.CosmeticsController::CosmeticItem, System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/CosmeticSet/<>c__DisplayClass37_0
class CORDL_TYPE CosmeticSet_CosmeticsController___c__DisplayClass37_0 : public ::System::Object {
public:
// Declarations
/// @brief Field item, offset 0x10, size 0x98 
 __declspec(property(get=__cordl_internal_get_item, put=__cordl_internal_set_item)) ::GlobalNamespace::CosmeticsController_CosmeticItem  item;

static inline ::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0* New_ctor() ;

/// @brief Method <LoadFromPlayerPreferences>b__0, addr 0x5c6773c, size 0x10, virtual false, abstract: false, final false
inline bool _LoadFromPlayerPreferences_b__0(::GlobalNamespace::CosmeticsController_CosmeticItem  x) ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get_item() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get_item() ;

constexpr void __cordl_internal_set_item(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

/// @brief Method .ctor, addr 0x5c6600c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticSet_CosmeticsController___c__DisplayClass37_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticSet_CosmeticsController___c__DisplayClass37_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticSet_CosmeticsController___c__DisplayClass37_0(CosmeticSet_CosmeticsController___c__DisplayClass37_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticSet_CosmeticsController___c__DisplayClass37_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticSet_CosmeticsController___c__DisplayClass37_0(CosmeticSet_CosmeticsController___c__DisplayClass37_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4274};

/// @brief Field item, offset: 0x10, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ___item;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0, ___item) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0) == 0xa8, "Size mismatch!");

} // namespace end def GorillaNetworking
// Dependencies System.MulticastDelegate
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsController/CosmeticSet/OnSetActivatedHandler
class CORDL_TYPE CosmeticSet_CosmeticsController_OnSetActivatedHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5c676fc, size 0x34, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GorillaNetworking::CosmeticsController_CosmeticSet*  prevSet, ::GorillaNetworking::CosmeticsController_CosmeticSet*  currentSet, ::GlobalNamespace::NetPlayer*  netPlayer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5c67730, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5c676e8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GorillaNetworking::CosmeticsController_CosmeticSet*  prevSet, ::GorillaNetworking::CosmeticsController_CosmeticSet*  currentSet, ::GlobalNamespace::NetPlayer*  netPlayer) ;

static inline ::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5c675dc, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticSet_CosmeticsController_OnSetActivatedHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticSet_CosmeticsController_OnSetActivatedHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticSet_CosmeticsController_OnSetActivatedHandler(CosmeticSet_CosmeticsController_OnSetActivatedHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticSet_CosmeticsController_OnSetActivatedHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticSet_CosmeticsController_OnSetActivatedHandler(CosmeticSet_CosmeticsController_OnSetActivatedHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4273};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler) == 0x80, "Size mismatch!");

} // namespace end def GorillaNetworking
