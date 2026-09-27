#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderSetManager.hpp"
#include "GlobalNamespace/zzzz__BuilderSetManager_BuilderSetStoreItem_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderSetManager_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceSet_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__BuilderSetManager_BuilderPieceSetInfo_def.hpp"
#include "GlobalNamespace/zzzz__BuilderSetManager_BuilderSetStoreItem_def.hpp"
#include "GlobalNamespace/zzzz__BuilderSetManager_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetCatalogItemsResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetSharedGroupDataResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetUserInventoryResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__PurchaseItemResult_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.get_StartPieceSets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* (::GlobalNamespace::BuilderSetManager::*)()>(&::GlobalNamespace::BuilderSetManager::get_StartPieceSets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57da2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"get_StartPieceSets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.get_hasInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::BuilderSetManager::get_hasInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57da2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"get_hasInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.set_hasInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::BuilderSetManager::set_hasInstance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x57da310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"set_hasInstance", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.GetStarterSetsConcat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BuilderSetManager::*)()>(&::GlobalNamespace::BuilderSetManager::GetStarterSetsConcat)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x57da370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetStarterSetsConcat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.GetAllSetsConcat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BuilderSetManager::*)()>(&::GlobalNamespace::BuilderSetManager::GetAllSetsConcat)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x57da584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetAllSetsConcat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager::*)()>(&::GlobalNamespace::BuilderSetManager::Awake)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x57da798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager::*)()>(&::GlobalNamespace::BuilderSetManager::Init)> {
  constexpr static std::size_t size = 0x12f8;
  constexpr static std::size_t addrs = 0x57da968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.GetGroupUniqueID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BuilderSetManager::*)(::StringW, int32_t)>(&::GlobalNamespace::BuilderSetManager::GetGroupUniqueID)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x57dc1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetGroupUniqueID", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.InitPieceDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager::*)()>(&::GlobalNamespace::BuilderSetManager::InitPieceDictionary)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x57dbccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"InitPieceDictionary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.GetPiecePrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BuilderPiece> (::GlobalNamespace::BuilderSetManager::*)(int32_t)>(&::GlobalNamespace::BuilderSetManager::GetPiecePrefab)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x57dc614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetPiecePrefab", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager::*)()>(&::GlobalNamespace::BuilderSetManager::OnEnable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x57dc7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager::*)()>(&::GlobalNamespace::BuilderSetManager::OnDisable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x57dc84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.MonitorTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::BuilderSetManager::*)()>(&::GlobalNamespace::BuilderSetManager::MonitorTime)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57dbc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"MonitorTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.AddPieceToInfoMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager::*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::BuilderSetManager::AddPieceToInfoMap)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x57dc21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"AddPieceToInfoMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.IsItemIDBuilderItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::BuilderSetManager::IsItemIDBuilderItem)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x57dc8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"IsItemIDBuilderItem", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.OnGotInventoryItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager::*)(::PlayFab::ClientModels::GetUserInventoryResult*, ::PlayFab::ClientModels::GetCatalogItemsResult*)>(&::GlobalNamespace::BuilderSetManager::OnGotInventoryItems)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x57dc91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"OnGotInventoryItems", {}, {::i2c::type_of<::PlayFab::ClientModels::GetUserInventoryResult*>(), ::i2c::type_of<::PlayFab::ClientModels::GetCatalogItemsResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.GetStoreItemFromSetID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem (::GlobalNamespace::BuilderSetManager::*)(int32_t)>(&::GlobalNamespace::BuilderSetManager::GetStoreItemFromSetID)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x57dcf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetStoreItemFromSetID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.GetPieceSetFromID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BuilderPieceSet> (::GlobalNamespace::BuilderSetManager::*)(int32_t)>(&::GlobalNamespace::BuilderSetManager::GetPieceSetFromID)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57dd080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetPieceSetFromID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.GetDisplayGroupFromIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* (::GlobalNamespace::BuilderSetManager::*)(int32_t)>(&::GlobalNamespace::BuilderSetManager::GetDisplayGroupFromIndex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x57dd12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetDisplayGroupFromIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.GetAllPieceSets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* (::GlobalNamespace::BuilderSetManager::*)()>(&::GlobalNamespace::BuilderSetManager::GetAllPieceSets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57dd1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetAllPieceSets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.GetLivePieceSets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* (::GlobalNamespace::BuilderSetManager::*)()>(&::GlobalNamespace::BuilderSetManager::GetLivePieceSets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57dd1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetLivePieceSets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.GetLiveDisplayGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>* (::GlobalNamespace::BuilderSetManager::*)()>(&::GlobalNamespace::BuilderSetManager::GetLiveDisplayGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57dd1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetLiveDisplayGroups", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.GetUnlockedPieceSets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* (::GlobalNamespace::BuilderSetManager::*)()>(&::GlobalNamespace::BuilderSetManager::GetUnlockedPieceSets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57dd1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetUnlockedPieceSets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.GetPermanentSetsForSale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* (::GlobalNamespace::BuilderSetManager::*)()>(&::GlobalNamespace::BuilderSetManager::GetPermanentSetsForSale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57dd1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetPermanentSetsForSale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.GetSeasonalSetsForSale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* (::GlobalNamespace::BuilderSetManager::*)()>(&::GlobalNamespace::BuilderSetManager::GetSeasonalSetsForSale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57dd1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetSeasonalSetsForSale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.IsSetSeasonal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderSetManager::*)(::StringW)>(&::GlobalNamespace::BuilderSetManager::IsSetSeasonal)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x57dd1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"IsSetSeasonal", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.DoesPlayerOwnDisplayGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderSetManager::*)(::Photon::Realtime::Player*, int32_t)>(&::GlobalNamespace::BuilderSetManager::DoesPlayerOwnDisplayGroup)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x57dd338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"DoesPlayerOwnDisplayGroup", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.DoesPlayerOwnPieceSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderSetManager::*)(::Photon::Realtime::Player*, int32_t)>(&::GlobalNamespace::BuilderSetManager::DoesPlayerOwnPieceSet)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x57dd410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"DoesPlayerOwnPieceSet", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.DoesAnyPlayerInRoomOwnPieceSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderSetManager::*)(int32_t)>(&::GlobalNamespace::BuilderSetManager::DoesAnyPlayerInRoomOwnPieceSet)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x57dd750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"DoesAnyPlayerInRoomOwnPieceSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.IsPieceOwnedByRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderSetManager::*)(int32_t, int32_t)>(&::GlobalNamespace::BuilderSetManager::IsPieceOwnedByRoom)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x57dda2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"IsPieceOwnedByRoom", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.IsPieceOwnedLocally
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderSetManager::*)(int32_t, int32_t)>(&::GlobalNamespace::BuilderSetManager::IsPieceOwnedLocally)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x57ddc78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"IsPieceOwnedLocally", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.IsPieceSetOwnedLocally
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderSetManager::*)(int32_t)>(&::GlobalNamespace::BuilderSetManager::IsPieceSetOwnedLocally)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x57ddec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"IsPieceSetOwnedLocally", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.UnlockSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager::*)(int32_t)>(&::GlobalNamespace::BuilderSetManager::UnlockSet)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x57ddfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"UnlockSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.TryPurchaseItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager::*)(int32_t, ::System::Action_1<bool>*)>(&::GlobalNamespace::BuilderSetManager::TryPurchaseItem)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x57de198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"TryPurchaseItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager.CheckIfMyCosmeticsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::BuilderSetManager::*)(::StringW)>(&::GlobalNamespace::BuilderSetManager::CheckIfMyCosmeticsUpdated)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x57de4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"CheckIfMyCosmeticsUpdated", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager::*)()>(&::GlobalNamespace::BuilderSetManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57de554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*& GlobalNamespace::BuilderSetManager::__cordl_internal_get__allPieceSets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allPieceSets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* const& GlobalNamespace::BuilderSetManager::__cordl_internal_get__allPieceSets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allPieceSets;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set__allPieceSets(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allPieceSets = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*& GlobalNamespace::BuilderSetManager::__cordl_internal_get__starterPieceSets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____starterPieceSets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* const& GlobalNamespace::BuilderSetManager::__cordl_internal_get__starterPieceSets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____starterPieceSets;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set__starterPieceSets(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____starterPieceSets = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*& GlobalNamespace::BuilderSetManager::__cordl_internal_get__setsAlwaysForSale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setsAlwaysForSale;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* const& GlobalNamespace::BuilderSetManager::__cordl_internal_get__setsAlwaysForSale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setsAlwaysForSale;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set__setsAlwaysForSale(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setsAlwaysForSale = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*& GlobalNamespace::BuilderSetManager::__cordl_internal_get__seasonalSetsForSale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____seasonalSetsForSale;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* const& GlobalNamespace::BuilderSetManager::__cordl_internal_get__seasonalSetsForSale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____seasonalSetsForSale;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set__seasonalSetsForSale(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____seasonalSetsForSale = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*& GlobalNamespace::BuilderSetManager::__cordl_internal_get_livePieceSets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___livePieceSets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* const& GlobalNamespace::BuilderSetManager::__cordl_internal_get_livePieceSets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___livePieceSets;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set_livePieceSets(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___livePieceSets = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*& GlobalNamespace::BuilderSetManager::__cordl_internal_get_scheduledPieceSets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduledPieceSets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* const& GlobalNamespace::BuilderSetManager::__cordl_internal_get_scheduledPieceSets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduledPieceSets;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set_scheduledPieceSets(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scheduledPieceSets = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*& GlobalNamespace::BuilderSetManager::__cordl_internal_get_liveDisplayGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liveDisplayGroups;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>* const& GlobalNamespace::BuilderSetManager::__cordl_internal_get_liveDisplayGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liveDisplayGroups;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set_liveDisplayGroups(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___liveDisplayGroups = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::BuilderSetManager::__cordl_internal_get_monitor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monitor;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::BuilderSetManager::__cordl_internal_get_monitor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monitor;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set_monitor(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monitor = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*& GlobalNamespace::BuilderSetManager::__cordl_internal_get__allStoreItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allStoreItems;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>* const& GlobalNamespace::BuilderSetManager::__cordl_internal_get__allStoreItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allStoreItems;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set__allStoreItems(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allStoreItems = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*& GlobalNamespace::BuilderSetManager::__cordl_internal_get__unlockedPieceSets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unlockedPieceSets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* const& GlobalNamespace::BuilderSetManager::__cordl_internal_get__unlockedPieceSets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unlockedPieceSets;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set__unlockedPieceSets(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unlockedPieceSets = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*& GlobalNamespace::BuilderSetManager::__cordl_internal_get_displayGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayGroups;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>* const& GlobalNamespace::BuilderSetManager::__cordl_internal_get_displayGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayGroups;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set_displayGroups(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayGroups = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GlobalNamespace::BuilderSetManager::__cordl_internal_get_displayGroupMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayGroupMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GlobalNamespace::BuilderSetManager::__cordl_internal_get_displayGroupMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayGroupMap;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set_displayGroupMap(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayGroupMap = value;
}
constexpr ::StringW& GlobalNamespace::BuilderSetManager::__cordl_internal_get_catalog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catalog;
}
constexpr ::StringW const& GlobalNamespace::BuilderSetManager::__cordl_internal_get_catalog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catalog;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set_catalog(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catalog = value;
}
constexpr ::StringW& GlobalNamespace::BuilderSetManager::__cordl_internal_get_currencyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currencyName;
}
constexpr ::StringW const& GlobalNamespace::BuilderSetManager::__cordl_internal_get_currencyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currencyName;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set_currencyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currencyName = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::BuilderSetManager::__cordl_internal_get_tempStringArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempStringArray;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::BuilderSetManager::__cordl_internal_get_tempStringArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempStringArray;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set_tempStringArray(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempStringArray = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::BuilderSetManager::__cordl_internal_get_OnLiveSetsUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLiveSetsUpdated;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::BuilderSetManager::__cordl_internal_get_OnLiveSetsUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLiveSetsUpdated;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set_OnLiveSetsUpdated(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLiveSetsUpdated = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::BuilderSetManager::__cordl_internal_get_OnOwnedSetsUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOwnedSetsUpdated;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::BuilderSetManager::__cordl_internal_get_OnOwnedSetsUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOwnedSetsUpdated;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set_OnOwnedSetsUpdated(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnOwnedSetsUpdated = value;
}
constexpr bool& GlobalNamespace::BuilderSetManager::__cordl_internal_get_pulledStoreItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pulledStoreItems;
}
constexpr bool const& GlobalNamespace::BuilderSetManager::__cordl_internal_get_pulledStoreItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pulledStoreItems;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set_pulledStoreItems(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pulledStoreItems = value;
}
constexpr bool& GlobalNamespace::BuilderSetManager::__cordl_internal_get_foundCosmetic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foundCosmetic;
}
constexpr bool const& GlobalNamespace::BuilderSetManager::__cordl_internal_get_foundCosmetic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foundCosmetic;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set_foundCosmetic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___foundCosmetic = value;
}
constexpr int32_t& GlobalNamespace::BuilderSetManager::__cordl_internal_get_attempts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attempts;
}
constexpr int32_t const& GlobalNamespace::BuilderSetManager::__cordl_internal_get_attempts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attempts;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set_attempts(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attempts = value;
}
constexpr bool& GlobalNamespace::BuilderSetManager::__cordl_internal_get_hasPieceDictionary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPieceDictionary;
}
constexpr bool const& GlobalNamespace::BuilderSetManager::__cordl_internal_get_hasPieceDictionary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPieceDictionary;
}
constexpr void GlobalNamespace::BuilderSetManager::__cordl_internal_set_hasPieceDictionary(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPieceDictionary = value;
}
inline void GlobalNamespace::BuilderSetManager::setStaticF__setIdToStoreItem(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*, "_setIdToStoreItem", ::GlobalNamespace::BuilderSetManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>* GlobalNamespace::BuilderSetManager::getStaticF__setIdToStoreItem()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*, "_setIdToStoreItem", ::GlobalNamespace::BuilderSetManager*>();
}
inline void GlobalNamespace::BuilderSetManager::setStaticF_pieceSetInfos(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo>*, "pieceSetInfos", ::GlobalNamespace::BuilderSetManager*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo>* GlobalNamespace::BuilderSetManager::getStaticF_pieceSetInfos()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo>*, "pieceSetInfos", ::GlobalNamespace::BuilderSetManager*>();
}
inline void GlobalNamespace::BuilderSetManager::setStaticF_pieceSetInfoMap(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, "pieceSetInfoMap", ::GlobalNamespace::BuilderSetManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* GlobalNamespace::BuilderSetManager::getStaticF_pieceSetInfoMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, "pieceSetInfoMap", ::GlobalNamespace::BuilderSetManager*>();
}
inline void GlobalNamespace::BuilderSetManager::setStaticF_instance(::UnityW<::GlobalNamespace::BuilderSetManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::BuilderSetManager>, "instance", ::GlobalNamespace::BuilderSetManager*>(std::forward<::UnityW<::GlobalNamespace::BuilderSetManager>>(value));
}
inline ::UnityW<::GlobalNamespace::BuilderSetManager> GlobalNamespace::BuilderSetManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::BuilderSetManager>, "instance", ::GlobalNamespace::BuilderSetManager*>();
}
inline void GlobalNamespace::BuilderSetManager::setStaticF__hasInstance_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<hasInstance>k__BackingField", ::GlobalNamespace::BuilderSetManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::BuilderSetManager::getStaticF__hasInstance_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<hasInstance>k__BackingField", ::GlobalNamespace::BuilderSetManager*>();
}
inline void GlobalNamespace::BuilderSetManager::setStaticF_concatStarterSets(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "concatStarterSets", ::GlobalNamespace::BuilderSetManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::BuilderSetManager::getStaticF_concatStarterSets()  {
return ::cordl_internals::getStaticField<::StringW, "concatStarterSets", ::GlobalNamespace::BuilderSetManager*>();
}
inline void GlobalNamespace::BuilderSetManager::setStaticF_concatAllSets(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "concatAllSets", ::GlobalNamespace::BuilderSetManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::BuilderSetManager::getStaticF_concatAllSets()  {
return ::cordl_internals::getStaticField<::StringW, "concatAllSets", ::GlobalNamespace::BuilderSetManager*>();
}
inline void GlobalNamespace::BuilderSetManager::setStaticF_pieceTypes(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "pieceTypes", ::GlobalNamespace::BuilderSetManager*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::BuilderSetManager::getStaticF_pieceTypes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "pieceTypes", ::GlobalNamespace::BuilderSetManager*>();
}
inline void GlobalNamespace::BuilderSetManager::setStaticF_pieceList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*, "pieceList", ::GlobalNamespace::BuilderSetManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* GlobalNamespace::BuilderSetManager::getStaticF_pieceList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*, "pieceList", ::GlobalNamespace::BuilderSetManager*>();
}
inline void GlobalNamespace::BuilderSetManager::setStaticF_pieceTypeToIndex(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, "pieceTypeToIndex", ::GlobalNamespace::BuilderSetManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* GlobalNamespace::BuilderSetManager::getStaticF_pieceTypeToIndex()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, "pieceTypeToIndex", ::GlobalNamespace::BuilderSetManager*>();
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* GlobalNamespace::BuilderSetManager::get_StartPieceSets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"get_StartPieceSets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*>(this, ___internal_method);
}
inline bool GlobalNamespace::BuilderSetManager::get_hasInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"get_hasInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::BuilderSetManager::set_hasInstance(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"set_hasInstance", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW GlobalNamespace::BuilderSetManager::GetStarterSetsConcat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetStarterSetsConcat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BuilderSetManager::GetAllSetsConcat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetAllSetsConcat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderSetManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderSetManager::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BuilderSetManager::GetGroupUniqueID(::StringW  setPlayfabID, int32_t  groupNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetGroupUniqueID", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, setPlayfabID, groupNumber);
}
inline void GlobalNamespace::BuilderSetManager::InitPieceDictionary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"InitPieceDictionary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::BuilderPiece> GlobalNamespace::BuilderSetManager::GetPiecePrefab(int32_t  pieceType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetPiecePrefab", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BuilderPiece>>(this, ___internal_method, pieceType);
}
inline void GlobalNamespace::BuilderSetManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderSetManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::BuilderSetManager::MonitorTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"MonitorTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderSetManager::AddPieceToInfoMap(int32_t  pieceType, int32_t  pieceMaterial, int32_t  setID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"AddPieceToInfoMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceMaterial, setID);
}
inline bool GlobalNamespace::BuilderSetManager::IsItemIDBuilderItem(::StringW  playfabID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"IsItemIDBuilderItem", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, playfabID);
}
inline void GlobalNamespace::BuilderSetManager::OnGotInventoryItems(::PlayFab::ClientModels::GetUserInventoryResult*  inventoryResult, ::PlayFab::ClientModels::GetCatalogItemsResult*  catalogResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"OnGotInventoryItems", {}, {::i2c::type_of<::PlayFab::ClientModels::GetUserInventoryResult*>(), ::i2c::type_of<::PlayFab::ClientModels::GetCatalogItemsResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inventoryResult, catalogResult);
}
inline ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem GlobalNamespace::BuilderSetManager::GetStoreItemFromSetID(int32_t  setID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetStoreItemFromSetID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>(this, ___internal_method, setID);
}
inline ::UnityW<::GlobalNamespace::BuilderPieceSet> GlobalNamespace::BuilderSetManager::GetPieceSetFromID(int32_t  setID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetPieceSetFromID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BuilderPieceSet>>(this, ___internal_method, setID);
}
inline ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* GlobalNamespace::BuilderSetManager::GetDisplayGroupFromIndex(int32_t  groupID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetDisplayGroupFromIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>(this, ___internal_method, groupID);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* GlobalNamespace::BuilderSetManager::GetAllPieceSets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetAllPieceSets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* GlobalNamespace::BuilderSetManager::GetLivePieceSets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetLivePieceSets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>* GlobalNamespace::BuilderSetManager::GetLiveDisplayGroups()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetLiveDisplayGroups", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* GlobalNamespace::BuilderSetManager::GetUnlockedPieceSets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetUnlockedPieceSets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* GlobalNamespace::BuilderSetManager::GetPermanentSetsForSale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetPermanentSetsForSale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>* GlobalNamespace::BuilderSetManager::GetSeasonalSetsForSale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"GetSeasonalSetsForSale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPieceSet>>*>(this, ___internal_method);
}
inline bool GlobalNamespace::BuilderSetManager::IsSetSeasonal(::StringW  playfabID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"IsSetSeasonal", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playfabID);
}
inline bool GlobalNamespace::BuilderSetManager::DoesPlayerOwnDisplayGroup(::Photon::Realtime::Player*  player, int32_t  groupID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"DoesPlayerOwnDisplayGroup", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, groupID);
}
inline bool GlobalNamespace::BuilderSetManager::DoesPlayerOwnPieceSet(::Photon::Realtime::Player*  player, int32_t  setID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"DoesPlayerOwnPieceSet", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, setID);
}
inline bool GlobalNamespace::BuilderSetManager::DoesAnyPlayerInRoomOwnPieceSet(int32_t  setID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"DoesAnyPlayerInRoomOwnPieceSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, setID);
}
inline bool GlobalNamespace::BuilderSetManager::IsPieceOwnedByRoom(int32_t  pieceType, int32_t  materialType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"IsPieceOwnedByRoom", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pieceType, materialType);
}
inline bool GlobalNamespace::BuilderSetManager::IsPieceOwnedLocally(int32_t  pieceType, int32_t  materialType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"IsPieceOwnedLocally", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pieceType, materialType);
}
inline bool GlobalNamespace::BuilderSetManager::IsPieceSetOwnedLocally(int32_t  setID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"IsPieceSetOwnedLocally", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, setID);
}
inline void GlobalNamespace::BuilderSetManager::UnlockSet(int32_t  setID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"UnlockSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setID);
}
inline void GlobalNamespace::BuilderSetManager::TryPurchaseItem(int32_t  setID, ::System::Action_1<bool>*  resultCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"TryPurchaseItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setID, resultCallback);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::BuilderSetManager::CheckIfMyCosmeticsUpdated(::StringW  itemToBuyID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {"CheckIfMyCosmeticsUpdated", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, itemToBuyID);
}
inline void GlobalNamespace::BuilderSetManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderSetManager* GlobalNamespace::BuilderSetManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderSetManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderSetManager::BuilderSetManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager__MonitorTime_d__50._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager__MonitorTime_d__50::*)(int32_t)>(&::GlobalNamespace::BuilderSetManager__MonitorTime_d__50::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57dc878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__MonitorTime_d__50*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager__MonitorTime_d__50.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager__MonitorTime_d__50::*)()>(&::GlobalNamespace::BuilderSetManager__MonitorTime_d__50::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57df220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__MonitorTime_d__50*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager__MonitorTime_d__50.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderSetManager__MonitorTime_d__50::*)()>(&::GlobalNamespace::BuilderSetManager__MonitorTime_d__50::MoveNext)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x57df224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__MonitorTime_d__50*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager__MonitorTime_d__50.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::BuilderSetManager__MonitorTime_d__50::*)()>(&::GlobalNamespace::BuilderSetManager__MonitorTime_d__50::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57df75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__MonitorTime_d__50*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager__MonitorTime_d__50.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager__MonitorTime_d__50::*)()>(&::GlobalNamespace::BuilderSetManager__MonitorTime_d__50::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57df764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__MonitorTime_d__50*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager__MonitorTime_d__50.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::BuilderSetManager__MonitorTime_d__50::*)()>(&::GlobalNamespace::BuilderSetManager__MonitorTime_d__50::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57df79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__MonitorTime_d__50*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BuilderSetManager__MonitorTime_d__50::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::BuilderSetManager__MonitorTime_d__50::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::BuilderSetManager__MonitorTime_d__50::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::BuilderSetManager__MonitorTime_d__50::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::BuilderSetManager__MonitorTime_d__50::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::BuilderSetManager__MonitorTime_d__50::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderSetManager>& GlobalNamespace::BuilderSetManager__MonitorTime_d__50::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::BuilderSetManager> const& GlobalNamespace::BuilderSetManager__MonitorTime_d__50::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::BuilderSetManager__MonitorTime_d__50::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BuilderSetManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::BuilderSetManager__MonitorTime_d__50::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__MonitorTime_d__50*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::BuilderSetManager__MonitorTime_d__50::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__MonitorTime_d__50*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BuilderSetManager__MonitorTime_d__50::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__MonitorTime_d__50*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::BuilderSetManager__MonitorTime_d__50::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__MonitorTime_d__50*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderSetManager__MonitorTime_d__50::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__MonitorTime_d__50*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::BuilderSetManager__MonitorTime_d__50::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__MonitorTime_d__50*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::BuilderSetManager__MonitorTime_d__50* GlobalNamespace::BuilderSetManager__MonitorTime_d__50::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderSetManager__MonitorTime_d__50*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::BuilderSetManager__MonitorTime_d__50::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::BuilderSetManager__MonitorTime_d__50::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::BuilderSetManager__MonitorTime_d__50::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::BuilderSetManager__MonitorTime_d__50::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::BuilderSetManager__MonitorTime_d__50::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BuilderSetManager__MonitorTime_d__50::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderSetManager__MonitorTime_d__50::BuilderSetManager__MonitorTime_d__50()   {
}
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::*)(int32_t)>(&::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57de52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::*)()>(&::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57dedd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::*)()>(&::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::MoveNext)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x57dedd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::*)()>(&::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57df1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::*)()>(&::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57df1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::*)()>(&::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57df218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderSetManager>& GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::BuilderSetManager> const& GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BuilderSetManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::__cordl_internal_get_itemToBuyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemToBuyID;
}
constexpr ::StringW const& GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::__cordl_internal_get_itemToBuyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemToBuyID;
}
constexpr void GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::__cordl_internal_set_itemToBuyID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemToBuyID = value;
}
constexpr ::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0*& GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0* const& GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::__cordl_internal_set___8__1(::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72* GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72::BuilderSetManager__CheckIfMyCosmeticsUpdated_d__72()   {
}
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0::*)()>(&::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57dead0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0._CheckIfMyCosmeticsUpdated_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0::*)(::PlayFab::ClientModels::GetSharedGroupDataResult*)>(&::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0::_CheckIfMyCosmeticsUpdated_b__0)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x57dead8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0*>(),
                        {"<CheckIfMyCosmeticsUpdated>b__0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetSharedGroupDataResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0._CheckIfMyCosmeticsUpdated_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0::_CheckIfMyCosmeticsUpdated_b__1)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x57ded48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0*>(),
                        {"<CheckIfMyCosmeticsUpdated>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderSetManager>& GlobalNamespace::BuilderSetManager___c__DisplayClass72_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::BuilderSetManager> const& GlobalNamespace::BuilderSetManager___c__DisplayClass72_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::BuilderSetManager___c__DisplayClass72_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BuilderSetManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& GlobalNamespace::BuilderSetManager___c__DisplayClass72_0::__cordl_internal_get_itemToBuyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemToBuyID;
}
constexpr ::StringW const& GlobalNamespace::BuilderSetManager___c__DisplayClass72_0::__cordl_internal_get_itemToBuyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemToBuyID;
}
constexpr void GlobalNamespace::BuilderSetManager___c__DisplayClass72_0::__cordl_internal_set_itemToBuyID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemToBuyID = value;
}
inline void GlobalNamespace::BuilderSetManager___c__DisplayClass72_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderSetManager___c__DisplayClass72_0::_CheckIfMyCosmeticsUpdated_b__0(::PlayFab::ClientModels::GetSharedGroupDataResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0*>(),
                        {"<CheckIfMyCosmeticsUpdated>b__0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetSharedGroupDataResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GlobalNamespace::BuilderSetManager___c__DisplayClass72_0::_CheckIfMyCosmeticsUpdated_b__1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0*>(),
                        {"<CheckIfMyCosmeticsUpdated>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0* GlobalNamespace::BuilderSetManager___c__DisplayClass72_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderSetManager___c__DisplayClass72_0::BuilderSetManager___c__DisplayClass72_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::*)()>(&::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57de49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0._TryPurchaseItem_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::*)(::PlayFab::ClientModels::PurchaseItemResult*)>(&::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::_TryPurchaseItem_b__0)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x57de654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0*>(),
                        {"<TryPurchaseItem>b__0", {}, {::i2c::type_of<::PlayFab::ClientModels::PurchaseItemResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0._TryPurchaseItem_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::_TryPurchaseItem_b__1)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x57de964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0*>(),
                        {"<TryPurchaseItem>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderSetManager>& GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::BuilderSetManager> const& GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BuilderSetManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem& GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::__cordl_internal_get_storeItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeItem;
}
constexpr ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem const& GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::__cordl_internal_get_storeItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeItem;
}
constexpr void GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::__cordl_internal_set_storeItem(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storeItem = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::__cordl_internal_get_resultCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultCallback;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::__cordl_internal_get_resultCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultCallback;
}
constexpr void GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::__cordl_internal_set_resultCallback(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultCallback = value;
}
constexpr int32_t& GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::__cordl_internal_get_setID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setID;
}
constexpr int32_t const& GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::__cordl_internal_get_setID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setID;
}
constexpr void GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::__cordl_internal_set_setID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setID = value;
}
inline void GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::_TryPurchaseItem_b__0(::PlayFab::ClientModels::PurchaseItemResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0*>(),
                        {"<TryPurchaseItem>b__0", {}, {::i2c::type_of<::PlayFab::ClientModels::PurchaseItemResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::_TryPurchaseItem_b__1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0*>(),
                        {"<TryPurchaseItem>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0* GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderSetManager___c__DisplayClass71_0::BuilderSetManager___c__DisplayClass71_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0::*)()>(&::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57de190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0._UnlockSet_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0::*)(::GlobalNamespace::BuilderPieceSet*)>(&::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0::_UnlockSet_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x57de628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0*>(),
                        {"<UnlockSet>b__0", {}, {::i2c::type_of<::GlobalNamespace::BuilderPieceSet*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BuilderSetManager___c__DisplayClass70_0::__cordl_internal_get_setID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setID;
}
constexpr int32_t const& GlobalNamespace::BuilderSetManager___c__DisplayClass70_0::__cordl_internal_get_setID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setID;
}
constexpr void GlobalNamespace::BuilderSetManager___c__DisplayClass70_0::__cordl_internal_set_setID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setID = value;
}
inline void GlobalNamespace::BuilderSetManager___c__DisplayClass70_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BuilderSetManager___c__DisplayClass70_0::_UnlockSet_b__0(::GlobalNamespace::BuilderPieceSet*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0*>(),
                        {"<UnlockSet>b__0", {}, {::i2c::type_of<::GlobalNamespace::BuilderPieceSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0* GlobalNamespace::BuilderSetManager___c__DisplayClass70_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderSetManager___c__DisplayClass70_0::BuilderSetManager___c__DisplayClass70_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0::*)()>(&::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57ddfa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0._IsPieceSetOwnedLocally_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0::*)(::GlobalNamespace::BuilderPieceSet*)>(&::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0::_IsPieceSetOwnedLocally_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x57de5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0*>(),
                        {"<IsPieceSetOwnedLocally>b__0", {}, {::i2c::type_of<::GlobalNamespace::BuilderPieceSet*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BuilderSetManager___c__DisplayClass69_0::__cordl_internal_get_setID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setID;
}
constexpr int32_t const& GlobalNamespace::BuilderSetManager___c__DisplayClass69_0::__cordl_internal_get_setID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setID;
}
constexpr void GlobalNamespace::BuilderSetManager___c__DisplayClass69_0::__cordl_internal_set_setID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setID = value;
}
inline void GlobalNamespace::BuilderSetManager___c__DisplayClass69_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BuilderSetManager___c__DisplayClass69_0::_IsPieceSetOwnedLocally_b__0(::GlobalNamespace::BuilderPieceSet*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0*>(),
                        {"<IsPieceSetOwnedLocally>b__0", {}, {::i2c::type_of<::GlobalNamespace::BuilderPieceSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0* GlobalNamespace::BuilderSetManager___c__DisplayClass69_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderSetManager___c__DisplayClass69_0::BuilderSetManager___c__DisplayClass69_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0::*)()>(&::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57dd330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0._IsSetSeasonal_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0::*)(::GlobalNamespace::BuilderPieceSet*)>(&::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0::_IsSetSeasonal_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57de5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0*>(),
                        {"<IsSetSeasonal>b__0", {}, {::i2c::type_of<::GlobalNamespace::BuilderPieceSet*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BuilderSetManager___c__DisplayClass63_0::__cordl_internal_get_playfabID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabID;
}
constexpr ::StringW const& GlobalNamespace::BuilderSetManager___c__DisplayClass63_0::__cordl_internal_get_playfabID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabID;
}
constexpr void GlobalNamespace::BuilderSetManager___c__DisplayClass63_0::__cordl_internal_set_playfabID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playfabID = value;
}
inline void GlobalNamespace::BuilderSetManager___c__DisplayClass63_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BuilderSetManager___c__DisplayClass63_0::_IsSetSeasonal_b__0(::GlobalNamespace::BuilderPieceSet*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0*>(),
                        {"<IsSetSeasonal>b__0", {}, {::i2c::type_of<::GlobalNamespace::BuilderPieceSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0* GlobalNamespace::BuilderSetManager___c__DisplayClass63_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderSetManager___c__DisplayClass63_0::BuilderSetManager___c__DisplayClass63_0()   {
}
