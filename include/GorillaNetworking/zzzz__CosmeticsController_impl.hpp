#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticsController.hpp"
#include "GlobalNamespace/zzzz__BundleData_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticStand_impl.hpp"
#include "GlobalNamespace/zzzz__EarlyAccessButton_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_PurchaseItemStages_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticInfoV2_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_def.hpp"
#include "CosmeticRoom/zzzz__CurrencyBoard_def.hpp"
#include "CosmeticRoom/zzzz__FittingRoom_def.hpp"
#include "CosmeticRoom/zzzz__ItemCheckout_def.hpp"
#include "Cosmetics/zzzz__ICreatorCodeProvider_def.hpp"
#include "GlobalNamespace/zzzz__BodyDockPositions_DropPositions_def.hpp"
#include "GlobalNamespace/zzzz__BodyDockPositions_def.hpp"
#include "GlobalNamespace/zzzz__BundleData_def.hpp"
#include "GlobalNamespace/zzzz__BundleList_def.hpp"
#include "GlobalNamespace/zzzz__CheckoutCartButton_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticOutfitSystemConfig_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticStand_def.hpp"
#include "GlobalNamespace/zzzz__FittingRoomButton_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipUserData_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PurchaseItemButton_def.hpp"
#include "GlobalNamespace/zzzz__SetUserDataResponse_def.hpp"
#include "GlobalNamespace/zzzz__VRRigAnchorOverrides_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GlobalNamespace/zzzz__WardrobeInstance_def.hpp"
#include "GorillaNetworking/Store/zzzz__StoreBundle_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticCollectionDisplay_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticItemInstance_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticItemRegistry_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CollectionState_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticCategory_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticSlots_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_EWearingCosmeticSet_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_PurchaseItemStages_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController__LoadSavedOutfits_d__296_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController__PurchaseBundle_d__207_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController__RepressButton_d__192_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_def.hpp"
#include "GorillaNetworking/zzzz__GorillaServer_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__AllCosmeticsArraySO_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticAnchorAntiIntersectOffsets_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticInfoV2_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticSO_def.hpp"
#include "GorillaTag/zzzz__GTAssetRef_1_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapCosmeticsData_def.hpp"
#include "PlayFab/ClientModels/zzzz__CatalogItem_def.hpp"
#include "PlayFab/ClientModels/zzzz__ConfirmPurchaseRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__ConfirmPurchaseResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetCatalogItemsResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetSharedGroupDataResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetUserDataResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetUserInventoryResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__ItemInstance_def.hpp"
#include "PlayFab/ClientModels/zzzz__PayForPurchaseRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__PayForPurchaseResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__PurchaseItemResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__StartPurchaseRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__StartPurchaseResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserDataRecord_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ExecuteFunctionResult_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "Steamworks/zzzz__Callback_1_def.hpp"
#include "Steamworks/zzzz__MicroTxnAuthorizationResponse_t_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.get_v2_allCosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GorillaTag::CosmeticSystem::CosmeticInfoV2> (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::get_v2_allCosmetics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c54688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_v2_allCosmetics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.set_v2_allCosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::ArrayW<::GorillaTag::CosmeticSystem::CosmeticInfoV2>)>(&::GorillaNetworking::CosmeticsController::set_v2_allCosmetics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c54690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"set_v2_allCosmetics", {}, {::i2c::type_of<::ArrayW<::GorillaTag::CosmeticSystem::CosmeticInfoV2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.get_v2_allCosmeticsInfoAssetRef_isLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::get_v2_allCosmeticsInfoAssetRef_isLoaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c54698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_v2_allCosmeticsInfoAssetRef_isLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.set_v2_allCosmeticsInfoAssetRef_isLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(bool)>(&::GorillaNetworking::CosmeticsController::set_v2_allCosmeticsInfoAssetRef_isLoaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c546a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"set_v2_allCosmeticsInfoAssetRef_isLoaded", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.get_v2_isCosmeticPlayFabCatalogDataLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::get_v2_isCosmeticPlayFabCatalogDataLoaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c546a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_v2_isCosmeticPlayFabCatalogDataLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.set_v2_isCosmeticPlayFabCatalogDataLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(bool)>(&::GorillaNetworking::CosmeticsController::set_v2_isCosmeticPlayFabCatalogDataLoaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c546b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"set_v2_isCosmeticPlayFabCatalogDataLoaded", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.V2Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::V2Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c546b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"V2Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.V2_allCosmeticsInfoAssetRefSO_LoadCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::V2_allCosmeticsInfoAssetRefSO_LoadCoroutine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c546e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"V2_allCosmeticsInfoAssetRefSO_LoadCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.V2_allCosmeticsInfoAssetRef_LoadSucceeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GorillaTag::CosmeticSystem::AllCosmeticsArraySO*)>(&::GorillaNetworking::CosmeticsController::V2_allCosmeticsInfoAssetRef_LoadSucceeded)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0x5c5475c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"V2_allCosmeticsInfoAssetRef_LoadSucceeded", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.TryGetCosmeticInfoV2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController::*)(::StringW, ::by_ref<::GorillaTag::CosmeticSystem::CosmeticInfoV2>)>(&::GorillaNetworking::CosmeticsController::TryGetCosmeticInfoV2)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c5218c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"TryGetCosmeticInfoV2", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GorillaTag::CosmeticSystem::CosmeticInfoV2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.V2_ConformCosmeticItemV1DisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::by_ref<::GlobalNamespace::CosmeticsController_CosmeticItem>)>(&::GorillaNetworking::CosmeticsController::V2_ConformCosmeticItemV1DisplayName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c54d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"V2_ConformCosmeticItemV1DisplayName", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::CosmeticsController_CosmeticItem>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.InitializeCosmeticStands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::InitializeCosmeticStands)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c54de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"InitializeCosmeticStands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.get_hasInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaNetworking::CosmeticsController::get_hasInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c54ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_hasInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.set_hasInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GorillaNetworking::CosmeticsController::set_hasInstance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c54ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"set_hasInstance", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.get_PurchaseLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::get_PurchaseLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c54f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_PurchaseLocation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.set_PurchaseLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::StringW)>(&::GorillaNetworking::CosmeticsController::set_PurchaseLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c54f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"set_PurchaseLocation", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ConsumePurchaseLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::ConsumePurchaseLocation)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5c54f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ConsumePurchaseLocation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.get_allCosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::get_allCosmetics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5507c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_allCosmetics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.set_allCosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*)>(&::GorillaNetworking::CosmeticsController::set_allCosmetics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c55084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"set_allCosmetics", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.get_allCosmeticsDict_isInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::get_allCosmeticsDict_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5508c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_allCosmeticsDict_isInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.set_allCosmeticsDict_isInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(bool)>(&::GorillaNetworking::CosmeticsController::set_allCosmeticsDict_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c55094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"set_allCosmeticsDict_isInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.get_allCosmeticsDict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CosmeticsController_CosmeticItem>* (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::get_allCosmeticsDict)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5509c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_allCosmeticsDict", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.get_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::get_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c550a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.set_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(bool)>(&::GorillaNetworking::CosmeticsController::set_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c550ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"set_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.get_allCosmeticsItemIDsfromDisplayNamesDict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::get_allCosmeticsItemIDsfromDisplayNamesDict)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c550b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_allCosmeticsItemIDsfromDisplayNamesDict", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.get_defaultClipOffsets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::get_defaultClipOffsets)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c550bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_defaultClipOffsets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.get_isHidingCosmeticsFromRemotePlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::get_isHidingCosmeticsFromRemotePlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5511c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_isHidingCosmeticsFromRemotePlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.set_isHidingCosmeticsFromRemotePlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(bool)>(&::GorillaNetworking::CosmeticsController::set_isHidingCosmeticsFromRemotePlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c55124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"set_isHidingCosmeticsFromRemotePlayers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.AddWardrobeInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::WardrobeInstance*)>(&::GorillaNetworking::CosmeticsController::AddWardrobeInstance)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c5512c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"AddWardrobeInstance", {}, {::i2c::type_of<::GlobalNamespace::WardrobeInstance*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.RemoveWardrobeInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::WardrobeInstance*)>(&::GorillaNetworking::CosmeticsController::RemoveWardrobeInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c55890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"RemoveWardrobeInstance", {}, {::i2c::type_of<::GlobalNamespace::WardrobeInstance*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.IsOwnedByPlayFabID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController::*)(::StringW)>(&::GorillaNetworking::CosmeticsController::IsOwnedByPlayFabID)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c558e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"IsOwnedByPlayFabID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetOwnedCollectableCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::CosmeticsController::*)(::StringW)>(&::GorillaNetworking::CosmeticsController::GetOwnedCollectableCount)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c559d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetOwnedCollectableCount", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetRemainingCollectableSlots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::CosmeticsController::*)(::StringW)>(&::GorillaNetworking::CosmeticsController::GetRemainingCollectableSlots)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5c55abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetRemainingCollectableSlots", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.CanPurchaseCollectable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController::*)(::StringW)>(&::GorillaNetworking::CosmeticsController::CanPurchaseCollectable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5c55bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CanPurchaseCollectable", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.BuildCanonicalCollectableOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*)>(&::GorillaNetworking::CosmeticsController::BuildCanonicalCollectableOrder)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5c55cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"BuildCanonicalCollectableOrder", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetCanonicalCollectableIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::CosmeticsController::*)(::StringW, ::StringW)>(&::GorillaNetworking::CosmeticsController::GetCanonicalCollectableIndex)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5c51b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCanonicalCollectableIndex", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.PopulateCollectionDisplayOnRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::GlobalNamespace::CosmeticsController_CosmeticItem, ::GlobalNamespace::VRRig*)>(&::GorillaNetworking::CosmeticsController::PopulateCollectionDisplayOnRoot)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0x5c55ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PopulateCollectionDisplayOnRoot", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.get_CurrencyBalance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::get_CurrencyBalance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c566c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_CurrencyBalance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.get_EarlyAccessSupporterPackCosmeticSO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::get_EarlyAccessSupporterPackCosmeticSO)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c566cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_EarlyAccessSupporterPackCosmeticSO", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::Awake)> {
  constexpr static std::size_t size = 0x80c;
  constexpr static std::size_t addrs = 0x5c566d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::Start)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5c56f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::OnEnable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5c5717c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::OnDisable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c57248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::SliceUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c572a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.CompareCategoryToSavedCosmeticSlots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::CosmeticsController_CosmeticCategory, ::GlobalNamespace::CosmeticsController_CosmeticSlots)>(&::GorillaNetworking::CosmeticsController::CompareCategoryToSavedCosmeticSlots)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c572a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CompareCategoryToSavedCosmeticSlots", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticCategory>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.CategoryToNonTransferrableSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CosmeticsController_CosmeticSlots (*)(::GlobalNamespace::CosmeticsController_CosmeticCategory)>(&::GorillaNetworking::CosmeticsController::CategoryToNonTransferrableSlot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c57384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CategoryToNonTransferrableSlot", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticCategory>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.DropPositionToCosmeticSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CosmeticsController_CosmeticSlots (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::BodyDockPositions_DropPositions)>(&::GorillaNetworking::CosmeticsController::DropPositionToCosmeticSlot)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c573a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"DropPositionToCosmeticSlot", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.CosmeticSlotToDropPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BodyDockPositions_DropPositions (*)(::GlobalNamespace::CosmeticsController_CosmeticSlots)>(&::GorillaNetworking::CosmeticsController::CosmeticSlotToDropPosition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c573e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CosmeticSlotToDropPosition", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.AddItemCheckout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::CosmeticRoom::ItemCheckout*)>(&::GorillaNetworking::CosmeticsController::AddItemCheckout)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5c4e4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"AddItemCheckout", {}, {::i2c::type_of<::CosmeticRoom::ItemCheckout*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.RemoveItemCheckout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::CosmeticRoom::ItemCheckout*)>(&::GorillaNetworking::CosmeticsController::RemoveItemCheckout)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c4e638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"RemoveItemCheckout", {}, {::i2c::type_of<::CosmeticRoom::ItemCheckout*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.AddFittingRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::CosmeticRoom::FittingRoom*)>(&::GorillaNetworking::CosmeticsController::AddFittingRoom)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c4ddd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"AddFittingRoom", {}, {::i2c::type_of<::CosmeticRoom::FittingRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.RemoveFittingRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::CosmeticRoom::FittingRoom*)>(&::GorillaNetworking::CosmeticsController::RemoveFittingRoom)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c4dfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"RemoveFittingRoom", {}, {::i2c::type_of<::CosmeticRoom::FittingRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.SaveItemPreference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::CosmeticsController_CosmeticSlots, int32_t, ::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController::SaveItemPreference)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c57c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"SaveItemPreference", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.SaveCurrentItemPreferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::SaveCurrentItemPreferences)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c57ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"SaveCurrentItemPreferences", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ApplyCosmeticToSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GorillaNetworking::CosmeticsController_CosmeticSet*, ::GlobalNamespace::CosmeticsController_CosmeticItem, int32_t, ::GlobalNamespace::CosmeticsController_CosmeticSlots, bool, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*)>(&::GorillaNetworking::CosmeticsController::ApplyCosmeticToSet)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5c57dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ApplyCosmeticToSet", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ClearTryOnCollectable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaNetworking::CosmeticsController::ClearTryOnCollectable)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c57f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ClearTryOnCollectable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.PrivApplyCosmeticItemToSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GorillaNetworking::CosmeticsController_CosmeticSet*, ::GlobalNamespace::CosmeticsController_CosmeticItem, bool, bool, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*)>(&::GorillaNetworking::CosmeticsController::PrivApplyCosmeticItemToSet)> {
  constexpr static std::size_t size = 0x7f4;
  constexpr static std::size_t addrs = 0x5c5805c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PrivApplyCosmeticItemToSet", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ApplyCosmeticItemToSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GorillaNetworking::CosmeticsController_CosmeticSet*, ::GlobalNamespace::CosmeticsController_CosmeticItem, bool, bool)>(&::GorillaNetworking::CosmeticsController::ApplyCosmeticItemToSet)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c58850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ApplyCosmeticItemToSet", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ApplyCosmeticItemToSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GorillaNetworking::CosmeticsController_CosmeticSet*, ::GlobalNamespace::CosmeticsController_CosmeticItem, bool, bool, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*)>(&::GorillaNetworking::CosmeticsController::ApplyCosmeticItemToSet)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5c588fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ApplyCosmeticItemToSet", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.RemoveCosmeticItemFromSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GorillaNetworking::CosmeticsController_CosmeticSet*, ::StringW, bool)>(&::GorillaNetworking::CosmeticsController::RemoveCosmeticItemFromSet)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5c58cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"RemoveCosmeticItemFromSet", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.RepressButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::FittingRoomButton*, bool)>(&::GorillaNetworking::CosmeticsController::RepressButton)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c58ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"RepressButton", {}, {::i2c::type_of<::GlobalNamespace::FittingRoomButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.PressFittingRoomButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::FittingRoomButton*, bool)>(&::GorillaNetworking::CosmeticsController::PressFittingRoomButton)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5c58f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressFittingRoomButton", {}, {::i2c::type_of<::GlobalNamespace::FittingRoomButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.CheckIfCosmeticSetMatchesItemSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CosmeticsController_EWearingCosmeticSet (::GorillaNetworking::CosmeticsController::*)(::GorillaNetworking::CosmeticsController_CosmeticSet*, ::StringW)>(&::GorillaNetworking::CosmeticsController::CheckIfCosmeticSetMatchesItemSet)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5c5922c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CheckIfCosmeticSetMatchesItemSet", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.PressCosmeticStandButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::CosmeticStand*)>(&::GorillaNetworking::CosmeticsController::PressCosmeticStandButton)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x5c59368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressCosmeticStandButton", {}, {::i2c::type_of<::GlobalNamespace::CosmeticStand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.PressWardrobeItemButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::CosmeticsController_CosmeticItem, bool, bool)>(&::GorillaNetworking::CosmeticsController::PressWardrobeItemButton)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c59780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressWardrobeItemButton", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.PressWardrobeItemButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::CosmeticsController_CosmeticItem, bool)>(&::GorillaNetworking::CosmeticsController::PressWardrobeItemButton)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5c598b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressWardrobeItemButton", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.PressTemporaryWardrobeItemButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::CosmeticsController_CosmeticItem, bool)>(&::GorillaNetworking::CosmeticsController::PressTemporaryWardrobeItemButton)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c59864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressTemporaryWardrobeItemButton", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.PressWardrobeFunctionButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::StringW)>(&::GorillaNetworking::CosmeticsController::PressWardrobeFunctionButton)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x5c59b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressWardrobeFunctionButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ClearCheckout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(bool)>(&::GorillaNetworking::CosmeticsController::ClearCheckout)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5c5a0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ClearCheckout", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.RemoveItemFromCart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController::RemoveItemFromCart)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5c5a9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"RemoveItemFromCart", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ClearCheckoutAndCart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(bool)>(&::GorillaNetworking::CosmeticsController::ClearCheckoutAndCart)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c5ab08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ClearCheckoutAndCart", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.PressCheckoutCartButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::CheckoutCartButton*, bool)>(&::GorillaNetworking::CosmeticsController::PressCheckoutCartButton)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5c5abe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressCheckoutCartButton", {}, {::i2c::type_of<::GlobalNamespace::CheckoutCartButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.RefreshItemToBuyPreview
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::RefreshItemToBuyPreview)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x5c578f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"RefreshItemToBuyPreview", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.PressPurchaseItemButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::PurchaseItemButton*, bool)>(&::GorillaNetworking::CosmeticsController::PressPurchaseItemButton)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c5ad08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressPurchaseItemButton", {}, {::i2c::type_of<::GlobalNamespace::PurchaseItemButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.PurchaseBundle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GorillaNetworking::Store::StoreBundle*, ::Cosmetics::ICreatorCodeProvider*)>(&::GorillaNetworking::CosmeticsController::PurchaseBundle)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c5ad20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PurchaseBundle", {}, {::i2c::type_of<::GorillaNetworking::Store::StoreBundle*>(), ::i2c::type_of<::Cosmetics::ICreatorCodeProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.OnCreatorCodeFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::OnCreatorCodeFailure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5adf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"OnCreatorCodeFailure", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.PressEarlyAccessButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::PressEarlyAccessButton)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c5ae00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressEarlyAccessButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ProcessPurchaseItemState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::StringW, bool)>(&::GorillaNetworking::CosmeticsController::ProcessPurchaseItemState)> {
  constexpr static std::size_t size = 0x7f0;
  constexpr static std::size_t addrs = 0x5c5a1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ProcessPurchaseItemState", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.FormattedPurchaseText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::StringW, ::StringW, ::StringW, bool, bool)>(&::GorillaNetworking::CosmeticsController::FormattedPurchaseText)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5c575d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"FormattedPurchaseText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.PurchaseItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::PurchaseItem)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5c5b09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PurchaseItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.UnlockItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::StringW, bool)>(&::GorillaNetworking::CosmeticsController::UnlockItem)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5c5b274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UnlockItem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ModifyUnlockList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*, int32_t, bool)>(&::GorillaNetworking::CosmeticsController::ModifyUnlockList)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5c5b5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ModifyUnlockList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.CheckIfMyCosmeticsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::CosmeticsController::*)(::StringW)>(&::GorillaNetworking::CosmeticsController::CheckIfMyCosmeticsUpdated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c5b7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CheckIfMyCosmeticsUpdated", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.UpdateWardrobeModelsAndButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::UpdateWardrobeModelsAndButtons)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0x5c551dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UpdateWardrobeModelsAndButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetCategorySize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::CosmeticsController_CosmeticCategory)>(&::GorillaNetworking::CosmeticsController::GetCategorySize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c5b850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCategorySize", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticCategory>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetCosmetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CosmeticsController_CosmeticItem (::GorillaNetworking::CosmeticsController::*)(int32_t, int32_t)>(&::GorillaNetworking::CosmeticsController::GetCosmetic)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c5b8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCosmetic", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetCosmetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CosmeticsController_CosmeticItem (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::CosmeticsController_CosmeticCategory, int32_t)>(&::GorillaNetworking::CosmeticsController::GetCosmetic)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c5b9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCosmetic", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticCategory>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetIndexForCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::CosmeticsController_CosmeticCategory)>(&::GorillaNetworking::CosmeticsController::GetIndexForCategory)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c5b8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetIndexForCategory", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticCategory>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.IsCosmeticEquipped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController::IsCosmeticEquipped)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c5ba14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"IsCosmeticEquipped", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.IsCosmeticEquipped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::CosmeticsController_CosmeticItem, bool)>(&::GorillaNetworking::CosmeticsController::IsCosmeticEquipped)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c5ba58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"IsCosmeticEquipped", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.IsTemporaryCosmeticEquipped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController::IsTemporaryCosmeticEquipped)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c5baa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"IsTemporaryCosmeticEquipped", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetSlotItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CosmeticsController_CosmeticItem (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::CosmeticsController_CosmeticSlots, bool, bool)>(&::GorillaNetworking::CosmeticsController::GetSlotItem)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c5bae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetSlotItem", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetCurrentlyWornCosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GorillaNetworking::CosmeticsController::*)(bool)>(&::GorillaNetworking::CosmeticsController::GetCurrentlyWornCosmetics)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c5bbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCurrentlyWornCosmetics", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetCurrentRightEquippedSided
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (::GorillaNetworking::CosmeticsController::*)(bool)>(&::GorillaNetworking::CosmeticsController::GetCurrentRightEquippedSided)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c5bbe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCurrentRightEquippedSided", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.UpdateShoppingCart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::UpdateShoppingCart)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5c57408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UpdateShoppingCart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.UpdateWornCosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::UpdateWornCosmetics)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c5b204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UpdateWornCosmetics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.UpdateWornCosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(bool)>(&::GorillaNetworking::CosmeticsController::UpdateWornCosmetics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c59224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UpdateWornCosmetics", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.UpdateWornCosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(bool, bool)>(&::GorillaNetworking::CosmeticsController::UpdateWornCosmetics)> {
  constexpr static std::size_t size = 0x970;
  constexpr static std::size_t addrs = 0x5c5bc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UpdateWornCosmetics", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetItemFromDict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CosmeticsController_CosmeticItem (::GorillaNetworking::CosmeticsController::*)(::StringW)>(&::GorillaNetworking::CosmeticsController::GetItemFromDict)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c58c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetItemFromDict", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetItemNameFromDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::CosmeticsController::*)(::StringW)>(&::GorillaNetworking::CosmeticsController::GetItemNameFromDisplayName)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5c5c57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetItemNameFromDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetCosmeticSOFromDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> (::GorillaNetworking::CosmeticsController::*)(::StringW)>(&::GorillaNetworking::CosmeticsController::GetCosmeticSOFromDisplayName)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5c536a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCosmeticSOFromDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetClipOffsetsFromDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets (::GorillaNetworking::CosmeticsController::*)(::StringW)>(&::GorillaNetworking::CosmeticsController::GetClipOffsetsFromDisplayName)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5c5c634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetClipOffsetsFromDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.AnyMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController::*)(::GorillaNetworking::CosmeticsController_CosmeticSet*, ::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController::AnyMatch)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5c4e270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"AnyMatch", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::Initialize)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5c5c8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetLastDailyLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::GetLastDailyLogin)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5c5ccd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetLastDailyLogin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.CheckCanGetDaily
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::CheckCanGetDaily)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c56ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CheckCanGetDaily", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetMyDaily
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::GetMyDaily)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c5ce08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetMyDaily", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetCosmeticsPlayFabCatalogData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::GetCosmeticsPlayFabCatalogData)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5c5cbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCosmeticsPlayFabCatalogData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.TryGetBundleMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController::*)(::StringW, ::by_ref<::GlobalNamespace::BundleData>)>(&::GorillaNetworking::CosmeticsController::TryGetBundleMapping)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c5cfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"TryGetBundleMapping", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BundleData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ReconcileBundleRewardsIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*)>(&::GorillaNetworking::CosmeticsController::ReconcileBundleRewardsIfNeeded)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5c5cfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ReconcileBundleRewardsIfNeeded", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetCosmeticsPlayFabCatalogDataInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::GetCosmeticsPlayFabCatalogDataInternal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5c5ce7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCosmeticsPlayFabCatalogDataInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.CompleteGetCosmeticsPlayFabCatalogData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::CompleteGetCosmeticsPlayFabCatalogData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c5d3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CompleteGetCosmeticsPlayFabCatalogData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.SteamPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::SteamPurchase)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5c5aeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"SteamPurchase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetStartPurchaseRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::ClientModels::StartPurchaseRequest* (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::GetStartPurchaseRequest)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5c5d3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetStartPurchaseRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ProcessStartPurchaseResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::PlayFab::ClientModels::StartPurchaseResult*)>(&::GorillaNetworking::CosmeticsController::ProcessStartPurchaseResponse)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5c5d590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ProcessStartPurchaseResponse", {}, {::i2c::type_of<::PlayFab::ClientModels::StartPurchaseResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetPayForPurchaseRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::ClientModels::PayForPurchaseRequest* (*)(::StringW)>(&::GorillaNetworking::CosmeticsController::GetPayForPurchaseRequest)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c5d730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetPayForPurchaseRequest", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ProcessPayForPurchaseResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::ClientModels::PayForPurchaseResult*)>(&::GorillaNetworking::CosmeticsController::ProcessPayForPurchaseResult)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c5d7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ProcessPayForPurchaseResult", {}, {::i2c::type_of<::PlayFab::ClientModels::PayForPurchaseResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ProcessSteamCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::Steamworks::MicroTxnAuthorizationResponse_t)>(&::GorillaNetworking::CosmeticsController::ProcessSteamCallback)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5c5d858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ProcessSteamCallback", {}, {::i2c::type_of<::Steamworks::MicroTxnAuthorizationResponse_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetConfirmBundlePurchaseRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::ClientModels::ConfirmPurchaseRequest* (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::GetConfirmBundlePurchaseRequest)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5c5da8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetConfirmBundlePurchaseRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetConfirmATMPurchaseRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::ClientModels::ConfirmPurchaseRequest* (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::GetConfirmATMPurchaseRequest)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5c5dc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetConfirmATMPurchaseRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ProcessConfirmPurchaseSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::ProcessConfirmPurchaseSuccess)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5c5de24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ProcessConfirmPurchaseSuccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ProcessConfirmPurchaseError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::CosmeticsController::ProcessConfirmPurchaseError)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c5e380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ProcessConfirmPurchaseError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ProcessSteamPurchaseError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::CosmeticsController::ProcessSteamPurchaseError)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x5c5e404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ProcessSteamPurchaseError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.UpdateCurrencyBoards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::UpdateCurrencyBoards)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5c5e268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UpdateCurrencyBoards", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.AddCurrencyBoard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::CosmeticRoom::CurrencyBoard*)>(&::GorillaNetworking::CosmeticsController::AddCurrencyBoard)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c5e7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"AddCurrencyBoard", {}, {::i2c::type_of<::CosmeticRoom::CurrencyBoard*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.RemoveCurrencyBoard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::CosmeticRoom::CurrencyBoard*)>(&::GorillaNetworking::CosmeticsController::RemoveCurrencyBoard)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c5e8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"RemoveCurrencyBoard", {}, {::i2c::type_of<::CosmeticRoom::CurrencyBoard*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetCurrencyBalance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::GetCurrencyBalance)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5c5e0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCurrencyBalance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetItemDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController::GetItemDisplayName)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c5b210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetItemDisplayName", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.UpdateMyCosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::UpdateMyCosmetics)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c5e030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UpdateMyCosmetics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.AlreadyOwnAllBundleButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::AlreadyOwnAllBundleButtons)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c5e944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"AlreadyOwnAllBundleButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.CheckCosmeticsSharedGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::CheckCosmeticsSharedGroup)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c5e9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CheckCosmeticsSharedGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.WaitForNextCosmeticsAttempt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::WaitForNextCosmeticsAttempt)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c5e9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"WaitForNextCosmeticsAttempt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ConfirmIndividualCosmeticsSharedGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::PlayFab::ClientModels::GetUserInventoryResult*)>(&::GorillaNetworking::CosmeticsController::ConfirmIndividualCosmeticsSharedGroup)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5c5ea54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ConfirmIndividualCosmeticsSharedGroup", {}, {::i2c::type_of<::PlayFab::ClientModels::GetUserInventoryResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ReauthOrBan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::CosmeticsController::ReauthOrBan)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5c5ed60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ReauthOrBan", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ProcessExternalUnlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::StringW, bool, bool)>(&::GorillaNetworking::CosmeticsController::ProcessExternalUnlock)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5c5ef80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ProcessExternalUnlock", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.AddTempUnlockToWardrobe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::StringW)>(&::GorillaNetworking::CosmeticsController::AddTempUnlockToWardrobe)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5c5f38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"AddTempUnlockToWardrobe", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.RemoveTempUnlockFromWardrobe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::StringW)>(&::GorillaNetworking::CosmeticsController::RemoveTempUnlockFromWardrobe)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5c5f620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"RemoveTempUnlockFromWardrobe", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::BuildValidationCheck)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5c5f8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.SetHideCosmeticsFromRemotePlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(bool)>(&::GorillaNetworking::CosmeticsController::SetHideCosmeticsFromRemotePlayers)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c5f96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"SetHideCosmeticsFromRemotePlayers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ValidatePackedItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController::*)(::ArrayW<int32_t>)>(&::GorillaNetworking::CosmeticsController::ValidatePackedItems)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c5fa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ValidatePackedItems", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.PackCollectableItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*)>(&::GorillaNetworking::CosmeticsController::PackCollectableItems)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5c5facc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PackCollectableItems", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.UnpackCollectableItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem> (::GorillaNetworking::CosmeticsController::*)(::ArrayW<int32_t>)>(&::GorillaNetworking::CosmeticsController::UnpackCollectableItems)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5c5fcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UnpackCollectableItems", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.SetValidatedCreatorCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::StringW, ::StringW, ::StringW)>(&::GorillaNetworking::CosmeticsController::SetValidatedCreatorCode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c5ffa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"SetValidatedCreatorCode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.get_SelectedOutfit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GorillaNetworking::CosmeticsController::get_SelectedOutfit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c60060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_SelectedOutfit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.CanScrollOutfits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaNetworking::CosmeticsController::CanScrollOutfits)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c600b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CanScrollOutfits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.PressWardrobeScrollOutfit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(bool)>(&::GorillaNetworking::CosmeticsController::PressWardrobeScrollOutfit)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c6013c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressWardrobeScrollOutfit", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.LoadSavedOutfit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(int32_t)>(&::GorillaNetworking::CosmeticsController::LoadSavedOutfit)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5c601f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"LoadSavedOutfit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ApplyNewItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GorillaNetworking::CosmeticsController_CosmeticSet*, int32_t)>(&::GorillaNetworking::CosmeticsController::ApplyNewItem)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c60778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ApplyNewItem", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.LoadSavedOutfits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::LoadSavedOutfits)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c60ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"LoadSavedOutfits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetSavedOutfitsSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::MothershipUserData*)>(&::GorillaNetworking::CosmeticsController::GetSavedOutfitsSuccess)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5c60d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetSavedOutfitsSuccess", {}, {::i2c::type_of<::GlobalNamespace::MothershipUserData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetSavedOutfitsFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GorillaNetworking::CosmeticsController::GetSavedOutfitsFail)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c617c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetSavedOutfitsFail", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.GetSavedOutfitsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::GetSavedOutfitsComplete)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5c61544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetSavedOutfitsComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.UpdateMonkeColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::UnityEngine::Vector3, bool)>(&::GorillaNetworking::CosmeticsController::UpdateMonkeColor)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x5c6087c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UpdateMonkeColor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.SaveOutfitsToMothership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::SaveOutfitsToMothership)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5c60530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"SaveOutfitsToMothership", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.SaveOutfitsToMothershipSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::SetUserDataResponse*)>(&::GorillaNetworking::CosmeticsController::SaveOutfitsToMothershipSuccess)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c61cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"SaveOutfitsToMothershipSuccess", {}, {::i2c::type_of<::GlobalNamespace::SetUserDataResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.SaveOutfitsToMothershipFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GorillaNetworking::CosmeticsController::SaveOutfitsToMothershipFail)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5c61d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"SaveOutfitsToMothershipFail", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.OutfitsToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::OutfitsToString)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x5c618c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"OutfitsToString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.ClearOutfits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::ClearOutfits)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5c613c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ClearOutfits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController.StringToOutfits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::StringW)>(&::GorillaNetworking::CosmeticsController::StringToOutfits)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x5c60f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"StringToOutfits", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)()>(&::GorillaNetworking::CosmeticsController::_ctor)> {
  constexpr static std::size_t size = 0x77c;
  constexpr static std::size_t addrs = 0x5c61e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController._Start_b__170_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::StringW)>(&::GorillaNetworking::CosmeticsController::_Start_b__170_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c62804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<Start>b__170_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController._ProcessPurchaseItemState_b__210_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController::_ProcessPurchaseItemState_b__210_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c6281c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<ProcessPurchaseItemState>b__210_0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController._PurchaseItem_b__212_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::PlayFab::ClientModels::PurchaseItemResult*)>(&::GorillaNetworking::CosmeticsController::_PurchaseItem_b__212_0)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5c6282c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<PurchaseItem>b__212_0", {}, {::i2c::type_of<::PlayFab::ClientModels::PurchaseItemResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController._PurchaseItem_b__212_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::CosmeticsController::_PurchaseItem_b__212_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c62b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<PurchaseItem>b__212_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController._GetLastDailyLogin_b__237_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::PlayFab::ClientModels::GetUserDataResult*)>(&::GorillaNetworking::CosmeticsController::_GetLastDailyLogin_b__237_0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c62b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<GetLastDailyLogin>b__237_0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetUserDataResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController._GetLastDailyLogin_b__237_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::CosmeticsController::_GetLastDailyLogin_b__237_1)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5c62bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<GetLastDailyLogin>b__237_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController._GetMyDaily_b__239_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::PlayFab::CloudScriptModels::ExecuteFunctionResult*)>(&::GorillaNetworking::CosmeticsController::_GetMyDaily_b__239_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c62eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<GetMyDaily>b__239_0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController._ReconcileBundleRewardsIfNeeded_b__242_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*)>(&::GorillaNetworking::CosmeticsController::_ReconcileBundleRewardsIfNeeded_b__242_0)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c62ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<ReconcileBundleRewardsIfNeeded>b__242_0", {}, {::i2c::type_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController._GetCosmeticsPlayFabCatalogDataInternal_b__243_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::PlayFab::ClientModels::GetUserInventoryResult*)>(&::GorillaNetworking::CosmeticsController::_GetCosmeticsPlayFabCatalogDataInternal_b__243_0)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5c62fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__243_0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetUserInventoryResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController._GetCosmeticsPlayFabCatalogDataInternal_b__243_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::CosmeticsController::_GetCosmeticsPlayFabCatalogDataInternal_b__243_3)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5c63160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__243_3", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController._GetCosmeticsPlayFabCatalogDataInternal_b__243_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::CosmeticsController::_GetCosmeticsPlayFabCatalogDataInternal_b__243_1)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5c633ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__243_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController._ProcessSteamCallback_b__250_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::PlayFab::ClientModels::ConfirmPurchaseResult*)>(&::GorillaNetworking::CosmeticsController::_ProcessSteamCallback_b__250_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c63678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<ProcessSteamCallback>b__250_0", {}, {::i2c::type_of<::PlayFab::ClientModels::ConfirmPurchaseResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController._ProcessSteamCallback_b__250_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::PlayFab::ClientModels::ConfirmPurchaseResult*)>(&::GorillaNetworking::CosmeticsController::_ProcessSteamCallback_b__250_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6367c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<ProcessSteamCallback>b__250_1", {}, {::i2c::type_of<::PlayFab::ClientModels::ConfirmPurchaseResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController._GetCurrencyBalance_b__259_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController::*)(::PlayFab::ClientModels::GetUserInventoryResult*)>(&::GorillaNetworking::CosmeticsController::_GetCurrencyBalance_b__259_0)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x5c63680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<GetCurrencyBalance>b__259_0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetUserInventoryResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaTag::GTAssetRef_1<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_v2_allCosmeticsInfoAssetRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___v2_allCosmeticsInfoAssetRef;
}
constexpr ::GorillaTag::GTAssetRef_1<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_v2_allCosmeticsInfoAssetRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___v2_allCosmeticsInfoAssetRef;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_v2_allCosmeticsInfoAssetRef(::GorillaTag::GTAssetRef_1<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___v2_allCosmeticsInfoAssetRef = value;
}
constexpr ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticInfoV2>& GorillaNetworking::CosmeticsController::__cordl_internal_get__v2_allCosmetics_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____v2_allCosmetics_k__BackingField;
}
constexpr ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticInfoV2> const& GorillaNetworking::CosmeticsController::__cordl_internal_get__v2_allCosmetics_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____v2_allCosmetics_k__BackingField;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set__v2_allCosmetics_k__BackingField(::ArrayW<::GorillaTag::CosmeticSystem::CosmeticInfoV2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____v2_allCosmetics_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaTag::CosmeticSystem::CosmeticInfoV2>*& GorillaNetworking::CosmeticsController::__cordl_internal_get__allCosmeticsDictV2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allCosmeticsDictV2;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaTag::CosmeticSystem::CosmeticInfoV2>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get__allCosmeticsDictV2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allCosmeticsDictV2;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set__allCosmeticsDictV2(::System::Collections::Generic::Dictionary_2<::StringW,::GorillaTag::CosmeticSystem::CosmeticInfoV2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allCosmeticsDictV2 = value;
}
constexpr ::System::Action*& GorillaNetworking::CosmeticsController::__cordl_internal_get_V2_allCosmeticsInfoAssetRef_OnPostLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___V2_allCosmeticsInfoAssetRef_OnPostLoad;
}
constexpr ::System::Action* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_V2_allCosmeticsInfoAssetRef_OnPostLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___V2_allCosmeticsInfoAssetRef_OnPostLoad;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_V2_allCosmeticsInfoAssetRef_OnPostLoad(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___V2_allCosmeticsInfoAssetRef_OnPostLoad = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get__v2_allCosmeticsInfoAssetRef_isLoaded_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____v2_allCosmeticsInfoAssetRef_isLoaded_k__BackingField;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get__v2_allCosmeticsInfoAssetRef_isLoaded_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____v2_allCosmeticsInfoAssetRef_isLoaded_k__BackingField;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set__v2_allCosmeticsInfoAssetRef_isLoaded_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____v2_allCosmeticsInfoAssetRef_isLoaded_k__BackingField = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get__v2_isCosmeticPlayFabCatalogDataLoaded_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____v2_isCosmeticPlayFabCatalogDataLoaded_k__BackingField;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get__v2_isCosmeticPlayFabCatalogDataLoaded_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____v2_isCosmeticPlayFabCatalogDataLoaded_k__BackingField;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set__v2_isCosmeticPlayFabCatalogDataLoaded_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____v2_isCosmeticPlayFabCatalogDataLoaded_k__BackingField = value;
}
constexpr ::System::Action*& GorillaNetworking::CosmeticsController::__cordl_internal_get_V2_OnGetCosmeticsPlayFabCatalogData_PostSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___V2_OnGetCosmeticsPlayFabCatalogData_PostSuccess;
}
constexpr ::System::Action* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_V2_OnGetCosmeticsPlayFabCatalogData_PostSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___V2_OnGetCosmeticsPlayFabCatalogData_PostSuccess;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_V2_OnGetCosmeticsPlayFabCatalogData_PostSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___V2_OnGetCosmeticsPlayFabCatalogData_PostSuccess = value;
}
constexpr ::System::Action*& GorillaNetworking::CosmeticsController::__cordl_internal_get_OnGetCurrency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGetCurrency;
}
constexpr ::System::Action* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_OnGetCurrency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGetCurrency;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_OnGetCurrency(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGetCurrency = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController::__cordl_internal_get_purchaseLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseLocation;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController::__cordl_internal_get_purchaseLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseLocation;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_purchaseLocation(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseLocation = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& GorillaNetworking::CosmeticsController::__cordl_internal_get__allCosmetics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allCosmetics;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get__allCosmetics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allCosmetics;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set__allCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allCosmetics = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get__allCosmeticsDict_isInitialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allCosmeticsDict_isInitialized_k__BackingField;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get__allCosmeticsDict_isInitialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allCosmeticsDict_isInitialized_k__BackingField;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set__allCosmeticsDict_isInitialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allCosmeticsDict_isInitialized_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CosmeticsController_CosmeticItem>*& GorillaNetworking::CosmeticsController::__cordl_internal_get__allCosmeticsDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allCosmeticsDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CosmeticsController_CosmeticItem>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get__allCosmeticsDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allCosmeticsDict;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set__allCosmeticsDict(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allCosmeticsDict = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get__allCosmeticsItemIDsfromDisplayNamesDict_isInitialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allCosmeticsItemIDsfromDisplayNamesDict_isInitialized_k__BackingField;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get__allCosmeticsItemIDsfromDisplayNamesDict_isInitialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allCosmeticsItemIDsfromDisplayNamesDict_isInitialized_k__BackingField;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set__allCosmeticsItemIDsfromDisplayNamesDict_isInitialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allCosmeticsItemIDsfromDisplayNamesDict_isInitialized_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& GorillaNetworking::CosmeticsController::__cordl_internal_get__allCosmeticsItemIDsfromDisplayNamesDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allCosmeticsItemIDsfromDisplayNamesDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get__allCosmeticsItemIDsfromDisplayNamesDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allCosmeticsItemIDsfromDisplayNamesDict;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set__allCosmeticsItemIDsfromDisplayNamesDict(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allCosmeticsItemIDsfromDisplayNamesDict = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& GorillaNetworking::CosmeticsController::__cordl_internal_get_nullItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nullItem;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& GorillaNetworking::CosmeticsController::__cordl_internal_get_nullItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nullItem;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_nullItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nullItem = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController::__cordl_internal_get_catalog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catalog;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController::__cordl_internal_get_catalog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catalog;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_catalog(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catalog = value;
}
constexpr ::ArrayW<::StringW>& GorillaNetworking::CosmeticsController::__cordl_internal_get_tempStringArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempStringArray;
}
constexpr ::ArrayW<::StringW> const& GorillaNetworking::CosmeticsController::__cordl_internal_get_tempStringArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempStringArray;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_tempStringArray(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempStringArray = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& GorillaNetworking::CosmeticsController::__cordl_internal_get_tempItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempItem;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& GorillaNetworking::CosmeticsController::__cordl_internal_get_tempItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempItem;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_tempItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempItem = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>& GorillaNetworking::CosmeticsController::__cordl_internal_get_anchorOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorOverrides;
}
constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides> const& GorillaNetworking::CosmeticsController::__cordl_internal_get_anchorOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorOverrides;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_anchorOverrides(::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchorOverrides = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CatalogItem*>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_catalogItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catalogItems;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CatalogItem*>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_catalogItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catalogItems;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_catalogItems(::System::Collections::Generic::List_1<::PlayFab::ClientModels::CatalogItem*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catalogItems = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get_tryGetCatalogTwice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryGetCatalogTwice;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get_tryGetCatalogTwice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryGetCatalogTwice;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_tryGetCatalogTwice(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryGetCatalogTwice = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get_catalogRequestInFlight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catalogRequestInFlight;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get_catalogRequestInFlight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catalogRequestInFlight;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_catalogRequestInFlight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catalogRequestInFlight = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get_catalogRequestRerunQueued()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catalogRequestRerunQueued;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get_catalogRequestRerunQueued() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catalogRequestRerunQueued;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_catalogRequestRerunQueued(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catalogRequestRerunQueued = value;
}
constexpr ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData>& GorillaNetworking::CosmeticsController::__cordl_internal_get_customMapCosmeticsData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapCosmeticsData;
}
constexpr ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData> const& GorillaNetworking::CosmeticsController::__cordl_internal_get_customMapCosmeticsData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapCosmeticsData;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_customMapCosmeticsData(::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customMapCosmeticsData = value;
}
constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet*& GorillaNetworking::CosmeticsController::__cordl_internal_get_tryOnSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryOnSet;
}
constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_tryOnSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryOnSet;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_tryOnSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryOnSet = value;
}
constexpr int32_t& GorillaNetworking::CosmeticsController::__cordl_internal_get_numFittingRoomButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numFittingRoomButtons;
}
constexpr int32_t const& GorillaNetworking::CosmeticsController::__cordl_internal_get_numFittingRoomButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numFittingRoomButtons;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_numFittingRoomButtons(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numFittingRoomButtons = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::FittingRoom>>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_fittingRooms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fittingRooms;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::FittingRoom>>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_fittingRooms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fittingRooms;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_fittingRooms(::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::FittingRoom>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fittingRooms = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticStand>>& GorillaNetworking::CosmeticsController::__cordl_internal_get_cosmeticStands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticStands;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticStand>> const& GorillaNetworking::CosmeticsController::__cordl_internal_get_cosmeticStands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticStands;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_cosmeticStands(::ArrayW<::UnityW<::GlobalNamespace::CosmeticStand>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticStands = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_currentCart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCart;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_currentCart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCart;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_currentCart(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentCart = value;
}
constexpr ::GlobalNamespace::CosmeticsController_PurchaseItemStages& GorillaNetworking::CosmeticsController::__cordl_internal_get_currentPurchaseItemStage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPurchaseItemStage;
}
constexpr ::GlobalNamespace::CosmeticsController_PurchaseItemStages const& GorillaNetworking::CosmeticsController::__cordl_internal_get_currentPurchaseItemStage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPurchaseItemStage;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_currentPurchaseItemStage(::GlobalNamespace::CosmeticsController_PurchaseItemStages  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPurchaseItemStage = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::ItemCheckout>>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_itemCheckouts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemCheckouts;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::ItemCheckout>>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_itemCheckouts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemCheckouts;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_itemCheckouts(::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::ItemCheckout>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemCheckouts = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& GorillaNetworking::CosmeticsController::__cordl_internal_get_itemToBuy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemToBuy;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& GorillaNetworking::CosmeticsController::__cordl_internal_get_itemToBuy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemToBuy;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_itemToBuy(::GlobalNamespace::CosmeticsController_CosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemToBuy = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get_foundCosmetic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foundCosmetic;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get_foundCosmetic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foundCosmetic;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_foundCosmetic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___foundCosmetic = value;
}
constexpr int32_t& GorillaNetworking::CosmeticsController::__cordl_internal_get_attempts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attempts;
}
constexpr int32_t const& GorillaNetworking::CosmeticsController::__cordl_internal_get_attempts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attempts;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_attempts(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attempts = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController::__cordl_internal_get_finalLine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalLine;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController::__cordl_internal_get_finalLine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalLine;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_finalLine(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finalLine = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController::__cordl_internal_get_leftCheckoutPurchaseButtonString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftCheckoutPurchaseButtonString;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController::__cordl_internal_get_leftCheckoutPurchaseButtonString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftCheckoutPurchaseButtonString;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_leftCheckoutPurchaseButtonString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftCheckoutPurchaseButtonString = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController::__cordl_internal_get_rightCheckoutPurchaseButtonString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightCheckoutPurchaseButtonString;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController::__cordl_internal_get_rightCheckoutPurchaseButtonString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightCheckoutPurchaseButtonString;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_rightCheckoutPurchaseButtonString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightCheckoutPurchaseButtonString = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get_leftCheckoutPurchaseButtonOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftCheckoutPurchaseButtonOn;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get_leftCheckoutPurchaseButtonOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftCheckoutPurchaseButtonOn;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_leftCheckoutPurchaseButtonOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftCheckoutPurchaseButtonOn = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get_rightCheckoutPurchaseButtonOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightCheckoutPurchaseButtonOn;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get_rightCheckoutPurchaseButtonOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightCheckoutPurchaseButtonOn;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_rightCheckoutPurchaseButtonOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightCheckoutPurchaseButtonOn = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get_isLastHandTouchedLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLastHandTouchedLeft;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get_isLastHandTouchedLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLastHandTouchedLeft;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_isLastHandTouchedLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLastHandTouchedLeft = value;
}
constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet*& GorillaNetworking::CosmeticsController::__cordl_internal_get_cachedSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSet;
}
constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_cachedSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSet;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_cachedSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedSet = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get__isHidingCosmeticsFromRemotePlayers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHidingCosmeticsFromRemotePlayers_k__BackingField;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get__isHidingCosmeticsFromRemotePlayers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHidingCosmeticsFromRemotePlayers_k__BackingField;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set__isHidingCosmeticsFromRemotePlayers_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isHidingCosmeticsFromRemotePlayers_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WardrobeInstance>>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_wardrobes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wardrobes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WardrobeInstance>>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_wardrobes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wardrobes;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_wardrobes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WardrobeInstance>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wardrobes = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedCosmetics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedCosmetics;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedCosmetics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedCosmetics;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_unlockedCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedCosmetics = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedHats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedHats;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedHats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedHats;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_unlockedHats(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedHats = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedFaces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedFaces;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedFaces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedFaces;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_unlockedFaces(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedFaces = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedBadges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedBadges;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedBadges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedBadges;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_unlockedBadges(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedBadges = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedPaws()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedPaws;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedPaws() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedPaws;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_unlockedPaws(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedPaws = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedChests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedChests;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedChests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedChests;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_unlockedChests(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedChests = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedFurs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedFurs;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedFurs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedFurs;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_unlockedFurs(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedFurs = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedShirts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedShirts;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedShirts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedShirts;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_unlockedShirts(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedShirts = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedPants()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedPants;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedPants() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedPants;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_unlockedPants(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedPants = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedBacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedBacks;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedBacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedBacks;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_unlockedBacks(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedBacks = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedArms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedArms;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedArms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedArms;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_unlockedArms(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedArms = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedTagFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedTagFX;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedTagFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedTagFX;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_unlockedTagFX(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedTagFX = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedThrowables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedThrowables;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_unlockedThrowables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedThrowables;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_unlockedThrowables(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedThrowables = value;
}
constexpr ::ArrayW<int32_t>& GorillaNetworking::CosmeticsController::__cordl_internal_get_cosmeticsPages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticsPages;
}
constexpr ::ArrayW<int32_t> const& GorillaNetworking::CosmeticsController::__cordl_internal_get_cosmeticsPages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticsPages;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_cosmeticsPages(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticsPages = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>& GorillaNetworking::CosmeticsController::__cordl_internal_get_itemLists()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemLists;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*> const& GorillaNetworking::CosmeticsController::__cordl_internal_get_itemLists() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemLists;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_itemLists(::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemLists = value;
}
constexpr int32_t& GorillaNetworking::CosmeticsController::__cordl_internal_get_wardrobeType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wardrobeType;
}
constexpr int32_t const& GorillaNetworking::CosmeticsController::__cordl_internal_get_wardrobeType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wardrobeType;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_wardrobeType(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wardrobeType = value;
}
constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet*& GorillaNetworking::CosmeticsController::__cordl_internal_get_currentWornSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentWornSet;
}
constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_currentWornSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentWornSet;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_currentWornSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentWornSet = value;
}
constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet*& GorillaNetworking::CosmeticsController::__cordl_internal_get_tempUnlockedSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempUnlockedSet;
}
constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_tempUnlockedSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempUnlockedSet;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_tempUnlockedSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempUnlockedSet = value;
}
constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet*& GorillaNetworking::CosmeticsController::__cordl_internal_get_activeMergedSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeMergedSet;
}
constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_activeMergedSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeMergedSet;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_activeMergedSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeMergedSet = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& GorillaNetworking::CosmeticsController::__cordl_internal_get_tryOnCollectableItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryOnCollectableItem;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& GorillaNetworking::CosmeticsController::__cordl_internal_get_tryOnCollectableItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryOnCollectableItem;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_tryOnCollectableItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryOnCollectableItem = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController::__cordl_internal_get_concatStringCosmeticsAllowed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___concatStringCosmeticsAllowed;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController::__cordl_internal_get_concatStringCosmeticsAllowed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___concatStringCosmeticsAllowed;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_concatStringCosmeticsAllowed(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___concatStringCosmeticsAllowed = value;
}
constexpr ::System::Action*& GorillaNetworking::CosmeticsController::__cordl_internal_get_OnCosmeticsUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCosmeticsUpdated;
}
constexpr ::System::Action* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_OnCosmeticsUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCosmeticsUpdated;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_OnCosmeticsUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCosmeticsUpdated = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_collectablesByParentID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectablesByParentID;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_collectablesByParentID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectablesByParentID;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_collectablesByParentID(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectablesByParentID = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::StringW>,::GlobalNamespace::CosmeticsController_CollectionState>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_localCycleStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localCycleStates;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::StringW>,::GlobalNamespace::CosmeticsController_CollectionState>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_localCycleStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localCycleStates;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_localCycleStates(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::StringW>,::GlobalNamespace::CosmeticsController_CollectionState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localCycleStates = value;
}
constexpr int32_t& GorillaNetworking::CosmeticsController::__cordl_internal_get_currencyBalance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currencyBalance;
}
constexpr int32_t const& GorillaNetworking::CosmeticsController::__cordl_internal_get_currencyBalance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currencyBalance;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_currencyBalance(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currencyBalance = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController::__cordl_internal_get_currencyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currencyName;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController::__cordl_internal_get_currencyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currencyName;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_currencyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currencyName = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::CurrencyBoard>>*& GorillaNetworking::CosmeticsController::__cordl_internal_get_currencyBoards()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currencyBoards;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::CurrencyBoard>>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_currencyBoards() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currencyBoards;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_currencyBoards(::System::Collections::Generic::List_1<::UnityW<::CosmeticRoom::CurrencyBoard>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currencyBoards = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController::__cordl_internal_get_itemToPurchase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemToPurchase;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController::__cordl_internal_get_itemToPurchase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemToPurchase;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_itemToPurchase(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemToPurchase = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get_buyingBundle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buyingBundle;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get_buyingBundle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buyingBundle;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_buyingBundle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buyingBundle = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get_confirmedDidntPlayInBeta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confirmedDidntPlayInBeta;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get_confirmedDidntPlayInBeta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confirmedDidntPlayInBeta;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_confirmedDidntPlayInBeta(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___confirmedDidntPlayInBeta = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get_playedInBeta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playedInBeta;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get_playedInBeta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playedInBeta;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_playedInBeta(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playedInBeta = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get_gotMyDaily()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gotMyDaily;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get_gotMyDaily() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gotMyDaily;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_gotMyDaily(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gotMyDaily = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get_checkedDaily()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkedDaily;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get_checkedDaily() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkedDaily;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_checkedDaily(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkedDaily = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController::__cordl_internal_get_currentPurchaseID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPurchaseID;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController::__cordl_internal_get_currentPurchaseID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPurchaseID;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_currentPurchaseID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPurchaseID = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get_hasPrice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPrice;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get_hasPrice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPrice;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_hasPrice(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPrice = value;
}
constexpr int32_t& GorillaNetworking::CosmeticsController::__cordl_internal_get_searchIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchIndex;
}
constexpr int32_t const& GorillaNetworking::CosmeticsController::__cordl_internal_get_searchIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchIndex;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_searchIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchIndex = value;
}
constexpr int32_t& GorillaNetworking::CosmeticsController::__cordl_internal_get_iterator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iterator;
}
constexpr int32_t const& GorillaNetworking::CosmeticsController::__cordl_internal_get_iterator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iterator;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_iterator(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iterator = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& GorillaNetworking::CosmeticsController::__cordl_internal_get_cosmeticItemVar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticItemVar;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& GorillaNetworking::CosmeticsController::__cordl_internal_get_cosmeticItemVar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticItemVar;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_cosmeticItemVar(::GlobalNamespace::CosmeticsController_CosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticItemVar = value;
}
constexpr ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>& GorillaNetworking::CosmeticsController::__cordl_internal_get_m_earlyAccessSupporterPackCosmeticSO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_earlyAccessSupporterPackCosmeticSO;
}
constexpr ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> const& GorillaNetworking::CosmeticsController::__cordl_internal_get_m_earlyAccessSupporterPackCosmeticSO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_earlyAccessSupporterPackCosmeticSO;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_m_earlyAccessSupporterPackCosmeticSO(::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_earlyAccessSupporterPackCosmeticSO = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::EarlyAccessButton>>& GorillaNetworking::CosmeticsController::__cordl_internal_get_earlyAccessButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___earlyAccessButtons;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::EarlyAccessButton>> const& GorillaNetworking::CosmeticsController::__cordl_internal_get_earlyAccessButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___earlyAccessButtons;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_earlyAccessButtons(::ArrayW<::UnityW<::GlobalNamespace::EarlyAccessButton>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___earlyAccessButtons = value;
}
constexpr ::GlobalNamespace::BundleList*& GorillaNetworking::CosmeticsController::__cordl_internal_get_bundleList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleList;
}
constexpr ::GlobalNamespace::BundleList* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_bundleList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleList;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_bundleList(::GlobalNamespace::BundleList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bundleList = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController::__cordl_internal_get_BundleSkuName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundleSkuName;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController::__cordl_internal_get_BundleSkuName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundleSkuName;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_BundleSkuName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BundleSkuName = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController::__cordl_internal_get_BundlePlayfabItemName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundlePlayfabItemName;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController::__cordl_internal_get_BundlePlayfabItemName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundlePlayfabItemName;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_BundlePlayfabItemName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BundlePlayfabItemName = value;
}
constexpr int32_t& GorillaNetworking::CosmeticsController::__cordl_internal_get_BundleShinyRocks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundleShinyRocks;
}
constexpr int32_t const& GorillaNetworking::CosmeticsController::__cordl_internal_get_BundleShinyRocks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundleShinyRocks;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_BundleShinyRocks(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BundleShinyRocks = value;
}
constexpr ::System::DateTime& GorillaNetworking::CosmeticsController::__cordl_internal_get_currentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTime;
}
constexpr ::System::DateTime const& GorillaNetworking::CosmeticsController::__cordl_internal_get_currentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTime;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_currentTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTime = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController::__cordl_internal_get_lastDailyLogin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDailyLogin;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController::__cordl_internal_get_lastDailyLogin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDailyLogin;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_lastDailyLogin(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastDailyLogin = value;
}
constexpr ::PlayFab::ClientModels::UserDataRecord*& GorillaNetworking::CosmeticsController::__cordl_internal_get_userDataRecord()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userDataRecord;
}
constexpr ::PlayFab::ClientModels::UserDataRecord* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_userDataRecord() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userDataRecord;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_userDataRecord(::PlayFab::ClientModels::UserDataRecord*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userDataRecord = value;
}
constexpr int32_t& GorillaNetworking::CosmeticsController::__cordl_internal_get_secondsUntilTomorrow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondsUntilTomorrow;
}
constexpr int32_t const& GorillaNetworking::CosmeticsController::__cordl_internal_get_secondsUntilTomorrow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondsUntilTomorrow;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_secondsUntilTomorrow(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondsUntilTomorrow = value;
}
constexpr float_t& GorillaNetworking::CosmeticsController::__cordl_internal_get_secondsToWaitToCheckDaily()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondsToWaitToCheckDaily;
}
constexpr float_t const& GorillaNetworking::CosmeticsController::__cordl_internal_get_secondsToWaitToCheckDaily() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondsToWaitToCheckDaily;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_secondsToWaitToCheckDaily(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondsToWaitToCheckDaily = value;
}
constexpr int32_t& GorillaNetworking::CosmeticsController::__cordl_internal_get_updateCosmeticsRetries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateCosmeticsRetries;
}
constexpr int32_t const& GorillaNetworking::CosmeticsController::__cordl_internal_get_updateCosmeticsRetries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateCosmeticsRetries;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_updateCosmeticsRetries(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateCosmeticsRetries = value;
}
constexpr int32_t& GorillaNetworking::CosmeticsController::__cordl_internal_get_maxUpdateCosmeticsRetries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxUpdateCosmeticsRetries;
}
constexpr int32_t const& GorillaNetworking::CosmeticsController::__cordl_internal_get_maxUpdateCosmeticsRetries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxUpdateCosmeticsRetries;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_maxUpdateCosmeticsRetries(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxUpdateCosmeticsRetries = value;
}
constexpr ::PlayFab::ClientModels::GetUserInventoryResult*& GorillaNetworking::CosmeticsController::__cordl_internal_get_latestInventory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latestInventory;
}
constexpr ::PlayFab::ClientModels::GetUserInventoryResult* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_latestInventory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latestInventory;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_latestInventory(::PlayFab::ClientModels::GetUserInventoryResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___latestInventory = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController::__cordl_internal_get_returnString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnString;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController::__cordl_internal_get_returnString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnString;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_returnString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnString = value;
}
constexpr bool& GorillaNetworking::CosmeticsController::__cordl_internal_get_checkoutCartButtonPressedWithLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkoutCartButtonPressedWithLeft;
}
constexpr bool const& GorillaNetworking::CosmeticsController::__cordl_internal_get_checkoutCartButtonPressedWithLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkoutCartButtonPressedWithLeft;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_checkoutCartButtonPressedWithLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkoutCartButtonPressedWithLeft = value;
}
constexpr ::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*& GorillaNetworking::CosmeticsController::__cordl_internal_get_validatedCreatorCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validatedCreatorCode;
}
constexpr ::GorillaNetworking::CosmeticsController_ValidatedCreatorCode* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_validatedCreatorCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validatedCreatorCode;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_validatedCreatorCode(::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validatedCreatorCode = value;
}
constexpr ::Steamworks::Callback_1<::Steamworks::MicroTxnAuthorizationResponse_t>*& GorillaNetworking::CosmeticsController::__cordl_internal_get__steamMicroTransactionAuthorizationResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____steamMicroTransactionAuthorizationResponse;
}
constexpr ::Steamworks::Callback_1<::Steamworks::MicroTxnAuthorizationResponse_t>* const& GorillaNetworking::CosmeticsController::__cordl_internal_get__steamMicroTransactionAuthorizationResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____steamMicroTransactionAuthorizationResponse;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set__steamMicroTransactionAuthorizationResponse(::Steamworks::Callback_1<::Steamworks::MicroTxnAuthorizationResponse_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____steamMicroTransactionAuthorizationResponse = value;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticOutfitSystemConfig>& GorillaNetworking::CosmeticsController::__cordl_internal_get_outfitSystemConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outfitSystemConfig;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticOutfitSystemConfig> const& GorillaNetworking::CosmeticsController::__cordl_internal_get_outfitSystemConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outfitSystemConfig;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_outfitSystemConfig(::UnityW<::GlobalNamespace::CosmeticOutfitSystemConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outfitSystemConfig = value;
}
constexpr ::ArrayW<::GorillaNetworking::CosmeticsController_CosmeticSet*>& GorillaNetworking::CosmeticsController::__cordl_internal_get_savedOutfits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedOutfits;
}
constexpr ::ArrayW<::GorillaNetworking::CosmeticsController_CosmeticSet*> const& GorillaNetworking::CosmeticsController::__cordl_internal_get_savedOutfits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedOutfits;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_savedOutfits(::ArrayW<::GorillaNetworking::CosmeticsController_CosmeticSet*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___savedOutfits = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GorillaNetworking::CosmeticsController::__cordl_internal_get_savedColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedColors;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GorillaNetworking::CosmeticsController::__cordl_internal_get_savedColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedColors;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_savedColors(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___savedColors = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController::__cordl_internal_get_outfitStringMothership()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outfitStringMothership;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController::__cordl_internal_get_outfitStringMothership() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outfitStringMothership;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_outfitStringMothership(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outfitStringMothership = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController::__cordl_internal_get_outfitStringPendingSave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outfitStringPendingSave;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController::__cordl_internal_get_outfitStringPendingSave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outfitStringPendingSave;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_outfitStringPendingSave(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outfitStringPendingSave = value;
}
constexpr ::System::Action*& GorillaNetworking::CosmeticsController::__cordl_internal_get_OnOutfitsUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOutfitsUpdated;
}
constexpr ::System::Action* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_OnOutfitsUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOutfitsUpdated;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_OnOutfitsUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnOutfitsUpdated = value;
}
constexpr ::System::Text::StringBuilder*& GorillaNetworking::CosmeticsController::__cordl_internal_get_sb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sb;
}
constexpr ::System::Text::StringBuilder* const& GorillaNetworking::CosmeticsController::__cordl_internal_get_sb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sb;
}
constexpr void GorillaNetworking::CosmeticsController::__cordl_internal_set_sb(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sb = value;
}
inline void GorillaNetworking::CosmeticsController::setStaticF_instance(::UnityW<::GorillaNetworking::CosmeticsController>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaNetworking::CosmeticsController>, "instance", ::GorillaNetworking::CosmeticsController*>(std::forward<::UnityW<::GorillaNetworking::CosmeticsController>>(value));
}
inline ::UnityW<::GorillaNetworking::CosmeticsController> GorillaNetworking::CosmeticsController::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaNetworking::CosmeticsController>, "instance", ::GorillaNetworking::CosmeticsController*>();
}
inline void GorillaNetworking::CosmeticsController::setStaticF__hasInstance_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<hasInstance>k__BackingField", ::GorillaNetworking::CosmeticsController*>(std::forward<bool>(value));
}
inline bool GorillaNetworking::CosmeticsController::getStaticF__hasInstance_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<hasInstance>k__BackingField", ::GorillaNetworking::CosmeticsController*>();
}
inline void GorillaNetworking::CosmeticsController::setStaticF_PushTerminalMessage(::System::Action_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::StringW>*, "PushTerminalMessage", ::GorillaNetworking::CosmeticsController*>(std::forward<::System::Action_2<::StringW,::StringW>*>(value));
}
inline ::System::Action_2<::StringW,::StringW>* GorillaNetworking::CosmeticsController::getStaticF_PushTerminalMessage()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::StringW>*, "PushTerminalMessage", ::GorillaNetworking::CosmeticsController*>();
}
inline void GorillaNetworking::CosmeticsController::setStaticF_scratchDisplayList(::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*, "scratchDisplayList", ::GorillaNetworking::CosmeticsController*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>* GorillaNetworking::CosmeticsController::getStaticF_scratchDisplayList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*, "scratchDisplayList", ::GorillaNetworking::CosmeticsController*>();
}
inline void GorillaNetworking::CosmeticsController::setStaticF_cycleStatesArray(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "cycleStatesArray", ::GorillaNetworking::CosmeticsController*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> GorillaNetworking::CosmeticsController::getStaticF_cycleStatesArray()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "cycleStatesArray", ::GorillaNetworking::CosmeticsController*>();
}
inline void GorillaNetworking::CosmeticsController::setStaticF_scratchCanonicalCollectables(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*, "scratchCanonicalCollectables", ::GorillaNetworking::CosmeticsController*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* GorillaNetworking::CosmeticsController::getStaticF_scratchCanonicalCollectables()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*, "scratchCanonicalCollectables", ::GorillaNetworking::CosmeticsController*>();
}
inline void GorillaNetworking::CosmeticsController::setStaticF_scratchCanonicalIndexList(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*, "scratchCanonicalIndexList", ::GorillaNetworking::CosmeticsController*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* GorillaNetworking::CosmeticsController::getStaticF_scratchCanonicalIndexList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*, "scratchCanonicalIndexList", ::GorillaNetworking::CosmeticsController*>();
}
inline void GorillaNetworking::CosmeticsController::setStaticF__g_default_outAppliedSlotsList_for_applyCosmeticItemToSet(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*, "_g_default_outAppliedSlotsList_for_applyCosmeticItemToSet", ::GorillaNetworking::CosmeticsController*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>* GorillaNetworking::CosmeticsController::getStaticF__g_default_outAppliedSlotsList_for_applyCosmeticItemToSet()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*, "_g_default_outAppliedSlotsList_for_applyCosmeticItemToSet", ::GorillaNetworking::CosmeticsController*>();
}
inline void GorillaNetworking::CosmeticsController::setStaticF_outfitDataTemp(::GorillaNetworking::CosmeticsController_OutfitData*  value)  {
::cordl_internals::setStaticField<::GorillaNetworking::CosmeticsController_OutfitData*, "outfitDataTemp", ::GorillaNetworking::CosmeticsController*>(std::forward<::GorillaNetworking::CosmeticsController_OutfitData*>(value));
}
inline ::GorillaNetworking::CosmeticsController_OutfitData* GorillaNetworking::CosmeticsController::getStaticF_outfitDataTemp()  {
return ::cordl_internals::getStaticField<::GorillaNetworking::CosmeticsController_OutfitData*, "outfitDataTemp", ::GorillaNetworking::CosmeticsController*>();
}
inline void GorillaNetworking::CosmeticsController::setStaticF_saveOutfitInProgress(bool  value)  {
::cordl_internals::setStaticField<bool, "saveOutfitInProgress", ::GorillaNetworking::CosmeticsController*>(std::forward<bool>(value));
}
inline bool GorillaNetworking::CosmeticsController::getStaticF_saveOutfitInProgress()  {
return ::cordl_internals::getStaticField<bool, "saveOutfitInProgress", ::GorillaNetworking::CosmeticsController*>();
}
inline void GorillaNetworking::CosmeticsController::setStaticF_loadOutfitsInProgress(bool  value)  {
::cordl_internals::setStaticField<bool, "loadOutfitsInProgress", ::GorillaNetworking::CosmeticsController*>(std::forward<bool>(value));
}
inline bool GorillaNetworking::CosmeticsController::getStaticF_loadOutfitsInProgress()  {
return ::cordl_internals::getStaticField<bool, "loadOutfitsInProgress", ::GorillaNetworking::CosmeticsController*>();
}
inline void GorillaNetworking::CosmeticsController::setStaticF_loadedSavedOutfits(bool  value)  {
::cordl_internals::setStaticField<bool, "loadedSavedOutfits", ::GorillaNetworking::CosmeticsController*>(std::forward<bool>(value));
}
inline bool GorillaNetworking::CosmeticsController::getStaticF_loadedSavedOutfits()  {
return ::cordl_internals::getStaticField<bool, "loadedSavedOutfits", ::GorillaNetworking::CosmeticsController*>();
}
inline void GorillaNetworking::CosmeticsController::setStaticF_selectedOutfit(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "selectedOutfit", ::GorillaNetworking::CosmeticsController*>(std::forward<int32_t>(value));
}
inline int32_t GorillaNetworking::CosmeticsController::getStaticF_selectedOutfit()  {
return ::cordl_internals::getStaticField<int32_t, "selectedOutfit", ::GorillaNetworking::CosmeticsController*>();
}
inline void GorillaNetworking::CosmeticsController::setStaticF_maxOutfits(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "maxOutfits", ::GorillaNetworking::CosmeticsController*>(std::forward<int32_t>(value));
}
inline int32_t GorillaNetworking::CosmeticsController::getStaticF_maxOutfits()  {
return ::cordl_internals::getStaticField<int32_t, "maxOutfits", ::GorillaNetworking::CosmeticsController*>();
}
inline void GorillaNetworking::CosmeticsController::setStaticF_defaultColor(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "defaultColor", ::GorillaNetworking::CosmeticsController*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GorillaNetworking::CosmeticsController::getStaticF_defaultColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "defaultColor", ::GorillaNetworking::CosmeticsController*>();
}
inline void GorillaNetworking::CosmeticsController::setStaticF_OnPlayerColorSet(::System::Action_3<float_t,float_t,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<float_t,float_t,float_t>*, "OnPlayerColorSet", ::GorillaNetworking::CosmeticsController*>(std::forward<::System::Action_3<float_t,float_t,float_t>*>(value));
}
inline ::System::Action_3<float_t,float_t,float_t>* GorillaNetworking::CosmeticsController::getStaticF_OnPlayerColorSet()  {
return ::cordl_internals::getStaticField<::System::Action_3<float_t,float_t,float_t>*, "OnPlayerColorSet", ::GorillaNetworking::CosmeticsController*>();
}
inline ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticInfoV2> GorillaNetworking::CosmeticsController::get_v2_allCosmetics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_v2_allCosmetics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GorillaTag::CosmeticSystem::CosmeticInfoV2>>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::set_v2_allCosmetics(::ArrayW<::GorillaTag::CosmeticSystem::CosmeticInfoV2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"set_v2_allCosmetics", {}, {::i2c::type_of<::ArrayW<::GorillaTag::CosmeticSystem::CosmeticInfoV2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaNetworking::CosmeticsController::get_v2_allCosmeticsInfoAssetRef_isLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_v2_allCosmeticsInfoAssetRef_isLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::set_v2_allCosmeticsInfoAssetRef_isLoaded(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"set_v2_allCosmeticsInfoAssetRef_isLoaded", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaNetworking::CosmeticsController::get_v2_isCosmeticPlayFabCatalogDataLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_v2_isCosmeticPlayFabCatalogDataLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::set_v2_isCosmeticPlayFabCatalogDataLoaded(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"set_v2_isCosmeticPlayFabCatalogDataLoaded", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::CosmeticsController::V2Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"V2Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::CosmeticsController::V2_allCosmeticsInfoAssetRefSO_LoadCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"V2_allCosmeticsInfoAssetRefSO_LoadCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::V2_allCosmeticsInfoAssetRef_LoadSucceeded(::GorillaTag::CosmeticSystem::AllCosmeticsArraySO*  allCosmeticsSO)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"V2_allCosmeticsInfoAssetRef_LoadSucceeded", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allCosmeticsSO);
}
inline bool GorillaNetworking::CosmeticsController::TryGetCosmeticInfoV2(::StringW  playFabId, ::by_ref<::GorillaTag::CosmeticSystem::CosmeticInfoV2>  cosmeticInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"TryGetCosmeticInfoV2", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GorillaTag::CosmeticSystem::CosmeticInfoV2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playFabId, cosmeticInfo);
}
inline void GorillaNetworking::CosmeticsController::V2_ConformCosmeticItemV1DisplayName(::by_ref<::GlobalNamespace::CosmeticsController_CosmeticItem>  cosmetic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"V2_ConformCosmeticItemV1DisplayName", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::CosmeticsController_CosmeticItem>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cosmetic);
}
inline void GorillaNetworking::CosmeticsController::InitializeCosmeticStands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"InitializeCosmeticStands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController::get_hasInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_hasInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::set_hasInstance(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"set_hasInstance", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW GorillaNetworking::CosmeticsController::get_PurchaseLocation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_PurchaseLocation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::set_PurchaseLocation(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"set_PurchaseLocation", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GorillaNetworking::CosmeticsController::ConsumePurchaseLocation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ConsumePurchaseLocation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* GorillaNetworking::CosmeticsController::get_allCosmetics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_allCosmetics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::set_allCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"set_allCosmetics", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaNetworking::CosmeticsController::get_allCosmeticsDict_isInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_allCosmeticsDict_isInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::set_allCosmeticsDict_isInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"set_allCosmeticsDict_isInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CosmeticsController_CosmeticItem>* GorillaNetworking::CosmeticsController::get_allCosmeticsDict()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_allCosmeticsDict", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CosmeticsController_CosmeticItem>*>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController::get_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::set_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"set_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GorillaNetworking::CosmeticsController::get_allCosmeticsItemIDsfromDisplayNamesDict()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_allCosmeticsItemIDsfromDisplayNamesDict", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets GorillaNetworking::CosmeticsController::get_defaultClipOffsets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_defaultClipOffsets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController::get_isHidingCosmeticsFromRemotePlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_isHidingCosmeticsFromRemotePlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::set_isHidingCosmeticsFromRemotePlayers(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"set_isHidingCosmeticsFromRemotePlayers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::CosmeticsController::AddWardrobeInstance(::GlobalNamespace::WardrobeInstance*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"AddWardrobeInstance", {}, {::i2c::type_of<::GlobalNamespace::WardrobeInstance*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline void GorillaNetworking::CosmeticsController::RemoveWardrobeInstance(::GlobalNamespace::WardrobeInstance*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"RemoveWardrobeInstance", {}, {::i2c::type_of<::GlobalNamespace::WardrobeInstance*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline bool GorillaNetworking::CosmeticsController::IsOwnedByPlayFabID(::StringW  playFabID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"IsOwnedByPlayFabID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playFabID);
}
inline int32_t GorillaNetworking::CosmeticsController::GetOwnedCollectableCount(::StringW  parentPlayFabID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetOwnedCollectableCount", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, parentPlayFabID);
}
inline int32_t GorillaNetworking::CosmeticsController::GetRemainingCollectableSlots(::StringW  parentPlayFabID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetRemainingCollectableSlots", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, parentPlayFabID);
}
inline bool GorillaNetworking::CosmeticsController::CanPurchaseCollectable(::StringW  collectablePlayFabID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CanPurchaseCollectable", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, collectablePlayFabID);
}
inline void GorillaNetworking::CosmeticsController::BuildCanonicalCollectableOrder(::StringW  parentPlayFabID, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"BuildCanonicalCollectableOrder", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentPlayFabID, result);
}
inline int32_t GorillaNetworking::CosmeticsController::GetCanonicalCollectableIndex(::StringW  parentPlayFabID, ::StringW  itemName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCanonicalCollectableIndex", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, parentPlayFabID, itemName);
}
inline void GorillaNetworking::CosmeticsController::PopulateCollectionDisplayOnRoot(::UnityEngine::GameObject*  rootObj, ::GlobalNamespace::CosmeticsController_CosmeticItem  parentItem, ::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PopulateCollectionDisplayOnRoot", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rootObj, parentItem, rig);
}
inline int32_t GorillaNetworking::CosmeticsController::get_CurrencyBalance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_CurrencyBalance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> GorillaNetworking::CosmeticsController::get_EarlyAccessSupporterPackCosmeticSO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_EarlyAccessSupporterPackCosmeticSO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController::CompareCategoryToSavedCosmeticSlots(::GlobalNamespace::CosmeticsController_CosmeticCategory  category, ::GlobalNamespace::CosmeticsController_CosmeticSlots  slot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CompareCategoryToSavedCosmeticSlots", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticCategory>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, category, slot);
}
inline ::GlobalNamespace::CosmeticsController_CosmeticSlots GorillaNetworking::CosmeticsController::CategoryToNonTransferrableSlot(::GlobalNamespace::CosmeticsController_CosmeticCategory  category)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CategoryToNonTransferrableSlot", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticCategory>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticsController_CosmeticSlots>(nullptr, ___internal_method, category);
}
inline ::GlobalNamespace::CosmeticsController_CosmeticSlots GorillaNetworking::CosmeticsController::DropPositionToCosmeticSlot(::GlobalNamespace::BodyDockPositions_DropPositions  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"DropPositionToCosmeticSlot", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticsController_CosmeticSlots>(this, ___internal_method, pos);
}
inline ::GlobalNamespace::BodyDockPositions_DropPositions GorillaNetworking::CosmeticsController::CosmeticSlotToDropPosition(::GlobalNamespace::CosmeticsController_CosmeticSlots  slot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CosmeticSlotToDropPosition", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BodyDockPositions_DropPositions>(nullptr, ___internal_method, slot);
}
inline void GorillaNetworking::CosmeticsController::AddItemCheckout(::CosmeticRoom::ItemCheckout*  newItemCheckout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"AddItemCheckout", {}, {::i2c::type_of<::CosmeticRoom::ItemCheckout*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newItemCheckout);
}
inline void GorillaNetworking::CosmeticsController::RemoveItemCheckout(::CosmeticRoom::ItemCheckout*  checkoutToRemove)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"RemoveItemCheckout", {}, {::i2c::type_of<::CosmeticRoom::ItemCheckout*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, checkoutToRemove);
}
inline void GorillaNetworking::CosmeticsController::AddFittingRoom(::CosmeticRoom::FittingRoom*  newFittingRoom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"AddFittingRoom", {}, {::i2c::type_of<::CosmeticRoom::FittingRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newFittingRoom);
}
inline void GorillaNetworking::CosmeticsController::RemoveFittingRoom(::CosmeticRoom::FittingRoom*  fittingRoomToRemove)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"RemoveFittingRoom", {}, {::i2c::type_of<::CosmeticRoom::FittingRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fittingRoomToRemove);
}
inline void GorillaNetworking::CosmeticsController::SaveItemPreference(::GlobalNamespace::CosmeticsController_CosmeticSlots  slot, int32_t  slotIdx, ::GlobalNamespace::CosmeticsController_CosmeticItem  newItem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"SaveItemPreference", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slot, slotIdx, newItem);
}
inline void GorillaNetworking::CosmeticsController::SaveCurrentItemPreferences()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"SaveCurrentItemPreferences", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::ApplyCosmeticToSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  set, ::GlobalNamespace::CosmeticsController_CosmeticItem  newItem, int32_t  slotIdx, ::GlobalNamespace::CosmeticsController_CosmeticSlots  slot, bool  applyToPlayerPrefs, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*  appliedSlots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ApplyCosmeticToSet", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, set, newItem, slotIdx, slot, applyToPlayerPrefs, appliedSlots);
}
inline void GorillaNetworking::CosmeticsController::ClearTryOnCollectable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ClearTryOnCollectable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::PrivApplyCosmeticItemToSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  set, ::GlobalNamespace::CosmeticsController_CosmeticItem  newItem, bool  isLeftHand, bool  applyToPlayerPrefs, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*  appliedSlots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PrivApplyCosmeticItemToSet", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, set, newItem, isLeftHand, applyToPlayerPrefs, appliedSlots);
}
inline void GorillaNetworking::CosmeticsController::ApplyCosmeticItemToSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  set, ::GlobalNamespace::CosmeticsController_CosmeticItem  newItem, bool  isLeftHand, bool  applyToPlayerPrefs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ApplyCosmeticItemToSet", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, set, newItem, isLeftHand, applyToPlayerPrefs);
}
inline void GorillaNetworking::CosmeticsController::ApplyCosmeticItemToSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  set, ::GlobalNamespace::CosmeticsController_CosmeticItem  newItem, bool  isLeftHand, bool  applyToPlayerPrefs, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*  outAppliedSlotsList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ApplyCosmeticItemToSet", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticSlots>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, set, newItem, isLeftHand, applyToPlayerPrefs, outAppliedSlotsList);
}
inline void GorillaNetworking::CosmeticsController::RemoveCosmeticItemFromSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  set, ::StringW  itemName, bool  applyToPlayerPrefs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"RemoveCosmeticItemFromSet", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, set, itemName, applyToPlayerPrefs);
}
inline void GorillaNetworking::CosmeticsController::RepressButton(::GlobalNamespace::FittingRoomButton*  pressedButton, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"RepressButton", {}, {::i2c::type_of<::GlobalNamespace::FittingRoomButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pressedButton, isLeftHand);
}
inline void GorillaNetworking::CosmeticsController::PressFittingRoomButton(::GlobalNamespace::FittingRoomButton*  pressedFittingRoomButton, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressFittingRoomButton", {}, {::i2c::type_of<::GlobalNamespace::FittingRoomButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pressedFittingRoomButton, isLeftHand);
}
inline ::GlobalNamespace::CosmeticsController_EWearingCosmeticSet GorillaNetworking::CosmeticsController::CheckIfCosmeticSetMatchesItemSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  set, ::StringW  itemName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CheckIfCosmeticSetMatchesItemSet", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticsController_EWearingCosmeticSet>(this, ___internal_method, set, itemName);
}
inline void GorillaNetworking::CosmeticsController::PressCosmeticStandButton(::GlobalNamespace::CosmeticStand*  pressedStand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressCosmeticStandButton", {}, {::i2c::type_of<::GlobalNamespace::CosmeticStand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pressedStand);
}
inline void GorillaNetworking::CosmeticsController::PressWardrobeItemButton(::GlobalNamespace::CosmeticsController_CosmeticItem  cosmeticItem, bool  isLeftHand, bool  isTempCosm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressWardrobeItemButton", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cosmeticItem, isLeftHand, isTempCosm);
}
inline void GorillaNetworking::CosmeticsController::PressWardrobeItemButton(::GlobalNamespace::CosmeticsController_CosmeticItem  item, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressWardrobeItemButton", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, isLeftHand);
}
inline void GorillaNetworking::CosmeticsController::PressTemporaryWardrobeItemButton(::GlobalNamespace::CosmeticsController_CosmeticItem  item, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressTemporaryWardrobeItemButton", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, isLeftHand);
}
inline void GorillaNetworking::CosmeticsController::PressWardrobeFunctionButton(::StringW  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressWardrobeFunctionButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, function);
}
inline void GorillaNetworking::CosmeticsController::ClearCheckout(bool  sendEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ClearCheckout", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sendEvent);
}
inline bool GorillaNetworking::CosmeticsController::RemoveItemFromCart(::GlobalNamespace::CosmeticsController_CosmeticItem  cosmeticItem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"RemoveItemFromCart", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cosmeticItem);
}
inline void GorillaNetworking::CosmeticsController::ClearCheckoutAndCart(bool  sendEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ClearCheckoutAndCart", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sendEvent);
}
inline void GorillaNetworking::CosmeticsController::PressCheckoutCartButton(::GlobalNamespace::CheckoutCartButton*  pressedCheckoutCartButton, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressCheckoutCartButton", {}, {::i2c::type_of<::GlobalNamespace::CheckoutCartButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pressedCheckoutCartButton, isLeftHand);
}
inline void GorillaNetworking::CosmeticsController::RefreshItemToBuyPreview()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"RefreshItemToBuyPreview", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::PressPurchaseItemButton(::GlobalNamespace::PurchaseItemButton*  pressedPurchaseItemButton, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressPurchaseItemButton", {}, {::i2c::type_of<::GlobalNamespace::PurchaseItemButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pressedPurchaseItemButton, isLeftHand);
}
inline void GorillaNetworking::CosmeticsController::PurchaseBundle(::GorillaNetworking::Store::StoreBundle*  bundleToPurchase, ::Cosmetics::ICreatorCodeProvider*  ccp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PurchaseBundle", {}, {::i2c::type_of<::GorillaNetworking::Store::StoreBundle*>(), ::i2c::type_of<::Cosmetics::ICreatorCodeProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bundleToPurchase, ccp);
}
inline void GorillaNetworking::CosmeticsController::OnCreatorCodeFailure()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"OnCreatorCodeFailure", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::PressEarlyAccessButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressEarlyAccessButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::ProcessPurchaseItemState(::StringW  buttonSide, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ProcessPurchaseItemState", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonSide, isLeftHand);
}
inline void GorillaNetworking::CosmeticsController::FormattedPurchaseText(::StringW  finalLineVar, ::StringW  leftPurchaseButtonText, ::StringW  rightPurchaseButtonText, bool  leftButtonOn, bool  rightButtonOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"FormattedPurchaseText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finalLineVar, leftPurchaseButtonText, rightPurchaseButtonText, leftButtonOn, rightButtonOn);
}
inline void GorillaNetworking::CosmeticsController::PurchaseItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PurchaseItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::UnlockItem(::StringW  itemIdToUnlock, bool  relock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UnlockItem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemIdToUnlock, relock);
}
inline void GorillaNetworking::CosmeticsController::ModifyUnlockList(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  list, int32_t  index, bool  relock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ModifyUnlockList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list, index, relock);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::CosmeticsController::CheckIfMyCosmeticsUpdated(::StringW  itemToBuyID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CheckIfMyCosmeticsUpdated", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, itemToBuyID);
}
inline void GorillaNetworking::CosmeticsController::UpdateWardrobeModelsAndButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UpdateWardrobeModelsAndButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaNetworking::CosmeticsController::GetCategorySize(::GlobalNamespace::CosmeticsController_CosmeticCategory  category)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCategorySize", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticCategory>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, category);
}
inline ::GlobalNamespace::CosmeticsController_CosmeticItem GorillaNetworking::CosmeticsController::GetCosmetic(int32_t  category, int32_t  cosmeticIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCosmetic", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticsController_CosmeticItem>(this, ___internal_method, category, cosmeticIndex);
}
inline ::GlobalNamespace::CosmeticsController_CosmeticItem GorillaNetworking::CosmeticsController::GetCosmetic(::GlobalNamespace::CosmeticsController_CosmeticCategory  category, int32_t  cosmeticIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCosmetic", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticCategory>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticsController_CosmeticItem>(this, ___internal_method, category, cosmeticIndex);
}
inline int32_t GorillaNetworking::CosmeticsController::GetIndexForCategory(::GlobalNamespace::CosmeticsController_CosmeticCategory  category)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetIndexForCategory", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticCategory>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, category);
}
inline bool GorillaNetworking::CosmeticsController::IsCosmeticEquipped(::GlobalNamespace::CosmeticsController_CosmeticItem  cosmetic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"IsCosmeticEquipped", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cosmetic);
}
inline bool GorillaNetworking::CosmeticsController::IsCosmeticEquipped(::GlobalNamespace::CosmeticsController_CosmeticItem  cosmetic, bool  tempSet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"IsCosmeticEquipped", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cosmetic, tempSet);
}
inline bool GorillaNetworking::CosmeticsController::IsTemporaryCosmeticEquipped(::GlobalNamespace::CosmeticsController_CosmeticItem  cosmetic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"IsTemporaryCosmeticEquipped", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cosmetic);
}
inline ::GlobalNamespace::CosmeticsController_CosmeticItem GorillaNetworking::CosmeticsController::GetSlotItem(::GlobalNamespace::CosmeticsController_CosmeticSlots  slot, bool  checkOpposite, bool  tempSet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetSlotItem", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticsController_CosmeticItem>(this, ___internal_method, slot, checkOpposite, tempSet);
}
inline ::ArrayW<::StringW> GorillaNetworking::CosmeticsController::GetCurrentlyWornCosmetics(bool  tempSet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCurrentlyWornCosmetics", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, tempSet);
}
inline ::ArrayW<bool> GorillaNetworking::CosmeticsController::GetCurrentRightEquippedSided(bool  tempSet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCurrentRightEquippedSided", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(this, ___internal_method, tempSet);
}
inline void GorillaNetworking::CosmeticsController::UpdateShoppingCart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UpdateShoppingCart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::UpdateWornCosmetics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UpdateWornCosmetics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::UpdateWornCosmetics(bool  sync)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UpdateWornCosmetics", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sync);
}
inline void GorillaNetworking::CosmeticsController::UpdateWornCosmetics(bool  sync, bool  playfx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UpdateWornCosmetics", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sync, playfx);
}
inline ::GlobalNamespace::CosmeticsController_CosmeticItem GorillaNetworking::CosmeticsController::GetItemFromDict(::StringW  itemID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetItemFromDict", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticsController_CosmeticItem>(this, ___internal_method, itemID);
}
inline ::StringW GorillaNetworking::CosmeticsController::GetItemNameFromDisplayName(::StringW  displayName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetItemNameFromDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, displayName);
}
inline ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> GorillaNetworking::CosmeticsController::GetCosmeticSOFromDisplayName(::StringW  displayName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCosmeticSOFromDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>(this, ___internal_method, displayName);
}
inline ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets GorillaNetworking::CosmeticsController::GetClipOffsetsFromDisplayName(::StringW  displayName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetClipOffsetsFromDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets>(this, ___internal_method, displayName);
}
inline bool GorillaNetworking::CosmeticsController::AnyMatch(::GorillaNetworking::CosmeticsController_CosmeticSet*  set, ::GlobalNamespace::CosmeticsController_CosmeticItem  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"AnyMatch", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, set, item);
}
inline void GorillaNetworking::CosmeticsController::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::GetLastDailyLogin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetLastDailyLogin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::CosmeticsController::CheckCanGetDaily()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CheckCanGetDaily", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::CosmeticsController::GetMyDaily()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetMyDaily", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::GetCosmeticsPlayFabCatalogData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCosmeticsPlayFabCatalogData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController::TryGetBundleMapping(::StringW  idOrSku, ::by_ref<::GlobalNamespace::BundleData>  bundleMapping)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"TryGetBundleMapping", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BundleData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, idOrSku, bundleMapping);
}
inline void GorillaNetworking::CosmeticsController::ReconcileBundleRewardsIfNeeded(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  inventory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ReconcileBundleRewardsIfNeeded", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inventory);
}
inline void GorillaNetworking::CosmeticsController::GetCosmeticsPlayFabCatalogDataInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCosmeticsPlayFabCatalogDataInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::CompleteGetCosmeticsPlayFabCatalogData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CompleteGetCosmeticsPlayFabCatalogData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::SteamPurchase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"SteamPurchase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::StartPurchaseRequest* GorillaNetworking::CosmeticsController::GetStartPurchaseRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetStartPurchaseRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::ClientModels::StartPurchaseRequest*>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::ProcessStartPurchaseResponse(::PlayFab::ClientModels::StartPurchaseResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ProcessStartPurchaseResponse", {}, {::i2c::type_of<::PlayFab::ClientModels::StartPurchaseResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::PlayFab::ClientModels::PayForPurchaseRequest* GorillaNetworking::CosmeticsController::GetPayForPurchaseRequest(::StringW  orderId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetPayForPurchaseRequest", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::ClientModels::PayForPurchaseRequest*>(nullptr, ___internal_method, orderId);
}
inline void GorillaNetworking::CosmeticsController::ProcessPayForPurchaseResult(::PlayFab::ClientModels::PayForPurchaseResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ProcessPayForPurchaseResult", {}, {::i2c::type_of<::PlayFab::ClientModels::PayForPurchaseResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result);
}
inline void GorillaNetworking::CosmeticsController::ProcessSteamCallback(::Steamworks::MicroTxnAuthorizationResponse_t  callBackResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ProcessSteamCallback", {}, {::i2c::type_of<::Steamworks::MicroTxnAuthorizationResponse_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callBackResponse);
}
inline ::PlayFab::ClientModels::ConfirmPurchaseRequest* GorillaNetworking::CosmeticsController::GetConfirmBundlePurchaseRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetConfirmBundlePurchaseRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::ClientModels::ConfirmPurchaseRequest*>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ConfirmPurchaseRequest* GorillaNetworking::CosmeticsController::GetConfirmATMPurchaseRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetConfirmATMPurchaseRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::ClientModels::ConfirmPurchaseRequest*>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::ProcessConfirmPurchaseSuccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ProcessConfirmPurchaseSuccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::ProcessConfirmPurchaseError(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ProcessConfirmPurchaseError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GorillaNetworking::CosmeticsController::ProcessSteamPurchaseError(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ProcessSteamPurchaseError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GorillaNetworking::CosmeticsController::UpdateCurrencyBoards()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UpdateCurrencyBoards", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::AddCurrencyBoard(::CosmeticRoom::CurrencyBoard*  newCurrencyBoard)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"AddCurrencyBoard", {}, {::i2c::type_of<::CosmeticRoom::CurrencyBoard*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newCurrencyBoard);
}
inline void GorillaNetworking::CosmeticsController::RemoveCurrencyBoard(::CosmeticRoom::CurrencyBoard*  currencyBoardToRemove)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"RemoveCurrencyBoard", {}, {::i2c::type_of<::CosmeticRoom::CurrencyBoard*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currencyBoardToRemove);
}
inline void GorillaNetworking::CosmeticsController::GetCurrencyBalance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetCurrencyBalance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::CosmeticsController::GetItemDisplayName(::GlobalNamespace::CosmeticsController_CosmeticItem  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetItemDisplayName", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, item);
}
inline void GorillaNetworking::CosmeticsController::UpdateMyCosmetics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UpdateMyCosmetics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::AlreadyOwnAllBundleButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"AlreadyOwnAllBundleButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::CheckCosmeticsSharedGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CheckCosmeticsSharedGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::CosmeticsController::WaitForNextCosmeticsAttempt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"WaitForNextCosmeticsAttempt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::ConfirmIndividualCosmeticsSharedGroup(::PlayFab::ClientModels::GetUserInventoryResult*  inventory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ConfirmIndividualCosmeticsSharedGroup", {}, {::i2c::type_of<::PlayFab::ClientModels::GetUserInventoryResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inventory);
}
inline void GorillaNetworking::CosmeticsController::ReauthOrBan(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ReauthOrBan", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GorillaNetworking::CosmeticsController::ProcessExternalUnlock(::StringW  itemID, bool  autoEquip, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ProcessExternalUnlock", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemID, autoEquip, isLeftHand);
}
inline void GorillaNetworking::CosmeticsController::AddTempUnlockToWardrobe(::StringW  cosmeticID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"AddTempUnlockToWardrobe", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cosmeticID);
}
inline void GorillaNetworking::CosmeticsController::RemoveTempUnlockFromWardrobe(::StringW  cosmeticID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"RemoveTempUnlockFromWardrobe", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cosmeticID);
}
inline bool GorillaNetworking::CosmeticsController::BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::SetHideCosmeticsFromRemotePlayers(bool  hideCosmetics)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"SetHideCosmeticsFromRemotePlayers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hideCosmetics);
}
inline bool GorillaNetworking::CosmeticsController::ValidatePackedItems(::ArrayW<int32_t>  packed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ValidatePackedItems", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, packed);
}
inline ::ArrayW<int32_t> GorillaNetworking::CosmeticsController::PackCollectableItems(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  items)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PackCollectableItems", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, items);
}
inline ::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem> GorillaNetworking::CosmeticsController::UnpackCollectableItems(::ArrayW<int32_t>  packed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UnpackCollectableItems", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem>>(this, ___internal_method, packed);
}
inline void GorillaNetworking::CosmeticsController::SetValidatedCreatorCode(::StringW  memberCode, ::StringW  groupCode, ::StringW  terminalId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"SetValidatedCreatorCode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberCode, groupCode, terminalId);
}
inline int32_t GorillaNetworking::CosmeticsController::get_SelectedOutfit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"get_SelectedOutfit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController::CanScrollOutfits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"CanScrollOutfits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::PressWardrobeScrollOutfit(bool  forward)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"PressWardrobeScrollOutfit", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forward);
}
inline void GorillaNetworking::CosmeticsController::LoadSavedOutfit(int32_t  newOutfitIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"LoadSavedOutfit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOutfitIndex);
}
inline void GorillaNetworking::CosmeticsController::ApplyNewItem(::GorillaNetworking::CosmeticsController_CosmeticSet*  outfit, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ApplyNewItem", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outfit, i);
}
inline void GorillaNetworking::CosmeticsController::LoadSavedOutfits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"LoadSavedOutfits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::GetSavedOutfitsSuccess(::GlobalNamespace::MothershipUserData*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetSavedOutfitsSuccess", {}, {::i2c::type_of<::GlobalNamespace::MothershipUserData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GorillaNetworking::CosmeticsController::GetSavedOutfitsFail(::GlobalNamespace::MothershipError*  error, int32_t  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetSavedOutfitsFail", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, status);
}
inline void GorillaNetworking::CosmeticsController::GetSavedOutfitsComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"GetSavedOutfitsComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::UpdateMonkeColor(::UnityEngine::Vector3  col, bool  saveToPrefs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"UpdateMonkeColor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col, saveToPrefs);
}
inline void GorillaNetworking::CosmeticsController::SaveOutfitsToMothership()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"SaveOutfitsToMothership", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::SaveOutfitsToMothershipSuccess(::GlobalNamespace::SetUserDataResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"SaveOutfitsToMothershipSuccess", {}, {::i2c::type_of<::GlobalNamespace::SetUserDataResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GorillaNetworking::CosmeticsController::SaveOutfitsToMothershipFail(::GlobalNamespace::MothershipError*  error, int32_t  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"SaveOutfitsToMothershipFail", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, status);
}
inline ::StringW GorillaNetworking::CosmeticsController::OutfitsToString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"OutfitsToString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::ClearOutfits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"ClearOutfits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::StringToOutfits(::StringW  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"StringToOutfits", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GorillaNetworking::CosmeticsController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController::_Start_b__170_0(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<Start>b__170_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline bool GorillaNetworking::CosmeticsController::_ProcessPurchaseItemState_b__210_0(::GlobalNamespace::CosmeticsController_CosmeticItem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<ProcessPurchaseItemState>b__210_0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline void GorillaNetworking::CosmeticsController::_PurchaseItem_b__212_0(::PlayFab::ClientModels::PurchaseItemResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<PurchaseItem>b__212_0", {}, {::i2c::type_of<::PlayFab::ClientModels::PurchaseItemResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::CosmeticsController::_PurchaseItem_b__212_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<PurchaseItem>b__212_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GorillaNetworking::CosmeticsController::_GetLastDailyLogin_b__237_0(::PlayFab::ClientModels::GetUserDataResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<GetLastDailyLogin>b__237_0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetUserDataResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::CosmeticsController::_GetLastDailyLogin_b__237_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<GetLastDailyLogin>b__237_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GorillaNetworking::CosmeticsController::_GetMyDaily_b__239_0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<GetMyDaily>b__239_0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::CosmeticsController::_ReconcileBundleRewardsIfNeeded_b__242_0(::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<ReconcileBundleRewardsIfNeeded>b__242_0", {}, {::i2c::type_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GorillaNetworking::CosmeticsController::_GetCosmeticsPlayFabCatalogDataInternal_b__243_0(::PlayFab::ClientModels::GetUserInventoryResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__243_0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetUserInventoryResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::CosmeticsController::_GetCosmeticsPlayFabCatalogDataInternal_b__243_3(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__243_3", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GorillaNetworking::CosmeticsController::_GetCosmeticsPlayFabCatalogDataInternal_b__243_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__243_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GorillaNetworking::CosmeticsController::_ProcessSteamCallback_b__250_0(::PlayFab::ClientModels::ConfirmPurchaseResult*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<ProcessSteamCallback>b__250_0", {}, {::i2c::type_of<::PlayFab::ClientModels::ConfirmPurchaseResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void GorillaNetworking::CosmeticsController::_ProcessSteamCallback_b__250_1(::PlayFab::ClientModels::ConfirmPurchaseResult*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<ProcessSteamCallback>b__250_1", {}, {::i2c::type_of<::PlayFab::ClientModels::ConfirmPurchaseResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void GorillaNetworking::CosmeticsController::_GetCurrencyBalance_b__259_0(::PlayFab::ClientModels::GetUserInventoryResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController*>(),
                        {"<GetCurrencyBalance>b__259_0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetUserInventoryResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GorillaNetworking::CosmeticsController* GorillaNetworking::CosmeticsController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GorillaNetworking::CosmeticsController::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GorillaNetworking::CosmeticsController::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GorillaNetworking::CosmeticsController::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GorillaNetworking::CosmeticsController::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController::CosmeticsController()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::*)(int32_t)>(&::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c6fde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::*)()>(&::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6fe08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::*)()>(&::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::MoveNext)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c6fe0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::*)()>(&::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6fefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::*)()>(&::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c6ff04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::*)()>(&::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6ff3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::CosmeticsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264* GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController__WaitForNextCosmeticsAttempt_d__264::CosmeticsController__WaitForNextCosmeticsAttempt_d__264()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::*)(int32_t)>(&::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c6f85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::*)()>(&::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6f884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::*)()>(&::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x5c6f888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::*)()>(&::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6fd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::*)()>(&::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c6fda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::*)()>(&::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6fdd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::CosmeticsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::ArrayW<float_t>& GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::__cordl_internal_get__retryWaitTimes_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retryWaitTimes_5__2;
}
constexpr ::ArrayW<float_t> const& GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::__cordl_internal_get__retryWaitTimes_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retryWaitTimes_5__2;
}
constexpr void GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::__cordl_internal_set__retryWaitTimes_5__2(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retryWaitTimes_5__2 = value;
}
constexpr int32_t& GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::__cordl_internal_get__retryCount_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retryCount_5__3;
}
constexpr int32_t const& GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::__cordl_internal_get__retryCount_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retryCount_5__3;
}
constexpr void GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::__cordl_internal_set__retryCount_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retryCount_5__3 = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>>& GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::__cordl_internal_get__newSysAllCosmeticsAsyncOp_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newSysAllCosmeticsAsyncOp_5__4;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>> const& GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::__cordl_internal_get__newSysAllCosmeticsAsyncOp_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newSysAllCosmeticsAsyncOp_5__4;
}
constexpr void GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::__cordl_internal_set__newSysAllCosmeticsAsyncOp_5__4(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____newSysAllCosmeticsAsyncOp_5__4 = value;
}
inline void GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16* GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16::CosmeticsController__V2_allCosmeticsInfoAssetRefSO_LoadCoroutine_d__16()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__GetMyDaily_d__239._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController__GetMyDaily_d__239::*)(int32_t)>(&::GorillaNetworking::CosmeticsController__GetMyDaily_d__239::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c6e398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__GetMyDaily_d__239*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__GetMyDaily_d__239.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController__GetMyDaily_d__239::*)()>(&::GorillaNetworking::CosmeticsController__GetMyDaily_d__239::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6e3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__GetMyDaily_d__239*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__GetMyDaily_d__239.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController__GetMyDaily_d__239::*)()>(&::GorillaNetworking::CosmeticsController__GetMyDaily_d__239::MoveNext)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5c6e3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__GetMyDaily_d__239*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__GetMyDaily_d__239.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::CosmeticsController__GetMyDaily_d__239::*)()>(&::GorillaNetworking::CosmeticsController__GetMyDaily_d__239::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6e59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__GetMyDaily_d__239*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__GetMyDaily_d__239.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController__GetMyDaily_d__239::*)()>(&::GorillaNetworking::CosmeticsController__GetMyDaily_d__239::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c6e5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__GetMyDaily_d__239*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__GetMyDaily_d__239.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::CosmeticsController__GetMyDaily_d__239::*)()>(&::GorillaNetworking::CosmeticsController__GetMyDaily_d__239::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6e5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__GetMyDaily_d__239*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::CosmeticsController__GetMyDaily_d__239::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::CosmeticsController__GetMyDaily_d__239::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::CosmeticsController__GetMyDaily_d__239::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::CosmeticsController__GetMyDaily_d__239::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::CosmeticsController__GetMyDaily_d__239::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::CosmeticsController__GetMyDaily_d__239::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& GorillaNetworking::CosmeticsController__GetMyDaily_d__239::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& GorillaNetworking::CosmeticsController__GetMyDaily_d__239::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::CosmeticsController__GetMyDaily_d__239::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::CosmeticsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaNetworking::CosmeticsController__GetMyDaily_d__239::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__GetMyDaily_d__239*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::CosmeticsController__GetMyDaily_d__239::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__GetMyDaily_d__239*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController__GetMyDaily_d__239::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__GetMyDaily_d__239*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::CosmeticsController__GetMyDaily_d__239::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__GetMyDaily_d__239*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController__GetMyDaily_d__239::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__GetMyDaily_d__239*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::CosmeticsController__GetMyDaily_d__239::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__GetMyDaily_d__239*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::CosmeticsController__GetMyDaily_d__239* GorillaNetworking::CosmeticsController__GetMyDaily_d__239::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController__GetMyDaily_d__239*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::CosmeticsController__GetMyDaily_d__239::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::CosmeticsController__GetMyDaily_d__239::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::CosmeticsController__GetMyDaily_d__239::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::CosmeticsController__GetMyDaily_d__239::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::CosmeticsController__GetMyDaily_d__239::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::CosmeticsController__GetMyDaily_d__239::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController__GetMyDaily_d__239::CosmeticsController__GetMyDaily_d__239()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::*)(int32_t)>(&::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c6debc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::*)()>(&::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6dee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::*)()>(&::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::MoveNext)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x5c6dee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::*)()>(&::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6e350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::*)()>(&::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c6e358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::*)()>(&::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6e390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::CosmeticsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::__cordl_internal_get_itemToBuyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemToBuyID;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::__cordl_internal_get_itemToBuyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemToBuyID;
}
constexpr void GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::__cordl_internal_set_itemToBuyID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemToBuyID = value;
}
constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass215_0*& GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass215_0* const& GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::__cordl_internal_set___8__1(::GorillaNetworking::CosmeticsController___c__DisplayClass215_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215* GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215::CosmeticsController__CheckIfMyCosmeticsUpdated_d__215()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::*)(int32_t)>(&::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c6d950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::*)()>(&::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6d978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::*)()>(&::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::MoveNext)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x5c6d97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::*)()>(&::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6de74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::*)()>(&::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c6de7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::*)()>(&::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6deb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::CosmeticsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238* GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController__CheckCanGetDaily_d__238::CosmeticsController__CheckCanGetDaily_d__238()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass269_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass269_0::*)()>(&::GorillaNetworking::CosmeticsController___c__DisplayClass269_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6d938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass269_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass269_0._RemoveTempUnlockFromWardrobe_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController___c__DisplayClass269_0::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController___c__DisplayClass269_0::_RemoveTempUnlockFromWardrobe_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c6d940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass269_0*>(),
                        {"<RemoveTempUnlockFromWardrobe>b__0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::CosmeticsController___c__DisplayClass269_0::__cordl_internal_get_cosmeticID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticID;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController___c__DisplayClass269_0::__cordl_internal_get_cosmeticID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticID;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass269_0::__cordl_internal_set_cosmeticID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticID = value;
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass269_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass269_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController___c__DisplayClass269_0::_RemoveTempUnlockFromWardrobe_b__0(::GlobalNamespace::CosmeticsController_CosmeticItem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass269_0*>(),
                        {"<RemoveTempUnlockFromWardrobe>b__0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GorillaNetworking::CosmeticsController___c__DisplayClass269_0* GorillaNetworking::CosmeticsController___c__DisplayClass269_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController___c__DisplayClass269_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass269_0::CosmeticsController___c__DisplayClass269_0()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass268_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass268_0::*)()>(&::GorillaNetworking::CosmeticsController___c__DisplayClass268_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6d920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass268_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass268_0._AddTempUnlockToWardrobe_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController___c__DisplayClass268_0::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController___c__DisplayClass268_0::_AddTempUnlockToWardrobe_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c6d928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass268_0*>(),
                        {"<AddTempUnlockToWardrobe>b__0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::CosmeticsController___c__DisplayClass268_0::__cordl_internal_get_cosmeticID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticID;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController___c__DisplayClass268_0::__cordl_internal_get_cosmeticID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticID;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass268_0::__cordl_internal_set_cosmeticID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticID = value;
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass268_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass268_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController___c__DisplayClass268_0::_AddTempUnlockToWardrobe_b__0(::GlobalNamespace::CosmeticsController_CosmeticItem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass268_0*>(),
                        {"<AddTempUnlockToWardrobe>b__0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GorillaNetworking::CosmeticsController___c__DisplayClass268_0* GorillaNetworking::CosmeticsController___c__DisplayClass268_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController___c__DisplayClass268_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass268_0::CosmeticsController___c__DisplayClass268_0()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass265_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass265_0::*)()>(&::GorillaNetworking::CosmeticsController___c__DisplayClass265_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6d53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass265_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass265_0._ConfirmIndividualCosmeticsSharedGroup_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass265_0::*)(::PlayFab::ClientModels::GetSharedGroupDataResult*)>(&::GorillaNetworking::CosmeticsController___c__DisplayClass265_0::_ConfirmIndividualCosmeticsSharedGroup_b__0)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5c6d544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass265_0*>(),
                        {"<ConfirmIndividualCosmeticsSharedGroup>b__0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetSharedGroupDataResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass265_0._ConfirmIndividualCosmeticsSharedGroup_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass265_0::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::CosmeticsController___c__DisplayClass265_0::_ConfirmIndividualCosmeticsSharedGroup_b__1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c6d8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass265_0*>(),
                        {"<ConfirmIndividualCosmeticsSharedGroup>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::GetUserInventoryResult*& GorillaNetworking::CosmeticsController___c__DisplayClass265_0::__cordl_internal_get_inventory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inventory;
}
constexpr ::PlayFab::ClientModels::GetUserInventoryResult* const& GorillaNetworking::CosmeticsController___c__DisplayClass265_0::__cordl_internal_get_inventory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inventory;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass265_0::__cordl_internal_set_inventory(::PlayFab::ClientModels::GetUserInventoryResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inventory = value;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& GorillaNetworking::CosmeticsController___c__DisplayClass265_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& GorillaNetworking::CosmeticsController___c__DisplayClass265_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass265_0::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::CosmeticsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass265_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass265_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass265_0::_ConfirmIndividualCosmeticsSharedGroup_b__0(::PlayFab::ClientModels::GetSharedGroupDataResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass265_0*>(),
                        {"<ConfirmIndividualCosmeticsSharedGroup>b__0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetSharedGroupDataResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass265_0::_ConfirmIndividualCosmeticsSharedGroup_b__1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass265_0*>(),
                        {"<ConfirmIndividualCosmeticsSharedGroup>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GorillaNetworking::CosmeticsController___c__DisplayClass265_0* GorillaNetworking::CosmeticsController___c__DisplayClass265_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController___c__DisplayClass265_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass265_0::CosmeticsController___c__DisplayClass265_0()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass243_6._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass243_6::*)()>(&::GorillaNetworking::CosmeticsController___c__DisplayClass243_6::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6d440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_6*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass243_6._GetCosmeticsPlayFabCatalogDataInternal_b__11
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController___c__DisplayClass243_6::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController___c__DisplayClass243_6::_GetCosmeticsPlayFabCatalogDataInternal_b__11)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c6d51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_6*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__11", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::ItemInstance*& GorillaNetworking::CosmeticsController___c__DisplayClass243_6::__cordl_internal_get_item()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___item;
}
constexpr ::PlayFab::ClientModels::ItemInstance* const& GorillaNetworking::CosmeticsController___c__DisplayClass243_6::__cordl_internal_get_item() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___item;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass243_6::__cordl_internal_set_item(::PlayFab::ClientModels::ItemInstance*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___item = value;
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass243_6::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_6*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController___c__DisplayClass243_6::_GetCosmeticsPlayFabCatalogDataInternal_b__11(::GlobalNamespace::CosmeticsController_CosmeticItem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_6*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__11", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GorillaNetworking::CosmeticsController___c__DisplayClass243_6* GorillaNetworking::CosmeticsController___c__DisplayClass243_6::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController___c__DisplayClass243_6*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass243_6::CosmeticsController___c__DisplayClass243_6()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass243_5._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass243_5::*)()>(&::GorillaNetworking::CosmeticsController___c__DisplayClass243_5::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6d438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_5*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass243_5._GetCosmeticsPlayFabCatalogDataInternal_b__10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController___c__DisplayClass243_5::*)(::PlayFab::ClientModels::CatalogItem*)>(&::GorillaNetworking::CosmeticsController___c__DisplayClass243_5::_GetCosmeticsPlayFabCatalogDataInternal_b__10)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c6d4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_5*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__10", {}, {::i2c::type_of<::PlayFab::ClientModels::CatalogItem*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BundleData& GorillaNetworking::CosmeticsController___c__DisplayClass243_5::__cordl_internal_get_bundleMapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleMapping;
}
constexpr ::GlobalNamespace::BundleData const& GorillaNetworking::CosmeticsController___c__DisplayClass243_5::__cordl_internal_get_bundleMapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleMapping;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass243_5::__cordl_internal_set_bundleMapping(::GlobalNamespace::BundleData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bundleMapping = value;
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass243_5::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_5*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController___c__DisplayClass243_5::_GetCosmeticsPlayFabCatalogDataInternal_b__10(::PlayFab::ClientModels::CatalogItem*  ci)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_5*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__10", {}, {::i2c::type_of<::PlayFab::ClientModels::CatalogItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ci);
}
inline ::GorillaNetworking::CosmeticsController___c__DisplayClass243_5* GorillaNetworking::CosmeticsController___c__DisplayClass243_5::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController___c__DisplayClass243_5*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass243_5::CosmeticsController___c__DisplayClass243_5()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass243_4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass243_4::*)()>(&::GorillaNetworking::CosmeticsController___c__DisplayClass243_4::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6d430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_4*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass243_4._GetCosmeticsPlayFabCatalogDataInternal_b__8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController___c__DisplayClass243_4::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController___c__DisplayClass243_4::_GetCosmeticsPlayFabCatalogDataInternal_b__8)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c6d4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_4*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__8", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::CosmeticsController___c__DisplayClass243_4::__cordl_internal_get_setItemName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setItemName;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController___c__DisplayClass243_4::__cordl_internal_get_setItemName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setItemName;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass243_4::__cordl_internal_set_setItemName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setItemName = value;
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass243_4::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_4*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController___c__DisplayClass243_4::_GetCosmeticsPlayFabCatalogDataInternal_b__8(::GlobalNamespace::CosmeticsController_CosmeticItem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_4*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__8", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GorillaNetworking::CosmeticsController___c__DisplayClass243_4* GorillaNetworking::CosmeticsController___c__DisplayClass243_4::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController___c__DisplayClass243_4*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass243_4::CosmeticsController___c__DisplayClass243_4()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass243_3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass243_3::*)()>(&::GorillaNetworking::CosmeticsController___c__DisplayClass243_3::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6d428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_3*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass243_3._GetCosmeticsPlayFabCatalogDataInternal_b__7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController___c__DisplayClass243_3::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController___c__DisplayClass243_3::_GetCosmeticsPlayFabCatalogDataInternal_b__7)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c6d478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_3*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__7", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass243_3._GetCosmeticsPlayFabCatalogDataInternal_b__9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController___c__DisplayClass243_3::*)(::PlayFab::ClientModels::CatalogItem*)>(&::GorillaNetworking::CosmeticsController___c__DisplayClass243_3::_GetCosmeticsPlayFabCatalogDataInternal_b__9)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c6d4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_3*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__9", {}, {::i2c::type_of<::PlayFab::ClientModels::CatalogItem*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaNetworking::Store::StoreBundle*& GorillaNetworking::CosmeticsController___c__DisplayClass243_3::__cordl_internal_get_bundleData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleData;
}
constexpr ::GorillaNetworking::Store::StoreBundle* const& GorillaNetworking::CosmeticsController___c__DisplayClass243_3::__cordl_internal_get_bundleData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleData;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass243_3::__cordl_internal_set_bundleData(::GorillaNetworking::Store::StoreBundle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bundleData = value;
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass243_3::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_3*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController___c__DisplayClass243_3::_GetCosmeticsPlayFabCatalogDataInternal_b__7(::GlobalNamespace::CosmeticsController_CosmeticItem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_3*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__7", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool GorillaNetworking::CosmeticsController___c__DisplayClass243_3::_GetCosmeticsPlayFabCatalogDataInternal_b__9(::PlayFab::ClientModels::CatalogItem*  ci)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_3*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__9", {}, {::i2c::type_of<::PlayFab::ClientModels::CatalogItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ci);
}
inline ::GorillaNetworking::CosmeticsController___c__DisplayClass243_3* GorillaNetworking::CosmeticsController___c__DisplayClass243_3::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController___c__DisplayClass243_3*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass243_3::CosmeticsController___c__DisplayClass243_3()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass243_2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass243_2::*)()>(&::GorillaNetworking::CosmeticsController___c__DisplayClass243_2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6d420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass243_2._GetCosmeticsPlayFabCatalogDataInternal_b__6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController___c__DisplayClass243_2::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController___c__DisplayClass243_2::_GetCosmeticsPlayFabCatalogDataInternal_b__6)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c6d468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_2*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__6", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::CosmeticsController___c__DisplayClass243_2::__cordl_internal_get_setItemName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setItemName;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController___c__DisplayClass243_2::__cordl_internal_get_setItemName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setItemName;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass243_2::__cordl_internal_set_setItemName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setItemName = value;
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass243_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController___c__DisplayClass243_2::_GetCosmeticsPlayFabCatalogDataInternal_b__6(::GlobalNamespace::CosmeticsController_CosmeticItem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_2*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__6", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GorillaNetworking::CosmeticsController___c__DisplayClass243_2* GorillaNetworking::CosmeticsController___c__DisplayClass243_2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController___c__DisplayClass243_2*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass243_2::CosmeticsController___c__DisplayClass243_2()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass243_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass243_1::*)()>(&::GorillaNetworking::CosmeticsController___c__DisplayClass243_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6d418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass243_1._GetCosmeticsPlayFabCatalogDataInternal_b__5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController___c__DisplayClass243_1::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController___c__DisplayClass243_1::_GetCosmeticsPlayFabCatalogDataInternal_b__5)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c6d448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_1*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__5", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::CatalogItem*& GorillaNetworking::CosmeticsController___c__DisplayClass243_1::__cordl_internal_get_catalogItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catalogItem;
}
constexpr ::PlayFab::ClientModels::CatalogItem* const& GorillaNetworking::CosmeticsController___c__DisplayClass243_1::__cordl_internal_get_catalogItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catalogItem;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass243_1::__cordl_internal_set_catalogItem(::PlayFab::ClientModels::CatalogItem*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catalogItem = value;
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass243_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController___c__DisplayClass243_1::_GetCosmeticsPlayFabCatalogDataInternal_b__5(::GlobalNamespace::CosmeticsController_CosmeticItem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_1*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__5", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GorillaNetworking::CosmeticsController___c__DisplayClass243_1* GorillaNetworking::CosmeticsController___c__DisplayClass243_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController___c__DisplayClass243_1*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass243_1::CosmeticsController___c__DisplayClass243_1()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass243_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass243_0::*)()>(&::GorillaNetworking::CosmeticsController___c__DisplayClass243_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c683e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass243_0._GetCosmeticsPlayFabCatalogDataInternal_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass243_0::*)(::PlayFab::ClientModels::GetCatalogItemsResult*)>(&::GorillaNetworking::CosmeticsController___c__DisplayClass243_0::_GetCosmeticsPlayFabCatalogDataInternal_b__2)> {
  constexpr static std::size_t size = 0x502c;
  constexpr static std::size_t addrs = 0x5c683ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_0*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__2", {}, {::i2c::type_of<::PlayFab::ClientModels::GetCatalogItemsResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::GetUserInventoryResult*& GorillaNetworking::CosmeticsController___c__DisplayClass243_0::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::PlayFab::ClientModels::GetUserInventoryResult* const& GorillaNetworking::CosmeticsController___c__DisplayClass243_0::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass243_0::__cordl_internal_set_result(::PlayFab::ClientModels::GetUserInventoryResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& GorillaNetworking::CosmeticsController___c__DisplayClass243_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& GorillaNetworking::CosmeticsController___c__DisplayClass243_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass243_0::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::CosmeticsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass243_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass243_0::_GetCosmeticsPlayFabCatalogDataInternal_b__2(::PlayFab::ClientModels::GetCatalogItemsResult*  result2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass243_0*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__2", {}, {::i2c::type_of<::PlayFab::ClientModels::GetCatalogItemsResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result2);
}
inline ::GorillaNetworking::CosmeticsController___c__DisplayClass243_0* GorillaNetworking::CosmeticsController___c__DisplayClass243_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController___c__DisplayClass243_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass243_0::CosmeticsController___c__DisplayClass243_0()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass230_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass230_0::*)()>(&::GorillaNetworking::CosmeticsController___c__DisplayClass230_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c68340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass230_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass230_0._UpdateWornCosmetics_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController___c__DisplayClass230_0::*)(::StringW)>(&::GorillaNetworking::CosmeticsController___c__DisplayClass230_0::_UpdateWornCosmetics_b__0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c68348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass230_0*>(),
                        {"<UpdateWornCosmetics>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaNetworking::CosmeticsController___c__DisplayClass230_0::__cordl_internal_get_localRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaNetworking::CosmeticsController___c__DisplayClass230_0::__cordl_internal_get_localRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRig;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass230_0::__cordl_internal_set_localRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localRig = value;
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass230_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass230_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController___c__DisplayClass230_0::_UpdateWornCosmetics_b__0(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass230_0*>(),
                        {"<UpdateWornCosmetics>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline ::GorillaNetworking::CosmeticsController___c__DisplayClass230_0* GorillaNetworking::CosmeticsController___c__DisplayClass230_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController___c__DisplayClass230_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass230_0::CosmeticsController___c__DisplayClass230_0()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass215_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass215_0::*)()>(&::GorillaNetworking::CosmeticsController___c__DisplayClass215_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c68090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass215_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass215_0._CheckIfMyCosmeticsUpdated_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass215_0::*)(::PlayFab::ClientModels::GetSharedGroupDataResult*)>(&::GorillaNetworking::CosmeticsController___c__DisplayClass215_0::_CheckIfMyCosmeticsUpdated_b__0)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5c68098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass215_0*>(),
                        {"<CheckIfMyCosmeticsUpdated>b__0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetSharedGroupDataResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass215_0._CheckIfMyCosmeticsUpdated_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass215_0::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::CosmeticsController___c__DisplayClass215_0::_CheckIfMyCosmeticsUpdated_b__1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c6831c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass215_0*>(),
                        {"<CheckIfMyCosmeticsUpdated>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& GorillaNetworking::CosmeticsController___c__DisplayClass215_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& GorillaNetworking::CosmeticsController___c__DisplayClass215_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass215_0::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::CosmeticsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController___c__DisplayClass215_0::__cordl_internal_get_itemToBuyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemToBuyID;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController___c__DisplayClass215_0::__cordl_internal_get_itemToBuyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemToBuyID;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass215_0::__cordl_internal_set_itemToBuyID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemToBuyID = value;
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass215_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass215_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass215_0::_CheckIfMyCosmeticsUpdated_b__0(::PlayFab::ClientModels::GetSharedGroupDataResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass215_0*>(),
                        {"<CheckIfMyCosmeticsUpdated>b__0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetSharedGroupDataResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass215_0::_CheckIfMyCosmeticsUpdated_b__1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass215_0*>(),
                        {"<CheckIfMyCosmeticsUpdated>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GorillaNetworking::CosmeticsController___c__DisplayClass215_0* GorillaNetworking::CosmeticsController___c__DisplayClass215_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController___c__DisplayClass215_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass215_0::CosmeticsController___c__DisplayClass215_0()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass213_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass213_0::*)()>(&::GorillaNetworking::CosmeticsController___c__DisplayClass213_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c68078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass213_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass213_0._UnlockItem_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController___c__DisplayClass213_0::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController___c__DisplayClass213_0::_UnlockItem_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c68080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass213_0*>(),
                        {"<UnlockItem>b__0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::CosmeticsController___c__DisplayClass213_0::__cordl_internal_get_itemIdToUnlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemIdToUnlock;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController___c__DisplayClass213_0::__cordl_internal_get_itemIdToUnlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemIdToUnlock;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass213_0::__cordl_internal_set_itemIdToUnlock(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemIdToUnlock = value;
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass213_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass213_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController___c__DisplayClass213_0::_UnlockItem_b__0(::GlobalNamespace::CosmeticsController_CosmeticItem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass213_0*>(),
                        {"<UnlockItem>b__0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GorillaNetworking::CosmeticsController___c__DisplayClass213_0* GorillaNetworking::CosmeticsController___c__DisplayClass213_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController___c__DisplayClass213_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass213_0::CosmeticsController___c__DisplayClass213_0()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass122_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass122_0::*)()>(&::GorillaNetworking::CosmeticsController___c__DisplayClass122_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c67fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass122_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass122_0._BuildCanonicalCollectableOrder_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::CosmeticsController___c__DisplayClass122_0::*)(::GlobalNamespace::CosmeticsController_CosmeticItem, ::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController___c__DisplayClass122_0::_BuildCanonicalCollectableOrder_b__0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c67fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass122_0*>(),
                        {"<BuildCanonicalCollectableOrder>b__0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaNetworking::CosmeticsController___c__DisplayClass122_0::__cordl_internal_get_seriesOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seriesOrder;
}
constexpr bool const& GorillaNetworking::CosmeticsController___c__DisplayClass122_0::__cordl_internal_get_seriesOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seriesOrder;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass122_0::__cordl_internal_set_seriesOrder(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seriesOrder = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController___c__DisplayClass122_0::__cordl_internal_get_parentPlayFabID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentPlayFabID;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController___c__DisplayClass122_0::__cordl_internal_get_parentPlayFabID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentPlayFabID;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass122_0::__cordl_internal_set_parentPlayFabID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentPlayFabID = value;
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass122_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass122_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaNetworking::CosmeticsController___c__DisplayClass122_0::_BuildCanonicalCollectableOrder_b__0(::GlobalNamespace::CosmeticsController_CosmeticItem  a, ::GlobalNamespace::CosmeticsController_CosmeticItem  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass122_0*>(),
                        {"<BuildCanonicalCollectableOrder>b__0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::GorillaNetworking::CosmeticsController___c__DisplayClass122_0* GorillaNetworking::CosmeticsController___c__DisplayClass122_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController___c__DisplayClass122_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass122_0::CosmeticsController___c__DisplayClass122_0()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass118_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c__DisplayClass118_0::*)()>(&::GorillaNetworking::CosmeticsController___c__DisplayClass118_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c67fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass118_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c__DisplayClass118_0._IsOwnedByPlayFabID_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController___c__DisplayClass118_0::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController___c__DisplayClass118_0::_IsOwnedByPlayFabID_b__0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c67fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass118_0*>(),
                        {"<IsOwnedByPlayFabID>b__0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::CosmeticsController___c__DisplayClass118_0::__cordl_internal_get_playFabID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabID;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController___c__DisplayClass118_0::__cordl_internal_get_playFabID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabID;
}
constexpr void GorillaNetworking::CosmeticsController___c__DisplayClass118_0::__cordl_internal_set_playFabID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playFabID = value;
}
inline void GorillaNetworking::CosmeticsController___c__DisplayClass118_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass118_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController___c__DisplayClass118_0::_IsOwnedByPlayFabID_b__0(::GlobalNamespace::CosmeticsController_CosmeticItem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c__DisplayClass118_0*>(),
                        {"<IsOwnedByPlayFabID>b__0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GorillaNetworking::CosmeticsController___c__DisplayClass118_0* GorillaNetworking::CosmeticsController___c__DisplayClass118_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController___c__DisplayClass118_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController___c__DisplayClass118_0::CosmeticsController___c__DisplayClass118_0()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c::*)()>(&::GorillaNetworking::CosmeticsController___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c679dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c._Start_b__170_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::CosmeticsController___c::_Start_b__170_1)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c679e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c*>(),
                        {"<Start>b__170_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c._GetMyDaily_b__239_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::CosmeticsController___c::_GetMyDaily_b__239_1)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5c67a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c*>(),
                        {"<GetMyDaily>b__239_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c._ReconcileBundleRewardsIfNeeded_b__242_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c::*)(::StringW)>(&::GorillaNetworking::CosmeticsController___c::_ReconcileBundleRewardsIfNeeded_b__242_1)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c67ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c*>(),
                        {"<ReconcileBundleRewardsIfNeeded>b__242_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c._GetCosmeticsPlayFabCatalogDataInternal_b__243_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController___c::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController___c::_GetCosmeticsPlayFabCatalogDataInternal_b__243_4)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c67d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__243_4", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController___c._GetCurrencyBalance_b__259_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController___c::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::CosmeticsController___c::_GetCurrencyBalance_b__259_1)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5c67d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c*>(),
                        {"<GetCurrencyBalance>b__259_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaNetworking::CosmeticsController___c::setStaticF___9(::GorillaNetworking::CosmeticsController___c*  value)  {
::cordl_internals::setStaticField<::GorillaNetworking::CosmeticsController___c*, "<>9", ::GorillaNetworking::CosmeticsController___c*>(std::forward<::GorillaNetworking::CosmeticsController___c*>(value));
}
inline ::GorillaNetworking::CosmeticsController___c* GorillaNetworking::CosmeticsController___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaNetworking::CosmeticsController___c*, "<>9", ::GorillaNetworking::CosmeticsController___c*>();
}
inline void GorillaNetworking::CosmeticsController___c::setStaticF___9__170_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__170_1", ::GorillaNetworking::CosmeticsController___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GorillaNetworking::CosmeticsController___c::getStaticF___9__170_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__170_1", ::GorillaNetworking::CosmeticsController___c*>();
}
inline void GorillaNetworking::CosmeticsController___c::setStaticF___9__239_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__239_1", ::GorillaNetworking::CosmeticsController___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GorillaNetworking::CosmeticsController___c::getStaticF___9__239_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__239_1", ::GorillaNetworking::CosmeticsController___c*>();
}
inline void GorillaNetworking::CosmeticsController___c::setStaticF___9__242_1(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__242_1", ::GorillaNetworking::CosmeticsController___c*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GorillaNetworking::CosmeticsController___c::getStaticF___9__242_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__242_1", ::GorillaNetworking::CosmeticsController___c*>();
}
inline void GorillaNetworking::CosmeticsController___c::setStaticF___9__243_4(::System::Predicate_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*, "<>9__243_4", ::GorillaNetworking::CosmeticsController___c*>(std::forward<::System::Predicate_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>(value));
}
inline ::System::Predicate_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* GorillaNetworking::CosmeticsController___c::getStaticF___9__243_4()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*, "<>9__243_4", ::GorillaNetworking::CosmeticsController___c*>();
}
inline void GorillaNetworking::CosmeticsController___c::setStaticF___9__259_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__259_1", ::GorillaNetworking::CosmeticsController___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GorillaNetworking::CosmeticsController___c::getStaticF___9__259_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__259_1", ::GorillaNetworking::CosmeticsController___c*>();
}
inline void GorillaNetworking::CosmeticsController___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController___c::_Start_b__170_1(::PlayFab::PlayFabError*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c*>(),
                        {"<Start>b__170_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void GorillaNetworking::CosmeticsController___c::_GetMyDaily_b__239_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c*>(),
                        {"<GetMyDaily>b__239_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GorillaNetworking::CosmeticsController___c::_ReconcileBundleRewardsIfNeeded_b__242_1(::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c*>(),
                        {"<ReconcileBundleRewardsIfNeeded>b__242_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline bool GorillaNetworking::CosmeticsController___c::_GetCosmeticsPlayFabCatalogDataInternal_b__243_4(::GlobalNamespace::CosmeticsController_CosmeticItem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c*>(),
                        {"<GetCosmeticsPlayFabCatalogDataInternal>b__243_4", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline void GorillaNetworking::CosmeticsController___c::_GetCurrencyBalance_b__259_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController___c*>(),
                        {"<GetCurrencyBalance>b__259_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GorillaNetworking::CosmeticsController___c* GorillaNetworking::CosmeticsController___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController___c*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController___c::CosmeticsController___c()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_OutfitData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_OutfitData::*)()>(&::GorillaNetworking::CosmeticsController_OutfitData::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c668fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_OutfitData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_OutfitData.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_OutfitData::*)()>(&::GorillaNetworking::CosmeticsController_OutfitData::Clear)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c669d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_OutfitData*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::CosmeticsController_OutfitData::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr int32_t const& GorillaNetworking::CosmeticsController_OutfitData::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void GorillaNetworking::CosmeticsController_OutfitData::__cordl_internal_set_version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaNetworking::CosmeticsController_OutfitData::__cordl_internal_get_itemIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemIDs;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaNetworking::CosmeticsController_OutfitData::__cordl_internal_get_itemIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemIDs;
}
constexpr void GorillaNetworking::CosmeticsController_OutfitData::__cordl_internal_set_itemIDs(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemIDs = value;
}
constexpr ::UnityEngine::Vector3& GorillaNetworking::CosmeticsController_OutfitData::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Vector3 const& GorillaNetworking::CosmeticsController_OutfitData::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void GorillaNetworking::CosmeticsController_OutfitData::__cordl_internal_set_color(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
inline void GorillaNetworking::CosmeticsController_OutfitData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_OutfitData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController_OutfitData::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_OutfitData*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::CosmeticsController_OutfitData* GorillaNetworking::CosmeticsController_OutfitData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController_OutfitData*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController_OutfitData::CosmeticsController_OutfitData()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_ValidatedCreatorCode.get_terminalId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::CosmeticsController_ValidatedCreatorCode::*)()>(&::GorillaNetworking::CosmeticsController_ValidatedCreatorCode::get_terminalId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6793c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*>(),
                        {"get_terminalId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_ValidatedCreatorCode.set_terminalId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_ValidatedCreatorCode::*)(::StringW)>(&::GorillaNetworking::CosmeticsController_ValidatedCreatorCode::set_terminalId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c67944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*>(),
                        {"set_terminalId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_ValidatedCreatorCode.get_memberCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::CosmeticsController_ValidatedCreatorCode::*)()>(&::GorillaNetworking::CosmeticsController_ValidatedCreatorCode::get_memberCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6794c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*>(),
                        {"get_memberCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_ValidatedCreatorCode.set_memberCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_ValidatedCreatorCode::*)(::StringW)>(&::GorillaNetworking::CosmeticsController_ValidatedCreatorCode::set_memberCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c67954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*>(),
                        {"set_memberCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_ValidatedCreatorCode.get_groupId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::CosmeticsController_ValidatedCreatorCode::*)()>(&::GorillaNetworking::CosmeticsController_ValidatedCreatorCode::get_groupId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6795c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*>(),
                        {"get_groupId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_ValidatedCreatorCode.set_groupId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_ValidatedCreatorCode::*)(::StringW)>(&::GorillaNetworking::CosmeticsController_ValidatedCreatorCode::set_groupId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c67964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*>(),
                        {"set_groupId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_ValidatedCreatorCode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_ValidatedCreatorCode::*)()>(&::GorillaNetworking::CosmeticsController_ValidatedCreatorCode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6796c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::CosmeticsController_ValidatedCreatorCode::__cordl_internal_get__terminalId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____terminalId_k__BackingField;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController_ValidatedCreatorCode::__cordl_internal_get__terminalId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____terminalId_k__BackingField;
}
constexpr void GorillaNetworking::CosmeticsController_ValidatedCreatorCode::__cordl_internal_set__terminalId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____terminalId_k__BackingField = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController_ValidatedCreatorCode::__cordl_internal_get__memberCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____memberCode_k__BackingField;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController_ValidatedCreatorCode::__cordl_internal_get__memberCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____memberCode_k__BackingField;
}
constexpr void GorillaNetworking::CosmeticsController_ValidatedCreatorCode::__cordl_internal_set__memberCode_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____memberCode_k__BackingField = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController_ValidatedCreatorCode::__cordl_internal_get__groupId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupId_k__BackingField;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController_ValidatedCreatorCode::__cordl_internal_get__groupId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupId_k__BackingField;
}
constexpr void GorillaNetworking::CosmeticsController_ValidatedCreatorCode::__cordl_internal_set__groupId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groupId_k__BackingField = value;
}
inline ::StringW GorillaNetworking::CosmeticsController_ValidatedCreatorCode::get_terminalId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*>(),
                        {"get_terminalId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController_ValidatedCreatorCode::set_terminalId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*>(),
                        {"set_terminalId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GorillaNetworking::CosmeticsController_ValidatedCreatorCode::get_memberCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*>(),
                        {"get_memberCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController_ValidatedCreatorCode::set_memberCode(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*>(),
                        {"set_memberCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GorillaNetworking::CosmeticsController_ValidatedCreatorCode::get_groupId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*>(),
                        {"get_groupId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController_ValidatedCreatorCode::set_groupId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*>(),
                        {"set_groupId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::CosmeticsController_ValidatedCreatorCode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::CosmeticsController_ValidatedCreatorCode* GorillaNetworking::CosmeticsController_ValidatedCreatorCode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController_ValidatedCreatorCode::CosmeticsController_ValidatedCreatorCode()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_IAPRequestBody._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_IAPRequestBody::*)()>(&::GorillaNetworking::CosmeticsController_IAPRequestBody::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c67934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_IAPRequestBody*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::CosmeticsController_IAPRequestBody::__cordl_internal_get_sku()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sku;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController_IAPRequestBody::__cordl_internal_get_sku() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sku;
}
constexpr void GorillaNetworking::CosmeticsController_IAPRequestBody::__cordl_internal_set_sku(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sku = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController_IAPRequestBody::__cordl_internal_get_mothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipId;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController_IAPRequestBody::__cordl_internal_get_mothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipId;
}
constexpr void GorillaNetworking::CosmeticsController_IAPRequestBody::__cordl_internal_set_mothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipId = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController_IAPRequestBody::__cordl_internal_get_mothershipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipToken;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController_IAPRequestBody::__cordl_internal_get_mothershipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipToken;
}
constexpr void GorillaNetworking::CosmeticsController_IAPRequestBody::__cordl_internal_set_mothershipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipToken = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController_IAPRequestBody::__cordl_internal_get_mothershipEnvId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipEnvId;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController_IAPRequestBody::__cordl_internal_get_mothershipEnvId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipEnvId;
}
constexpr void GorillaNetworking::CosmeticsController_IAPRequestBody::__cordl_internal_set_mothershipEnvId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipEnvId = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticsController_IAPRequestBody::__cordl_internal_get_mothershipDeploymentId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipDeploymentId;
}
constexpr ::StringW const& GorillaNetworking::CosmeticsController_IAPRequestBody::__cordl_internal_get_mothershipDeploymentId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipDeploymentId;
}
constexpr void GorillaNetworking::CosmeticsController_IAPRequestBody::__cordl_internal_set_mothershipDeploymentId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipDeploymentId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& GorillaNetworking::CosmeticsController_IAPRequestBody::__cordl_internal_get_customTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customTags;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& GorillaNetworking::CosmeticsController_IAPRequestBody::__cordl_internal_get_customTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customTags;
}
constexpr void GorillaNetworking::CosmeticsController_IAPRequestBody::__cordl_internal_set_customTags(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customTags = value;
}
inline void GorillaNetworking::CosmeticsController_IAPRequestBody::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_IAPRequestBody*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::CosmeticsController_IAPRequestBody* GorillaNetworking::CosmeticsController_IAPRequestBody::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController_IAPRequestBody*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController_IAPRequestBody::CosmeticsController_IAPRequestBody()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.add_onSetActivatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::add_onSetActivatedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c63a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"add_onSetActivatedEvent", {}, {::i2c::type_of<::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.remove_onSetActivatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::remove_onSetActivatedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c63b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"remove_onSetActivatedEvent", {}, {::i2c::type_of<::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.OnSetActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(::GorillaNetworking::CosmeticsController_CosmeticSet*, ::GorillaNetworking::CosmeticsController_CosmeticSet*, ::GlobalNamespace::NetPlayer*)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::OnSetActivated)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c63bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"OnSetActivated", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.get_EmptySet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaNetworking::CosmeticsController_CosmeticSet* (*)()>(&::GorillaNetworking::CosmeticsController_CosmeticSet::get_EmptySet)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5c63bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"get_EmptySet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_CosmeticSet::*)()>(&::GorillaNetworking::CosmeticsController_CosmeticSet::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c63eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(::ArrayW<::StringW>, ::GorillaNetworking::CosmeticsController*)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5c63d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::GorillaNetworking::CosmeticsController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(::ArrayW<int32_t>, ::GorillaNetworking::CosmeticsController*)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::_ctor)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x5c63f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::GorillaNetworking::CosmeticsController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.CopyItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(::GorillaNetworking::CosmeticsController_CosmeticSet*)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::CopyItems)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c642c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"CopyItems", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.CopyItemsIntoEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(::GorillaNetworking::CosmeticsController_CosmeticSet*)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::CopyItemsIntoEmpty)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c64360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"CopyItemsIntoEmpty", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.MergeSets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(::GorillaNetworking::CosmeticsController_CosmeticSet*, ::GorillaNetworking::CosmeticsController_CosmeticSet*)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::MergeSets)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5c64408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"MergeSets", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.MergeInSets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(::GorillaNetworking::CosmeticsController_CosmeticSet*, ::GorillaNetworking::CosmeticsController_CosmeticSet*, ::System::Predicate_1<::StringW>*)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::MergeInSets)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c6453c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"MergeInSets", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::System::Predicate_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.ClearSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::ClearSet)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c64640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"ClearSet", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(::StringW)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::IsActive)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c646b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"IsActive", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.HasItemOfCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(::GlobalNamespace::CosmeticsController_CosmeticCategory)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::HasItemOfCategory)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c64730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"HasItemOfCategory", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticCategory>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.HasItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(::StringW)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::HasItem)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c64794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"HasItem", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.HasAnyItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticsController_CosmeticSet::*)()>(&::GorillaNetworking::CosmeticsController_CosmeticSet::HasAnyItems)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c6481c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"HasAnyItems", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.IsSlotLeftHanded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::CosmeticsController_CosmeticSlots)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::IsSlotLeftHanded)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c6485c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"IsSlotLeftHanded", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.IsSlotRightHanded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::CosmeticsController_CosmeticSlots)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::IsSlotRightHanded)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c64874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"IsSlotRightHanded", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.IsHoldable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::IsHoldable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c6488c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"IsHoldable", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.OppositeSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CosmeticsController_CosmeticSlots (*)(::GlobalNamespace::CosmeticsController_CosmeticSlots)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::OppositeSlot)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c64898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"OppositeSlot", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.SlotPlayerPreferenceName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::CosmeticsController_CosmeticSlots)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::SlotPlayerPreferenceName)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c648b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"SlotPlayerPreferenceName", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.ActivateCosmetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(::GorillaNetworking::CosmeticsController_CosmeticSet*, ::GlobalNamespace::VRRig*, int32_t, ::GorillaNetworking::CosmeticItemRegistry*, ::GlobalNamespace::BodyDockPositions*)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::ActivateCosmetic)> {
  constexpr static std::size_t size = 0x7e8;
  constexpr static std::size_t addrs = 0x5c6494c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"ActivateCosmetic", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GorillaNetworking::CosmeticItemRegistry*>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.ActivateCosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(::GorillaNetworking::CosmeticsController_CosmeticSet*, ::GlobalNamespace::VRRig*, ::GlobalNamespace::BodyDockPositions*, ::GorillaNetworking::CosmeticItemRegistry*)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::ActivateCosmetics)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c65568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"ActivateCosmetics", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions*>(), ::i2c::type_of<::GorillaNetworking::CosmeticItemRegistry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.PopulateCollectionDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaNetworking::CosmeticItemInstance*, ::GlobalNamespace::CosmeticsController_CosmeticItem, ::GlobalNamespace::VRRig*)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::PopulateCollectionDisplay)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x5c65134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"PopulateCollectionDisplay", {}, {::i2c::type_of<::GorillaNetworking::CosmeticItemInstance*>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.RemoveStaleDisplaysForParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*, ::StringW, ::UnityEngine::GameObject*)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::RemoveStaleDisplaysForParent)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5c659d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"RemoveStaleDisplaysForParent", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.FindFirstPickupableVariantRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::GameObject>>*)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::FindFirstPickupableVariantRoot)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5c65608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"FindFirstPickupableVariantRoot", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.FindFirstNonNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::GameObject>>*)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::FindFirstNonNull)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5c657f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"FindFirstNonNull", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.DeactivateAllCosmetcs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(::GlobalNamespace::BodyDockPositions*, ::GlobalNamespace::CosmeticsController_CosmeticItem, ::GorillaNetworking::CosmeticItemRegistry*)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::DeactivateAllCosmetcs)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c65b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"DeactivateAllCosmetcs", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions*>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<::GorillaNetworking::CosmeticItemRegistry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.LoadFromPlayerPreferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(::GorillaNetworking::CosmeticsController*)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::LoadFromPlayerPreferences)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x5c65c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"LoadFromPlayerPreferences", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.ParseSetFromString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(::GorillaNetworking::CosmeticsController*, ::StringW, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::ParseSetFromString)> {
  constexpr static std::size_t size = 0x8e8;
  constexpr static std::size_t addrs = 0x5c66014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"ParseSetFromString", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.ToDisplayNameArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GorillaNetworking::CosmeticsController_CosmeticSet::*)()>(&::GorillaNetworking::CosmeticsController_CosmeticSet::ToDisplayNameArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c66a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"ToDisplayNameArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.ToPackedIDArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::GorillaNetworking::CosmeticsController_CosmeticSet::*)()>(&::GorillaNetworking::CosmeticsController_CosmeticSet::ToPackedIDArray)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5c66b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"ToPackedIDArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.HoldableDisplayNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GorillaNetworking::CosmeticsController_CosmeticSet::*)(bool)>(&::GorillaNetworking::CosmeticsController_CosmeticSet::HoldableDisplayNames)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5c66e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"HoldableDisplayNames", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticsController_CosmeticSet.ToOnRightSideArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (::GorillaNetworking::CosmeticsController_CosmeticSet::*)()>(&::GorillaNetworking::CosmeticsController_CosmeticSet::ToOnRightSideArray)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5c67028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"ToOnRightSideArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem>& GorillaNetworking::CosmeticsController_CosmeticSet::__cordl_internal_get_items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___items;
}
constexpr ::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem> const& GorillaNetworking::CosmeticsController_CosmeticSet::__cordl_internal_get_items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___items;
}
constexpr void GorillaNetworking::CosmeticsController_CosmeticSet::__cordl_internal_set_items(::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___items = value;
}
constexpr ::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*& GorillaNetworking::CosmeticsController_CosmeticSet::__cordl_internal_get_onSetActivatedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSetActivatedEvent;
}
constexpr ::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler* const& GorillaNetworking::CosmeticsController_CosmeticSet::__cordl_internal_get_onSetActivatedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSetActivatedEvent;
}
constexpr void GorillaNetworking::CosmeticsController_CosmeticSet::__cordl_internal_set_onSetActivatedEvent(::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSetActivatedEvent = value;
}
constexpr ::ArrayW<::StringW>& GorillaNetworking::CosmeticsController_CosmeticSet::__cordl_internal_get_returnArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnArray;
}
constexpr ::ArrayW<::StringW> const& GorillaNetworking::CosmeticsController_CosmeticSet::__cordl_internal_get_returnArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnArray;
}
constexpr void GorillaNetworking::CosmeticsController_CosmeticSet::__cordl_internal_set_returnArray(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnArray = value;
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::setStaticF_intArrays(::ArrayW<::ArrayW<int32_t>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<int32_t>>, "intArrays", ::GorillaNetworking::CosmeticsController_CosmeticSet*>(std::forward<::ArrayW<::ArrayW<int32_t>>>(value));
}
inline ::ArrayW<::ArrayW<int32_t>> GorillaNetworking::CosmeticsController_CosmeticSet::getStaticF_intArrays()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<int32_t>>, "intArrays", ::GorillaNetworking::CosmeticsController_CosmeticSet*>();
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::setStaticF__emptySet(::GorillaNetworking::CosmeticsController_CosmeticSet*  value)  {
::cordl_internals::setStaticField<::GorillaNetworking::CosmeticsController_CosmeticSet*, "_emptySet", ::GorillaNetworking::CosmeticsController_CosmeticSet*>(std::forward<::GorillaNetworking::CosmeticsController_CosmeticSet*>(value));
}
inline ::GorillaNetworking::CosmeticsController_CosmeticSet* GorillaNetworking::CosmeticsController_CosmeticSet::getStaticF__emptySet()  {
return ::cordl_internals::getStaticField<::GorillaNetworking::CosmeticsController_CosmeticSet*, "_emptySet", ::GorillaNetworking::CosmeticsController_CosmeticSet*>();
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::setStaticF_nameScratchSpace(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "nameScratchSpace", ::GorillaNetworking::CosmeticsController_CosmeticSet*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> GorillaNetworking::CosmeticsController_CosmeticSet::getStaticF_nameScratchSpace()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "nameScratchSpace", ::GorillaNetworking::CosmeticsController_CosmeticSet*>();
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::add_onSetActivatedEvent(::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"add_onSetActivatedEvent", {}, {::i2c::type_of<::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::remove_onSetActivatedEvent(::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"remove_onSetActivatedEvent", {}, {::i2c::type_of<::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::OnSetActivated(::GorillaNetworking::CosmeticsController_CosmeticSet*  prevSet, ::GorillaNetworking::CosmeticsController_CosmeticSet*  currentSet, ::GlobalNamespace::NetPlayer*  netPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"OnSetActivated", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevSet, currentSet, netPlayer);
}
inline ::GorillaNetworking::CosmeticsController_CosmeticSet* GorillaNetworking::CosmeticsController_CosmeticSet::get_EmptySet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"get_EmptySet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaNetworking::CosmeticsController_CosmeticSet*>(nullptr, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::_ctor(::ArrayW<::StringW>  itemNames, ::GorillaNetworking::CosmeticsController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::GorillaNetworking::CosmeticsController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemNames, controller);
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::_ctor(::ArrayW<int32_t>  itemNamesPacked, ::GorillaNetworking::CosmeticsController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::GorillaNetworking::CosmeticsController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemNamesPacked, controller);
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::CopyItems(::GorillaNetworking::CosmeticsController_CosmeticSet*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"CopyItems", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::CopyItemsIntoEmpty(::GorillaNetworking::CosmeticsController_CosmeticSet*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"CopyItemsIntoEmpty", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::MergeSets(::GorillaNetworking::CosmeticsController_CosmeticSet*  tryOn, ::GorillaNetworking::CosmeticsController_CosmeticSet*  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"MergeSets", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tryOn, current);
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::MergeInSets(::GorillaNetworking::CosmeticsController_CosmeticSet*  playerPref, ::GorillaNetworking::CosmeticsController_CosmeticSet*  tempOverrideSet, ::System::Predicate_1<::StringW>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"MergeInSets", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::System::Predicate_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerPref, tempOverrideSet, predicate);
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::ClearSet(::GlobalNamespace::CosmeticsController_CosmeticItem  nullItem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"ClearSet", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nullItem);
}
inline bool GorillaNetworking::CosmeticsController_CosmeticSet::IsActive(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"IsActive", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool GorillaNetworking::CosmeticsController_CosmeticSet::HasItemOfCategory(::GlobalNamespace::CosmeticsController_CosmeticCategory  category)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"HasItemOfCategory", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticCategory>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, category);
}
inline bool GorillaNetworking::CosmeticsController_CosmeticSet::HasItem(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"HasItem", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool GorillaNetworking::CosmeticsController_CosmeticSet::HasAnyItems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"HasAnyItems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticsController_CosmeticSet::IsSlotLeftHanded(::GlobalNamespace::CosmeticsController_CosmeticSlots  slot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"IsSlotLeftHanded", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, slot);
}
inline bool GorillaNetworking::CosmeticsController_CosmeticSet::IsSlotRightHanded(::GlobalNamespace::CosmeticsController_CosmeticSlots  slot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"IsSlotRightHanded", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, slot);
}
inline bool GorillaNetworking::CosmeticsController_CosmeticSet::IsHoldable(::GlobalNamespace::CosmeticsController_CosmeticItem  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"IsHoldable", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, item);
}
inline ::GlobalNamespace::CosmeticsController_CosmeticSlots GorillaNetworking::CosmeticsController_CosmeticSet::OppositeSlot(::GlobalNamespace::CosmeticsController_CosmeticSlots  slot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"OppositeSlot", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticsController_CosmeticSlots>(nullptr, ___internal_method, slot);
}
inline ::StringW GorillaNetworking::CosmeticsController_CosmeticSet::SlotPlayerPreferenceName(::GlobalNamespace::CosmeticsController_CosmeticSlots  slot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"SlotPlayerPreferenceName", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, slot);
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::ActivateCosmetic(::GorillaNetworking::CosmeticsController_CosmeticSet*  prevSet, ::GlobalNamespace::VRRig*  rig, int32_t  slotIndex, ::GorillaNetworking::CosmeticItemRegistry*  cosmeticsObjectRegistry, ::GlobalNamespace::BodyDockPositions*  bDock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"ActivateCosmetic", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GorillaNetworking::CosmeticItemRegistry*>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevSet, rig, slotIndex, cosmeticsObjectRegistry, bDock);
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::ActivateCosmetics(::GorillaNetworking::CosmeticsController_CosmeticSet*  prevSet, ::GlobalNamespace::VRRig*  rig, ::GlobalNamespace::BodyDockPositions*  bDock, ::GorillaNetworking::CosmeticItemRegistry*  cosmeticsObjectRegistry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"ActivateCosmetics", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions*>(), ::i2c::type_of<::GorillaNetworking::CosmeticItemRegistry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevSet, rig, bDock, cosmeticsObjectRegistry);
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::PopulateCollectionDisplay(::GorillaNetworking::CosmeticItemInstance*  instance, ::GlobalNamespace::CosmeticsController_CosmeticItem  parentItem, ::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"PopulateCollectionDisplay", {}, {::i2c::type_of<::GorillaNetworking::CosmeticItemInstance*>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instance, parentItem, rig);
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::RemoveStaleDisplaysForParent(::GlobalNamespace::VRRig*  rig, ::StringW  parentPlayFabID, ::UnityEngine::GameObject*  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"RemoveStaleDisplaysForParent", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rig, parentPlayFabID, host);
}
inline ::UnityW<::UnityEngine::GameObject> GorillaNetworking::CosmeticsController_CosmeticSet::FindFirstPickupableVariantRoot(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::GameObject>>*  roots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"FindFirstPickupableVariantRoot", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, roots);
}
inline ::UnityW<::UnityEngine::GameObject> GorillaNetworking::CosmeticsController_CosmeticSet::FindFirstNonNull(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::GameObject>>*  roots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"FindFirstNonNull", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, roots);
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::DeactivateAllCosmetcs(::GlobalNamespace::BodyDockPositions*  bDock, ::GlobalNamespace::CosmeticsController_CosmeticItem  nullItem, ::GorillaNetworking::CosmeticItemRegistry*  cosmeticObjectRegistry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"DeactivateAllCosmetcs", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions*>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<::GorillaNetworking::CosmeticItemRegistry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bDock, nullItem, cosmeticObjectRegistry);
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::LoadFromPlayerPreferences(::GorillaNetworking::CosmeticsController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"LoadFromPlayerPreferences", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void GorillaNetworking::CosmeticsController_CosmeticSet::ParseSetFromString(::GorillaNetworking::CosmeticsController*  controller, ::StringW  setString, ::by_ref<::UnityEngine::Vector3>  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"ParseSetFromString", {}, {::i2c::type_of<::GorillaNetworking::CosmeticsController*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, setString, color);
}
inline ::ArrayW<::StringW> GorillaNetworking::CosmeticsController_CosmeticSet::ToDisplayNameArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"ToDisplayNameArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<int32_t> GorillaNetworking::CosmeticsController_CosmeticSet::ToPackedIDArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"ToPackedIDArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> GorillaNetworking::CosmeticsController_CosmeticSet::HoldableDisplayNames(bool  leftHoldables)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"HoldableDisplayNames", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, leftHoldables);
}
inline ::ArrayW<bool> GorillaNetworking::CosmeticsController_CosmeticSet::ToOnRightSideArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticsController_CosmeticSet*>(),
                        {"ToOnRightSideArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(this, ___internal_method);
}
inline ::GorillaNetworking::CosmeticsController_CosmeticSet* GorillaNetworking::CosmeticsController_CosmeticSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController_CosmeticSet*>());
}
inline ::GorillaNetworking::CosmeticsController_CosmeticSet* GorillaNetworking::CosmeticsController_CosmeticSet::New_ctor(::ArrayW<::StringW>  itemNames, ::GorillaNetworking::CosmeticsController*  controller)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController_CosmeticSet*>(itemNames, controller));
}
inline ::GorillaNetworking::CosmeticsController_CosmeticSet* GorillaNetworking::CosmeticsController_CosmeticSet::New_ctor(::ArrayW<int32_t>  itemNamesPacked, ::GorillaNetworking::CosmeticsController*  controller)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticsController_CosmeticSet*>(itemNamesPacked, controller));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet::CosmeticsController_CosmeticSet()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0::*)()>(&::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c66a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0._ParseSetFromString_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0::_ParseSetFromString_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c6774c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0*>(),
                        {"<ParseSetFromString>b__0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0::__cordl_internal_get_item()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___item;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0::__cordl_internal_get_item() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___item;
}
constexpr void GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0::__cordl_internal_set_item(::GlobalNamespace::CosmeticsController_CosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___item = value;
}
inline void GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0::_ParseSetFromString_b__0(::GlobalNamespace::CosmeticsController_CosmeticItem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0*>(),
                        {"<ParseSetFromString>b__0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0* GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass38_0::CosmeticSet_CosmeticsController___c__DisplayClass38_0()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0::*)()>(&::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6600c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0._LoadFromPlayerPreferences_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0::_LoadFromPlayerPreferences_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c6773c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0*>(),
                        {"<LoadFromPlayerPreferences>b__0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0::__cordl_internal_get_item()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___item;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0::__cordl_internal_get_item() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___item;
}
constexpr void GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0::__cordl_internal_set_item(::GlobalNamespace::CosmeticsController_CosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___item = value;
}
inline void GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0::_LoadFromPlayerPreferences_b__0(::GlobalNamespace::CosmeticsController_CosmeticItem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0*>(),
                        {"<LoadFromPlayerPreferences>b__0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0* GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticSet_CosmeticsController___c__DisplayClass37_0::CosmeticSet_CosmeticsController___c__DisplayClass37_0()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler::*)(::System::Object*, ::System::IntPtr)>(&::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5c675dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler::*)(::GorillaNetworking::CosmeticsController_CosmeticSet*, ::GorillaNetworking::CosmeticsController_CosmeticSet*, ::GlobalNamespace::NetPlayer*)>(&::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c676e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*>(),
                    {::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler::*)(::GorillaNetworking::CosmeticsController_CosmeticSet*, ::GorillaNetworking::CosmeticsController_CosmeticSet*, ::GlobalNamespace::NetPlayer*, ::System::AsyncCallback*, ::System::Object*)>(&::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c676fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*>(),
                    {::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler::*)(::System::IAsyncResult*)>(&::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c67730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*>(),
                    {::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler::Invoke(::GorillaNetworking::CosmeticsController_CosmeticSet*  prevSet, ::GorillaNetworking::CosmeticsController_CosmeticSet*  currentSet, ::GlobalNamespace::NetPlayer*  netPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevSet, currentSet, netPlayer);
}
inline ::System::IAsyncResult* GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler::BeginInvoke(::GorillaNetworking::CosmeticsController_CosmeticSet*  prevSet, ::GorillaNetworking::CosmeticsController_CosmeticSet*  currentSet, ::GlobalNamespace::NetPlayer*  netPlayer, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, prevSet, currentSet, netPlayer, callback, object);
}
inline void GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler* GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticSet_CosmeticsController_OnSetActivatedHandler::CosmeticSet_CosmeticsController_OnSetActivatedHandler()   {
}
